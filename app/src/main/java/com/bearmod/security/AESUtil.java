package com.bearmod.security;

import android.util.Base64;
import android.util.Log;
import javax.crypto.Cipher;
import javax.crypto.spec.GCMParameterSpec;
import javax.crypto.spec.SecretKeySpec;
import java.nio.charset.StandardCharsets;
import java.security.SecureRandom;

/**
 * Production-grade AES-256-GCM encryption utility with runtime key injection
 * Supports OTA key delivery and Plugin handshake for secure communication
 * No more hardcoded keys - all keys injected at runtime
 */
public class AESUtil {
    private static final String TAG = "AESUtil";
    private static final String ALGORITHM = "AES/GCM/NoPadding";
    private static final int GCM_IV_LENGTH = 12;
    private static final int GCM_TAG_LENGTH = 16;

    /**
     * Get SecretKeySpec from AESKeyProvider (runtime key injection)
     * @return SecretKeySpec for AES operations
     * @throws IllegalStateException if key not initialized
     */
    private static SecretKeySpec getSecretKey() {
        String key = AESKeyProvider.getKey(); // Runtime key injection
        return new SecretKeySpec(key.getBytes(StandardCharsets.UTF_8), "AES");
    }

    /**
     * Decrypt data from Plugin using runtime-injected key
     */
    public static String decryptFromPlugin(String encryptedData) {
        try {
            if (!AESKeyProvider.isInitialized()) {
                throw new IllegalStateException("AES key not initialized. Load key from OTA or Plugin first.");
            }
            return decrypt(encryptedData);
        } catch (Exception e) {
            Log.e(TAG, "Failed to decrypt data from Plugin", e);
            throw new RuntimeException("Failed to decrypt data from Plugin", e);
        }
    }

    /**
     * Encrypt data for Plugin communication using runtime-injected key
     */
    public static String encryptForPlugin(String plaintext) {
        try {
            if (!AESKeyProvider.isInitialized()) {
                throw new IllegalStateException("AES key not initialized. Load key from OTA or Plugin first.");
            }
            return encrypt(plaintext);
        } catch (Exception e) {
            Log.e(TAG, "Failed to encrypt data for Plugin", e);
            throw new RuntimeException("Failed to encrypt data for Plugin", e);
        }
    }

    /**
     * Generic AES-256-GCM encryption using runtime-injected key
     */
    private static String encrypt(String plaintext) throws Exception {
        SecretKeySpec secretKey = getSecretKey(); // Runtime key injection
        Cipher cipher = Cipher.getInstance(ALGORITHM);
        
        byte[] iv = new byte[GCM_IV_LENGTH];
        new SecureRandom().nextBytes(iv);
        
        GCMParameterSpec gcmSpec = new GCMParameterSpec(GCM_TAG_LENGTH * 8, iv);
        cipher.init(Cipher.ENCRYPT_MODE, secretKey, gcmSpec);
        
        byte[] encrypted = cipher.doFinal(plaintext.getBytes());
        
        // Combine IV + encrypted data
        byte[] result = new byte[iv.length + encrypted.length];
        System.arraycopy(iv, 0, result, 0, iv.length);
        System.arraycopy(encrypted, 0, result, iv.length, encrypted.length);
        
        return Base64.encodeToString(result, Base64.NO_WRAP);
    }
    
    /**
     * Generic AES-256-GCM decryption using runtime-injected key
     */
    private static String decrypt(String encryptedData) throws Exception {
        byte[] data = Base64.decode(encryptedData, Base64.NO_WRAP);

        // Extract IV and encrypted data
        byte[] iv = new byte[GCM_IV_LENGTH];
        byte[] encrypted = new byte[data.length - GCM_IV_LENGTH];
        System.arraycopy(data, 0, iv, 0, iv.length);
        System.arraycopy(data, iv.length, encrypted, 0, encrypted.length);

        SecretKeySpec secretKey = getSecretKey(); // Runtime key injection
        Cipher cipher = Cipher.getInstance(ALGORITHM);
        GCMParameterSpec gcmSpec = new GCMParameterSpec(GCM_TAG_LENGTH * 8, iv);
        cipher.init(Cipher.DECRYPT_MODE, secretKey, gcmSpec);
        
        byte[] decrypted = cipher.doFinal(encrypted);
        return new String(decrypted);
    }

    /**
     * Self-test AES encryption/decryption (for development builds)
     * Call this after setting AES key to verify functionality
     */
    public static void selfTest() {
        try {
            if (!AESKeyProvider.isInitialized()) {
                Log.w(TAG, "⚠️ AES self-test skipped - key not initialized");
                return;
            }

            String original = "HelloBearMod!TestMessage123";
            String encrypted = encryptForPlugin(original);
            String decrypted = decryptFromPlugin(encrypted);

            if (!original.equals(decrypted)) {
                throw new RuntimeException("AES self-test failed! Original != Decrypted");
            } else {
                Log.d(TAG, "✅ AES self-test passed - encryption/decryption working correctly");
            }

        } catch (Exception e) {
            Log.e(TAG, "❌ AES self-test failed", e);
            throw new RuntimeException("AES self-test failed", e);
        }
    }

    /**
     * Validate key format (updated for AESKeyProvider)
     */
    public static boolean isValidKey(String key) {
        try {
            return key != null && key.length() == 32; // Exact 32 chars for AES-256
        } catch (Exception e) {
            return false;
        }
    }

    /**
     * Check if AES system is ready for operations
     */
    public static boolean isReady() {
        return AESKeyProvider.isInitialized();
    }

    /**
     * Get AES system status for debugging
     */
    public static String getStatus() {
        return "AES System: " + AESKeyProvider.getKeyStatus();
    }
}
