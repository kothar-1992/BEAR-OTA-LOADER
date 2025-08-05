package com.bearmod.auth;

import android.content.Context;
import android.content.SharedPreferences;
import android.util.Log;

import com.bearmod.auth.SimpleLicenseVerifier;

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
    private static final long AUTH_VALIDITY_PERIOD = 24 * 60 * 60 * 1000; // 24 hours in milliseconds
    
    private static AuthenticationManager instance;
    private Context context;
    private SharedPreferences prefs;
    
    private AuthenticationManager(Context context) {
        this.context = context.getApplicationContext();
        this.prefs = this.context.getSharedPreferences(PREF_NAME, Context.MODE_PRIVATE);
    }
    
    public static synchronized AuthenticationManager getInstance(Context context) {
        if (instance == null) {
            instance = new AuthenticationManager(context);
        }
        return instance;
    }
    
    /**
     * Interface for authentication callbacks
     */
    public interface AuthenticationCallback {
        void onAuthenticationSuccess(String message);
        void onAuthenticationFailure(String error);
        void onAuthenticationProgress(String status);
    }
    
    /**
     * Perform complete authentication using KeyAuth
     * This is the main authentication method that replaces the C++ authentication
     */
    public void authenticateWithKeyAuth(String licenseKey, AuthenticationCallback callback) {
        Log.d(TAG, "Starting Java-only KeyAuth authentication");
        
        if (callback != null) {
            callback.onAuthenticationProgress("Initializing KeyAuth authentication...");
        }
        
        // Validate input
        if (licenseKey == null || licenseKey.trim().isEmpty()) {
            String error = "License key cannot be empty";
            Log.e(TAG, error);
            if (callback != null) {
                callback.onAuthenticationFailure(error);
            }
            return;
        }
        
        // Perform authentication in background thread
        new Thread(() -> {
            try {
                if (callback != null) {
                    callback.onAuthenticationProgress("Verifying license with KeyAuth...");
                }
                
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
                    
                    if (callback != null) {
                        callback.onAuthenticationSuccess("Authentication successful");
                    }
                    
                } else {
                    // Authentication failed
                    clearAuthenticationState();
                    String error = "KeyAuth license verification failed";
                    Log.e(TAG, error);
                    
                    if (callback != null) {
                        callback.onAuthenticationFailure(error);
                    }
                }
                
            } catch (Exception e) {
                // Handle any authentication errors
                clearAuthenticationState();
                String error = "Authentication error: " + e.getMessage();
                Log.e(TAG, error, e);
                
                if (callback != null) {
                    callback.onAuthenticationFailure(error);
                }
            }
        }).start();
    }
    
    /**
     * Check if user is currently authenticated
     * This method is called by the C++ layer to determine authentication status
     */
    public boolean isAuthenticated() {
        try {
            boolean isAuth = prefs.getBoolean(KEY_IS_AUTHENTICATED, false);
            
            if (!isAuth) {
                Log.d(TAG, "User not authenticated");
                return false;
            }
            
            // Check if authentication has expired
            long currentTime = System.currentTimeMillis();
            long expiryTime = prefs.getLong(KEY_AUTH_EXPIRY, 0);
            
            if (currentTime > expiryTime) {
                Log.d(TAG, "Authentication expired, clearing state");
                clearAuthenticationState();
                return false;
            }
            
            Log.d(TAG, "User is authenticated and session is valid");
            return true;
            
        } catch (Exception e) {
            Log.e(TAG, "Error checking authentication status", e);
            return false;
        }
    }
    
    /**
     * Get stored license key
     */
    public String getStoredLicenseKey() {
        return prefs.getString(KEY_LICENSE_KEY, null);
    }
    
    /**
     * Clear authentication state
     */
    public void clearAuthenticationState() {
        Log.d(TAG, "Clearing authentication state");
        prefs.edit()
            .putBoolean(KEY_IS_AUTHENTICATED, false)
            .remove(KEY_LICENSE_KEY)
            .remove(KEY_AUTH_TIMESTAMP)
            .remove(KEY_AUTH_EXPIRY)
            .apply();
    }
    
    /**
     * Get authentication expiry time
     */
    public long getAuthenticationExpiry() {
        return prefs.getLong(KEY_AUTH_EXPIRY, 0);
    }
    
    /**
     * Check if authentication is about to expire (within 1 hour)
     */
    public boolean isAuthenticationExpiringSoon() {
        if (!isAuthenticated()) {
            return false;
        }
        
        long currentTime = System.currentTimeMillis();
        long expiryTime = prefs.getLong(KEY_AUTH_EXPIRY, 0);
        long timeUntilExpiry = expiryTime - currentTime;
        
        // Return true if expiring within 1 hour
        return timeUntilExpiry < (60 * 60 * 1000);
    }
    
    /**
     * Refresh authentication with stored license key
     */
    public void refreshAuthentication(AuthenticationCallback callback) {
        String storedKey = getStoredLicenseKey();
        if (storedKey != null && !storedKey.isEmpty()) {
            Log.d(TAG, "Refreshing authentication with stored license key");
            authenticateWithKeyAuth(storedKey, callback);
        } else {
            String error = "No stored license key available for refresh";
            Log.e(TAG, error);
            if (callback != null) {
                callback.onAuthenticationFailure(error);
            }
        }
    }
    
    /**
     * Get authentication status for debugging
     */
    public String getAuthenticationStatus() {
        if (!isAuthenticated()) {
            return "Not authenticated";
        }
        
        long expiryTime = prefs.getLong(KEY_AUTH_EXPIRY, 0);
        long currentTime = System.currentTimeMillis();
        long timeRemaining = expiryTime - currentTime;
        
        if (timeRemaining > 0) {
            long hoursRemaining = timeRemaining / (60 * 60 * 1000);
            return "Authenticated - " + hoursRemaining + " hours remaining";
        } else {
            return "Authentication expired";
        }
    }
}
