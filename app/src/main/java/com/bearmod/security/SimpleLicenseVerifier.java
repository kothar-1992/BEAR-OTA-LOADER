package com.bearmod.security;

import android.annotation.SuppressLint;
import android.content.Context;
import android.content.SharedPreferences;
import android.os.Build;
import android.util.Log;

import java.io.BufferedReader;
import java.io.File;
import java.io.FileOutputStream;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.InputStream;
import java.nio.charset.StandardCharsets;
import java.util.HashSet;
import java.util.Set;
import java.security.MessageDigest;
import java.security.NoSuchAlgorithmException;
import java.util.HashMap;
import java.util.Map;
import java.util.concurrent.CompletableFuture;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;

import okhttp3.FormBody;
import okhttp3.OkHttpClient;
import okhttp3.Request;
import okhttp3.Response;
import okhttp3.ResponseBody;

/**
 * Simple License Verifier for BearMod
 * Lightweight Java-only implementation without complex APIs or webhooks
 * Focuses on core license verification without interfering with target apps
 */
public class SimpleLicenseVerifier {
    private static final String TAG = "SimpleLicenseVerifier";
    
    // Simple configuration - only what's needed for KeyAuth API v1.3 - CONFIRMED CORRECT
    private static final String OWNER_ID = "yLoA9zcOEF"; // Owner ID - CONFIRMED CORRECT
    private static final String APP_NAME = "com.bearmod"; // Application name - CONFIRMED CORRECT
    private static final String VERSION = "1.3"; // Application version - CONFIRMED CORRECT
    private static final String API_URL = "https://keyauth.win/api/1.3/"; // API URL - CONFIRMED CORRECT
    private static final String APP_HASH = "4f9b15598f6e8bdf07ca39e9914cd3e9"; // Required for hash check - CONFIRMED CORRECT
    @SuppressLint("StaticFieldLeak")
    private static Context context;

    public static Context getContext() {
        return context;
    }

    public static void setContext(Context context) {
        SimpleLicenseVerifier.context = context;
    }

    public interface LicenseCallback {
        void onSuccess(String message);
        void onFailure(String error);
    }

    public interface FileDownloadCallback {
        void onDownloadStarted();
        void onDownloadComplete(String fileName, String filePath);
        void onDownloadFailed(String fileName, String error);
        void onDownloadProgress(String fileName, int progress);
    }

    // CENTRALIZED FILE ID MANAGEMENT - SINGLE SOURCE OF TRUTH
    // All KeyAuth file IDs are managed here. Other classes reference this system.
    // DO NOT duplicate these IDs elsewhere - use getFileId() method instead.
    private static final Map<String, String> MASTER_FILE_IDS = new HashMap<>();
    static {
        // === CORE LIBRARIES ===
        MASTER_FILE_IDS.put("libbearmod.so", "849386");        // Core BearMod library - CONFIRMED CORRECT
        MASTER_FILE_IDS.put("libmundo.so", "386232");          // Mundo core API system - CONFIRMED CORRECT

        // === CONFIGURATION FILES ===
        MASTER_FILE_IDS.put("library_versions.json", "653773"); // OTA version manifest - CONFIRMED CORRECT

        // === SCRIPT COLLECTIONS (ZIP-based delivery - KeyAuth server requirement) ===
        // KeyAuth server only accepts ZIP files for script collections, not individual .js files
        MASTER_FILE_IDS.put("scripts_collection.zip", "753951"); // All scripts in organized ZIP structure - CONFIRMED CORRECT
    }

    // === PUBLIC API FOR CENTRALIZED FILE ID ACCESS ===

    /**
     * Get KeyAuth file ID for any resource (SINGLE SOURCE OF TRUTH)
     * All other classes should use this method instead of maintaining their own file ID maps
     *
     * @param resourceName The name of the resource (library, script, config file)
     * @return KeyAuth file ID or null if not found
     */
    public static String getFileId(String resourceName) {
        return MASTER_FILE_IDS.get(resourceName);
    }

    /**
     * Check if a resource has a registered file ID
     *
     * @param resourceName The name of the resource
     * @return true if file ID exists
     */
    public static boolean hasFileId(String resourceName) {
        return MASTER_FILE_IDS.containsKey(resourceName);
    }

    /**
     * Get all available resource names with file IDs
     *
     * @return Set of all resource names
     */
    public static Set<String> getAvailableResources() {
        return new HashSet<>(MASTER_FILE_IDS.keySet());
    }

    /**
     * Legacy method - uses centralized file ID system
     * @deprecated Use getFileId() directly for better clarity
     */
    @Deprecated
    private static String getLibraryFileId(String libraryName) {
        return getFileId(libraryName);
    }

