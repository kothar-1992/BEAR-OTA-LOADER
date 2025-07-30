package com.bearmod.loader.monitor;

import android.app.ActivityManager;
import android.content.Context;
import android.os.Handler;
import android.os.Looper;
import android.util.Log;

import com.bearmod.loader.constants.PubgPackages;
import com.bearmod.loader.injection.RuntimeInjectionManager;

import java.util.HashSet;
import java.util.List;
import java.util.Set;
import java.util.concurrent.ConcurrentHashMap;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;

/**
 * PHASE 7: Process lifecycle monitor for automatic cleanup
 * Monitors target app lifecycle and triggers cleanup when PUBG processes terminate
 */
public class ProcessLifecycleMonitor {
    private static final String TAG = "ProcessLifecycleMonitor";
    
    // Monitoring interval in milliseconds
    private static final long MONITORING_INTERVAL = 5000; // 5 seconds
    
    // Grace period before cleanup (to avoid false positives)
    private static final long CLEANUP_GRACE_PERIOD = 10000; // 10 seconds

    private final RuntimeInjectionManager injectionManager;
    private final ActivityManager activityManager;
    private final Handler mainHandler;
    private final ExecutorService monitorExecutor;
    
    // Track running processes and their last seen timestamps
    private final ConcurrentHashMap<String, Long> runningProcesses = new ConcurrentHashMap<>();
    private final ConcurrentHashMap<String, Long> lastSeenTimestamps = new ConcurrentHashMap<>();
    
    // Monitor state
    private volatile boolean isMonitoring = false;
    private Runnable monitoringRunnable;
    
    // Cleanup listeners
    private final Set<CleanupListener> cleanupListeners = new HashSet<>();
    
    public ProcessLifecycleMonitor(Context context, RuntimeInjectionManager injectionManager) {
        context.getApplicationContext();
        this.injectionManager = injectionManager;
        this.activityManager = (ActivityManager) context.getSystemService(Context.ACTIVITY_SERVICE);
        this.mainHandler = new Handler(Looper.getMainLooper());
        this.monitorExecutor = Executors.newSingleThreadExecutor();
    }
    
    /**
     * Start monitoring target app processes
     */
    public void startMonitoring() {
        if (isMonitoring) {
            Log.d(TAG, "Process monitoring already started");
            return;
        }
        
        Log.i(TAG, "Starting process lifecycle monitoring...");
        isMonitoring = true;
        
        monitoringRunnable = new Runnable() {
            @Override
            public void run() {
                if (isMonitoring) {
                    monitorProcesses();
                    mainHandler.postDelayed(this, MONITORING_INTERVAL);
                }
            }
        };
        
        mainHandler.post(monitoringRunnable);
    }
    
    /**
     * Stop monitoring processes
     */
    public void stopMonitoring() {
        if (!isMonitoring) {
            return;
        }
        
        Log.i(TAG, "Stopping process lifecycle monitoring...");
        isMonitoring = false;
        
        if (monitoringRunnable != null) {
            mainHandler.removeCallbacks(monitoringRunnable);
        }
        
        // Clear tracking data
        runningProcesses.clear();
        lastSeenTimestamps.clear();
    }
    
    /**
     * Monitor target app processes
     */
    private void monitorProcesses() {
        monitorExecutor.execute(() -> {
            try {
                Set<String> currentlyRunning = getCurrentlyRunningTargetApps();
                long currentTime = System.currentTimeMillis();
                
                // Update running processes
                for (String packageName : currentlyRunning) {
                    if (!runningProcesses.containsKey(packageName)) {
                        Log.d(TAG, "Target app started: " + packageName);
                        onProcessStarted(packageName);
                    }
                    runningProcesses.put(packageName, currentTime);
                    lastSeenTimestamps.put(packageName, currentTime);
                }
                
                // Check for terminated processes
                Set<String> toRemove = new HashSet<>();
                for (String packageName : runningProcesses.keySet()) {
                    if (!currentlyRunning.contains(packageName)) {
                        Long lastSeen = lastSeenTimestamps.get(packageName);
                        if (lastSeen != null && (currentTime - lastSeen) > CLEANUP_GRACE_PERIOD) {
                            Log.d(TAG, "Target app terminated: " + packageName);
                            onProcessTerminated(packageName);
                            toRemove.add(packageName);
                        }
                    }
                }
                
                // Remove terminated processes from tracking
                for (String packageName : toRemove) {
                    runningProcesses.remove(packageName);
                    lastSeenTimestamps.remove(packageName);
                }
                
            } catch (Exception e) {
                Log.e(TAG, "Error monitoring processes", e);
            }
        });
    }
    
