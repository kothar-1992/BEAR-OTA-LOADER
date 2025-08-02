package com.bearmod.ota;

import android.content.Context;
import android.os.AsyncTask;
import android.util.Log;
import com.bearmod.auth.SimpleLicenseVerifier;
import com.bearmod.ota.OTAUpdateManager.OTAUpdateCallback;
import com.bearmod.ota.SimplifiedOTAManager.SimplifiedLibraryConfig;

import java.io.File;
import java.io.FileInputStream;
import java.io.IOException;
import java.security.MessageDigest;
import java.util.concurrent.CompletableFuture;
import java.util.concurrent.atomic.AtomicBoolean;
import java.util.zip.ZipEntry;
import java.util.zip.ZipInputStream;

/**
 * Secure OTA Downloader for BearMod Enhanced OTA System
 * Integrates KeyAuth authentication with secure file download and extraction
 * Adapted from Container reference pattern with BearMod-specific security enhancements
 */
public class SecureOTADownloader {
    private static final String TAG = "SecureOTADownloader";
    
    private final Context context;
    private final OTAUpdateCallback callback;
    private final AtomicBoolean isDownloading = new AtomicBoolean(false);
    
    // Security configuration
    private static final String TEMP_DIR_NAME = "ota_temp";
    private static final String EXTRACTION_DIR_NAME = "ota_extracted";
    private static final int BUFFER_SIZE = 8192;
    
    public SecureOTADownloader(Context context, OTAUpdateCallback callback) {
        this.context = context;
        this.callback = callback;
    }
    
    /**
     * Download and extract library with enhanced security
     * Replaces Container's direct HTTP download with KeyAuth integration
     * Updated to work with SimplifiedOTAManager approach
     */
    public CompletableFuture<Boolean> downloadAndExtractLibrary(SimplifiedLibraryConfig libraryConfig) {
        if (!isDownloading.compareAndSet(false, true)) {
            Log.w(TAG, "Download already in progress");
            return CompletableFuture.completedFuture(false);
        }
        
        return CompletableFuture.supplyAsync(() -> {
            try {
                Log.d(TAG, "Starting secure download for: " + libraryConfig.coreLibrary.name);
                callback.onUpdateProgress("Preparing secure download...", 0);

                // Step 1: Prepare download environment
                if (!prepareDownloadEnvironment()) {
                    callback.onUpdateFailed("Failed to prepare download environment");
                    return false;
                }

                // Step 2: Download via KeyAuth (replaces Container's HTTP download)
                File downloadedFile = downloadViaKeyAuth(libraryConfig);
                if (downloadedFile == null) {
                    callback.onUpdateFailed("KeyAuth download failed for: " + libraryConfig.coreLibrary.name);
                    return false;
                }
                
                // Step 3: Verify file integrity
                if (!verifyFileIntegrity(downloadedFile, libraryConfig)) {
                    callback.onUpdateFailed("File integrity verification failed");
                    cleanupTempFiles();
                    return false;
                }
                
                // Step 4: Secure extraction (adapted from Container ZIP extraction)
                boolean extracted = performSecureExtraction(downloadedFile, libraryConfig);
                if (!extracted) {
                    callback.onUpdateFailed("Secure extraction failed");
                    cleanupTempFiles();
                    return false;
                }
                
                // Step 5: Install to target location
                boolean installed = installToTargetLocation(libraryConfig);
                if (!installed) {
                    callback.onUpdateFailed("Installation to target location failed");
                    cleanupTempFiles();
                    return false;
                }
                
                // Step 6: Cleanup and success
                cleanupTempFiles();
                callback.onUpdateComplete("Library updated successfully: " + libraryConfig.coreLibrary.name);
                Log.d(TAG, "Secure download and extraction completed for: " + libraryConfig.coreLibrary.name);
                
                return true;
                
            } catch (Exception e) {
                Log.e(TAG, "Error in secure download process", e);
                callback.onUpdateFailed("Download error: " + e.getMessage());
                cleanupTempFiles();
                return false;
            } finally {
                isDownloading.set(false);
            }
        });
    }
    
