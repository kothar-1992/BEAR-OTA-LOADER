# Frida Gadget Integration Guide

## Overview
This guide covers the integration of Frida Gadget into the BearMod-Loader architecture using Option 1: Embedded in `libmundo.so`.

## Architecture Integration

### Core Components
- **`libmundo.so`**: Native runtime container with embedded Frida Gadget
- **`MundoCore.java`**: Java bridge with Frida management methods
- **`HybridInjectionManager`**: Updated to use MundoCore for Frida operations
- **`libhelper.so`**: Stealth-named Frida Gadget libraries (arm64-v8a, armeabi-v7a)

## Build Tasks

### 1. Clean and Build
```bash
# Clean all modules
./gradlew clean

# Build mundo_core with Frida integration
./gradlew :mundo_core:assembleDebug

# Build main app
./gradlew :app:assembleDebug
```

### 2. Deploy Libraries
```bash
# Copy libmundo.so to app
./gradlew copySoDebug

# Deploy to device (if connected)
./gradlew deployLibmundo
```

## Configuration Management

### Frida Gadget Configuration
- **Config File**: `mundo_core/src/main/assets/libhelper.config.so`
- **Runtime Config**: Generated dynamically per PUBG variant
- **Script Path**: `/data/local/tmp/bearmod_{variant}.js`

### PUBG Variant Support
| Variant | Package Name | Script Name |
|---------|--------------|-------------|
| Global | com.tencent.ig | bearmod_global.js |
| Korea | com.pubg.krmobile | bearmod_korea.js |
| Vietnam | com.vng.pubgmobile | bearmod_vietnam.js |
| Taiwan | com.rekoo.pubgm | bearmod_taiwan.js |

## Usage Example

```java
// Initialize MundoCore
MundoCore mundoCore = MundoCore.getInstance();
MundoConfig config = new MundoConfig();
config.bearToken = "your_keyauth_token";
mundoCore.initialize(context, config);

// Initialize Frida Gadget for PUBG Global
int result = mundoCore.initializeFridaGadget("com.tencent.ig");
if (result == 0) {
    // Load JavaScript payload
    String script = loadYourJavaScriptCode();
    boolean loaded = mundoCore.loadJavaScriptPayload("global", script);
    
    if (loaded && mundoCore.isFridaGadgetActive()) {
        Log.i("BearMod", "Frida Gadget active and ready");
    }
}
```

## Security Considerations

### Stealth Features
1. **Library Naming**: Frida Gadget renamed to `libhelper.so`
2. **Dynamic Loading**: Loaded only when needed through `dlopen()`
3. **Configuration Obfuscation**: Runtime generation of config files
4. **Minimal Footprint**: Optimized settings to reduce detection

### Authentication Flow
1. KeyAuth `bearToken` validation before Frida initialization
2. Secure script delivery through authenticated channels
3. Runtime permission checking for injection capabilities

## Troubleshooting

### Common Issues
1. **Library Not Found**: Ensure `libhelper.so` is in correct jniLibs directories
2. **Authentication Failed**: Verify KeyAuth `bearToken` is valid
3. **Script Load Failed**: Check script syntax and file permissions
4. **Gadget Not Active**: Verify target package is running and accessible

### Debug Commands
```bash
# Check library presence
adb shell "ls -la /data/app/*/lib/*/libhelper.so"

# Monitor logs
adb logcat | grep -E "(Mundo|Frida|BearMod)"

# Check script files
adb shell "ls -la /data/local/tmp/bearmod_*.js"
```

## Next Steps

1. **Test Integration**: Build and test with all PUBG variants
2. **Script Development**: Create variant-specific JavaScript payloads
3. **Performance Optimization**: Monitor memory usage and injection speed
4. **Security Hardening**: Implement additional anti-detection measures
