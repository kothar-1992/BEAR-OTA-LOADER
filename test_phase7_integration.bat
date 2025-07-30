@echo off
echo ========================================
echo Phase 7 Integration Testing Script
echo ========================================
echo.

echo [1/5] Building Release APK...
call gradlew assembleRelease
if %ERRORLEVEL% neq 0 (
    echo ERROR: Build failed!
    pause
    exit /b 1
)
echo ✅ Build successful!
echo.

echo [2/5] Locating APK file...
set APK_PATH=app\build\outputs\apk\release\app-release.apk
if exist "%APK_PATH%" (
    echo ✅ APK found: %APK_PATH%
) else (
    echo ❌ APK not found at expected location
    pause
    exit /b 1
)
echo.

echo [3/5] Checking ADB connection...
adb devices
echo.

echo [4/5] Installing APK to device/emulator...
adb install -r "%APK_PATH%"
if %ERRORLEVEL% neq 0 (
    echo ❌ Installation failed!
    echo Make sure LDPlayer or Android device is connected
    pause
    exit /b 1
)
echo ✅ APK installed successfully!
echo.

echo [5/5] Starting app for testing...
adb shell am start -n com.bearmod.loader/.ui.auth.LoginActivity
echo ✅ App launched!
echo.

echo ========================================
echo Phase 7 Integration Testing Checklist:
echo ========================================
echo.
echo 📱 MANUAL TESTING REQUIRED:
echo.
echo ✓ 1. Login to the app
echo ✓ 2. Navigate to MainActivity dashboard
echo ✓ 3. Test radio button behavior:
echo    - Select PUBG Global
echo    - Verify only Global is selected
echo    - Select PUBG Korea
echo    - Verify Korea selected, Global deselected
echo    - Repeat for Vietnam and Taiwan
echo.
echo ✓ 4. Test navigation integration:
echo    - Select any variant
echo    - Verify immediate navigation to BackgroundLauncherActivity
echo    - Verify correct game pre-selected in spinner
echo.
echo ✓ 5. Test state persistence:
echo    - Select a variant
echo    - Close app completely
echo    - Relaunch app
echo    - Verify selection restored
echo.
echo ✓ 6. Test user-friendly messages:
echo    - Look for consumer-friendly error messages
echo    - Verify no technical terms visible
echo.
echo ✓ 7. Test visual differentiation:
echo    - Compare MainActivity cards vs BackgroundLauncherActivity buttons
echo    - Verify different styling and corner radius
echo.
echo ✓ 8. Test package mapping:
echo    - Check logcat for correct package names:
echo      Global: com.tencent.ig
echo      Korea: com.pubg.krmobile
echo      Vietnam: com.vng.pubgmobile
echo      Taiwan: com.rekoo.pubgm
echo.
echo 📊 EXPECTED RESULTS:
echo - No crashes or compilation errors
echo - Smooth radio button behavior
echo - Immediate navigation with Intent extras
echo - Correct pre-selection in launcher
echo - Persistent state across sessions
echo - User-friendly error messages
echo - Clear visual differentiation
echo.
echo 🔍 DEBUG COMMANDS:
echo - View logs: adb logcat -s MainActivity:D BackgroundLauncher:D
echo - Clear app data: adb shell pm clear com.bearmod.loader
echo - Uninstall: adb uninstall com.bearmod.loader
echo.
echo ========================================
echo Phase 7 Integration Testing Complete!
echo ========================================
pause
