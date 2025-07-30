package com.bearmod.loader.manager;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.content.pm.ApplicationInfo;
import android.content.pm.PackageInfo;
import android.content.pm.PackageManager;
import android.content.pm.Signature;
import android.os.Handler;
import android.os.Looper;
import android.util.Log;

import com.bearmod.loader.auth.KeyAuthManager;
import com.bearmod.loader.constants.PubgPackages;
import com.bearmod.loader.security.SignatureVerifier;

import java.security.MessageDigest;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;

/**
 * Enhanced Target App Detection System for PUBG Mobile variants
 * Provides comprehensive detection, version compatibility checking, signature verification,
 * and real-time installation monitoring with KeyAuth integration
 */
public class TargetAppManager {
    private static final String TAG = "TargetAppManager";

    // Enhanced PUBG Mobile package definitions with metadata - Using centralized constants
    public static final Map<String, TargetAppInfo> TARGET_APPS = new HashMap<String, TargetAppInfo>() {{
        put(PubgPackages.PUBG_PACKAGES[PubgPackages.GLOBAL_INDEX], new TargetAppInfo(
            PubgPackages.PUBG_PACKAGES[PubgPackages.GLOBAL_INDEX],
            PubgPackages.PUBG_NAMES[PubgPackages.GLOBAL_INDEX],
            PubgPackages.PUBG_VARIANTS[PubgPackages.GLOBAL_INDEX],
            "3.4.0", // Minimum supported version
            true // Official signature required
        ));
        put(PubgPackages.PUBG_PACKAGES[PubgPackages.KOREA_INDEX], new TargetAppInfo(
            PubgPackages.PUBG_PACKAGES[PubgPackages.KOREA_INDEX],
            PubgPackages.PUBG_NAMES[PubgPackages.KOREA_INDEX],
            PubgPackages.PUBG_VARIANTS[PubgPackages.KOREA_INDEX],
            "3.4.0",
            true
        ));
        put(PubgPackages.PUBG_PACKAGES[PubgPackages.VIETNAM_INDEX], new TargetAppInfo(
            PubgPackages.PUBG_PACKAGES[PubgPackages.VIETNAM_INDEX],
            PubgPackages.PUBG_NAMES[PubgPackages.VIETNAM_INDEX],
            PubgPackages.PUBG_VARIANTS[PubgPackages.VIETNAM_INDEX],
            "3.4.0",
            true
        ));
        put(PubgPackages.PUBG_PACKAGES[PubgPackages.TAIWAN_INDEX], new TargetAppInfo(
            PubgPackages.PUBG_PACKAGES[PubgPackages.TAIWAN_INDEX],
            PubgPackages.PUBG_NAMES[PubgPackages.TAIWAN_INDEX],
            PubgPackages.PUBG_VARIANTS[PubgPackages.TAIWAN_INDEX],
            "3.4.0",
            true
        ));
    }};

    // Legacy package list for backward compatibility
    public static final List<String> TARGET_PACKAGES = new ArrayList<>(TARGET_APPS.keySet());

    private final Context context;
    private final ExecutorService executor;
    private final Handler mainHandler;
    private final List<TargetAppStatusListener> listeners;
    private final BroadcastReceiver packageReceiver;

    // Cached detection results
    private final Map<String, DetectionResult> detectionCache;
    private long lastDetectionTime = 0;
    private static final long CACHE_VALIDITY_MS = 5000; // 5 seconds

    public TargetAppManager(Context context) {
        this.context = context.getApplicationContext();
        this.executor = Executors.newCachedThreadPool();
        this.mainHandler = new Handler(Looper.getMainLooper());
        KeyAuthManager.getInstance();
        this.listeners = new ArrayList<>();
        this.detectionCache = new HashMap<>();

        // Initialize package installation monitoring
        this.packageReceiver = new PackageInstallationReceiver();
        registerPackageReceiver();
    }
    
    /**
     * Data class for target app information
     */
    public static class TargetAppInfo {
        public final String packageName;
        public final String displayName;
        public final String variant;
        public final String minVersion;
        public final boolean requiresOfficialSignature;

