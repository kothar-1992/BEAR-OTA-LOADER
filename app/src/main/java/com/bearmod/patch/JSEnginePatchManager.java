package com.bearmod.patch;

import android.annotation.SuppressLint;
import android.content.Context;
import android.util.Log;
import android.webkit.JavascriptInterface;
import android.webkit.WebView;

import com.bearmod.patch.model.PatchResult;

import java.lang.reflect.Method;
import java.nio.charset.StandardCharsets;
import java.util.concurrent.CountDownLatch;
import java.util.concurrent.Executor;
import java.util.concurrent.Executors;
import java.util.concurrent.TimeUnit;

/**
 * JavaScript engine-based patch manager
 * Uses WebView JavaScript engine to execute patches without root
 */
public class JSEnginePatchManager {
    private static final String TAG = "JSEnginePatchManager";
    
    @SuppressLint("StaticFieldLeak")
    private static JSEnginePatchManager instance;
    private final Executor executor;
    private WebView webView;
    private String targetPackage;
    private Context context;
    private String replacement;

    private JSEnginePatchManager() {
        this.executor = Executors.newSingleThreadExecutor();
    }
    
    public static JSEnginePatchManager getInstance() {
        if (instance == null) {
            instance = new JSEnginePatchManager();
        }
        return instance;
    }
    
    public interface PatchCallback {
        void onPatchSuccess(PatchResult result);
        void onPatchFailed(String error);
        void onPatchProgress(int progress);
    }
    
    /**
     * Initialize JavaScript engine
     */
    @SuppressLint("SetJavaScriptEnabled")
    public void initialize(Context context) {
        executor.execute(() -> {
            try {
                // Initialize WebView on main thread
                context.getMainExecutor().execute(() -> {
                    webView = new WebView(context);
                    webView.getSettings().setJavaScriptEnabled(true);
                    webView.addJavascriptInterface(new PatchInterface(), "BearModPatch");
                    
                    // Load base patch framework
                    String baseFramework = loadBaseFramework(context);
                    webView.loadDataWithBaseURL(null, 
                        "<html><head><script>" + baseFramework + "</script></head><body></body></html>", 
                        "text/html", "UTF-8", null);
                });
                
            } catch (Exception e) {
                Log.e(TAG, "Failed to initialize JS engine", e);
            }
        });
    }
    
    /**
     * Apply patch using JavaScript engine
     */
    public void applyPatch(Context context, String targetPackage, String patchId, PatchCallback callback) {
        if (webView == null) {
            initialize(context);
            // Wait a moment for initialization
            try {
                Thread.sleep(1000);
            } catch (InterruptedException e) {
                Thread.currentThread().interrupt();
            }
        }
        
        executor.execute(() -> {
            try {
                callback.onPatchProgress(20);
                
                // Load patch script
                String patchScript = loadPatchScript(context, patchId);
                if (patchScript == null) {
                    callback.onPatchFailed("Failed to load patch script: " + patchId);
                    return;
                }
                
                callback.onPatchProgress(50);
                
                // Execute patch in JavaScript engine
                CountDownLatch latch = new CountDownLatch(1);
                final boolean[] success = {false};
                final String[] errorMessage = {null};
                
                // Set up result handler
                currentCallback = new PatchCallback() {
                    @Override
                    public void onPatchSuccess(PatchResult result) {
                        success[0] = true;
                        latch.countDown();
                    }
                    
                    @Override
                    public void onPatchFailed(String error) {
                        errorMessage[0] = error;
                        latch.countDown();
                    }
                    
                    @Override
                    public void onPatchProgress(int progress) {
                        callback.onPatchProgress(progress);
                    }
                };
                
                // Execute patch script
                String executeScript = String.format(
                    "BearModPatch.executePatch('%s', '%s', %s);",
                    targetPackage, patchId, escapeJavaScript(patchScript)
                );
                
                webView.post(() -> webView.evaluateJavascript(executeScript, null));
                
                // Wait for completion
                if (latch.await(30, TimeUnit.SECONDS)) {
                    if (success[0]) {
                        callback.onPatchProgress(100);
                        PatchResult result = new PatchResult(true, "Patch applied successfully", patchId, targetPackage);
                        callback.onPatchSuccess(result);
                    } else {
                        callback.onPatchFailed(errorMessage[0] != null ? errorMessage[0] : "Patch execution failed");
                    }
                } else {
                    callback.onPatchFailed("Patch execution timeout");
                }
                
            } catch (Exception e) {
                Log.e(TAG, "Error applying patch", e);
                callback.onPatchFailed("Patch failed: " + e.getMessage());
            }
        });
    }
    
