@echo off
REM BearMod mundo_core Module Build Script for Windows
REM Usage: build-mundo.bat [debug|release|clean]

setlocal enabledelayedexpansion

echo.
echo ========================================
echo    BearMod mundo_core Module Build
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
echo Module: mundo_core (libmundo.so)
echo Date: %date% %time%
echo.

REM Execute based on build type
if /i "%BUILD_TYPE%"=="clean" (
    echo Cleaning mundo_core module...
    call gradlew.bat :mundo_core:clean
    if !errorlevel! neq 0 (
        echo ERROR: Clean failed!
        pause
        exit /b 1
    )
    echo Clean completed successfully!
    goto :end
)

if /i "%BUILD_TYPE%"=="debug" (
    echo Building mundo_core Debug...
    call gradlew.bat :mundo_core:assembleDebug
    if !errorlevel! neq 0 (
        echo ERROR: Debug build failed!
        pause
        exit /b 1
    )
    echo.
    echo mundo_core Debug built successfully!
    echo Checking for libmundo.so...
    
    REM Check for libmundo.so in build output
    set LIBMUNDO_PATH=mundo_core\build\intermediates\cxx\Debug\*\obj\arm64-v8a\libmundo.so
    for %%f in (%LIBMUNDO_PATH%) do (
        if exist "%%f" (
            echo ✅ Found: %%f
            echo Size: %%~zf bytes
        )
    )
    
    set MERGED_PATH=mundo_core\build\intermediates\merged_native_libs\debug\mergeDebugNativeLibs\out\lib\arm64-v8a\libmundo.so
    if exist "%MERGED_PATH%" (
        echo ✅ Found: %MERGED_PATH%
        for %%f in ("%MERGED_PATH%") do echo Size: %%~zf bytes
    )
    goto :end
)

if /i "%BUILD_TYPE%"=="release" (
    echo Building mundo_core Release...
    call gradlew.bat :mundo_core:assembleRelease
    if !errorlevel! neq 0 (
        echo ERROR: Release build failed!
        pause
        exit /b 1
    )
    echo.
    echo mundo_core Release built successfully!
    echo Checking for libmundo.so...
    
    REM Check for libmundo.so in build output
    set LIBMUNDO_PATH=mundo_core\build\intermediates\cxx\Release\*\obj\arm64-v8a\libmundo.so
    for %%f in (%LIBMUNDO_PATH%) do (
        if exist "%%f" (
            echo ✅ Found: %%f
            echo Size: %%~zf bytes
        )
    )
    
    set MERGED_PATH=mundo_core\build\intermediates\merged_native_libs\release\mergeReleaseNativeLibs\out\lib\arm64-v8a\libmundo.so
    if exist "%MERGED_PATH%" (
        echo ✅ Found: %MERGED_PATH%
        for %%f in ("%MERGED_PATH%") do echo Size: %%~zf bytes
    )
    goto :end
)

echo ERROR: Unknown build type '%BUILD_TYPE%'
echo Valid options: debug, release, clean
pause
exit /b 1

:end
echo.
echo ========================================
echo mundo_core build completed at %time%
echo ========================================
echo.
pause
