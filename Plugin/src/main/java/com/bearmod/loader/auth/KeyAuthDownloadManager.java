package com.bearmod.loader.auth;

import android.content.Context;
import android.util.Log;

import androidx.annotation.NonNull;

import com.bearmod.loader.constants.PubgPackages;
import com.bearmod.loader.security.SignatureVerifier;

import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.util.HashMap;
import java.util.Map;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;
import java.util.zip.ZipEntry;
import java.util.zip.ZipInputStream;

import okhttp3.Call;
import okhttp3.Callback;
import okhttp3.OkHttpClient;
import okhttp3.Request;
import okhttp3.Response;

/**
 * Native Library Manager for Direct Injection
 * Handles downloading and managing native libraries (.so files) for direct injection into original applications
 * No longer handles APK downloads - works exclusively with original, unmodified target applications
 */
public class KeyAuthDownloadManager {
    private static final String TAG = "KeyAuthDownloadManager";

    // KeyAuth download file IDs for native libraries (.so files) for different PUBG variants
    private static final Map<String, String> NATIVE_LIBRARY_FILE_IDS = new HashMap<>();

    // KeyAuth download URLs
    private static final String KEYAUTH_DOWNLOAD_BASE_URL = "https://keyauth.win/api/1.3/";

    private final OkHttpClient httpClient;
    private final ExecutorService executor;
    private final Context context;

    static {
        // Native library file IDs for direct injection into original PUBG applications
        // These should be updated with your actual KeyAuth file IDs when you upload libbearmod.so files
        NATIVE_LIBRARY_FILE_IDS.put(PubgPackages.PUBG_PACKAGES[0], "libbearmod_global_2024"); // Global - Replace with your KeyAuth file ID
        NATIVE_LIBRARY_FILE_IDS.put(PubgPackages.PUBG_PACKAGES[1], "libbearmod_korea_2024");  // Korea - Replace with your KeyAuth file ID
        NATIVE_LIBRARY_FILE_IDS.put(PubgPackages.PUBG_PACKAGES[2], "libbearmod_vietnam_2024"); // Vietnam - Replace with your KeyAuth file ID
        NATIVE_LIBRARY_FILE_IDS.put(PubgPackages.PUBG_PACKAGES[3], "libbearmod_taiwan_2024"); // Taiwan - Replace with your KeyAuth file ID
    }

    private File rarFile;
    private File extractDir;
    private String targetPackage;

    public KeyAuthDownloadManager(Context context) {
        this.context = context.getApplicationContext();
        this.httpClient = new OkHttpClient.Builder()
                .followRedirects(true)
                .followSslRedirects(true)
                .build();
        this.executor = Executors.newCachedThreadPool();
    }
    
    /**
     * Download native library for direct injection into specific PUBG variant
     * Works with original, unmodified applications - no APK modification required
     */
    public void downloadNativeLibrary(String targetPackage, DownloadCallback callback) {
        String fileId = NATIVE_LIBRARY_FILE_IDS.get(targetPackage);
        if (fileId == null) {
            callback.onDownloadFailed("Unsupported game variant: " + targetPackage);
            return;
        }
        
        executor.execute(() -> {
            try {
                // Get KeyAuth session for authenticated download
                KeyAuthManager keyAuth = KeyAuthManager.getInstance();
                if (!keyAuth.isLoggedIn()) {
                    callback.onDownloadFailed("Authentication required for native library download");
                    return;
                }

                callback.onDownloadStarted();

                // Build download URL with authentication
                String downloadUrl = buildDownloadUrl(fileId);

                // Create download request
                Request request = new Request.Builder()
                        .url(downloadUrl)
                        .addHeader("User-Agent", "BearMod-Loader/1.0")
                        .build();

                // Execute download
                httpClient.newCall(request).enqueue(new Callback() {
                    @Override
                    public void onFailure(@NonNull Call call, @NonNull IOException e) {
                        Log.e(TAG, "Native library download failed for " + targetPackage, e);
                        callback.onDownloadFailed("Native library download failed");
                    }

                    @Override
                    public void onResponse(@NonNull Call call, @NonNull Response response) {
                        if (!response.isSuccessful()) {
                            callback.onDownloadFailed("Server error: " + response.code());
                            return;
                        }

                        // Save downloaded native library
                        File libraryFile = saveDownloadedFile(targetPackage, response);
                        if (libraryFile == null) {
                            callback.onDownloadFailed("Failed to save native library file");
                            return;
                        }

                        // Verify signature of downloaded library
                        if (!verifyDownloadedFile(libraryFile)) {
                            libraryFile.delete();
                            callback.onDownloadFailed("Native library verification failed");
                            return;
                        }

                        callback.onDownloadCompleted(libraryFile);
                    }
                });
                
            } catch (Exception e) {
                Log.e(TAG, "Error downloading native library for " + targetPackage, e);
                callback.onDownloadFailed("Native library download error");
            }
        });
    }
    
