package com.bearmod

import android.Manifest
import android.annotation.SuppressLint
import android.app.Activity
import android.content.Context
import android.content.Intent
import android.content.pm.PackageManager
import android.net.Uri
import android.os.Build
import android.os.Environment
import android.provider.Settings
import android.util.Log
import androidx.annotation.RequiresApi
import androidx.core.app.ActivityCompat
import androidx.core.content.ContextCompat
import androidx.fragment.app.Fragment
import androidx.core.net.toUri


/**
 * Comprehensive permission management utility for BearMod
 * 
 * Handles all permission requirements for package installation and OBB file management
 * across different Android versions with proper fallback mechanisms and user guidance.
 * 
 * Features:
 * - Unknown Sources permission for APK installation
 * - Storage permissions for OBB file access (API-level aware)
 * - Overlay permission integration
 * - Batch permission requests
 * - User-friendly permission explanations
 * - Thread-safe operations
 * 
 * @author BearMod Team
 * @version 1.0
 */
class PermissionManager private constructor(private val context: Context) {
    
    companion object {
        private const val TAG = "PermissionManager"
        
        // Request codes for permission handling
        const val REQUEST_UNKNOWN_SOURCES = 3001
        const val REQUEST_STORAGE_PERMISSION = 3002
        const val REQUEST_MANAGE_EXTERNAL_STORAGE = 3003
        const val REQUEST_OVERLAY_PERMISSION = 3004
        const val REQUEST_BATCH_PERMISSIONS = 3005
        
        // Permission groups for batch requests
        const val PERMISSION_GROUP_BASIC = "basic"
        const val PERMISSION_GROUP_STORAGE = "storage"
        const val PERMISSION_GROUP_INSTALLATION = "installation"
        const val PERMISSION_GROUP_ALL = "all"
        
        @SuppressLint("StaticFieldLeak")
        @Volatile
        private var INSTANCE: PermissionManager? = null
        
        /**
         * Get singleton instance of PermissionManager
         */
        fun getInstance(context: Context): PermissionManager {
            return INSTANCE ?: synchronized(this) {
                INSTANCE ?: PermissionManager(context.applicationContext).also { INSTANCE = it }
            }
        }
    }
    
    /**
     * Data class to hold permission status information
     */
    data class PermissionStatus(
        val isGranted: Boolean,
        val permissionName: String,
        val rationale: String,
        val canShowRationale: Boolean = false,
        val requiresSystemSettings: Boolean = false
    )
    
    /**
     * Data class for batch permission results
     */
    data class BatchPermissionResult(
        val allGranted: Boolean,
        val grantedPermissions: List<String>,
        val deniedPermissions: List<String>,
        val permanentlyDeniedPermissions: List<String>
    )
    
    /**
     * Interface for permission result callbacks
     */
    interface PermissionCallback {
        fun onPermissionGranted(permission: String)
        fun onPermissionDenied(permission: String, canShowRationale: Boolean)
        fun onPermissionPermanentlyDenied(permission: String)
    }
    
    /**
     * Interface for batch permission callbacks
     */
    interface BatchPermissionCallback {
        fun onBatchPermissionResult(result: BatchPermissionResult)
    }
    
    // ================================================================================================
    // UNKNOWN SOURCES PERMISSION MANAGEMENT
    // ================================================================================================
    
    /**
     * Check if Unknown Sources permission is enabled for package installation
     * 
     * @return PermissionStatus with detailed information
     */
    fun checkUnknownSourcesPermission(): PermissionStatus {
        val isGranted =
            context.packageManager.canRequestPackageInstalls()

        return PermissionStatus(
            isGranted = isGranted,
            permissionName = "INSTALL_UNKNOWN_APPS",
            rationale = "Required to install APK files for game packages",
            requiresSystemSettings = true
        )
    }
    
