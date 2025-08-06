package com.bearmod.monitor;

import android.util.Log;

import java.util.concurrent.Executors;
import java.util.concurrent.ScheduledExecutorService;
import java.util.concurrent.TimeUnit;
import java.util.concurrent.atomic.AtomicBoolean;

/**
 * Runtime monitoring and cleanup system for KeyAuth injection
 * Monitors injection status and handles automatic cleanup
 */
public class RuntimeMonitor {
    private static final String TAG = "RuntimeMonitor";
    
    private static RuntimeMonitor instance;
    private final ScheduledExecutorService scheduler;
    private final AtomicBoolean isMonitoring = new AtomicBoolean(false);
    private String currentTargetPackage;
    
    private RuntimeMonitor() {
        this.scheduler = Executors.newScheduledThreadPool(2);
    }
    
    public static RuntimeMonitor getInstance() {
        if (instance == null) {
            synchronized (RuntimeMonitor.class) {
                if (instance == null) {
                    instance = new RuntimeMonitor();
                }
            }
        }
        return instance;
    }
    
    /**
     * Start monitoring injection status
     */
    public void startMonitoring(String targetPackage) {
        if (isMonitoring.get()) {
            Log.w(TAG, "Monitoring already active for: " + currentTargetPackage);
            return;
        }
        
        this.currentTargetPackage = targetPackage;
        isMonitoring.set(true);
        
        Log.d(TAG, "Starting runtime monitoring for: " + targetPackage);
        
        // Schedule periodic status checks
        scheduler.scheduleAtFixedRate(this::checkInjectionStatus, 5, 10, TimeUnit.SECONDS);
        
        // Schedule automatic cleanup after maximum runtime
        scheduler.schedule(this::performAutomaticCleanup, 30, TimeUnit.MINUTES);
    }
    
    /**
     * Stop monitoring
     */
    public void stopMonitoring() {
        if (!isMonitoring.get()) {
            return;
        }
        
        isMonitoring.set(false);
        currentTargetPackage = null;
        
        Log.d(TAG, "Runtime monitoring stopped");
    }
    
    /**
     * Check injection status periodically
     */
    private void checkInjectionStatus() {
        if (!isMonitoring.get()) {
            return;
        }
        
        try {
            // Check if target app is still running
            boolean targetRunning = isTargetAppRunning(currentTargetPackage);
            
            if (!targetRunning) {
                Log.d(TAG, "Target app no longer running: " + currentTargetPackage);
                performAutomaticCleanup();
                return;
            }
            
            // Check injection health
            boolean injectionHealthy = checkInjectionHealth();
            
            if (!injectionHealthy) {
                Log.w(TAG, "Injection health check failed for: " + currentTargetPackage);
                // Could trigger re-injection or cleanup based on policy
            }
            
            Log.d(TAG, "Runtime status check completed - Target: " + targetRunning + ", Health: " + injectionHealthy);
            
        } catch (Exception e) {
            Log.e(TAG, "Error during status check", e);
        }
    }
    
    /**
     * Check if target app is running
     */
    private boolean isTargetAppRunning(String packageName) {
        try {
            // Use native method to check if process is running
            return nativeIsProcessRunning(packageName);
        } catch (Exception e) {
            Log.e(TAG, "Error checking if target app is running", e);
            return false;
        }
    }
    
    /**
     * Check injection health status
     */
    private boolean checkInjectionHealth() {
        try {
            // Use native method to verify injection is still active
            return nativeCheckInjectionHealth();
        } catch (Exception e) {
            Log.e(TAG, "Error checking injection health", e);
            return false;
        }
    }
    
    /**
     * Perform automatic cleanup
     */
    private void performAutomaticCleanup() {
        if (!isMonitoring.get()) {
            return;
        }
        
        Log.d(TAG, "Performing automatic cleanup");
        
        try {
            // Stop monitoring first
            stopMonitoring();
            
            // Cleanup native resources
            nativeCleanupResources();
            
            Log.d(TAG, "Automatic cleanup completed successfully");
            
        } catch (Exception e) {
            Log.e(TAG, "Error during automatic cleanup", e);
        }
    }
    
    /**
     * Get current monitoring status
     */
    public boolean isMonitoring() {
        return isMonitoring.get();
    }
    
    /**
     * Get current target package
     */
    public String getCurrentTarget() {
        return currentTargetPackage;
    }
    
    /**
     * Get monitoring statistics
     */
    public MonitoringStats getStats() {
        return new MonitoringStats(
            isMonitoring.get(),
            currentTargetPackage,
            System.currentTimeMillis()
        );
    }
    
    /**
     * Force cleanup (manual trigger)
     */
    public void forceCleanup() {
        Log.d(TAG, "Force cleanup triggered");
        performAutomaticCleanup();
    }
    
    /**
     * Shutdown monitoring system
     */
    public void shutdown() {
        stopMonitoring();
        scheduler.shutdown();
        
        try {
            if (!scheduler.awaitTermination(5, TimeUnit.SECONDS)) {
                scheduler.shutdownNow();
            }
        } catch (InterruptedException e) {
            scheduler.shutdownNow();
            Thread.currentThread().interrupt();
        }
        
        Log.d(TAG, "Runtime monitor shutdown completed");
    }
    
    /**
     * Monitoring statistics data class
     */
    public static class MonitoringStats {
        public final boolean isActive;
        public final String targetPackage;
        public final long timestamp;
        
        public MonitoringStats(boolean isActive, String targetPackage, long timestamp) {
            this.isActive = isActive;
            this.targetPackage = targetPackage;
            this.timestamp = timestamp;
        }
        
        @Override
        public String toString() {
            return "MonitoringStats{" +
                    "isActive=" + isActive +
                    ", targetPackage='" + targetPackage + '\'' +
                    ", timestamp=" + timestamp +
                    '}';
        }
    }
    
    // Native method declarations
    private native boolean nativeIsProcessRunning(String packageName);
    private native boolean nativeCheckInjectionHealth();
    private native void nativeCleanupResources();
    
    static {
        try {
            System.loadLibrary("bearmod"); // Load existing native library (correct name)
            Log.d(TAG, "Native library loaded for runtime monitoring");
        } catch (UnsatisfiedLinkError e) {
            Log.e(TAG, "Failed to load native library for monitoring", e);
        }
    }
}