    // Download cache and executor
    private static final ExecutorService downloadExecutor = Executors.newFixedThreadPool(3);
    private static final Map<String, File> downloadCache = new HashMap<>();
    
    /**
     * Simple license verification - initializes KeyAuth then checks license
     * 
     * @param context Application context
     * @param licenseKey License key to verify
     * @param callback Result callback
     */
    public static void verifyLicense(Context context, String licenseKey, LicenseCallback callback) {
        SimpleLicenseVerifier.context = context;
        Log.d(TAG, "Starting KeyAuth initialization and license verification...");
        
        // Run in background thread to avoid blocking UI
        CompletableFuture.runAsync(() -> {
            try {
                // Create simple HTTP client
                OkHttpClient client = new OkHttpClient.Builder()
                        .connectTimeout(10, java.util.concurrent.TimeUnit.SECONDS)
                        .readTimeout(10, java.util.concurrent.TimeUnit.SECONDS)
                        .build();
                
                // Step 1: Initialize KeyAuth application (required before other functions)
                if (initializeKeyAuth(client)) {
                    callback.onFailure("KeyAuth initialization failed");
                    return;
                }
                
                // Step 2: Generate stable HWID using hardware-based approach
                String hwid = HWID.getHWID();
                
                // Step 3: Verify license
                verifyLicenseWithKeyAuth(client, licenseKey, hwid, callback);
                
            } catch (Exception e) {
                Log.e(TAG, "License verification error", e);
                callback.onFailure("Verification error: " + e.getMessage());
            }
        });
    }
    
    // Session ID storage
    private static String sessionId = null;
    
    /**
     * Initialize KeyAuth application and extract session ID
     */
    private static boolean initializeKeyAuth(OkHttpClient client) {
        try {
            Log.d(TAG, "Initializing KeyAuth application...");
            
            // KeyAuth API v1.3 initialization request - CORRECTED FORMAT
            FormBody formBody = new FormBody.Builder()
                    .add("type", "init")
                    .add("name", APP_NAME)
                    .add("ownerid", OWNER_ID)
                    .add("ver", VERSION)
                    .add("hash", APP_HASH)
                    .build();

            Request request = new Request.Builder()
                    .url(API_URL)
                    .post(formBody)
                    .addHeader("Content-Type", "application/x-www-form-urlencoded")
                    .addHeader("User-Agent", "BearMod/1.0")
                    .build();
            
            try (Response response = client.newCall(request).execute()) {
                if (response.isSuccessful()) {
                    String responseBody = response.body().string();
                    Log.d(TAG, "KeyAuth init response: " + responseBody);
                    
                    boolean success = responseBody.contains("\"success\":true") || 
                                     responseBody.contains("\"success\": true");
                    
                    if (success) {
                        // Extract session ID from response
                        sessionId = extractSessionId(responseBody);
                        if (sessionId != null) {
                            Log.d(TAG, "Auth initialization successful, session ID: " + sessionId.substring(0, Math.min(8, sessionId.length())) + "...");
                            return false;
                        } else {
                            Log.e(TAG, "Auth initialization failed: No session ID in response");
                            return true;
                        }
                    } else {
                        String errorMsg = extractErrorMessage(responseBody);
                        Log.e(TAG, "Auth initialization failed: " + errorMsg);
                        return true;
                    }
                } else {
                    Log.e(TAG, "Auth init failed: HTTP " + response.code());
                    return true;
                }
            }
            
        } catch (Exception e) {
            Log.e(TAG, "Auth initialization exception", e);
            return true;
        }
    }
    
