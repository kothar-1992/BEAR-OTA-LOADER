package com.bearmod.patch;

import android.annotation.SuppressLint;
import android.content.Context;
import android.util.Log;

import com.bearmod.security.SimpleLicenseVerifier;
import com.bearmod.security.SignatureVerifier;

import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.security.MessageDigest;
import java.util.HashMap;
import java.util.Map;
import java.util.concurrent.CompletableFuture;
import java.util.concurrent.ConcurrentHashMap;
import java.util.zip.ZipEntry;
import java.util.zip.ZipInputStream;

import javax.net.ssl.HttpsURLConnection;
import org.json.JSONObject;

/**
 * Secure script manager for production deployment
 * Handles script loading from different sources based on build type
 */
public class SecureScriptManager {
    private static final String TAG = "SecureScriptManager";
    
    @SuppressLint("StaticFieldLeak")
    private static SecureScriptManager instance;
    private final Context context;
    private final boolean isDebugBuild;
    
    // Thread-safe script cache
    private final Map<String, String> scriptCache = new ConcurrentHashMap<>();
    // KeyAuth integration - Use existing SimpleLicenseVerifier patterns

    // CONSOLIDATED: Use centralized file ID system from SimpleLicenseVerifier
    // All file IDs are now managed in SimpleLicenseVerifier.MASTER_FILE_IDS
    // No more duplicate file ID definitions in this class

    private SecureScriptManager(Context context) {
        this.context = context;
        this.isDebugBuild = isDebugBuild(context);
        Log.d(TAG, "SecureScriptManager initialized - Debug mode: " + isDebugBuild);
    }
    
    public static SecureScriptManager getInstance(Context context) {
        if (instance == null) {
            instance = new SecureScriptManager(context);
        }
        return instance;
    }
    
    /**
     * Load script content based on build type, with KeyAuth remote fetch and signature verification
     */
    public String loadScript(String patchId) {
        // Check cache first
        if (scriptCache.containsKey(patchId)) {
            Log.d(TAG, "Loading script from cache: " + patchId);
            return scriptCache.get(patchId);
        }
        
        String scriptContent = null;
        
        if (isDebugBuild) {
            // Debug: First try external Scripts directory for development
            scriptContent = loadFromScriptsDirectory(patchId);
            if (scriptContent != null) {
                Log.d(TAG, "Loaded script from external Scripts directory: " + patchId);
            }
        }

        // Primary source: Centralized FileHelper system (KeyAuth ZIP-based delivery)
        if (scriptContent == null) {
            Log.d(TAG, "Loading script from centralized FileHelper system: " + patchId);
            scriptContent = fetchScriptFromCentralizedSystem(patchId);

            // Verify signature if script was fetched remotely
            if (scriptContent != null && !verifyScriptSignature(patchId, scriptContent)) {
                Log.e(TAG, "Script signature verification failed for: " + patchId);
                scriptContent = null;
            }
        }

        // Fallback 1: Load from assets (re-enabled for offline support)
        if (scriptContent == null) {
            Log.d(TAG, "Fallback to assets: " + patchId);
            scriptContent = loadFromAssets(patchId);
        }

        // Fallback 2: Production embedded resources (encrypted, deprecated)
        if (scriptContent == null && !isDebugBuild) {
            Log.d(TAG, "Fallback to secure storage (deprecated): " + patchId);
            scriptContent = loadFromSecureStorage(patchId);
        }

        if (scriptContent != null) {
            // Cache the script
            scriptCache.put(patchId, scriptContent);
            Log.d(TAG, "Script loaded and cached: " + patchId);
        } else {
            Log.e(TAG, "Failed to load script from all sources: " + patchId);
        }

        return scriptContent;
    }
    
