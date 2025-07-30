package com.bearmod.loader.auth;

import android.util.Log;
import org.json.JSONObject;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.OutputStream;
import java.net.HttpURLConnection;
import java.net.URL;
import java.util.concurrent.TimeUnit;
import java.util.concurrent.CompletableFuture;
import java.util.concurrent.ExecutionException;
import java.util.concurrent.TimeoutException;
import java.util.Iterator;
import javax.net.ssl.HttpsURLConnection;
import java.security.MessageDigest;
import java.nio.charset.StandardCharsets;

/**
 * KeyAuth Authentication Validator
 * Provides robust bearToken validation against KeyAuth API endpoints
 */
public class KeyAuthValidator {
    private static final String TAG = "KeyAuthValidator";
    
    // KeyAuth API configuration
    private static final String KEYAUTH_BASE_URL = "https://keyauth.win/api/1.2/";
    private static final String APP_NAME = "BearMod";
    private static final String APP_SECRET = "your_app_secret_here"; // Replace with actual secret
    private static final String APP_VERSION = "1.3.0";
    
    // Timeout configuration
    private static final int CONNECTION_TIMEOUT_MS = 10000; // 10 seconds
    private static final int READ_TIMEOUT_MS = 15000;       // 15 seconds
    private static final int VALIDATION_TIMEOUT_MS = 20000; // 20 seconds total
    
    // Retry configuration
    private static final int MAX_RETRY_ATTEMPTS = 3;
    private static final int RETRY_DELAY_MS = 2000; // 2 seconds
    
    public enum ValidationResult {
        SUCCESS,
        INVALID_TOKEN,
        EXPIRED_TOKEN,
        REVOKED_TOKEN,
        NETWORK_ERROR,
        TIMEOUT_ERROR,
        RATE_LIMITED,
        SERVER_ERROR,
        INVALID_FORMAT
    }
    
    public static class ValidationResponse {
        public final ValidationResult result;
        public final String message;
        public final String username;
        public final long expiryTime;
        public final String[] permissions;
        
        public ValidationResponse(ValidationResult result, String message) {
            this(result, message, null, 0, null);
        }
        
        public ValidationResponse(ValidationResult result, String message, 
                                String username, long expiryTime, String[] permissions) {
            this.result = result;
            this.message = message;
            this.username = username;
            this.expiryTime = expiryTime;
            this.permissions = permissions;
        }
        
        public boolean isSuccess() {
            return result == ValidationResult.SUCCESS;
        }
        
        public boolean hasPermission(String permission) {
            if (permissions == null) return false;
            for (String perm : permissions) {
                if (perm.equals(permission)) return true;
            }
            return false;
        }
    }
    
    /**
     * Validate bearToken against KeyAuth API with timeout and retry logic
     * @param bearToken The authentication token to validate
     * @return ValidationResponse containing result and user information
     */
    public static ValidationResponse validateBearToken(String bearToken) {
        Log.i(TAG, "Starting bearToken validation");
        
        // Input validation
        if (bearToken == null || bearToken.trim().isEmpty()) {
            Log.e(TAG, "BearToken is null or empty");
            return new ValidationResponse(ValidationResult.INVALID_FORMAT, "Token cannot be empty");
        }
        
        // Format validation
        if (!isValidTokenFormat(bearToken)) {
            Log.e(TAG, "BearToken format is invalid");
            return new ValidationResponse(ValidationResult.INVALID_FORMAT, "Invalid token format");
        }
        
        // Perform validation with timeout
        try {
            CompletableFuture<ValidationResponse> future = CompletableFuture.supplyAsync(() -> {
                return performValidationWithRetry(bearToken);
            });
            
            ValidationResponse response = future.get(VALIDATION_TIMEOUT_MS, TimeUnit.MILLISECONDS);
            Log.i(TAG, "BearToken validation completed: " + response.result);
            return response;
            
        } catch (TimeoutException e) {
            Log.e(TAG, "BearToken validation timed out", e);
            return new ValidationResponse(ValidationResult.TIMEOUT_ERROR, "Validation request timed out");
        } catch (ExecutionException e) {
            Log.e(TAG, "BearToken validation execution error", e);
            return new ValidationResponse(ValidationResult.NETWORK_ERROR, "Validation execution failed");
        } catch (InterruptedException e) {
            Log.e(TAG, "BearToken validation interrupted", e);
            Thread.currentThread().interrupt();
            return new ValidationResponse(ValidationResult.NETWORK_ERROR, "Validation interrupted");
        }
    }
    