    /**
     * Verify license with KeyAuth (after initialization, using session ID)
     */
    private static void verifyLicenseWithKeyAuth(OkHttpClient client, String licenseKey, String hwid, LicenseCallback callback) {
        try {
            Log.d(TAG, "Verifying license with KeyAuth...");
            
            if (sessionId == null) {
                callback.onFailure("No session ID available - initialization may have failed");
                return;
            }
            
            // KeyAuth API v1.3 license verification request - CORRECTED FORMAT
            FormBody formBody = new FormBody.Builder()
                    .add("type", "license")
                    .add("key", licenseKey)
                    .add("hwid", hwid)
                    .add("sessionid", sessionId)  // Required for API v1.3
                    .add("name", APP_NAME)
                    .add("ownerid", OWNER_ID)
                    .add("ver", VERSION)
                    .build();

            Request request = new Request.Builder()
                    .url(API_URL)
                    .post(formBody)
                    .addHeader("Content-Type", "application/x-www-form-urlencoded")
                    .addHeader("User-Agent", "BearMod/1.0")
                    .build();
            
            try (Response response = client.newCall(request).execute()) {
                if (response.isSuccessful()) {
                    String responseBody = response.body().string();
                    Log.d(TAG, "License verification response: " + responseBody);
                    
                    boolean isValid = responseBody.contains("\"success\":true") || 
                                     responseBody.contains("\"success\": true");
                    
                    if (isValid) {
                        callback.onSuccess("License verified successfully");
                    } else {
                        String errorMsg = extractErrorMessage(responseBody);
                        callback.onFailure("License verification failed: " + errorMsg);
                    }
                } else {
                    callback.onFailure("Network error: " + response.code());
                }
            }
            
        } catch (Exception e) {
            Log.e(TAG, "License verification exception", e);
            callback.onFailure("License verification error: " + e.getMessage());
        }
    }
    
    /**
     * Generate stable hardware ID for license verification
     * Uses persistent device identifiers that survive app reinstallation
     */
    private static String generateSimpleHWID(Context context) {
        try {
            // Try to get cached HWID first (survives reinstallation)
            String cachedHwid = getCachedHWID(context);
            if (cachedHwid != null && !cachedHwid.isEmpty()) {
                Log.d(TAG, "Using cached HWID (survives reinstallation)");
                return cachedHwid;
            }

            // Generate new stable HWID
            StringBuilder hwid = new StringBuilder();

            // Use stable device identifiers that don't change on reinstall
            hwid.append(Build.MODEL).append("-");
            hwid.append(Build.MANUFACTURER).append("-");
            hwid.append(Build.DEVICE).append("-");
            hwid.append(Build.BOARD).append("-");
            hwid.append(Build.BRAND).append("-");

            // Use hardware serial if available (API 26+)
            try {
                hwid.append(Build.getSerial()).append("-");
            } catch (SecurityException e) {
                Log.d(TAG, "Serial access denied, using fallback");
                hwid.append("SERIAL_DENIED").append("-");
            }

            // Add CPU info for additional uniqueness
            hwid.append(Build.HARDWARE).append("-");
            // Use SUPPORTED_ABIS[0] instead of deprecated CPU_ABI
            if (Build.SUPPORTED_ABIS.length > 0) {
                hwid.append(Build.SUPPORTED_ABIS[0]).append("-");
            } else {
                hwid.append("unknown-abi").append("-");
            }

            // Generate MD5 hash for consistent length
            MessageDigest md = MessageDigest.getInstance("MD5");
            byte[] hashBytes = md.digest(hwid.toString().getBytes());

            StringBuilder result = new StringBuilder();
            for (byte b : hashBytes) {
                result.append(String.format("%02x", b));
            }

            String finalHwid = result.toString();

            // Cache the HWID for future use
            cacheHWID(context, finalHwid);

            Log.d(TAG, "Generated new stable HWID");
            return finalHwid;

        } catch (NoSuchAlgorithmException e) {
            Log.e(TAG, "MD5 not available", e);
            // Fallback to simple string hash
            String fallback = String.valueOf(Math.abs((Build.MODEL + Build.MANUFACTURER + Build.DEVICE).hashCode()));
            cacheHWID(context, fallback);
            return fallback;
        }
    }
    
    /**
     * Extract session ID from KeyAuth init response
     */
    private static String extractSessionId(String responseBody) {
        try {
            // Extract session ID from JSON response
            if (responseBody.contains("\"sessionid\":")) {
                int start = responseBody.indexOf("\"sessionid\":\"") + 13;
                int end = responseBody.indexOf("\"", start);
                if (start > 12 && end > start) {
                    return responseBody.substring(start, end);
                }
            }
            return null;
        } catch (Exception e) {
            Log.e(TAG, "Failed to extract session ID", e);
            return null;
        }
    }
    
    /**
     * Extract error message from KeyAuth response
     */
    private static String extractErrorMessage(String responseBody) {
        try {
            // Simple error message extraction
            if (responseBody.contains("\"message\":")) {
                int start = responseBody.indexOf("\"message\":\"") + 11;
                int end = responseBody.indexOf("\"", start);
                if (start > 10 && end > start) {
                    return responseBody.substring(start, end);
                }
            }
            return "Unknown error";
        } catch (Exception e) {
            return "Unknown error";
        }
    }
    
