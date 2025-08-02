package com.bearmod.ota;

import android.content.Context;
import android.content.SharedPreferences;
import android.util.Log;

import com.bearmod.auth.SimpleLicenseVerifier;

import org.json.JSONException;
import org.json.JSONObject;

import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;
import java.util.HashMap;
import java.util.Iterator;
import java.util.Map;
import java.util.concurrent.CompletableFuture;
import java.util.zip.ZipEntry;
import java.util.zip.ZipInputStream;

/**
 * OTA (Over-The-Air) Update Manager for BearMod
 * Handles automatic library updates through KeyAuth without requiring APK updates
 */
public class OTAUpdateManager {
    private static final String TAG = "OTAUpdateManager";
    private static final String PREFS_NAME = "ota_versions";
    private static final String OTA_CONFIG_FILE_ID = "653773"; // Updated with actual KeyAuth file ID
    
    private static OTAUpdateManager instance;
    private final Context context;
    private final SharedPreferences versionPrefs;
    
    /**
     * Library configuration from OTA JSON manifest
     */
    public static class LibraryConfig {
        public String gameName;
        public String name;
        public String path;
        public int version;
        public String fileId;
        
        public LibraryConfig(String gameName, String name, String path, int version, String fileId) {
            this.gameName = gameName;
            this.name = name;
            this.path = path;
            this.version = version;
            this.fileId = fileId;
        }
        
        @Override
        public String toString() {
            return String.format("LibraryConfig{game='%s', name='%s', version=%d, fileId='%s'}", 
                gameName, name, version, fileId);
        }
    }
    
    /**
     * OTA update callback interface
     */
    public interface OTAUpdateCallback {
        void onUpdateCheckStarted();
        void onUpdateCheckComplete(Map<String, LibraryConfig> updatesNeeded);
        void onUpdateProgress(String libraryName, int progress);
        void onUpdateComplete(String libraryName, boolean success);
        void onAllUpdatesComplete(boolean allSuccessful);
        void onUpdateFailed(String error);
    }
    
    private OTAUpdateManager(Context context) {
        this.context = context.getApplicationContext();
        this.versionPrefs = context.getSharedPreferences(PREFS_NAME, Context.MODE_PRIVATE);
    }
    
    public static synchronized OTAUpdateManager getInstance(Context context) {
        if (instance == null) {
            instance = new OTAUpdateManager(context);
        }
        return instance;
    }
    
    /**
     * Check for available updates and download them automatically
     */
    public CompletableFuture<Boolean> checkAndPerformUpdates(OTAUpdateCallback callback) {
        return CompletableFuture.supplyAsync(() -> {
            try {
                Log.d(TAG, "Starting OTA update check...");
                callback.onUpdateCheckStarted();
                
                // Step 1: Download OTA configuration manifest
                JSONObject remoteConfig = downloadOTAConfig();
                if (remoteConfig == null) {
                    Log.w(TAG, "Failed to download OTA configuration - using fallback");
                    callback.onUpdateFailed("Failed to download OTA configuration");
                    return false;
                }
                
                // Step 2: Parse remote configuration and check for updates
                Map<String, LibraryConfig> updatesNeeded = checkForUpdates(remoteConfig);
                callback.onUpdateCheckComplete(updatesNeeded);
                
                if (updatesNeeded.isEmpty()) {
                    Log.d(TAG, "No updates needed - all libraries are current");
                    callback.onAllUpdatesComplete(true);
                    return true;
                }
                
                Log.d(TAG, "Found " + updatesNeeded.size() + " libraries to update");
                
                // Step 3: Download and install updates
                boolean allSuccessful = performUpdates(updatesNeeded, callback);
                callback.onAllUpdatesComplete(allSuccessful);
                
                return allSuccessful;
                
            } catch (Exception e) {
                Log.e(TAG, "Error during OTA update process", e);
                callback.onUpdateFailed("Update process failed: " + e.getMessage());
                return false;
            }
        });
    }
    
