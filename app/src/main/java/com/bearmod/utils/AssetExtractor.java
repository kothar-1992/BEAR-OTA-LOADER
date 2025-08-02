package com.bearmod.utils;

import android.content.Context;
import android.content.res.AssetManager;
import android.util.Log;

import java.io.File;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.InputStream;

/**
 * AssetExtractor - Extract JavaScript payloads from assets to cache directory
 * 
 * CRITICAL COMPONENT: Bridges the gap between asset storage and script execution
 * This class solves the missing link in the BearMod injection system.
 */
public class AssetExtractor {
    private static final String TAG = "AssetExtractor";
    
    /**
     * Extract Frida Gadget from assets (referenced by frida_gadget_manager.cpp)
     */
    public static boolean extractGadget(Context context, String workingDir) {
        try {
            Log.d(TAG, "Extracting Frida Gadget to: " + workingDir);
            
            // Create working directory
            File workDir = new File(workingDir);
            if (!workDir.exists() && !workDir.mkdirs()) {
                Log.e(TAG, "Failed to create working directory: " + workingDir);
                return false;
            }
            
            // Extract libhelper.so (obfuscated Frida Gadget)
            String gadgetAsset = "frida/libhelper.so";
            String gadgetOutput = workingDir + "/libhelper.so";
            
            if (extractAssetFile(context, gadgetAsset, gadgetOutput)) {
                Log.d(TAG, "Frida Gadget extracted successfully");
                return true;
            } else {
                Log.w(TAG, "Frida Gadget not found in assets, using OTA download");
                return true; // Not an error - will use OTA downloaded version
            }
            
        } catch (Exception e) {
            Log.e(TAG, "Error extracting Frida Gadget", e);
            return false;
        }
    }
    
    /**
     * Extract ALL JavaScript payloads from assets to cache directory
     * CRITICAL: This solves the missing script execution bridge
     */
    public static boolean extractJavaScriptPayloads(Context context, String targetPackage) {
        try {
            Log.d(TAG, "Extracting JavaScript payloads for: " + targetPackage);
            
            // Create script cache directory
            String scriptDir = "/data/data/" + targetPackage + "/cache/scripts";
            File cacheDir = new File(scriptDir);
            if (!cacheDir.exists() && !cacheDir.mkdirs()) {
                Log.e(TAG, "Failed to create script cache directory: " + scriptDir);
                return false;
            }
            
            // Extract core scripts
            String[] coreScripts = {
                "script/anti-detection.js",
                "script/bearmod_analyzer.js", 
                "script/bypass-ssl.js",
                "script/bypass-signkill.js",
                "script/config.js",
                "script/quick_hook.js"
            };
            
            for (String scriptAsset : coreScripts) {
                String fileName = new File(scriptAsset).getName();
                String outputPath = scriptDir + "/" + fileName;
                
                if (extractAssetFile(context, scriptAsset, outputPath)) {
                    Log.d(TAG, "Extracted script: " + fileName);
                } else {
                    Log.w(TAG, "Failed to extract script: " + fileName);
                }
            }
            
            // Extract variant-specific payloads
            String[] variantScripts = {
                "script/payloads/bearmod_base.js",
                "script/payloads/bearmod_global.js",
                "script/payloads/bearmod_korea.js",
                "script/payloads/bearmod_taiwan.js",
                "script/payloads/bearmod_vietnam.js"
            };
            
            for (String scriptAsset : variantScripts) {
                String fileName = new File(scriptAsset).getName();
                String outputPath = scriptDir + "/" + fileName;
                
                if (extractAssetFile(context, scriptAsset, outputPath)) {
                    Log.d(TAG, "Extracted payload: " + fileName);
                } else {
                    Log.w(TAG, "Failed to extract payload: " + fileName);
                }
            }
            
            Log.d(TAG, "JavaScript payload extraction completed");
            return true;
            
        } catch (Exception e) {
            Log.e(TAG, "Error extracting JavaScript payloads", e);
            return false;
        }
    }
    
    /**
     * Extract single asset file to specified path
     */
    private static boolean extractAssetFile(Context context, String assetPath, String outputPath) {
        try {
            AssetManager assetManager = context.getAssets();
            InputStream input = assetManager.open(assetPath);
            
            File outputFile = new File(outputPath);
            File parentDir = outputFile.getParentFile();
            if (parentDir != null && !parentDir.exists() && !parentDir.mkdirs()) {
                Log.e(TAG, "Failed to create parent directory: " + parentDir.getAbsolutePath());
                input.close();
                return false;
            }
            
            FileOutputStream output = new FileOutputStream(outputFile);
            
            byte[] buffer = new byte[4096];
            int read;
            while ((read = input.read(buffer)) != -1) {
                output.write(buffer, 0, read);
            }
            
            input.close();
            output.close();
            
            // Set executable permissions for .so files
            if (outputPath.endsWith(".so")) {
                outputFile.setExecutable(true);
            }
            
            return true;
            
        } catch (IOException e) {
            Log.d(TAG, "Asset not found or extraction failed: " + assetPath);
            return false;
        }
    }
    
    /**
     * Clean up extracted files
     */
    public static void cleanupExtractedFiles(String targetPackage) {
        try {
            String scriptDir = "/data/data/" + targetPackage + "/cache/scripts";
            File cacheDir = new File(scriptDir);
            
            if (cacheDir.exists()) {
                deleteRecursively(cacheDir);
                Log.d(TAG, "Cleaned up extracted files");
            }
            
        } catch (Exception e) {
            Log.e(TAG, "Error cleaning up extracted files", e);
        }
    }
    
    private static void deleteRecursively(File file) {
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
}
