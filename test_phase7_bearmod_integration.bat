@echo off
echo ========================================
echo Phase 7 BearMod Integration Testing Script
echo ========================================
echo.

echo [1/6] Building Release APK...
call gradlew assembleRelease
if %ERRORLEVEL% neq 0 (
    echo ERROR: Build failed!
    pause
    exit /b 1
)
echo ✅ Build successful!
echo.

echo [2/6] Locating APK file...
set APK_PATH=app\build\outputs\apk\release\app-release.apk
if exist "%APK_PATH%" (
    echo ✅ APK found: %APK_PATH%
) else (
    echo ❌ APK not found at expected location
    pause
    exit /b 1
)
echo.

echo [3/6] Checking ADB connection...
adb devices
echo.

echo [4/6] Installing APK to LDPlayer emulator...
adb install -r "%APK_PATH%"
if %ERRORLEVEL% neq 0 (
    echo ❌ Installation failed!
    echo Make sure LDPlayer Android emulator is running
    pause
    exit /b 1
)
echo ✅ APK installed successfully!
echo.

echo [5/6] Starting app for BearMod integration testing...
adb shell am start -n com.bearmod.loader/.ui.auth.LoginActivity
echo ✅ App launched!
echo.

echo [6/6] Starting logcat monitoring...
start "BearMod Integration Logs" adb logcat -s MainActivity:D BackgroundLauncher:D KeyAuthDownloadManager:D FridaPatchManager:D SignatureVerifier:D
echo ✅ Logcat monitoring started in separate window
echo.