    /**
     * Download OTA configuration manifest from KeyAuth
     */
    private JSONObject downloadOTAConfig() {
        try {
            Log.d(TAG, "Downloading OTA configuration manifest...");
            
            CompletableFuture<JSONObject> configFuture = new CompletableFuture<>();
            
            SimpleLicenseVerifier.downloadFileWithId(context, "ota_config.json", OTA_CONFIG_FILE_ID,
                new SimpleLicenseVerifier.FileDownloadCallback() {
                    @Override
                    public void onDownloadComplete(String fileName, String filePath) {
                        try {
                            // Read and parse JSON configuration
                            String jsonContent = readFileContent(new File(filePath));
                            JSONObject config = new JSONObject(jsonContent);
                            
                            // Clean up temporary file
                            new File(filePath).delete();
                            
                            configFuture.complete(config);
                            
                        } catch (Exception e) {
                            Log.e(TAG, "Error parsing OTA configuration", e);
                            configFuture.complete(null);
                        }
                    }
                    
                    @Override
                    public void onDownloadFailed(String fileName, String error) {
                        Log.e(TAG, "Failed to download OTA configuration: " + error);
                        configFuture.complete(null);
                    }
                    
                    @Override
                    public void onDownloadProgress(String fileName, int progress) {
                        // Progress tracking for config download
                    }
                });
            
            return configFuture.get(30, java.util.concurrent.TimeUnit.SECONDS);
            
        } catch (Exception e) {
            Log.e(TAG, "Error downloading OTA configuration", e);
            return null;
        }
    }
    
    /**
     * Check which libraries need updates by comparing versions
     */
    private Map<String, LibraryConfig> checkForUpdates(JSONObject remoteConfig) {
        Map<String, LibraryConfig> updatesNeeded = new HashMap<>();
        
        try {
            Iterator<String> keys = remoteConfig.keys();
            
            while (keys.hasNext()) {
                String gameKey = keys.next();
                JSONObject gameConfig = remoteConfig.getJSONObject(gameKey);
                
                // Parse library configuration
                String gameName = gameConfig.getString("GameName");
                String name = gameConfig.getString("name");
                String path = gameConfig.getString("path");
                int remoteVersion = gameConfig.getInt("version");
                String fileId = gameConfig.getString("fileid");
                
                LibraryConfig libraryConfig = new LibraryConfig(gameName, name, path, remoteVersion, fileId);
                
                // Check local version
                int localVersion = getLocalLibraryVersion(name);
                
                Log.d(TAG, String.format("Version check for %s: local=%d, remote=%d", 
                    name, localVersion, remoteVersion));
                
                if (localVersion < remoteVersion) {
                    Log.d(TAG, "Update needed for " + name + " (local: " + localVersion + " -> remote: " + remoteVersion + ")");
                    updatesNeeded.put(name, libraryConfig);
                } else {
                    Log.d(TAG, "Library " + name + " is up to date (version " + localVersion + ")");
                }
            }
            
        } catch (JSONException e) {
            Log.e(TAG, "Error parsing OTA configuration", e);
        }
        
        return updatesNeeded;
    }
    
    /**
     * Perform updates for all libraries that need updating
     */
    private boolean performUpdates(Map<String, LibraryConfig> updatesNeeded, OTAUpdateCallback callback) {
        boolean allSuccessful = true;
        
        for (LibraryConfig libraryConfig : updatesNeeded.values()) {
            Log.d(TAG, "Updating library: " + libraryConfig);
            
            boolean success = downloadAndInstallLibrary(libraryConfig, callback);
            callback.onUpdateComplete(libraryConfig.name, success);
            
            if (success) {
                // Update local version tracking
                updateLocalLibraryVersion(libraryConfig.name, libraryConfig.version);
                Log.d(TAG, "Successfully updated " + libraryConfig.name + " to version " + libraryConfig.version);
            } else {
                Log.e(TAG, "Failed to update " + libraryConfig.name);
                allSuccessful = false;
            }
        }
        
        return allSuccessful;
    }
    
    /**
     * Download and install a specific library
     */
    private boolean downloadAndInstallLibrary(LibraryConfig libraryConfig, OTAUpdateCallback callback) {
        try {
            Log.d(TAG, "Downloading library: " + libraryConfig.name + " with file ID: " + libraryConfig.fileId);
            
            CompletableFuture<Boolean> downloadFuture = new CompletableFuture<>();
            
            SimpleLicenseVerifier.downloadFileWithId(context, libraryConfig.name + ".zip", libraryConfig.fileId,
                new SimpleLicenseVerifier.FileDownloadCallback() {
                    @Override
                    public void onDownloadComplete(String fileName, String filePath) {
                        try {
                            // Extract library to native directory
                            boolean extracted = extractLibraryToNativeDir(new File(filePath), libraryConfig);
                            
                            // Clean up temporary ZIP file
                            new File(filePath).delete();
                            
                            downloadFuture.complete(extracted);
                            
                        } catch (Exception e) {
                            Log.e(TAG, "Error extracting library: " + libraryConfig.name, e);
                            downloadFuture.complete(false);
                        }
                    }
                    
                    @Override
                    public void onDownloadFailed(String fileName, String error) {
                        Log.e(TAG, "Failed to download " + fileName + ": " + error);
                        downloadFuture.complete(false);
                    }
                    
                    @Override
                    public void onDownloadProgress(String fileName, int progress) {
                        callback.onUpdateProgress(libraryConfig.name, progress);
                    }
                });
            
            return downloadFuture.get(120, java.util.concurrent.TimeUnit.SECONDS);
            
        } catch (Exception e) {
            Log.e(TAG, "Error downloading library: " + libraryConfig.name, e);
            return false;
        }
    }
    
