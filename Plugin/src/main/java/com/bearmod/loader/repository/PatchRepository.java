package com.bearmod.loader.repository;

import android.content.Context;
import android.os.Build;
import android.util.Log;

import androidx.lifecycle.LiveData;
import androidx.lifecycle.MutableLiveData;
import androidx.lifecycle.Transformations;

import com.bearmod.loader.auth.AuthResult;
import com.bearmod.loader.auth.KeyAuthManager;
import com.bearmod.loader.constants.PubgPackages;
import com.bearmod.loader.database.AppDatabase;
import com.bearmod.loader.database.dao.PatchDao;
import com.bearmod.loader.database.entity.PatchEntity;
import com.bearmod.loader.model.Patch;
import com.bearmod.loader.network.NetworkManager;
import com.bearmod.loader.security.AESUtil;

import org.json.JSONArray;
import org.json.JSONObject;

import java.io.File;
import java.io.FileOutputStream;
import java.io.IOException;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.concurrent.Executor;
import java.util.concurrent.Executors;
import java.util.stream.Collectors;

import okhttp3.Call;
import okhttp3.Callback;
import okhttp3.OkHttpClient;
import okhttp3.Request;
import okhttp3.Response;

/**
 * PHASE 6 ENHANCED: JavaScript Patch Repository with KeyAuth API 1.3 Integration
 *
 * Handles JavaScript patch distribution using KeyAuth file download system
 * for Over-The-Air (OTA) patch updates and secure patch management.
 *
 * FEATURES:
 * - KeyAuth API 1.3 file download integration
 * - Encrypted JavaScript patch storage
 * - Target PUBG package association
 * - Patch version tracking and updates
 * - Comprehensive error handling and logging
 */
public class PatchRepository {

    private static final String TAG = "PatchRepository";

    // KeyAuth file IDs for JavaScript patches (similar to ID "362906")
    private static final Map<String, String> PATCH_FILE_IDS = new HashMap<>() {{
        put("pubg_global_basic", "362906");      // Example: Basic patches for PUBG Global
        put("pubg_global_advanced", "362907");   // Example: Advanced patches for PUBG Global
        put("pubg_korea_basic", "362908");       // Example: Basic patches for PUBG Korea
        put("pubg_vietnam_basic", "362909");     // Example: Basic patches for PUBG Vietnam
        put("pubg_taiwan_basic", "362910");      // Example: Basic patches for PUBG Taiwan
    }};

    // Target PUBG packages - using centralized constants
    // Reference: PubgPackages.PUBG_PACKAGES

    private static PatchRepository instance;
    private final PatchDao patchDao;
    private final KeyAuthManager keyAuthManager;
    private final OkHttpClient httpClient;
    private final Context context;
    private final Executor executor = Executors.newSingleThreadExecutor();
    
    /**
     * Private constructor to enforce singleton pattern
     * @param context Application context
     */
    private PatchRepository(Context context) {
        this.context = context.getApplicationContext();
        AppDatabase database = AppDatabase.getInstance(context);
        patchDao = database.patchDao();
        NetworkManager.getInstance(context);
        keyAuthManager = KeyAuthManager.getInstance();
        httpClient = new OkHttpClient.Builder()
                .connectTimeout(30, java.util.concurrent.TimeUnit.SECONDS)
                .readTimeout(60, java.util.concurrent.TimeUnit.SECONDS)
                .writeTimeout(60, java.util.concurrent.TimeUnit.SECONDS)
                .build();
    }
    
    /**
     * Get repository instance
     * @param context Application context
     * @return Repository instance
     */
    public static synchronized PatchRepository getInstance(Context context) {
        if (instance == null) {
            instance = new PatchRepository(context.getApplicationContext());
        }
        return instance;
    }
    
    /**
     * Get all patches
     * @return LiveData list of all patches
     */
    public LiveData<List<Patch>> getAllPatches() {
        return Transformations.map(patchDao.getAllPatchesLive(),
                entities -> entities.stream()
                        .map(PatchEntity::toPatch)
                        .collect(Collectors.toList()));
    }
    