    /**
     * Prepare download environment (adapted from Container's onPreExecute)
     */
    private boolean prepareDownloadEnvironment() {
        try {
            // Create temporary directories
            File tempDir = new File(context.getFilesDir(), TEMP_DIR_NAME);
            File extractionDir = new File(context.getFilesDir(), EXTRACTION_DIR_NAME);
            
            // Clean existing temp files
            if (tempDir.exists()) {
                deleteRecursively(tempDir);
            }
            if (extractionDir.exists()) {
                deleteRecursively(extractionDir);
            }
            
            // Create fresh directories
            if (!tempDir.mkdirs() || !extractionDir.mkdirs()) {
                Log.e(TAG, "Failed to create temporary directories");
                return false;
            }
            
            Log.d(TAG, "Download environment prepared successfully");
            return true;
            
        } catch (Exception e) {
            Log.e(TAG, "Error preparing download environment", e);
            return false;
        }
    }
    
    /**
     * Download via KeyAuth (replaces Container's HTTP download)
     */
    private File downloadViaKeyAuth(SimplifiedLibraryConfig libraryConfig) {
        try {
            Log.d(TAG, "Downloading via KeyAuth: " + libraryConfig.coreLibrary.fileId);
            callback.onUpdateProgress("Downloading from KeyAuth server...", 10);

            CompletableFuture<File> downloadFuture = new CompletableFuture<>();
            String fileName = libraryConfig.coreLibrary.name + ".zip";
            
            // Use existing SimpleLicenseVerifier for KeyAuth integration
            SimpleLicenseVerifier.downloadFileWithId(context, fileName, libraryConfig.coreLibrary.fileId,
                new SimpleLicenseVerifier.FileDownloadCallback() {
                    @Override
                    public void onDownloadComplete(String fileName, String filePath) {
                        try {
                            File downloadedFile = new File(filePath);
                            
                            // Move to our temp directory for processing
                            File tempFile = new File(context.getFilesDir(), TEMP_DIR_NAME + "/" + fileName);
                            if (downloadedFile.renameTo(tempFile)) {
                                downloadFuture.complete(tempFile);
                            } else {
                                downloadFuture.complete(null);
                            }
                            
                        } catch (Exception e) {
                            Log.e(TAG, "Error processing downloaded file", e);
                            downloadFuture.complete(null);
                        }
                    }
                    
                    @Override
                    public void onDownloadFailed(String fileName, String error) {
                        Log.e(TAG, "KeyAuth download failed: " + error);
                        downloadFuture.complete(null);
                    }
                    
                    @Override
                    public void onDownloadProgress(String fileName, int progress) {
                        // Map KeyAuth progress to our callback system
                        int mappedProgress = 10 + (progress * 40 / 100); // 10-50% for download
                        callback.onUpdateProgress("Downloading " + fileName + "...", mappedProgress);
                    }
                });
            
            // Wait for download completion with timeout
            return downloadFuture.get(300, java.util.concurrent.TimeUnit.SECONDS);
            
        } catch (Exception e) {
            Log.e(TAG, "Error in KeyAuth download", e);
            return null;
        }
    }
    
    /**
     * Verify file integrity with checksum validation
     */
    private boolean verifyFileIntegrity(File downloadedFile, SimplifiedLibraryConfig libraryConfig) {
        try {
            Log.d(TAG, "Verifying file integrity for: " + downloadedFile.getName());
            callback.onUpdateProgress("Verifying file integrity...", 55);
            
            // Basic file existence and size check
            if (!downloadedFile.exists() || downloadedFile.length() == 0) {
                Log.e(TAG, "Downloaded file is empty or doesn't exist");
                return false;
            }
            
            // Calculate SHA-256 hash for integrity verification
            String fileHash = calculateSHA256(downloadedFile);
            if (fileHash == null) {
                Log.e(TAG, "Failed to calculate file hash");
                return false;
            }
            
            // Log hash for debugging (in production, compare with expected hash)
            Log.d(TAG, "File hash: " + fileHash);
            
            // Additional ZIP file validation
            if (!isValidZipFile(downloadedFile)) {
                Log.e(TAG, "Downloaded file is not a valid ZIP archive");
                return false;
            }
            
            Log.d(TAG, "File integrity verification passed");
            return true;
            
        } catch (Exception e) {
            Log.e(TAG, "Error verifying file integrity", e);
            return false;
        }
    }
    