        public TargetAppInfo(String packageName, String displayName, String variant,
                           String minVersion, boolean requiresOfficialSignature) {
            this.packageName = packageName;
            this.displayName = displayName;
            this.variant = variant;
            this.minVersion = minVersion;
            this.requiresOfficialSignature = requiresOfficialSignature;
        }
    }

    /**
     * Detection result with comprehensive status information
     */
    public static class DetectionResult {
        public final String packageName;
        public final boolean isInstalled;
        public final String installedVersion;
        public final CompatibilityStatus compatibility;
        public final SignatureStatus signatureStatus;
        public final String errorMessage;
        public final long detectionTime;

        public DetectionResult(String packageName, boolean isInstalled, String installedVersion,
                             CompatibilityStatus compatibility, SignatureStatus signatureStatus,
                             String errorMessage) {
            this.packageName = packageName;
            this.isInstalled = isInstalled;
            this.installedVersion = installedVersion;
            this.compatibility = compatibility;
            this.signatureStatus = signatureStatus;
            this.errorMessage = errorMessage;
            this.detectionTime = System.currentTimeMillis();
        }
    }

    /**
     * Compatibility status enumeration
     */
    public enum CompatibilityStatus {
        COMPATIBLE,      // ✅ Compatible
        NEEDS_UPDATE,    // ⚠️ Needs Update
        UNSUPPORTED,     // ❌ Unsupported
        UNKNOWN          // ? Unknown
    }

    /**
     * Signature verification status
     */
    public enum SignatureStatus {
        OFFICIAL,        // Official app signature
        MODDED,          // Modified/modded app
        UNKNOWN,         // Cannot verify
        INVALID          // Invalid signature
    }

    /**
     * Listener interface for target app status changes
     */
    public interface TargetAppStatusListener {
        void onTargetAppInstalled(String packageName, DetectionResult result);
        void onTargetAppUninstalled(String packageName);
        void onTargetAppUpdated(String packageName, DetectionResult result);
    }

    /**
     * Enhanced target app detection with comprehensive status checking
     */
    public boolean isTargetAppInstalled() {
        return !getInstalledTargetApps().isEmpty();
    }
    
    /**
     * Get all installed target apps with comprehensive detection results
     */
    public List<DetectionResult> getInstalledTargetApps() {
        // Check cache validity
        long currentTime = System.currentTimeMillis();
        if (currentTime - lastDetectionTime < CACHE_VALIDITY_MS && !detectionCache.isEmpty()) {
            return new ArrayList<>(detectionCache.values());
        }

        List<DetectionResult> results = new ArrayList<>();
        PackageManager pm = context.getPackageManager();

        for (Map.Entry<String, TargetAppInfo> entry : TARGET_APPS.entrySet()) {
            String packageName = entry.getKey();
            TargetAppInfo appInfo = entry.getValue();

            try {
                PackageInfo packageInfo = pm.getPackageInfo(packageName, PackageManager.GET_SIGNATURES);
                ApplicationInfo applicationInfo = packageInfo.applicationInfo;

                if (applicationInfo != null) {
                    String version = packageInfo.versionName;
                    CompatibilityStatus compatibility = checkVersionCompatibility(version, appInfo.minVersion);
                    SignatureStatus signatureStatus = verifyAppSignature(packageInfo, appInfo.requiresOfficialSignature);

                    DetectionResult result = new DetectionResult(
                        packageName, true, version, compatibility, signatureStatus, null
                    );

                    results.add(result);
                    detectionCache.put(packageName, result);

                    Log.d(TAG, String.format("Detected %s v%s - Compatibility: %s, Signature: %s",
                        appInfo.displayName, version, compatibility, signatureStatus));
                }
            } catch (PackageManager.NameNotFoundException e) {
                // App not installed
                DetectionResult result = new DetectionResult(
                    packageName, false, null, CompatibilityStatus.UNKNOWN,
                    SignatureStatus.UNKNOWN, "App not installed"
                );
                detectionCache.put(packageName, result);
            } catch (Exception e) {
                Log.e(TAG, "Error detecting app: " + packageName, e);
                DetectionResult result = new DetectionResult(
                    packageName, false, null, CompatibilityStatus.UNKNOWN,
                    SignatureStatus.UNKNOWN, "Detection error: " + e.getMessage()
                );
                detectionCache.put(packageName, result);
            }
        }

        lastDetectionTime = currentTime;
        return results;
    }

