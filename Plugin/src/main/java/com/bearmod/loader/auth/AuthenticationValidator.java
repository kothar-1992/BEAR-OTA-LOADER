package com.bearmod.loader.auth;

import android.content.Context;
import android.os.Handler;
import android.os.Looper;
import android.util.Log;

import com.bearmod.loader.BearLoaderApplication;

import java.util.concurrent.Executor;
import java.util.concurrent.Executors;

/**
 * Authentication validator
 * Validates authentication status before operations
 */
public class AuthenticationValidator {
    
    private static final String TAG = "AuthValidator";
    
    private static AuthenticationValidator instance;
    private final Executor executor = Executors.newSingleThreadExecutor();
    private final Handler handler = new Handler(Looper.getMainLooper());
    
    private final KeyAuthManager keyAuthManager;
    
    /**
     * Private constructor to enforce singleton pattern
     */
    private AuthenticationValidator() {
        keyAuthManager = KeyAuthManager.getInstance();
    }
    
    /**
     * Get instance
     * @return AuthenticationValidator instance
     */
    public static synchronized AuthenticationValidator getInstance() {
        if (instance == null) {
            instance = new AuthenticationValidator();
        }
        return instance;
    }
    
    /**
     * Validate authentication before operation
     * @param context Application context
     * @param callback Validation callback
     */
    public void validateAuthentication(Context context, ValidationCallback callback) {
        // Check if user is logged in
        if (!BearLoaderApplication.getInstance().isLoggedIn()) {
            handler.post(() -> callback.onValidationFailed("User not logged in"));
            return;
        }
        
        // Validate license
        keyAuthManager.validateLicense(new KeyAuthManager.AuthCallback() {
            @Override
            public void onSuccess(AuthResult result) {
                // Check if license is expired
                if (result.getExpiryDate().before(new java.util.Date())) {
                    handler.post(() -> callback.onValidationFailed("License expired"));
                    return;
                }
                
                // Check if license has required permissions
                if (!hasRequiredPermissions(result)) {
                    handler.post(() -> callback.onValidationFailed("Insufficient permissions"));
                    return;
                }
                
                // Authentication valid
                handler.post(() -> callback.onValidationSuccess(result));
            }
            
            @Override
            public void onError(String error) {
                handler.post(() -> callback.onValidationFailed("License validation failed: " + error));
            }
        });
    }
    
    /**
     * Check if authentication result has required permissions
     * @param result Authentication result
     * @return true if has required permissions, false otherwise
     */
    private boolean hasRequiredPermissions(AuthResult result) {
        if (result == null || result.getPermissions() == null) {
            Log.w(TAG, "No permissions found in authentication result");
            return false;
        }

        // Define required permissions for direct injection
        String[] requiredPermissions = {
            "injection.direct",
            "library.download",
            "target.monitor"
        };

        // Check if user has all required permissions
        for (String permission : requiredPermissions) {
            if (!result.getPermissions().contains(permission)) {
                Log.w(TAG, "Missing required permission: " + permission);
                return false;
            }
        }

        Log.d(TAG, "All required permissions verified");
        return true;
    }
    
    /**
     * Validate authentication for specific patch
     * @param context Application context
     * @param patchId Patch ID
     * @param callback Validation callback
     */
    public void validatePatchAccess(Context context, String patchId, ValidationCallback callback) {
        // First validate general authentication
        validateAuthentication(context, new ValidationCallback() {
            @Override
            public void onValidationSuccess(AuthResult result) {
                // Check if user has access to this specific patch
                executor.execute(() -> {
                    try {
                        // TODO: Implement actual patch access validation
                        // This is a placeholder implementation
                        boolean hasAccess = true;

                        handler.post(() -> callback.onValidationSuccess(result));
                    } catch (Exception e) {
                        Log.e(TAG, "Error validating patch access: " + e.getMessage());
                        handler.post(() -> callback.onValidationFailed("Error validating patch access: " + e.getMessage()));
                    }
                });
            }
            
            @Override
            public void onValidationFailed(String error) {
                callback.onValidationFailed(error);
            }
        });
    }
    
    /**
     * Validation callback interface
     */
    public interface ValidationCallback {
        void onValidationSuccess(AuthResult result);
        void onValidationFailed(String error);
    }
}
