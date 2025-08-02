package com.bearmod.auth;

import android.content.Context;
import android.content.SharedPreferences;
import android.os.Build;
import android.provider.Settings;
import android.util.Log;

import com.bearmod.auth.HWID;

import java.io.BufferedReader;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;
import java.io.InputStream;
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
    
    // Simple configuration - only what's needed for KeyAuth API v1.3
    private static final String OWNER_ID = "yLoA9zcOEF";
    private static final String APP_NAME = "com.bearmod";
    private static final String VERSION = "1.3"; // Application version
    private static final String PATH = "fileId";
    private static final String API_URL = "https://keyauth.win/api/1.3/";
    private static final String APP_HASH = "4f9b15598f6e8bdf07ca39e9914cd3e9"; // Required for hash check
    
    public interface LicenseCallback {
        void onSuccess(String message);
        void onFailure(String error);
    }

    public interface FileDownloadCallback {
        void onDownloadComplete(String fileName, String filePath);
        void onDownloadFailed(String fileName, String error);
        void onDownloadProgress(String fileName, int progress);
    }

    // PATH-to-file-ID mapping for KeyAuth downloads
    // Updated with real KeyAuth file IDs from uploaded files (2025-08-01)
    // NOTE: These are now fallback IDs - LibraryVersionManager provides dynamic IDs
    private static final Map<String, String> LIBRARY_FILE_IDS = new HashMap<>();
    static {
        // Version manifest file (constant ID for automatic updates)
        LIBRARY_FILE_IDS.put("library_versions.json", "653773");  // TODO: Replace with actual manifest file ID

        // Fallback library file IDs (used when version manifest is unavailable)
        LIBRARY_FILE_IDS.put("libhelper_32bit.zip", "526490");  // 7.87 MB
        LIBRARY_FILE_IDS.put("libear.zip", "794554");           // 6.75 MB (libBEAR.so)
        LIBRARY_FILE_IDS.put("libmundo.zip", "386232");         // 307.6 KB
        LIBRARY_FILE_IDS.put("libhelper_64bit.zip", "306996");  // 10.27 MB

        // Individual library mappings (extracted from ZIP files) - Updated IDs
        LIBRARY_FILE_IDS.put("libhelper-32bit.so", "526490");   // From libhelper_32bit.zip
        LIBRARY_FILE_IDS.put("libhelper-64bit.so", "306996");   // From libhelper_64bit.zip
        LIBRARY_FILE_IDS.put("libBEAR.so", "794554");           // From libear.zip
        LIBRARY_FILE_IDS.put("libmundo.so", "386232");          // From libmundo.zip

        // Architecture-specific helper libraries - Updated IDs
        LIBRARY_FILE_IDS.put("libhelper_arm.so", "526490");     // 32-bit ARM
        LIBRARY_FILE_IDS.put("libhelper_arm64.so", "306996");   // 64-bit ARM

        // Frida Gadget libraries (if uploaded separately) - Updated IDs
        LIBRARY_FILE_IDS.put("libfrida-gadget.so", "306996");   // Use 64-bit helper for now
        LIBRARY_FILE_IDS.put("libfrida-gadget-arm64.so", "306996");
        LIBRARY_FILE_IDS.put("libfrida-gadget-arm.so", "526490");

        // BearMod core libraries - Updated IDs
        LIBRARY_FILE_IDS.put("libbearmod.so", "794554");        // Main BearMod library

        // Script files (if uploaded as separate files) - Updated IDs
        LIBRARY_FILE_IDS.put("bearmod_global.js", "794554");    // Scripts might be in libear.zip
        LIBRARY_FILE_IDS.put("bearmod_korea.js", "794554");
        LIBRARY_FILE_IDS.put("bearmod_vietnam.js", "794554");
        LIBRARY_FILE_IDS.put("bearmod_taiwan.js", "794554");
        LIBRARY_FILE_IDS.put("anti_detection.js", "794554");
        LIBRARY_FILE_IDS.put("frida_config.js", "794554");
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
                if (!initializeKeyAuth(client)) {
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
            
            FormBody formBody = new FormBody.Builder()
                    .add("type", "init")
                    .add("name", APP_NAME)
                    .add("ownerid", OWNER_ID)
                    .add("ver", VERSION)
                    .add("fileId", PATH)
                    .add("hash", APP_HASH)
                    .build();

            
            Request request = new Request.Builder()
                    .url(API_URL)
                    .post(formBody)
                    .addHeader("User-Agent", "BearMod/1.0")
                    .build();
            
            try (Response response = client.newCall(request).execute()) {
                if (response.isSuccessful() && response.body() != null) {
                    String responseBody = response.body().string();
                    Log.d(TAG, "KeyAuth init response: " + responseBody);
                    
                    boolean success = responseBody.contains("\"success\":true") || 
                                     responseBody.contains("\"success\": true");
                    
                    if (success) {
                        // Extract session ID from response
                        sessionId = extractSessionId(responseBody);
                        if (sessionId != null) {
                            Log.d(TAG, "Auth initialization successful, session ID: " + sessionId.substring(0, Math.min(8, sessionId.length())) + "...");
                            return true;
                        } else {
                            Log.e(TAG, "Auth initialization failed: No session ID in response");
                            return false;
                        }
                    } else {
                        String errorMsg = extractErrorMessage(responseBody);
                        Log.e(TAG, "Auth initialization failed: " + errorMsg);
                        return false;
                    }
                } else {
                    Log.e(TAG, "Auth init failed: HTTP " + response.code());
                    return false;
                }
            }
            
        } catch (Exception e) {
            Log.e(TAG, "Auth initialization exception", e);
            return false;
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
            
            FormBody formBody = new FormBody.Builder()
                    .add("type", "license")
                    .add("key", licenseKey)
                    .add("hwid", hwid)
                    .add("sessionid", sessionId)  // Required for API v1.3
                    .add("name", APP_NAME)
                    .add("ownerid", OWNER_ID)
                    .add("ver", VERSION)
                    .add("fileid", PATH)
                    .build();
            
            Request request = new Request.Builder()
                    .url(API_URL)
                    .post(formBody)
                    .addHeader("User-Agent", "BearMod/1.0")
                    .build();
            
            try (Response response = client.newCall(request).execute()) {
                if (response.isSuccessful() && response.body() != null) {
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
            if (android.os.Build.VERSION.SDK_INT >= android.os.Build.VERSION_CODES.O) {
                try {
                    hwid.append(Build.getSerial()).append("-");
                } catch (SecurityException e) {
                    Log.d(TAG, "Serial access denied, using fallback");
                    hwid.append("SERIAL_DENIED").append("-");
                }
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
            if (!initializeKeyAuth(client)) {
                Log.e(TAG, "Quick license check failed: KeyAuth initialization failed");
                return false;
            }
            
            // Step 2: Verify license
            String hwid = HWID.getHWID();
            
            if (sessionId == null) {
                Log.e(TAG, "Quick license check failed: No session ID available");
                return false;
            }
            
            FormBody formBody = new FormBody.Builder()
                    .add("type", "license")
                    .add("key", licenseKey)
                    .add("hwid", hwid)
                    .add("sessionid", sessionId)  // Required for API v1.3
                    .add("name", APP_NAME)
                    .add("ownerid", OWNER_ID)
                    .add("ver", VERSION)
                    .add("fileid", PATH)
                    .build();
            
            Request request = new Request.Builder()
                    .url(API_URL)
                    .post(formBody)
                    .build();
            
            try (Response response = client.newCall(request).execute()) {
                if (response.isSuccessful() && response.body() != null) {
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
        String fileId = LIBRARY_FILE_IDS.get(fileName);
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

                    if (!initializeKeyAuth(client)) {
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
                if (body == null) {
                    Log.e(TAG, "Download failed: Empty response body");
                    return null;
                }

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
                    if (response.isSuccessful() && response.body() != null) {
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
        return new HashMap<>(LIBRARY_FILE_IDS);
    }
}