echo ========================================
echo Phase 7 BearMod Integration Testing Checklist:
echo ========================================
echo.
echo 📱 **CRITICAL INTEGRATION TESTS:**
echo.
echo ✓ **1. Runtime Injection Testing (ENHANCED):**
echo    - Install PUBG Mobile variants on LDPlayer emulator
echo    - Test runtime libbearmod.so injection (no pre-installation required):
echo      • PUBG Global (com.tencent.ig) - KeyAuth file ID: libbearmod_global_2024
echo      • PUBG Korea (com.pubg.krmobile) - KeyAuth file ID: libbearmod_korea_2024
echo      • PUBG Vietnam (com.vng.pubgmobile) - KeyAuth file ID: libbearmod_vietnam_2024
echo      • PUBG Taiwan (com.rekoo.pubgm) - KeyAuth file ID: libbearmod_taiwan_2024
echo    - Test archive extraction (ZIP files from KeyAuth)
echo    - Verify Dalvik bytecode connection:
echo      invoke-static {p0}, Lcom/BearModOfficial/Launcher;->Init(Ljava/lang/Object;)V
echo    - Test automatic cleanup when games terminate
echo    - Document any connection failures or compatibility issues
echo.
echo ✓ **2. Streamlined Permission System Testing (UPDATED):**
echo    - Navigate to BackgroundLauncherActivity Security Permissions section
echo    - Click "Grant Permissions" button
echo    - Verify StreamlinedPermissionDialog appears with:
echo      • Brief permission list with single-line purposes
echo      • Minimal UI with essential information only
echo      • Single "Grant" button for direct settings navigation
echo    - Click "Grant" and verify immediate Android Settings opening
echo    - Grant permissions and return to app
echo    - Confirm automatic detection and workflow resumption
echo.
echo ✓ **3. Progress Tracking UI Testing:**
echo    - Navigate to BackgroundLauncherActivity
echo    - Click "Start Game Enhancement" button
echo    - Verify real-time progress indicators:
echo      • Download progress (0-90%%)
echo      • Verification progress (90-95%%)
echo      • Injection progress (95-100%%)
echo    - Check LinearProgressIndicator animations
echo    - Verify consumer-friendly status messages
echo    - Confirm Material Design 3 premium styling
echo.
echo ✓ **3. KeyAuth Integration Testing:**
echo    - Login with valid KeyAuth credentials
echo    - Test OTA runtime updates download
echo    - Verify authentication flow for game enhancements
echo    - Check signature verification of downloaded files
echo    - Test secure storage and caching mechanisms
echo.
echo ✓ **4. Non-Root Frida-Gadget Testing:**
echo    - Test non-root injection methods on Android 7.1+
echo    - Verify Frida-gadget injection techniques
echo    - Test fallback mechanisms when standard injection fails
echo    - Validate SignatureVerifier integration for injected components
echo.
echo ✓ **5. Runtime Logic Testing:**
echo    - Test automated enhancement workflow (Phase 7f)
echo    - Verify error handling and recovery mechanisms
echo    - Check comprehensive logging for debugging
echo    - Test user-facing notifications for success/failure
echo.
echo 🎯 **SUCCESS CRITERIA VERIFICATION:**
echo.
echo ✓ **Successful libbearmod.so injection on at least 2 PUBG variants**
echo ✓ **Functional progress tracking UI with real-time updates**
echo ✓ **Working KeyAuth integration for OTA downloads**
echo ✓ **Non-root injection methods functional on LDPlayer**
echo ✓ **All components integrated with Phase 7 dashboard and signature verification**
echo.
echo 🔍 **DEBUGGING COMMANDS:**
echo.
echo - View all logs: adb logcat
echo - Filter BearMod logs: adb logcat -s MainActivity:D BackgroundLauncher:D KeyAuthDownloadManager:D
echo - Filter injection logs: adb logcat -s RuntimeInjectionManager:D FridaPatchManager:D HybridInjectionManager:D
echo - Filter monitoring logs: adb logcat -s ProcessLifecycleMonitor:D
echo - Filter permission logs: adb logcat -s PermissionManager:D StreamlinedPermissionDialog:D
echo - Filter signature logs: adb logcat -s SignatureVerifier:D TargetAppManager:D
echo - Clear app data: adb shell pm clear com.bearmod.loader
echo - Restart app: adb shell am start -n com.bearmod.loader/.ui.auth.LoginActivity
echo - Check installed PUBG variants: adb shell pm list packages | findstr pubg
echo - Check installed PUBG variants: adb shell pm list packages | findstr tencent
echo - Uninstall BearMod: adb uninstall com.bearmod.loader
echo.
echo 📊 **EXPECTED TEST RESULTS:**
echo.
echo ✅ **Target App Integration:**
echo - Successful injection into at least 2 PUBG variants
echo - Dalvik bytecode connection established
echo - No crashes during injection process
echo - Proper error handling for unsupported variants
echo.
echo ✅ **Progress Tracking UI:**
echo - Smooth progress animations (200-300ms transitions)
echo - Real-time status updates with consumer-friendly messages
echo - Material Design 3 premium styling maintained
echo - Proper visual hierarchy and accessibility contrast
echo.
echo ✅ **KeyAuth Integration:**
echo - Successful authentication and session management
echo - OTA downloads complete with signature verification
echo - Secure file storage and caching functional
echo - Proper error handling for network issues
echo.
echo ✅ **Non-Root Injection:**
echo - Frida-gadget injection successful on LDPlayer
echo - Fallback mechanisms work when primary methods fail
echo - No root permissions required for basic functionality
echo - Comprehensive logging for troubleshooting
echo.
echo ✅ **Runtime Logic:**
echo - Automated workflow completes successfully
echo - Error recovery mechanisms functional
echo - User notifications clear and actionable
echo - Integration with existing Phase 7 components seamless
echo.
echo 🚨 **KNOWN LIMITATIONS:**
echo.
echo - Some injection methods are simulated for testing
echo - Actual PUBG variant compatibility may vary
echo - Network connectivity required for KeyAuth downloads
echo - LDPlayer emulator environment may differ from real devices
echo.
echo ========================================
echo Phase 7 BearMod Integration Testing Ready!
echo ========================================
echo.
echo 🎯 **NEXT STEPS:**
echo 1. Complete manual testing checklist above
echo 2. Document any issues or compatibility problems
echo 3. Test with both official and modified PUBG APKs
echo 4. Validate all UI components follow Material Design 3
echo 5. Ensure consumer-friendly error messages throughout
echo.
echo Press any key to continue monitoring logs...
pause
