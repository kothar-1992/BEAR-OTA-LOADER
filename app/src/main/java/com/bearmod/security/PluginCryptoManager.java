package com.bearmod.security;

import android.util.Log;
import com.bearmod.security.AESKeyProvider;
import com.bearmod.security.AESUtil;
import com.bearmod.security.SignatureVerifier;

/**
 * Centralized crypto manager for Plugin system
 * Simplifies encryption, decryption, and signature verification for plugins
 * Integrates with AESUtil, AESKeyProvider, and SignatureVerifier
 */
public class PluginCryptoManager {
    private static final String TAG = "PluginCryptoManager";
    
    /**
     * Initialize plugin crypto system with AES key
     * @param key 32-character AES-256 key
     * @return true if initialization successful
     */
    public static boolean initialize(String key) {
        try {
            if (key == null || key.length() != 32) {
                Log.e(TAG, "❌ Invalid AES key for plugin crypto");
                return false;
            }
            
            // Initialize AES crypto system
            AESKeyProvider.setKey(key);
            
            // Perform self-test to verify functionality
            AESUtil.selfTest();
            
            Log.d(TAG, "✅ Plugin crypto system initialized successfully");
            return true;
            
        } catch (Exception e) {
            Log.e(TAG, "❌ Failed to initialize plugin crypto system", e);
            return false;
        }
    }
    
    /**
     * Decrypt data from Plugin
     * @param encryptedData Base64 encrypted data from Plugin
     * @return decrypted plaintext or null if failed
     */
    public static String decrypt(String encryptedData) {
        try {
            if (!isReady()) {
                Log.e(TAG, "❌ Plugin crypto not initialized");
                return null;
            }
            
            return AESUtil.decryptFromPlugin(encryptedData);
            
        } catch (Exception e) {
            Log.e(TAG, "❌ Failed to decrypt plugin data", e);
            return null;
        }
    }
    
    /**
     * Encrypt data for Plugin
     * @param plainText data to encrypt
     * @return Base64 encrypted data or null if failed
     */
    public static String encrypt(String plainText) {
        try {
            if (!isReady()) {
                Log.e(TAG, "❌ Plugin crypto not initialized");
                return null;
            }
            
            return AESUtil.encryptForPlugin(plainText);
            
        } catch (Exception e) {
            Log.e(TAG, "❌ Failed to encrypt plugin data", e);
            return null;
        }
    }
    
    /**
     * Verify script signature before execution (FAIL-CLOSED)
     * @param patchId script identifier
     * @param scriptContent script content to verify
     * @return true if signature is valid, false otherwise
     */
    public static boolean verifySignature(String patchId, String scriptContent) {
        try {
            boolean isValid = SignatureVerifier.verifyScriptSignature(null, patchId, scriptContent);
            
            if (isValid) {
                Log.d(TAG, "✅ Script signature verified: " + patchId);
            } else {
                Log.e(TAG, "❌ Script signature verification failed: " + patchId + " - REJECTING");
            }
            
            return isValid;
            
        } catch (Exception e) {
            Log.e(TAG, "❌ Error verifying script signature: " + patchId, e);
            return false; // FAIL-CLOSED: Error = reject
        }
    }
    
    /**
     * Check if crypto system is ready for operations
     * @return true if initialized and ready
     */
    public static boolean isReady() {
        return AESKeyProvider.isInitialized();
    }
    
    /**
     * Get crypto system status for debugging
     * @return status string
     */
    public static String getStatus() {
        return "Plugin Crypto: " + AESKeyProvider.getKeyStatus();
    }
    
    /**
     * Clear crypto system (security cleanup)
     */
    public static void clear() {
        try {
            AESKeyProvider.clear();
            Log.d(TAG, "🧹 Plugin crypto system cleared");
        } catch (Exception e) {
            Log.e(TAG, "Error clearing plugin crypto system", e);
        }
    }
    
    /**
     * Rotate AES key for enhanced security
     * @param newKey new 32-character AES-256 key
     * @return true if rotation successful
     */
    public static boolean rotateKey(String newKey) {
        try {
            AESKeyProvider.rotateKey(newKey);
            
            // Verify new key with self-test
            AESUtil.selfTest();
            
            Log.d(TAG, "🔄 Plugin crypto key rotated successfully");
            return true;
            
        } catch (Exception e) {
            Log.e(TAG, "❌ Failed to rotate plugin crypto key", e);
            return false;
        }
    }
}
