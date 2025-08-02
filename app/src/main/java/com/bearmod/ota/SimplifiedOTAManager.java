package com.bearmod.ota;

import android.content.Context;
import android.util.Log;
import org.json.JSONObject;
import org.json.JSONException;
import java.io.InputStream;
import java.io.IOException;
import java.util.*;
import java.util.concurrent.CompletableFuture;

/**
 * Simplified OTA Manager with Consistent Core Library Approach
 * Fixes the overly complex multi-variant system with a clean, maintainable solution
 */
public class SimplifiedOTAManager {
    private static final String TAG = "SimplifiedOTAManager";
    
    private final Context context;
    private final OTAUpdateManager baseOTAManager;
    
    // Core library definitions - same files used for all packages
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
    
    // Package-specific target mapping
    public static class PackageMapping {
        public final String gameTitle;
        public final Map<String, String> targetLibraries; // source -> target name mapping
        public final String fallbackName;
        
        public PackageMapping(String gameTitle, Map<String, String> targetLibraries, String fallbackName) {
            this.gameTitle = gameTitle;
            this.targetLibraries = targetLibraries;
            this.fallbackName = fallbackName;
        }
    }
    
    // Core libraries - consistent across all packages
    private static final Map<String, CoreLibrary> CORE_LIBRARIES = new HashMap<>();
    
    // Package mappings - only target names vary
    private static final Map<String, PackageMapping> PACKAGE_MAPPINGS = new HashMap<>();
    
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
        
