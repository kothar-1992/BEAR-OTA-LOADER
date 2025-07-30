# Streamlined Permission System Usage Examples

## 🚀 Quick Start Guide

### **1. Programmatic Permission Checking**

```java
// Quick boolean check for all permissions
BackgroundLauncherActivity activity = ...;
boolean allGranted = activity.checkPermissionsQuickly();

if (allGranted) {
    // Proceed with BearMod injection
    startGameEnhancement();
} else {
    // Request permissions
    activity.startManualPermissionFlow();
}
```

### **2. Permission Status Summary**

```java
// Get brief status text for UI display
BackgroundLauncherActivity activity = ...;
String status = activity.getPermissionStatusSummary();

// Possible returns:
// "All permissions granted"
// "3 permissions required"
// "Permission manager not initialized"

updateStatusText(status);
```

### **3. Direct PermissionManager Usage**

```java
// Initialize permission manager
PermissionManager permissionManager = new PermissionManager(context);

// Quick confirmation
boolean ready = permissionManager.confirmPermissionsQuickly();

// Get missing permissions
List<String> missing = permissionManager.getMissingPermissions();

// Start automated flow
permissionManager.requestPermissionsAutomated(activity, "game_enhancement");
```

### **4. Streamlined Dialog Integration**

```java
// Show minimal confirmation dialog
StreamlinedPermissionDialog dialog = new StreamlinedPermissionDialog(context, permissionManager);

List<String> missingPermissions = permissionManager.getMissingPermissions();
dialog.showPermissionConfirmation(missingPermissions, new StreamlinedPermissionDialog.OnConfirmListener() {
    @Override
    public void onConfirmed() {
        // User confirmed - direct to settings
        permissionManager.requestPermissionsAutomated(activity, workflow);
    }
    
    @Override
    public void onCancelled() {
        // User cancelled - show brief message
        showSnackbar("Permissions required for functionality", false);
    }
});
```

## 📋 **Permission Descriptions Reference**

### **Concise Single-Line Purposes**

| Permission | Display Name | Purpose Description |
|------------|--------------|-------------------|
| `WRITE_EXTERNAL_STORAGE` | Storage Access | Store enhancement files |
| `READ_EXTERNAL_STORAGE` | File Access | Access enhancement files |
| `SYSTEM_ALERT_WINDOW` | Overlay Permission | Enable game overlay |
| `ACCESS_NETWORK_STATE` | Network State | Check connectivity |
| `INTERNET` | Internet Access | Download enhancements |

### **Usage in UI**

```java
// Display permission list
for (String permission : missingPermissions) {
    String displayName = permissionManager.getPermissionDisplayName(permission);
    String purpose = permissionManager.getPermissionDescription(permission);
    
    // Creates: "• Storage Access - Store enhancement files"
    String listItem = "• " + displayName + " - " + purpose;
    addPermissionItem(listItem);
}
```

## 🔄 **Automatic Detection Flow**

### **1. Activity Resume Detection**

```java
@Override
protected void onResume() {
    super.onResume();
    
    // Automatic permission checking when user returns from settings
    if (permissionManager != null) {
        permissionManager.checkPermissionsOnResume();
    }
}
```

### **2. Permission State Listener**

```java
permissionManager.setPermissionStateListener(new PermissionManager.PermissionStateListener() {
    @Override
    public void onAllPermissionsGranted() {
        // All permissions granted - continue workflow
        runOnUiThread(() -> {
            showSnackbar("All permissions granted!", false);
            updatePermissionsStatus();
        });
    }
    
    @Override
    public void onWorkflowResumed(String workflow) {
        // Workflow automatically resumed
        runOnUiThread(() -> {
            showSnackbar("Resuming " + workflow + "...", false);
            resumeInterruptedWorkflow(workflow);
        });
    }
    
    @Override
    public void onPermissionFlowStarted(String message) {
        // Brief status message
        runOnUiThread(() -> showSnackbar(message, false));
    }
});
```

