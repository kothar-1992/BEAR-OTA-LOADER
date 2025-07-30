package com.bearmod.loader.patch;

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
import java.util.concurrent.ConcurrentHashMap;
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
    // KeyAuth API endpoint and public key (replace with your actual values)
    private static final String KEYAUTH_API_URL = "https://keyauth.com/api/scripts";
    private static final String KEYAUTH_PUBLIC_KEY = "YOUR_KEYAUTH_PUBLIC_KEY_HERE";

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
            // Debug: Load from App\Scripts\ directory
            scriptContent = loadFromScriptsDirectory(patchId);
            if (scriptContent == null) {
                // Fallback to assets for debug
                scriptContent = loadFromAssets(patchId);
            }
        } else {
            // Production: Load from secure embedded resources
            scriptContent = loadFromSecureStorage(patchId);
        }
        
        if (scriptContent != null) {
            // Cache the script
            scriptCache.put(patchId, scriptContent);
            Log.d(TAG, "Script loaded and cached: " + patchId);
        } else {
            Log.e(TAG, "Failed to load script: " + patchId);
        }
        
        // Advanced: Try remote fetch via KeyAuth API
        scriptContent = fetchScriptFromKeyAuth(patchId);
        // Verify signature if script was fetched remotely
        if (scriptContent != null && verifyScriptSignature(patchId, scriptContent)) {
            scriptCache.put(patchId, scriptContent);
            Log.d(TAG, "Script loaded, verified, and cached: " + patchId);
        } else if (scriptContent != null) {
            Log.e(TAG, "Script signature verification failed for: " + patchId);
            scriptContent = null;
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
     * Load script from assets (Debug fallback)
     */
    private String loadFromAssets(String patchId) {
        try {
            String assetPath = "patches/" + patchId + "/script.js";
            InputStream input = context.getAssets().open(assetPath);
            
            byte[] buffer = new byte[input.available()];
            input.read(buffer);
            input.close();
            
            String content = new String(buffer);
            Log.d(TAG, "Loaded script from assets: " + patchId);
            return content;
            
        } catch (Exception e) {
            Log.d(TAG, "Script not found in assets: " + patchId);
            return null;
        }
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
     * Copy default script from assets to Scripts directory
     */
    private void copyDefaultScript(String patchId, File patchDir) {
        try {
            String assetPath = "patches/" + patchId + "/script.js";
            InputStream input = context.getAssets().open(assetPath);
            
            File scriptFile = new File(patchDir, "script.js");
            FileOutputStream output = new FileOutputStream(scriptFile);
            
            byte[] buffer = new byte[4096];
            int read;
            while ((read = input.read(buffer)) != -1) {
                output.write(buffer, 0, read);
            }
            
            input.close();
            output.close();
            
            Log.d(TAG, "Copied default script to Scripts directory: " + patchId);
            
        } catch (Exception e) {
            Log.d(TAG, "No default script to copy for: " + patchId);
        }
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
     * Fetch script from KeyAuth API (remote server)
     */
    private String fetchScriptFromKeyAuth(String patchId) {
        try {
            String urlStr = KEYAUTH_API_URL + "/" + patchId;
            java.net.URL url = new java.net.URL(urlStr);
            HttpsURLConnection conn = (HttpsURLConnection) url.openConnection();
            conn.setRequestMethod("GET");
            conn.setConnectTimeout(5000);
            conn.setReadTimeout(5000);
            int responseCode = conn.getResponseCode();
            if (responseCode == 200) {
                InputStream input = conn.getInputStream();
                byte[] buffer = new byte[input.available()];
                input.read(buffer);
                input.close();
                String response = new String(buffer);
                JSONObject json = new JSONObject(response);
                String script = json.optString("script", null);
                String signature = json.optString("signature", null);
                // Store signature for verification
                cacheSignature(patchId, signature);
                Log.d(TAG, "Fetched script from KeyAuth: " + patchId);
                return script;
            } else {
                Log.w(TAG, "KeyAuth API response code: " + responseCode);
            }
        } catch (Exception e) {
            Log.e(TAG, "Error fetching script from KeyAuth", e);
        }
        return null;
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
            if (signature == null) {
                Log.w(TAG, "No signature found for patch: " + patchId);
                return true; // Allow unsigned scripts for development
            }

            // Implement actual signature verification using KEYAUTH_PUBLIC_KEY
            if (KEYAUTH_PUBLIC_KEY == null || KEYAUTH_PUBLIC_KEY.isEmpty()) {
                Log.w(TAG, "KeyAuth public key not configured");
                return false;
            }

            // Create hash of script content
            java.security.MessageDigest digest = java.security.MessageDigest.getInstance("SHA-256");
            byte[] scriptHash = digest.digest(scriptContent.getBytes("UTF-8"));
            String scriptHashHex = bytesToHex(scriptHash);

            // Verify signature using RSA with KeyAuth public key
            java.security.spec.X509EncodedKeySpec keySpec = new java.security.spec.X509EncodedKeySpec(
                android.util.Base64.decode(KEYAUTH_PUBLIC_KEY, android.util.Base64.DEFAULT));
            java.security.KeyFactory keyFactory = java.security.KeyFactory.getInstance("RSA");
            java.security.PublicKey publicKey = keyFactory.generatePublic(keySpec);

            java.security.Signature sig = java.security.Signature.getInstance("SHA256withRSA");
            sig.initVerify(publicKey);
            sig.update(scriptHashHex.getBytes("UTF-8"));

            boolean isValid = sig.verify(android.util.Base64.decode(signature, android.util.Base64.DEFAULT));

            if (isValid) {
                Log.d(TAG, "Script signature verified successfully for: " + patchId);
            } else {
                Log.e(TAG, "Script signature verification failed for: " + patchId);
            }

            return isValid;

        } catch (Exception e) {
            Log.e(TAG, "Signature verification error for " + patchId + ": " + e.getMessage());
            return false;
        }
    }

    /**
     * Convert byte array to hex string
     */
    private String bytesToHex(byte[] bytes) {
        StringBuilder result = new StringBuilder();
        for (byte b : bytes) {
            result.append(String.format("%02x", b));
        }
        return result.toString();
    }
}
