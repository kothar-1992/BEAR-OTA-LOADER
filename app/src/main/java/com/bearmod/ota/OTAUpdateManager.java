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
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.concurrent.CompletableFuture;
import java.util.zip.ZipEntry;
import java.util.zip.ZipInputStream;

/**
 * Enhanced OTA (Over-The-Air) Update Manager for BearMod v2.0
 * Consolidated library management system with KeyAuth integration
 *
 * CONSOLIDATED FEATURES:
 * - Core library management (from SimplifiedOTAManager)
 * - Version manifest handling (from LibraryVersionManager)
 * - Retry mechanisms (from SecureOTADownloader)
 * - Coordination logic (from SecureOTAIntegration)
 * - Automatic library updates through KeyAuth without requiring APK updates
 */
public class OTAUpdateManager {
    private static final String TAG = "OTAUpdateManager";
    private static final String PREFS_NAME = "ota_versions";
    private static final String OTA_CONFIG_FILE_ID = "653773"; // Updated with actual KeyAuth file ID

    // Retry configuration (from SecureOTAIntegration)
    private static final int MAX_RETRY_ATTEMPTS = 3;
    private static final long RETRY_DELAY_MS = 2000;

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

    // Core library configurations (from SimplifiedOTAManager)
    private static final Map<String, CoreLibrary> CORE_LIBRARIES = new HashMap<>();

    static {
        // Initialize core libraries with stable file IDs
        CORE_LIBRARIES.put("BEARMOD_CORE", new CoreLibrary(
            "libbearmod.so", "362906", "Core mod floating services logic", "mod_logic", 1));

        CORE_LIBRARIES.put("BEAR_BYPASS", new CoreLibrary(
            "libbear.so", "794554", "Bypass anticheat stealth library", "bypass", 1));

        CORE_LIBRARIES.put("HELPER_64BIT", new CoreLibrary(
            "libhelper-64bit.so", "306996", "Core injection helper 64-bit", "injection", 1));

        CORE_LIBRARIES.put("HELPER_32BIT", new CoreLibrary(
            "libhelper-32bit.so", "526490", "Core injection helper 32-bit", "injection", 1));

        CORE_LIBRARIES.put("MUNDO_CORE", new CoreLibrary(
            "libmundo.so", "386232", "Advanced KeyAuth authentication core", "auth", 1));
    }

    /**
     * Core library definition (from SimplifiedOTAManager)
     */
    public static class CoreLibrary {
        public final String name;
        public final String fileId;
        public final String description;
        public final String category;
        public final int version;

        public CoreLibrary(String name, String fileId, String description, String category, int version) {
            this.name = name;
            this.fileId = fileId;
            this.description = description;
            this.category = category;
            this.version = version;
        }
    }

    /**
     * Simplified library configuration (from SimplifiedOTAManager)
     */
    public static class SimplifiedLibraryConfig {
        public final CoreLibrary coreLibrary;
        public final String targetName;
        public final String packageName;
        public final String gameTitle;
        public final String fallbackName;