    /**
     * Get patch by ID
     * @param id Patch ID
     * @return LiveData patch with the given ID
     */
    public LiveData<Patch> getPatchById(String id) {
        return Transformations.map(patchDao.getPatchByIdLive(id), PatchEntity::toPatch);
    }
    
    /**
     * Get patches by game version
     * @param gameVersion Game version
     * @return LiveData list of patches for the given game version
     */
    public LiveData<List<Patch>> getPatchesByGameVersion(String gameVersion) {
        return Transformations.map(patchDao.getPatchesByGameVersionLive(gameVersion),
                entities -> entities.stream()
                        .map(PatchEntity::toPatch)
                        .collect(Collectors.toList()));
    }

    /**
     * PHASE 6: Get patches for specific target PUBG package
     * Integration point with Phase 5 dashboard target app selection
     *
     * @param targetPackage PUBG package name (com.tencent.ig, com.pubg.krmobile, etc.)
     * @param callback Callback for result
     */
    public void getPatchesForTarget(String targetPackage, PatchCallback callback) {
        executor.execute(() -> {
            try {
                Log.d(TAG, "Loading patches for target package: " + targetPackage);

                // Get all patches and filter by target package
                List<PatchEntity> allEntities = patchDao.getAllPatches();
                List<Patch> targetPatches = new ArrayList<>();

                for (PatchEntity entity : allEntities) {
                    Patch patch = entity.toPatch();

                    // Determine if patch is compatible with target package
                    if (isPatchCompatibleWithTarget(patch, targetPackage)) {
                        targetPatches.add(patch);
                    }
                }

                Log.i(TAG, "Found " + targetPatches.size() + " patches for target: " + targetPackage);
                callback.onSuccess(targetPatches);

            } catch (Exception e) {
                Log.e(TAG, "Error getting patches for target " + targetPackage, e);
                callback.onError("Error loading patches for target: " + e.getMessage());
            }
        });
    }

    /**
     * PHASE 6: Check if patch is compatible with target PUBG package
     */
    private boolean isPatchCompatibleWithTarget(Patch patch, String targetPackage) {
        // Extract target info from patch ID or name
        String patchInfo = (patch.getId() + " " + patch.getName()).toLowerCase();

        if (targetPackage.equals(PubgPackages.PUBG_PACKAGES[PubgPackages.GLOBAL_INDEX])) {
            return patchInfo.contains("global");
        } else if (targetPackage.equals(PubgPackages.PUBG_PACKAGES[PubgPackages.KOREA_INDEX])) {
            return patchInfo.contains("korea");
        } else if (targetPackage.equals(PubgPackages.PUBG_PACKAGES[PubgPackages.VIETNAM_INDEX])) {
            return patchInfo.contains("vietnam");
        } else if (targetPackage.equals(PubgPackages.PUBG_PACKAGES[PubgPackages.TAIWAN_INDEX])) {
            return patchInfo.contains("taiwan");
        }

        // Default: assume compatible with global
        return false;
    }
    
    /**
     * Get latest patches for a specific game version
     * @param gameVersion Game version
     * @param callback Callback for result
     */
    public void getLatestPatches(String gameVersion, PatchCallback callback) {
        executor.execute(() -> {
            try {
                List<PatchEntity> entities = patchDao.getLatestPatches(gameVersion);
                List<Patch> patches = entities.stream()
                        .map(PatchEntity::toPatch)
                        .collect(Collectors.toList());
                callback.onSuccess(patches);
            } catch (Exception e) {
                Log.e(TAG, "Error getting latest patches: " + e.getMessage());
                callback.onError("Error getting latest patches: " + e.getMessage());
            }
        });
    }
    