    /**
     * Build authenticated download URL
     */
    private String buildDownloadUrl(String fileId) {
        KeyAuthManager keyAuth = KeyAuthManager.getInstance();
        return KEYAUTH_DOWNLOAD_BASE_URL + "?type=file&fileid=" + fileId + 
               "&sessionid=" + keyAuth.getSessionId() + 
               "&name=" + keyAuth.getAppName() + 
               "&ownerid=" + keyAuth.getOwnerId();
    }
    
    /**
     * Save downloaded native library with archive extraction support
     * Handles both direct .so files and archived libraries
     */
    private File saveDownloadedFile(String targetPackage, Response response) {
        try {
            // Create secure directory for native libraries
            File libraryDir = new File(context.getFilesDir(), "native_libraries");
            if (!libraryDir.exists()) {
                libraryDir.mkdirs();
            }

            // Create temporary file for download
            String tempFileName = "temp_" + getVariantName(targetPackage) + "_" + System.currentTimeMillis();
            File tempFile = new File(libraryDir, tempFileName);

            // Write response body to temporary file
            try (InputStream inputStream = response.body().byteStream();
                 FileOutputStream outputStream = new FileOutputStream(tempFile)) {

                byte[] buffer = new byte[8192];
                int bytesRead;
                long totalBytes = 0;
                long contentLength = response.body().contentLength();

                while ((bytesRead = inputStream.read(buffer)) != -1) {
                    outputStream.write(buffer, 0, bytesRead);
                    totalBytes += bytesRead;

                    // Report progress
                    if (contentLength > 0) {
                        int progress = (int) ((totalBytes * 100) / contentLength);
                        // Progress callback would be called here
                    }
                }

                outputStream.flush();
            }

            // Determine file type and handle accordingly
            String contentType = response.header("Content-Type", "");
            String fileName = "libbearmod_" + getVariantName(targetPackage) + ".so";
            File finalFile = new File(libraryDir, fileName);

            // Check if file is an archive
            assert contentType != null;
            if (isArchiveFile(tempFile, contentType)) {
                Log.d(TAG, "Detected archive file, extracting native library...");
                File extractedFile = extractArchive(tempFile, libraryDir, targetPackage);

                // Clean up temporary file
                tempFile.delete();

                if (extractedFile != null) {
                    Log.i(TAG, "Native library extracted successfully: " + extractedFile.getAbsolutePath());
                    return extractedFile;
                } else {
                    Log.e(TAG, "Failed to extract native library from archive");
                    return null;
                }
            } else {
                // Direct .so file, rename to final location
                if (tempFile.renameTo(finalFile)) {
                    Log.i(TAG, "Native library saved: " + finalFile.getAbsolutePath());
                    return finalFile;
                } else {
                    Log.e(TAG, "Failed to rename temporary library file");
                    tempFile.delete();
                    return null;
                }
            }

        } catch (IOException e) {
            Log.e(TAG, "Error saving downloaded file", e);
            return null;
        }
    }

    /**
     * PHASE 7: Check if file is an archive (ZIP/RAR)
     */
    private boolean isArchiveFile(File file, String contentType) {
        // Check content type
        if (contentType.contains("zip") || contentType.contains("rar") ||
            contentType.contains("application/x-rar") || contentType.contains("application/zip")) {
            return true;
        }

        // Check file extension
        String fileName = file.getName().toLowerCase();
        if (fileName.endsWith(".zip") || fileName.endsWith(".rar")) {
            return true;
        }

        // Check file magic bytes
        try (FileInputStream fis = new FileInputStream(file)) {
            byte[] header = new byte[4];
            if (fis.read(header) == 4) {
                // ZIP magic bytes: PK (0x504B)
                if (header[0] == 0x50 && header[1] == 0x4B) {
                    return true;
                }
                // RAR magic bytes: Rar! (0x526172)
                if (header[0] == 0x52 && header[1] == 0x61 && header[2] == 0x72) {
                    return true;
                }
            }
        } catch (IOException e) {
            Log.w(TAG, "Error checking file magic bytes", e);
        }

        return false;
    }

