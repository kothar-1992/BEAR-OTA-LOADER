package com.bearmod.loader.security;

import android.util.Base64;
import javax.crypto.Cipher;
import javax.crypto.spec.GCMParameterSpec;
import javax.crypto.spec.SecretKeySpec;
import java.security.SecureRandom;

/**
 * AES-256-GCM encryption utility for secure Plugin-to-BearMod communication
 * This class will be obfuscated to prevent reverse engineering
 */
public class AESUtil {
    private static final String ALGORITHM = "AES/GCM/NoPadding";
    private static final int GCM_IV_LENGTH = 12;
    private static final int GCM_TAG_LENGTH = 16;
    
    // Hardcoded key for Plugin-to-BearMod communication
    // In production, derive from device-specific data
    private static final String COMMUNICATION_KEY = "BearMod2024SecureKey123456789012"; // 32 bytes
    
    /**
     * Encrypt data for BearMod app communication
     */
    public static String encryptForBearMod(String plaintext) {
        try {
            return encrypt(plaintext, COMMUNICATION_KEY);
        } catch (Exception e) {
            throw new RuntimeException("Failed to encrypt data for BearMod", e);
        }
    }
    
    /**
     * Decrypt data from Plugin
     */
    public static String decryptFromPlugin(String encryptedData) {
        try {
            return decrypt(encryptedData, COMMUNICATION_KEY);
        } catch (Exception e) {
            throw new RuntimeException("Failed to decrypt data from Plugin", e);
        }
    }
    
    /**
     * Generic AES-256-GCM encryption
     */
    private static String encrypt(String plaintext, String key) throws Exception {
        SecretKeySpec secretKey = new SecretKeySpec(key.getBytes(), "AES");
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
     * Generic AES-256-GCM decryption
     */
    private static String decrypt(String encryptedData, String key) throws Exception {
        byte[] data = Base64.decode(encryptedData, Base64.NO_WRAP);
        
        // Extract IV and encrypted data
        byte[] iv = new byte[GCM_IV_LENGTH];
        byte[] encrypted = new byte[data.length - GCM_IV_LENGTH];
        System.arraycopy(data, 0, iv, 0, iv.length);
        System.arraycopy(data, iv.length, encrypted, 0, encrypted.length);
        
        SecretKeySpec secretKey = new SecretKeySpec(key.getBytes(), "AES");
        Cipher cipher = Cipher.getInstance(ALGORITHM);
        GCMParameterSpec gcmSpec = new GCMParameterSpec(GCM_TAG_LENGTH * 8, iv);
        cipher.init(Cipher.DECRYPT_MODE, secretKey, gcmSpec);
        
        byte[] decrypted = cipher.doFinal(encrypted);
        return new String(decrypted);
    }
    
    /**
     * Generate secure random key
     */
    public static String generateSecureKey() {
        byte[] key = new byte[32]; // 256-bit key
        new SecureRandom().nextBytes(key);
        return Base64.encodeToString(key, Base64.NO_WRAP);
    }
    
    /**
     * Validate key format
     */
    public static boolean isValidKey(String key) {
        try {
            return key != null && key.length() >= 32;
        } catch (Exception e) {
            return false;
        }
    }
}
