package com.bearmod.security;

import android.content.Intent;
import org.json.JSONObject;
import java.util.Map;
import java.util.HashMap;

/**
 * Secure Intent manager for encrypted Plugin-to-BearMod communication
 * This class handles decryption of authentication data from Plugin
 */
public class SecureIntentManager {
    private static final String SECURITY_VERSION = "1.0";
    private static final long INTENT_TIMEOUT_MS = 30000; // 30 seconds
    
    /**
     * Extract secure data from encrypted Intent (from Plugin)
     */
    public static Map<String, String> extractSecureData(Intent intent) {
        try {
            String encryptedPayload = intent.getStringExtra("secure_payload");
            if (encryptedPayload == null) {
                throw new SecurityException("No secure payload found in Intent");
            }
            
            String securityVersion = intent.getStringExtra("security_version");
            if (!SECURITY_VERSION.equals(securityVersion)) {
                throw new SecurityException("Incompatible security version: " + securityVersion);
            }
            
            String jsonData = AESUtil.decryptFromPlugin(encryptedPayload);

            // Parse JSON data using JSONObject instead of Gson
            JSONObject jsonObject = new JSONObject(jsonData);
            Map<String, String> data = new HashMap<>();

            // Convert JSONObject to Map
            for (java.util.Iterator<String> keys = jsonObject.keys(); keys.hasNext(); ) {
                String key = keys.next();
                data.put(key, jsonObject.getString(key));
            }
            
            // Verify timestamp (prevent replay attacks)
            String timestampStr = data.get("timestamp");
            if (timestampStr != null) {
                long timestamp = Long.parseLong(timestampStr);
                long currentTime = System.currentTimeMillis();
                if (currentTime - timestamp > INTENT_TIMEOUT_MS) {
                    throw new SecurityException("Intent timestamp too old: " + (currentTime - timestamp) + "ms");
                }
            }
            
            return data;
            
        } catch (Exception e) {
            throw new SecurityException("Failed to extract secure data from Intent", e);
        }
    }
    
    /**
     * Validate Intent security
     */
    public static boolean isSecureIntent(Intent intent) {
        try {
            String encryptedPayload = intent.getStringExtra("secure_payload");
            String securityVersion = intent.getStringExtra("security_version");
            
            return encryptedPayload != null && 
                   SECURITY_VERSION.equals(securityVersion);
        } catch (Exception e) {
            return false;
        }
    }
    
    /**
     * Check if Intent contains Plugin authentication data
     */
    public static boolean hasPluginAuthentication(Intent intent) {
        try {
            if (!isSecureIntent(intent)) {
                return false;
            }
            
            Map<String, String> data = extractSecureData(intent);
            return data.containsKey("launched_from_plugin") && 
                   "true".equals(data.get("launched_from_plugin")) &&
                   data.containsKey("auth_token");
        } catch (Exception e) {
            return false;
        }
    }
    
    /**
     * Extract authentication token from Plugin Intent
     */
    public static String getAuthToken(Intent intent) {
        try {
            Map<String, String> data = extractSecureData(intent);
            return data.get("auth_token");
        } catch (Exception e) {
            return null;
        }
    }
    
    /**
     * Extract session ID from Plugin Intent
     */
    public static String getSessionId(Intent intent) {
        try {
            Map<String, String> data = extractSecureData(intent);
            return data.get("session_id");
        } catch (Exception e) {
            return null;
        }
    }
}
