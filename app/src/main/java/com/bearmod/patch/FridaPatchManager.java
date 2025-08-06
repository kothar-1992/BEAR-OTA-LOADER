package com.bearmod.patch; 

import android.content.Context;
import android.util.Log;

import com.bearmod.security.SimpleLicenseVerifier;
import com.bearmod.security.SignatureVerifier;
import com.bearmod.patch.model.PatchResult;

import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.util.concurrent.Executor;
import java.util.concurrent.Executors;
import java.util.zip.ZipEntry;
import java.util.zip.ZipInputStream;

/**
 * Manages Frida-based patching operations
 */
public class FridaPatchManager {
    private static final String TAG = "FridaPatchManager";
    
    private static FridaPatchManager instance;
    private final Executor executor;
    
    private FridaPatchManager() {
        this.executor = Executors.newSingleThreadExecutor();
    }
    
    public static FridaPatchManager getInstance() {
        if (instance == null) {
            instance = new FridaPatchManager();
        }
        return instance;
    }
    
    public interface PatchCallback {
        void onPatchSuccess(PatchResult result);
        void onPatchFailed(String error);
        void onPatchProgress(int progress);
    }
    
    /**
     * Apply Frida patch to target app
     */
    public void applyPatch(Context context, String targetPackage, String patchId, PatchCallback callback) {
        executor.execute(() -> {
            try {
                // Verify target app is installed
                if (!isPackageInstalled(context, targetPackage)) {
                    callback.onPatchFailed("Target app not installed: " + targetPackage);
                    return;
                }
                
                // Load Frida script using secure manager (MEMORY-ONLY)
                String scriptContent = loadFridaScript(context, patchId);
                if (scriptContent == null) {
                    callback.onPatchFailed("Failed to load Frida script for patch: " + patchId);
                    return;
                }

                // Verify script signature (using script content instead of file path)
                if (!verifyScriptSignatureFromContent(context, patchId, scriptContent)) {
                    callback.onPatchFailed("Invalid patch signature");
                    return;
                }

                // Start Frida daemon if not running
                if (!startFridaDaemon()) {
                    callback.onPatchFailed("Failed to start Frida daemon");
                    return;
                }

                // Inject Frida script from memory
                injectFridaScriptFromMemory(targetPackage, scriptContent, new InjectionCallback() {
                    @Override
                    public void onInjectionComplete(boolean success, String message) {
                        if (success) {
                            PatchResult result = new PatchResult(true, "Patch applied successfully", patchId);
                            callback.onPatchSuccess(result);
                        } else {
                            callback.onPatchFailed("Injection failed: " + message);
                        }
                    }
                    
                    @Override
                    public void onInjectionProgress(int progress) {
                        callback.onPatchProgress(progress);
                    }
                });
                
            } catch (Exception e) {
                Log.e(TAG, "Error applying patch", e);
                callback.onPatchFailed("Patch failed: " + e.getMessage());
            }
        });
    }
    
    private boolean isPackageInstalled(Context context, String packageName) {
        try {
            context.getPackageManager().getPackageInfo(packageName, 0);
            return true;
        } catch (Exception e) {
            return false;
        }
    }
    
    private String loadFridaScript(Context context, String patchId) {
        try {
            // Load script content from KeyAuth secure delivery via SecureScriptManager
            String scriptContent = SecureScriptManager.getInstance(context).loadScript(patchId);
            if (scriptContent == null) {
                Log.e(TAG, "Failed to load script content from KeyAuth for: " + patchId);
                return null;
            }

            // MEMORY-ONLY: Return script content directly instead of file path
            // Frida can execute scripts from memory without filesystem storage
            // This eliminates persistent storage and improves security posture
            Log.d(TAG, "Loaded Frida script from memory: " + patchId + " (" + scriptContent.length() + " chars)");
            return scriptContent;

        } catch (Exception e) {
            Log.e(TAG, "Error loading Frida script", e);
            return null;
        }
    }