    private volatile PatchCallback currentCallback;
    
    /**
     * JavaScript interface for patch execution
     */
    public class PatchInterface {
        
        @JavascriptInterface
        public void executePatch(String targetPackage, String patchId, String scriptContent) {
            try {
                Log.d(TAG, "Executing patch: " + patchId + " for " + targetPackage);
                
                // Parse and execute patch logic
                boolean success = processPatchScript(targetPackage, patchId, scriptContent);
                
                if (success && currentCallback != null) {
                    currentCallback.onPatchSuccess(new PatchResult(true, "Patch executed", patchId, targetPackage));
                } else if (currentCallback != null) {
                    currentCallback.onPatchFailed("Patch execution failed");
                }
                
            } catch (Exception e) {
                Log.e(TAG, "Error in patch execution", e);
                if (currentCallback != null) {
                    currentCallback.onPatchFailed("Patch error: " + e.getMessage());
                }
            }
        }
        
        @JavascriptInterface
        public void log(String message) {
            Log.d(TAG, "JS Patch: " + message);
        }
        
        @JavascriptInterface
        public boolean hookMethod(String className, String methodName, String replacement) {
            // Implement method hooking using reflection or native calls
            return performMethodHook(className, methodName, replacement);
        }
        
        @JavascriptInterface
        public boolean patchMemory(String address, String newValue) {
            // Implement memory patching
            return performMemoryPatch(address, newValue);
        }
    }
    
    private String loadBaseFramework(Context context) {
        this.context = context;
        return """
                console.log = function(msg) { BearModPatch.log(msg); };
                var Java = {
                  use: function(className) {
                    return {
                      implementation: function(methodName, impl) {
                        return BearModPatch.hookMethod(className, methodName, impl.toString());
                      }
                    };
                  }
                };
                """;
    }
    
    private String loadPatchScript(Context context, String patchId) {
        try {
            // Use SecureScriptManager with centralized FileHelper system
            String scriptContent = SecureScriptManager.getInstance(context).loadScript(patchId);
            if (scriptContent != null) {
                Log.d(TAG, "Loaded script from centralized system: " + patchId + " (" + scriptContent.length() + " chars)");
                return scriptContent;
            }

            Log.e(TAG, "Failed to load script from centralized system: " + patchId);
            return null;

        } catch (Exception e) {
            Log.e(TAG, "Error loading patch script from centralized system", e);
            return null;
        }
    }
    
    private String escapeJavaScript(String script) {
        return script.replace("'", "\\'").replace("\n", "\\n").replace("\r", "\\r");
    }
    
    private boolean processPatchScript(String targetPackage, String patchId, String scriptContent) {
        this.targetPackage = targetPackage;
        // Process the patch script and apply modifications
        Log.d(TAG, "Processing patch script for: " + patchId);
        
        // Implement actual JavaScript engine patching logic
        try {
            // Parse the script to identify patch targets
            String[] lines = scriptContent.split("\n");
            boolean patchSuccess = true;

            for (String line : lines) {
                line = line.trim();
                if (line.isEmpty() || line.startsWith("//")) continue;

                // Handle different patch types
                if (line.startsWith("hook:")) {
                    String hookTarget = line.substring(5).trim();
                    String[] parts = hookTarget.split("\\.");
                    if (parts.length >= 2) {
                        String className = parts[0];
                        String methodName = parts[1];
                        String replacement = parts.length > 2 ? parts[2] : "default_replacement";
                        patchSuccess &= performMethodHook(className, methodName, replacement);
                    }
                } else if (line.startsWith("patch:")) {
                    String patchTarget = line.substring(6).trim();
                    String[] parts = patchTarget.split("=");
                    if (parts.length == 2) {
                        String address = parts[0].trim();
                        String newValue = parts[1].trim();
                        patchSuccess &= performMemoryPatch(address, newValue);
                    }
                } else if (line.startsWith("inject:")) {
                    String injectTarget = line.substring(7).trim();
                    patchSuccess &= performCodeInjection(injectTarget);
                }
            }

            Log.i(TAG, "Script execution completed. Success: " + patchSuccess);
            return patchSuccess;

        } catch (Exception e) {
            Log.e(TAG, "Error executing script: " + e.getMessage());
            return false;
        }
    }
    