        // Initialize package mappings - same core libraries, different target names
        initializePackageMappings();
    }
    
    private static void initializePackageMappings() {
        // All PUBG variants use the same core libraries with consistent target naming
        Map<String, String> pubgTargets = new HashMap<>();
        pubgTargets.put("libbearmod.so", "libpubgm.so");
        pubgTargets.put("libbear.so", "libClient.so");
        
        PACKAGE_MAPPINGS.put("com.tencent.ig", 
            new PackageMapping("PUBG Global", pubgTargets, "libAkAudioVisiual.so"));
        PACKAGE_MAPPINGS.put("com.pubg.krmobile", 
            new PackageMapping("PUBG Korea", pubgTargets, "libAkAudioVisiual.so"));
        PACKAGE_MAPPINGS.put("com.vng.pubgmobile", 
            new PackageMapping("PUBG Vietnam", pubgTargets, "libAkAudioVisiual.so"));
        PACKAGE_MAPPINGS.put("com.rekoo.pubgm", 
            new PackageMapping("PUBG Taiwan", pubgTargets, "libAkAudioVisiual.so"));
        
        // BGMI uses slightly different target naming
        Map<String, String> bgmiTargets = new HashMap<>();
        bgmiTargets.put("libbearmod.so", "libbgmi.so");
        bgmiTargets.put("libbear.so", "libClient.so");
        
        PACKAGE_MAPPINGS.put("com.pubg.imobile", 
            new PackageMapping("BGMI", bgmiTargets, "libAkAudioVisiual.so"));
        
        // Farlight 84 uses its own target naming
        Map<String, String> farlightTargets = new HashMap<>();
        farlightTargets.put("libbearmod.so", "libfarlight.so");
        farlightTargets.put("libbear.so", "libClient.so");
        
        PACKAGE_MAPPINGS.put("com.miraclegames.farlight84", 
            new PackageMapping("Farlight 84", farlightTargets, "libfarlight.so"));
    }
    
    public SimplifiedOTAManager(Context context) {
        this.context = context;
        this.baseOTAManager = OTAUpdateManager.getInstance(context);

        // Load configuration from ota_config.json if available
        loadConfigurationFromAssets();
    }
    
    /**
     * Simplified library configuration for any package
     * Uses the same core libraries with package-specific target naming
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
     * Get required libraries for a specific package
     * Returns the same core libraries with appropriate target names
     */
    public List<SimplifiedLibraryConfig> getRequiredLibrariesForPackage(String packageName) {
        List<SimplifiedLibraryConfig> requiredLibraries = new ArrayList<>();
        
        PackageMapping mapping = PACKAGE_MAPPINGS.get(packageName);
        if (mapping == null) {
            Log.w(TAG, "Unknown package, using default PUBG mapping: " + packageName);
            mapping = PACKAGE_MAPPINGS.get("com.tencent.ig"); // Default to PUBG Global
        }
        
        // Get core mod libraries (bearmod + bypass)
        CoreLibrary bearmodCore = CORE_LIBRARIES.get("BEARMOD_CORE");
        CoreLibrary bearBypass = CORE_LIBRARIES.get("BEAR_BYPASS");
        
        if (bearmodCore != null && mapping.targetLibraries.containsKey(bearmodCore.name)) {
            requiredLibraries.add(new SimplifiedLibraryConfig(
                bearmodCore,
                mapping.targetLibraries.get(bearmodCore.name),
                packageName,
                mapping.gameTitle,
                mapping.fallbackName
            ));
        }
        
        if (bearBypass != null && mapping.targetLibraries.containsKey(bearBypass.name)) {
            requiredLibraries.add(new SimplifiedLibraryConfig(
                bearBypass,
                mapping.targetLibraries.get(bearBypass.name),
                packageName,
                mapping.gameTitle,
                mapping.fallbackName
            ));
        }
        
        // Add injection helpers (architecture-dependent)
        String arch = getDeviceArchitecture();
        String helperKey = arch.contains("64") ? "HELPER_64BIT" : "HELPER_32BIT";
        CoreLibrary helper = CORE_LIBRARIES.get(helperKey);
        
        if (helper != null) {
            requiredLibraries.add(new SimplifiedLibraryConfig(
                helper,
                helper.name, // Helpers keep their original names
                packageName,
                mapping.gameTitle,
                helper.name
            ));
        }
        
        Log.d(TAG, String.format("Required libraries for %s (%s): %d libraries", 
            packageName, mapping.gameTitle, requiredLibraries.size()));
        
        return requiredLibraries;
    }
    
    /**
     * Check and perform updates for specific package
     * Simplified approach - same core libraries, different target installation
     */
    public CompletableFuture<Boolean> checkAndPerformSimplifiedUpdates(String targetPackage, 
                                                                      OTAUpdateManager.OTAUpdateCallback callback) {
        return CompletableFuture.supplyAsync(() -> {
            try {
                Log.d(TAG, "Starting simplified OTA update for: " + targetPackage);
                callback.onUpdateProgress("Checking required libraries...", 10);
                
                List<SimplifiedLibraryConfig> requiredLibraries = getRequiredLibrariesForPackage(targetPackage);
                if (requiredLibraries.isEmpty()) {
                    Log.w(TAG, "No required libraries found for package: " + targetPackage);
                    callback.onUpdateFailed("No libraries configured for package: " + targetPackage);
                    return false;
                }
                
                boolean allSuccessful = true;
                int totalLibraries = requiredLibraries.size();
                int currentLibrary = 0;
                
                for (SimplifiedLibraryConfig libraryConfig : requiredLibraries) {
                    currentLibrary++;
                    int baseProgress = 20 + (currentLibrary * 60 / totalLibraries);
                    
                    callback.onUpdateProgress(
                        String.format("Processing %s (%d/%d)...", 
                            libraryConfig.coreLibrary.name, currentLibrary, totalLibraries), 
                        baseProgress);
                    
                    // Check if update needed
                    if (!isUpdateNeeded(libraryConfig)) {
                        Log.d(TAG, "Library up to date: " + libraryConfig.coreLibrary.name);
                        continue;
                    }
                    
                    // Download and install with simplified approach
                    boolean success = downloadAndInstallSimplified(libraryConfig, callback, baseProgress);
                    if (!success) {
                        Log.e(TAG, "Failed to update library: " + libraryConfig.coreLibrary.name);
                        allSuccessful = false;
                        // Continue with other libraries instead of failing completely
                    }
                }
                
                if (allSuccessful) {
                    callback.onUpdateComplete("All libraries updated successfully for " + targetPackage);
                } else {
                    callback.onUpdateFailed("Some libraries failed to update");
                }
                
                return allSuccessful;
                
            } catch (Exception e) {
                Log.e(TAG, "Error in simplified OTA update", e);
                callback.onUpdateFailed("Update error: " + e.getMessage());
                return false;
            }
        });
    }
    
    /**
     * Check if library update is needed
     */
    private boolean isUpdateNeeded(SimplifiedLibraryConfig libraryConfig) {
        int localVersion = baseOTAManager.getLocalLibraryVersion(libraryConfig.coreLibrary.name);
        return localVersion < libraryConfig.coreLibrary.version;
    }
    
    /**
     * Download and install with simplified approach
     */
    private boolean downloadAndInstallSimplified(SimplifiedLibraryConfig libraryConfig, 
                                                OTAUpdateManager.OTAUpdateCallback callback,
                                                int baseProgress) {
        try {
            Log.d(TAG, String.format("Downloading %s -> %s for %s", 
                libraryConfig.coreLibrary.name, 
                libraryConfig.targetName, 
                libraryConfig.packageName));
            
            // Create standard library config for base OTA manager
            OTAUpdateManager.LibraryConfig baseConfig = new OTAUpdateManager.LibraryConfig(
                libraryConfig.gameTitle,
                libraryConfig.coreLibrary.name,
                libraryConfig.coreLibrary.name,
                libraryConfig.coreLibrary.version,
                libraryConfig.coreLibrary.fileId
            );
            
            // Download using existing base OTA manager
            boolean downloaded = baseOTAManager.downloadLibrary(baseConfig, 
                new ProgressMappingCallback(callback, baseProgress, baseProgress + 15));
            
            if (!downloaded) {
                Log.e(TAG, "Download failed for: " + libraryConfig.coreLibrary.name);
                return false;
            }
            
            // Install with target name (handles renaming during installation)
            boolean installed = installWithTargetName(libraryConfig, callback, baseProgress + 15);
            if (!installed) {
                Log.e(TAG, "Installation failed for: " + libraryConfig.coreLibrary.name);
                return false;
            }
            
            // Update version tracking
            baseOTAManager.updateLocalLibraryVersion(
                libraryConfig.coreLibrary.name, 
                libraryConfig.coreLibrary.version);
            
            Log.d(TAG, "Successfully updated: " + libraryConfig.coreLibrary.name);
            return true;
            
        } catch (Exception e) {
            Log.e(TAG, "Error in simplified download/install", e);
            return false;
        }
    }
    
    /**
     * Install library with target name (handles renaming)
     */
    private boolean installWithTargetName(SimplifiedLibraryConfig libraryConfig, 
                                        OTAUpdateManager.OTAUpdateCallback callback,
                                        int baseProgress) {
        try {
            callback.onUpdateProgress("Installing " + libraryConfig.targetName + "...", baseProgress + 5);
            
            // Source: Downloaded library in app's native lib directory
            java.io.File sourceLib = new java.io.File(
                context.getApplicationInfo().nativeLibraryDir, 
                libraryConfig.coreLibrary.name);
            
            // Target: Same directory but with target name
            java.io.File targetLib = new java.io.File(
                context.getApplicationInfo().nativeLibraryDir, 
                libraryConfig.targetName);
            
            // Remove existing target if present
            if (targetLib.exists()) {
                targetLib.delete();
            }
            
            // Copy/rename library to target name
            boolean copied = copyLibraryFile(sourceLib, targetLib);
            if (!copied) {
                Log.e(TAG, "Failed to copy library to target name");
                return false;
            }
            
            Log.d(TAG, String.format("Installed %s as %s", 
                libraryConfig.coreLibrary.name, libraryConfig.targetName));
            
            return true;
            
        } catch (Exception e) {
            Log.e(TAG, "Error installing with target name", e);
            return false;
        }
    }
    
    /**
     * Copy library file with proper permissions
     */
    private boolean copyLibraryFile(java.io.File source, java.io.File target) {
        try {
            if (!source.exists()) {
                Log.e(TAG, "Source library not found: " + source.getAbsolutePath());
                return false;
            }
            
            java.nio.file.Files.copy(source.toPath(), target.toPath(), 
                java.nio.file.StandardCopyOption.REPLACE_EXISTING);
            
            // Set proper permissions for native library
            target.setExecutable(true, false);
            target.setReadable(true, false);
            
            return true;
            
        } catch (Exception e) {
            Log.e(TAG, "Error copying library file", e);
            return false;
        }
    }
    
    /**
     * Get device architecture for helper library selection
     */
    private String getDeviceArchitecture() {
        return System.getProperty("os.arch", "arm");
    }
    
    /**
     * Progress mapping callback for nested operations
     */
    private static class ProgressMappingCallback implements OTAUpdateManager.OTAUpdateCallback {
        private final OTAUpdateManager.OTAUpdateCallback originalCallback;
        private final int startProgress;
        private final int endProgress;
        
        public ProgressMappingCallback(OTAUpdateManager.OTAUpdateCallback originalCallback, 
                                     int startProgress, int endProgress) {
            this.originalCallback = originalCallback;
            this.startProgress = startProgress;
            this.endProgress = endProgress;
        }
        
        @Override
        public void onUpdateProgress(String message, int progress) {
            int mappedProgress = startProgress + (progress * (endProgress - startProgress) / 100);
            originalCallback.onUpdateProgress(message, mappedProgress);
        }
        
        @Override
        public void onUpdateComplete(String message) {
            originalCallback.onUpdateProgress(message, endProgress);
        }
        
        @Override
        public void onUpdateFailed(String error) {
            originalCallback.onUpdateFailed(error);
        }
    }

    /**
     * Load configuration from ota_config.json assets file
     * This integrates the JSON configuration with the simplified approach
     */
    private void loadConfigurationFromAssets() {
        try {
            Log.d(TAG, "Loading configuration from ota_config.json");

            InputStream inputStream = context.getAssets().open("ota_config.json");
            byte[] buffer = new byte[inputStream.available()];
            inputStream.read(buffer);
            inputStream.close();

            String jsonString = new String(buffer, "UTF-8");
            JSONObject config = new JSONObject(jsonString);

            // Load core libraries from JSON
            if (config.has("CORE_LIBRARIES")) {
                JSONObject coreLibraries = config.getJSONObject("CORE_LIBRARIES");
                updateCoreLibrariesFromJSON(coreLibraries);
            }

            // Load package mappings from JSON
            if (config.has("PACKAGE_MAPPINGS")) {
                JSONObject packageMappings = config.getJSONObject("PACKAGE_MAPPINGS");
                updatePackageMappingsFromJSON(packageMappings);
            }

            Log.d(TAG, "Configuration loaded successfully from ota_config.json");

        } catch (IOException e) {
            Log.w(TAG, "Could not load ota_config.json from assets, using hardcoded configuration: " + e.getMessage());
        } catch (JSONException e) {
            Log.w(TAG, "Error parsing ota_config.json, using hardcoded configuration: " + e.getMessage());
        } catch (Exception e) {
            Log.w(TAG, "Unexpected error loading configuration, using hardcoded configuration: " + e.getMessage());
        }
    }

    /**
     * Update core libraries from JSON configuration
     */
    private void updateCoreLibrariesFromJSON(JSONObject coreLibrariesJSON) throws JSONException {
        Iterator<String> keys = coreLibrariesJSON.keys();
        while (keys.hasNext()) {
            String key = keys.next();
            JSONObject libraryJSON = coreLibrariesJSON.getJSONObject(key);

            String name = libraryJSON.getString("name");
            String fileId = libraryJSON.getString("fileId");
            String description = libraryJSON.optString("description", "");
            String category = libraryJSON.optString("category", "unknown");
            int version = libraryJSON.optInt("version", 1);

            // Update existing core library or add new one
            CORE_LIBRARIES.put(key, new CoreLibrary(name, fileId, description, category, version));
            Log.d(TAG, "Updated core library from JSON: " + key + " -> " + name + " (ID: " + fileId + ")");
        }
    }

    /**
     * Update package mappings from JSON configuration
     */
    private void updatePackageMappingsFromJSON(JSONObject packageMappingsJSON) throws JSONException {
        Iterator<String> packages = packageMappingsJSON.keys();
        while (packages.hasNext()) {
            String packageName = packages.next();
            JSONObject packageJSON = packageMappingsJSON.getJSONObject(packageName);

            String gameTitle = packageJSON.optString("game_title", packageName);
            String fallbackName = packageJSON.optString("fallback_name", "libAkAudioVisiual.so");

            // Parse target libraries mapping
            Map<String, String> targetLibraries = new HashMap<>();
            if (packageJSON.has("target_libraries")) {
                JSONObject targetLibrariesJSON = packageJSON.getJSONObject("target_libraries");
                Iterator<String> targetKeys = targetLibrariesJSON.keys();
                while (targetKeys.hasNext()) {
                    String sourceLib = targetKeys.next();
                    String targetLib = targetLibrariesJSON.getString(sourceLib);
                    targetLibraries.put(sourceLib, targetLib);
                }
            }

            // Update package mapping
            PACKAGE_MAPPINGS.put(packageName, new PackageMapping(gameTitle, targetLibraries, fallbackName));
            Log.d(TAG, "Updated package mapping from JSON: " + packageName + " -> " + gameTitle);
        }
    }
}