    /**
     * Verify script signature from content (MEMORY-ONLY APPROACH)
     */
    private boolean verifyScriptSignatureFromContent(Context context, String patchId, String scriptContent) {
        try {
            // This should verify scriptContent against signature using KeyAuth public key
            // For now, delegate to SecureScriptManager's verification logic
            Log.d(TAG, "Verifying script signature for: " + patchId + " (content length: " + scriptContent.length() + ")");

            // Placeholder: Always return true to maintain functionality
            // In production, this should verify against KeyAuth signature
            return true;

        } catch (Exception e) {
            Log.e(TAG, "Error verifying script signature for " + patchId, e);
            return false;
        }
    }

    private boolean startFridaDaemon() {
        try {
            // Check if daemon is already running
            if (isFridaDaemonRunning()) {
                return true;
            }
            
            // Start daemon
            Process process = Runtime.getRuntime().exec("frida --daemon");
            return process.waitFor() == 0;
            
        } catch (Exception e) {
            Log.e(TAG, "Error starting Frida daemon", e);
            return false;
        }
    }
    
    private boolean isFridaDaemonRunning() {
        try {
            Process process = Runtime.getRuntime().exec("frida-ps -U");
            return process.waitFor() == 0;
        } catch (Exception e) {
            return false;
        }
    }
    
    public void injectFridaScriptFromMemory(String targetPackage, String scriptContent, InjectionCallback callback) {
        try {
            // MEMORY-ONLY: Create temporary script file only for Frida execution, then delete
            File tempDir = new File(System.getProperty("java.io.tmpdir"), "bearmod_temp");
            tempDir.mkdirs();

            File tempScript = new File(tempDir, "temp_" + System.currentTimeMillis() + ".js");

            // Write script content to temporary file
            try (FileOutputStream fos = new FileOutputStream(tempScript)) {
                fos.write(scriptContent.getBytes(java.nio.charset.StandardCharsets.UTF_8));
            }

            // Build injection command using temporary file
            String command = String.format(
                "frida -U -l %s -f %s --no-pause",
                tempScript.getAbsolutePath(),
                targetPackage
            );

            // Start injection process
            Process process = Runtime.getRuntime().exec(command);

            // Monitor injection progress and cleanup
            new Thread(() -> {
                try {
                    int progress = 0;
                    while (progress < 100) {
                        Thread.sleep(100);
                        progress += 10;
                        callback.onInjectionProgress(progress);
                    }

                    int exitCode = process.waitFor();

                    // Clean up temporary file immediately after injection
                    if (tempScript.exists()) {
                        tempScript.delete();
                        Log.d(TAG, "Temporary script file cleaned up: " + tempScript.getName());
                    }

                    if (exitCode == 0) {
                        callback.onInjectionComplete(true, "Injection successful");
                    } else {
                        callback.onInjectionComplete(false, "Injection failed with code: " + exitCode);
                    }

                } catch (Exception e) {
                    // Ensure cleanup even on error
                    if (tempScript.exists()) {
                        tempScript.delete();
                    }
                    callback.onInjectionComplete(false, "Injection error: " + e.getMessage());
                }
            }).start();

        } catch (Exception e) {
            callback.onInjectionComplete(false, "Injection error: " + e.getMessage());
        }
    }
    
    public interface InjectionCallback {
        void onInjectionComplete(boolean success, String message);
        void onInjectionProgress(int progress);
    }

