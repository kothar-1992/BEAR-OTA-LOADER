package com.bearmod;

import android.content.Context;
import android.content.Intent;
import android.content.SharedPreferences;
import android.net.Uri;
import android.provider.Settings;
import android.util.Log;

import android.app.Activity;

import com.bearmod.security.SimpleLicenseVerifier;

import java.util.concurrent.atomic.AtomicBoolean;

public class Launcher {
    private static final String TAG = "Launcher";
    private static final AtomicBoolean isInitializing = new AtomicBoolean(false);
    private static final Object lockObject = new Object();
    private static volatile SharedPreferences gifs;



private static boolean nativeLibraryLoaded = true;
static {
    try {
        System.loadLibrary("bearmod"); // Includes libclient_static
        android.util.Log.d("Launcher", "Native library loaded successfully");
        nativeLibraryLoaded = true;
    } catch (UnsatisfiedLinkError e) {
        android.util.Log.e("Launcher", "Failed to load native library: " + e.getMessage());
        nativeLibraryLoaded = false;
    }
}



    public static void Init(Object object) {
        try {
            if (object == null) return;
            if (!isInitializing.compareAndSet(false, true)) return;

            synchronized (lockObject) {
                final Context context = (Context) object;
                Activity activity = (Activity) object;

                Init(context);

                // Check overlay permission
                if (!Settings.canDrawOverlays(context)) {
                    Intent intent = new Intent(Settings.ACTION_MANAGE_OVERLAY_PERMISSION,
                            Uri.parse("package:" + context.getPackageName()));
                    activity.startActivity(intent);
                }

                try {
                    gifs = context.getSharedPreferences(context.getPackageName(), Context.MODE_PRIVATE);
                } catch (Exception e) {
                    e.printStackTrace();
                    isInitializing.set(false);
                    return;
                }

                // Login flow is now handled by MainActivity and LauncherLoginActivity
                // This method is only called to initialize native code
                android.util.Log.d("Launcher", "Native initialization completed");
            }
        } catch (Exception e) {
            e.printStackTrace();
            isInitializing.set(false);
        }
    }

    public static boolean hasValidKey(Context context) {
        // Simple check for stored license key
        return context.getSharedPreferences(context.getPackageName(), Context.MODE_PRIVATE).contains("USER_KEY");
    }

    public static boolean isNativeLibraryLoaded() {
        return nativeLibraryLoaded;
    }

    public static void clearKey(Context context) {
        SharedPreferences prefs = context.getSharedPreferences(context.getPackageName(), Context.MODE_PRIVATE);
        prefs.edit().remove("USER_KEY").apply();
    }

    // Native CURL authentication removed - using KeyAuth API only
    private static native void Init(Context mContext);

    // Only keep native Init for ESP/mod functionality
    public static void safeInit(Context mContext) {
        if (nativeLibraryLoaded) {
            try {
                Init(mContext);
                android.util.Log.d("Launcher", "Native Init called successfully");
            } catch (UnsatisfiedLinkError e) {
                android.util.Log.w("Launcher", "Native Init not available, using fallback");
            }
        } else {
            android.util.Log.i("Launcher", "Running in demo mode - native library not loaded");
        }
    }

    public static SharedPreferences getGifs() {
        return gifs;
    }

    public static void setGifs(SharedPreferences gifs) {
        Launcher.gifs = gifs;
    }

    public interface LoginCallback {
        void onSuccess();
        void onError(String errorMessage);
    }

    public static void loginAsync(Context context, String userKey, LoginCallback callback) {
        Log.d(TAG, "Starting Auth license verification...");

        // Use ONLY KeyAuth API - no fallback to CURL
        SimpleLicenseVerifier.verifyLicense(context, userKey, new SimpleLicenseVerifier.LicenseCallback() {
            @Override
            public void onSuccess(String message) {
                new android.os.Handler(android.os.Looper.getMainLooper()).post(() -> {
                    Log.d(TAG, "Auth license verification successful: " + message);
                    // Save the key for future use
                    SharedPreferences prefs = context.getSharedPreferences(context.getPackageName(), Context.MODE_PRIVATE);
                    prefs.edit().putString("USER_KEY", userKey).apply();
                    callback.onSuccess();
                });
            }

            @Override
            public void onFailure(String error) {
                new android.os.Handler(android.os.Looper.getMainLooper()).post(() -> {
                    Log.e(TAG, "Auth license verification failed: " + error);
                    // No fallback - KeyAuth API only
                    callback.onError("License verification failed: " + error);
                });
            }
        });
    }

    // CURL fallback method removed - using KeyAuth API only

    /**
     * Get device HWID for debugging/logging
     */
    public static String getDeviceHWID(Context context) {
        return com.bearmod.security.HWID.getHWID();
    }

    /**
     * Debug method to log HWID information
     */
    public static void debugHWID(Context context) {
        String hwid = getDeviceHWID(context);
        android.util.Log.d(TAG, "=== HWID Debug Information ===");
        android.util.Log.d(TAG, "Current HWID: " + hwid);
        android.util.Log.d(TAG, "Device Model: " + android.os.Build.MODEL);
        android.util.Log.d(TAG, "Device Manufacturer: " + android.os.Build.MANUFACTURER);
        android.util.Log.d(TAG, "Device Brand: " + android.os.Build.BRAND);
        android.util.Log.d(TAG, "Device Board: " + android.os.Build.BOARD);
        android.util.Log.d(TAG, "Device Hardware: " + android.os.Build.HARDWARE);
        android.util.Log.d(TAG, "Device Product: " + android.os.Build.PRODUCT);
        android.util.Log.d(TAG, "OS Name: " + System.getProperty("os.name"));
        android.util.Log.d(TAG, "OS Arch: " + System.getProperty("os.arch"));
        android.util.Log.d(TAG, "OS Version: " + System.getProperty("os.version"));
        android.util.Log.d(TAG, "CPU Cores: " + Runtime.getRuntime().availableProcessors());
        android.util.Log.d(TAG, "==============================");
    }

}


