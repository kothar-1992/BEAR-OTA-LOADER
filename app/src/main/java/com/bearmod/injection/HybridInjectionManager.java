package com.bearmod.injection;

import android.content.Context;
import android.util.Log;

import com.bearmod.patch.model.PatchResult;
import com.bearmod.auth.AuthenticationManager;

import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;
import java.util.concurrent.atomic.AtomicBoolean;

/**
 * Hybrid Injection Manager - Main coordinator for all injection methods
 * Supports both direct native injection and Frida script injection
 * Uses embedded libraries instead of OTA downloads for maximum reliability
 */
public class HybridInjectionManager {
    private static final String TAG = "HybridInjectionManager";
    
    private static HybridInjectionManager instance;
    private static final Object lock = new Object();
    
    private final ExecutorService executor;
    private final AtomicBoolean initialized = new AtomicBoolean(false);
    private final AtomicBoolean injectionActive = new AtomicBoolean(false);

    private Context context;
    private InjectionCallback currentCallback;

    // Shared native library manager
    private final NativeLibraryManager nativeLibraryManager;
    
    // Integration with existing managers (simplified for embedded approach)
    // Removed KeyAuthInjectionManager - using direct native injection only
    
    private HybridInjectionManager() {
        this.executor = Executors.newSingleThreadExecutor();
        this.nativeLibraryManager = NativeLibraryManager.getInstance();
    }
    
    public static HybridInjectionManager getInstance() {
        synchronized (lock) {
            if (instance == null) {
                instance = new HybridInjectionManager();
            }
            return instance;
        }
    }
    
    public interface InjectionCallback {
        void onInjectionStarted(String targetPackage);
        void onInjectionProgress(String targetPackage, int progress, String message);
        void onInjectionSuccess(String targetPackage, PatchResult result);
        void onInjectionFailed(String targetPackage, String error);
    }

    /**
     * Adapter to bridge with existing KeyAuthInjectionManager.InjectionCallback
     */
    private static class KeyAuthCallbackAdapter implements KeyAuthInjectionManager.InjectionCallback {
        private final InjectionCallback hybridCallback;
        private final String targetPackage;

        public KeyAuthCallbackAdapter(InjectionCallback hybridCallback, String targetPackage) {
            this.hybridCallback = hybridCallback;
            this.targetPackage = targetPackage;
        }

        @Override
        public void onInjectionStarted() {
            hybridCallback.onInjectionStarted(targetPackage);
        }

        @Override
        public void onInjectionProgress(int progress, String message) {
            hybridCallback.onInjectionProgress(targetPackage, progress, message);
        }

        @Override
        public void onInjectionSuccess(PatchResult result) {
            hybridCallback.onInjectionSuccess(targetPackage, result);
        }

        @Override
        public void onInjectionFailed(String error) {
            hybridCallback.onInjectionFailed(targetPackage, error);
        }
    }
    
    /**
     * Initialize the hybrid injection system
     */
    public boolean initialize(Context context) {
        if (initialized.get()) {
            Log.d(TAG, "Already initialized");
            return true;
        }
        
        this.context = context.getApplicationContext();
        
        try {
            Log.d(TAG, "Initializing HybridInjectionManager...");

            // Check authentication status with pure Java authentication system
            AuthenticationManager authManager = AuthenticationManager.getInstance(context);
            if (!authManager.isAuthenticated()) {
                Log.e(TAG, "Authentication required before injection initialization");
                return false;
            }

            // Load native library using shared manager
            if (!nativeLibraryManager.loadLibrary()) {
                Log.e(TAG, "Failed to load native library");
                return false;
            }

            // Verify native library is functional
            if (!nativeLibraryManager.isLibraryLoaded()) {
                Log.e(TAG, "Native library not functional");
                return false;
            }

            initialized.set(true);
            Log.d(TAG, "HybridInjectionManager initialized successfully");
            return true;
            
        } catch (Exception e) {
            Log.e(TAG, "Failed to initialize HybridInjectionManager", e);
            return false;
        }
    }
    
