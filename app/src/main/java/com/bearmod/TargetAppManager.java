package com.bearmod;

import android.content.Context;
import android.content.Intent;
import android.content.pm.ApplicationInfo;
import android.content.pm.PackageManager;
import android.util.Log;
import java.util.Arrays;
import java.util.List;

/**
 * Manages target app detection and launching for PUBG Mobile variants
 */
public class TargetAppManager {
    private static final String TAG = "TargetAppManager";
    
    // PUBG Mobile package names from the native code analysis
    public static final List<String> TARGET_PACKAGES = Arrays.asList(
        "com.tencent.ig",        // Global version
        "com.pubg.krmobile",     // Korea
        "com.pubg.imobile",      // India/BGMI
        "com.rekoo.pubgm",       // Taiwan
        "com.vng.pubgmobile"     // Vietnam
    );
    
    private final Context context;
    
    public TargetAppManager(Context context) {
        this.context = context;
    }
    
    /**
     * Check if any target app is installed
     */
    public boolean isTargetAppInstalled() {
        PackageManager pm = context.getPackageManager();
        
        for (String packageName : TARGET_PACKAGES) {
            try {
                ApplicationInfo appInfo = pm.getApplicationInfo(packageName, 0);
                Log.d(TAG, "Found installed target app: " + packageName);
                return true;
            } catch (PackageManager.NameNotFoundException e) {
                // App not installed, continue checking
            }
        }
        
        Log.d(TAG, "No target apps found installed");
        return false;
    }

    /**
     * Check if a specific package is installed
     */
    public boolean isPackageInstalled(String packageName) {
        PackageManager pm = context.getPackageManager();
        try {
            ApplicationInfo appInfo = pm.getApplicationInfo(packageName, 0);
            return true;
        } catch (PackageManager.NameNotFoundException e) {
            return false;
        }
    }

    /**
     * Get the first installed target app package name
     */
    public String getInstalledTargetPackage() {
        PackageManager pm = context.getPackageManager();
        
        for (String packageName : TARGET_PACKAGES) {
            try {
                ApplicationInfo appInfo = pm.getApplicationInfo(packageName, 0);
                Log.d(TAG, "Found target app: " + packageName);
                return packageName;
            } catch (PackageManager.NameNotFoundException e) {
                // App not installed, continue checking
            }
        }
        
        return null;
    }
    
    /**
     * Launch the target app if installed
     */
    public boolean launchTargetApp() {
        String targetPackage = getInstalledTargetPackage();
        if (targetPackage == null) {
            Log.w(TAG, "No target app installed to launch");
            return false;
        }
        
        try {
            Intent launchIntent = context.getPackageManager().getLaunchIntentForPackage(targetPackage);
            if (launchIntent != null) {
                launchIntent.addFlags(Intent.FLAG_ACTIVITY_NEW_TASK);
                context.startActivity(launchIntent);
                Log.d(TAG, "Successfully launched target app: " + targetPackage);
                return true;
            } else {
                Log.w(TAG, "No launch intent found for: " + targetPackage);
                return false;
            }
        } catch (Exception e) {
            Log.e(TAG, "Error launching target app: " + targetPackage, e);
            return false;
        }
    }
    
    /**
     * Check if any target app is currently running
     */
    public boolean isTargetAppRunning() {
        // Note: This is a simplified check. In production, you might want to use
        // ActivityManager to check running processes, but that requires additional permissions
        // For now, we'll assume the app is running if it was recently launched
        return getInstalledTargetPackage() != null;
    }
    
    /**
     * Get the display name of the installed target app
     */
    public String getTargetAppName() {
        String targetPackage = getInstalledTargetPackage();
        if (targetPackage == null) {
            return "PUBG Mobile (Not Installed)";
        }
        
        try {
            PackageManager pm = context.getPackageManager();
            ApplicationInfo appInfo = pm.getApplicationInfo(targetPackage, 0);
            String appName = pm.getApplicationLabel(appInfo).toString();
            Log.d(TAG, "Target app name: " + appName);
            return appName;
        } catch (Exception e) {
            Log.e(TAG, "Error getting app name for: " + targetPackage, e);
            return "PUBG Mobile";
        }
    }
}