    /**
     * Quick synchronous license check (for cases where you need immediate result)
     * Note: This blocks the calling thread, use sparingly and not on UI thread
     */
    public static boolean quickLicenseCheck(Context context, String licenseKey) {
        try {
            OkHttpClient client = new OkHttpClient.Builder()
                    .connectTimeout(5, java.util.concurrent.TimeUnit.SECONDS)
                    .readTimeout(5, java.util.concurrent.TimeUnit.SECONDS)
                    .build();
            
            // Step 1: Initialize KeyAuth (required)
            if (initializeKeyAuth(client)) {
                Log.e(TAG, "Quick license check failed: KeyAuth initialization failed");
                return false;
            }
            
            // Step 2: Verify license
            String hwid = HWID.getHWID();
            
            if (sessionId == null) {
                Log.e(TAG, "Quick license check failed: No session ID available");
                return false;
            }
            
            // KeyAuth API v1.3 license verification request - CORRECTED FORMAT
            FormBody formBody = new FormBody.Builder()
                    .add("type", "license")
                    .add("key", licenseKey)
                    .add("hwid", hwid)
                    .add("sessionid", sessionId)  // Required for API v1.3
                    .add("name", APP_NAME)
                    .add("ownerid", OWNER_ID)
                    .add("ver", VERSION)
                    .build();

            Request request = new Request.Builder()
                    .url(API_URL)
                    .post(formBody)
                    .addHeader("Content-Type", "application/x-www-form-urlencoded")
                    .addHeader("User-Agent", "BearMod/1.0")
                    .build();
            
            try (Response response = client.newCall(request).execute()) {
                if (response.isSuccessful()) {
                    String responseBody = response.body().string();
                    return responseBody.contains("\"success\":true") || 
                           responseBody.contains("\"success\": true");
                }
            }
        } catch (Exception e) {
            Log.e(TAG, "Quick license check failed", e);
        }
        return false;
    }
    
    /**
     * Cache HWID in multiple persistent locations to survive app reinstallation
     */
    private static void cacheHWID(Context context, String hwid) {
        try {
            // Method 1: SharedPreferences (survives app updates but not uninstall)
            SharedPreferences prefs = context.getSharedPreferences("device_info", Context.MODE_PRIVATE);
            prefs.edit().putString("cached_hwid", hwid).apply();

            // Method 2: External storage cache (survives uninstall if permissions allow)
            try {
                File externalDir = context.getExternalFilesDir(null);
                if (externalDir != null) {
                    File hwidFile = new File(externalDir, ".device_cache");
                    try (FileWriter writer = new FileWriter(hwidFile)) {
                        writer.write(hwid);
                    }
                }
            } catch (Exception e) {
                Log.d(TAG, "External HWID cache failed: " + e.getMessage());
            }

            // Method 3: Internal app directory (backup method)
            try {
                File internalDir = new File(context.getFilesDir(), ".cache");
                if (!internalDir.exists()) {
                    internalDir.mkdirs();
                }
                File hwidFile = new File(internalDir, "device_id");
                try (FileWriter writer = new FileWriter(hwidFile)) {
                    writer.write(hwid);
                }
            } catch (Exception e) {
                Log.d(TAG, "Internal HWID cache failed: " + e.getMessage());
            }

            Log.d(TAG, "HWID cached successfully");

        } catch (Exception e) {
            Log.e(TAG, "Failed to cache HWID", e);
        }
    }

    /**
     * Retrieve cached HWID from persistent storage
     */
    private static String getCachedHWID(Context context) {
        try {
            // Method 1: Try SharedPreferences first
            SharedPreferences prefs = context.getSharedPreferences("device_info", Context.MODE_PRIVATE);
            String cachedHwid = prefs.getString("cached_hwid", null);
            if (cachedHwid != null && !cachedHwid.isEmpty()) {
                Log.d(TAG, "Retrieved HWID from SharedPreferences");
                return cachedHwid;
            }

            // Method 2: Try external storage
            try {
                File externalDir = context.getExternalFilesDir(null);
                if (externalDir != null) {
                    File hwidFile = new File(externalDir, ".device_cache");
                    if (hwidFile.exists()) {
                        try (BufferedReader reader = new BufferedReader(new FileReader(hwidFile))) {
                            String hwid = reader.readLine();
                            if (hwid != null && !hwid.isEmpty()) {
                                Log.d(TAG, "Retrieved HWID from external storage");
                                // Re-cache in SharedPreferences for faster access
                                prefs.edit().putString("cached_hwid", hwid).apply();
                                return hwid;
                            }
                        }
                    }
                }
            } catch (Exception e) {
                Log.d(TAG, "External HWID retrieval failed: " + e.getMessage());
            }

            // Method 3: Try internal app directory
            try {
                File internalDir = new File(context.getFilesDir(), ".cache");
                File hwidFile = new File(internalDir, "device_id");
                if (hwidFile.exists()) {
                    try (BufferedReader reader = new BufferedReader(new FileReader(hwidFile))) {
                        String hwid = reader.readLine();
                        if (hwid != null && !hwid.isEmpty()) {
                            Log.d(TAG, "Retrieved HWID from internal storage");
                            // Re-cache in SharedPreferences for faster access
                            prefs.edit().putString("cached_hwid", hwid).apply();
                            return hwid;
                        }
                    }
                }
            } catch (Exception e) {
                Log.d(TAG, "Internal HWID retrieval failed: " + e.getMessage());
            }

            Log.d(TAG, "No cached HWID found");
            return null;

        } catch (Exception e) {
            Log.e(TAG, "Failed to retrieve cached HWID", e);
            return null;
        }
    }