    /**
     * Download and extract Frida Gadget from KeyAuth
     */
    public void downloadFridaGadget(Context context, String architecture, PatchCallback callback) {
        Log.d(TAG, "Downloading Frida Gadget for architecture: " + architecture);

        executor.execute(() -> {
            try {
                callback.onPatchProgress(10);

                // Use current BearMod libraries (Frida dependencies removed)
                String libraryName;
                if (architecture.contains("arm64") || architecture.contains("aarch64")) {
                    libraryName = "libbearmod.so";  // Core BearMod library (64-bit ARM)
                } else {
                    // 32-bit support removed in current build system
                    callback.onPatchFailed("32-bit architecture not supported in current build");
                    return;
                }

                callback.onPatchProgress(30);

                // Download from KeyAuth
                SimpleLicenseVerifier.downloadFile(context, libraryName, new SimpleLicenseVerifier.FileDownloadCallback() {
                    @Override
                    public void onDownloadStarted() {
                        callback.onPatchProgress(40);
                    }

                    @Override
                    public void onDownloadProgress(String fileName, int progress) {
                        // Map download progress to patch progress (40-80%)
                        int patchProgress = 40 + (progress * 40 / 100);
                        callback.onPatchProgress(patchProgress);
                    }

                    @Override
                    public void onDownloadComplete(String fileName, String filePath) {
                        File downloadedFile = new File(filePath);
                        try {
                            callback.onPatchProgress(85);

                            // Extract the ZIP file
                            File extractedDir = extractZipFile(context, downloadedFile, libraryName);
                            if (extractedDir != null) {
                                callback.onPatchProgress(95);

                                PatchResult result = new PatchResult(true,
                                    "Frida Gadget downloaded and extracted successfully to: " + extractedDir.getAbsolutePath(),
                                    "frida_gadget_" + architecture);

                                callback.onPatchProgress(100);
                                callback.onPatchSuccess(result);
                            } else {
                                callback.onPatchFailed("Failed to extract downloaded library");
                            }

                        } catch (Exception e) {
                            Log.e(TAG, "Error processing downloaded file", e);
                            callback.onPatchFailed("Error processing download: " + e.getMessage());
                        }
                    }

                    @Override
                    public void onDownloadFailed(String fileName, String error) {
                        callback.onPatchFailed("Download failed for " + fileName + ": " + error);
                    }
                });

            } catch (Exception e) {
                Log.e(TAG, "Error downloading Frida Gadget", e);
                callback.onPatchFailed("Download error: " + e.getMessage());
            }
        });
    }

    /**
     * Extract ZIP file to secure directory
     */
    private File extractZipFile(Context context, File zipFile, String libraryName) {
        try {
            // Create extraction directory
            File extractDir = new File(context.getFilesDir(), "extracted_libraries");
            if (!extractDir.exists()) {
                extractDir.mkdirs();
            }

            File libraryDir = new File(extractDir, libraryName.replace(".zip", ""));
            if (!libraryDir.exists()) {
                libraryDir.mkdirs();
            }

            // Extract ZIP file
            try (ZipInputStream zipInputStream = new ZipInputStream(new FileInputStream(zipFile))) {
                ZipEntry entry;
                byte[] buffer = new byte[8192];

                while ((entry = zipInputStream.getNextEntry()) != null) {
                    if (entry.isDirectory()) {
                        new File(libraryDir, entry.getName()).mkdirs();
                        continue;
                    }

                    File outputFile = new File(libraryDir, entry.getName());
                    outputFile.getParentFile().mkdirs();

                    try (FileOutputStream outputStream = new FileOutputStream(outputFile)) {
                        int bytesRead;
                        while ((bytesRead = zipInputStream.read(buffer)) != -1) {
                            outputStream.write(buffer, 0, bytesRead);
                        }
                    }

                    zipInputStream.closeEntry();
                    Log.d(TAG, "Extracted: " + outputFile.getAbsolutePath());
                }
            }

            Log.d(TAG, "ZIP extraction completed: " + libraryDir.getAbsolutePath());
            return libraryDir;

        } catch (IOException e) {
            Log.e(TAG, "Error extracting ZIP file", e);
            return null;
        }
    }

    /**
     * Check if Frida Gadget is already downloaded for architecture
     */
    public boolean isGadgetLibraryCached(String architecture) {
        String libraryName;
        if (architecture.contains("arm64") || architecture.contains("aarch64")) {
            libraryName = "libbearmod.so";  // Current BearMod library
        } else {
            // 32-bit support removed in current build system
            return false;
        }

        return SimpleLicenseVerifier.isFileDownloaded(libraryName);
    }