## ⚡ **Performance Optimizations**

### **1. Quick Status Checks**

```java
// Efficient boolean check without UI updates
boolean isReady = permissionManager.confirmPermissionsQuickly();

// Brief status text for display
String statusText = permissionManager.getPermissionStatusSummary();
```

### **2. Minimal Logging**

```java
// Streamlined log messages
Log.d(TAG, "Quick permission check: " + (allGranted ? "GRANTED" : "MISSING " + count));
Log.d(TAG, "Still missing " + stillMissing.size() + " permissions");
Log.i(TAG, "All permissions granted!");
```

### **3. Direct Settings Navigation**

```java
// Immediate settings opening without intermediate dialogs
private void openPermissionSettings(Activity activity, List<String> missingPermissions) {
    Intent intent;
    String message;
    
    if (needsOverlayPermission) {
        intent = new Intent(Settings.ACTION_MANAGE_OVERLAY_PERMISSION);
        message = "Enable overlay permission";
    } else {
        intent = new Intent(Settings.ACTION_APPLICATION_DETAILS_SETTINGS);
        message = "Grant required permissions";
    }
    
    activity.startActivity(intent);
    notifyListener(message);
}
```

## 🎯 **Best Practices**

### **1. Minimize User Friction**
- Use single confirmation dialogs
- Provide brief, essential information only
- Direct navigation to Android Settings
- Automatic detection and workflow resumption

### **2. Programmatic Integration**
- Check permissions before starting operations
- Use boolean methods for quick validation
- Implement automatic retry mechanisms
- Provide status summaries for UI display

### **3. Error Handling**
- Brief, user-friendly error messages
- Fallback options for permission denial
- Consistent logging for debugging
- Graceful degradation when permissions unavailable

### **4. Performance Considerations**
- Cache permission status when possible
- Use background threads for permission checking
- Minimize UI updates during permission flows
- Implement efficient state management

## 🔧 **Integration Examples**

### **NonRootPatchManager Integration**

```java
public class NonRootPatchManager {
    private PermissionManager permissionManager;
    
    public void applyPatch(Context context, String targetPackage, String patchId, PatchCallback callback) {
        // Quick permission check before patch application
        if (!permissionManager.confirmPermissionsQuickly()) {
            callback.onPatchFailed("Permissions required for patch application");
            return;
        }
        
        // Proceed with patch application
        executor.execute(() -> {
            // Patch logic here...
        });
    }
}
```

### **RuntimeInjectionManager Integration**

```java
public class RuntimeInjectionManager {
    public void injectLibrary(String targetPackage, InjectionCallback callback) {
        // Verify permissions before injection
        BackgroundLauncherActivity activity = getCurrentActivity();
        if (!activity.checkPermissionsQuickly()) {
            callback.onInjectionFailed("Required permissions not granted");
            return;
        }
        
        // Proceed with injection
        performInjection(targetPackage, callback);
    }
}
```

## 📱 **Testing Scenarios**

### **1. Quick Permission Validation**
```java
// Test programmatic checking
assertTrue(activity.checkPermissionsQuickly());
assertEquals("All permissions granted", activity.getPermissionStatusSummary());
```

### **2. Streamlined Dialog Flow**
```java
// Test minimal confirmation dialog
StreamlinedPermissionDialog dialog = new StreamlinedPermissionDialog(context, permissionManager);
dialog.showPermissionConfirmation(missingPermissions, listener);

// Verify direct settings navigation
verify(activity).startActivity(settingsIntent);
```

### **3. Automatic Detection**
```java
// Test resume detection
activity.onResume();
verify(permissionManager).checkPermissionsOnResume();

// Verify workflow resumption
verify(listener).onWorkflowResumed("game_enhancement");
```

**The streamlined permission system provides efficient, user-friendly permission management with minimal friction and maximum automation.**
