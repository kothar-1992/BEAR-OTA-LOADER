package com.bearmod.injection;

import android.content.Context;
import android.content.pm.PackageManager;
import android.util.Log;

import java.io.File;
import java.io.FileOutputStream;
import java.io.InputStream;
import java.util.concurrent.CompletableFuture;
import java.util.concurrent.Executor;
import java.util.concurrent.Executors;

/**
 * Manages library injection processes for target applications
 * Handles libbearmod.so loading and injection into target processes
 */
public class InjectionManager {
    private static final String TAG = "InjectionManager";
    
    private static InjectionManager instance;
    private final Context context;
    private final Executor executor;
    private boolean isInjectionActive = false;

    // Shared native library manager
    private final NativeLibraryManager nativeLibraryManager;
    
    private InjectionManager(Context context) {
        this.context = context.getApplicationContext();
        this.executor = Executors.newSingleThreadExecutor();
        this.nativeLibraryManager = NativeLibraryManager.getInstance();
    }
    
    public static InjectionManager getInstance(Context context) {
        if (instance == null) {
            instance = new InjectionManager(context);
        }
        return instance;
    }
    
    public interface InjectionCallback {
        void onInjectionSuccess(String targetPackage, String libraryPath);
        void onInjectionFailed(String targetPackage, String error);
        void onInjectionProgress(String targetPackage, int progress);
    }
    
    /**
     * Inject libbearmod.so into target application
     */
    public void injectLibrary(String targetPackage, InjectionCallback callback) {
        executor.execute(() -> {
            try {
                Log.d(TAG, "Starting library injection for: " + targetPackage);
                callback.onInjectionProgress(targetPackage, 10);
                
                // Validate target package
                if (!validateTargetPackage(targetPackage)) {
                    callback.onInjectionFailed(targetPackage, "Target package validation failed");
                    return;
                }
                
                callback.onInjectionProgress(targetPackage, 30);
                
                // Prepare injection library
                String libraryPath = prepareInjectionLibrary();
                if (libraryPath == null) {
                    callback.onInjectionFailed(targetPackage, "Failed to prepare injection library");
                    return;
                }
                
                callback.onInjectionProgress(targetPackage, 50);
                
                // Perform injection
                if (performLibraryInjection(targetPackage, libraryPath)) {
                    callback.onInjectionProgress(targetPackage, 100);
                    isInjectionActive = true;
                    callback.onInjectionSuccess(targetPackage, libraryPath);
                } else {
                    callback.onInjectionFailed(targetPackage, "Library injection failed");
                }
                
            } catch (Exception e) {
                Log.e(TAG, "Library injection error", e);
                callback.onInjectionFailed(targetPackage, "Injection error: " + e.getMessage());
            }
        });
    }
    
    /**
     * Validate target package for injection
     */
    private boolean validateTargetPackage(String targetPackage) {
        try {
            // Check if package is installed
            PackageManager pm = context.getPackageManager();
            pm.getPackageInfo(targetPackage, 0);
            
            // Check if package is running
            if (!isPackageRunning(targetPackage)) {
                Log.w(TAG, "Target package is not running: " + targetPackage);
                // Continue anyway - we can inject when it starts
            }
            
            // Check if package is supported
            if (!isSupportedPackage(targetPackage)) {
                Log.w(TAG, "Target package may not be supported: " + targetPackage);
                // Continue anyway - attempt injection
            }
            
            Log.d(TAG, "Target package validation passed: " + targetPackage);
            return true;
            
        } catch (Exception e) {
            Log.e(TAG, "Target package validation failed", e);
            return false;
        }
    }
    
    /**
     * Check if package is currently running
     */
    private boolean isPackageRunning(String packageName) {
        try {
            android.app.ActivityManager am = (android.app.ActivityManager) 
                context.getSystemService(Context.ACTIVITY_SERVICE);
            
            if (am != null) {
                for (android.app.ActivityManager.RunningAppProcessInfo processInfo : am.getRunningAppProcesses()) {
                    if (packageName.equals(processInfo.processName)) {
                        return true;
                    }
                }
            }
            
            return false;
            
        } catch (Exception e) {
            Log.e(TAG, "Error checking if package is running", e);
            return false;
        }
    }
    