    /**
     * Perform direct native injection
     */
    public void performDirectInjection(String targetPackage, String bearToken, InjectionCallback callback) {
        if (!initialized.get()) {
            callback.onInjectionFailed(targetPackage, "HybridInjectionManager not initialized");
            return;
        }
        
        // Use injection coordinator to prevent concurrent injections
        if (!InjectionCoordinator.startInjection("HybridInjectionManager", targetPackage)) {
            callback.onInjectionFailed(targetPackage, "Another injection is already active: " +
                InjectionCoordinator.getInjectionStatus());
            return;
        }
        
        currentCallback = callback;
        injectionActive.set(true);
        
        executor.execute(() -> {
            try {
                callback.onInjectionStarted(targetPackage);
                callback.onInjectionProgress(targetPackage, 10, "Starting direct injection");
                
                Log.i(TAG, "Starting direct injection for: " + targetPackage);
                
                // Call native injection method
                boolean result = nativeInjectDirect(targetPackage, bearToken);
                
                if (result) {
                    callback.onInjectionProgress(targetPackage, 100, "Direct injection completed");
                    PatchResult patchResult = new PatchResult(true, 
                        "Direct injection successful", 
                        "direct-injection", 
                        targetPackage);
                    callback.onInjectionSuccess(targetPackage, patchResult);
                    Log.i(TAG, "Direct injection successful for: " + targetPackage);
                } else {
                    callback.onInjectionFailed(targetPackage, "Native direct injection failed");
                    Log.e(TAG, "Direct injection failed for: " + targetPackage);
                }
                
            } catch (Exception e) {
                Log.e(TAG, "Error during direct injection", e);
                callback.onInjectionFailed(targetPackage, "Direct injection error: " + e.getMessage());
            } finally {
                injectionActive.set(false);
                currentCallback = null;
                InjectionCoordinator.stopInjection("HybridInjectionManager");
            }
        });
    }
    
    /**
     * Perform hybrid injection with KeyAuth fallback
     * Tries direct injection first, falls back to KeyAuth if needed
     */
    public void performHybridInjection(String targetPackage, String bearToken, String patchId, InjectionCallback callback) {
        if (!initialized.get()) {
            callback.onInjectionFailed(targetPackage, "HybridInjectionManager not initialized");
            return;
        }

        if (injectionActive.get()) {
            callback.onInjectionFailed(targetPackage, "Another injection is already active");
            return;
        }

        currentCallback = callback;
        injectionActive.set(true);

        executor.execute(() -> {
            try {
                callback.onInjectionStarted(targetPackage);
                callback.onInjectionProgress(targetPackage, 5, "Starting hybrid injection");

                Log.i(TAG, "Starting hybrid injection for: " + targetPackage);

                // Try direct injection first
                callback.onInjectionProgress(targetPackage, 20, "Attempting direct injection");
                boolean directResult = nativeInjectDirect(targetPackage, bearToken);

                if (directResult) {
                    callback.onInjectionProgress(targetPackage, 100, "Direct injection successful");
                    PatchResult patchResult = new PatchResult(true,
                        "Direct injection successful using integrated libraries",
                        patchId,
                        targetPackage);
                    callback.onInjectionSuccess(targetPackage, patchResult);
                    Log.i(TAG, "Direct injection successful for: " + targetPackage);
                } else {
                    // No KeyAuth fallback needed - use embedded approach only
                    Log.i(TAG, "Direct injection failed for: " + targetPackage);
                    callback.onInjectionFailed(targetPackage,
                        "Direct injection failed - embedded library approach unsuccessful");
                }

            } catch (Exception e) {
                Log.e(TAG, "Error during hybrid injection", e);
                callback.onInjectionFailed(targetPackage, "Hybrid injection error: " + e.getMessage());
            } finally {
                if (currentCallback == callback) {
                    injectionActive.set(false);
                    currentCallback = null;
                }
            }
        });
    }