    private boolean performMethodHook(String className, String methodName, String replacement) {
        this.replacement = replacement;
        try {
            // Use reflection to hook Java methods
            Class<?> targetClass = Class.forName(className);
            Method[] methods = targetClass.getDeclaredMethods();

            for (Method method : methods) {
                if (method.getName().equals(methodName)) {
                    // Store original method for restoration if needed
                    originalMethods.put(className + "." + methodName, method);

                    // Create hook using existing BearMod hook infrastructure
                    boolean hookResult = createMethodHook(targetClass, method, replacement);

                    if (hookResult) {
                        Log.i(TAG, "Successfully hooked: " + className + "." + methodName);
                        return true;
                    } else {
                        Log.e(TAG, "Failed to hook: " + className + "." + methodName);
                        return false;
                    }
                }
            }

            Log.w(TAG, "Method not found: " + className + "." + methodName);
            return false;

        } catch (ClassNotFoundException e) {
            Log.e(TAG, "Class not found: " + className + " - " + e.getMessage());
            return false;
        } catch (Exception e) {
            Log.e(TAG, "Error hooking method: " + e.getMessage());
            return false;
        }
    }
    
    private boolean performMemoryPatch(String address, String newValue) {
        try {
            // Convert address string to long (support hex format)
            long memoryAddress;
            if (address.startsWith("0x") || address.startsWith("0X")) {
                memoryAddress = Long.parseLong(address.substring(2), 16);
            } else {
                memoryAddress = Long.parseLong(address);
            }

            // Convert new value to byte array
            byte[] patchData;
            if (newValue.startsWith("0x") || newValue.startsWith("0X")) {
                // Hex string to bytes
                String hexString = newValue.substring(2);
                patchData = hexStringToByteArray(hexString);
            } else {
                // String to bytes
                patchData = newValue.getBytes(StandardCharsets.UTF_8);
            }

            // Call native memory patching function
            boolean result = patchMemoryNative(memoryAddress, patchData);

            if (result) {
                Log.i(TAG, "Successfully patched memory at: " + address + " with: " + newValue);
            } else {
                Log.e(TAG, "Failed to patch memory at: " + address);
            }

            return result;

        } catch (NumberFormatException e) {
            Log.e(TAG, "Invalid address format: " + address + " - " + e.getMessage());
            return false;
        } catch (Exception e) {
            Log.e(TAG, "Error patching memory: " + e.getMessage());
            return false;
        }
    }

    // Helper methods for JavaScript engine patching
    private boolean createMethodHook(Class<?> targetClass, Method method, String replacement) {
        try {
            // Use existing BearMod hook infrastructure
            // This would integrate with the native hooking system
            Log.d(TAG, "Creating hook for: " + targetClass.getName() + "." + method.getName());

            // Store hook information for later restoration
            String hookKey = targetClass.getName() + "." + method.getName();
            activeHooks.put(hookKey, replacement);

            // Call native hook creation (would be implemented in native layer)
            return createHookNative(targetClass.getName(), method.getName(), replacement);

        } catch (Exception e) {
            Log.e(TAG, "Error creating method hook: " + e.getMessage());
            return false;
        }
    }

    private boolean performCodeInjection(String target) {
        try {
            Log.d(TAG, "Performing code injection: " + target);

            // Parse injection target (format: "package.class.method@offset")
            String[] parts = target.split("@");
            String methodPath = parts[0];
            long offset = parts.length > 1 ? Long.parseLong(parts[1]) : 0;

            // Call native code injection
            return injectCodeNative(methodPath, offset);

        } catch (Exception e) {
            Log.e(TAG, "Error performing code injection: " + e.getMessage());
            return false;
        }
    }

    private byte[] hexStringToByteArray(String hexString) {
        int len = hexString.length();
        byte[] data = new byte[len / 2];
        for (int i = 0; i < len; i += 2) {
            data[i / 2] = (byte) ((Character.digit(hexString.charAt(i), 16) << 4)
                                 + Character.digit(hexString.charAt(i+1), 16));
        }
        return data;
    }

    // Native method declarations (implemented in native layer)
    private native boolean patchMemoryNative(long address, byte[] data);
    private native boolean createHookNative(String className, String methodName, String replacement);
    private native boolean injectCodeNative(String methodPath, long offset);

    // Add fields for tracking hooks and methods
    private final java.util.Map<String, Method> originalMethods = new java.util.HashMap<>();
    private java.util.Map<String, String> activeHooks = new java.util.HashMap<>();
}