    /**
     * Clear cached HWID and force regeneration (for debugging/support)
     */
    public static void resetHWID(Context context) {
        try {
            // Clear SharedPreferences
            SharedPreferences prefs = context.getSharedPreferences("device_info", Context.MODE_PRIVATE);
            prefs.edit().remove("cached_hwid").apply();

            // Clear external storage cache
            try {
                File externalDir = context.getExternalFilesDir(null);
                if (externalDir != null) {
                    File hwidFile = new File(externalDir, ".device_cache");
                    if (hwidFile.exists()) {
                        hwidFile.delete();
                    }
                }
            } catch (Exception e) {
                Log.d(TAG, "External HWID cache clear failed: " + e.getMessage());
            }

            // Clear internal cache
            try {
                File internalDir = new File(context.getFilesDir(), ".cache");
                File hwidFile = new File(internalDir, "device_id");
                if (hwidFile.exists()) {
                    hwidFile.delete();
                }
            } catch (Exception e) {
                Log.d(TAG, "Internal HWID cache clear failed: " + e.getMessage());
            }

            Log.d(TAG, "HWID cache cleared - will regenerate on next access");

        } catch (Exception e) {
            Log.e(TAG, "Failed to reset HWID", e);
        }
    }

    /**
     * Get the generated HWID for this device (for debugging/logging)
     */
    public static String getDeviceHWID(Context context) {
        return HWID.getHWID();
    }

    /**
     * Download file from KeyAuth using existing session
     *
     * @param context Application context
     * @param fileName Name of the file to download (must exist in LIBRARY_FILE_IDS)
     * @param callback Download progress callback
     */
    public static void downloadFile(Context context, String fileName, FileDownloadCallback callback) {
        Log.d(TAG, "Starting KeyAuth file download for: " + fileName);

        // Check if file is already cached
        synchronized (downloadCache) {
            File cachedFile = downloadCache.get(fileName);
            if (cachedFile != null && cachedFile.exists()) {
                Log.d(TAG, "File already cached: " + fileName);
                callback.onDownloadComplete(fileName, cachedFile.getAbsolutePath());
                return;
            }
        }

        // Get file ID from mapping
        String fileId = MASTER_FILE_IDS.get(fileName);
        if (fileId == null) {
            callback.onDownloadFailed(fileName, "File not found in mapping: " + fileName);
            return;
        }

        // Run download in background thread
        downloadExecutor.execute(() -> {
            try {
                callback.onDownloadStarted();

                // Ensure we have a valid session
                if (sessionId == null) {
                    Log.w(TAG, "No session ID available, initializing KeyAuth...");
                    OkHttpClient client = new OkHttpClient.Builder()
                            .connectTimeout(10, java.util.concurrent.TimeUnit.SECONDS)
                            .readTimeout(30, java.util.concurrent.TimeUnit.SECONDS)
                            .build();

                    if (initializeKeyAuth(client)) {
                        callback.onDownloadFailed(fileName, "Failed to initialize KeyAuth session");
                        return;
                    }
                }

                // Download the file
                File downloadedFile = performFileDownload(context, fileName, fileId, callback);
                if (downloadedFile != null) {
                    // Cache the downloaded file
                    synchronized (downloadCache) {
                        downloadCache.put(fileName, downloadedFile);
                    }
                    callback.onDownloadComplete(fileName, downloadedFile.getAbsolutePath());
                } else {
                    callback.onDownloadFailed(fileName, "Download failed for: " + fileName);
                }

            } catch (Exception e) {
                Log.e(TAG, "File download error for " + fileName, e);
                callback.onDownloadFailed(fileName, "Download error: " + e.getMessage());
            }
        });
    }

