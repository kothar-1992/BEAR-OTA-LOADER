@echo off
REM BearMod Local Build Script for Windows
REM Usage: build.bat [debug|release|clean|test]

setlocal enabledelayedexpansion

echo.
echo ========================================
echo    BearMod v2.0 Build Script
echo ========================================
echo.

REM Set default build type
set BUILD_TYPE=%1
if "%BUILD_TYPE%"=="" set BUILD_TYPE=debug

REM Check if gradlew exists
if not exist "gradlew.bat" (
    echo ERROR: gradlew.bat not found!
    echo Please run this script from the project root directory.
    pause
    exit /b 1
)

REM Display build information
echo Build Type: %BUILD_TYPE%
echo Project: BearMod v2.0
echo Date: %date% %time%
echo.

REM Execute based on build type
if /i "%BUILD_TYPE%"=="clean" (
    echo Cleaning project...
    call gradlew.bat clean
    if !errorlevel! neq 0 (
        echo ERROR: Clean failed!
        pause
        exit /b 1
    )
    echo Clean completed successfully!
    goto :end
)

if /i "%BUILD_TYPE%"=="test" (
    echo Running tests...
    call gradlew.bat testDebugUnitTest
    if !errorlevel! neq 0 (
        echo ERROR: Tests failed!
        pause
        exit /b 1
    )
    echo Tests completed successfully!
    goto :end
)

if /i "%BUILD_TYPE%"=="debug" (
    echo Building Debug APK...
    call gradlew.bat assembleDebug
    if !errorlevel! neq 0 (
        echo ERROR: Debug build failed!
        pause
        exit /b 1
    )
    echo.
    echo Debug APK built successfully!
    echo Location: app\build\outputs\apk\debug\
    for %%f in (app\build\outputs\apk\debug\*.apk) do (
        echo File: %%~nxf
        echo Size: %%~zf bytes
    )
    goto :end
)

if /i "%BUILD_TYPE%"=="release" (
    echo Building Release APK...
    call gradlew.bat assembleRelease
    if !errorlevel! neq 0 (
        echo ERROR: Release build failed!
        pause
        exit /b 1
    )
    echo.
    echo Release APK built successfully!
    echo Location: app\build\outputs\apk\release\
    for %%f in (app\build\outputs\apk\release\*.apk) do (
        echo File: %%~nxf
        echo Size: %%~zf bytes
    )
    goto :end
)

echo ERROR: Unknown build type '%BUILD_TYPE%'
echo Valid options: debug, release, clean, test
pause
exit /b 1

:end
echo.
echo ========================================
echo Build completed at %time%
echo ========================================
echo.
pause