    /**
     * PHASE 7: Extract archive and find libbearmod.so
     */
    private File extractArchive(File archiveFile, File extractDir, String targetPackage) {
        try {
            String fileName = archiveFile.getName().toLowerCase();

            if (fileName.endsWith(".zip") || isZipFile(archiveFile)) {
                return extractZipArchive(archiveFile, extractDir, targetPackage);
            } else if (fileName.endsWith(".rar")) {
                return extractRarArchive(archiveFile, extractDir, targetPackage);
            } else {
                Log.w(TAG, "Unsupported archive format: " + fileName);
                return null;
            }

        } catch (Exception e) {
            Log.e(TAG, "Error extracting archive", e);
            return null;
        }
    }

    /**
     * PHASE 7: Extract ZIP archive
     */
    private File extractZipArchive(File zipFile, File extractDir, String targetPackage) {
        try (ZipInputStream zis = new ZipInputStream(new FileInputStream(zipFile))) {
            ZipEntry entry;
            String targetFileName = "libbearmod_" + getVariantName(targetPackage) + ".so";
            File extractedFile = new File(extractDir, targetFileName);

            while ((entry = zis.getNextEntry()) != null) {
                String entryName = entry.getName().toLowerCase();

                // Look for .so files, preferably libbearmod.so
                if (entryName.endsWith(".so") &&
                    (entryName.contains("libbearmod") || entryName.contains("bearmod"))) {

                    Log.d(TAG, "Extracting: " + entry.getName());

                    try (FileOutputStream fos = new FileOutputStream(extractedFile)) {
                        byte[] buffer = new byte[8192];
                        int bytesRead;

                        while ((bytesRead = zis.read(buffer)) != -1) {
                            fos.write(buffer, 0, bytesRead);
                        }

                        fos.flush();
                    }

                    zis.closeEntry();

                    // Verify extracted file
                    if (extractedFile.exists() && extractedFile.length() > 0) {
                        Log.i(TAG, "Successfully extracted: " + extractedFile.getAbsolutePath());
                        return extractedFile;
                    }
                }

                zis.closeEntry();
            }

            Log.w(TAG, "No suitable .so file found in ZIP archive");
            return null;

        } catch (IOException e) {
            Log.e(TAG, "Error extracting ZIP archive", e);
            return null;
        }
    }

    /**
     * PHASE 7: Extract RAR archive (implemented with fallback)
     */
    private File extractRarArchive(File rarFile, File extractDir, String targetPackage) {
        this.rarFile = rarFile;
        this.extractDir = extractDir;
        this.targetPackage = targetPackage;

        Log.d(TAG, "Attempting RAR extraction for: " + rarFile.getName());

        try {
            // First, try to use system unrar command if available (non-root devices)
            if (trySystemUnrar(rarFile, extractDir)) {
                return findExtractedSoFile(extractDir, targetPackage);
            }

            // Fallback: Suggest user to convert to ZIP format
            Log.w(TAG, "RAR extraction not available on this device");
            Log.i(TAG, "Please convert RAR files to ZIP format for better compatibility");

            // Try to handle as ZIP if it's actually a ZIP file with .rar extension
            if (isActuallyZipFile(rarFile)) {
                Log.i(TAG, "File appears to be ZIP format despite .rar extension");
                return extractZipArchive(rarFile, extractDir, targetPackage);
            }

            return null;

        } catch (Exception e) {
            Log.e(TAG, "Error extracting RAR archive: " + e.getMessage());
            return null;
        }
    }

    /**
     * Try to extract RAR using system unrar command
     */
    private boolean trySystemUnrar(File rarFile, File extractDir) {
        try {
            ProcessBuilder pb = new ProcessBuilder("unrar", "x", rarFile.getAbsolutePath(), extractDir.getAbsolutePath());
            Process process = pb.start();
            int exitCode = process.waitFor();
            return exitCode == 0;
        } catch (Exception e) {
            Log.d(TAG, "System unrar not available: " + e.getMessage());
            return false;
        }
    }

    /**
     * Check if file is actually ZIP format despite .rar extension
     */
    private boolean isActuallyZipFile(File file) {
        try (java.io.FileInputStream fis = new java.io.FileInputStream(file)) {
            byte[] header = new byte[4];
            fis.read(header);
            // ZIP file signature: PK (0x504B)
            return header[0] == 0x50 && header[1] == 0x4B;
        } catch (Exception e) {
            return false;
        }
    }

    /**
     * PHASE 7: Check if file is a ZIP file by magic bytes
     */
    private boolean isZipFile(File file) {
        try (FileInputStream fis = new FileInputStream(file)) {
            byte[] header = new byte[4];
            if (fis.read(header) == 4) {
                // ZIP magic bytes: PK (0x504B)
                return header[0] == 0x50 && header[1] == 0x4B;
            }
        } catch (IOException e) {
            Log.w(TAG, "Error checking ZIP magic bytes", e);
        }
        return false;
    }
    