    /**
     * Perform the actual file download from KeyAuth
     */
    private static File performFileDownload(Context context, String fileName, String fileId, FileDownloadCallback callback) {
        try {
            Log.d(TAG, "Downloading file: " + fileName + " with ID: " + fileId);

            OkHttpClient client = new OkHttpClient.Builder()
                    .connectTimeout(10, java.util.concurrent.TimeUnit.SECONDS)
                    .readTimeout(60, java.util.concurrent.TimeUnit.SECONDS)
                    .build();

            // Build KeyAuth file download request
            String downloadUrl = API_URL + "?type=file&fileid=" + fileId +
                               "&sessionid=" + sessionId + "&name=" + APP_NAME + "&ownerid=" + OWNER_ID;

            Request request = new Request.Builder()
                    .url(downloadUrl)
                    .addHeader("User-Agent", "BearMod/1.0")
                    .build();

            try (Response response = client.newCall(request).execute()) {
                if (!response.isSuccessful()) {
                    Log.e(TAG, "Download failed: HTTP " + response.code());
                    return null;
                }

                ResponseBody body = response.body();

                // Create secure download directory
                File downloadDir = new File(context.getFilesDir(), "keyauth_downloads");
                if (!downloadDir.exists()) {
                    downloadDir.mkdirs();
                }

                // Create output file
                File outputFile = new File(downloadDir, fileName);

                // Download with progress tracking
                long totalBytes = body.contentLength();
                long downloadedBytes = 0;

                try (InputStream inputStream = body.byteStream();
                     FileOutputStream outputStream = new FileOutputStream(outputFile)) {

                    byte[] buffer = new byte[8192];
                    int bytesRead;

                    while ((bytesRead = inputStream.read(buffer)) != -1) {
                        outputStream.write(buffer, 0, bytesRead);
                        downloadedBytes += bytesRead;

                        // Report progress
                        if (totalBytes > 0) {
                            int progress = (int) ((downloadedBytes * 100) / totalBytes);
                            callback.onDownloadProgress(fileName, progress);
                        }
                    }

                    outputStream.flush();
                }

                Log.d(TAG, "File downloaded successfully: " + outputFile.getAbsolutePath());
                return outputFile;

            }

        } catch (Exception e) {
            Log.e(TAG, "Error downloading file: " + fileName, e);
            return null;
        }
    }

    /**
     * Check if a file is already downloaded and cached
     */
    public static boolean isFileDownloaded(String fileName) {
        synchronized (downloadCache) {
            File cachedFile = downloadCache.get(fileName);
            return cachedFile != null && cachedFile.exists();
        }
    }

    /**
     * Get cached file if available
     */
    public static File getCachedFile(String fileName) {
        synchronized (downloadCache) {
            File cachedFile = downloadCache.get(fileName);
            if (cachedFile != null && cachedFile.exists()) {
                return cachedFile;
            }
            return null;
        }
    }

    /**
     * Clear download cache
     */
    public static void clearDownloadCache() {
        synchronized (downloadCache) {
            downloadCache.clear();
        }
    }

    /**
     * Download file using dynamic file ID (for version-based updates)
     * @param context Application context
     * @param fileName Name of the file to download
     * @param fileId Dynamic file ID from version manifest
     * @param callback Download progress callback
     */
    public static void downloadFileWithId(Context context, String fileName, String fileId, FileDownloadCallback callback) {
        Log.d(TAG, "Starting version-aware KeyAuth file download for: " + fileName + " (ID: " + fileId + ")");

        // Check if file is already cached
        synchronized (downloadCache) {
            File cachedFile = downloadCache.get(fileName);
            if (cachedFile != null && cachedFile.exists()) {
                Log.d(TAG, "File already cached: " + fileName);
                callback.onDownloadComplete(fileName, cachedFile.getAbsolutePath());
                return;
            }
        }

        // Download using provided file ID
        downloadExecutor.execute(() -> {
            try {
                callback.onDownloadStarted();

                // Create download directory
                File downloadDir = new File(context.getFilesDir(), "keyauth_downloads");
                if (!downloadDir.exists()) {
                    downloadDir.mkdirs();
                }

                File outputFile = new File(downloadDir, fileName);

                // Build KeyAuth download URL with dynamic file ID
                String downloadUrl = String.format(
                    "https://keyauth.win/api/1.3/?type=file&fileid=%s&sessionid=%s&name=%s&ownerid=%s",
                    fileId, sessionId, fileName, OWNER_ID
                );

                Log.d(TAG, "Downloading from: " + downloadUrl);

                // Create HTTP client for download
                OkHttpClient client = new OkHttpClient.Builder()
                    .connectTimeout(10, java.util.concurrent.TimeUnit.SECONDS)
                    .readTimeout(60, java.util.concurrent.TimeUnit.SECONDS)
                    .build();

                // Execute download
                Request request = new Request.Builder()
                    .url(downloadUrl)
                    .build();

                try (Response response = client.newCall(request).execute()) {
                    if (response.isSuccessful()) {
                        // Save file
                        try (FileOutputStream fos = new FileOutputStream(outputFile)) {
                            fos.write(response.body().bytes());
                        }

                        // Cache the file
                        synchronized (downloadCache) {
                            downloadCache.put(fileName, outputFile);
                        }

                        Log.d(TAG, "File downloaded successfully: " + outputFile.getAbsolutePath());
                        callback.onDownloadComplete(fileName, outputFile.getAbsolutePath());

                    } else {
                        String error = "HTTP " + response.code() + ": " + response.message();
                        Log.e(TAG, "Download failed: " + error);
                        callback.onDownloadFailed(fileName, error);
                    }
                }

            } catch (Exception e) {
                Log.e(TAG, "Error downloading file: " + fileName, e);
                callback.onDownloadFailed(fileName, e.getMessage());
            }
        });
    }