    /**
     * Perform validation with retry logic
     */
    private static ValidationResponse performValidationWithRetry(String bearToken) {
        ValidationResponse lastResponse = null;
        
        for (int attempt = 1; attempt <= MAX_RETRY_ATTEMPTS; attempt++) {
            Log.d(TAG, "Validation attempt " + attempt + "/" + MAX_RETRY_ATTEMPTS);
            
            try {
                ValidationResponse response = performSingleValidation(bearToken);
                
                // Return immediately on success or non-retryable errors
                if (response.isSuccess() || 
                    response.result == ValidationResult.INVALID_TOKEN ||
                    response.result == ValidationResult.EXPIRED_TOKEN ||
                    response.result == ValidationResult.REVOKED_TOKEN ||
                    response.result == ValidationResult.INVALID_FORMAT) {
                    return response;
                }
                
                lastResponse = response;
                
                // Wait before retry (except on last attempt)
                if (attempt < MAX_RETRY_ATTEMPTS) {
                    Thread.sleep(RETRY_DELAY_MS);
                }
                
            } catch (InterruptedException e) {
                Thread.currentThread().interrupt();
                return new ValidationResponse(ValidationResult.NETWORK_ERROR, "Validation interrupted");
            } catch (Exception e) {
                Log.w(TAG, "Validation attempt " + attempt + " failed", e);
                lastResponse = new ValidationResponse(ValidationResult.NETWORK_ERROR, "Network error: " + e.getMessage());
                
                if (attempt < MAX_RETRY_ATTEMPTS) {
                    try {
                        Thread.sleep(RETRY_DELAY_MS);
                    } catch (InterruptedException ie) {
                        Thread.currentThread().interrupt();
                        return new ValidationResponse(ValidationResult.NETWORK_ERROR, "Validation interrupted");
                    }
                }
            }
        }
        
        return lastResponse != null ? lastResponse : 
               new ValidationResponse(ValidationResult.NETWORK_ERROR, "All validation attempts failed");
    }
    
    /**
     * Perform single validation attempt
     */
    private static ValidationResponse performSingleValidation(String bearToken) throws Exception {
        Log.d(TAG, "Performing KeyAuth API validation");
        
        // Prepare request data
        JSONObject requestData = new JSONObject();
        requestData.put("type", "check");
        requestData.put("name", APP_NAME);
        requestData.put("ownerid", generateOwnerHash());
        requestData.put("sessionid", bearToken);
        requestData.put("version", APP_VERSION);
        
        // Create connection
        URL url = new URL(KEYAUTH_BASE_URL);
        HttpsURLConnection connection = (HttpsURLConnection) url.openConnection();
        
        try {
            // Configure connection
            connection.setRequestMethod("POST");
            connection.setRequestProperty("Content-Type", "application/json");
            connection.setRequestProperty("User-Agent", "BearMod-Loader/" + APP_VERSION);
            connection.setConnectTimeout(CONNECTION_TIMEOUT_MS);
            connection.setReadTimeout(READ_TIMEOUT_MS);
            connection.setDoOutput(true);
            
            // Send request
            try (OutputStream os = connection.getOutputStream()) {
                byte[] input = requestData.toString().getBytes(StandardCharsets.UTF_8);
                os.write(input, 0, input.length);
            }
            
            // Read response
            int responseCode = connection.getResponseCode();
            Log.d(TAG, "KeyAuth API response code: " + responseCode);
            
            if (responseCode == HttpURLConnection.HTTP_OK) {
                return parseSuccessResponse(connection);
            } else if (responseCode == 429) {
                return new ValidationResponse(ValidationResult.RATE_LIMITED, "Rate limit exceeded");
            } else {
                return parseErrorResponse(connection, responseCode);
            }
            
        } finally {
            connection.disconnect();
        }
    }
    
