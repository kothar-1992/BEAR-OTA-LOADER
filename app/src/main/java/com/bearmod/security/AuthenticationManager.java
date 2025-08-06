package com.bearmod.security;

import android.content.Context;
import android.content.SharedPreferences;
import android.util.Log;

import com.bearmod.security.SimpleLicenseVerifier;

/**
 * Pure Java Authentication Manager for BearMod
 * Handles all authentication logic without native code dependencies
 * Replaces complex JNI authentication bridge with simple Java-only approach
 */
public class AuthenticationManager {
    private static final String TAG = "AuthenticationManager";
    
    // SharedPreferences constants
    private static final String PREF_NAME = "bearmod_auth";
    private static final String KEY_IS_AUTHENTICATED = "is_authenticated";
    private static final String KEY_LICENSE_KEY = "license_key";
    private static final String KEY_AUTH_TIMESTAMP = "auth_timestamp";
    private static final String KEY_AUTH_EXPIRY = "auth_expiry";
    
    // Authentication validity period (24 hours)
    private static final long AUTH_VALIDITY_PERIOD = 24 * 60 * 60 * 1000L;
    
    // Singleton instance
    private static AuthenticationManager instance;
    private static final Object lock = new Object();
    
    private Context context;
    private SharedPreferences prefs;
    
    private AuthenticationManager(Context context) {
        this.context = context.getApplicationContext();
        this.prefs = context.getSharedPreferences(PREF_NAME, Context.MODE_PRIVATE);
    }
    
    /**
     * Get singleton instance
     */
    public static AuthenticationManager getInstance(Context context) {
        synchronized (lock) {
            if (instance == null) {
                instance = new AuthenticationManager(context);
            }
            return instance;
        }
    }
    
    /**
     * Authenticate user with license key
     * Uses SimpleLicenseVerifier for KeyAuth integration
     */
    public boolean authenticate(Context context, String licenseKey) {
        try {
            Log.d(TAG, "Starting authentication with license key");
            
            if (licenseKey == null || licenseKey.trim().isEmpty()) {
                Log.e(TAG, "License key is null or empty");
                return false;
            }
            
            // Check if already authenticated and still valid
            if (isAuthenticated()) {
                Log.d(TAG, "Already authenticated and valid");
                return true;
            }
            
            Log.d(TAG, "Performing KeyAuth authentication via SimpleLicenseVerifier");
            
            // Use SimpleLicenseVerifier for KeyAuth authentication
            boolean authResult = SimpleLicenseVerifier.quickLicenseCheck(context, licenseKey);
            
            if (authResult) {
                // Authentication successful - store authentication state
                long currentTime = System.currentTimeMillis();
                long expiryTime = currentTime + AUTH_VALIDITY_PERIOD;
                
                prefs.edit()
                    .putBoolean(KEY_IS_AUTHENTICATED, true)
                    .putString(KEY_LICENSE_KEY, licenseKey)
                    .putLong(KEY_AUTH_TIMESTAMP, currentTime)
                    .putLong(KEY_AUTH_EXPIRY, expiryTime)
                    .apply();
                
                Log.d(TAG, "Authentication successful - state saved to SharedPreferences");
                
                return true;
            } else {
                Log.e(TAG, "KeyAuth authentication failed");
                clearAuthenticationState();
                return false;
            }
            
        } catch (Exception e) {
            Log.e(TAG, "Authentication error", e);
            clearAuthenticationState();
            return false;
        }
    }
    
    /**
     * Check if user is currently authenticated
     */
    public boolean isAuthenticated() {
        try {
            boolean isAuth = prefs.getBoolean(KEY_IS_AUTHENTICATED, false);
            if (!isAuth) {
                return false;
            }
            
            // Check if authentication has expired
            long expiryTime = prefs.getLong(KEY_AUTH_EXPIRY, 0);
            long currentTime = System.currentTimeMillis();
            
            if (currentTime > expiryTime) {
                Log.d(TAG, "Authentication expired - clearing state");
                clearAuthenticationState();
                return false;
            }
            
            return true;
            
        } catch (Exception e) {
            Log.e(TAG, "Error checking authentication status", e);
            return false;
        }
    }
    
    /**
     * Get stored license key (if authenticated)
     */
    public String getLicenseKey() {
        if (isAuthenticated()) {
            return prefs.getString(KEY_LICENSE_KEY, null);
        }
        return null;
    }
    
