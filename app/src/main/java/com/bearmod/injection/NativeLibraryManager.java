package com.bearmod.injection;

import android.util.Log;

import java.util.concurrent.atomic.AtomicBoolean;

/**
 * Shared Native Library Manager for all injection managers
 * Prevents conflicts and ensures proper library loading coordination
 * Eliminates duplicate library loading across HybridInjectionManager, InjectionManager, and KeyAuthInjectionManager
 */
public class NativeLibraryManager {
    private static final String TAG = "NativeLibraryManager";
    
    private static NativeLibraryManager instance;
    private static final Object lock = new Object();
    
    private final AtomicBoolean libraryLoaded = new AtomicBoolean(false);
    private final AtomicBoolean libraryLoadAttempted = new AtomicBoolean(false);
    
    private NativeLibraryManager() {
        // Private constructor for singleton
    }
    
    public static NativeLibraryManager getInstance() {
        if (instance == null) {
            synchronized (lock) {
                if (instance == null) {
                    instance = new NativeLibraryManager();
                }
            }
        }
        return instance;
    }
    
    /**
     * Load the native library if not already loaded
     * Thread-safe and prevents multiple loading attempts
     */
    public boolean loadLibrary() {
        if (libraryLoaded.get()) {
            Log.d(TAG, "Native library already loaded");
            return true;
        }
        
        // Prevent multiple simultaneous loading attempts
        if (!libraryLoadAttempted.compareAndSet(false, true)) {
            // Another thread is already attempting to load, wait for result
            synchronized (lock) {
                return libraryLoaded.get();
            }
        }
        
        synchronized (lock) {
            try {
                System.loadLibrary("bearmod");
                libraryLoaded.set(true);
                Log.d(TAG, "Native library loaded successfully");
                return true;
            } catch (UnsatisfiedLinkError e) {
                Log.e(TAG, "Failed to load native library", e);
                libraryLoaded.set(false);
                return false;
            } finally {
                // Reset attempt flag so future attempts can be made if needed
                libraryLoadAttempted.set(false);
            }
        }
    }
    
    /**
     * Check if the native library is loaded
     * Uses actual native method call to verify library status
     */
    public boolean isLibraryLoaded() {
        if (!libraryLoaded.get()) {
            return false;
        }
        
        try {
            // Call a simple native method to verify library is actually loaded and functional
            return nativeIsLibraryLoaded();
        } catch (UnsatisfiedLinkError e) {
            Log.e(TAG, "Native library not properly loaded", e);
            libraryLoaded.set(false);
            return false;
        } catch (Exception e) {
            Log.e(TAG, "Error checking native library status", e);
            return false;
        }
    }
    
    /**
     * Get the native library path if available
     */
    public String getLibraryPath() {
        if (!isLibraryLoaded()) {
            return null;
        }
        
        try {
            return nativeGetLibraryPath();
        } catch (UnsatisfiedLinkError e) {
            Log.e(TAG, "Native method not available", e);
            return null;
        } catch (Exception e) {
            Log.e(TAG, "Error getting library path", e);
            return null;
        }
    }
    
    /**
     * Check if a specific library is loaded by name
     */
    public boolean isLibraryLoaded(String libraryName) {
        if (!isLibraryLoaded()) {
            return false;
        }
        
        try {
            return nativeIsSpecificLibraryLoaded(libraryName);
        } catch (UnsatisfiedLinkError e) {
            Log.e(TAG, "Native method not available for library check: " + libraryName, e);
            return false;
        } catch (Exception e) {
            Log.e(TAG, "Error checking specific library: " + libraryName, e);
            return false;
        }
    }
    
    /**
     * Get library loading status for debugging
     */
    public String getLibraryStatus() {
        if (!libraryLoadAttempted.get() && !libraryLoaded.get()) {
            return "Not attempted";
        } else if (libraryLoadAttempted.get() && !libraryLoaded.get()) {
            return "Load failed";
        } else if (libraryLoaded.get() && isLibraryLoaded()) {
            return "Loaded and functional";
        } else if (libraryLoaded.get() && !isLibraryLoaded()) {
            return "Loaded but not functional";
        } else {
            return "Unknown state";
        }
    }
    
    /**
     * Force reload the library (for testing or recovery scenarios)
     */
    public boolean forceReload() {
        Log.w(TAG, "Force reloading native library");
        libraryLoaded.set(false);
        libraryLoadAttempted.set(false);
        return loadLibrary();
    }
    
    // Native method declarations - these must be implemented in bearmod_jni.cpp
    private native boolean nativeIsLibraryLoaded();
    private native String nativeGetLibraryPath();
    private native boolean nativeIsSpecificLibraryLoaded(String libraryName);
    
    // Static initialization block
    static {
        // The actual library loading is handled by the loadLibrary() method
        // This ensures proper error handling and coordination
        Log.d(TAG, "NativeLibraryManager initialized");
    }
}
