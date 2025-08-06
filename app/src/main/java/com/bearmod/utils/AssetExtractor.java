package com.bearmod.utils;

import android.content.Context;
import android.content.res.AssetManager;
import android.util.Log;

import java.io.File;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.util.HashMap;
import java.util.Map;

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
            
            // Note: Frida Gadget extraction removed - now using ptrace-based injection
            // All injection functionality integrated into libbearmod.so via libclient_static
            Log.d(TAG, "Using ptrace-based injection system (no Frida Gadget required)");
            return true;
            
        } catch (Exception e) {
            Log.e(TAG, "Error extracting Frida Gadget", e);
            return false;
        }
    }
    
    /**
     * Extract JavaScript payload to memory buffer (MEMORY-ONLY APPROACH)
     * UPDATED: Aligns with SecureScriptManager memory-only patterns
     * No filesystem storage - returns script content directly
     */
    public static String extractScriptToMemory(Context context, String scriptName) {
        try {
            Log.d(TAG, "Extracting script to memory: " + scriptName);

            // Map script names to asset paths
            String assetPath = getAssetPathForScript(scriptName);
            if (assetPath == null) {
                Log.w(TAG, "Unknown script name: " + scriptName);
                return null;
            }

            // Extract directly to memory (no filesystem storage)
            return extractAssetToMemory(context, assetPath);

        } catch (Exception e) {
            Log.e(TAG, "Error extracting script to memory: " + scriptName, e);
            return null;
        }
    }

    /**
     * Extract all JavaScript payloads to memory (CONSOLIDATED APPROACH)
     * Returns Map<scriptName, scriptContent> for batch processing
     */
    public static Map<String, String> extractAllScriptsToMemory(Context context) {
        Map<String, String> scripts = new HashMap<>();

        try {
            Log.d(TAG, "Extracting all scripts to memory");

            // Core scripts mapping
            String[] coreScripts = {
                "anti-detection.js",
                "bearmod_analyzer.js",
                "bypass-ssl.js",
                "bypass-signkill.js",
                "config.js",
                "quick_hook.js"
            };

            for (String scriptName : coreScripts) {
                String scriptContent = extractScriptToMemory(context, scriptName);
                if (scriptContent != null) {
                    String scriptId = scriptName.replace(".js", "").replace("_", "-");
                    scripts.put(scriptId, scriptContent);
                    Log.d(TAG, "Extracted script to memory: " + scriptId);
                } else {
                    Log.w(TAG, "Failed to extract script: " + scriptName);
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
                String scriptContent = extractScriptToMemory(context, scriptAsset);

                if (scriptContent != null) {
                    String scriptId = fileName.replace(".js", "").replace("_", "-");
                    scripts.put(scriptId, scriptContent);
                    Log.d(TAG, "Extracted payload to memory: " + scriptId);
                } else {
                    Log.w(TAG, "Failed to extract payload: " + fileName);
                }
            }
            
            Log.d(TAG, "All scripts extracted to memory: " + scripts.size() + " scripts");
            return scripts;

        } catch (Exception e) {
            Log.e(TAG, "Error extracting scripts to memory", e);
            return new HashMap<>();
        }
    }

    /**
     * Map script names to asset paths
     */
    private static String getAssetPathForScript(String scriptName) {
        Map<String, String> assetMappings = new HashMap<>();
        assetMappings.put("anti-detection.js", "script/anti-detection.js");
        assetMappings.put("bearmod_analyzer.js", "script/bearmod_analyzer.js");
        assetMappings.put("bypass-ssl.js", "script/bypass-ssl.js");
        assetMappings.put("bypass-signkill.js", "script/bypass-signkill.js");
        assetMappings.put("config.js", "script/config.js");
        assetMappings.put("quick_hook.js", "script/quick_hook.js");

        return assetMappings.get(scriptName);
    }

    /**
     * Extract single asset to memory buffer (no filesystem storage)
     */
    private static String extractAssetToMemory(Context context, String assetPath) {
        try {
            AssetManager assetManager = context.getAssets();
            InputStream input = assetManager.open(assetPath);

            // Read entire asset to memory
            StringBuilder content = new StringBuilder();
            byte[] buffer = new byte[4096];
            int bytesRead;

            while ((bytesRead = input.read(buffer)) != -1) {
                content.append(new String(buffer, 0, bytesRead, java.nio.charset.StandardCharsets.UTF_8));
            }

            input.close();

            return content.toString();

        } catch (IOException e) {
            Log.d(TAG, "Asset not found or extraction failed: " + assetPath);
            return null;
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
