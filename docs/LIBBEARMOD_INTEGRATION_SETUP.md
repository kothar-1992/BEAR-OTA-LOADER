# libbearmod.so Integration Setup Guide

## Current Configuration Status

### KeyAuth File IDs (Currently Placeholder)
The app is configured with placeholder KeyAuth file IDs that need to be replaced with actual file IDs:

```java
// Current placeholder IDs in KeyAuthDownloadManager.java
PUBG_DOWNLOAD_FILE_IDS.put(PubgPackages.PUBG_PACKAGES[0], "libbearmod_global_2024"); // Global
PUBG_DOWNLOAD_FILE_IDS.put(PubgPackages.PUBG_PACKAGES[1], "libbearmod_korea_2024");  // Korea  
PUBG_DOWNLOAD_FILE_IDS.put(PubgPackages.PUBG_PACKAGES[2], "libbearmod_vietnam_2024"); // Vietnam
PUBG_DOWNLOAD_FILE_IDS.put(PubgPackages.PUBG_PACKAGES[3], "libbearmod_taiwan_2024"); // Taiwan
```

## Option 1: Testing with Placeholder Files (Recommended for Initial Testing)

### Step 1: Create Test libbearmod.so Files

Create dummy/placeholder libbearmod.so files for testing:

```bash
# Create test directory
mkdir -p test_files

# Create placeholder .so files (these are just for testing download functionality)
echo "// Placeholder libbearmod.so for PUBG Global" > test_files/libbearmod_global.so
echo "// Placeholder libbearmod.so for PUBG Korea" > test_files/libbearmod_korea.so  
echo "// Placeholder libbearmod.so for PUBG Vietnam" > test_files/libbearmod_vietnam.so
echo "// Placeholder libbearmod.so for PUBG Taiwan" > test_files/libbearmod_taiwan.so

# Create ZIP archives (KeyAuth supports archive extraction)
cd test_files
zip libbearmod_global.zip libbearmod_global.so
zip libbearmod_korea.zip libbearmod_korea.so
zip libbearmod_vietnam.zip libbearmod_vietnam.so
zip libbearmod_taiwan.zip libbearmod_taiwan.so
```

### Step 2: Upload to KeyAuth (If Available)

If you have access to KeyAuth admin panel:

1. **Upload Files to KeyAuth**:
   - Upload `libbearmod_global.zip` → Get file ID (e.g., "123456")
   - Upload `libbearmod_korea.zip` → Get file ID (e.g., "123457")
   - Upload `libbearmod_vietnam.zip` → Get file ID (e.g., "123458")
   - Upload `libbearmod_taiwan.zip` → Get file ID (e.g., "123459")

2. **Update KeyAuthDownloadManager.java**:
```java
static {
    // Replace with actual KeyAuth file IDs
    PUBG_DOWNLOAD_FILE_IDS.put(PubgPackages.PUBG_PACKAGES[0], "123456"); // Global
    PUBG_DOWNLOAD_FILE_IDS.put(PubgPackages.PUBG_PACKAGES[1], "123457"); // Korea
    PUBG_DOWNLOAD_FILE_IDS.put(PubgPackages.PUBG_PACKAGES[2], "123458"); // Vietnam
    PUBG_DOWNLOAD_FILE_IDS.put(PubgPackages.PUBG_PACKAGES[3], "123459"); // Taiwan
}
```

### Step 3: Test Download Functionality

```bash
# Monitor download process
adb logcat | grep -E "(KeyAuthDownloadManager|Download)"

# Test download button in app
# 1. Select PUBG variant in MainActivity
# 2. Navigate to BackgroundLauncherActivity  
# 3. Click "Download Game Enhancement" button
# 4. Check logs for download progress
```

## Option 2: Local Testing Mode (No KeyAuth Required)

### Step 1: Enable Local Testing Mode

Create a local testing mode that bypasses KeyAuth downloads:

```java
// Add to KeyAuthDownloadManager.java
private static final boolean LOCAL_TESTING_MODE = true; // Set to false for production

public void downloadGameEnhancement(String targetPackage, DownloadCallback callback) {
    if (LOCAL_TESTING_MODE) {
        // Use local placeholder files for testing
        downloadLocalPlaceholder(targetPackage, callback);
        return;
    }
    
    // Normal KeyAuth download logic...
}

private void downloadLocalPlaceholder(String targetPackage, DownloadCallback callback) {
    executor.execute(() -> {
        try {
            callback.onDownloadStarted();
            
            // Create placeholder file
            File enhancementDir = new File(context.getFilesDir(), "enhancements");
            enhancementDir.mkdirs();
            
            String fileName = "bearmod_" + getVariantName(targetPackage) + ".so";
            File placeholderFile = new File(enhancementDir, fileName);
            
            // Create placeholder content
            String placeholderContent = "// Placeholder libbearmod.so for " + targetPackage + "\n" +
                                      "// Created: " + System.currentTimeMillis() + "\n" +
                                      "// Variant: " + getVariantName(targetPackage);
            
            try (FileOutputStream fos = new FileOutputStream(placeholderFile)) {
                fos.write(placeholderContent.getBytes());
            }
            
            callback.onDownloadProgress(100);
            callback.onDownloadCompleted(placeholderFile);
            
        } catch (Exception e) {
            callback.onDownloadFailed("Local placeholder creation failed: " + e.getMessage());
        }
    });
}
```