    /**
     * Get authentication timestamp
     */
    public long getAuthTimestamp() {
        return prefs.getLong(KEY_AUTH_TIMESTAMP, 0);
    }
    
    /**
     * Get authentication expiry time
     */
    public long getAuthExpiry() {
        return prefs.getLong(KEY_AUTH_EXPIRY, 0);
    }
    
    /**
     * Get remaining authentication time in milliseconds
     */
    public long getRemainingAuthTime() {
        if (!isAuthenticated()) {
            return 0;
        }
        
        long expiryTime = getAuthExpiry();
        long currentTime = System.currentTimeMillis();
        
        return Math.max(0, expiryTime - currentTime);
    }
    
    /**
     * Clear authentication state
     */
    public void clearAuthenticationState() {
        try {
            prefs.edit()
                .remove(KEY_IS_AUTHENTICATED)
                .remove(KEY_LICENSE_KEY)
                .remove(KEY_AUTH_TIMESTAMP)
                .remove(KEY_AUTH_EXPIRY)
                .apply();
            
            Log.d(TAG, "Authentication state cleared");
            
        } catch (Exception e) {
            Log.e(TAG, "Error clearing authentication state", e);
        }
    }
    
    /**
     * Logout user
     */
    public void logout() {
        Log.d(TAG, "User logout requested");
        clearAuthenticationState();
    }
    
    /**
     * Refresh authentication (extend validity period)
     */
    public boolean refreshAuthentication() {
        try {
            String licenseKey = getLicenseKey();
            if (licenseKey != null) {
                Log.d(TAG, "Refreshing authentication");
                return authenticate(context, licenseKey);
            } else {
                Log.e(TAG, "Cannot refresh - no stored license key");
                return false;
            }
        } catch (Exception e) {
            Log.e(TAG, "Error refreshing authentication", e);
            return false;
        }
    }
    
    /**
     * Get authentication status summary
     */
    public String getAuthStatusSummary() {
        if (!isAuthenticated()) {
            return "❌ NOT_AUTHENTICATED";
        }
        
        long remainingTime = getRemainingAuthTime();
        long hours = remainingTime / (60 * 60 * 1000);
        long minutes = (remainingTime % (60 * 60 * 1000)) / (60 * 1000);
        
        return String.format("✅ AUTHENTICATED - %dh %dm remaining", hours, minutes);
    }
    
    /**
     * Validate license key format (basic validation)
     */
    public static boolean isValidLicenseKeyFormat(String licenseKey) {
        if (licenseKey == null || licenseKey.trim().isEmpty()) {
            return false;
        }
        
        // Basic format validation for BearMod license keys
        // Expected format: BEARX1-xxxxx-xxxxx-xxxxx-xxxxx-xxxxxx
        String trimmed = licenseKey.trim();
        return trimmed.startsWith("BEARX1-") && trimmed.length() >= 20;
    }
    
    /**
     * Force authentication check (bypass cache)
     */
    public boolean forceAuthenticationCheck(String licenseKey) {
        Log.d(TAG, "Force authentication check requested");
        clearAuthenticationState();
        return authenticate(context, licenseKey);
    }

    /**
     * Get authentication status (alias for getAuthStatusSummary for compatibility)
     */
    public String getAuthenticationStatus() {
        return getAuthStatusSummary();
    }

    /**
     * Authenticate with KeyAuth using callback interface
     */
    public void authenticateWithKeyAuth(String licenseKey, AuthenticationCallback callback) {
        // Run authentication in background thread
        new Thread(() -> {
            try {
                callback.onAuthenticationProgress("Validating license key...");

                boolean success = authenticate(context, licenseKey);

                if (success) {
                    callback.onAuthenticationSuccess("Authentication successful");
                } else {
                    callback.onAuthenticationFailure("Invalid license key or authentication failed");
                }
            } catch (Exception e) {
                Log.e(TAG, "Authentication error", e);
                callback.onAuthenticationFailure("Authentication error: " + e.getMessage());
            }
        }).start();
    }

    /**
     * Callback interface for authentication operations
     */
    public interface AuthenticationCallback {
        void onAuthenticationSuccess(String message);
        void onAuthenticationFailure(String error);
        void onAuthenticationProgress(String status);
    }
}
