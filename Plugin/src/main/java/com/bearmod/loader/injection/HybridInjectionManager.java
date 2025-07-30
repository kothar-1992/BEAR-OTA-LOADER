package com.bearmod.loader.injection;

import android.content.Context;
import android.util.Log;
// PHASE 6: Commented out missing dependencies - will be implemented in future phases
// import com.bearmod.loader.security.NativeLib;
// import com.bearmod.loader.auth.AuthenticationManager;
// import com.bearmod.loader.auth.BearTokenManager;
import java.io.File;
import java.io.InputStream;
import com.bearmod.loader.BuildConfig;
import com.bearmod.loader.MundoCore;
import com.bearmod.loader.auth.KeyAuthManager;
import com.bearmod.loader.auth.KeyAuthValidator;


/**
 * Hybrid Injection Manager
 * Supports both Frida Gadget (development) and Native Injection (production)
 */
public class HybridInjectionManager {
    private static final String TAG = "HybridInjectionManager";
    
    public enum InjectionMode {
        FRIDA_GADGET,    // Development mode with Frida
        NATIVE_DIRECT,   // Production mode with native injection
        AUTO_DETECT      // Automatically choose based on build/environment
    }
    
    private final Context context;
    private InjectionMode currentMode;
    private boolean injectionActive = false;

    // Additional state variables for resetInjectionState method
    private boolean isInjectionActive = false;
    private boolean useFridaGadget = false;
    private String currentTargetPackage = null;
    private MundoCore mundoCore = null;
    
    public HybridInjectionManager(Context context) {
        this.context = context;
        this.currentMode = determineOptimalMode();
    }
    
    /**
     * Determine the best injection mode based on environment
     */
    public InjectionMode determineOptimalMode() {
        // Check if this is a debug build
        if (BuildConfig.DEBUG) {
            Log.d(TAG, "Debug build detected - preferring Frida Gadget mode");
            return InjectionMode.FRIDA_GADGET;
        }
        
        // Check if Frida is available in the environment
        if (isFridaAvailable()) {
            Log.d(TAG, "Frida environment detected - using Frida Gadget mode");
            return InjectionMode.FRIDA_GADGET;
        }
        
        // Production environment - use native injection
        Log.d(TAG, "Production environment - using Native Direct mode");
        return InjectionMode.NATIVE_DIRECT;
    }
    
    /**
     * Check if Frida is available in the current environment
     */
    private boolean isFridaAvailable() {
        try {
            // Check for Frida server on common ports
            String[] fridaChecks = {
                "netstat -an | grep :27042",
                "ps | grep frida-server"
            };
            
            for (String check : fridaChecks) {
                Process process = Runtime.getRuntime().exec(check);
                process.waitFor();
                if (process.exitValue() == 0) {
                    return true;
                }
            }
            
            // Check for Frida gadget in current process
            File mapsFile = new File("/proc/self/maps");
            if (mapsFile.exists()) {
                // This would be implemented to check for Frida signatures
                // For now, return false to prefer native mode
                return false;
            }
            
        } catch (Exception e) {
            Log.d(TAG, "Error checking Frida availability: " + e.getMessage());
        }
        
        return false;
    }
    
    /**
     * Inject into target application
     */
    public boolean injectIntoTarget(String targetPackage) {
        Log.d(TAG, "Injecting into target: " + targetPackage + " using mode: " + currentMode);
        
        switch (currentMode) {
            case FRIDA_GADGET:
                return injectWithFridaGadget(targetPackage);
                
            case NATIVE_DIRECT:
                return injectWithNativeMethod(targetPackage);
                
            case AUTO_DETECT:
                // Try Frida first, fallback to native
                if (injectWithFridaGadget(targetPackage)) {
                    currentMode = InjectionMode.FRIDA_GADGET;
                    return true;
                } else {
                    currentMode = InjectionMode.NATIVE_DIRECT;
                    return injectWithNativeMethod(targetPackage);
                }
                
            default:
                Log.e(TAG, "Unknown injection mode: " + currentMode);
                return false;
        }
    }
    
