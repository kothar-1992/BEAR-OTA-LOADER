package com.bearmod.monitor;

import android.app.ActivityManager;
import android.content.Context;
import android.os.Handler;
import android.os.Looper;
import android.util.Log;

import java.util.List;
import java.util.concurrent.CopyOnWriteArrayList;
import java.util.concurrent.Executor;
import java.util.concurrent.Executors;
import java.util.concurrent.ScheduledExecutorService;
import java.util.concurrent.TimeUnit;

/**
 * Monitors target application processes and manages injection timing
 */
public class ProcessMonitor {
    private static final String TAG = "ProcessMonitor";
    
    private static ProcessMonitor instance;
    private final Context context;
    private final ScheduledExecutorService scheduler;
    private final Handler mainHandler;
    private final List<ProcessListener> listeners;
    
    private boolean isMonitoring = false;
    private String targetPackage;
    private int monitoringInterval = 2000; // 2 seconds
    
    private ProcessMonitor(Context context) {
        this.context = context.getApplicationContext();
        this.scheduler = Executors.newScheduledThreadPool(2);
        this.mainHandler = new Handler(Looper.getMainLooper());
        this.listeners = new CopyOnWriteArrayList<>();
    }
    
    public static ProcessMonitor getInstance(Context context) {
        if (instance == null) {
            instance = new ProcessMonitor(context);
        }
        return instance;
    }
    
    public interface ProcessListener {
        void onTargetProcessStarted(String packageName, int pid);
        void onTargetProcessStopped(String packageName);
        void onTargetProcessDetected(String packageName, ProcessInfo processInfo);
        void onMonitoringStarted(String packageName);
        void onMonitoringStopped(String packageName);
    }
    
    /**
     * Process information container
     */
    public static class ProcessInfo {
        public final String packageName;
        public final String processName;
        public final int pid;
        public final int uid;
        public final long startTime;
        public final boolean isRunning;
        
        public ProcessInfo(String packageName, String processName, int pid, int uid, boolean isRunning) {
            this.packageName = packageName;
            this.processName = processName;
            this.pid = pid;
            this.uid = uid;
            this.startTime = System.currentTimeMillis();
            this.isRunning = isRunning;
        }
        
        @Override
        public String toString() {
            return "ProcessInfo{" +
                "packageName='" + packageName + '\'' +
                ", processName='" + processName + '\'' +
                ", pid=" + pid +
                ", uid=" + uid +
                ", isRunning=" + isRunning +
                '}';
        }
    }
    
    /**
     * Start monitoring target package
     */
    public void startMonitoring(String packageName) {
        if (isMonitoring && packageName.equals(targetPackage)) {
            Log.d(TAG, "Already monitoring: " + packageName);
            return;
        }
        
        stopMonitoring();
        
        this.targetPackage = packageName;
        this.isMonitoring = true;
        
        Log.d(TAG, "Starting process monitoring for: " + packageName);
        
        // Start monitoring task
        scheduler.scheduleWithFixedDelay(this::monitorProcess, 0, monitoringInterval, TimeUnit.MILLISECONDS);
        
        // Notify listeners
        notifyMonitoringStarted(packageName);
    }
    
    /**
     * Stop monitoring
     */
    public void stopMonitoring() {
        if (!isMonitoring) {
            return;
        }
        
        Log.d(TAG, "Stopping process monitoring for: " + targetPackage);
        
        isMonitoring = false;
        
        // Notify listeners
        if (targetPackage != null) {
            notifyMonitoringStopped(targetPackage);
        }
        
        targetPackage = null;
    }
    
    /**
     * Monitor process execution
     */
    private void monitorProcess() {
        if (!isMonitoring || targetPackage == null) {
            return;
        }
        
        try {
            ProcessInfo processInfo = getProcessInfo(targetPackage);
            
            if (processInfo != null && processInfo.isRunning) {
                // Target process is running
                notifyTargetProcessDetected(targetPackage, processInfo);
                
                // Check if this is a new process start
                if (isNewProcessStart(processInfo)) {
                    notifyTargetProcessStarted(targetPackage, processInfo.pid);
                }
            } else {
                // Target process is not running
                if (wasProcessRunning(targetPackage)) {
                    notifyTargetProcessStopped(targetPackage);
                }
            }
            
        } catch (Exception e) {
            Log.e(TAG, "Error monitoring process", e);
        }
    }
    
    /**
     * Get process information for package
     */
    private ProcessInfo getProcessInfo(String packageName) {
        try {
            ActivityManager am = (ActivityManager) context.getSystemService(Context.ACTIVITY_SERVICE);
            if (am == null) {
                return null;
            }
            
            List<ActivityManager.RunningAppProcessInfo> runningProcesses = am.getRunningAppProcesses();
            if (runningProcesses == null) {
                return null;
            }
            
            for (ActivityManager.RunningAppProcessInfo processInfo : runningProcesses) {
                if (packageName.equals(processInfo.processName) || 
                    (processInfo.pkgList != null && java.util.Arrays.asList(processInfo.pkgList).contains(packageName))) {
                    
                    return new ProcessInfo(
                        packageName,
                        processInfo.processName,
                        processInfo.pid,
                        processInfo.uid,
                        true
                    );
                }
            }
            
            return null;
            
        } catch (Exception e) {
            Log.e(TAG, "Error getting process info", e);
            return null;
        }
    }
    