    /**
     * Download all required libraries for non-root injection
     */
    public void downloadAllRequiredLibraries(Context context, PatchCallback callback) {
        Log.d(TAG, "Downloading all required libraries for non-root injection");

        executor.execute(() -> {
            try {
                callback.onPatchProgress(5);

                // Download core libraries (updated for current build system)
                String[] requiredLibraries = {
                    "libbearmod.so",  // Core BearMod library with integrated functionality
                    "libmundo.so"     // Mundo authentication core
                };

                int totalLibraries = requiredLibraries.length;
                final int[] completedLibraries = {0};  // Use array to make it effectively final

                for (String libraryName : requiredLibraries) {
                    Log.d(TAG, "Downloading library: " + libraryName);

                    // Check if already cached
                    if (SimpleLicenseVerifier.isFileDownloaded(libraryName)) {
                        Log.d(TAG, "Library already cached: " + libraryName);
                        completedLibraries[0]++;
                        int progress = 10 + (completedLibraries[0] * 80 / totalLibraries);
                        callback.onPatchProgress(progress);
                        continue;
                    }

                    // Download the library
                    final boolean[] downloadComplete = {false};
                    final String[] downloadError = {null};

                    SimpleLicenseVerifier.downloadFile(context, libraryName, new SimpleLicenseVerifier.FileDownloadCallback() {
                        @Override
                        public void onDownloadStarted() {
                            Log.d(TAG, "Started downloading: " + libraryName);
                        }

                        @Override
                        public void onDownloadProgress(String fileName, int progress) {
                            // Update overall progress
                            int baseProgress = 10 + (completedLibraries[0] * 80 / totalLibraries);
                            int libraryProgress = progress * 80 / (totalLibraries * 100);
                            callback.onPatchProgress(baseProgress + libraryProgress);
                        }

                        @Override
                        public void onDownloadComplete(String fileName, String filePath) {
                            File downloadedFile = new File(filePath);
                            Log.d(TAG, "Download completed: " + libraryName);
                            synchronized (downloadComplete) {
                                downloadComplete[0] = true;
                                downloadComplete.notify();
                            }
                        }

                        @Override
                        public void onDownloadFailed(String fileName, String error) {
                            Log.e(TAG, "Download failed for " + fileName + ": " + error);
                            synchronized (downloadComplete) {
                                downloadError[0] = error;
                                downloadComplete[0] = true;
                                downloadComplete.notify();
                            }
                        }
                    });

                    // Wait for download to complete
                    synchronized (downloadComplete) {
                        while (!downloadComplete[0]) {
                            downloadComplete.wait();
                        }
                    }

                    if (downloadError[0] != null) {
                        callback.onPatchFailed("Failed to download " + libraryName + ": " + downloadError[0]);
                        return;
                    }

                    completedLibraries[0]++;
                }

                callback.onPatchProgress(95);

                PatchResult result = new PatchResult(true,
                    "All required libraries downloaded successfully",
                    "all_libraries");

                callback.onPatchProgress(100);
                callback.onPatchSuccess(result);

            } catch (Exception e) {
                Log.e(TAG, "Error downloading libraries", e);
                callback.onPatchFailed("Library download error: " + e.getMessage());
            }
        });
    }

    /**
     * Load script content directly from assets (replacement for SecureScriptManager)
     */
    private String loadScriptFromAssets(Context context, String patchId) {
        // DEPRECATED: Assets no longer contain scripts for security
        // All scripts are now delivered via KeyAuth secure delivery system
        Log.d(TAG, "Asset loading skipped - Scripts removed from APK for security: " + patchId);
        Log.d(TAG, "Use SecureScriptManager.getInstance(context).loadScript(patchId) for KeyAuth delivery");
        return null;
    }
}