    /**
     * Inject using Frida Gadget (development mode)
     */
    private boolean injectWithFridaGadget(String targetPackage) {
        try {
            Log.d(TAG, "Attempting Frida Gadget injection...");

            // Initialize MundoCore if not already done
            if (mundoCore == null) {
                mundoCore = MundoCore.getInstance(context);
            }
            if (!mundoCore.isInitialized()) {
                Log.e(TAG, "MundoCore not initialized");
                return false;
            }

            // Initialize Frida Gadget through MundoCore
            int initResult = mundoCore.initializeFridaGadget(targetPackage);
            if (initResult != 0) {
                Log.e(TAG, "Frida Gadget initialization failed with code: " + initResult);
                return false;
            }

            // Determine PUBG variant for script loading
            String variantName = determineVariantName(targetPackage);

            // Load appropriate JavaScript payload
            String script = loadFridaScriptForVariant(variantName);
            if (script == null) {
                Log.e(TAG, "Failed to load Frida script for variant: " + variantName);
                return false;
            }

            // Load JavaScript payload through MundoCore
            boolean scriptLoaded = mundoCore.loadJavaScriptPayload(variantName, script);
            if (!scriptLoaded) {
                Log.e(TAG, "Failed to load JavaScript payload");
                return false;
            }

            // Verify Frida Gadget is active
            if (mundoCore.isFridaGadgetActive()) {
                Log.d(TAG, "Frida Gadget injection successful for variant: " + variantName);
                injectionActive = true;
                return true;
            } else {
                Log.e(TAG, "Frida Gadget not active after initialization");
                return false;
            }

        } catch (Exception e) {
            Log.e(TAG, "Error during Frida injection", e);
            return false;
        }
    }
    
    /**
     * Inject using native method (production mode)
     */
    private boolean injectWithNativeMethod(String targetPackage) {
        try {
            Log.d(TAG, "Attempting native injection...");

            // Phase 7 - Implement native library initialization check
            if (!isNativeLibraryAvailable()) {
                Log.e(TAG, "Native library not available for injection");
                return false;
            }
            Log.d(TAG, "Native library check - passed");

            // Phase 7 - Implement authentication verification
            String authToken = verifyAuthentication();
            if (authToken == null) {
                Log.e(TAG, "Authentication verification failed");
                return false;
            }
            Log.d(TAG, "Authentication check - passed");

            // Use native injection method with verified authentication
            boolean result = nativeInjectDirect(targetPackage, authToken);

            if (result) {
                Log.d(TAG, "Native injection successful");
                injectionActive = true;
            } else {
                Log.e(TAG, "Native injection failed");
            }

            return result;

        } catch (Exception e) {
            Log.e(TAG, "Error during native injection", e);
            return false;
        }
    }
    
    /**
     * Load Frida script from assets
     */
    private String loadFridaScript() {
        try {
            InputStream inputStream = context.getAssets().open("frida_injection.js");
            byte[] buffer = new byte[inputStream.available()];
            inputStream.read(buffer);
            inputStream.close();
            
            return new String(buffer);
            
        } catch (Exception e) {
            Log.e(TAG, "Error loading Frida script", e);
            return null;
        }
    }
    
    /**
     * Get current injection mode
     */
    public InjectionMode getCurrentMode() {
        return currentMode;
    }
    
    /**
     * Check if injection is currently active
     */
    public boolean isInjectionActive() {
        return injectionActive;
    }
    
    /**
     * Stop injection
     */
    public void stopInjection() {
        try {
            if (currentMode == InjectionMode.FRIDA_GADGET) {
                nativeStopFridaInjection();
            } else {
                nativeStopDirectInjection();
            }
            
            injectionActive = false;
            Log.d(TAG, "Injection stopped");
            
        } catch (Exception e) {
            Log.e(TAG, "Error stopping injection", e);
        }
    }
    
    /**
     * Force switch to specific injection mode
     */
    public void setInjectionMode(InjectionMode mode) {
        if (injectionActive) {
            Log.w(TAG, "Cannot change mode while injection is active");
            return;
        }
        
        this.currentMode = mode;
        Log.d(TAG, "Injection mode set to: " + mode);
    }

    /**
     * Get injection status summary
     */
    public String getInjectionStatus() {

        return "Injection Status:\n" +
                "- Mode: " + currentMode + "\n" +
                "- Active: " + injectionActive + "\n" +
                "- Build Type: " + (BuildConfig.DEBUG ? "Debug" : "Release") + "\n" +
                "- Frida Available: " + isFridaAvailable();
    }
    
    /**
     * Determine PUBG variant name from package name
     */
    private String determineVariantName(String targetPackage) {
        if (targetPackage.contains("krmobile")) {
            return "korea";
        } else if (targetPackage.contains("vng")) {
            return "vietnam";
        } else if (targetPackage.contains("rekoo")) {
            return "taiwan";
        } else {
            return "global";
        }
    }

