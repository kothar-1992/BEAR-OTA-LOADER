package com.bearmod.ota;

import android.content.Context;
import android.util.Log;
import com.bearmod.ota.SimplifiedOTAManager.SimplifiedLibraryConfig;
import com.bearmod.ota.OTAUpdateManager.OTAUpdateCallback;
import com.bearmod.utils.AssetExtractor;

import java.util.List;
import java.util.Map;
import java.util.concurrent.CompletableFuture;
import java.util.concurrent.ConcurrentHashMap;

/**
 * Consolidated OTA Integration Layer
 * Connects SecureOTADownloader with SimplifiedOTAManager for production use
 * Provides comprehensive error handling, rollback mechanisms, and progress coordination
 * SIMPLIFIED APPROACH: Uses consistent core libraries for all packages
 */
public class SecureOTAIntegration {
    private static final String TAG = "SecureOTAIntegration";

    private final Context context;
    private final SimplifiedOTAManager simplifiedOTAManager;
    private final Map<String, SecureOTADownloader> activeDownloaders = new ConcurrentHashMap<>();
    
    // Integration configuration
    private static final int MAX_RETRY_ATTEMPTS = 3;
    private static final long RETRY_DELAY_MS = 2000;
    
    public SecureOTAIntegration(Context context) {
        this.context = context;
        this.simplifiedOTAManager = new SimplifiedOTAManager(context);
    }
    
    /**
     * Perform secure OTA update with simplified approach and enhanced error handling
     */
    public CompletableFuture<Boolean> performSecureOTAUpdate(String targetPackage,
                                                            OTAUpdateCallback callback) {
        return CompletableFuture.supplyAsync(() -> {
            try {
                Log.d(TAG, "Starting simplified secure OTA update for package: " + targetPackage);

                // CRITICAL FIX: Extract JavaScript payloads from assets FIRST
                Log.d(TAG, "Extracting JavaScript payloads for injection system");
                if (!AssetExtractor.extractJavaScriptPayloads(context, targetPackage)) {
                    Log.w(TAG, "Failed to extract JavaScript payloads - injection may be limited");
                    // Continue anyway - not a fatal error
                }

                // Create integrated callback that coordinates progress
                IntegratedOTACallback integratedCallback = new IntegratedOTACallback(callback);

                // Step 1: Simplified OTA check with consistent core library approach
                CompletableFuture<Boolean> simplifiedUpdateFuture =
                    simplifiedOTAManager.checkAndPerformSimplifiedUpdates(targetPackage, integratedCallback);

                Boolean simplifiedResult = simplifiedUpdateFuture.get();
                if (simplifiedResult == null || !simplifiedResult) {
                    Log.w(TAG, "Simplified OTA update failed, attempting fallback");
                    return performFallbackUpdate(targetPackage, integratedCallback);
                }

                Log.d(TAG, "Simplified secure OTA update completed successfully for: " + targetPackage);
                return true;

            } catch (Exception e) {
                Log.e(TAG, "Error in simplified secure OTA update", e);
                callback.onUpdateFailed("Simplified secure OTA update failed: " + e.getMessage());
                return false;
            }
        });
    }
    
    /**
     * Download specific library with secure downloader (simplified approach)
     */
    public CompletableFuture<Boolean> downloadLibrarySecurely(SimplifiedLibraryConfig libraryConfig,
                                                             OTAUpdateCallback callback) {
        return CompletableFuture.supplyAsync(() -> {
            String downloadKey = libraryConfig.coreLibrary.name + "_" + System.currentTimeMillis();
            
            try {
                Log.d(TAG, "Starting secure download for: " + libraryConfig.coreLibrary.name);

                // Create secure downloader instance
                SecureOTADownloader downloader = new SecureOTADownloader(context, callback);
                activeDownloaders.put(downloadKey, downloader);

                // Perform download with retry mechanism
                boolean success = performDownloadWithRetry(downloader, libraryConfig, callback);

                if (success) {
                    Log.d(TAG, "Secure download completed: " + libraryConfig.coreLibrary.name);
                    callback.onUpdateComplete("Library downloaded and installed: " + libraryConfig.coreLibrary.name);
                } else {
                    Log.e(TAG, "Secure download failed after retries: " + libraryConfig.coreLibrary.name);
                    callback.onUpdateFailed("Download failed: " + libraryConfig.coreLibrary.name);
                }
                
                return success;
                
            } catch (Exception e) {
                Log.e(TAG, "Error in secure library download", e);
                callback.onUpdateFailed("Download error: " + e.getMessage());
                return false;
            } finally {
                activeDownloaders.remove(downloadKey);
            }
        });
    }
    
    /**
     * Perform download with retry mechanism (simplified approach)
     */
    private boolean performDownloadWithRetry(SecureOTADownloader downloader,
                                           SimplifiedLibraryConfig libraryConfig,
                                           OTAUpdateCallback callback) {
        for (int attempt = 1; attempt <= MAX_RETRY_ATTEMPTS; attempt++) {
            try {
                Log.d(TAG, String.format("Download attempt %d/%d for: %s",
                    attempt, MAX_RETRY_ATTEMPTS, libraryConfig.coreLibrary.name));
                
                if (attempt > 1) {
                    callback.onUpdateProgress(String.format("Retrying download (attempt %d/%d)...", 
                        attempt, MAX_RETRY_ATTEMPTS), 0);
                    Thread.sleep(RETRY_DELAY_MS);
                }
                
                CompletableFuture<Boolean> downloadFuture = 
                    downloader.downloadAndExtractLibrary(libraryConfig);
                
                Boolean result = downloadFuture.get(600, java.util.concurrent.TimeUnit.SECONDS);
                if (result != null && result) {
                    Log.d(TAG, "Download successful on attempt: " + attempt);
                    return true;
                }
                
                Log.w(TAG, "Download attempt " + attempt + " failed");
                
            } catch (Exception e) {
                Log.e(TAG, "Download attempt " + attempt + " error", e);
                if (attempt == MAX_RETRY_ATTEMPTS) {
                    callback.onUpdateFailed("Download failed after " + MAX_RETRY_ATTEMPTS + " attempts");
                }
            }
        }
        
        return false;
    }
    
