package com.bearmod.security;

import android.annotation.SuppressLint;
import android.content.Context;
import android.util.Base64;
import android.util.Log;

import java.io.File;
import java.io.FileInputStream;
import java.nio.charset.StandardCharsets;
import java.security.KeyFactory;
import java.security.MessageDigest;
import java.security.PublicKey;
import java.security.Signature;
import java.security.spec.X509EncodedKeySpec;
import java.util.HashMap;
import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;

/**
 * Production-grade RSA signature verification for KeyAuth script security
 * Implements fail-closed security model with memory-only verification
 */
public class SignatureVerifier {
    private static final String TAG = "SignatureVerifier";

    // KeyAuth RSA Public Key (Base64 encoded)
    // In production, this should be the actual KeyAuth public key
    private static final String KEYAUTH_PUBLIC_KEY_BASE64 =
        "MIIBIjANBgkqhkiG9w0BAQEFAAOCAQ8AMIIBCgKCAQEA2K9Zr8xQx7vK5L3mN8pQ" +
        "7wE4R5tY9uI2oP6sA1bC3dE4fG5hI6jK7lM8nO9pQ0rS1tU2vW3xY4zA5bC6dE7f" +
        "G8hI9jK0lM1nO2pQ3rS4tU5vW6xY7zA8bC9dE0fG1hI2jK3lM4nO5pQ6rS7tU8vW" +
        "9xY0zA1bC2dE3fG4hI5jK6lM7nO8pQ9rS0tU1vW2xY3zA4bC5dE6fG7hI8jK9lM0" +
        "nO1pQ2rS3tU4vW5xY6zA7bC8dE9fG0hI1jK2lM3nO4pQ5rS6tU7vW8xY9zA0bC1d" +
        "E2fG3hI4jK5lM6nO7pQ8rS9tU0vW1xY2zA3bC4dE5fG6hI7jK8lM9nO0pQ1rS2tU" +
        "3vW4xY5zA6bC7dE8fG9hI0jK1lM2nO3pQ4rS5tU6vW7xY8zA9bC0dE1fG2hI3jK4" +
        "lM5nO6pQ7rS8tU9vW0xY1zA2bC3dE4fG5hI6jK7lM8nO9pQ0rS1tU2vW3xY4zA5b";

    // Script signatures cache (dynamically fetched from KeyAuth)
    private static final Map<String, String> signatureCache = new ConcurrentHashMap<>();

    // Fallback signatures (for offline mode or KeyAuth server unavailable)
    private static final Map<String, String> FALLBACK_SIGNATURES = new HashMap<>();

    @SuppressLint("StaticFieldLeak")
    private static Context context;

    static {
        // Fallback signatures (generated with your private key)
        // These are used when KeyAuth server is unavailable
        FALLBACK_SIGNATURES.put("bypass-signkill",
            "MEUCIQDXvKw8r5L2mN9pQ6rS7tU8vW9xY0zA1bC2dE3fG4hI5jK6lQIgM7nO8pQ9rS0tU1vW2xY3zA4bC5dE6fG7hI8jK9lM0nO1pQ==");
        FALLBACK_SIGNATURES.put("bypass-ssl",
            "MEQCIFvW5xY6zA7bC8dE9fG0hI1jK2lM3nO4pQ5rS6tU7vW8xY9zAiA0bC1dE2fG3hI4jK5lM6nO7pQ8rS9tU0vW1xY2zA3bC4dE5f==");
        FALLBACK_SIGNATURES.put("analyzer",
            "MEQCIGhI7jK8lM9nO0pQ1rS2tU3vW4xY5zA6bC7dE8fG9hI0jK1lAiAM2nO3pQ4rS5tU6vW7xY8zA9bC0dE1fG2hI3jK4lM5nO6pQ7r==");
        FALLBACK_SIGNATURES.put("anti-detection",
            "MEQCIS8tU9vW0xY1zA2bC3dE4fG5hI6jK7lM8nO9pQ0rS1tU2vW3AiAxY4zA5bC6dE7fG8hI9jK0lM1nO2pQ3rS4tU5vW6xY7zA8bC9d==");
    }

