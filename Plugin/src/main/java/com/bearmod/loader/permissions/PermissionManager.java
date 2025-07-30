package com.bearmod.loader.permissions;

import android.Manifest;
import android.app.Activity;
import android.content.Context;
import android.content.Intent;
import android.content.pm.PackageManager;
import android.net.Uri;
import android.os.Build;
import android.provider.Settings;
import android.util.Log;

import androidx.core.app.ActivityCompat;
import androidx.core.content.ContextCompat;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

/**
 * PHASE 7 STREAMLINED: Automated Permission Manager for BearMod integration
 * Focuses on programmatic confirmation with minimal user friction
 */
public class PermissionManager {
    private static final String TAG = "PermissionManager";
    
    // Required permissions for BearMod injection and PUBG interaction
    public static final String[] REQUIRED_PERMISSIONS = {
        Manifest.permission.WRITE_EXTERNAL_STORAGE,
        Manifest.permission.READ_EXTERNAL_STORAGE,
        Manifest.permission.SYSTEM_ALERT_WINDOW,
        Manifest.permission.ACCESS_NETWORK_STATE,
        Manifest.permission.INTERNET
    };

    // CRITICAL FIX: Android 8.0+ (API 26+) Unknown Sources permission
    public static final String REQUEST_INSTALL_PACKAGES = "android.permission.REQUEST_INSTALL_PACKAGES";
    
    // Permission display names (user-friendly)
    private static final Map<String, String> PERMISSION_DISPLAY_NAMES = new HashMap<>();
    private static final Map<String, String> PERMISSION_DESCRIPTIONS = new HashMap<>();
    
    static {
        // User-friendly permission names
        PERMISSION_DISPLAY_NAMES.put(Manifest.permission.WRITE_EXTERNAL_STORAGE, "Storage Access");
        PERMISSION_DISPLAY_NAMES.put(Manifest.permission.READ_EXTERNAL_STORAGE, "Storage Read");
        PERMISSION_DISPLAY_NAMES.put(Manifest.permission.SYSTEM_ALERT_WINDOW, "Overlay Permission");
        PERMISSION_DISPLAY_NAMES.put(Manifest.permission.ACCESS_NETWORK_STATE, "Network Access");
        PERMISSION_DISPLAY_NAMES.put(Manifest.permission.INTERNET, "Internet Access");
        
        // Concise permission purposes
        PERMISSION_DESCRIPTIONS.put(Manifest.permission.WRITE_EXTERNAL_STORAGE, "Store enhancement files");
        PERMISSION_DESCRIPTIONS.put(Manifest.permission.READ_EXTERNAL_STORAGE, "Access enhancement files");
        PERMISSION_DESCRIPTIONS.put(Manifest.permission.SYSTEM_ALERT_WINDOW, "Enable game overlay");
        PERMISSION_DESCRIPTIONS.put(Manifest.permission.ACCESS_NETWORK_STATE, "Check connectivity");
        PERMISSION_DESCRIPTIONS.put(Manifest.permission.INTERNET, "Download enhancements");
    }
    
    private final Context context;
    private PermissionStateListener permissionListener;
    private boolean isWaitingForPermissions = false;
    private String pendingWorkflow = null;
    
    public PermissionManager(Context context) {
        this.context = context.getApplicationContext();
    }
    
    /**
     * Check if all required permissions are granted
     */
    public boolean areAllPermissionsGranted() {
        for (String permission : REQUIRED_PERMISSIONS) {
            if (!isPermissionGranted(permission)) {
                return false;
            }
        }
        return true;
    }
    