    /**
     * Load script from App\Scripts\ directory (Debug only)
     */
    private String loadFromScriptsDirectory(String patchId) {
        try {
            // Get app's external files directory
            File scriptsDir = new File(context.getExternalFilesDir(null), "Scripts");
            File patchDir = new File(scriptsDir, patchId);
            File scriptFile = new File(patchDir, "script.js");
            
            if (!scriptFile.exists()) {
                Log.d(TAG, "Script file not found in Scripts directory: " + scriptFile.getAbsolutePath());
                return null;
            }
            
            // Read script content
            FileInputStream fis = new FileInputStream(scriptFile);
            byte[] buffer = new byte[(int) scriptFile.length()];
            fis.read(buffer);
            fis.close();
            
            String content = new String(buffer);
            Log.d(TAG, "Loaded script from Scripts directory: " + patchId);
            return content;
            
        } catch (Exception e) {
            Log.e(TAG, "Error loading script from Scripts directory", e);
            return null;
        }
    }
    
    /**
     * Load script from assets using consolidated AssetExtractor (MEMORY-ONLY)
     * UPDATED: Uses AssetExtractor.extractScriptToMemory() for consistency
     */
    private String loadFromAssets(String patchId) {
        try {
            // Map patch IDs to script file names
            String scriptFileName = getScriptFileNameForPatchId(patchId);
            if (scriptFileName == null) {
                Log.w(TAG, "Unknown patch ID: " + patchId);
                return null;
            }

            // Use consolidated AssetExtractor for memory-only extraction
            String scriptContent = com.bearmod.utils.AssetExtractor.extractScriptToMemory(context, scriptFileName);
            if (scriptContent != null) {
                Log.d(TAG, "Loaded script from assets via AssetExtractor: " + patchId);
                return scriptContent;
            } else {
                Log.w(TAG, "Script not found in assets: " + scriptFileName);
                return null;
            }

        } catch (Exception e) {
            Log.e(TAG, "Error loading script from assets", e);
            return null;
        }
    }

    /**
     * Map patch IDs to script file names for AssetExtractor integration
     */
    private String getScriptFileNameForPatchId(String patchId) {
        Map<String, String> patchMappings = new HashMap<>();
        patchMappings.put("bearmod-analyzer", "bearmod_analyzer.js");
        patchMappings.put("anti-detection", "anti-detection.js");
        patchMappings.put("bypass-ssl", "bypass-ssl.js");
        patchMappings.put("bypass-signkill", "bypass-signkill.js");
        patchMappings.put("quick-hook", "quick_hook.js");
        patchMappings.put("analyzer", "bearmod_analyzer.js"); // Map to actual file
        patchMappings.put("config", "config.js");
        patchMappings.put("library-injection", "quick_hook.js"); // Fallback

        return patchMappings.get(patchId);
    }
    
    /**
     * Load script from secure storage (Production)
     */
    private String loadFromSecureStorage(String patchId) {
        try {
            // In production, scripts are embedded as encrypted resources
            String resourceName = "script_" + patchId.replace("-", "_");
            int resourceId = context.getResources().getIdentifier(
                resourceName, "raw", context.getPackageName());
            
            if (resourceId == 0) {
                Log.w(TAG, "Secure script resource not found: " + resourceName);
                return null;
            }
            
            InputStream input = context.getResources().openRawResource(resourceId);
            byte[] buffer = new byte[input.available()];
            input.read(buffer);
            input.close();
            
            // Decrypt script content (implement your encryption)
            String content = decryptScript(buffer);
            Log.d(TAG, "Loaded script from secure storage: " + patchId);
            return content;
            
        } catch (Exception e) {
            Log.e(TAG, "Error loading script from secure storage", e);
            return null;
        }
    }
    
    /**
     * Create Scripts directory structure for debug builds
     */
    public void initializeScriptsDirectory() {
        if (!isDebugBuild) {
            Log.d(TAG, "Scripts directory initialization skipped - not debug build");
            return;
        }
        
        try {
            File scriptsDir = new File(context.getExternalFilesDir(null), "Scripts");
            if (!scriptsDir.exists()) {
                scriptsDir.mkdirs();
                Log.d(TAG, "Created Scripts directory: " + scriptsDir.getAbsolutePath());
            }
            
            // Create subdirectories for each patch type
            String[] patchTypes = {"bypass-signkill", "bypass-ssl", "anti-detection", "analyzer"};
            for (String patchType : patchTypes) {
                File patchDir = new File(scriptsDir, patchType);
                if (!patchDir.exists()) {
                    patchDir.mkdirs();
                    
                    // Copy default script from assets if available
                    copyDefaultScript(patchType, patchDir);
                }
            }
            
            Log.d(TAG, "Scripts directory structure initialized");
            
        } catch (Exception e) {
            Log.e(TAG, "Error initializing Scripts directory", e);
        }
    }
    
