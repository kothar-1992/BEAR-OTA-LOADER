#include "bearmod_jni.h"
#include <jni.h>
#include <string>
#include <memory>
#include <vector>
#include <unistd.h>
#include <sys/system_properties.h>
#include <atomic>
#include <mutex>
#include <android/log.h>

#define LOG_TAG "BearMod"
#define LOGI(...) __android_log_print(ANDROID_LOG_INFO, LOG_TAG, __VA_ARGS__)
#define LOGE(...) __android_log_print(ANDROID_LOG_ERROR, LOG_TAG, __VA_ARGS__)
#define LOGW(...) __android_log_print(ANDROID_LOG_WARN, LOG_TAG, __VA_ARGS__)
#define LOGD(...) __android_log_print(ANDROID_LOG_DEBUG, LOG_TAG, __VA_ARGS__)

// Forward declarations
extern bool isVerifiedFromLoader(JNIEnv* env, jobject context);
extern std::string getPackageSignatureHash(JNIEnv* env, jobject context, const char* packageName);
extern bool performNativeInjection(const char* packageName, const char* bearToken);
extern bool performFridaInjection(const char* packageName, const char* script);
extern void stopFridaInjection();
extern void stopNativeInjection();

// Anti-hooking namespace
namespace BearMod {
    namespace AntiHook {
        extern bool performAntiHookingCheck();
        extern void startContinuousMonitoring();
        extern bool detectFridaServer();
        extern bool detectDebugger();
        extern bool detectHookingLibraries();
        extern bool detectSuspiciousThreads();
    }
}

// Global state management
static JavaVM* gJavaVM = nullptr;
static jobject gClassLoader = nullptr;
static jmethodID gFindClassMethod = nullptr;
static std::atomic<bool> gInitialized{false};
static std::atomic<bool> gSecurityPassed{false};
static std::mutex gInitMutex;

// Security constants
static constexpr const char* EXPECTED_PACKAGE = "com.bearmod";
static constexpr const char* EXPECTED_SIGNATURE = "YOUR_RELEASE_SIGNATURE_HERE";
static constexpr int MIN_SDK_VERSION = 24;
static constexpr const char* LIBRARY_VERSION = "3.9.0";

/**
 * Custom class finder using the app's ClassLoader
 */
jclass findClass(JNIEnv* env, const char* name) {
    if (!gClassLoader || !gFindClassMethod) {
        LOGE("ClassLoader not initialized");
        return nullptr;
    }
    
    jstring className = env->NewStringUTF(name);
    if (!className) {
        LOGE("Failed to create class name string");
        return nullptr;
    }
    
    jclass result = static_cast<jclass>(
        env->CallObjectMethod(gClassLoader, gFindClassMethod, className));
    env->DeleteLocalRef(className);
    
    return result;
}

/**
 * Initialize the ClassLoader for custom class loading
 */
bool initClassLoader(JNIEnv* env, jobject context) {
    // Get context.getClassLoader()
    jclass contextClass = env->FindClass("android/content/Context");
    if (!contextClass) {
        LOGE("Failed to find Context class");
        return false;
    }
    
    jmethodID getClassLoaderMethod = env->GetMethodID(
        contextClass, "getClassLoader", "()Ljava/lang/ClassLoader;");
    if (!getClassLoaderMethod) {
        LOGE("Failed to find getClassLoader method");
        return false;
    }
    
    jobject classLoader = env->CallObjectMethod(context, getClassLoaderMethod);
    if (!classLoader) {
        LOGE("Failed to get ClassLoader instance");
        return false;
    }
    
    // Get loadClass method
    jclass classLoaderClass = env->FindClass("java/lang/ClassLoader");
    if (!classLoaderClass) {
        LOGE("Failed to find ClassLoader class");
        return false;
    }
    
    gFindClassMethod = env->GetMethodID(
        classLoaderClass, "loadClass", "(Ljava/lang/String;)Ljava/lang/Class;");
    if (!gFindClassMethod) {
        LOGE("Failed to find loadClass method");
        return false;
    }
    
    // Create global reference
    gClassLoader = env->NewGlobalRef(classLoader);
    env->DeleteLocalRef(classLoader);
    
    return true;
}

/**
 * Check if running on a supported Android version
 */
bool checkAndroidVersion() {
    char sdk_version_str[PROP_VALUE_MAX];
    __system_property_get("ro.build.version.sdk", sdk_version_str);
    int sdk_version = atoi(sdk_version_str);
    
    if (sdk_version < MIN_SDK_VERSION) {
        LOGE("Unsupported Android version. Min SDK: %d, Current: %d", 
             MIN_SDK_VERSION, sdk_version);
        return false;
    }
    return true;
}

/**
 * Check if running in an emulator
 */