    /**
     * Create intent to request Unknown Sources permission
     * 
     * @return Intent for requesting permission
     */
    fun createUnknownSourcesPermissionIntent(context: Context): Intent {
        return if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.O) {
            // For Android 8.0 (Oreo) and above (API 26+)
            Log.d("PermissionManager", "Creating intent for ACTION_MANAGE_UNKNOWN_APP_SOURCES")
            Intent(Settings.ACTION_MANAGE_UNKNOWN_APP_SOURCES, Uri.parse("package:${context.packageName}"))
        } else {
            // For Android versions prior to 8.0 (Oreo)
            // Unknown Sources is a global setting in older versions, not app-specific.
            // It's typically found under Security settings.
            Log.d("PermissionManager", "Creating intent for ACTION_SECURITY_SETTINGS (pre-Oreo)")
            Intent(Settings.ACTION_SECURITY_SETTINGS)
        }
    }
    
    /**
     * Request Unknown Sources permission with proper handling
     * 
     * @param activity Activity context for launching permission request
     * @param requestCode Request code for result handling
     */
    fun requestUnknownSourcesPermission(activity: Activity, requestCode: Int = REQUEST_UNKNOWN_SOURCES) {
        try {
            // 1. Call the function with 'activity' as the Context.
            // 2. Remove ': Unit' from the declaration of 'intent'.
            val intent = createUnknownSourcesPermissionIntent(activity) // Pass activity as context

            activity.startActivityForResult(intent, requestCode)
            Log.d(TAG, "Unknown Sources permission request launched")
        } catch (e: Exception) {
            Log.e(TAG, "Error requesting Unknown Sources permission", e)
        }
    }
    
    // ================================================================================================
    // STORAGE PERMISSION MANAGEMENT
    // ================================================================================================
    
    /**
     * Check storage permissions based on Android version
     * 
     * @return PermissionStatus with version-appropriate storage permission info
     */
    fun checkStoragePermission(): PermissionStatus {
        return when {
            Build.VERSION.SDK_INT >= Build.VERSION_CODES.TIRAMISU -> {
                // Android 13+ - App-specific directory access
                checkAppSpecificStoragePermission()
            }
            Build.VERSION.SDK_INT >= Build.VERSION_CODES.R -> {
                // Android 11-12 - MANAGE_EXTERNAL_STORAGE
                checkManageExternalStoragePermission()
            }
            else -> {
                // Android 10 and below - WRITE_EXTERNAL_STORAGE
                checkLegacyStoragePermission()
            }
        }
    }
    
    /**
     * Check app-specific storage permission for Android 13+
     */
    private fun checkAppSpecificStoragePermission(): PermissionStatus {
        // For Android 13+, we primarily use app-specific directories
        // which don't require special permissions
        val hasAccess = try {
            val obbDir = context.getExternalFilesDir("obb")
            obbDir?.exists() == true || obbDir?.mkdirs() == true
        } catch (e: Exception) {
            Log.e(TAG, "Error checking app-specific storage access", e)
            false
        }
        
        return PermissionStatus(
            isGranted = hasAccess,
            permissionName = "APP_SPECIFIC_STORAGE",
            rationale = "Required for accessing game OBB files in app-specific directories"
        )
    }
    
    /**
     * Check MANAGE_EXTERNAL_STORAGE permission for Android 11-12
     */
    @RequiresApi(Build.VERSION_CODES.R)
    private fun checkManageExternalStoragePermission(): PermissionStatus {
        val isGranted =
            Environment.isExternalStorageManager()

        return PermissionStatus(
            isGranted = isGranted,
            permissionName = Manifest.permission.MANAGE_EXTERNAL_STORAGE,
            rationale = "Required for full access to OBB files in Android/obb directory",
            requiresSystemSettings = true
        )
    }
    
    /**
     * Check legacy storage permission for Android 10 and below
     */
    private fun checkLegacyStoragePermission(): PermissionStatus {
        val isGranted = ContextCompat.checkSelfPermission(
            context,
            Manifest.permission.WRITE_EXTERNAL_STORAGE
        ) == PackageManager.PERMISSION_GRANTED
        
        return PermissionStatus(
            isGranted = isGranted,
            permissionName = Manifest.permission.WRITE_EXTERNAL_STORAGE,
            rationale = "Required for accessing OBB files in external storage"
        )
    }
    
    /**
     * Request appropriate storage permission based on Android version
     * 
     * @param activity Activity context for permission request
     * @param requestCode Request code for result handling
     */
    fun requestStoragePermission(activity: Activity, requestCode: Int = REQUEST_STORAGE_PERMISSION) {
        when {
            Build.VERSION.SDK_INT >= Build.VERSION_CODES.TIRAMISU -> {
                // Android 13+ - Usually no permission needed for app-specific directories
                Log.d(TAG, "Android 13+ detected - using app-specific storage")
            }
            Build.VERSION.SDK_INT >= Build.VERSION_CODES.R -> {
                // Android 11-12 - Request MANAGE_EXTERNAL_STORAGE
                requestManageExternalStoragePermission(activity, requestCode)
            }
            else -> {
                // Android 10 and below - Request WRITE_EXTERNAL_STORAGE
                requestLegacyStoragePermission(activity, requestCode)
            }
        }
    }
    
    /**
     * Request MANAGE_EXTERNAL_STORAGE permission for Android 11+
     */
    private fun requestManageExternalStoragePermission(activity: Activity, requestCode: Int) {
        if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.R) {
            try {
                val intent = Intent(Settings.ACTION_MANAGE_APP_ALL_FILES_ACCESS_PERMISSION).apply {
                    data = "package:${context.packageName}".toUri()
                }
                activity.startActivityForResult(intent, requestCode)
                Log.d(TAG, "MANAGE_EXTERNAL_STORAGE permission request launched")
            } catch (e: Exception) {
                Log.e(TAG, "Error requesting MANAGE_EXTERNAL_STORAGE permission", e)
                // Fallback to general storage settings
                val fallbackIntent = Intent(Settings.ACTION_MANAGE_ALL_FILES_ACCESS_PERMISSION)
                activity.startActivityForResult(fallbackIntent, requestCode)
            }
        }
    }
    
    /**
     * Request legacy storage permission for Android 10 and below
     */
    private fun requestLegacyStoragePermission(activity: Activity, requestCode: Int) {
        ActivityCompat.requestPermissions(
            activity,
            arrayOf(Manifest.permission.WRITE_EXTERNAL_STORAGE),
            requestCode
        )
        Log.d(TAG, "WRITE_EXTERNAL_STORAGE permission request launched")
    }
    
    // ================================================================================================
    // OVERLAY PERMISSION MANAGEMENT
    // ================================================================================================
    
    /**
     * Check overlay permission status
     * 
     * @return PermissionStatus for overlay permission
     */
    fun checkOverlayPermission(): PermissionStatus {
        val isGranted = Settings.canDrawOverlays(context)
        
        return PermissionStatus(
            isGranted = isGranted,
            permissionName = "SYSTEM_ALERT_WINDOW",
            rationale = "Required for floating overlay and mod interface",
            requiresSystemSettings = true
        )
    }
    
    /**
     * Create intent to request overlay permission
     * 
     * @return Intent for requesting overlay permission
     */
    fun createOverlayPermissionIntent(): Intent {
        return Intent(Settings.ACTION_MANAGE_OVERLAY_PERMISSION).apply {
            data = "package:${context.packageName}".toUri()
        }
    }
    
    /**
     * Request overlay permission
     *
     * @param activity Activity context for permission request
     * @param requestCode Request code for result handling
     */
    fun requestOverlayPermission(activity: Activity, requestCode: Int = REQUEST_OVERLAY_PERMISSION) {
        try {
            val intent = createOverlayPermissionIntent()
            activity.startActivityForResult(intent, requestCode)
            Log.d(TAG, "Overlay permission request launched")
        } catch (e: Exception) {
            Log.e(TAG, "Error requesting overlay permission", e)
        }
    }

    // ================================================================================================
    // BATCH PERMISSION MANAGEMENT
    // ================================================================================================

    /**
     * Check multiple permissions at once
     *
     * @param permissionGroup Group of permissions to check
     * @return Map of permission names to their status
     */
    fun checkBatchPermissions(permissionGroup: String): Map<String, PermissionStatus> {
        val permissions = getPermissionsForGroup(permissionGroup)
        val results = mutableMapOf<String, PermissionStatus>()

        permissions.forEach { permission ->
            results[permission] = when (permission) {
                "UNKNOWN_SOURCES" -> checkUnknownSourcesPermission()
                "STORAGE" -> checkStoragePermission()
                "OVERLAY" -> checkOverlayPermission()
                else -> PermissionStatus(false, permission, "Unknown permission")
            }
        }

        return results
    }

    /**
     * Request multiple permissions in sequence
     *
     * @param activity Activity context for permission requests
     * @param permissionGroup Group of permissions to request
     * @param callback Callback for batch permission results
     */
    fun requestBatchPermissions(
        activity: Activity,
        permissionGroup: String,
        callback: BatchPermissionCallback? = null
    ) {
        val permissions = getPermissionsForGroup(permissionGroup)
        val results = mutableListOf<String>()
        val denied = mutableListOf<String>()
        val permanentlyDenied = mutableListOf<String>()

        Log.d(TAG, "Requesting batch permissions for group: $permissionGroup")

        // Check current status first
        permissions.forEach { permission ->
            val status = when (permission) {
                "UNKNOWN_SOURCES" -> checkUnknownSourcesPermission()
                "STORAGE" -> checkStoragePermission()
                "OVERLAY" -> checkOverlayPermission()
                else -> PermissionStatus(false, permission, "Unknown permission")
            }

            if (status.isGranted) {
                results.add(permission)
            } else {
                denied.add(permission)
            }
        }

        // If all permissions are already granted, return immediately
        if (denied.isEmpty()) {
            callback?.onBatchPermissionResult(
                BatchPermissionResult(
                    allGranted = true,
                    grantedPermissions = results,
                    deniedPermissions = emptyList(),
                    permanentlyDeniedPermissions = emptyList()
                )
            )
            return
        }

        // Request the first denied permission
        // Note: In a real implementation, you might want to implement a queue system
        // for sequential permission requests
        denied.firstOrNull()?.let { permission ->
            when (permission) {
                "UNKNOWN_SOURCES" -> requestUnknownSourcesPermission(activity)
                "STORAGE" -> requestStoragePermission(activity)
                "OVERLAY" -> requestOverlayPermission(activity)
            }
        }
    }

    /**
     * Get list of permissions for a given group
     */
    private fun getPermissionsForGroup(group: String): List<String> {
        return when (group) {
            PERMISSION_GROUP_BASIC -> listOf("OVERLAY")
            PERMISSION_GROUP_STORAGE -> listOf("STORAGE")
            PERMISSION_GROUP_INSTALLATION -> listOf("UNKNOWN_SOURCES")
            PERMISSION_GROUP_ALL -> listOf("UNKNOWN_SOURCES", "STORAGE", "OVERLAY")
            else -> emptyList()
        }
    }

    // ================================================================================================
    // UTILITY METHODS
    // ================================================================================================

    /**
     * Check if all required permissions for BearMod are granted
     *
     * @return true if all essential permissions are granted
     */
    fun areAllRequiredPermissionsGranted(): Boolean {
        val unknownSources = checkUnknownSourcesPermission()
        val storage = checkStoragePermission()
        val overlay = checkOverlayPermission()

        return unknownSources.isGranted && storage.isGranted && overlay.isGranted
    }

    /**
     * Get a comprehensive permission status report
     *
     * @return Formatted string with all permission statuses
     */
    fun getPermissionStatusReport(): String {
        val unknownSources = checkUnknownSourcesPermission()
        val storage = checkStoragePermission()
        val overlay = checkOverlayPermission()

        return buildString {
            appendLine("=== BearMod Permission Status ===")
            appendLine("Unknown Sources: ${if (unknownSources.isGranted) "✓ Granted" else "✗ Denied"}")
            appendLine("Storage Access: ${if (storage.isGranted) "✓ Granted" else "✗ Denied"}")
            appendLine("Overlay Permission: ${if (overlay.isGranted) "✓ Granted" else "✗ Denied"}")
            appendLine("Android Version: ${Build.VERSION.SDK_INT} (API ${Build.VERSION.RELEASE})")
            appendLine("All Required: ${if (areAllRequiredPermissionsGranted()) "✓ Ready" else "✗ Missing"}")
        }
    }

    /**
     * Get user-friendly permission explanation
     *
     * @param permission Permission name to explain
     * @return Human-readable explanation of why the permission is needed
     */
    fun getPermissionExplanation(permission: String): String {
        return when (permission) {
            "UNKNOWN_SOURCES" -> "BearMod needs permission to install game packages (APK files) for proper mod functionality. This allows the app to help you install supported game versions."

            "STORAGE" -> "Storage access is required to read and validate game OBB files. These large data files contain game assets and are essential for proper game operation."

            "OVERLAY" -> "Overlay permission allows BearMod to display its floating interface over games. This is essential for accessing mod features while playing."

            else -> "This permission is required for BearMod to function properly."
        }
    }

    /**
     * Create a user-friendly dialog message for permission requests
     *
     * @param permissions List of permissions to explain
     * @return Formatted message explaining all permissions
     */
    fun createPermissionDialogMessage(permissions: List<String>): String {
        return buildString {
            appendLine("BearMod requires the following permissions to function properly:\n")

            permissions.forEach { permission ->
                val status = when (permission) {
                    "UNKNOWN_SOURCES" -> checkUnknownSourcesPermission()
                    "STORAGE" -> checkStoragePermission()
                    "OVERLAY" -> checkOverlayPermission()
                    else -> PermissionStatus(false, permission, "Unknown")
                }

                val statusIcon = if (status.isGranted) "✓" else "○"
                appendLine("$statusIcon ${status.rationale}")
            }

            appendLine("\nWould you like to grant these permissions now?")
        }
    }

    /**
     * Handle permission result from onActivityResult
     *
     * @param requestCode Request code from the permission request
     * @param resultCode Result code from the activity
     * @param callback Optional callback for permission result
     */
    fun handlePermissionResult(
        requestCode: Int,
        resultCode: Int,
        callback: PermissionCallback? = null
    ) {
        when (requestCode) {
            REQUEST_UNKNOWN_SOURCES -> {
                val status = checkUnknownSourcesPermission()
                if (status.isGranted) {
                    Log.d(TAG, "Unknown Sources permission granted")
                    callback?.onPermissionGranted("UNKNOWN_SOURCES")
                } else {
                    Log.w(TAG, "Unknown Sources permission denied")
                    callback?.onPermissionDenied("UNKNOWN_SOURCES", false)
                }
            }

            REQUEST_STORAGE_PERMISSION, REQUEST_MANAGE_EXTERNAL_STORAGE -> {
                val status = checkStoragePermission()
                if (status.isGranted) {
                    Log.d(TAG, "Storage permission granted")
                    callback?.onPermissionGranted("STORAGE")
                } else {
                    Log.w(TAG, "Storage permission denied")
                    callback?.onPermissionDenied("STORAGE", false)
                }
            }

            REQUEST_OVERLAY_PERMISSION -> {
                val status = checkOverlayPermission()
                if (status.isGranted) {
                    Log.d(TAG, "Overlay permission granted")
                    callback?.onPermissionGranted("OVERLAY")
                } else {
                    Log.w(TAG, "Overlay permission denied")
                    callback?.onPermissionDenied("OVERLAY", false)
                }
            }
        }
    }
}
