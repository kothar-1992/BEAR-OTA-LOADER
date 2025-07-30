# BearMod-Loader Testing Protocol

## Pre-Testing Setup

### Required Test Devices
- **Primary**: Android 8.0+ device (API 26+) for REQUEST_INSTALL_PACKAGES testing
- **Secondary**: Android 7.0 device (API 24-25) for backward compatibility
- **Emulator**: LDPlayer or Android Studio emulator with PUBG Mobile installed

### Test Environment Preparation
1. Install PUBG Mobile variants on test devices:
   - PUBG Mobile Global (com.tencent.ig)
   - PUBG Mobile Korea (com.pubg.krmobile) - if available
2. Enable Developer Options and USB Debugging
3. Prepare ADB connection for log monitoring

## Phase 1: Critical Fixes Verification

### Test 1.1: REQUEST_INSTALL_PACKAGES Permission (Android 8.0+)

**Prerequisites**: Android 8.0+ device

**Steps**:
1. Install BearMod-Loader APK on Android 8.0+ device
2. Launch app and navigate to MainActivity
3. Select any PUBG variant (e.g., Global)
4. Navigate to BackgroundLauncherActivity
5. Click "Grant Security Permissions" button

**Expected Results**:
- ✅ Button responds to click (not grayed out)
- ✅ App navigates to "Install unknown apps" settings page
- ✅ Settings page shows BearMod-Loader with toggle option
- ✅ After enabling permission, app detects it correctly

**Verification Commands**:
```bash
# Monitor permission status via ADB
adb logcat | grep "CRITICAL FIX"
adb logcat | grep "PermissionManager"
```

### Test 1.2: Button Functionality Verification

**Steps**:
1. In BackgroundLauncherActivity, test each button:
   - **Download Game Enhancement** (btnDownloadMod)
   - **Grant Security Permissions** (btnRequestPermissions)
   - **Start Game Enhancement** (btnStartOtaPatch)
   - **Game Integration Only** (btnInjectionOnly)
   - **Stop All Processes** (btnStop)

**Expected Results**:
- ✅ All buttons respond to clicks (show visual feedback)
- ✅ Buttons enable/disable based on app state
- ✅ Appropriate snackbar messages appear
- ✅ No crashes or unresponsive behavior

**Log Verification**:
```bash
# Check button state updates
adb logcat | grep "All 5 action buttons"
adb logcat | grep "button.*clicked"
```

### Test 1.3: Permission Integration Testing

**Steps**:
1. Start with no permissions granted
2. Check permission status display
3. Grant permissions one by one
4. Verify button states update accordingly

**Expected Results**:
- ✅ Permission status accurately reflects current state
- ✅ Button enable/disable logic works correctly
- ✅ REQUEST_INSTALL_PACKAGES included in permission checks
- ✅ User-friendly status messages displayed

## Phase 2: Core Functionality Testing

### Test 2.1: MainActivity Navigation Flow

**Steps**:
1. Launch app (should start with MainActivity)
2. Verify all 4 PUBG variants show as "Available"
3. Select each variant and verify navigation to BackgroundLauncherActivity
4. Use back button to return to MainActivity
5. Verify selection is cleared (all variants show "Available")

**Expected Results**:
- ✅ Fresh state on app launch
- ✅ Proper navigation between activities
- ✅ State clearing works correctly
- ✅ No automatic navigation on restart

### Test 2.2: Package Selection Isolation

**Steps**:
1. Select PUBG Global from MainActivity
2. Verify BackgroundLauncherActivity shows "Enhancement Tools - Global"
3. Return to MainActivity and select PUBG Korea
4. Verify BackgroundLauncherActivity shows "Enhancement Tools - Korea"

**Expected Results**:
- ✅ Only selected package is active
- ✅ Toolbar title reflects selected variant
- ✅ Package isolation working correctly

### Test 2.3: Permission Manager Integration

**Steps**:
1. Check permission status summary
2. Test automated permission request flow
3. Verify permission detection after granting
4. Test permission workflow resumption

**Expected Results**:
- ✅ Accurate permission status reporting
- ✅ Smooth permission request workflow
- ✅ Proper detection of granted permissions
- ✅ Workflow resumption after permissions granted

## Phase 3: Error Handling and Edge Cases

### Test 3.1: No PUBG Installed

**Steps**:
1. Test on device without PUBG Mobile installed
2. Select variant from MainActivity
3. Check BackgroundLauncherActivity behavior

**Expected Results**:
- ✅ App handles missing target app gracefully
- ✅ Appropriate error messages displayed
- ✅ No crashes or undefined behavior

### Test 3.2: Permission Denial Handling

**Steps**:
1. Deny permissions when requested
2. Check app behavior and user feedback
3. Test permission re-request flow

**Expected Results**:
- ✅ Graceful handling of permission denial
- ✅ Clear user guidance for next steps
- ✅ Ability to re-request permissions

### Test 3.3: Network Connectivity Issues

**Steps**:
1. Test with no internet connection
2. Test with poor network conditions
3. Verify KeyAuth connection handling

**Expected Results**:
- ✅ Appropriate error messages for network issues
- ✅ No crashes due to network problems
- ✅ Retry mechanisms work correctly

## Phase 4: Performance and Stability

### Test 4.1: Memory and Performance

**Steps**:
1. Monitor memory usage during app operation
2. Test rapid navigation between activities
3. Check for memory leaks

**Monitoring Commands**:
```bash
# Memory monitoring
adb shell dumpsys meminfo com.bearmod.loader
adb logcat | grep "GC_"
```

### Test 4.2: Long-Running Operation Testing

**Steps**:
1. Test download operations (if available)
2. Test background processes
3. Verify proper cleanup on app exit

**Expected Results**:
- ✅ Stable operation during long processes
- ✅ Proper resource cleanup
- ✅ No background processes after app exit

## Automated Testing Commands

### Build and Install
```bash
# Build and install for testing
./gradlew assembleDebug
adb install -r app/build/outputs/apk/debug/app-debug.apk
```

### Log Monitoring
```bash
# Comprehensive log monitoring
adb logcat | grep -E "(BearMod|PermissionManager|MainActivity|BackgroundLauncher)"

# Permission-specific logs
adb logcat | grep -E "(REQUEST_INSTALL_PACKAGES|CRITICAL FIX)"

# Button functionality logs
adb logcat | grep -E "(button.*clicked|action buttons)"
```

### Permission Status Check
```bash
# Check app permissions
adb shell dumpsys package com.bearmod.loader | grep permission
```

## Test Results Documentation

### Pass/Fail Criteria
- **CRITICAL**: All Phase 1 tests must pass (permission and button fixes)
- **IMPORTANT**: All Phase 2 tests should pass (core functionality)
- **NICE-TO-HAVE**: Phase 3 and 4 tests improve user experience

### Test Report Template
```
Test: [Test Name]
Device: [Android Version/Device Model]
Result: PASS/FAIL
Notes: [Specific observations]
Logs: [Relevant log entries]
```

## Next Steps After Testing
1. Document any failures with specific error logs
2. Verify all critical functionality works on target devices
3. Proceed to libbearmod.so integration setup
4. Configure KeyAuth file IDs for production use