    /**
     * Get all available file IDs for download
     */
    public static Map<String, String> getAvailableFiles() {
        return new HashMap<>(MASTER_FILE_IDS);
    }

    /**
     * Generate KeyAuth hash for g_Token/g_Auth validation in main.cpp
     * This method is called from native code to create a consistent hash
     * that will be used for both g_Token and g_Auth variables.
     *
     * @param context Application context
     * @param userKey License key provided by user
     * @param hwid Hardware ID generated by native code
     * @return Generated hash string for authentication validation, null on failure
     */
    public static String getKeyAuthHash(Context context, String userKey, String hwid) {
        try {
            Log.d(TAG, "Generating KeyAuth hash for authentication validation");

            // Validate input parameters
            if (context == null || userKey == null || hwid == null) {
                Log.e(TAG, "getKeyAuthHash: Invalid input parameters");
                return null;
            }

            if (userKey.trim().isEmpty() || hwid.trim().isEmpty()) {
                Log.e(TAG, "getKeyAuthHash: Empty input parameters");
                return null;
            }

            // Try to get stored KeyAuth token first
            SharedPreferences prefs = context.getSharedPreferences(context.getPackageName(), Context.MODE_PRIVATE);
            String storedToken = prefs.getString("KEYAUTH_TOKEN", null);

            // Build hash components using KeyAuth token if available, otherwise use license key
            StringBuilder hashInput = new StringBuilder();

            if (storedToken != null && !storedToken.trim().isEmpty() && !storedToken.equals("null")) {
                // Use stored KeyAuth token for hash generation (preferred method)
                Log.d(TAG, "Using stored KeyAuth token for hash generation");
                hashInput.append("BEARMOD-");
                hashInput.append(storedToken);
                hashInput.append("-");
                hashInput.append(hwid);
                hashInput.append("-");
                hashInput.append(APP_NAME);
                hashInput.append("-");
                hashInput.append(OWNER_ID);
            } else {
                // Fallback to license key based hash (when token not available)
                Log.d(TAG, "Using license key for hash generation (fallback)");
                hashInput.append("BEARMOD-");
                hashInput.append(userKey);
                hashInput.append("-");
                hashInput.append(hwid);
                hashInput.append("-");
                hashInput.append(APP_NAME);
                hashInput.append("-");
                hashInput.append("KEYAUTH_FALLBACK");
            }

            // Generate MD5 hash for consistent authentication
            MessageDigest md = MessageDigest.getInstance("MD5");
            byte[] hashBytes = md.digest(hashInput.toString().getBytes(StandardCharsets.UTF_8));

            // Convert to hex string
            StringBuilder hexString = new StringBuilder();
            for (byte b : hashBytes) {
                String hex = Integer.toHexString(0xff & b);
                if (hex.length() == 1) {
                    hexString.append('0');
                }
                hexString.append(hex);
            }

            String finalHash = hexString.toString();
            Log.d(TAG, "KeyAuth hash generated successfully (length: " + finalHash.length() + ")");

            return finalHash;

        } catch (NoSuchAlgorithmException e) {
            Log.e(TAG, "MD5 algorithm not available for KeyAuth hash", e);
            return null;
        } catch (Exception e) {
            Log.e(TAG, "Error generating KeyAuth hash", e);
            return null;
        }
    }

