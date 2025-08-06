package com.bearmod.security;

import android.content.Context;
import android.content.Intent;
import android.util.Log;
import com.bearmod.security.SimpleLicenseVerifier;
import com.bearmod.security.AuthenticationManager;

/**
 * Unified Security Manager - Consolidates all security functionality
 * Eliminates code duplication and provides single entry point for security operations
 * Integrates authentication, encryption, signatures, and secure communication
 */
public class SecurityManager {
    private static final String TAG = "SecurityManager";
    
    // Singleton instance
    private static SecurityManager instance;
    private static final Object lock = new Object();
    
    private Context context;
    private boolean initialized = false;
    
    private SecurityManager(Context context) {
        this.context = context.getApplicationContext();
    }
    
    /**
     * Get singleton instance
     */
    public static SecurityManager getInstance(Context context) {
        synchronized (lock) {
            if (instance == null) {
                instance = new SecurityManager(context);
            }
            return instance;
        }
    }
    
    /**
     * Initialize security system with AES key
     * Consolidates crypto initialization across all components
     */
    public boolean initialize(String aesKey) {
        try {
            if (aesKey == null || !AESUtil.isValidKey(aesKey)) {
                Log.e(TAG, "❌ Invalid AES key for security initialization");
                return false;
            }
            
            // Initialize AES crypto system
            AESKeyProvider.setKey(aesKey);
            
            // Perform self-test to verify functionality
            AESUtil.selfTest();
            
            initialized = true;
            Log.d(TAG, "✅ Security system initialized successfully");
            return true;
            
        } catch (Exception e) {
            Log.e(TAG, "❌ Failed to initialize security system", e);
            initialized = false;
            return false;
        }
    }
    
    /**
     * CONSOLIDATED AUTHENTICATION - Single entry point
     * Replaces duplicate logic in SimpleLicenseVerifier and AuthenticationManager
     */
    public boolean authenticate(String licenseKey) {
        try {
            Log.d(TAG, "Performing consolidated authentication");
            
            // Use SimpleLicenseVerifier for KeyAuth authentication
            boolean authResult = SimpleLicenseVerifier.quickLicenseCheck(context, licenseKey);
            
            if (authResult) {
                // Update AuthenticationManager state
                AuthenticationManager.getInstance(context).authenticate(context, licenseKey);
                Log.d(TAG, "✅ Authentication successful");
            } else {
                Log.e(TAG, "❌ Authentication failed");
            }
            
            return authResult;
            
        } catch (Exception e) {
            Log.e(TAG, "❌ Authentication error", e);
            return false;
        }
    }
    
    /**
     * CONSOLIDATED ENCRYPTION - Single entry point for all encryption
     */
    public String encrypt(String plaintext) {
        try {
            if (!initialized) {
                Log.e(TAG, "❌ Security system not initialized");
                return null;
            }
            
            return AESUtil.encryptForPlugin(plaintext);
            
        } catch (Exception e) {
            Log.e(TAG, "❌ Encryption failed", e);
            return null;
        }
    }
    
    /**
     * CONSOLIDATED DECRYPTION - Single entry point for all decryption
     */
    public String decrypt(String encryptedData) {
        try {
            if (!initialized) {
                Log.e(TAG, "❌ Security system not initialized");
                return null;
            }
            
            return AESUtil.decryptFromPlugin(encryptedData);
            
        } catch (Exception e) {
            Log.e(TAG, "❌ Decryption failed", e);
            return null;
        }
    }
    
    /**
     * CONSOLIDATED SIGNATURE VERIFICATION - Single entry point
     */
    public boolean verifySignature(String patchId, String scriptContent) {
        try {
            return SignatureVerifier.verifyScriptSignature(context, patchId, scriptContent);
        } catch (Exception e) {
            Log.e(TAG, "❌ Signature verification error", e);
            return false;
        }
    }
    
    /**
     * CONSOLIDATED INTENT HANDLING - Single entry point for secure intents
     */
    public boolean handleSecureIntent(Intent intent) {
        try {
            if (!initialized) {
                Log.e(TAG, "❌ Security system not initialized");
                return false;
            }
            
            return SecureIntentManager.hasPluginAuthentication(intent);
            
        } catch (Exception e) {
            Log.e(TAG, "❌ Secure intent handling failed", e);
            return false;
        }
    }
    
    /**
     * Get authentication token from secure intent
     */
    public String getAuthTokenFromIntent(Intent intent) {
        try {
            return SecureIntentManager.getAuthToken(intent);
        } catch (Exception e) {
            Log.e(TAG, "❌ Failed to extract auth token", e);
            return null;
        }
    }
    
    /**
     * Check if security system is ready
     */
    public boolean isReady() {
        return initialized && AESKeyProvider.isInitialized();
    }
    
    /**
     * Get security system status
     */
    public String getStatus() {
        if (!initialized) {
            return "❌ NOT_INITIALIZED";
        }
        return "✅ READY - " + AESKeyProvider.getKeyStatus();
    }
    
    /**
     * Clear security system (cleanup)
     */
    public void clear() {
        try {
            AESKeyProvider.clear();
            initialized = false;
            Log.d(TAG, "🧹 Security system cleared");
        } catch (Exception e) {
            Log.e(TAG, "Error clearing security system", e);
        }
    }
    
    /**
     * Check if user is authenticated
     */
    public boolean isAuthenticated() {
        try {
            return AuthenticationManager.getInstance(context).isAuthenticated();
        } catch (Exception e) {
            Log.e(TAG, "Error checking authentication status", e);
            return false;
        }
    }
}