    /**
     * Perform Frida script injection (development mode)
     */
    public void injectFridaScript(String targetPackage, String scriptContent, InjectionCallback callback) {
        if (!initialized.get()) {
            callback.onInjectionFailed(targetPackage, "HybridInjectionManager not initialized");
            return;
        }
        
        if (injectionActive.get()) {
            callback.onInjectionFailed(targetPackage, "Another injection is already active");
            return;
        }
        
        currentCallback = callback;
        injectionActive.set(true);
        
        executor.execute(() -> {
            try {
                callback.onInjectionStarted(targetPackage);
                callback.onInjectionProgress(targetPackage, 10, "Starting Frida script injection");
                
                Log.i(TAG, "Starting Frida injection for: " + targetPackage);
                
                // Call native Frida injection method
                boolean result = nativeInjectFridaScript(targetPackage, scriptContent);
                
                if (result) {
                    callback.onInjectionProgress(targetPackage, 100, "Frida injection completed");
                    PatchResult patchResult = new PatchResult(true, 
                        "Frida script injection successful", 
                        "frida-injection", 
                        targetPackage);
                    callback.onInjectionSuccess(targetPackage, patchResult);
                    Log.i(TAG, "Frida injection successful for: " + targetPackage);
                } else {
                    callback.onInjectionFailed(targetPackage, "Native Frida injection failed");
                    Log.e(TAG, "Frida injection failed for: " + targetPackage);
                }
                
            } catch (Exception e) {
                Log.e(TAG, "Error during Frida injection", e);
                callback.onInjectionFailed(targetPackage, "Frida injection error: " + e.getMessage());
            } finally {
                injectionActive.set(false);
                currentCallback = null;
            }
        });
    }
    
    /**
     * Load and inject Frida script from assets
     */
    public void injectFridaScriptFromAssets(String targetPackage, String scriptPath, InjectionCallback callback) {
        executor.execute(() -> {
            try {
                // Load script from assets
                String scriptContent = loadScriptFromAssets(scriptPath);
                if (scriptContent == null) {
                    callback.onInjectionFailed(targetPackage, "Failed to load script from assets: " + scriptPath);
                    return;
                }
                
                // Perform injection
                injectFridaScript(targetPackage, scriptContent, callback);
                
            } catch (Exception e) {
                Log.e(TAG, "Error loading script from assets", e);
                callback.onInjectionFailed(targetPackage, "Script loading error: " + e.getMessage());
            }
        });
    }
    
    /**
     * Stop active injection
     */
    public void stopInjection() {
        if (injectionActive.get()) {
            Log.i(TAG, "Stopping active injection");
            
            // Stop Frida injection
            nativeStopFridaInjection();
            
            // Stop direct injection
            nativeStopDirectInjection();
            
            injectionActive.set(false);
            currentCallback = null;
        }
    }
    
    /**
     * Check if injection is currently active
     */
    public boolean isInjectionActive() {
        return injectionActive.get();
    }
    
    /**
     * Check if manager is initialized
     */
    public boolean isInitialized() {
        return initialized.get();
    }

    /**
     * Check if injection system is ready (compatible with KeyAuthInjectionManager interface)
     */
    public boolean isInjectionReady() {
        return initialized.get() && isNativeLibraryLoaded();
    }

    /**
     * Get injection status (compatible with KeyAuthInjectionManager interface)
     */
    public String getInjectionStatus() {
        if (!initialized.get()) {
            return "Not initialized";
        } else if (injectionActive.get()) {
            return "Injection in progress";
        } else if (isNativeLibraryLoaded()) {
            return "Ready for injection";
        } else {
            return "Native library not loaded";
        }
    }
    
    /**
     * Load script content from assets directory
     */
    private String loadScriptFromAssets(String scriptPath) {
        try {
            java.io.InputStream inputStream = context.getAssets().open("script/" + scriptPath);
            java.io.BufferedReader reader = new java.io.BufferedReader(new java.io.InputStreamReader(inputStream));
            StringBuilder content = new StringBuilder();
            String line;
            
            while ((line = reader.readLine()) != null) {
                content.append(line).append("\n");
            }
            
            reader.close();
            inputStream.close();
            
            Log.d(TAG, "Loaded script from assets: " + scriptPath);
            return content.toString();
            
        } catch (Exception e) {
            Log.e(TAG, "Failed to load script from assets: " + scriptPath, e);
            return null;
        }
    }
    
    /**
     * Check if native library is loaded (FIXED - now uses shared manager)
     */
    private boolean isNativeLibraryLoaded() {
        return nativeLibraryManager.isLibraryLoaded();
    }
    
    // Native method declarations (implemented in bearmod_jni.cpp)
    private native boolean nativeInjectDirect(String targetPackage, String bearToken);
    private native boolean nativeInjectFridaScript(String targetPackage, String script);
    private native void nativeStopFridaInjection();
    private native void nativeStopDirectInjection();

    // Static block removed - library loading now handled by NativeLibraryManager
    static {
        Log.d(TAG, "HybridInjectionManager class loaded - native library loading handled by NativeLibraryManager");
    }
}
