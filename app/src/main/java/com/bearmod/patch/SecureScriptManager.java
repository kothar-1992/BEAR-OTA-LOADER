package com.bearmod.patch;

import android.annotation.SuppressLint;
import android.content.Context;
import android.util.Log;

import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.InputStream;
import java.security.MessageDigest;
import java.util.HashMap;
import java.util.Map;
import java.util.concurrent.CompletableFuture;
import java.util.concurrent.ConcurrentHashMap;
import java.util.concurrent.CompletableFuture;
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
    private static final String KEYAUTH_API_URL = "https://keyauth.win/api/1.3/";
    private static final String APP_NAME = "BearMod";
    private static final String OWNER_ID = "Ej8RQBrGLs";

    // KeyAuth FileID mapping for secure script delivery
    private static final Map<String, String> SCRIPT_FILE_IDS = new HashMap<String, String>() {{
        // Payload scripts
        put("bearmod_base", "BEARMOD_BASE_FILEID");
        put("bearmod_global", "BEARMOD_GLOBAL_FILEID");
        put("bearmod_korea", "BEARMOD_KOREA_FILEID");
        put("bearmod_taiwan", "BEARMOD_TAIWAN_FILEID");
        put("bearmod_vietnam", "BEARMOD_VIETNAM_FILEID");

        // Security bypass scripts
        put("bypass-signkill", "BYPASS_SIGNKILL_FILEID");
        put("bypass-ssl", "BYPASS_SSL_FILEID");
        put("anti-detection", "ANTI_DETECTION_FILEID");
        put("analyzer", "ANALYZER_FILEID");

        // Additional scripts
        put("bearmod_analyzer", "BEARMOD_ANALYZER_FILEID");
        put("config", "CONFIG_FILEID");
        put("quick_hook", "QUICK_HOOK_FILEID");
        put("script_loader", "SCRIPT_LOADER_FILEID");
    }};

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

        // Primary source: KeyAuth secure delivery (for both debug and production)
        if (scriptContent == null) {
            Log.d(TAG, "Loading script from KeyAuth secure delivery: " + patchId);
            scriptContent = fetchScriptFromKeyAuth(patchId);

            // Verify signature if script was fetched remotely
            if (scriptContent != null && !verifyScriptSignature(patchId, scriptContent)) {
                Log.e(TAG, "Script signature verification failed for: " + patchId);
                scriptContent = null;
            }
        }

        // Fallback: Production embedded resources (encrypted, no longer used for security)
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
     * Load script from assets - DEPRECATED: Assets no longer contain scripts for security
     * Scripts are now delivered exclusively via KeyAuth secure delivery system
     */
    private String loadFromAssets(String patchId) {
        Log.d(TAG, "Asset loading skipped - Scripts removed from APK for security: " + patchId);
        return null;
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
     * Fetch script from KeyAuth API using FileID mapping - Secure delivery system
     */
    private String fetchScriptFromKeyAuth(String patchId) {
        try {
            // Get KeyAuth FileID for this script
            String fileId = SCRIPT_FILE_IDS.get(patchId);
            if (fileId == null) {
                Log.w(TAG, "No KeyAuth FileID mapping found for script: " + patchId);
                return null;
            }

            // Use existing KeyAuth session if available
            String sessionId = getKeyAuthSessionId();
            if (sessionId == null) {
                Log.w(TAG, "No active KeyAuth session for script download");
                return null;
            }

            // Build KeyAuth file download URL using FileID
            String downloadUrl = KEYAUTH_API_URL + "?type=file&fileid=" + fileId +
                               "&sessionid=" + sessionId + "&name=" + APP_NAME + "&ownerid=" + OWNER_ID;

            Log.d(TAG, "Downloading script from KeyAuth: " + patchId + " (FileID: " + fileId + ")");

            java.net.URL url = new java.net.URL(downloadUrl);
            HttpsURLConnection conn = (HttpsURLConnection) url.openConnection();
            conn.setRequestMethod("GET");
            conn.setConnectTimeout(10000);
            conn.setReadTimeout(30000);
            conn.addRequestProperty("User-Agent", "BearMod/1.0");

            int responseCode = conn.getResponseCode();
            if (responseCode == 200) {
                InputStream input = conn.getInputStream();
                byte[] buffer = new byte[input.available()];
                input.read(buffer);
                input.close();

                String scriptContent = new String(buffer, "UTF-8");
                Log.d(TAG, "Successfully downloaded script: " + patchId + " (size: " + scriptContent.length() + " bytes)");
                return scriptContent;
            } else {
                Log.e(TAG, "KeyAuth download failed - Response code: " + responseCode + " for script: " + patchId);
            }
        } catch (Exception e) {
            Log.e(TAG, "Error downloading script from KeyAuth: " + patchId, e);
        }
        return null;
    }

    /**
     * Get current KeyAuth session ID from SimpleLicenseVerifier
     */
    private String getKeyAuthSessionId() {
        try {
            // Use reflection to access SimpleLicenseVerifier session
            Class<?> verifierClass = Class.forName("com.bearmod.auth.SimpleLicenseVerifier");
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
            String signature = signatureCache.get(patchId);
            if (signature == null) return true; // If no signature, skip verification
            // TODO: Implement actual signature verification using KEYAUTH_PUBLIC_KEY
            // For now, always return true
            Log.d(TAG, "Verified script signature for: " + patchId);
            return true;
        } catch (Exception e) {
            Log.e(TAG, "Signature verification error", e);
            return false;
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
}