### Step 2: Test Local Mode

1. **Enable local testing mode** in KeyAuthDownloadManager.java
2. **Test download functionality** without KeyAuth dependency
3. **Verify file creation** in app's internal storage
4. **Test injection workflow** with placeholder files

## Option 3: Production Setup (Real libbearmod.so Files)

### Prerequisites for Production

1. **Real libbearmod.so Files**: Actual compiled libraries for each PUBG variant
2. **KeyAuth Account**: Access to KeyAuth admin panel for file uploads
3. **KeyAuth Credentials**: Valid app credentials configured in KeyAuthManager

### Step 1: Prepare Real libbearmod.so Files

```bash
# Organize real libbearmod.so files
mkdir -p production_files/global
mkdir -p production_files/korea  
mkdir -p production_files/vietnam
mkdir -p production_files/taiwan

# Copy real files (replace with actual paths)
cp /path/to/libbearmod_global.so production_files/global/
cp /path/to/libbearmod_korea.so production_files/korea/
cp /path/to/libbearmod_vietnam.so production_files/vietnam/
cp /path/to/libbearmod_taiwan.so production_files/taiwan/

# Create archives for upload
cd production_files
zip -r libbearmod_global_v1.0.zip global/
zip -r libbearmod_korea_v1.0.zip korea/
zip -r libbearmod_vietnam_v1.0.zip vietnam/
zip -r libbearmod_taiwan_v1.0.zip taiwan/
```

### Step 2: Upload to KeyAuth

1. **Login to KeyAuth Admin Panel**
2. **Navigate to Files Section**
3. **Upload each ZIP file**:
   - `libbearmod_global_v1.0.zip`
   - `libbearmod_korea_v1.0.zip`
   - `libbearmod_vietnam_v1.0.zip`
   - `libbearmod_taiwan_v1.0.zip`
4. **Note the file IDs** returned by KeyAuth

### Step 3: Update Configuration

```java
// Update KeyAuthDownloadManager.java with real file IDs
static {
    PUBG_DOWNLOAD_FILE_IDS.put(PubgPackages.PUBG_PACKAGES[0], "REAL_GLOBAL_FILE_ID");
    PUBG_DOWNLOAD_FILE_IDS.put(PubgPackages.PUBG_PACKAGES[1], "REAL_KOREA_FILE_ID");
    PUBG_DOWNLOAD_FILE_IDS.put(PubgPackages.PUBG_PACKAGES[2], "REAL_VIETNAM_FILE_ID");
    PUBG_DOWNLOAD_FILE_IDS.put(PubgPackages.PUBG_PACKAGES[3], "REAL_TAIWAN_FILE_ID");
}
```

## Current App Integration Points (Direct Injection)

### 1. Native Library Preparation
- **Location**: BackgroundLauncherActivity → "Prepare Native Library" button
- **Method**: `startNativeLibraryPreparation()`
- **Flow**: Button click → KeyAuthDownloadManager.downloadNativeLibrary()

### 2. File Storage
- **Location**: `/data/data/com.bearmod.loader/files/native_libraries/`
- **Naming**: `libbearmod_{variant}.so` (e.g., `libbearmod_global.so`)
- **Caching**: Files persist between app sessions

### 3. Direct Injection Integration
- **Manager**: RuntimeInjectionManager
- **Process**: Downloaded library → Stealth randomization → Direct injection into original app
- **Target**: Original, unmodified applications (no APK modification required)
- **Cleanup**: Automatic cleanup when target app terminates

## Testing Checklist

### Direct Injection Functionality
- [ ] "Prepare Native Library" button responds to clicks
- [ ] Library download progress is displayed to user
- [ ] Files are saved to correct location
- [ ] Archive extraction works (if using ZIP files)
- [ ] Error handling for network issues

### File Management
- [ ] Cache detection works (`isEnhancementCached()`)
- [ ] File retrieval works (`getCachedEnhancement()`)
- [ ] Cache clearing works (`clearCache()`)
- [ ] File naming is consistent

### Integration Testing
- [ ] Downloaded files integrate with RuntimeInjectionManager
- [ ] Stealth randomization processes downloaded files
- [ ] Injection workflow completes successfully
- [ ] Cleanup occurs when target app terminates

## Recommended Testing Approach

1. **Start with Option 2 (Local Testing Mode)** for initial functionality verification
2. **Move to Option 1 (Placeholder Files)** to test KeyAuth integration
3. **Implement Option 3 (Production Setup)** when ready for real deployment

## Next Steps

1. Choose testing approach based on current needs
2. Implement selected option
3. Run comprehensive testing protocol
4. Verify integration with injection system
5. Test on multiple Android versions and devices