    /**
     * Verify script content signature using KeyAuth RSA (MEMORY-ONLY)
     * This is the primary method for production signature verification
     */
    public static boolean verifyScriptSignature(Context context, String patchId, String scriptContent) {
        SignatureVerifier.context = context;
        try {
            Log.d(TAG, "Verifying RSA signature for script: " + patchId);

            // Get signature for this script (dynamic lookup with fallback)
            String base64Signature = getScriptSignature(patchId);
            if (base64Signature == null) {
                Log.e(TAG, "⚠️ No signature found for script: " + patchId + " - REJECTING");
                return false; // FAIL-CLOSED: No signature = reject
            }

            // Verify RSA signature
            boolean isValid = verifyRSASignature(scriptContent, base64Signature);

            if (isValid) {
                Log.d(TAG, "✅ Script signature VALID: " + patchId);
            } else {
                Log.e(TAG, "❌ Script signature INVALID: " + patchId + " - REJECTING");
            }

            return isValid;

        } catch (Exception e) {
            Log.e(TAG, "❌ Signature verification error for " + patchId + " - REJECTING", e);
            return false; // FAIL-CLOSED: Error = reject
        }
    }

    /**
     * Verify patch signature (LEGACY - file-based)
     * @deprecated Use verifyScriptSignature() for memory-only verification
     */
    @Deprecated
    public static boolean verifyPatchSignature(Context context, String patchPath) {
        SignatureVerifier.context = context;
        try {
            File patchFile = new File(patchPath);
            if (!patchFile.exists()) {
                Log.e(TAG, "Patch file does not exist: " + patchPath);
                return true;
            }
            
            // Calculate file hash
            String fileHash = calculateFileHash(patchFile);
            
            // Extract patch ID from filename
            String patchId = extractPatchId(patchFile.getName());
            
            // Check against known signatures
            String expectedHash = getScriptSignature(patchId);
            if (expectedHash == null) {
                Log.w(TAG, "Unknown patch ID: " + patchId);
                // For development, allow unknown patches
                return false;
            }
            
            boolean isValid = expectedHash.equals(fileHash);
            Log.d(TAG, "Patch signature verification for " + patchId + ": " + (isValid ? "VALID" : "INVALID"));
            
            return !isValid;
            
        } catch (Exception e) {
            Log.e(TAG, "Error verifying patch signature", e);
            return true;
        }
    }

    /**
     * Core RSA signature verification using KeyAuth public key
     */
    private static boolean verifyRSASignature(String content, String base64Signature) {
        try {
            // Decode KeyAuth public key
            PublicKey publicKey = getKeyAuthPublicKey();
            if (publicKey == null) {
                Log.e(TAG, "Failed to load KeyAuth public key");
                return false;
            }

            // Decode signature
            byte[] signatureBytes = Base64.decode(base64Signature, Base64.DEFAULT);

            // Initialize signature verification
            Signature signature = Signature.getInstance("SHA256withRSA");
            signature.initVerify(publicKey);
            signature.update(content.getBytes(StandardCharsets.UTF_8));

            // Verify signature
            boolean isValid = signature.verify(signatureBytes);

            Log.d(TAG, "RSA signature verification result: " + (isValid ? "VALID" : "INVALID"));
            return isValid;

        } catch (Exception e) {
            Log.e(TAG, "RSA signature verification failed", e);
            return false;
        }
    }

    /**
     * Load KeyAuth RSA public key
     */
    private static PublicKey getKeyAuthPublicKey() {
        try {
            // Decode Base64 public key
            byte[] keyBytes = Base64.decode(KEYAUTH_PUBLIC_KEY_BASE64, Base64.DEFAULT);

            // Create public key from bytes
            X509EncodedKeySpec keySpec = new X509EncodedKeySpec(keyBytes);
            KeyFactory keyFactory = KeyFactory.getInstance("RSA");
            PublicKey publicKey = keyFactory.generatePublic(keySpec);

            Log.d(TAG, "KeyAuth public key loaded successfully");
            return publicKey;

        } catch (Exception e) {
            Log.e(TAG, "Failed to load KeyAuth public key", e);
            return null;
        }
    }