    /**
     * PHASE 6 ENHANCED: Sync JavaScript patches from KeyAuth API 1.3 file download system
     *
     * Downloads JavaScript patches using KeyAuth file IDs and stores them locally
     * with proper encryption and target package association.
     *
     * @param callback Callback for result
     */
    public void syncPatches(PatchCallback callback) {
        Log.d(TAG, "Starting KeyAuth patch synchronization...");

        executor.execute(() -> {
            try {
                // Step 1: Validate KeyAuth initialization
                if (!validateKeyAuthInitialization(callback)) {
                    return;
                }

                Log.d(TAG, "KeyAuth validation successful, proceeding with patch download");

                // Step 2: Download patches from KeyAuth file system
                List<Patch> downloadedPatches = downloadPatchesFromKeyAuth();

                if (downloadedPatches.isEmpty()) {
                    Log.w(TAG, "No patches downloaded from KeyAuth");
                    callback.onError("No patches available for download");
                    return;
                }

                // Step 3: Save patches to database
                List<PatchEntity> entities = downloadedPatches.stream()
                        .map(PatchEntity::new)
                        .collect(Collectors.toList());

                patchDao.insertAll(entities);

                Log.i(TAG, "Successfully synchronized " + downloadedPatches.size() + " patches from KeyAuth");
                callback.onSuccess(downloadedPatches);

            } catch (Exception e) {
                Log.e(TAG, "Error syncing patches from KeyAuth: " + e.getMessage(), e);
                callback.onError("Failed to sync patches: " + e.getMessage());
            }
        });
    }
    
    /**
     * Save patch
     * @param patch Patch to save
     * @param callback Callback for result
     */
    public void savePatch(Patch patch, PatchCallback callback) {
        executor.execute(() -> {
            try {
                PatchEntity entity = new PatchEntity(patch);
                patchDao.insert(entity);
                callback.onSuccess(List.of(patch));
            } catch (Exception e) {
                Log.e(TAG, "Error saving patch: " + e.getMessage());
                callback.onError("Error saving patch: " + e.getMessage());
            }
        });
    }
    
    /**
     * Delete patch
     * @param patch Patch to delete
     * @param callback Callback for result
     */
    public void deletePatch(Patch patch, PatchCallback callback) {
        executor.execute(() -> {
            try {
                PatchEntity entity = new PatchEntity(patch);
                patchDao.delete(entity);
                callback.onSuccess(List.of(patch));
            } catch (Exception e) {
                Log.e(TAG, "Error deleting patch: " + e.getMessage());
                callback.onError("Error deleting patch: " + e.getMessage());
            }
        });
    }

    /**
     * PHASE 6: Get decrypted patch content for JSEnginePatchManager
     * Integration point with JavaScript Engine Patching system
     *
     * @param patchId Patch ID (KeyAuth file ID)
     * @param callback Callback for patch content result
     */
    public void getPatchContent(String patchId, PatchContentCallback callback) {
        executor.execute(() -> {
            try {
                Log.d(TAG, "Loading patch content for ID: " + patchId);

                // Find patch in database
                PatchEntity entity = patchDao.getPatchById(patchId);
                if (entity == null) {
                    Log.w(TAG, "Patch not found in database: " + patchId);
                    callback.onError("Patch not found: " + patchId);
                    return;
                }

                // Determine patch key from entity
                String patchKey = determinePatchKeyFromEntity(entity);

                // Load encrypted content from local storage
                String encryptedContent = loadPatchFromLocalStorage(patchKey);
                if (encryptedContent == null) {
                    Log.e(TAG, "Failed to load patch content from storage: " + patchKey);
                    callback.onError("Patch content not available: " + patchId);
                    return;
                }

                // Decrypt content
                String decryptedContent = AESUtil.decryptFromPlugin(encryptedContent);

                // Validate content
                if (decryptedContent.trim().isEmpty()) {
                    Log.e(TAG, "Invalid or empty patch content: " + patchId);
                    callback.onError("Invalid patch content: " + patchId);
                    return;
                }

                Log.i(TAG, "Successfully loaded patch content: " + patchId +
                          " (" + decryptedContent.length() + " characters)");
                callback.onSuccess(decryptedContent);

            } catch (Exception e) {
                Log.e(TAG, "Error loading patch content for " + patchId, e);
                callback.onError("Failed to load patch content: " + e.getMessage());
            }
        });
    }