bool detectEmulator() {
    char prop[PROP_VALUE_MAX];
    
    // Check common emulator properties
    __system_property_get("ro.kernel.qemu", prop);
    if (strcmp(prop, "1") == 0) return true;
    
    __system_property_get("ro.hardware", prop);
    if (strstr(prop, "goldfish") != nullptr ||
        strstr(prop, "ranchu") != nullptr) return true;
    
    __system_property_get("ro.product.model", prop);
    if (strstr(prop, "sdk") != nullptr ||
        strstr(prop, "Emulator") != nullptr ||
        strstr(prop, "Android SDK") != nullptr) return true;
    
    return false;
}

/**
 * Perform comprehensive security checks
 */
bool performSecurityChecks(JNIEnv* env, jobject context) {
    LOGI("Performing comprehensive security checks...");

    // Check Android version
    if (!checkAndroidVersion()) {
        LOGE("Android version check failed");
        return false;
    }

    // Check for emulator (allow in debug builds)
    if (detectEmulator()) {
        LOGW("Running in emulator environment");
        #ifndef DEBUG
        LOGE("Emulator detected in production build");
        return false;
        #endif
    }

    // Perform anti-hooking checks first
    if (!BearMod::AntiHook::performAntiHookingCheck()) {
        LOGE("Anti-hooking check failed - suspicious environment detected");
        return false;
    }

    // Verify loader signature (skip in debug for development)
    #ifndef DEBUG
    std::string signature = getPackageSignatureHash(env, context, EXPECTED_PACKAGE);
    if (signature.empty()) {
        LOGE("Failed to get loader signature");
        return false;
    }

    // In production, verify against expected signature
    if (signature != EXPECTED_SIGNATURE) {
        LOGE("Invalid loader signature: %s", signature.c_str());
        return false;
    }
    #else
    LOGD("Skipping signature verification in debug build");
    #endif

    // Additional verification from bear_trust_verifier
    if (!isVerifiedFromLoader(env, context)) {
        LOGE("Loader verification failed");
        return false;
    }

    LOGI("All security checks passed");
    return true;
}

/**
 * JNI_OnLoad implementation
 */
JNIEXPORT jint JNICALL JNI_OnLoad(JavaVM* vm, void* reserved) {
    LOGI("Loading BearMod native library...");
    
    JNIEnv* env;
    if (vm->GetEnv(reinterpret_cast<void**>(&env), JNI_VERSION_1_6) != JNI_OK) {
        LOGE("Failed to get JNI environment");
        return JNI_ERR;
    }
    
    // Store JavaVM reference
    gJavaVM = vm;
    
    LOGI("BearMod native library loaded successfully");
    return JNI_VERSION_1_6;
}

/**
 * Initialize the native library with thread safety
 */
extern "C" JNIEXPORT jboolean JNICALL
Java_com_bearmod_security_NativeLib_initialize(
        JNIEnv* env, jobject thiz, jobject context) {

    // Thread-safe initialization
    std::lock_guard<std::mutex> lock(gInitMutex);

    if (gInitialized.load()) {
        LOGI("BearMod native library already initialized");
        return gSecurityPassed.load() ? JNI_TRUE : JNI_FALSE;
    }

    LOGI("Initializing BearMod native library...");

    // Initialize ClassLoader first
    if (!initClassLoader(env, context)) {
        LOGE("Failed to initialize ClassLoader");
        return JNI_FALSE;
    }

    // Perform comprehensive security checks
    bool securityResult = performSecurityChecks(env, context);
    gSecurityPassed.store(securityResult);

    if (!securityResult) {
        LOGE("Security checks failed - initialization aborted");
        return JNI_FALSE;
    }

    // Start continuous anti-hooking monitoring
    try {
        BearMod::AntiHook::startContinuousMonitoring();
        LOGI("Continuous security monitoring started");
    } catch (...) {
        LOGW("Failed to start continuous monitoring");
    }

    gInitialized.store(true);
    LOGI("BearMod native library initialized successfully");
    return JNI_TRUE;
}

/**
 * Get native library version
 */
extern "C" JNIEXPORT jstring JNICALL
Java_com_bearmod_security_NativeLib_getVersion(
        JNIEnv* env, jobject thiz) {
    return env->NewStringUTF(LIBRARY_VERSION);
}

/**
 * Check if running in secure mode
 */
extern "C" JNIEXPORT jboolean JNICALL
Java_com_bearmod_security_NativeLib_isSecure(
        JNIEnv* env, jobject thiz) {
    return (gInitialized.load() && gSecurityPassed.load()) ? JNI_TRUE : JNI_FALSE;
}

/**
 * Get initialization status
 */
extern "C" JNIEXPORT jboolean JNICALL
Java_com_bearmod_security_NativeLib_isInitialized(
        JNIEnv* env, jobject thiz) {
    return gInitialized.load() ? JNI_TRUE : JNI_FALSE;
}