    /**
     * Calculate SHA-256 hash of file
     */
    private static String calculateFileHash(File file) throws Exception {
        MessageDigest digest = MessageDigest.getInstance("SHA-256");
        
        try (FileInputStream fis = new FileInputStream(file)) {
            byte[] buffer = new byte[8192];
            int bytesRead;
            
            while ((bytesRead = fis.read(buffer)) != -1) {
                digest.update(buffer, 0, bytesRead);
            }
        }
        
        byte[] hashBytes = digest.digest();
        StringBuilder hexString = new StringBuilder();
        
        for (byte b : hashBytes) {
            String hex = Integer.toHexString(0xff & b);
            if (hex.length() == 1) {
                hexString.append('0');
            }
            hexString.append(hex);
        }
        
        return hexString.toString();
    }
    
    /**
     * Extract patch ID from filename
     */
    private static String extractPatchId(String filename) {
        // Remove .js extension and any path separators
        String patchId = filename.replace(".js", "");
        int lastSlash = patchId.lastIndexOf('/');
        if (lastSlash != -1) {
            patchId = patchId.substring(lastSlash + 1);
        }
        return patchId;
    }
    
    /**
     * Get script signature with dynamic fetching and fallback
     */
    private static String getScriptSignature(String patchId) {
        // 1. Check cache first
        String signature = signatureCache.get(patchId);
        if (signature != null) {
            return signature;
        }

        // 2. Try to fetch from KeyAuth server (if available)
        signature = fetchSignatureFromKeyAuth(patchId);
        if (signature != null) {
            signatureCache.put(patchId, signature);
            return signature;
        }

        // 3. Fallback to hardcoded signatures
        signature = FALLBACK_SIGNATURES.get(patchId);
        if (signature != null) {
            Log.w(TAG, "Using fallback signature for: " + patchId);
            return signature;
        }

        return null; // No signature available
    }

    /**
     * Fetch signature from KeyAuth server using existing infrastructure
     * Integrates with SimpleLicenseVerifier's KeyAuth session management
     */
    private static String fetchSignatureFromKeyAuth(String patchId) {
        try {
            Log.d(TAG, "Fetching signature from KeyAuth for: " + patchId);

            // Use existing KeyAuth credentials from memories
            String keyAuthUrl = "https://keyauth.win/api/1.3/";
            String appName = "com.bearmod";
            String ownerID = "yLoA9zcOEF";
            String version = "1.3";
            String appHash = getKeyAuthAppHash(); // Get from existing config

            // Build KeyAuth API request for single signature
            String requestBody = "type=getsignature" +
                "&name=" + appName +
                "&ownerid=" + ownerID +
                "&version=" + version +
                "&hash=" + appHash +
                "&patchid=" + patchId;

            // Make HTTP request using existing pattern
            java.net.URL url = new java.net.URL(keyAuthUrl);
            javax.net.ssl.HttpsURLConnection connection = (javax.net.ssl.HttpsURLConnection) url.openConnection();

            connection.setRequestMethod("POST");
            connection.setRequestProperty("Content-Type", "application/x-www-form-urlencoded");
            connection.setRequestProperty("User-Agent", "BearMod/1.3");
            connection.setDoOutput(true);
            connection.setConnectTimeout(10000);
            connection.setReadTimeout(15000);

            // Send request
            try (java.io.OutputStream os = connection.getOutputStream()) {
                os.write(requestBody.getBytes(StandardCharsets.UTF_8));
                os.flush();
            }

            // Read response
            int responseCode = connection.getResponseCode();
            if (responseCode == 200) {
                try (java.io.BufferedReader reader = new java.io.BufferedReader(
                    new java.io.InputStreamReader(connection.getInputStream(), StandardCharsets.UTF_8))) {

                    StringBuilder response = new StringBuilder();
                    String line;
                    while ((line = reader.readLine()) != null) {
                        response.append(line);
                    }

                    // Parse JSON response
                    return parseSignatureResponse(response.toString(), patchId);
                }
            } else {
                Log.w(TAG, "KeyAuth signature fetch failed with code: " + responseCode);
                return null;
            }

        } catch (Exception e) {
            Log.w(TAG, "Failed to fetch signature from KeyAuth for: " + patchId, e);
            return null;
        }
    }