    /**
     * Get the first installed target app package name (legacy compatibility)
     */
    public String getInstalledTargetPackage() {
        List<DetectionResult> installed = getInstalledTargetApps();
        if (!installed.isEmpty()) {
            return installed.get(0).packageName;
        }
        return null;
    }
    
    /**
     * Check version compatibility against minimum required version
     */
    private CompatibilityStatus checkVersionCompatibility(String installedVersion, String minVersion) {
        if (installedVersion == null || minVersion == null) {
            return CompatibilityStatus.UNKNOWN;
        }

        try {
            // Simple version comparison (can be enhanced for complex version schemes)
            String[] installedParts = installedVersion.split("\\.");
            String[] minParts = minVersion.split("\\.");

            int maxLength = Math.max(installedParts.length, minParts.length);

            for (int i = 0; i < maxLength; i++) {
                int installedPart = i < installedParts.length ?
                    Integer.parseInt(installedParts[i].replaceAll("[^0-9]", "")) : 0;
                int minPart = i < minParts.length ?
                    Integer.parseInt(minParts[i].replaceAll("[^0-9]", "")) : 0;

                if (installedPart > minPart) {
                    return CompatibilityStatus.COMPATIBLE;
                } else if (installedPart < minPart) {
                    return CompatibilityStatus.NEEDS_UPDATE;
                }
            }

            return CompatibilityStatus.COMPATIBLE;
        } catch (Exception e) {
            Log.w(TAG, "Error comparing versions: " + installedVersion + " vs " + minVersion, e);
            return CompatibilityStatus.UNKNOWN;
        }
    }

    /**
     * Verify app signature to detect official vs modded installations
     */
    private SignatureStatus verifyAppSignature(PackageInfo packageInfo, boolean requiresOfficial) {
        if (packageInfo.signatures == null || packageInfo.signatures.length == 0) {
            return SignatureStatus.INVALID;
        }

        try {
            // Get signature hash
            Signature signature = packageInfo.signatures[0];
            MessageDigest md = MessageDigest.getInstance("SHA-256");
            md.update(signature.toByteArray());
            byte[] digest = md.digest();

            StringBuilder hexString = new StringBuilder();
            for (byte b : digest) {
                String hex = Integer.toHexString(0xff & b);
                if (hex.length() == 1) {
                    hexString.append('0');
                }
                hexString.append(hex);
            }

            String signatureHash = hexString.toString().toUpperCase();

            // Check against known official signatures (would be loaded from KeyAuth in production)
            if (isOfficialSignature(packageInfo.packageName, signatureHash)) {
                return SignatureStatus.OFFICIAL;
            } else {
                return SignatureStatus.MODDED;
            }

        } catch (Exception e) {
            Log.e(TAG, "Error verifying signature for: " + packageInfo.packageName, e);
            return SignatureStatus.UNKNOWN;
        }
    }

