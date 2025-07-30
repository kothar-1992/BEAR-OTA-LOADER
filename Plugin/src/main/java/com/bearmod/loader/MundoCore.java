package com.bearmod.loader;

import android.content.Context;
import android.util.Log;

/**
 * Java bridge to libmundo.so native library
 * Provides high-level API for BearMod functionality
 */
public class MundoCore {
    private static final String TAG = "BearMod.MundoCore";
    private static final String NATIVE_LIB = "mundo";

    // Native library loading
    static {
        try {
            System.loadLibrary(NATIVE_LIB);
            Log.d(TAG, "libmundo.so loaded successfully");
        } catch (UnsatisfiedLinkError e) {
            Log.e(TAG, "Failed to load libmundo.so: " + e.getMessage());
            throw new RuntimeException("Critical: libmundo.so not available", e);
        }
    }

    // Configuration class
    public static class MundoConfig {
        public String keyAuthToken;
        public String bearToken;
        public String targetPackage;
        public int securityLevel = 2;        // Maximum by default
        public boolean enableNonRoot = true;
        public boolean enableAntiHook = true;
        public boolean enableStealth = true;

        public MundoConfig(String keyAuthToken, String bearToken) {
            this.keyAuthToken = keyAuthToken;
            this.bearToken = bearToken;
        }
    }

    // Result classes
    public static class MundoInitResult {
        public boolean success;
        public String message;
        public String version;
        public int securityStatus;
        public boolean nonRootAvailable;
    }

    // Singleton instance
    private static MundoCore sInstance;
    private static final Object sLock = new Object();

    private Context mContext;
    private boolean mInitialized = false;
    private MundoConfig mConfig;

    private MundoCore(Context context) {
        mContext = context.getApplicationContext();
    }

    public static MundoCore getInstance(Context context) {
        synchronized (sLock) {
            if (sInstance == null) {
                sInstance = new MundoCore(context);
            }
            return sInstance;
        }
    }

    /**
     * Initialize Mundo core with configuration
     */
    public MundoInitResult initialize(MundoConfig config) {
        if (mInitialized) {
            MundoInitResult result = new MundoInitResult();
            result.success = true;
            result.message = "Already initialized";
            return result;
        }

        mConfig = config;

        // Call native initialization
        MundoInitResult result = nativeInitialize(mContext, config);

        if (result.success) {
            mInitialized = true;
            Log.i(TAG, "Mundo initialized successfully - Version: " + result.version);
        } else {
            Log.e(TAG, "Mundo initialization failed: " + result.message);
        }

        return result;
    }

    /**
     * Authenticate with KeyAuth using BearToken
     */
    public boolean authenticateKeyAuth(String bearToken) {
        if (!mInitialized) {
            Log.e(TAG, "Mundo not initialized");
            return false;
        }

        boolean result = nativeAuthenticateKeyAuth(bearToken);
        Log.i(TAG, "KeyAuth authentication: " + (result ? "SUCCESS" : "FAILED"));
        return result;
    }

    /**
     * Inject to target package (non-root)
     */
    public boolean injectToPackage(String packageName) {
        if (!mInitialized) {
            Log.e(TAG, "Mundo not initialized");
            return false;
        }

        Log.i(TAG, "Starting injection to package: " + packageName);
        boolean result = nativeInjectToPackage(packageName);
        Log.i(TAG, "Injection result: " + (result ? "SUCCESS" : "FAILED"));
        return result;
    }

    /**
     * Enable ESP functionality
     */
    public boolean enableESP(boolean enable) {
        if (!mInitialized) return false;
        return nativeEnableESP(enable);
    }

    /**
     * Enable skin modifications
     */
    public boolean enableSkinMods(boolean enable) {
        if (!mInitialized) return false;
        return nativeEnableSkinMods(enable);
    }

    /**
     * Get current security status
     */
    public String getSecurityStatus() {
        if (!mInitialized) return "Not initialized";
        return nativeGetSecurityStatus();
    }

    /**
     * Get current threat level (0-10)
     */
    public int getThreatLevel() {
        if (!mInitialized) return -1;
        return nativeGetThreatLevel();
    }

    /**
     * Check if injection is currently active
     */
    public boolean isInjectionActive() {
        if (!mInitialized) return false;
        return nativeIsInjectionActive();
    }

    /**
     * Get last error message
     */
    public String getLastError() {
        return nativeGetLastError();
    }

    /**
     * Shutdown Mundo core
     */
    public void shutdown() {
        if (mInitialized) {
            nativeShutdown();
            mInitialized = false;
            Log.i(TAG, "Mundo shutdown completed");
        }
    }

    // Getters
    public boolean isInitialized() { return mInitialized; }
    public MundoConfig getConfig() { return mConfig; }

    /**
     * Initialize Frida Gadget for JavaScript injection
     * @param targetPackage Target PUBG package name
     * @return Initialization result code (0=success, 1=already loaded, 2=load failed, 3=config failed, 4=auth failed)
     */
    public int initializeFridaGadget(String targetPackage) {
        if (!mInitialized) {
            Log.e(TAG, "Mundo not initialized");
            return 2; // Load failed
        }

        if (mConfig == null || mConfig.bearToken == null) {
            Log.e(TAG, "BearToken required for Frida Gadget");
            return 4; // Auth failed
        }

        Log.i(TAG, "Initializing Frida Gadget for: " + targetPackage);
        return nativeInitializeFridaGadget(mConfig.bearToken, targetPackage);
    }

    /**
     * Load JavaScript payload for specific PUBG variant
     * @param variantName PUBG variant (global, korea, vietnam, taiwan)
     * @param scriptContent JavaScript code to inject
     * @return true if successful
     */
    public boolean loadJavaScriptPayload(String variantName, String scriptContent) {
        if (!mInitialized) {
            Log.e(TAG, "Mundo not initialized");
            return false;
        }

        Log.i(TAG, "Loading JavaScript payload for variant: " + variantName);
        return nativeLoadJavaScriptPayload(variantName, scriptContent);
    }

    /**
     * Check if Frida Gadget is active
     * @return true if gadget is loaded and active
     */
    public boolean isFridaGadgetActive() {
        if (!mInitialized) {
            return false;
        }

        return nativeIsFridaGadgetActive();
    }

    /**
     * Stop Frida Gadget and clean up resources
     * @return true if successfully stopped
     */
    public boolean stopFridaGadget() {
        if (!mInitialized) {
            Log.e(TAG, "Mundo not initialized");
            return false;
        }

        Log.i(TAG, "Stopping Frida Gadget...");
        return nativeStopFridaGadget();
    }

    // Native method declarations
    private native MundoInitResult nativeInitialize(Context context, MundoConfig config);
    private native boolean nativeAuthenticateKeyAuth(String bearToken);
    private native boolean nativeInjectToPackage(String packageName);
    private native boolean nativeEnableESP(boolean enable);
    private native boolean nativeEnableSkinMods(boolean enable);
    private native String nativeGetSecurityStatus();
    private native int nativeGetThreatLevel();
    private native boolean nativeIsInjectionActive();
    private native String nativeGetLastError();
    private native void nativeShutdown();

    // Frida Gadget native methods
    private native int nativeInitializeFridaGadget(String bearToken, String targetPackage);
    private native boolean nativeLoadJavaScriptPayload(String variantName, String scriptContent);
    private native boolean nativeIsFridaGadgetActive();
    private native boolean nativeStopFridaGadget();

    // Static utility methods
    public static native String getMundoVersion();
    public static native boolean isCompatibleDevice();
}