    /**
     * Verify downloaded file signature
     */
    private boolean verifyDownloadedFile(File enhancementFile) {
        try {
            // Use Phase 7 SignatureVerifier for file verification
            return SignatureVerifier.verifyPatchSignature(context, enhancementFile.getAbsolutePath());
        } catch (Exception e) {
            Log.e(TAG, "Error verifying downloaded file", e);
            return false;
        }
    }
    
    /**
     * Get variant name for file naming
     */
    private String getVariantName(String targetPackage) {
        for (int i = 0; i < PubgPackages.PUBG_PACKAGES.length; i++) {
            if (PubgPackages.PUBG_PACKAGES[i].equals(targetPackage)) {
                return PubgPackages.PUBG_VARIANTS[i].toLowerCase();
            }
        }
        return "unknown";
    }
    
    /**
     * Check if native library is already downloaded and cached
     */
    public boolean isNativeLibraryCached(String targetPackage) {
        File libraryDir = new File(context.getFilesDir(), "native_libraries");
        String fileName = "libbearmod_" + getVariantName(targetPackage) + ".so";
        File libraryFile = new File(libraryDir, fileName);

        return libraryFile.exists() && libraryFile.length() > 0;
    }

    /**
     * Get cached native library file
     */
    public File getCachedNativeLibrary(String targetPackage) {
        if (!isNativeLibraryCached(targetPackage)) {
            return null;
        }

        File libraryDir = new File(context.getFilesDir(), "native_libraries");
        String fileName = "libbearmod_" + getVariantName(targetPackage) + ".so";
        return new File(libraryDir, fileName);
    }

    /**
     * Clear cached native libraries
     */
    public void clearCache() {
        File libraryDir = new File(context.getFilesDir(), "native_libraries");
        if (libraryDir.exists()) {
            File[] files = libraryDir.listFiles();
            if (files != null) {
                for (File file : files) {
                    file.delete();
                }
            }
        }
    }
    
    /**
     * Find extracted .so file in directory
     * @param extractDir Directory to search
     * @param targetPackage Target package name for filtering
     * @return Found .so file or null if not found
     */
    private File findExtractedSoFile(File extractDir, String targetPackage) {
        if (extractDir == null || !extractDir.exists() || !extractDir.isDirectory()) {
            return null;
        }

        // Search for .so files recursively
        File[] files = extractDir.listFiles();
        if (files == null) {
            return null;
        }

        for (File file : files) {
            if (file.isDirectory()) {
                // Recursive search in subdirectories
                File found = findExtractedSoFile(file, targetPackage);
                if (found != null) {
                    return found;
                }
            } else if (file.getName().endsWith(".so")) {
                // Check if this is a relevant .so file
                String fileName = file.getName().toLowerCase();
                if (fileName.contains("bearmod") || fileName.contains("mundo") ||
                    fileName.contains("helper") || fileName.contains("injection")) {
                    Log.d(TAG, "Found extracted .so file: " + file.getName());
                    return file;
                }
            }
        }

        return null;
    }

    /**
     * Cancel all active downloads
     */
    public void cancelAllDownloads() {
        try {
            Log.d(TAG, "Cancelling all active downloads...");

            // Cancel any active OkHttp calls
            if (httpClient != null) {
                httpClient.dispatcher().cancelAll();
            }

            // Clean up any temporary download files
            File cacheDir = context.getCacheDir();
            if (cacheDir != null && cacheDir.exists()) {
                File[] files = cacheDir.listFiles();
                if (files != null) {
                    for (File file : files) {
                        if (file.getName().endsWith(".download") || file.getName().endsWith(".tmp")) {
                            if (file.delete()) {
                                Log.d(TAG, "Cleaned up download file: " + file.getName());
                            }
                        }
                    }
                }
            }

            Log.d(TAG, "All downloads cancelled successfully");
        } catch (Exception e) {
            Log.e(TAG, "Error cancelling downloads", e);
        }
    }

    /**
     * Backward compatibility method - redirects to downloadNativeLibrary
     * @deprecated Use downloadNativeLibrary() instead
     */
    @Deprecated
    public void downloadGameEnhancement(String targetPackage, DownloadCallback callback) {
        downloadNativeLibrary(targetPackage, callback);
    }

    /**
     * Native library download callback interface
     */
    public interface DownloadCallback {
        void onDownloadStarted();
        void onDownloadProgress(int progress);
        void onDownloadCompleted(File libraryFile);
        void onDownloadFailed(String error);
    }
}
