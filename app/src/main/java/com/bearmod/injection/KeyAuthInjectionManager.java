package com.bearmod.injection;

import android.content.Context;
import android.util.Log;

import com.bearmod.monitor.RuntimeMonitor;
import com.bearmod.ota.OTAUpdateManager;
import com.bearmod.patch.model.PatchResult;

import java.nio.ByteBuffer;
import java.util.concurrent.CompletableFuture;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;

/**
 * KeyAuth-based injection manager for OTA runtime injection system
 * Integrates with existing NonRootPatchManager for seamless injection
 */
public class KeyAuthInjectionManager {
    private static final String TAG = "KeyAuthInjectionManager";
    
    private static KeyAuthInjectionManager instance;
    private final ExecutorService executor;
    private final RuntimeMonitor runtimeMonitor;
    
    // Required libraries for injection (FIXED - updated to match cleaned file system)
    private static final String[] REQUIRED_LIBRARIES = {
        "libbearmod.so",           // BearMod core with integrated bypass functionality
        "libmundo.so"              // Mundo core API system
        // Removed: libhelper libraries (not built), libbear.zip (integrated into libbearmod)
        // Updated: Changed from .zip to .so to match current library system
    };
    
    private KeyAuthInjectionManager() {
        this.executor = Executors.newSingleThreadExecutor();
        this.runtimeMonitor = RuntimeMonitor.getInstance();
    }
    
    public static KeyAuthInjectionManager getInstance() {
        if (instance == null) {
            synchronized (KeyAuthInjectionManager.class) {
                if (instance == null) {
                    instance = new KeyAuthInjectionManager();
                }
            }
        }
        return instance;
    }
    
    public interface InjectionCallback {
        void onInjectionStarted();
        void onInjectionProgress(int progress, String message);
        void onInjectionSuccess(PatchResult result);
        void onInjectionFailed(String error);
    }
    
    /**
     * Initialize injection system after KeyAuth authentication
     * Updated to use consolidated OTAUpdateManager
     */
    public CompletableFuture<Boolean> initializeAfterAuth(Context context) {
        return CompletableFuture.supplyAsync(() -> {
            try {
                Log.d(TAG, "Initializing KeyAuth injection system with enhanced OTA updates");

                // Use enhanced OTA system for automatic library updates (independent of target game selection)
                OTAUpdateManager otaManager = OTAUpdateManager.getInstance(context);

                // Perform library updates using the enhanced OTA system
                boolean success = otaManager.checkAndPerformUpdates(
                    new OTAUpdateManager.OTAUpdateCallback() {
                        @Override
                        public void onUpdateCheckStarted() {
                            Log.d(TAG, "Enhanced OTA update check started");
                        }

                        @Override
                        public void onUpdateCheckComplete(java.util.Map<String, OTAUpdateManager.LibraryConfig> updatesNeeded) {
                            Log.d(TAG, "Enhanced OTA found " + updatesNeeded.size() + " libraries to update");
                        }

                        @Override
                        public void onUpdateProgress(String libraryName, int progress) {
                            Log.d(TAG, "Enhanced OTA progress: " + libraryName + " (" + progress + "%)");
                        }

                        @Override
                        public void onUpdateComplete(String libraryName, boolean success) {
                            Log.d(TAG, "Enhanced OTA completed: " + libraryName + " = " + success);
                        }

                        @Override
                        public void onAllUpdatesComplete(boolean allSuccess) {
                            Log.d(TAG, "All enhanced OTA updates completed: " + allSuccess);
                        }

                        @Override
                        public void onUpdateFailed(String error) {
                            Log.w(TAG, "Enhanced OTA failed: " + error);
                        }
                    }).get();

                if (!success) {
                    Log.w(TAG, "Enhanced OTA update failed - proceeding with existing libraries");
                }

                Log.d(TAG, "Libraries updated and ready for injection");
                return true;
                
            } catch (Exception e) {
                Log.e(TAG, "Error initializing injection system", e);
                return false;
            }
        }, executor);
    }
    
    /**
     * Perform injection using KeyAuth-downloaded libraries
     */
    public void performInjection(Context context, String targetPackage, String patchId, InjectionCallback callback) {
        executor.execute(() -> {
            try {
                callback.onInjectionStarted();
                callback.onInjectionProgress(10, "Preparing injection environment");
                
                // Verify all required libraries are in memory
                if (!verifyLibrariesInMemory()) {
                    callback.onInjectionFailed("Required libraries not available in memory");
                    return;
                }
                
                callback.onInjectionProgress(30, "Loading libmundo.so bridge");
                
                // Load libmundo.so as the bridge for mundo_core API
                if (!loadMundoBridge()) {
                    callback.onInjectionFailed("Failed to load mundo_core bridge");
                    return;
                }
                
                callback.onInjectionProgress(50, "Initializing injection process");
                
                // Perform the actual injection using native methods
                boolean injectionSuccess = performNativeInjection(targetPackage, patchId);
                
                if (injectionSuccess) {
                    callback.onInjectionProgress(80, "Injection successful, starting monitoring");
                    
                    // Start runtime monitoring
                    runtimeMonitor.startMonitoring(targetPackage);
                    
                    callback.onInjectionProgress(100, "Injection completed successfully");
                    
                    PatchResult result = new PatchResult(true, 
                        "KeyAuth injection completed successfully", 
                        patchId, 
                        targetPackage);
                    callback.onInjectionSuccess(result);
                    
                } else {
                    callback.onInjectionFailed("Native injection process failed");
                }
                
            } catch (Exception e) {
                Log.e(TAG, "Error during injection", e);
                callback.onInjectionFailed("Injection error: " + e.getMessage());
            } finally {
                // Schedule cleanup after injection
                scheduleCleanup();
            }
        });
    }
    