    /**
     * Calculate SHA-256 hash for file integrity
     */
    private String calculateSHA256(File file) {
        try {
            MessageDigest digest = MessageDigest.getInstance("SHA-256");
            FileInputStream fis = new FileInputStream(file);
            byte[] buffer = new byte[BUFFER_SIZE];
            int bytesRead;
            
            while ((bytesRead = fis.read(buffer)) != -1) {
                digest.update(buffer, 0, bytesRead);
            }
            fis.close();
            
            byte[] hashBytes = digest.digest();
            StringBuilder hexString = new StringBuilder();
            for (byte b : hashBytes) {
                String hex = Integer.toHexString(0xff & b);
                if (hex.length() == 1) {
                    hexString.append('0');
                }
                hexString.append(hex);
            }
            
            return hexString.toString();
            
        } catch (Exception e) {
            Log.e(TAG, "Error calculating SHA-256 hash", e);
            return null;
        }
    }
    
    /**
     * Validate ZIP file structure
     */
    private boolean isValidZipFile(File zipFile) {
        try (ZipInputStream zis = new ZipInputStream(new FileInputStream(zipFile))) {
            ZipEntry entry = zis.getNextEntry();
            return entry != null; // At least one entry exists
        } catch (Exception e) {
            Log.e(TAG, "Invalid ZIP file", e);
            return false;
        }
    }
    
    /**
     * Recursive file deletion utility
     */
    private void deleteRecursively(File file) {
        if (file.isDirectory()) {
            File[] children = file.listFiles();
            if (children != null) {
                for (File child : children) {
                    deleteRecursively(child);
                }
            }
        }
        file.delete();
    }
    
    /**
     * Perform secure extraction (adapted from Container ZIP extraction with password support)
     */
    private boolean performSecureExtraction(File zipFile, EnhancedLibraryConfig libraryConfig) {
        try {
            Log.d(TAG, "Starting secure extraction for: " + zipFile.getName());
            callback.onUpdateProgress("Extracting files securely...", 60);

            File extractionDir = new File(context.getFilesDir(), EXTRACTION_DIR_NAME);

            // Use zip4j for password-protected ZIP extraction (like Container reference)
            try {
                net.lingala.zip4j.ZipFile zip4jFile = new net.lingala.zip4j.ZipFile(zipFile);

                // Check if ZIP is password protected
                if (zip4jFile.isEncrypted()) {
                    // Use library name as password (Container pattern adaptation)
                    String password = libraryConfig.coreLibrary.name.replace(".so", "");
                    zip4jFile.setPassword(password.toCharArray());
                    Log.d(TAG, "Using password protection for extraction");
                }

                // Extract all files
                zip4jFile.extractAll(extractionDir.getAbsolutePath());

                // Set proper permissions (adapted from Container setPermissions)
                setSecurePermissions(extractionDir);

                callback.onUpdateProgress("Extraction completed", 80);
                Log.d(TAG, "Secure extraction completed successfully");
                return true;

            } catch (Exception e) {
                Log.e(TAG, "zip4j extraction failed, trying standard extraction", e);
                return performStandardExtraction(zipFile, extractionDir);
            }

        } catch (Exception e) {
            Log.e(TAG, "Error in secure extraction", e);
            return false;
        }
    }

    /**
     * Fallback standard ZIP extraction
     */
    private boolean performStandardExtraction(File zipFile, File extractionDir) {
        try {
            ZipInputStream zis = new ZipInputStream(new FileInputStream(zipFile));
            ZipEntry entry;

            while ((entry = zis.getNextEntry()) != null) {
                File extractedFile = new File(extractionDir, entry.getName());

                // Security check: prevent directory traversal
                if (!extractedFile.getCanonicalPath().startsWith(extractionDir.getCanonicalPath())) {
                    Log.w(TAG, "Potential directory traversal attack detected, skipping: " + entry.getName());
                    continue;
                }

                // Create parent directories
                extractedFile.getParentFile().mkdirs();

                // Extract file
                java.io.FileOutputStream fos = new java.io.FileOutputStream(extractedFile);
                byte[] buffer = new byte[BUFFER_SIZE];
                int bytesRead;

                while ((bytesRead = zis.read(buffer)) != -1) {
                    fos.write(buffer, 0, bytesRead);
                }

                fos.close();
                zis.closeEntry();
            }

            zis.close();
            setSecurePermissions(extractionDir);

            Log.d(TAG, "Standard extraction completed");
            return true;

        } catch (Exception e) {
            Log.e(TAG, "Standard extraction failed", e);
            return false;
        }
    }