    /**
     * Check if this is a new process start
     */
    private boolean isNewProcessStart(ProcessInfo processInfo) {
        // Simple implementation - in real scenario, you'd track previous PIDs
        return true;
    }
    
    /**
     * Check if process was previously running
     */
    private boolean wasProcessRunning(String packageName) {
        // Simple implementation - in real scenario, you'd track previous state
        return false;
    }
    
    /**
     * Add process listener
     */
    public void addListener(ProcessListener listener) {
        if (listener != null && !listeners.contains(listener)) {
            listeners.add(listener);
            Log.d(TAG, "Added process listener: " + listener.getClass().getSimpleName());
        }
    }
    
    /**
     * Remove process listener
     */
    public void removeListener(ProcessListener listener) {
        if (listener != null) {
            listeners.remove(listener);
            Log.d(TAG, "Removed process listener: " + listener.getClass().getSimpleName());
        }
    }
    
    /**
     * Set monitoring interval
     */
    public void setMonitoringInterval(int intervalMs) {
        this.monitoringInterval = Math.max(500, intervalMs); // Minimum 500ms
        Log.d(TAG, "Monitoring interval set to: " + this.monitoringInterval + "ms");
        
        // Restart monitoring with new interval if currently monitoring
        if (isMonitoring && targetPackage != null) {
            String currentTarget = targetPackage;
            stopMonitoring();
            startMonitoring(currentTarget);
        }
    }
    
    /**
     * Get current monitoring status
     */
    public boolean isMonitoring() {
        return isMonitoring;
    }
    
    /**
     * Get current target package
     */
    public String getTargetPackage() {
        return targetPackage;
    }
    
    /**
     * Check if specific package is currently running
     */
    public boolean isPackageRunning(String packageName) {
        ProcessInfo processInfo = getProcessInfo(packageName);
        return processInfo != null && processInfo.isRunning;
    }
    
    /**
     * Get all running processes
     */
    public List<ProcessInfo> getAllRunningProcesses() {
        List<ProcessInfo> processes = new java.util.ArrayList<>();
        
        try {
            ActivityManager am = (ActivityManager) context.getSystemService(Context.ACTIVITY_SERVICE);
            if (am == null) {
                return processes;
            }
            
            List<ActivityManager.RunningAppProcessInfo> runningProcesses = am.getRunningAppProcesses();
            if (runningProcesses == null) {
                return processes;
            }
            
            for (ActivityManager.RunningAppProcessInfo processInfo : runningProcesses) {
                processes.add(new ProcessInfo(
                    processInfo.processName,
                    processInfo.processName,
                    processInfo.pid,
                    processInfo.uid,
                    true
                ));
            }
            
        } catch (Exception e) {
            Log.e(TAG, "Error getting all running processes", e);
        }
        
        return processes;
    }
    
    // Notification methods
    private void notifyTargetProcessStarted(String packageName, int pid) {
        mainHandler.post(() -> {
            for (ProcessListener listener : listeners) {
                try {
                    listener.onTargetProcessStarted(packageName, pid);
                } catch (Exception e) {
                    Log.e(TAG, "Error notifying listener", e);
                }
            }
        });
    }
    
    private void notifyTargetProcessStopped(String packageName) {
        mainHandler.post(() -> {
            for (ProcessListener listener : listeners) {
                try {
                    listener.onTargetProcessStopped(packageName);
                } catch (Exception e) {
                    Log.e(TAG, "Error notifying listener", e);
                }
            }
        });
    }
    
    private void notifyTargetProcessDetected(String packageName, ProcessInfo processInfo) {
        mainHandler.post(() -> {
            for (ProcessListener listener : listeners) {
                try {
                    listener.onTargetProcessDetected(packageName, processInfo);
                } catch (Exception e) {
                    Log.e(TAG, "Error notifying listener", e);
                }
            }
        });
    }
    
    private void notifyMonitoringStarted(String packageName) {
        mainHandler.post(() -> {
            for (ProcessListener listener : listeners) {
                try {
                    listener.onMonitoringStarted(packageName);
                } catch (Exception e) {
                    Log.e(TAG, "Error notifying listener", e);
                }
            }
        });
    }
    
    private void notifyMonitoringStopped(String packageName) {
        mainHandler.post(() -> {
            for (ProcessListener listener : listeners) {
                try {
                    listener.onMonitoringStopped(packageName);
                } catch (Exception e) {
                    Log.e(TAG, "Error notifying listener", e);
                }
            }
        });
    }
    
    /**
     * Cleanup resources
     */
    public void cleanup() {
        stopMonitoring();
        listeners.clear();
        
        if (!scheduler.isShutdown()) {
            scheduler.shutdown();
            try {
                if (!scheduler.awaitTermination(5, TimeUnit.SECONDS)) {
                    scheduler.shutdownNow();
                }
            } catch (InterruptedException e) {
                scheduler.shutdownNow();
                Thread.currentThread().interrupt();
            }
        }
        
        Log.d(TAG, "ProcessMonitor cleanup completed");
    }
}