    /**
     * Check if package is supported for injection
     */
    private boolean isSupportedPackage(String packageName) {
        String[] supportedPackages = {
            "com.tencent.ig",
            "com.pubg.krmobile", 
            "com.pubg.imobile",
            "com.rekoo.pubgm",
            "com.vng.pubgmobile"
        };
        
        for (String supported : supportedPackages) {
            if (supported.equals(packageName)) {
                return true;
            }
        }
        
        return false;
    }
    
    /**
     * Prepare injection library (libbearmod.so)
     */
    private String prepareInjectionLibrary() {
        try {
            Log.d(TAG, "Preparing injection library...");
            
            // Check if native library is already loaded
            if (isNativeLibraryLoaded()) {
                Log.d(TAG, "Native library already loaded");
                return getNativeLibraryPath();
            }
            
            // Extract library from assets if needed
            String libraryPath = extractLibraryFromAssets();
            if (libraryPath != null) {
                Log.d(TAG, "Library extracted from assets: " + libraryPath);
                return libraryPath;
            }
            
            // Try to find existing library
            libraryPath = findExistingLibrary();
            if (libraryPath != null) {
                Log.d(TAG, "Found existing library: " + libraryPath);
                return libraryPath;
            }
            
            Log.e(TAG, "Failed to prepare injection library");
            return null;
            
        } catch (Exception e) {
            Log.e(TAG, "Error preparing injection library", e);
            return null;
        }
    }
    
    /**
     * Check if native library is loaded (FIXED - now uses shared manager)
     */
    private boolean isNativeLibraryLoaded() {
        return nativeLibraryManager.isLibraryLoaded();
    }
    
    /**
     * Get native library path (FIXED - now uses shared manager)
     */
    private String getNativeLibraryPath() {
        return nativeLibraryManager.getLibraryPath();
    }
    
    /**
     * Extract library from assets
     */
    private String extractLibraryFromAssets() {
        try {
            String[] architectures = {"arm64-v8a", "armeabi-v7a"};
            String libraryName = "libbearmod.so";
            
            for (String arch : architectures) {
                try {
                    String assetPath = "lib/" + arch + "/" + libraryName;
                    InputStream input = context.getAssets().open(assetPath);
                    
                    File outputDir = new File(context.getFilesDir(), "lib/" + arch);
                    outputDir.mkdirs();
                    
                    File outputFile = new File(outputDir, libraryName);
                    FileOutputStream output = new FileOutputStream(outputFile);
                    
                    byte[] buffer = new byte[8192];
                    int bytesRead;
                    while ((bytesRead = input.read(buffer)) != -1) {
                        output.write(buffer, 0, bytesRead);
                    }
                    
                    input.close();
                    output.close();
                    
                    // Make executable
                    outputFile.setExecutable(true);
                    
                    Log.d(TAG, "Extracted library for " + arch + ": " + outputFile.getAbsolutePath());
                    return outputFile.getAbsolutePath();
                    
                } catch (Exception e) {
                    Log.d(TAG, "Failed to extract library for " + arch + ": " + e.getMessage());
                }
            }
            
            return null;
            
        } catch (Exception e) {
            Log.e(TAG, "Error extracting library from assets", e);
            return null;
        }
    }
    
    /**
     * Find existing library in system
     */
    private String findExistingLibrary() {
        try {
            String[] searchPaths = {
                context.getApplicationInfo().nativeLibraryDir + "/libbearmod.so",
                "/data/data/" + context.getPackageName() + "/lib/libbearmod.so",
                context.getFilesDir() + "/lib/arm64-v8a/libbearmod.so",
                context.getFilesDir() + "/lib/armeabi-v7a/libbearmod.so"
            };
            
            for (String path : searchPaths) {
                File libFile = new File(path);
                if (libFile.exists() && libFile.canRead()) {
                    Log.d(TAG, "Found existing library: " + path);
                    return path;
                }
            }
            
            return null;
            
        } catch (Exception e) {
            Log.e(TAG, "Error finding existing library", e);
            return null;
        }
    }
    