/**
 * Perform runtime security check
 */
extern "C" JNIEXPORT jboolean JNICALL
Java_com_bearmod_security_NativeLib_performRuntimeCheck(
        JNIEnv* env, jobject thiz, jobject context) {

    if (!gInitialized.load()) {
        LOGE("Runtime check failed - library not initialized");
        return JNI_FALSE;
    }

    // Quick anti-hooking check
    if (!BearMod::AntiHook::performAntiHookingCheck()) {
        LOGE("Runtime security check failed - hooking detected");
        gSecurityPassed.store(false);
        return JNI_FALSE;
    }

    return JNI_TRUE;
}

/**
 * Native injection method for production mode
 */
extern "C" JNIEXPORT jboolean JNICALL
Java_com_bearmod_injection_HybridInjectionManager_nativeInjectDirect(
        JNIEnv* env, jobject thiz, jstring targetPackage, jstring bearToken) {

    if (!gInitialized.load() || !gSecurityPassed.load()) {
        LOGE("Native injection failed - security not validated");
        return JNI_FALSE;
    }

    const char* packageName = env->GetStringUTFChars(targetPackage, nullptr);
    const char* token = env->GetStringUTFChars(bearToken, nullptr);

    if (!packageName || !token) {
        LOGE("Invalid parameters for native injection");
        return JNI_FALSE;
    }

    LOGI("Starting native injection for package: %s", packageName);

    // Perform additional security checks
    if (!BearMod::AntiHook::performAntiHookingCheck()) {
        LOGE("Anti-hooking check failed during injection");
        env->ReleaseStringUTFChars(targetPackage, packageName);
        env->ReleaseStringUTFChars(bearToken, token);
        return JNI_FALSE;
    }

    // Implement native injection logic here
    bool injectionResult = performNativeInjection(packageName, token);

    env->ReleaseStringUTFChars(targetPackage, packageName);
    env->ReleaseStringUTFChars(bearToken, token);

    if (injectionResult) {
        LOGI("Native injection completed successfully");
        return JNI_TRUE;
    } else {
        LOGE("Native injection failed");
        return JNI_FALSE;
    }
}

/**
 * Frida script injection method for development mode
 */
extern "C" JNIEXPORT jboolean JNICALL
Java_com_bearmod_injection_HybridInjectionManager_nativeInjectFridaScript(
        JNIEnv* env, jobject thiz, jstring targetPackage, jstring script) {

    if (!gInitialized.load()) {
        LOGE("Frida injection failed - library not initialized");
        return JNI_FALSE;
    }

    const char* packageName = env->GetStringUTFChars(targetPackage, nullptr);
    const char* scriptContent = env->GetStringUTFChars(script, nullptr);

    if (!packageName || !scriptContent) {
        LOGE("Invalid parameters for Frida injection");
        return JNI_FALSE;
    }

    LOGI("Starting Frida injection for package: %s", packageName);

    // Implement Frida injection logic here
    bool injectionResult = performFridaInjection(packageName, scriptContent);

    env->ReleaseStringUTFChars(targetPackage, packageName);
    env->ReleaseStringUTFChars(script, scriptContent);

    if (injectionResult) {
        LOGI("Frida injection completed successfully");
        return JNI_TRUE;
    } else {
        LOGE("Frida injection failed");
        return JNI_FALSE;
    }
}

/**
 * Stop Frida injection
 */
extern "C" JNIEXPORT void JNICALL
Java_com_bearmod_injection_HybridInjectionManager_nativeStopFridaInjection(
        JNIEnv* env, jobject thiz) {

    LOGI("Stopping Frida injection");
    stopFridaInjection();
}

/**
 * Stop native injection
 */
extern "C" JNIEXPORT void JNICALL
Java_com_bearmod_injection_HybridInjectionManager_nativeStopDirectInjection(
        JNIEnv* env, jobject thiz) {

    LOGI("Stopping native injection");
    stopNativeInjection();
}

/**
 * Cleanup when library is unloaded
 */
JNIEXPORT void JNICALL JNI_OnUnload(JavaVM* vm, void* reserved) {
    LOGI("Unloading BearMod native library...");
    
    JNIEnv* env;
    if (vm->GetEnv(reinterpret_cast<void**>(&env), JNI_VERSION_1_6) != JNI_OK) {
        LOGE("Failed to get JNI environment during unload");
        return;
    }
    
    // Clean up global references
    if (gClassLoader) {
        env->DeleteGlobalRef(gClassLoader);
        gClassLoader = nullptr;
    }
    
    gFindClassMethod = nullptr;
    gJavaVM = nullptr;
    
    LOGI("BearMod native library unloaded successfully"); 
}