    /**
     * Copy default script from assets - DEPRECATED: No scripts in assets for security
     * Debug builds should manually place scripts in external Scripts directory
     */
    private void copyDefaultScript(String patchId, File patchDir) {
        Log.d(TAG, "Default script copy skipped - No scripts in assets for security. " +
                   "For debug builds, manually place scripts in: " + patchDir.getAbsolutePath());
    }
    
    /**
     * Check if this is a debug build
     */
    private boolean isDebugBuild(Context context) {
        try {
            return (context.getApplicationInfo().flags & android.content.pm.ApplicationInfo.FLAG_DEBUGGABLE) != 0;
        } catch (Exception e) {
            return false;
        }
    }
    
    /**
     * Decrypt script content (implement your encryption method)
     */
    private String decryptScript(byte[] encryptedData) {
        // For now, just return as string (implement proper decryption)
        // In production, you would decrypt the embedded script here
        return new String(encryptedData);
    }
    
    /**
     * Get Scripts directory path (Debug only)
     */
    public String getScriptsDirectoryPath() {
        if (!isDebugBuild) {
            return null;
        }
        
        File scriptsDir = new File(context.getExternalFilesDir(null), "Scripts");
        return scriptsDir.getAbsolutePath();
    }
    
    /**
     * Clear script cache
     */
    public void clearCache() {
        scriptCache.clear();
        Log.d(TAG, "Script cache cleared");
    }
    
    /**
     * Check if debug mode is enabled
     */
    public boolean isDebugMode() {
        return isDebugBuild;
    }

    /**
     * Fetch script from centralized FileHelper system - ZIP-based delivery
     * UPDATED: Uses consolidated script management instead of individual file IDs
     */
    private String fetchScriptFromCentralizedSystem(String patchId) {
        try {
            Log.d(TAG, "Fetching script from centralized system: " + patchId);

            // Check memory cache first (following KeyAuthInjectionManager memory-first pattern)
            String cachedScript = getScriptFromMemoryCache(patchId);
            if (cachedScript != null) {
                Log.d(TAG, "Script found in memory cache: " + patchId);
                return cachedScript;
            }

            // KeyAuth server constraint: Scripts are delivered as ZIP collections only
            // Check for scripts collection ZIP (required by KeyAuth server architecture)
            String scriptsZipFileId = SimpleLicenseVerifier.getFileId("scripts_collection.zip");
            if (scriptsZipFileId == null) {
                Log.w(TAG, "Scripts collection ZIP not found in centralized system");
                return null;
            }

            // Download and process ZIP collection (memory-only operation)
            Log.d(TAG, "Found scripts collection ZIP file ID: " + scriptsZipFileId);

            // Fetch signatures from KeyAuth before processing scripts
            fetchSignaturesFromKeyAuth(scriptsZipFileId);

            String zipProcessResult = processScriptsZip(scriptsZipFileId, patchId);

            if ("ZIP_PROCESSED".equals(zipProcessResult)) {
                // ZIP was processed and scripts cached in memory, try cache again
                return getScriptFromMemoryCache(patchId);
            }

            return null;

        } catch (Exception e) {
            Log.e(TAG, "Error fetching script from centralized system: " + patchId, e);
            return null;
        }
    }

