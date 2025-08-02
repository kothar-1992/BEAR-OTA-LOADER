package com.bearmod.plugin;

import android.content.Context;
import android.content.pm.PackageManager;
import android.util.Log;
import java.util.List;
import java.util.ArrayList;
import java.util.concurrent.CompletableFuture;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;

/**
 * BearMod Non-Root Manager
 * 
 * Java interface for non-root injection functionality
 * Provides high-level API for Frida Gadget injection and management
 */
public class NonRootManager {
    private static final String TAG = "BearMod.NonRootManager";
    
    // Native library name
    private static final String NATIVE_LIB = "BearMod";
    
    // Singleton instance
    private static NonRootManager sInstance;
    private static final Object sLock = new Object();
    
    // Context and state
    private Context mContext;
    private boolean mInitialized = false;
    private boolean mInjectionActive = false;
    private ExecutorService mExecutor;
    
    // Configuration
    private String mKeyAuthToken;
    private String mBearToken;
    private String mTargetPackage;
    
    // Callbacks
    public interface InjectionCallback {
        void onProgress(int stage, int progress, String message);
        void onCompleted(boolean success, String result);
        void onError(String error);
    }
    
    public interface MonitoringCallback {
        void onSecurityEvent(String event, String details);
        void onInjectionStatusChanged(boolean active);
        void onThreatDetected(int threatLevel, String description);
    }
    
    // Injection stages (must match C++ enum)
    public static class InjectionStage {
        public static final int IDLE = 0;
        public static final int INITIALIZING = 1;
        public static final int AUTHENTICATING = 2;
        public static final int ANALYZING_TARGET = 3;
        public static final int PATCHING_APK = 4;
        public static final int INSTALLING_PATCHED_APK = 5;
        public static final int LAUNCHING_TARGET = 6;
        public static final int INJECTING_SCRIPTS = 7;
        public static final int VERIFYING_INJECTION = 8;
        public static final int MONITORING = 9;
        public static final int COMPLETED = 10;
        public static final int FAILED = 11;
    }
    
    // Security levels (must match C++ enum)
    public static class SecurityLevel {
        public static final int MINIMAL = 0;
        public static final int STANDARD = 1;
        public static final int MAXIMUM = 2;
    }
    
    // Injection modes (must match C++ enum)
    public static class InjectionMode {
        public static final int STEALTH = 0;
        public static final int BALANCED = 1;
        public static final int FAST = 2;
    }
    
    static {
        try {
            System.loadLibrary(NATIVE_LIB);
            Log.d(TAG, "Native library loaded successfully");
        } catch (UnsatisfiedLinkError e) {
            Log.e(TAG, "Failed to load native library: " + e.getMessage());
        }
    }
    
    private NonRootManager(Context context) {
        mContext = context.getApplicationContext();
        mExecutor = Executors.newCachedThreadPool();
    }
    
    /**
     * Get singleton instance
     */
    public static NonRootManager getInstance(Context context) {
        synchronized (sLock) {
            if (sInstance == null) {
                sInstance = new NonRootManager(context);
            }
            return sInstance;
        }
    }
    
    /**
     * Initialize the non-root manager
     */
    public boolean initialize(String keyAuthToken, String bearToken) {
        if (mInitialized) {
            Log.w(TAG, "Already initialized");
            return true;
        }
        
        if (keyAuthToken == null || keyAuthToken.isEmpty()) {
            Log.e(TAG, "KeyAuth token is required");
            return false;
        }
        
        if (bearToken == null || bearToken.isEmpty()) {
            Log.e(TAG, "BearToken is required");
            return false;
        }
        
        mKeyAuthToken = keyAuthToken;
        mBearToken = bearToken;
        
        try {
            // Initialize native components
            boolean result = initializeGadgetManager(keyAuthToken, bearToken);
            if (result) {
                mInitialized = true;
                Log.i(TAG, "NonRootManager initialized successfully");
            } else {
                Log.e(TAG, "Failed to initialize native components");
            }
            return result;
        } catch (Exception e) {
            Log.e(TAG, "Initialization exception: " + e.getMessage());
            return false;
        }
    }
    
    /**
     * Shutdown the non-root manager
     */
    public void shutdown() {
        if (!mInitialized) {
            return;
        }
        
        try {
            // Stop any active injection
            if (mInjectionActive) {
                stopInjection();
            }
            
            // Shutdown native components
            shutdownGadgetManager();
            
            // Shutdown executor
            if (mExecutor != null && !mExecutor.isShutdown()) {
                mExecutor.shutdown();
            }
            
            mInitialized = false;
            Log.i(TAG, "NonRootManager shutdown completed");
            
        } catch (Exception e) {
            Log.e(TAG, "Shutdown exception: " + e.getMessage());
        }
    }
    