    /**
     * Check if specific permission is granted
     */
    public boolean isPermissionGranted(String permission) {
        if (permission.equals(Manifest.permission.SYSTEM_ALERT_WINDOW)) {
            // Special handling for overlay permission
            return Settings.canDrawOverlays(context);
        } else if (permission.equals(REQUEST_INSTALL_PACKAGES)) {
            // CRITICAL FIX: Android 8.0+ (API 26+) Unknown Sources permission
            if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.O) {
                return context.getPackageManager().canRequestPackageInstalls();
            }
            return true; // Not applicable for older Android versions
        } else {
            return ContextCompat.checkSelfPermission(context, permission) == PackageManager.PERMISSION_GRANTED;
        }
    }
    
    /**
     * Get list of missing permissions
     */
    public List<String> getMissingPermissions() {
        List<String> missing = new ArrayList<>();

        // Check standard permissions
        for (String permission : REQUIRED_PERMISSIONS) {
            if (!isPermissionGranted(permission)) {
                missing.add(permission);
            }
        }

        // CRITICAL FIX: Check Android 8.0+ REQUEST_INSTALL_PACKAGES permission
        if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.O) {
            if (!isPermissionGranted(REQUEST_INSTALL_PACKAGES)) {
                missing.add(REQUEST_INSTALL_PACKAGES);
            }
        }

        return missing;
    }
    
    /**
     * Get permission status for UI display
     */
    public PermissionStatus getPermissionStatus(String permission) {
        if (isPermissionGranted(permission)) {
            return PermissionStatus.GRANTED;
        } else {
            return PermissionStatus.REQUIRED;
        }
    }
    
    /**
     * Get user-friendly permission name
     */
    public String getPermissionDisplayName(String permission) {
        return PERMISSION_DISPLAY_NAMES.getOrDefault(permission, permission);
    }
    
    /**
     * Get user-friendly permission description
     */
    public String getPermissionDescription(String permission) {
        return PERMISSION_DESCRIPTIONS.getOrDefault(permission, "Required for app functionality");
    }
    
    /**
     * STREAMLINED: Start automated permission request flow
     */
    public void requestPermissionsAutomated(Activity activity, String pendingWorkflow) {
        this.pendingWorkflow = pendingWorkflow;
        this.isWaitingForPermissions = true;

        List<String> missingPermissions = getMissingPermissions();
        if (missingPermissions.isEmpty()) {
            Log.d(TAG, "All permissions already granted");
            onPermissionsGranted();
            return;
        }

        Log.d(TAG, "Starting automated permission flow for " + missingPermissions.size() + " permissions");

        // Direct settings navigation without complex dialogs
        openPermissionSettings(activity, missingPermissions);
    }

    /**
     * LEGACY: Start manual permission request flow (maintained for compatibility)
     */
    public void startManualPermissionFlow(Activity activity, String pendingWorkflow) {
        requestPermissionsAutomated(activity, pendingWorkflow);
    }
    
    /**
     * STREAMLINED: Direct permission settings navigation
     */
    private void openPermissionSettings(Activity activity, List<String> missingPermissions) {
        try {
            // CRITICAL FIX: Prioritize REQUEST_INSTALL_PACKAGES permission for Android 8.0+
            boolean needsInstallPackagesPermission = missingPermissions.contains(REQUEST_INSTALL_PACKAGES);
            boolean needsOverlayPermission = missingPermissions.contains(Manifest.permission.SYSTEM_ALERT_WINDOW);

            Intent intent;
            String message;

            if (needsInstallPackagesPermission && Build.VERSION.SDK_INT >= Build.VERSION_CODES.O) {
                // CRITICAL FIX: Direct to Unknown Sources permission for Android 8.0+
                intent = new Intent(Settings.ACTION_MANAGE_UNKNOWN_APP_SOURCES);
                intent.setData(Uri.parse("package:" + context.getPackageName()));
                message = "Enable 'Install unknown apps' permission";
            } else if (needsOverlayPermission) {
                // Direct to overlay permission
                intent = new Intent(Settings.ACTION_MANAGE_OVERLAY_PERMISSION);
                intent.setData(Uri.parse("package:" + context.getPackageName()));
                message = "Enable overlay permission";
            } else {
                // Direct to app permissions
                intent = new Intent(Settings.ACTION_APPLICATION_DETAILS_SETTINGS);
                intent.setData(Uri.parse("package:" + context.getPackageName()));
                message = "Grant required permissions";
            }

            activity.startActivity(intent);

            if (permissionListener != null) {
                permissionListener.onPermissionFlowStarted(message);
            }

        } catch (Exception e) {
            Log.e(TAG, "Error opening settings", e);
            if (permissionListener != null) {
                permissionListener.onPermissionFlowFailed("Settings unavailable");
            }
        }
    }
    
    /**
     * Check permissions when user returns from settings
     */
    public void checkPermissionsOnResume() {
        if (!isWaitingForPermissions) {
            return;
        }
        
        Log.d(TAG, "Checking permissions on app resume...");
        
        if (areAllPermissionsGranted()) {
            Log.i(TAG, "All permissions granted!");
            isWaitingForPermissions = false;
            onPermissionsGranted();
        } else {
            List<String> stillMissing = getMissingPermissions();
            Log.d(TAG, "Still missing " + stillMissing.size() + " permissions");
            
            if (permissionListener != null) {
                permissionListener.onPermissionStatusChanged(stillMissing);
            }
        }
    }
    
    /**
     * Handle permissions granted
     */
    private void onPermissionsGranted() {
        if (permissionListener != null) {
            permissionListener.onAllPermissionsGranted();
            
            // Resume pending workflow if any
            if (pendingWorkflow != null) {
                permissionListener.onWorkflowResumed(pendingWorkflow);
                pendingWorkflow = null;
            }
        }
    }
    
    /**
     * Cancel permission flow
     */
    public void cancelPermissionFlow() {
        isWaitingForPermissions = false;
        pendingWorkflow = null;
        
        if (permissionListener != null) {
            permissionListener.onPermissionFlowCancelled();
        }
    }
    
    /**
     * Set permission state listener
     */
    public void setPermissionStateListener(PermissionStateListener listener) {
        this.permissionListener = listener;
    }
    
    /**
     * Check if waiting for permissions
     */
    public boolean isWaitingForPermissions() {
        return isWaitingForPermissions;
    }
    
    /**
     * Get pending workflow
     */
    public String getPendingWorkflow() {
        return pendingWorkflow;
    }

    /**
     * STREAMLINED: Programmatic permission confirmation
     * Returns true if all permissions are granted, false otherwise
     */
    public boolean confirmPermissionsQuickly() {
        List<String> missingPermissions = getMissingPermissions();
        boolean allGranted = missingPermissions.isEmpty();

        Log.d(TAG, "Quick permission check: " + (allGranted ? "GRANTED" : "MISSING " + missingPermissions.size()));

        return allGranted;
    }

    /**
     * STREAMLINED: Get brief permission status summary
     */
    public String getPermissionStatusSummary() {
        List<String> missingPermissions = getMissingPermissions();
        if (missingPermissions.isEmpty()) {
            return "All permissions granted";
        } else {
            // CRITICAL FIX: Provide specific guidance for REQUEST_INSTALL_PACKAGES
            if (missingPermissions.contains(REQUEST_INSTALL_PACKAGES)) {
                return "Install unknown apps permission required (Android 8.0+)";
            } else if (missingPermissions.contains(Manifest.permission.SYSTEM_ALERT_WINDOW)) {
                return "Overlay permission required";
            } else {
                return missingPermissions.size() + " permissions required";
            }
        }
    }
    
    /**
     * Permission status enumeration
     */
    public enum PermissionStatus {
        GRANTED,    // Permission is granted
        REQUIRED,   // Permission is required but not granted
        DENIED      // Permission was denied by user
    }
    
    /**
     * Permission state listener interface
     */
    public interface PermissionStateListener {
        void onPermissionFlowStarted(String message);
        void onAllPermissionsGranted();
        void onPermissionStatusChanged(List<String> missingPermissions);
        void onWorkflowResumed(String workflow);
        void onPermissionFlowFailed(String error);
        void onPermissionFlowCancelled();
    }
}