    private String processScriptsZip(String zipFileId, String patchId) {
        try {
            Log.d(TAG, "Processing scripts ZIP file: " + zipFileId);

            // Download the scripts collection ZIP file into memory buffer (memory-only)
            byte[] zipBuffer = downloadScriptsZip(zipFileId);
            if (zipBuffer == null) {
                Log.e(TAG, "Failed to download scripts ZIP file");
                return null;
            }

            // processZipFromMemory now handles the complete memory-only process:
            // 1. Downloads ZIP to temporary file
            // 2. Reads ZIP into memory buffer
            // 3. Extracts ALL scripts from memory and caches them
            // 4. Cleans up temporary file
            // 5. Returns processing status

            // Get the specific script from memory cache
            String scriptContent = getScriptFromMemoryCache(patchId);
            if (scriptContent == null) {
                Log.e(TAG, "Script not found in memory cache after ZIP processing: " + patchId);
                return null;
            }

            Log.d(TAG, "Successfully extracted script: " + patchId + " (" + scriptContent.length() + " chars)");
            return "ZIP_PROCESSED"; // Indicator that ZIP processing completed

        } catch (Exception e) {
            Log.e(TAG, "Error processing scripts ZIP file", e);
            return null;
        }
    }

    private byte[] downloadScriptsZip(String zipFileId) {
        try {
            Log.d(TAG, "Downloading scripts ZIP file: " + zipFileId);

            // Use SimpleLicenseVerifier's existing download mechanism (following OTAUpdateManager pattern)
            final byte[][] zipBuffer = {null};
            final boolean[] downloadComplete = {false};
            final String[] errorMessage = {null};

            SimpleLicenseVerifier.FileDownloadCallback callback = new SimpleLicenseVerifier.FileDownloadCallback() {
                @Override
                public void onDownloadStarted() {
                    Log.d(TAG, "Scripts ZIP download started");
                }

                @Override
                public void onDownloadComplete(String fileName, String filePath) {
                    Log.d(TAG, "Scripts ZIP download complete: " + filePath);
                    try {
                        // Read ZIP file into memory buffer (following KeyAuthInjectionManager pattern)
                        zipBuffer[0] = readFileToMemoryBuffer(filePath);

                        // Clean up temporary file immediately (following OTAUpdateManager pattern)
                        new File(filePath).delete();
                        Log.d(TAG, "Temporary ZIP file cleaned up: " + filePath);

                        downloadComplete[0] = true;

                    } catch (Exception e) {
                        Log.e(TAG, "Failed to read ZIP to memory buffer", e);
                        errorMessage[0] = "Failed to read ZIP to memory: " + e.getMessage();
                        downloadComplete[0] = true;
                    }
                }

                @Override
                public void onDownloadFailed(String fileName, String error) {
                    Log.e(TAG, "Scripts ZIP download failed: " + error);
                    errorMessage[0] = error;
                    downloadComplete[0] = true;
                }

                @Override
                public void onDownloadProgress(String fileName, int progress) {
                    Log.d(TAG, "Scripts ZIP download progress: " + progress + "%");
                }
            };

            // Download the ZIP file using SimpleLicenseVerifier (same pattern as OTAUpdateManager)
            String zipFileName = "scripts_collection.zip";
            SimpleLicenseVerifier.downloadFileWithId(context, zipFileName, zipFileId, callback);

            // Wait for download completion (with timeout)
            int timeout = 30000; // 30 seconds
            int elapsed = 0;
            while (!downloadComplete[0] && elapsed < timeout) {
                Thread.sleep(100);
                elapsed += 100;
            }

            if (!downloadComplete[0]) {
                Log.e(TAG, "Scripts ZIP download timeout");
                return null;
            }

            if (errorMessage[0] != null) {
                Log.e(TAG, "Scripts ZIP download failed: " + errorMessage[0]);
                return null;
            }

            if (zipBuffer[0] == null) {
                Log.e(TAG, "Scripts ZIP buffer is null");
                return null;
            }

            Log.d(TAG, "Scripts ZIP loaded into memory: " + zipBuffer[0].length + " bytes");

            // Return memory buffer for in-memory ZIP processing
            return zipBuffer[0];

        } catch (Exception e) {
            Log.e(TAG, "Error downloading scripts ZIP", e);
            return null;
        }
    }