        public SimplifiedLibraryConfig(CoreLibrary coreLibrary, String targetName,
                                     String packageName, String gameTitle, String fallbackName) {
            this.coreLibrary = coreLibrary;
            this.targetName = targetName;
            this.packageName = packageName;
            this.gameTitle = gameTitle;
            this.fallbackName = fallbackName;
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
                    public void onDownloadStarted() {
                        Log.d(TAG, "Starting OTA config download");
                    }

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
     * Download a single library (public method for external access)
     */
    public boolean downloadLibrary(LibraryConfig libraryConfig, OTAUpdateCallback callback) {
        return downloadAndInstallLibrary(libraryConfig, callback);
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
                    public void onDownloadStarted() {
                        Log.d(TAG, "Starting download: " + libraryConfig.name);
                        if (callback != null) {
                            callback.onUpdateProgress(libraryConfig.name, 0);
                        }
                    }

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
    public int getLocalLibraryVersion(String libraryName) {
        return versionPrefs.getInt(libraryName + "_version", 0);
    }

    /**
     * Update locally stored version for a library
     */
    public void updateLocalLibraryVersion(String libraryName, int version) {
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

    // ========== CONSOLIDATED SIMPLIFIED OTA METHODS (from SimplifiedOTAManager) ==========

    /**
     * Get required libraries for specific package (from SimplifiedOTAManager)
     */
    public List<SimplifiedLibraryConfig> getRequiredLibrariesForPackage(String packageName) {
        List<SimplifiedLibraryConfig> libraries = new ArrayList<>();

        // Determine game title from package name
        String gameTitle = getGameTitleFromPackage(packageName);

        // Add all core libraries with package-specific naming
        for (Map.Entry<String, CoreLibrary> entry : CORE_LIBRARIES.entrySet()) {
            CoreLibrary coreLib = entry.getValue();
            String targetName = generateTargetName(coreLib, packageName);
            String fallbackName = coreLib.name; // Use original name as fallback

            libraries.add(new SimplifiedLibraryConfig(
                coreLib, targetName, packageName, gameTitle, fallbackName));
        }

        return libraries;
    }

    /**
     * Simplified OTA update for specific package (from SimplifiedOTAManager)
     */
    public CompletableFuture<Boolean> checkAndPerformSimplifiedUpdates(String targetPackage,
                                                                      OTAUpdateCallback callback) {
        return CompletableFuture.supplyAsync(() -> {
            try {
                Log.d(TAG, "Starting simplified OTA update for: " + targetPackage);
                callback.onUpdateProgress("Checking required libraries", 10);

                List<SimplifiedLibraryConfig> requiredLibraries = getRequiredLibrariesForPackage(targetPackage);
                if (requiredLibraries.isEmpty()) {
                    Log.w(TAG, "No required libraries found for package: " + targetPackage);
                    callback.onUpdateFailed("No libraries configured for package: " + targetPackage);
                    return false;
                }

                Log.d(TAG, "Found " + requiredLibraries.size() + " required libraries");

                // Download and install each library with retry mechanism
                boolean allSuccessful = true;
                int totalLibraries = requiredLibraries.size();

                for (int i = 0; i < totalLibraries; i++) {
                    SimplifiedLibraryConfig libraryConfig = requiredLibraries.get(i);
                    int baseProgress = 20 + (i * 60 / totalLibraries);

                    Log.d(TAG, String.format("Processing library %d/%d: %s",
                        i + 1, totalLibraries, libraryConfig.coreLibrary.name));

                    boolean success = downloadAndInstallSimplifiedWithRetry(libraryConfig, callback, baseProgress);
                    if (!success) {
                        Log.e(TAG, "Failed to download/install: " + libraryConfig.coreLibrary.name);
                        allSuccessful = false;
                        // Continue with other libraries instead of failing completely
                    }
                }

                callback.onUpdateProgress("Finalizing installation", 90);

                if (allSuccessful) {
                    Log.d(TAG, "All simplified OTA updates completed successfully");
                    callback.onAllUpdatesComplete(true);
                } else {
                    Log.w(TAG, "Some simplified OTA updates failed");
                    callback.onAllUpdatesComplete(false);
                }

                return allSuccessful;

            } catch (Exception e) {
                Log.e(TAG, "Error during simplified OTA update", e);
                callback.onUpdateFailed("Simplified update failed: " + e.getMessage());
                return false;
            }
        });
    }

    // ========== RETRY MECHANISMS (from SecureOTAIntegration) ==========

    /**
     * Download and install with retry mechanism (from SecureOTAIntegration)
     */
    private boolean downloadAndInstallSimplifiedWithRetry(SimplifiedLibraryConfig libraryConfig,
                                                         OTAUpdateCallback callback, int baseProgress) {
        for (int attempt = 1; attempt <= MAX_RETRY_ATTEMPTS; attempt++) {
            try {
                Log.d(TAG, String.format("Download attempt %d/%d for: %s",
                    attempt, MAX_RETRY_ATTEMPTS, libraryConfig.coreLibrary.name));

                if (attempt > 1) {
                    callback.onUpdateProgress(String.format("Retrying download (attempt %d/%d)",
                        attempt, MAX_RETRY_ATTEMPTS), baseProgress);
                    Thread.sleep(RETRY_DELAY_MS);
                }

                boolean success = downloadAndInstallSimplified(libraryConfig, callback, baseProgress);
                if (success) {
                    Log.d(TAG, "Download successful on attempt: " + attempt);
                    return true;
                }

                Log.w(TAG, "Download attempt " + attempt + " failed");

            } catch (Exception e) {
                Log.e(TAG, "Download attempt " + attempt + " error", e);
                if (attempt == MAX_RETRY_ATTEMPTS) {
                    callback.onUpdateFailed("Download failed after " + MAX_RETRY_ATTEMPTS + " attempts");
                }
            }
        }

        return false;
    }

    /**
     * Download and install simplified library (from SimplifiedOTAManager)
     */
    private boolean downloadAndInstallSimplified(SimplifiedLibraryConfig libraryConfig,
                                                OTAUpdateCallback callback, int baseProgress) {
        try {
            Log.d(TAG, String.format("Downloading %s -> %s for %s",
                libraryConfig.coreLibrary.name,
                libraryConfig.targetName,
                libraryConfig.packageName));

            // Create standard library config for base OTA manager
            LibraryConfig baseConfig = new LibraryConfig(
                libraryConfig.gameTitle,
                libraryConfig.coreLibrary.name,
                libraryConfig.coreLibrary.name,
                libraryConfig.coreLibrary.version,
                libraryConfig.coreLibrary.fileId
            );

            // Download using existing base OTA manager
            boolean downloaded = downloadLibrary(baseConfig, callback);

            if (!downloaded) {
                Log.e(TAG, "Download failed for: " + libraryConfig.coreLibrary.name);
                return false;
            }

            // Update version tracking
            updateLocalLibraryVersion(
                libraryConfig.coreLibrary.name,
                libraryConfig.coreLibrary.version);

            Log.d(TAG, "Successfully processed: " + libraryConfig.coreLibrary.name);
            return true;

        } catch (Exception e) {
            Log.e(TAG, "Error in simplified download/install", e);
            return false;
        }
    }

    // ========== HELPER METHODS (from SimplifiedOTAManager) ==========

    /**
     * Get game title from package name
     */
    private String getGameTitleFromPackage(String packageName) {
        // Map common package names to game titles
        switch (packageName) {
            case "com.tencent.ig":
                return "PUBG Mobile Global";
            case "com.pubg.krmobile":
                return "PUBG Mobile Korea";
            case "com.rekoo.pubgm":
                return "PUBG Mobile";
            case "com.tencent.tmgp.pubgmhd":
                return "PUBG Mobile HD";
            default:
                return "Unknown Game";
        }
    }

    /**
     * Generate target name for library based on package
     */
    private String generateTargetName(CoreLibrary coreLib, String packageName) {
        // Generate package-specific target names
        String packageSuffix = packageName.substring(packageName.lastIndexOf('.') + 1);
        return coreLib.name.replace(".so", "_" + packageSuffix + ".so");
    }

    /**
     * Reset all version tracking (for debugging)
     */
    public void resetVersionTracking() {
        Log.w(TAG, "Resetting all version tracking - next update check will download all libraries");
        versionPrefs.edit().clear().apply();
    }
}
