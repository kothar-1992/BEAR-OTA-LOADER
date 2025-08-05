package com.bearmod.injection;

import android.util.Log;

import java.util.concurrent.atomic.AtomicBoolean;
import java.util.concurrent.atomic.AtomicReference;

/**
 * Injection Coordinator - Prevents concurrent injection attempts across all managers
 * Ensures only one injection process is active at a time
 * Provides global injection state management for HybridInjectionManager, InjectionManager, and KeyAuthInjectionManager
 */
public class InjectionCoordinator {
    private static final String TAG = "InjectionCoordinator";
    
    private static final AtomicBoolean globalInjectionActive = new AtomicBoolean(false);
    private static final AtomicReference<String> currentTargetPackage = new AtomicReference<>(null);
    private static final AtomicReference<String> currentInjectionManager = new AtomicReference<>(null);
    private static final AtomicReference<Long> injectionStartTime = new AtomicReference<>(null);
    
    // Injection timeout (5 minutes)
    private static final long INJECTION_TIMEOUT_MS = 5 * 60 * 1000;
    
    /**
     * Attempt to start an injection process
     * @param managerName Name of the manager requesting injection
     * @param targetPackage Target package for injection
     * @return true if injection was successfully started, false if another injection is active
     */
    public static boolean startInjection(String managerName, String targetPackage) {
        // Check for timeout of existing injection
        checkAndClearTimeoutInjection();
        
        if (globalInjectionActive.compareAndSet(false, true)) {
            currentTargetPackage.set(targetPackage);
            currentInjectionManager.set(managerName);
            injectionStartTime.set(System.currentTimeMillis());
            
            Log.d(TAG, "Injection started by " + managerName + " for package: " + targetPackage);
            return true;
        } else {
            String activeManager = currentInjectionManager.get();
            String activePackage = currentTargetPackage.get();
            Log.w(TAG, "Injection already active by " + activeManager + " for package: " + activePackage + 
                  ". Cannot start new injection by " + managerName + " for " + targetPackage);
            return false;
        }
    }
    
    /**
     * Stop the current injection process
     * @param managerName Name of the manager stopping injection (must match the one that started it)
     * @return true if injection was successfully stopped, false if not authorized or no injection active
     */
    public static boolean stopInjection(String managerName) {
        String activeManager = currentInjectionManager.get();
        
        if (activeManager == null || !activeManager.equals(managerName)) {
            Log.w(TAG, "Unauthorized injection stop attempt by " + managerName + 
                  ". Active manager: " + activeManager);
            return false;
        }
        
        if (globalInjectionActive.compareAndSet(true, false)) {
            String targetPackage = currentTargetPackage.get();
            Long startTime = injectionStartTime.get();
            long duration = startTime != null ? System.currentTimeMillis() - startTime : 0;
            
            currentTargetPackage.set(null);
            currentInjectionManager.set(null);
            injectionStartTime.set(null);
            
            Log.d(TAG, "Injection stopped by " + managerName + " for package: " + targetPackage + 
                  " (duration: " + duration + "ms)");
            return true;
        } else {
            Log.w(TAG, "No active injection to stop by " + managerName);
            return false;
        }
    }
    
    /**
     * Force stop any active injection (for emergency scenarios)
     * @param reason Reason for force stop
     */
    public static void forceStopInjection(String reason) {
        if (globalInjectionActive.get()) {
            String activeManager = currentInjectionManager.get();
            String activePackage = currentTargetPackage.get();
            
            Log.w(TAG, "Force stopping injection by " + activeManager + " for package: " + activePackage + 
                  ". Reason: " + reason);
            
            globalInjectionActive.set(false);
            currentTargetPackage.set(null);
            currentInjectionManager.set(null);
            injectionStartTime.set(null);
        }
    }
    
    /**
     * Check if any injection is currently active
     */
    public static boolean isInjectionActive() {
        checkAndClearTimeoutInjection();
        return globalInjectionActive.get();
    }
    
    /**
     * Get the current target package being injected
     */
    public static String getCurrentTargetPackage() {
        return currentTargetPackage.get();
    }
    
    /**
     * Get the name of the manager currently performing injection
     */
    public static String getCurrentInjectionManager() {
        return currentInjectionManager.get();
    }
    
    /**
     * Get injection duration in milliseconds
     */
    public static long getInjectionDuration() {
        Long startTime = injectionStartTime.get();
        if (startTime == null) {
            return 0;
        }
        return System.currentTimeMillis() - startTime;
    }
    
    /**
     * Get injection status for debugging
     */
    public static String getInjectionStatus() {
        if (!globalInjectionActive.get()) {
            return "No active injection";
        }
        
        String manager = currentInjectionManager.get();
        String targetPackage = currentTargetPackage.get();
        long duration = getInjectionDuration();
        
        return "Active injection by " + manager + " for " + targetPackage + 
               " (duration: " + duration + "ms)";
    }
    
    /**
     * Check if current injection has timed out and clear it if necessary
     */
    private static void checkAndClearTimeoutInjection() {
        if (!globalInjectionActive.get()) {
            return;
        }
        
        Long startTime = injectionStartTime.get();
        if (startTime != null && (System.currentTimeMillis() - startTime) > INJECTION_TIMEOUT_MS) {
            String activeManager = currentInjectionManager.get();
            String activePackage = currentTargetPackage.get();
            
            Log.w(TAG, "Injection timeout detected. Clearing injection by " + activeManager + 
                  " for package: " + activePackage);
            
            forceStopInjection("Timeout after " + INJECTION_TIMEOUT_MS + "ms");
        }
    }
    
    /**
     * Check if a specific manager can perform injection
     * @param managerName Name of the manager
     * @param targetPackage Target package
     * @return true if injection can proceed, false otherwise
     */
    public static boolean canPerformInjection(String managerName, String targetPackage) {
        checkAndClearTimeoutInjection();
        
        if (!globalInjectionActive.get()) {
            return true;
        }
        
        // Allow the same manager to continue with the same target package
        String activeManager = currentInjectionManager.get();
        String activePackage = currentTargetPackage.get();
        
        return managerName.equals(activeManager) && targetPackage.equals(activePackage);
    }
    
    /**
     * Standard injection error codes for coordination
     */
    public enum InjectionError {
        LIBRARY_NOT_LOADED("Native library not loaded"),
        TARGET_PACKAGE_INVALID("Target package is invalid"),
        INJECTION_ALREADY_ACTIVE("Another injection is already active"),
        NATIVE_METHOD_FAILED("Native method execution failed"),
        PERMISSION_DENIED("Permission denied for injection"),
        NETWORK_ERROR("Network error during OTA operations"),
        AUTHENTICATION_FAILED("Authentication failed"),
        INJECTION_TIMEOUT("Injection operation timed out"),
        UNKNOWN_ERROR("Unknown error occurred");
        
        private final String description;
        
        InjectionError(String description) {
            this.description = description;
        }
        
        public String getDescription() {
            return description;
        }
    }
}