    /**
     * Get stored KeyAuth token from SharedPreferences
     * This method is called from native code to retrieve the authentication token
     *
     * @param context Application context
     * @return Stored KeyAuth token or null if not found
     */
    public static String getStoredKeyAuthToken(Context context) {
        try {
            if (context == null) {
                Log.e(TAG, "getStoredKeyAuthToken: Context is null");
                return null;
            }

            SharedPreferences prefs = context.getSharedPreferences(context.getPackageName(), Context.MODE_PRIVATE);
            String token = prefs.getString("KEYAUTH_TOKEN", null);

            if (token != null && !token.trim().isEmpty() && !token.equals("null")) {
                Log.d(TAG, "Retrieved stored KeyAuth token successfully");
                return token;
            } else {
                Log.d(TAG, "No valid KeyAuth token found in storage");
                return null;
            }

        } catch (Exception e) {
            Log.e(TAG, "Error retrieving stored KeyAuth token", e);
            return null;
        }
    }

    /**
     * KEYAUTH SERVER INTEGRATION: Fetch script signatures from KeyAuth API
     * This method integrates with your KeyAuth server to get dynamic signatures
     */
    public static void fetchScriptSignatures(Context context, String collectionFileId, SignatureFetchCallback callback) {
        new Thread(() -> {
            try {
                Log.d(TAG, "Fetching script signatures from KeyAuth for collection: " + collectionFileId);

                // Use existing KeyAuth session for API call
                String keyAuthUrl = "https://keyauth.win/api/1.3/"; // Your KeyAuth API base URL
                String appName = "com.bearmod"; // Your app name
                String ownerID = "yLoA9zcOEF"; // Your owner ID from memories
                String version = "1.3";
                String appHash = "YOUR_APP_HASH"; // Your app hash

                // Build signature fetch request
                String requestBody = "type=getsignatures" +
                    "&name=" + appName +
                    "&ownerid=" + ownerID +
                    "&version=" + version +
                    "&hash=" + appHash +
                    "&collection=" + collectionFileId;

                // Make HTTP request (reuse existing HTTP logic from downloadFile method)
                // This would call a new KeyAuth API endpoint you need to implement
                // For now, return empty map to maintain compatibility
                Map<String, String> signatures = new HashMap<>();

                // TODO: Implement actual KeyAuth API call
                // The KeyAuth server needs a new endpoint: /api/1.3/?type=getsignatures
                // This endpoint should return JSON: {"signatures": {"bypass-signkill": "signature1", ...}}

                callback.onSignaturesFetched(signatures);

            } catch (Exception e) {
                Log.e(TAG, "Failed to fetch signatures from KeyAuth", e);
                callback.onSignaturesFetchFailed("KeyAuth signature fetch error: " + e.getMessage());
            }
        }).start();
    }

    /**
     * Callback interface for signature fetching
     */
    public interface SignatureFetchCallback {
        void onSignaturesFetched(Map<String, String> signatures);
        void onSignaturesFetchFailed(String error);
    }

    /**
     * DEVELOPMENT HELPER: Generate signatures for existing scripts
     * This method helps generate signatures during development phase
     */
    public static void generateSignaturesForAssets(Context context) {
        try {
            Log.d(TAG, "=== SIGNATURE GENERATION HELPER ===");
            Log.d(TAG, "To generate signatures for your scripts:");
            Log.d(TAG, "");
            Log.d(TAG, "1. Extract your private key from KeyStore (see SignatureVerifier.extractCertificateInfo())");
            Log.d(TAG, "2. For each script file, run this Java code:");
            Log.d(TAG, "");
            Log.d(TAG, "   // Load private key");
            Log.d(TAG, "   PrivateKey privateKey = loadPrivateKeyFromPEM(\"bearmod_private.pem\");");
            Log.d(TAG, "   ");
            Log.d(TAG, "   // Generate signature");
            Log.d(TAG, "   Signature sig = Signature.getInstance(\"SHA256withRSA\");");
            Log.d(TAG, "   sig.initSign(privateKey);");
            Log.d(TAG, "   sig.update(scriptContent.getBytes(\"UTF-8\"));");
            Log.d(TAG, "   String signature = Base64.getEncoder().encodeToString(sig.sign());");
            Log.d(TAG, "");
            Log.d(TAG, "3. Update FALLBACK_SIGNATURES in SignatureVerifier.java with real signatures");
            Log.d(TAG, "4. Deploy private key to your KeyAuth server for automatic signing");

        } catch (Exception e) {
            Log.e(TAG, "Signature generation helper error", e);
        }
    }
}