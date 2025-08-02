package com.bearmod.injection;

import android.content.Context;
import android.util.Log;

import com.bearmod.build.LibraryManager;
import com.bearmod.monitor.RuntimeMonitor;
import com.bearmod.ota.SecureOTAIntegration;
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
    private final LibraryManager libraryManager;
    private final RuntimeMonitor runtimeMonitor;
    
    // Required libraries for injection
    private static final String[] REQUIRED_LIBRARIES = {
        "libear.zip",           // BearMod core
        "libmundo.zip"          // Mundo core (bridges all libraries)
    };
    
    private KeyAuthInjectionManager() {
        this.executor = Executors.newSingleThreadExecutor();
        // LibraryManager will be initialized when needed with context
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
     */
    public CompletableFuture<Boolean> initializeAfterAuth(Context context) {
        return CompletableFuture.supplyAsync(() -> {
            try {
                Log.d(TAG, "Initializing KeyAuth injection system with simplified OTA updates");

                // Use simplified secure OTA system for automatic library updates
                SecureOTAIntegration secureOTA = new SecureOTAIntegration(context);

                // Perform secure OTA update for default package (PUBG Global)
                boolean success = secureOTA.performSecureOTAUpdate("com.tencent.ig",
                    new com.bearmod.ota.OTAUpdateManager.OTAUpdateCallback() {
                        @Override
                        public void onUpdateCheckStarted() {
                            Log.d(TAG, "OTA update check started");
                        }

                        @Override
                        public void onUpdateCheckComplete(java.util.Map<String, com.bearmod.ota.OTAUpdateManager.LibraryConfig> updatesNeeded) {
                            Log.d(TAG, "Found " + updatesNeeded.size() + " libraries to update");
                        }

                        @Override
                        public void onUpdateProgress(String message, int progress) {
                            Log.d(TAG, "OTA Progress: " + message + " (" + progress + "%)");
                        }

                        @Override
                        public void onUpdateComplete(String message) {
                            Log.d(TAG, "OTA Update completed: " + message);
                        }

                        @Override
                        public void onUpdateFailed(String error) {
                            Log.w(TAG, "OTA Update failed: " + error);
                        }

                        @Override
                        public void onAllUpdatesComplete(boolean allSuccess) {
                            Log.d(TAG, "All OTA updates completed: " + allSuccess);
                        }
                    }).get();

                if (!success) {
                    Log.w(TAG, "Simplified OTA update failed - falling back to existing library system");

                    // Fallback to existing library manager
                    LibraryManager fallbackManager = LibraryManager.getInstance(context);
                    success = fallbackManager.checkAndUpdateLibraries(context).get();

                    if (!success) {
                        Log.e(TAG, "Both simplified OTA and fallback library systems failed");
                        return false;
                    }
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
        String helperLibrary = LibraryManager.getHelperLibraryForArchitecture().replace(".zip", ".so");
        
        if (!libraryManager.isLibraryInMemory(helperLibrary)) {
            Log.e(TAG, "Helper library not in memory: " + helperLibrary);
            return false;
        }
        
        for (String library : REQUIRED_LIBRARIES) {
            String soName = library.replace(".zip", ".so");
            if (!libraryManager.isLibraryInMemory(soName)) {
                Log.e(TAG, "Required library not in memory: " + soName);
                return false;
            }
        }
        
        Log.d(TAG, "All required libraries verified in memory");
        return true;
    }
    
    /**
     * Load libmundo.so as bridge for mundo_core API
     */
    private boolean loadMundoBridge() {
        try {
            ByteBuffer mundoBuffer = libraryManager.getLibraryFromMemory("libmundo.so");
            if (mundoBuffer == null) {
                Log.e(TAG, "libmundo.so not found in memory");
                return false;
            }
            
            // Load library from memory using native method
            boolean loaded = nativeLoadLibraryFromMemory(mundoBuffer, "libmundo.so");
            
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
            
            // Get helper library buffer
            String helperLibrary = LibraryManager.getHelperLibraryForArchitecture().replace(".zip", ".so");
            ByteBuffer helperBuffer = libraryManager.getLibraryFromMemory(helperLibrary);
            
            if (helperBuffer == null) {
                Log.e(TAG, "Helper library buffer not available");
                return false;
            }
            
            // Perform injection using native method
            return nativePerformInjection(targetPackage, patchId, helperBuffer);
            
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
                libraryManager.clearMemoryCache();
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
            libraryManager.clearMemoryCache();
            runtimeMonitor.stopMonitoring();
            Log.d(TAG, "Manual cleanup completed");
        });
    }
    
    // Native method declarations
    private native boolean nativeLoadLibraryFromMemory(ByteBuffer libraryBuffer, String libraryName);
    private native boolean nativePerformInjection(String targetPackage, String patchId, ByteBuffer helperBuffer);
    
    static {
        try {
            System.loadLibrary("BearMod"); // Load existing native library
            Log.d(TAG, "Native library loaded successfully");
        } catch (UnsatisfiedLinkError e) {
            Log.e(TAG, "Failed to load native library", e);
        }
    }
}