    /**
     * PHASE 6: Load encrypted patch content from local storage
     */
    private String loadPatchFromLocalStorage(String patchKey) {
        try {
            File patchFile = new File(context.getFilesDir(), "patches/" + patchKey + ".js.enc");

            if (!patchFile.exists()) {
                Log.w(TAG, "Patch file not found: " + patchFile.getAbsolutePath());
                return null;
            }

            // Read encrypted content
            byte[] encryptedBytes = null;
            if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.O) {
                encryptedBytes = Files.readAllBytes(patchFile.toPath());
            }
            return new String(encryptedBytes, StandardCharsets.UTF_8);

        } catch (Exception e) {
            Log.e(TAG, "Error loading patch from storage: " + patchKey, e);
            return null;
        }
    }

    /**
     * PHASE 6: Determine patch key from database entity
     */
    private String determinePatchKeyFromEntity(PatchEntity entity) {
        // Try to determine patch key from ID or name
        for (Map.Entry<String, String> entry : PATCH_FILE_IDS.entrySet()) {
            if (entry.getValue().equals(entity.getId())) {
                return entry.getKey();
            }
        }

        // Fallback: use ID as key
        return "patch_" + entity.getId();
    }
    
    /**
     * PHASE 6: Validate KeyAuth initialization before patch operations
     *
     * @param callback Callback to notify on validation failure
     * @return true if KeyAuth is properly initialized, false otherwise
     */
    private boolean validateKeyAuthInitialization(PatchCallback callback) {
        try {
            // Check if KeyAuth manager is initialized
            if (keyAuthManager == null) {
                Log.e(TAG, "KeyAuth manager is not available");
                callback.onError("Authentication service not available");
                return false;
            }

            // Initialize KeyAuth if not already done
            if (!keyAuthManager.isInitialized()) {
                Log.d(TAG, "Initializing KeyAuth for patch download...");

                // Synchronous initialization for patch download
                final boolean[] initSuccess = {false};
                final String[] initError = {null};

                keyAuthManager.initialize(context, new KeyAuthManager.AuthCallback() {
                    @Override
                    public void onSuccess(AuthResult result) {
                        initSuccess[0] = true;
                        Log.d(TAG, "KeyAuth initialization successful for patch download");
                    }

                    @Override
                    public void onError(String error) {
                        initError[0] = error;
                        Log.e(TAG, "KeyAuth initialization failed: " + error);
                    }
                });

                // Wait for initialization (with timeout)
                int attempts = 0;
                while (attempts < 30 && !initSuccess[0] && initError[0] == null) {
                    try {
                        Thread.sleep(100);
                        attempts++;
                    } catch (InterruptedException e) {
                        Thread.currentThread().interrupt();
                        break;
                    }
                }

                if (!initSuccess[0]) {
                    String error = initError[0] != null ? initError[0] : "KeyAuth initialization timeout";
                    Log.e(TAG, "KeyAuth initialization failed: " + error);
                    callback.onError("Authentication initialization failed: " + error);
                    return false;
                }
            }

            Log.d(TAG, "KeyAuth validation completed successfully");
            return true;

        } catch (Exception e) {
            Log.e(TAG, "Error validating KeyAuth initialization", e);
            callback.onError("Authentication validation failed: " + e.getMessage());
            return false;
        }
    }

    /**
     * PHASE 6: Download JavaScript patches from KeyAuth file system
     *
     * @return List of downloaded and processed patches
     */
    private List<Patch> downloadPatchesFromKeyAuth() {
        List<Patch> patches = new ArrayList<>();

        Log.d(TAG, "Starting KeyAuth file downloads for " + PATCH_FILE_IDS.size() + " patch files");

        for (Map.Entry<String, String> entry : PATCH_FILE_IDS.entrySet()) {
            String patchKey = entry.getKey();
            String fileId = entry.getValue();

            try {
                Log.d(TAG, "Downloading patch: " + patchKey + " (File ID: " + fileId + ")");

                // Download patch file from KeyAuth
                byte[] patchData = downloadFileFromKeyAuth(fileId);

                if (patchData != null && patchData.length > 0) {
                    // Process downloaded patch data
                    Patch patch = processPatchData(patchKey, fileId, patchData);

                    if (patch != null) {
                        patches.add(patch);
                        Log.i(TAG, "Successfully processed patch: " + patchKey);
                    } else {
                        Log.w(TAG, "Failed to process patch data for: " + patchKey);
                    }
                } else {
                    Log.w(TAG, "No data downloaded for patch: " + patchKey);
                }

            } catch (Exception e) {
                Log.e(TAG, "Error downloading patch " + patchKey + ": " + e.getMessage(), e);
                // Continue with other patches even if one fails
            }
        }

        Log.i(TAG, "Completed KeyAuth downloads. Successfully processed " + patches.size() + " patches");
        return patches;
    }

    /**
     * Create mock patches for demonstration (fallback)
     * @return List of mock patches
     */
    private List<Patch> createMockPatches() {
        List<Patch> patches = new ArrayList<>();
        
        // Add mock patches
        patches.add(new Patch(
                "1",
                "Memory Patch v1.2",
                "This patch modifies memory values to enhance gameplay",
                "1.0.5",
                "2023-06-15",
                Patch.PatchStatus.UP_TO_DATE
        ));
        
        patches.add(new Patch(
                "2",
                "Speed Hack v2.0",
                "Increases movement speed and reduces cooldowns",
                "1.0.5",
                "2023-06-10",
                Patch.PatchStatus.UPDATE_AVAILABLE
        ));
        
        patches.add(new Patch(
                "3",
                "Resource Modifier v1.5",
                "Modifies resource generation and collection rates",
                "1.0.4",
                "2023-05-28",
                Patch.PatchStatus.NOT_INSTALLED
        ));
        
        return patches;
    }

    /**
     * PHASE 6: Download file from KeyAuth using file ID
     *
     * @param fileId KeyAuth file ID (e.g., "362906")
     * @return Downloaded file data as byte array, null if failed
     */
    private byte[] downloadFileFromKeyAuth(String fileId) {
        try {
            Log.d(TAG, "Initiating KeyAuth file download for ID: " + fileId);

            // Construct KeyAuth file download URL
            // Based on KeyAuth API 1.3 file download endpoint
            String downloadUrl = "https://keyauth.win/api/1.3/?type=file&fileid=" + fileId +
                                "&sessionid=" + keyAuthManager.getSessionId() +
                                "&name=" + keyAuthManager.getAppName() +
                                "&ownerid=" + keyAuthManager.getOwnerId();

            Log.d(TAG, "KeyAuth download URL constructed for file: " + fileId);

            // Create HTTP request
            Request request = new Request.Builder()
                    .url(downloadUrl)
                    .get()
                    .addHeader("User-Agent", "KeyAuth")
                    .build();

            // Execute request synchronously
            try (Response response = httpClient.newCall(request).execute()) {
                if (response.isSuccessful()) {
                    byte[] data = response.body().bytes();
                    Log.i(TAG, "Successfully downloaded " + data.length + " bytes for file ID: " + fileId);
                    return data;
                } else {
                    Log.e(TAG, "KeyAuth file download failed. Response code: " + response.code() +
                              " for file ID: " + fileId);
                    return null;
                }
            }

        } catch (IOException e) {
            Log.e(TAG, "Network error downloading file from KeyAuth: " + fileId, e);
            return null;
        } catch (Exception e) {
            Log.e(TAG, "Unexpected error downloading file from KeyAuth: " + fileId, e);
            return null;
        }
    }

    /**
     * PHASE 6: Process downloaded patch data into Patch object
     *
     * @param patchKey Patch identifier key
     * @param fileId KeyAuth file ID
     * @param patchData Raw patch data from KeyAuth
     * @return Processed Patch object, null if processing failed
     */
    private Patch processPatchData(String patchKey, String fileId, byte[] patchData) {
        try {
            Log.d(TAG, "Processing patch data for: " + patchKey);

            // Convert bytes to string (assuming JavaScript content)
            String patchContent = new String(patchData, StandardCharsets.UTF_8);

            // Validate patch content
            if (patchContent.trim().isEmpty()) {
                Log.w(TAG, "Empty patch content for: " + patchKey);
                return null;
            }

            // Determine target package from patch key
            String targetPackage = determineTargetPackage(patchKey);

            // Extract patch metadata (if available in content)
            PatchMetadata metadata = extractPatchMetadata(patchContent);

            // Encrypt patch content for secure storage
            String encryptedContent = AESUtil.encryptForBearMod(patchContent);

            // Store patch file locally
            String localPath = storePatchLocally(patchKey, encryptedContent);

            // Create Patch object with enhanced metadata
            Patch patch = new Patch(
                    fileId,  // Use file ID as patch ID
                    metadata.name != null ? metadata.name : "JavaScript Patch " + patchKey,
                    metadata.description != null ? metadata.description : "KeyAuth distributed JavaScript patch",
                    metadata.gameVersion != null ? metadata.gameVersion : "1.0.0",
                    java.text.DateFormat.getDateInstance().format(new java.util.Date()),
                    Patch.PatchStatus.UP_TO_DATE
            );

            Log.i(TAG, "Successfully processed patch: " + patchKey + " -> " + patch.getName());
            return patch;

        } catch (Exception e) {
            Log.e(TAG, "Error processing patch data for " + patchKey, e);
            return null;
        }
    }

    /**
     * PHASE 6: Determine target PUBG package from patch key
     */
    private String determineTargetPackage(String patchKey) {
        if (patchKey.contains("global")) return PubgPackages.PUBG_PACKAGES[PubgPackages.GLOBAL_INDEX];
        if (patchKey.contains("korea")) return PubgPackages.PUBG_PACKAGES[PubgPackages.KOREA_INDEX];
        if (patchKey.contains("vietnam")) return PubgPackages.PUBG_PACKAGES[PubgPackages.VIETNAM_INDEX];
        if (patchKey.contains("taiwan")) return PubgPackages.PUBG_PACKAGES[PubgPackages.TAIWAN_INDEX];
        return PubgPackages.PUBG_PACKAGES[PubgPackages.GLOBAL_INDEX]; // Default to global
    }

    /**
     * PHASE 6: Extract metadata from patch content
     */
    private PatchMetadata extractPatchMetadata(String content) {
        PatchMetadata metadata = new PatchMetadata();

        try {
            // Look for metadata comments in JavaScript
            String[] lines = content.split("\n");
            for (String line : lines) {
                line = line.trim();
                if (line.startsWith("// @name")) {
                    metadata.name = line.substring(8).trim();
                } else if (line.startsWith("// @description")) {
                    metadata.description = line.substring(15).trim();
                } else if (line.startsWith("// @version")) {
                    metadata.gameVersion = line.substring(11).trim();
                }
            }
        } catch (Exception e) {
            Log.w(TAG, "Error extracting patch metadata", e);
        }

        return metadata;
    }

    /**
     * PHASE 6: Store patch content locally with encryption
     */
    private String storePatchLocally(String patchKey, String encryptedContent) {
        try {
            // Create patches directory
            File patchesDir = new File(context.getFilesDir(), "patches");
            if (!patchesDir.exists()) {
                patchesDir.mkdirs();
            }

            // Create patch file
            File patchFile = new File(patchesDir, patchKey + ".js.enc");

            // Write encrypted content
            try (FileOutputStream fos = new FileOutputStream(patchFile)) {
                fos.write(encryptedContent.getBytes("UTF-8"));
            }

            Log.d(TAG, "Stored patch locally: " + patchFile.getAbsolutePath());
            return patchFile.getAbsolutePath();

        } catch (Exception e) {
            Log.e(TAG, "Error storing patch locally: " + patchKey, e);
            return null;
        }
    }

    /**
     * PHASE 6: Patch metadata container
     */
    private static class PatchMetadata {
        String name;
        String description;
        String gameVersion;
    }

    /**
     * Patch callback interface
     */
    public interface PatchCallback {
        void onSuccess(List<Patch> patches);
        void onError(String error);
    }

    /**
     * PHASE 6: Patch content callback interface for JSEnginePatchManager integration
     */
    public interface PatchContentCallback {
        void onSuccess(String patchContent);
        void onError(String error);
    }
}