    /**
     * Perform the actual library injection
     */
    private boolean performLibraryInjection(String targetPackage, String libraryPath) {
        try {
            Log.d(TAG, "Performing library injection: " + libraryPath + " -> " + targetPackage);
            
            // Method 1: Try native injection
            if (tryNativeInjection(targetPackage, libraryPath)) {
                Log.d(TAG, "Native injection successful");
                return true;
            }
            
            // Method 2: Try process injection
            if (tryProcessInjection(targetPackage, libraryPath)) {
                Log.d(TAG, "Process injection successful");
                return true;
            }
            
            // Method 3: Try hook-based injection
            if (tryHookBasedInjection(targetPackage, libraryPath)) {
                Log.d(TAG, "Hook-based injection successful");
                return true;
            }
            
            Log.w(TAG, "All injection methods failed");
            return false;
            
        } catch (Exception e) {
            Log.e(TAG, "Library injection failed", e);
            return false;
        }
    }
    
    /**
     * Try native injection method
     */
    private boolean tryNativeInjection(String targetPackage, String libraryPath) {
        try {
            return nativeInjectLibrary(targetPackage, libraryPath);
        } catch (UnsatisfiedLinkError e) {
            Log.d(TAG, "Native injection not available: " + e.getMessage());
            return false;
        } catch (Exception e) {
            Log.e(TAG, "Native injection failed", e);
            return false;
        }
    }
    
    /**
     * Try process injection method
     */
    private boolean tryProcessInjection(String targetPackage, String libraryPath) {
        try {
            // Use ptrace or similar methods for process injection
            Log.d(TAG, "Attempting process injection...");
            
            // Check if target package is running
            if (!isPackageRunning(targetPackage)) {
                Log.d(TAG, "Target package not running: " + targetPackage);
                return false;
            }

            // Process injection not yet fully implemented
            Log.d(TAG, "Process injection not yet fully implemented");
            return false;
            
        } catch (Exception e) {
            Log.e(TAG, "Process injection failed", e);
            return false;
        }
    }
    
    /**
     * Try hook-based injection method
     */
    private boolean tryHookBasedInjection(String targetPackage, String libraryPath) {
        try {
            // Use existing hook system for injection
            Log.d(TAG, "Attempting hook-based injection...");
            
            // Use NonRootPatchManager for hook-based injection
            com.bearmod.patch.NonRootPatchManager nonRootManager = 
                com.bearmod.patch.NonRootPatchManager.getInstance();
            
            if (nonRootManager != null) {
                // Create a special injection patch
                nonRootManager.applyPatch(context, targetPackage, "library-injection", 
                    new com.bearmod.patch.NonRootPatchManager.PatchCallback() {
                        @Override
                        public void onPatchSuccess(com.bearmod.patch.model.PatchResult result) {
                            Log.d(TAG, "Hook-based injection successful");
                        }
                        
                        @Override
                        public void onPatchFailed(String error) {
                            Log.e(TAG, "Hook-based injection failed: " + error);
                        }
                        
                        @Override
                        public void onPatchProgress(int progress) {
                            Log.d(TAG, "Hook-based injection progress: " + progress + "%");
                        }
                    });
                
                return true;
            }
            
            return false;
            
        } catch (Exception e) {
            Log.e(TAG, "Hook-based injection failed", e);
            return false;
        }
    }
    
    /**
     * Check if injection is currently active
     */
    public boolean isInjectionActive() {
        return isInjectionActive;
    }
    
    /**
     * Stop injection and cleanup
     */
    public void stopInjection() {
        try {
            Log.d(TAG, "Stopping injection...");
            
            // Cleanup native resources
            nativeCleanupInjection();
            
            isInjectionActive = false;
            Log.d(TAG, "Injection stopped");
            
        } catch (Exception e) {
            Log.e(TAG, "Error stopping injection", e);
        }
    }
    
    // Native method declarations
    private native boolean nativeIsLibraryLoaded();
    private native String nativeGetLibraryPath();
    private native boolean nativeInjectLibrary(String targetPackage, String libraryPath);
    private native void nativeCleanupInjection();
    


    // Static block removed - library loading now handled by NativeLibraryManager
    static {
        Log.d(TAG, "InjectionManager class loaded - native library loading handled by NativeLibraryManager");
    }
}