    /**
     * Get currently running target apps
     */
    private Set<String> getCurrentlyRunningTargetApps() {
        Set<String> runningApps = new HashSet<>();
        
        try {
            List<ActivityManager.RunningAppProcessInfo> runningProcesses = 
                activityManager.getRunningAppProcesses();
            
            if (runningProcesses != null) {
                for (ActivityManager.RunningAppProcessInfo processInfo : runningProcesses) {
                    String packageName = processInfo.processName;
                    
                    // Check if it's one of our target PUBG packages
                    for (String targetPackage : PubgPackages.PUBG_PACKAGES) {
                        if (packageName.equals(targetPackage) || 
                            packageName.startsWith(targetPackage + ":")) {
                            runningApps.add(targetPackage);
                            break;
                        }
                    }
                }
            }
            
        } catch (Exception e) {
            Log.e(TAG, "Error getting running apps", e);
        }
        
        return runningApps;
    }
    
    /**
     * Handle process started event
     */
    private void onProcessStarted(String packageName) {
        Log.i(TAG, "Process started: " + packageName);
        
        // Notify listeners
        mainHandler.post(() -> {
            for (CleanupListener listener : cleanupListeners) {
                try {
                    listener.onProcessStarted(packageName);
                } catch (Exception e) {
                    Log.e(TAG, "Error notifying process started listener", e);
                }
            }
        });
    }
    
    /**
     * Handle process terminated event
     */
    private void onProcessTerminated(String packageName) {
        Log.i(TAG, "Process terminated: " + packageName);
        
        // Perform automatic cleanup
        performAutomaticCleanup(packageName);
        
        // Notify listeners
        mainHandler.post(() -> {
            for (CleanupListener listener : cleanupListeners) {
                try {
                    listener.onProcessTerminated(packageName);
                } catch (Exception e) {
                    Log.e(TAG, "Error notifying process terminated listener", e);
                }
            }
        });
    }
    
    /**
     * Perform automatic cleanup for terminated process
     */
    private void performAutomaticCleanup(String packageName) {
        try {
            Log.d(TAG, "Performing automatic cleanup for: " + packageName);
            
            // Clean up injected libraries
            if (injectionManager.isLibraryInjected(packageName)) {
                boolean cleanupSuccess = injectionManager.cleanupInjectedLibrary(packageName);
                if (cleanupSuccess) {
                    Log.i(TAG, "Automatic cleanup completed for: " + packageName);
                } else {
                    Log.w(TAG, "Automatic cleanup failed for: " + packageName);
                }
            } else {
                Log.d(TAG, "No injected library found for cleanup: " + packageName);
            }
            
        } catch (Exception e) {
            Log.e(TAG, "Error during automatic cleanup for " + packageName, e);
        }
    }
    
    /**
     * Force cleanup for specific package (manual trigger)
     */
    public void forceCleanup(String packageName) {
        Log.i(TAG, "Force cleanup requested for: " + packageName);
        performAutomaticCleanup(packageName);
        
        // Remove from tracking
        runningProcesses.remove(packageName);
        lastSeenTimestamps.remove(packageName);
    }
    
    /**
     * Force cleanup for all packages
     */
    public void forceCleanupAll() {
        Log.i(TAG, "Force cleanup all requested");
        
        // Clean up all injected libraries
        injectionManager.cleanupAllInjectedLibraries();
        
        // Clear tracking data
        runningProcesses.clear();
        lastSeenTimestamps.clear();
        
        // Notify listeners
        mainHandler.post(() -> {
            for (CleanupListener listener : cleanupListeners) {
                try {
                    listener.onAllProcessesCleanedUp();
                } catch (Exception e) {
                    Log.e(TAG, "Error notifying cleanup all listener", e);
                }
            }
        });
    }
    
    /**
     * Check if specific package is currently running
     */
    public boolean isPackageRunning(String packageName) {
        return runningProcesses.containsKey(packageName);
    }
    
    /**
     * Get all currently running target packages
     */
    public Set<String> getRunningPackages() {
        return new HashSet<>(runningProcesses.keySet());
    }
    
    /**
     * Add cleanup listener
     */
    public void addCleanupListener(CleanupListener listener) {
        synchronized (cleanupListeners) {
            cleanupListeners.add(listener);
        }
    }
    
    /**
     * Remove cleanup listener
     */
    public void removeCleanupListener(CleanupListener listener) {
        synchronized (cleanupListeners) {
            cleanupListeners.remove(listener);
        }
    }
    
    /**
     * Get monitoring status
     */
    public boolean isMonitoring() {
        return isMonitoring;
    }
    
    /**
     * Get process uptime for specific package
     */
    public long getProcessUptime(String packageName) {
        Long startTime = runningProcesses.get(packageName);
        if (startTime != null) {
            return System.currentTimeMillis() - startTime;
        }
        return 0;
    }
    
    /**
     * Cleanup listener interface
     */
    public interface CleanupListener {
        void onProcessStarted(String packageName);
        void onProcessTerminated(String packageName);
        void onAllProcessesCleanedUp();
    }
    
    /**
     * Cleanup resources
     */
    public void destroy() {
        stopMonitoring();
        
        if (monitorExecutor != null && !monitorExecutor.isShutdown()) {
            monitorExecutor.shutdown();
        }
        
        cleanupListeners.clear();
    }
}