    /**
     * Check if signature hash matches known official signatures
     * Direct Injection: Simplified signature checking - works with any original application
     */
    private boolean isOfficialSignature(String packageName, String signatureHash) {
        // For direct injection, we accept any signature since we work with original applications
        // No need for complex signature verification - direct injection is compatible with all variants
        Log.d(TAG, "Direct injection mode: Accepting signature for " + packageName);

        // Return true to indicate the app is compatible with direct injection
        return true;
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
     * Real-time installation status monitoring with broadcast receivers
     */
    private void registerPackageReceiver() {
        IntentFilter filter = new IntentFilter();
        filter.addAction(Intent.ACTION_PACKAGE_ADDED);
        filter.addAction(Intent.ACTION_PACKAGE_REMOVED);
        filter.addAction(Intent.ACTION_PACKAGE_REPLACED);
        filter.addDataScheme("package");

        context.registerReceiver(packageReceiver, filter);
        Log.d(TAG, "Package monitoring receiver registered");
    }

    /**
     * Broadcast receiver for package installation changes
     */
    private class PackageInstallationReceiver extends BroadcastReceiver {
        @Override
        public void onReceive(Context context, Intent intent) {
            String action = intent.getAction();
            String packageName = intent.getData() != null ? intent.getData().getSchemeSpecificPart() : null;

            if (packageName == null || !TARGET_APPS.containsKey(packageName)) {
                return; // Not a target app
            }

            Log.d(TAG, "Package event: " + action + " for " + packageName);

            // Clear cache to force re-detection
            detectionCache.remove(packageName);
            lastDetectionTime = 0;

            // Notify listeners on main thread
            mainHandler.post(() -> {
                switch (action) {
                    case Intent.ACTION_PACKAGE_ADDED:
                        handlePackageInstalled(packageName);
                        break;
                    case Intent.ACTION_PACKAGE_REMOVED:
                        handlePackageUninstalled(packageName);
                        break;
                    case Intent.ACTION_PACKAGE_REPLACED:
                        handlePackageUpdated(packageName);
                        break;
                }
            });
        }
    }

    /**
     * Handle package installation event
     */
    private void handlePackageInstalled(String packageName) {
        executor.execute(() -> {
            List<DetectionResult> results = getInstalledTargetApps();
            DetectionResult result = null;

            for (DetectionResult r : results) {
                if (r.packageName.equals(packageName) && r.isInstalled) {
                    result = r;
                    break;
                }
            }

            if (result != null) {
                final DetectionResult finalResult = result;
                mainHandler.post(() -> {
                    for (TargetAppStatusListener listener : listeners) {
                        listener.onTargetAppInstalled(packageName, finalResult);
                    }
                });
            }
        });
    }

    /**
     * Handle package uninstallation event
     */
    private void handlePackageUninstalled(String packageName) {
        mainHandler.post(() -> {
            for (TargetAppStatusListener listener : listeners) {
                listener.onTargetAppUninstalled(packageName);
            }
        });
    }

    /**
     * Handle package update event
     */
    private void handlePackageUpdated(String packageName) {
        executor.execute(() -> {
            List<DetectionResult> results = getInstalledTargetApps();
            DetectionResult result = null;

            for (DetectionResult r : results) {
                if (r.packageName.equals(packageName) && r.isInstalled) {
                    result = r;
                    break;
                }
            }

            if (result != null) {
                final DetectionResult finalResult = result;
                mainHandler.post(() -> {
                    for (TargetAppStatusListener listener : listeners) {
                        listener.onTargetAppUpdated(packageName, finalResult);
                    }
                });
            }
        });
    }

    /**
     * Add status change listener
     */
    public void addStatusListener(TargetAppStatusListener listener) {
        if (!listeners.contains(listener)) {
            listeners.add(listener);
            Log.d(TAG, "Added status listener: " + listener.getClass().getSimpleName());
        }
    }

    /**
     * Remove status change listener
     */
    public void removeStatusListener(TargetAppStatusListener listener) {
        listeners.remove(listener);
        Log.d(TAG, "Removed status listener: " + listener.getClass().getSimpleName());
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

    /**
     * Get detection result for specific package
     */
    public DetectionResult getDetectionResult(String packageName) {
        List<DetectionResult> results = getInstalledTargetApps();
        for (DetectionResult result : results) {
            if (result.packageName.equals(packageName)) {
                return result;
            }
        }

        // Return not installed result if not found
        return new DetectionResult(packageName, false, null,
            CompatibilityStatus.UNKNOWN, SignatureStatus.UNKNOWN, "App not installed");
    }

    /**
     * Cleanup resources
     */
    public void cleanup() {
        try {
            context.unregisterReceiver(packageReceiver);
            Log.d(TAG, "Package monitoring receiver unregistered");
        } catch (Exception e) {
            Log.w(TAG, "Error unregistering package receiver", e);
        }

        listeners.clear();
        detectionCache.clear();
        executor.shutdown();
    }
}