    /**
     * Extract library from ZIP to native library directory
     */
    private boolean extractLibraryToNativeDir(File zipFile, LibraryConfig libraryConfig) {
        try {
            // Get the app's native library directory
            File nativeLibDir = new File(context.getApplicationInfo().nativeLibraryDir).getParentFile();
            File libDir = new File(nativeLibDir, "lib");
            
            // Create architecture-specific directory
            String arch = getCurrentArchitecture();
            File archDir = new File(libDir, arch);
            if (!archDir.exists()) {
                archDir.mkdirs();
            }
            
            Log.d(TAG, "Extracting " + libraryConfig.name + " to " + archDir.getAbsolutePath());
            
            try (FileInputStream fis = new FileInputStream(zipFile);
                 ZipInputStream zis = new ZipInputStream(fis)) {
                
                ZipEntry entry;
                boolean extractedTarget = false;
                
                while ((entry = zis.getNextEntry()) != null) {
                    String entryName = entry.getName();
                    
                    // Look for the target library file
                    if (entryName.endsWith(".so") && entryName.contains(libraryConfig.name.replace(".so", ""))) {
                        File outputFile = new File(archDir, libraryConfig.name);
                        
                        Log.d(TAG, "Extracting: " + entryName + " -> " + outputFile.getAbsolutePath());
                        
                        try (FileOutputStream fos = new FileOutputStream(outputFile)) {
                            byte[] buffer = new byte[8192];
                            int bytesRead;
                            while ((bytesRead = zis.read(buffer)) != -1) {
                                fos.write(buffer, 0, bytesRead);
                            }
                        }
                        
                        // Set executable permissions
                        outputFile.setExecutable(true);
                        extractedTarget = true;
                        
                        Log.d(TAG, "Successfully extracted: " + libraryConfig.name);
                        break;
                    }
                    
                    zis.closeEntry();
                }
                
                return extractedTarget;
                
            }
            
        } catch (Exception e) {
            Log.e(TAG, "Error extracting library to native directory", e);
            return false;
        }
    }
    
    /**
     * Get current device architecture
     */
    private String getCurrentArchitecture() {
        String[] supportedAbis = android.os.Build.SUPPORTED_ABIS;
        if (supportedAbis.length > 0) {
            return supportedAbis[0]; // Primary ABI
        }
        return "arm64-v8a"; // Default fallback
    }
    
    /**
     * Get locally stored version for a library
     */
    private int getLocalLibraryVersion(String libraryName) {
        return versionPrefs.getInt(libraryName + "_version", 0);
    }
    
    /**
     * Update locally stored version for a library
     */
    private void updateLocalLibraryVersion(String libraryName, int version) {
        versionPrefs.edit()
            .putInt(libraryName + "_version", version)
            .apply();
    }
    
    /**
     * Read file content as string
     */
    private String readFileContent(File file) throws IOException {
        StringBuilder content = new StringBuilder();
        try (FileInputStream fis = new FileInputStream(file)) {
            byte[] buffer = new byte[1024];
            int bytesRead;
            while ((bytesRead = fis.read(buffer)) != -1) {
                content.append(new String(buffer, 0, bytesRead));
            }
        }
        return content.toString();
    }
    
    /**
     * Get current OTA system status
     */
    public Map<String, Integer> getCurrentLibraryVersions() {
        Map<String, Integer> versions = new HashMap<>();
        Map<String, ?> allPrefs = versionPrefs.getAll();
        
        for (Map.Entry<String, ?> entry : allPrefs.entrySet()) {
            if (entry.getKey().endsWith("_version")) {
                String libraryName = entry.getKey().replace("_version", "");
                versions.put(libraryName, (Integer) entry.getValue());
            }
        }
        
        return versions;
    }
    
    /**
     * Force update check (bypass cache)
     */
    public CompletableFuture<Boolean> forceUpdateCheck(OTAUpdateCallback callback) {
        Log.d(TAG, "Forcing OTA update check...");
        return checkAndPerformUpdates(callback);
    }
    
    /**
     * Reset all version tracking (for debugging)
     */
    public void resetVersionTracking() {
        Log.w(TAG, "Resetting all version tracking - next update check will download all libraries");
        versionPrefs.edit().clear().apply();
    }
}
