#!/bin/bash
# BearMod Local Build Script for Linux/macOS
# Usage: ./build.sh [debug|release|clean|test]

set -e

echo ""
echo "========================================"
echo "    BearMod v2.0 Build Script"
echo "========================================"
echo ""

# Set default build type
BUILD_TYPE=${1:-debug}

# Check if gradlew exists
if [ ! -f "./gradlew" ]; then
    echo "ERROR: gradlew not found!"
    echo "Please run this script from the project root directory."
    exit 1
fi

# Make gradlew executable
chmod +x ./gradlew

# Display build information
echo "Build Type: $BUILD_TYPE"
echo "Project: BearMod v2.0"
echo "Date: $(date)"
echo ""

# Function to display APK info
display_apk_info() {
    local apk_dir=$1
    if [ -d "$apk_dir" ]; then
        echo "Location: $apk_dir"
        for apk in "$apk_dir"/*.apk; do
            if [ -f "$apk" ]; then
                echo "File: $(basename "$apk")"
                echo "Size: $(stat -c%s "$apk" 2>/dev/null || stat -f%z "$apk" 2>/dev/null || echo "unknown") bytes"
            fi
        done
    fi
}

# Execute based on build type
case "$BUILD_TYPE" in
    "clean")
        echo "Cleaning project..."
        ./gradlew clean
        echo "Clean completed successfully!"
        ;;
    
    "test")
        echo "Running tests..."
        ./gradlew testDebugUnitTest
        echo "Tests completed successfully!"
        ;;
    
    "debug")
        echo "Building Debug APK..."
        ./gradlew assembleDebug
        echo ""
        echo "Debug APK built successfully!"
        display_apk_info "app/build/outputs/apk/debug"
        ;;
    
    "release")
        echo "Building Release APK..."
        ./gradlew assembleRelease
        echo ""
        echo "Release APK built successfully!"
        display_apk_info "app/build/outputs/apk/release"
        ;;
    
    *)
        echo "ERROR: Unknown build type '$BUILD_TYPE'"
        echo "Valid options: debug, release, clean, test"
        exit 1
        ;;
esac

echo ""
echo "========================================"
echo "Build completed at $(date)"
echo "========================================"
echo ""