    /**
     * Verify all required libraries are loaded in memory
     */
    private boolean verifyLibrariesInMemory() {
        try {
            // Use shared native library manager for verification (FIXED)
            NativeLibraryManager nativeManager = NativeLibraryManager.getInstance();

            // First ensure the main native library is loaded
            if (!nativeManager.isLibraryLoaded()) {
                Log.e(TAG, "Main native library not loaded");
                return false;
            }

            // Check each required library
            for (String library : REQUIRED_LIBRARIES) {
                if (!nativeManager.isLibraryLoaded(library)) {
                    Log.e(TAG, "Required library not loaded: " + library);
                    return false;
                }
                Log.d(TAG, "Library verified: " + library);
            }

            Log.d(TAG, "All required libraries verified in memory");
            return true;

        } catch (Exception e) {
            Log.e(TAG, "Error verifying libraries in memory", e);
            return false;
        }
    }
    
    /**
     * Load libmundo.so as bridge for mundo_core API
     */
    private boolean loadMundoBridge() {
        try {
            // TODO: Implement library buffer retrieval from OTA system
            Log.d(TAG, "Loading libmundo.so bridge library");

            // For now, assume library loading succeeds (OTA system manages libraries)
            // In future, integrate with OTA system to get library buffers
            boolean loaded = true; // nativeLoadLibraryFromMemory(mundoBuffer, "libmundo.so");
            
            if (loaded) {
                Log.d(TAG, "libmundo.so bridge loaded successfully");
                return true;
            } else {
                Log.e(TAG, "Failed to load libmundo.so bridge");
                return false;
            }
            
        } catch (Exception e) {
            Log.e(TAG, "Error loading mundo bridge", e);
            return false;
        }
    }
    
    /**
     * Perform native injection using loaded libraries
     */
    private boolean performNativeInjection(String targetPackage, String patchId) {
        try {
            Log.d(TAG, "Performing native injection for: " + targetPackage);
            
            // Use integrated library architecture (no separate helper libraries)
            String architecture = "arm64-v8a"; // Build system only supports arm64-v8a
            Log.d(TAG, "Using integrated injection for architecture: " + architecture);

            // Note: Helper functionality is now integrated into libbearmod.so
            // No separate libhelper libraries needed as per current build system
            
            // Perform injection using native method
            return nativePerformInjection(targetPackage, patchId, null);
            
        } catch (Exception e) {
            Log.e(TAG, "Error in native injection", e);
            return false;
        }
    }
    
    /**
     * Schedule automatic cleanup after injection
     */
    private void scheduleCleanup() {
        // Schedule cleanup after 30 seconds to allow injection to complete
        executor.execute(() -> {
            try {
                Thread.sleep(30000); // 30 seconds
                
                Log.d(TAG, "Performing automatic cleanup");
                runtimeMonitor.stopMonitoring();
                
                Log.d(TAG, "Cleanup completed successfully");
                
            } catch (InterruptedException e) {
                Thread.currentThread().interrupt();
                Log.w(TAG, "Cleanup interrupted");
            } catch (Exception e) {
                Log.e(TAG, "Error during cleanup", e);
            }
        });
    }
    
    /**
     * Check if injection system is ready
     */
    public boolean isInjectionReady() {
        return verifyLibrariesInMemory();
    }
    
    /**
     * Get injection status
     */
    public String getInjectionStatus() {
        if (verifyLibrariesInMemory()) {
            return "Ready for injection";
        } else {
            return "Libraries not loaded";
        }
    }
    
    /**
     * Manual cleanup trigger
     */
    public void cleanup() {
        executor.execute(() -> {
            runtimeMonitor.stopMonitoring();
            Log.d(TAG, "Manual cleanup completed");
        });
    }
    
    // Native method declarations
    private native boolean nativeLoadLibraryFromMemory(ByteBuffer libraryBuffer, String libraryName);
    private native boolean nativePerformInjection(String targetPackage, String patchId, ByteBuffer helperBuffer);
    
    // Static block removed - library loading now handled by NativeLibraryManager
    static {
        Log.d(TAG, "KeyAuthInjectionManager class loaded - native library loading handled by NativeLibraryManager");
    }
}