    /**
     * Load Frida script for specific PUBG variant
     */
    private String loadFridaScriptForVariant(String variantName) {
        try {
            // Load base injection script
            StringBuilder scriptBuilder = new StringBuilder();

            // Add core scripts
            String[] coreScripts = {
                "bearmod_analyzer.js",
                "bypass-ssl.js",
                "bypass-signkill.js",
                "anti-detection.js"
            };

            for (String scriptName : coreScripts) {
                String scriptContent = loadAssetScript(scriptName);
                if (scriptContent != null) {
                    scriptBuilder.append(scriptContent).append("\n");
                }
            }

            // Add variant-specific configuration
            scriptBuilder.append("\n// Variant-specific configuration\n");
            scriptBuilder.append("const PUBG_VARIANT = '").append(variantName).append("';\n");
            scriptBuilder.append("const TARGET_PACKAGE = '").append(getPackageForVariant(variantName)).append("';\n");

            // Add initialization code
            scriptBuilder.append("\n// Initialize BearMod injection\n");
            scriptBuilder.append("console.log('[BearMod] Initializing for variant: ' + PUBG_VARIANT);\n");
            scriptBuilder.append("Java.perform(function() {\n");
            scriptBuilder.append("    console.log('[BearMod] JavaScript injection active for: ' + TARGET_PACKAGE);\n");
            scriptBuilder.append("});\n");

            return scriptBuilder.toString();

        } catch (Exception e) {
            Log.e(TAG, "Error loading Frida script for variant: " + variantName, e);
            return null;
        }
    }

    /**
     * Get package name for variant
     */
    private String getPackageForVariant(String variantName) {
        switch (variantName) {
            case "korea": return "com.pubg.krmobile";
            case "vietnam": return "com.vng.pubgmobile";
            case "taiwan": return "com.rekoo.pubgm";
            default: return "com.tencent.ig";
        }
    }

    /**
     * Load script content from assets
     */
    private String loadAssetScript(String scriptName) {
        try {
            java.io.InputStream is = context.getAssets().open("script/" + scriptName);
            java.io.BufferedReader reader = new java.io.BufferedReader(new java.io.InputStreamReader(is));
            StringBuilder sb = new StringBuilder();
            String line;
            while ((line = reader.readLine()) != null) {
                sb.append(line).append("\n");
            }
            reader.close();
            return sb.toString();
        } catch (Exception e) {
            Log.w(TAG, "Could not load script: " + scriptName + " - " + e.getMessage());
            return null;
        }
    }

    /**
     * Check if native library is available for injection
     */
    private boolean isNativeLibraryAvailable() {
        try {
            // Check if libbearmod.so is loaded and accessible
            System.loadLibrary("bearmod");
            Log.d(TAG, "Native library libbearmod.so is available");
            return true;
        } catch (UnsatisfiedLinkError e) {
            Log.e(TAG, "Native library not available: " + e.getMessage());
            return false;
        }
    }

    /**
     * Verify authentication and get auth token
     */
    private String verifyAuthentication() {
        try {
            // Use KeyAuth to verify authentication and get token
            com.bearmod.loader.auth.KeyAuthManager keyAuth = com.bearmod.loader.auth.KeyAuthManager.getInstance();
            if (keyAuth.isAuthenticated()) {
                String token = keyAuth.getAuthToken();
                if (token != null && !token.isEmpty()) {

                    // Validate token against KeyAuth API
                    com.bearmod.loader.auth.KeyAuthValidator.ValidationResponse validation =
                        com.bearmod.loader.auth.KeyAuthValidator.validateBearToken(token);

                    if (validation.isSuccess()) {
                        Log.d(TAG, "Authentication token validated successfully");
                        Log.d(TAG, "User: " + validation.username + ", Expiry: " + validation.expiryTime);

                        // Check required permissions
                        if (validation.hasPermission("injection") || validation.hasPermission("premium")) {
                            return token;
                        } else {
                            Log.e(TAG, "User does not have required injection permissions");
                            return null;
                        }
                    } else {
                        Log.e(TAG, "Token validation failed: " + validation.message);
                        return null;
                    }
                }
            }
            Log.w(TAG, "Authentication verification failed - no valid token");
            return null;
        } catch (Exception e) {
            Log.e(TAG, "Error during authentication verification: " + e.getMessage());
            return null;
        }
    }

    /**
     * Reset injection state and clean up resources
     */
    public void resetInjectionState() {
        try {
            Log.d(TAG, "Resetting injection state...");

            // Stop any active injections
            if (isInjectionActive) {
                if (useFridaGadget) {
                    nativeStopFridaInjection();
                } else {
                    nativeStopDirectInjection();
                }
                isInjectionActive = false;
            }

            // Reset state variables
            currentTargetPackage = null;
            useFridaGadget = false;

            // Clean up MundoCore if initialized
            if (mundoCore != null) {
                try {
                    // Stop any active Frida operations
                    if (mundoCore.isFridaGadgetActive()) {
                        mundoCore.stopFridaGadget();
                    }
                } catch (Exception e) {
                    Log.w(TAG, "Error stopping MundoCore operations: " + e.getMessage());
                }
            }

            Log.d(TAG, "Injection state reset completed");
        } catch (Exception e) {
            Log.e(TAG, "Error during injection state reset", e);
        }
    }

    // Native method declarations
    private native boolean nativeInjectFridaScript(String targetPackage, String script);
    private native boolean nativeInjectDirect(String targetPackage, String bearToken);
    private native void nativeStopFridaInjection();
    private native void nativeStopDirectInjection();
}
