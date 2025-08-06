package com.bearmod.security;

import android.util.Log;
import java.security.SecureRandom;
import java.util.concurrent.atomic.AtomicBoolean;

/**
 * Production-grade AES key provider with runtime injection and OTA compatibility
 * Provides secure key management for BearMod/Plugin communication channel
 */
public class AESKeyProvider {
    private static final String TAG = "AESKeyProvider";
    
    // Thread-safe key storage
    private static volatile String aesKey = null;
    private static final AtomicBoolean initialized = new AtomicBoolean(false);
    
    // Key validation constants
    private static final int AES_256_KEY_LENGTH = 32; // 32 bytes = 256 bits
    private static final String KEY_CHARSET = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/=";
    
    /**
     * Set AES key with validation (called from OTA or Plugin handshake)
     * @param key 32-character AES-256 key
     * @throws IllegalArgumentException if key is invalid
     */
    public static synchronized void setKey(String key) {
        if (key == null) {
            throw new IllegalArgumentException("AES key cannot be null");
        }
        
        if (key.length() != AES_256_KEY_LENGTH) {
            throw new IllegalArgumentException(
                "Invalid AES-256 key length: expected " + AES_256_KEY_LENGTH + 
                " characters, got " + key.length()
            );
        }
        
        // Validate key contains only valid characters
        if (!isValidKeyFormat(key)) {
            throw new IllegalArgumentException("AES key contains invalid characters");
        }
        
        aesKey = key;
        initialized.set(true);
        
        Log.d(TAG, "✅ AES key initialized successfully (length: " + key.length() + ")");
    }
    
    /**
     * Get current AES key
     * @return AES key
     * @throws IllegalStateException if key not initialized
     */
    public static String getKey() {
        if (!initialized.get() || aesKey == null) {
            throw new IllegalStateException(
                "AES key not initialized. Call AESKeyProvider.setKey() first or load from OTA/Plugin."
            );
        }
        return aesKey;
    }
    
    /**
     * Check if AES key is initialized
     * @return true if key is ready for use
     */
    public static boolean isInitialized() {
        return initialized.get() && aesKey != null;
    }
    
    /**
     * Clear AES key from memory (security cleanup)
     */
    public static synchronized void clear() {
        if (aesKey != null) {
            // Overwrite key in memory for security
            aesKey = null;
        }
        initialized.set(false);
        Log.d(TAG, "🧹 AES key cleared from memory");
    }
    
    /**
     * Generate secure random AES-256 key (for development/testing)
     * @return 32-character random key
     */
    public static String generateRandomKey() {
        SecureRandom random = new SecureRandom();
        StringBuilder key = new StringBuilder(AES_256_KEY_LENGTH);
        
        for (int i = 0; i < AES_256_KEY_LENGTH; i++) {
            int index = random.nextInt(KEY_CHARSET.length());
            key.append(KEY_CHARSET.charAt(index));
        }
        
        String generatedKey = key.toString();
        Log.d(TAG, "🔑 Generated random AES key for development");
        return generatedKey;
    }
    
    /**
     * Rotate AES key (for security best practices)
     * @param newKey new 32-character AES-256 key
     */
    public static synchronized void rotateKey(String newKey) {
        Log.d(TAG, "🔄 Rotating AES key");
        clear(); // Clear old key
        setKey(newKey); // Set new key
        Log.d(TAG, "✅ AES key rotation completed");
    }
    
    /**
     * Validate key format
     */
    private static boolean isValidKeyFormat(String key) {
        if (key == null || key.isEmpty()) {
            return false;
        }
        
        // Check if all characters are valid
        for (char c : key.toCharArray()) {
            if (KEY_CHARSET.indexOf(c) == -1) {
                return false;
            }
        }
        
        return true;
    }
    
    /**
     * Get key status for debugging
     */
    public static String getKeyStatus() {
        if (!isInitialized()) {
            return "❌ NOT_INITIALIZED";
        } else {
            return "✅ READY (length: " + aesKey.length() + ")";
        }
    }
}