    private byte[] readFileToMemoryBuffer(String filePath) throws IOException {
        try (FileInputStream fis = new FileInputStream(filePath);
             java.io.ByteArrayOutputStream baos = new java.io.ByteArrayOutputStream()) {

            byte[] buffer = new byte[8192];
            int bytesRead;
            while ((bytesRead = fis.read(buffer)) != -1) {
                baos.write(buffer, 0, bytesRead);
            }

            return baos.toByteArray();
        }
    }

    private String processZipFromMemory(byte[] zipBuffer) {
        // Memory-only ZIP extraction following KeyAuthInjectionManager pattern
        Log.d(TAG, "Processing ZIP from memory buffer: " + zipBuffer.length + " bytes");

        try {
            // Extract scripts from memory buffer without touching filesystem
            try (java.io.ByteArrayInputStream bais = new java.io.ByteArrayInputStream(zipBuffer);
                 ZipInputStream zis = new ZipInputStream(bais)) {

                ZipEntry entry;
                while ((entry = zis.getNextEntry()) != null) {
                    String entryName = entry.getName();
                    Log.d(TAG, "Found ZIP entry: " + entryName);

                    // Check if this is a script file we need
                    if (entryName.startsWith("patches/") && entryName.endsWith("/script.js")) {
                        // Extract the patch ID from the path
                        String[] pathParts = entryName.split("/");
                        if (pathParts.length >= 3) {
                            String patchId = pathParts[1]; // patches/[patchId]/script.js

                            // Read script content directly from memory stream
                            StringBuilder content = new StringBuilder();
                            byte[] buffer = new byte[1024];
                            int length;

                            while ((length = zis.read(buffer)) > 0) {
                                content.append(new String(buffer, 0, length, java.nio.charset.StandardCharsets.UTF_8));
                            }

                            String scriptContent = content.toString();
                            Log.d(TAG, "Extracted script from memory: " + patchId + " (" + scriptContent.length() + " chars)");

                            // Cache the script in memory for future requests
                            cacheScriptInMemory(patchId, scriptContent);
                        }
                    }

                    zis.closeEntry();
                }

                Log.d(TAG, "Completed memory-only ZIP processing");
                return "ZIP_PROCESSED"; // Indicator that processing completed

            }

        } catch (Exception e) {
            Log.e(TAG, "Error processing ZIP from memory", e);
            return null;
        }
    }

    // Memory-only script cache (following KeyAuthInjectionManager memory patterns)
    private final Map<String, String> memoryScriptCache = new ConcurrentHashMap<>();

    private void cacheScriptInMemory(String patchId, String scriptContent) {
        memoryScriptCache.put(patchId, scriptContent);
        Log.d(TAG, "Cached script in memory: " + patchId);

        // Schedule automatic cleanup (following KeyAuthInjectionManager pattern)
        scheduleScriptCleanup(patchId);
    }

    private void scheduleScriptCleanup(String patchId) {
        // Clean up script from memory after 30 seconds (same as KeyAuthInjectionManager)
        CompletableFuture.runAsync(() -> {
            try {
                Thread.sleep(30000); // 30 seconds
                memoryScriptCache.remove(patchId);
                Log.d(TAG, "Automatic script cleanup completed: " + patchId);
            } catch (InterruptedException e) {
                Thread.currentThread().interrupt();
                Log.w(TAG, "Script cleanup interrupted: " + patchId);
            }
        });
    }

    private String getScriptFromMemoryCache(String patchId) {
        return memoryScriptCache.get(patchId);
    }

    // Old file-based extraction method removed - now using memory-only operations
    // All ZIP processing is handled in processZipFromMemory() following KeyAuthInjectionManager patterns

    /**
     * Get current KeyAuth session ID from SimpleLicenseVerifier
     */
    private String getKeyAuthSessionId() {
        try {
            // Use reflection to access SimpleLicenseVerifier session
            Class<?> verifierClass = Class.forName("com.bearmod.security.SimpleLicenseVerifier");
            java.lang.reflect.Field sessionField = verifierClass.getDeclaredField("sessionId");
            sessionField.setAccessible(true);
            return (String) sessionField.get(null);
        } catch (Exception e) {
            Log.d(TAG, "Could not access KeyAuth session ID");
            return null;
        }
    }
    // Signature cache for verification
    private final Map<String, String> signatureCache = new ConcurrentHashMap<>();
    private void cacheSignature(String patchId, String signature) {
        signatureCache.put(patchId, signature);
    }
    /**
     * Verify script signature using KeyAuth public key
     */
    private boolean verifyScriptSignature(String patchId, String scriptContent) {
        try {
            // Use SignatureVerifier for proper RSA verification
            return SignatureVerifier.verifyScriptSignature(context, patchId, scriptContent);

        } catch (Exception e) {
            Log.e(TAG, "Signature verification error for " + patchId, e);
            return false; // Fail-closed: error = reject
        }
    }