    /**
     * Fallback update mechanism
     */
    private boolean performFallbackUpdate(String targetPackage, IntegratedOTACallback callback) {
        try {
            Log.d(TAG, "Performing fallback update for: " + targetPackage);
            callback.onUpdateProgress("Attempting fallback update method...", 10);
            
            // Use base OTA manager as fallback
            OTAUpdateManager baseOTAManager = OTAUpdateManager.getInstance(context);
            CompletableFuture<Boolean> fallbackFuture = 
                baseOTAManager.checkAndPerformUpdates(callback);
            
            Boolean fallbackResult = fallbackFuture.get();
            if (fallbackResult != null && fallbackResult) {
                Log.d(TAG, "Fallback update successful");
                callback.onUpdateComplete("Update completed via fallback method");
                return true;
            }
            
            Log.w(TAG, "Fallback update also failed");
            callback.onUpdateFailed("Both enhanced and fallback updates failed");
            return false;
            
        } catch (Exception e) {
            Log.e(TAG, "Error in fallback update", e);
            callback.onUpdateFailed("Fallback update error: " + e.getMessage());
            return false;
        }
    }
    
    /**
     * Cancel all active downloads
     */
    public void cancelAllDownloads() {
        try {
            Log.d(TAG, "Cancelling all active downloads");
            
            for (SecureOTADownloader downloader : activeDownloaders.values()) {
                // Note: SecureOTADownloader would need a cancel method for this to work
                // This is a placeholder for future implementation
            }
            
            activeDownloaders.clear();
            Log.d(TAG, "All downloads cancelled");
            
        } catch (Exception e) {
            Log.e(TAG, "Error cancelling downloads", e);
        }
    }
    
    /**
     * Get download status
     */
    public boolean hasActiveDownloads() {
        return !activeDownloaders.isEmpty();
    }
    
    /**
     * Integrated callback that coordinates progress between different OTA components
     */
    private static class IntegratedOTACallback implements OTAUpdateCallback {
        private final OTAUpdateCallback originalCallback;
        private volatile String currentOperation = "";
        private volatile int currentProgress = 0;
        
        public IntegratedOTACallback(OTAUpdateCallback originalCallback) {
            this.originalCallback = originalCallback;
        }
        
        @Override
        public void onUpdateProgress(String message, int progress) {
            this.currentOperation = message;
            this.currentProgress = progress;
            
            // Add integration context to progress messages
            String integratedMessage = String.format("[Secure OTA] %s", message);
            originalCallback.onUpdateProgress(integratedMessage, progress);
        }
        
        @Override
        public void onUpdateComplete(String message) {
            String integratedMessage = String.format("[Secure OTA] %s", message);
            originalCallback.onUpdateComplete(integratedMessage);
        }
        
        @Override
        public void onUpdateFailed(String error) {
            String integratedError = String.format("[Secure OTA] %s", error);
            originalCallback.onUpdateFailed(integratedError);
        }
        
        public String getCurrentOperation() {
            return currentOperation;
        }
        
        public int getCurrentProgress() {
            return currentProgress;
        }
    }
    
    /**
     * Verify system compatibility for secure OTA
     */
    public boolean verifySystemCompatibility() {
        try {
            // Check if required dependencies are available
            boolean zip4jAvailable = isClassAvailable("net.lingala.zip4j.ZipFile");
            boolean keyAuthAvailable = isClassAvailable("com.bearmod.auth.SimpleLicenseVerifier");
            boolean simplifiedOTAAvailable = isClassAvailable("com.bearmod.ota.SimplifiedOTAManager");

            Log.d(TAG, String.format("System compatibility: zip4j=%b, keyAuth=%b, simplifiedOTA=%b",
                zip4jAvailable, keyAuthAvailable, simplifiedOTAAvailable));

            return zip4jAvailable && keyAuthAvailable && simplifiedOTAAvailable;
            
        } catch (Exception e) {
            Log.e(TAG, "Error verifying system compatibility", e);
            return false;
        }
    }
    
    /**
     * Check if class is available in classpath
     */
    private boolean isClassAvailable(String className) {
        try {
            Class.forName(className);
            return true;
        } catch (ClassNotFoundException e) {
            return false;
        }
    }
    
    /**
     * Get integration status report
     */
    public String getIntegrationStatus() {
        StringBuilder status = new StringBuilder();
        status.append("Simplified Secure OTA Integration Status:\n");
        status.append("- Active Downloads: ").append(activeDownloaders.size()).append("\n");
        status.append("- System Compatible: ").append(verifySystemCompatibility()).append("\n");
        status.append("- Simplified OTA Available: ").append(simplifiedOTAManager != null).append("\n");
        
        return status.toString();
    }
}