    /**
     * Start injection to target package
     */
    public CompletableFuture<Boolean> injectToPackage(String packageName, InjectionCallback callback) {
        if (!mInitialized) {
            Log.e(TAG, "Manager not initialized");
            if (callback != null) {
                callback.onError("Manager not initialized");
            }
            return CompletableFuture.completedFuture(false);
        }
        
        if (packageName == null || packageName.isEmpty()) {
            Log.e(TAG, "Package name is required");
            if (callback != null) {
                callback.onError("Package name is required");
            }
            return CompletableFuture.completedFuture(false);
        }
        
        if (mInjectionActive) {
            Log.w(TAG, "Injection already active");
            if (callback != null) {
                callback.onError("Injection already active");
            }
            return CompletableFuture.completedFuture(false);
        }
        
        mTargetPackage = packageName;
        
        return CompletableFuture.supplyAsync(() -> {
            try {
                Log.i(TAG, "Starting injection to package: " + packageName);
                
                // Validate target package
                if (!isPackageInstalled(packageName)) {
                    String error = "Target package not installed: " + packageName;
                    Log.e(TAG, error);
                    if (callback != null) {
                        callback.onError(error);
                    }
                    return false;
                }
                
                // Start native injection
                mInjectionActive = true;
                boolean result = injectToPackage(packageName);
                
                if (result) {
                    Log.i(TAG, "Injection completed successfully");
                    if (callback != null) {
                        callback.onCompleted(true, "Injection completed successfully");
                    }
                } else {
                    String error = "Injection failed: " + getLastError();
                    Log.e(TAG, error);
                    if (callback != null) {
                        callback.onError(error);
                    }
                    mInjectionActive = false;
                }
                
                return result;
                
            } catch (Exception e) {
                String error = "Injection exception: " + e.getMessage();
                Log.e(TAG, error);
                if (callback != null) {
                    callback.onError(error);
                }
                mInjectionActive = false;
                return false;
            }
        }, mExecutor);
    }
    
    /**
     * Stop active injection
     */
    public void stopInjection() {
        if (!mInjectionActive) {
            Log.w(TAG, "No active injection to stop");
            return;
        }
        
        try {
            // Stop native injection
            stopNativeInjection();
            mInjectionActive = false;
            Log.i(TAG, "Injection stopped");
        } catch (Exception e) {
            Log.e(TAG, "Failed to stop injection: " + e.getMessage());
        }
    }
    
    /**
     * Get injection status
     */
    public String getInjectionStatus() {
        if (!mInitialized) {
            return "Not initialized";
        }
        
        try {
            return getInjectionStatusNative();
        } catch (Exception e) {
            Log.e(TAG, "Failed to get injection status: " + e.getMessage());
            return "Error: " + e.getMessage();
        }
    }
    
    /**
     * Check if package is installed
     */
    private boolean isPackageInstalled(String packageName) {
        try {
            PackageManager pm = mContext.getPackageManager();
            pm.getPackageInfo(packageName, 0);
            return true;
        } catch (PackageManager.NameNotFoundException e) {
            return false;
        }
    }
    
    /**
     * Get last error message
     */
    private String getLastError() {
        try {
            return getLastErrorNative();
        } catch (Exception e) {
            return "Failed to get error: " + e.getMessage();
        }
    }
    
    /**
     * Check if non-root injection is supported
     */
    public static boolean isNonRootSupported() {
        try {
            return isNonRootSupportedNative();
        } catch (Exception e) {
            Log.e(TAG, "Failed to check non-root support: " + e.getMessage());
            return false;
        }
    }
    
    /**
     * Get required permissions for non-root injection
     */
    public static List<String> getRequiredPermissions() {
        List<String> permissions = new ArrayList<>();
        permissions.add(android.Manifest.permission.INTERNET);
        permissions.add(android.Manifest.permission.WRITE_EXTERNAL_STORAGE);
        permissions.add(android.Manifest.permission.READ_EXTERNAL_STORAGE);
        permissions.add(android.Manifest.permission.INSTALL_PACKAGES);
        return permissions;
    }
    
    /**
     * Validate system requirements
     */
    public boolean validateSystemRequirements() {
        try {
            return validateSystemRequirementsNative();
        } catch (Exception e) {
            Log.e(TAG, "Failed to validate system requirements: " + e.getMessage());
            return false;
        }
    }
    
    // Getters
    public boolean isInitialized() { return mInitialized; }
    public boolean isInjectionActive() { return mInjectionActive; }
    public String getTargetPackage() { return mTargetPackage; }
    
    // Native method declarations
    private native boolean initializeGadgetManager(String keyAuthToken, String bearToken);
    private native boolean injectToPackage(String packageName);
    private native void stopNativeInjection();
    private native String getInjectionStatusNative();
    private native String getLastErrorNative();
    private native void shutdownGadgetManager();
    
    private static native boolean isNonRootSupportedNative();
    private static native boolean validateSystemRequirementsNative();
}