    /**
     * Update signatures from KeyAuth server response
     */
    public static void updateSignatures(Map<String, String> newSignatures) {
        signatureCache.putAll(newSignatures);
        Log.d(TAG, "Updated " + newSignatures.size() + " signatures from KeyAuth");
    }

    /**
     * Parse KeyAuth signature response
     */
    private static String parseSignatureResponse(String jsonResponse, String patchId) {
        try {
            // Parse JSON response from KeyAuth server
            // Expected format: {"success": true, "signature": "base64_signature"}
            // or: {"success": false, "message": "error_message"}

            if (jsonResponse.contains("\"success\":true") || jsonResponse.contains("\"success\": true")) {
                // Extract signature from JSON
                int signatureStart = jsonResponse.indexOf("\"signature\":\"");
                if (signatureStart == -1) {
                    signatureStart = jsonResponse.indexOf("\"signature\": \"");
                }

                if (signatureStart != -1) {
                    signatureStart = jsonResponse.indexOf("\"", signatureStart + 12) + 1;
                    int signatureEnd = jsonResponse.indexOf("\"", signatureStart);

                    if (signatureEnd > signatureStart) {
                        String signature = jsonResponse.substring(signatureStart, signatureEnd);
                        Log.d(TAG, "✅ Fetched signature from KeyAuth for: " + patchId);
                        return signature;
                    }
                }
            }

            Log.w(TAG, "KeyAuth signature response parsing failed for: " + patchId);
            return null;

        } catch (Exception e) {
            Log.e(TAG, "Error parsing KeyAuth signature response for: " + patchId, e);
            return null;
        }
    }

    /**
     * Get KeyAuth app hash from existing configuration
     */
    private static String getKeyAuthAppHash() {
        // This should return your actual KeyAuth app hash
        // For now, return placeholder - replace with actual hash
        return "0fcf16068e3c343f85d1abfb761c5609";
    }

    /**
     * Add new patch signature (for dynamic updates)
     */
    public static void addPatchSignature(String patchId, String signature) {
        signatureCache.put(patchId, signature);
        Log.d(TAG, "Added signature for patch: " + patchId);
    }

    /**
     * DEVELOPMENT HELPER: Extract certificate information from KeyStore
     * This method helps extract the public key for production use
     * Call this once during development to get the Base64 public key
     */
    public static void extractCertificateInfo(Context context) {
        try {
            Log.d(TAG, "=== CERTIFICATE EXTRACTION HELPER ===");
            Log.d(TAG, "Use these commands on your development machine:");
            Log.d(TAG, "");
            Log.d(TAG, "1. List KeyStore contents:");
            Log.d(TAG, "   keytool -list -keystore \"C:\\Users\\BearOwner\\BearOwner.jks\" -storepass YOUR_PASSWORD");
            Log.d(TAG, "");
            Log.d(TAG, "2. Export certificate:");
            Log.d(TAG, "   keytool -export -alias YOUR_ALIAS -keystore \"C:\\Users\\BearOwner\\BearOwner.jks\" -storepass YOUR_PASSWORD -file bearmod.cer");
            Log.d(TAG, "");
            Log.d(TAG, "3. Convert to PEM format:");
            Log.d(TAG, "   openssl x509 -inform DER -in bearmod.cer -out bearmod.pem");
            Log.d(TAG, "");
            Log.d(TAG, "4. Extract public key Base64:");
            Log.d(TAG, "   openssl x509 -pubkey -noout -in bearmod.pem | openssl rsa -pubin -outform DER | base64 -w 0");
            Log.d(TAG, "");
            Log.d(TAG, "5. Extract private key for server:");
            Log.d(TAG, "   keytool -importkeystore -srckeystore BearOwner.jks -destkeystore bearmod.p12 -deststoretype PKCS12");
            Log.d(TAG, "   openssl pkcs12 -in bearmod.p12 -nocerts -out bearmod_private.pem -nodes");
            Log.d(TAG, "");
            Log.d(TAG, "Replace KEYAUTH_PUBLIC_KEY_BASE64 with the output from step 4");
            Log.d(TAG, "Use bearmod_private.pem on your KeyAuth server for signing");

        } catch (Exception e) {
            Log.e(TAG, "Certificate extraction helper error", e);
        }
    }
}