    /**
     * Parse successful API response
     */
    private static ValidationResponse parseSuccessResponse(HttpsURLConnection connection) throws Exception {
        StringBuilder response = new StringBuilder();
        try (BufferedReader reader = new BufferedReader(
                new InputStreamReader(connection.getInputStream(), StandardCharsets.UTF_8))) {
            String line;
            while ((line = reader.readLine()) != null) {
                response.append(line);
            }
        }
        
        JSONObject jsonResponse = new JSONObject(response.toString());
        Log.d(TAG, "KeyAuth response: " + jsonResponse.toString());
        
        boolean success = jsonResponse.optBoolean("success", false);
        String message = jsonResponse.optString("message", "Unknown response");
        
        if (success) {
            // Extract user information
            String username = jsonResponse.optString("username", "");
            long expiryTime = jsonResponse.optLong("expiry", 0) * 1000; // Convert to milliseconds
            
            // Extract permissions
            String[] permissions = null;
            if (jsonResponse.has("subscriptions")) {
                JSONObject subscriptions = jsonResponse.getJSONObject("subscriptions");
                permissions = new String[subscriptions.length()];
                int i = 0;

                // Use JSONObject.keys() iterator instead of keySet()
                Iterator<String> keys = subscriptions.keys();
                while (keys.hasNext() && i < permissions.length) {
                    permissions[i++] = keys.next();
                }
            }
            
            return new ValidationResponse(ValidationResult.SUCCESS, message, username, expiryTime, permissions);
        } else {
            // Determine specific error type
            ValidationResult errorType = determineErrorType(message);
            return new ValidationResponse(errorType, message);
        }
    }
    
    /**
     * Parse error response
     */
    private static ValidationResponse parseErrorResponse(HttpsURLConnection connection, int responseCode) {
        try {
            StringBuilder response = new StringBuilder();
            try (BufferedReader reader = new BufferedReader(
                    new InputStreamReader(connection.getErrorStream(), StandardCharsets.UTF_8))) {
                String line;
                while ((line = reader.readLine()) != null) {
                    response.append(line);
                }
            }
            
            JSONObject jsonResponse = new JSONObject(response.toString());
            String message = jsonResponse.optString("message", "HTTP " + responseCode);
            
            ValidationResult errorType = determineErrorType(message);
            return new ValidationResponse(errorType, message);
            
        } catch (Exception e) {
            Log.e(TAG, "Error parsing error response", e);
            return new ValidationResponse(ValidationResult.SERVER_ERROR, "HTTP " + responseCode);
        }
    }
    
    /**
     * Determine specific error type from message
     */
    private static ValidationResult determineErrorType(String message) {
        String lowerMessage = message.toLowerCase();
        
        if (lowerMessage.contains("invalid") || lowerMessage.contains("not found")) {
            return ValidationResult.INVALID_TOKEN;
        } else if (lowerMessage.contains("expired")) {
            return ValidationResult.EXPIRED_TOKEN;
        } else if (lowerMessage.contains("revoked") || lowerMessage.contains("banned")) {
            return ValidationResult.REVOKED_TOKEN;
        } else if (lowerMessage.contains("rate") || lowerMessage.contains("limit")) {
            return ValidationResult.RATE_LIMITED;
        } else {
            return ValidationResult.SERVER_ERROR;
        }
    }
    
    /**
     * Validate token format
     */
    private static boolean isValidTokenFormat(String token) {
        // Basic format validation - adjust based on actual KeyAuth token format
        return token.length() >= 32 && token.length() <= 128 && 
               token.matches("^[a-zA-Z0-9]+$");
    }
    
    /**
     * Generate owner hash for API authentication
     */
    private static String generateOwnerHash() {
        try {
            MessageDigest digest = MessageDigest.getInstance("SHA-256");
            byte[] hash = digest.digest((APP_NAME + APP_SECRET).getBytes(StandardCharsets.UTF_8));
            
            StringBuilder hexString = new StringBuilder();
            for (byte b : hash) {
                String hex = Integer.toHexString(0xff & b);
                if (hex.length() == 1) {
                    hexString.append('0');
                }
                hexString.append(hex);
            }
            return hexString.toString();
        } catch (Exception e) {
            Log.e(TAG, "Error generating owner hash", e);
            return "fallback_hash";
        }
    }
}