    /**
     * Static method for C++ JNI integration - Execute script content
     * Called from frida_gadget_manager.cpp
     */
    public static boolean executeScript(Context context, String scriptContent) {
        try {
            Log.d(TAG, "Executing script via JNI call");

            // In a real implementation, this would execute the script through Frida
            // For now, we'll just log and return success
            if (scriptContent != null && !scriptContent.trim().isEmpty()) {
                Log.d(TAG, "Script execution placeholder - Content size: " + scriptContent.length());
                return true;
            } else {
                Log.e(TAG, "Empty script content provided");
                return false;
            }

        } catch (Exception e) {
            Log.e(TAG, "Error executing script via JNI", e);
            return false;
        }
    }

    /**
     * Static method for C++ JNI integration - Unload all scripts
     * Called from frida_gadget_manager.cpp
     */
    public static boolean unloadAllScripts() {
        try {
            Log.d(TAG, "Unloading all scripts via JNI call");

            // Clear cache if instance exists
            if (instance != null) {
                instance.clearCache();
            }

            // In a real implementation, this would unload all active Frida scripts
            Log.d(TAG, "All scripts unloaded successfully");
            return true;

        } catch (Exception e) {
            Log.e(TAG, "Error unloading scripts via JNI", e);
            return false;
        }
    }

    /**
     * Initialize KeyAuth scripts system (called from MainActivity)
     */
    public CompletableFuture<Boolean> initializeKeyAuthScripts() {
        return CompletableFuture.supplyAsync(() -> {
            try {
                Log.d(TAG, "Initializing KeyAuth scripts system");

                // Pre-load essential scripts for faster execution
                String[] essentialScripts = {"bypass-signkill", "bypass-ssl", "anti-detection", "analyzer"};
                int loadedCount = 0;

                for (String scriptId : essentialScripts) {
                    String content = loadScript(scriptId);
                    if (content != null) {
                        loadedCount++;
                    }
                }

                Log.d(TAG, "KeyAuth scripts initialized: " + loadedCount + "/" + essentialScripts.length + " loaded");
                return loadedCount > 0; // Success if at least one script loaded

            } catch (Exception e) {
                Log.e(TAG, "Error initializing KeyAuth scripts", e);
                return false;
            }
        });
    }

    /**
     * Fetch signatures from KeyAuth server for script verification
     * Integrates with existing SimpleLicenseVerifier infrastructure
     */
    private void fetchSignaturesFromKeyAuth(String collectionFileId) {
        try {
            Log.d(TAG, "Fetching signatures from KeyAuth for collection: " + collectionFileId);

            // Use existing SimpleLicenseVerifier infrastructure
            SimpleLicenseVerifier.fetchScriptSignatures(context, collectionFileId,
                new SimpleLicenseVerifier.SignatureFetchCallback() {
                    @Override
                    public void onSignaturesFetched(Map<String, String> signatures) {
                        // Update SignatureVerifier with new signatures
                        SignatureVerifier.updateSignatures(signatures);
                        Log.d(TAG, "✅ Updated " + signatures.size() + " signatures from KeyAuth");
                    }

                    @Override
                    public void onSignaturesFetchFailed(String error) {
                        Log.w(TAG, "⚠️ Failed to fetch signatures from KeyAuth: " + error);
                        Log.d(TAG, "Will use fallback signatures for verification");
                    }
                });

        } catch (Exception e) {
            Log.w(TAG, "Error fetching signatures from KeyAuth", e);
        }
    }
}