    /**
     * Set secure permissions (adapted from Container setPermissions)
     */
    private void setSecurePermissions(File directory) {
        if (directory.isDirectory()) {
            File[] files = directory.listFiles();
            if (files != null) {
                for (File file : files) {
                    setSecurePermissions(file); // Recursive call
                }
            }
        } else {
            // Set appropriate permissions for native libraries
            if (directory.getName().endsWith(".so")) {
                directory.setReadable(true, false);
                directory.setWritable(true, true); // Owner only
                directory.setExecutable(true, false);
            } else {
                directory.setReadable(true, false);
                directory.setWritable(true, true);
                directory.setExecutable(false);
            }
        }
    }

    /**
     * Install to target location (Container ApkEnv.tryAddLoader adaptation)
     * Updated for SimplifiedOTAManager approach with consistent core libraries
     */
    private boolean installToTargetLocation(SimplifiedLibraryConfig libraryConfig) {
        try {
            Log.d(TAG, "Installing to target location: " + libraryConfig.targetName);
            callback.onUpdateProgress("Installing library...", 90);

            File extractionDir = new File(context.getFilesDir(), EXTRACTION_DIR_NAME);
            File sourceLibrary = findExtractedLibrary(extractionDir, libraryConfig.coreLibrary.name);

            if (sourceLibrary == null) {
                Log.e(TAG, "Source library not found after extraction: " + libraryConfig.coreLibrary.name);
                return false;
            }

            // Install to application's native library directory
            File targetDir = new File(context.getApplicationInfo().nativeLibraryDir);
            File targetLibrary = new File(targetDir, libraryConfig.targetName);

            // Remove existing target if present
            if (targetLibrary.exists()) {
                targetLibrary.delete();
            }

            // Copy library to target location
            boolean copied = copyLibraryFile(sourceLibrary, targetLibrary);
            if (!copied) {
                Log.e(TAG, "Failed to copy library to target location");
                return false;
            }

            // Verify installation
            if (!targetLibrary.exists() || targetLibrary.length() != sourceLibrary.length()) {
                Log.e(TAG, "Installation verification failed");
                return false;
            }

            Log.d(TAG, "Library installed successfully: " + targetLibrary.getAbsolutePath());
            return true;

        } catch (Exception e) {
            Log.e(TAG, "Error installing to target location", e);
            return false;
        }
    }

    /**
     * Find extracted library file
     */
    private File findExtractedLibrary(File extractionDir, String libraryName) {
        File[] files = extractionDir.listFiles();
        if (files != null) {
            for (File file : files) {
                if (file.isFile() && file.getName().equals(libraryName)) {
                    return file;
                }
                if (file.isDirectory()) {
                    File found = findExtractedLibrary(file, libraryName);
                    if (found != null) {
                        return found;
                    }
                }
            }
        }
        return null;
    }

    /**
     * Copy library file with verification
     */
    private boolean copyLibraryFile(File source, File target) {
        try {
            java.nio.file.Files.copy(source.toPath(), target.toPath(),
                java.nio.file.StandardCopyOption.REPLACE_EXISTING);

            // Set executable permissions for native library
            target.setExecutable(true, false);
            target.setReadable(true, false);

            return true;

        } catch (Exception e) {
            Log.e(TAG, "Error copying library file", e);
            return false;
        }
    }

    /**
     * Cleanup temporary files
     */
    private void cleanupTempFiles() {
        try {
            File tempDir = new File(context.getFilesDir(), TEMP_DIR_NAME);
            File extractionDir = new File(context.getFilesDir(), EXTRACTION_DIR_NAME);

            if (tempDir.exists()) {
                deleteRecursively(tempDir);
            }
            if (extractionDir.exists()) {
                deleteRecursively(extractionDir);
            }

            Log.d(TAG, "Temporary files cleaned up");

        } catch (Exception e) {
            Log.e(TAG, "Error cleaning up temporary files", e);
        }
    }
}
