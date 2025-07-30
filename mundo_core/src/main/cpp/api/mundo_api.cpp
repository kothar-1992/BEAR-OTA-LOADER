#include "mundo_api.h"
#include "mundo_internal.h"
#include <android/log.h>

#define LOG_TAG "Mundo.API"
#define LOGI(...) __android_log_print(ANDROID_LOG_INFO, LOG_TAG, __VA_ARGS__)
#define LOGE(...) __android_log_print(ANDROID_LOG_ERROR, LOG_TAG, __VA_ARGS__)

// Static string storage for C API
static std::string g_lastMessage;
static std::string g_lastError;
static std::string g_securityStatus;

extern "C" {
    
    JNIEXPORT MundoInitResult JNICALL mundo_initialize(JNIEnv* env, jobject context, const MundoConfig* config) {
        LOGI("mundo_initialize called");
        
        MundoInitResult result = {};
        
        try {
            auto* core = Mundo::Core::getInstance();
            if (!core) {
                result.success = false;
                g_lastMessage = "Failed to get Core instance";
                result.message = g_lastMessage.c_str();
                return result;
            }
            
            result = core->initialize(env, context, config);
            g_lastMessage = result.message;
            result.message = g_lastMessage.c_str();
            
            LOGI("mundo_initialize result: %s", result.success ? "SUCCESS" : "FAILED");
            return result;
            
        } catch (const std::exception& e) {
            LOGE("mundo_initialize exception: %s", e.what());
            result.success = false;
            g_lastMessage = "Exception: " + std::string(e.what());
            result.message = g_lastMessage.c_str();
            return result;
        }
    }
    
    JNIEXPORT void JNICALL mundo_shutdown() {
        LOGI("mundo_shutdown called");
        try {
            auto* core = Mundo::Core::getInstance();
            if (core) {
                core->shutdown();
            }
            Mundo::Core::destroyInstance();
        } catch (const std::exception& e) {
            LOGE("mundo_shutdown exception: %s", e.what());
        }
    }
    
    JNIEXPORT bool JNICALL mundo_is_initialized() {
        try {
            auto* core = Mundo::Core::getInstance();
            return core ? core->isInitialized() : false;
        } catch (...) {
            return false;
        }
    }
    
    JNIEXPORT bool JNICALL mundo_authenticate_keyauth(const char* bear_token) {
        LOGI("mundo_authenticate_keyauth called");
        try {
            auto* core = Mundo::Core::getInstance();
            if (!core || !bear_token) {
                return false;
            }
            return core->authenticateKeyAuth(std::string(bear_token));
        } catch (const std::exception& e) {
            LOGE("mundo_authenticate_keyauth exception: %s", e.what());
            return false;
        }
    }
    
    JNIEXPORT bool JNICALL mundo_validate_license() {
        try {
            auto* core = Mundo::Core::getInstance();
            return core ? core->validateLicense() : false;
        } catch (...) {
            return false;
        }
    }
    
    JNIEXPORT bool JNICALL mundo_enable_anti_hook_protection() {
        LOGI("mundo_enable_anti_hook_protection called");
        try {
            auto* core = Mundo::Core::getInstance();
            return core ? core->enableAntiHookProtection() : false;
        } catch (const std::exception& e) {
            LOGE("mundo_enable_anti_hook_protection exception: %s", e.what());
            return false;
        }
    }
    
    JNIEXPORT int JNICALL mundo_get_threat_level() {
        try {
            auto* core = Mundo::Core::getInstance();
            return core ? core->getThreatLevel() : -1;
        } catch (...) {
            return -1;
        }
    }
    
    JNIEXPORT const char* JNICALL mundo_get_security_status() {
        try {
            auto* core = Mundo::Core::getInstance();
            if (core) {
                g_securityStatus = core->getSecurityStatus();
                return g_securityStatus.c_str();
            }
            return "Not initialized";
        } catch (...) {
            return "Error";
        }
    }
    
    JNIEXPORT bool JNICALL mundo_inject_to_package(const char* package_name) {
        LOGI("mundo_inject_to_package called: %s", package_name ? package_name : "null");
        try {
            auto* core = Mundo::Core::getInstance();
            if (!core || !package_name) {
                return false;
            }
            return core->injectToPackage(std::string(package_name));
        } catch (const std::exception& e) {
            LOGE("mundo_inject_to_package exception: %s", e.what());
            return false;
        }
    }
    
    JNIEXPORT bool JNICALL mundo_is_injection_active() {
        try {
            auto* core = Mundo::Core::getInstance();
            return core ? core->isInjectionActive() : false;
        } catch (...) {
            return false;
        }
    }
    
    JNIEXPORT bool JNICALL mundo_enable_esp(bool enable) {
        LOGI("mundo_enable_esp called: %s", enable ? "true" : "false");
        try {
            auto* core = Mundo::Core::getInstance();
            return core ? core->enableESP(enable) : false;
        } catch (const std::exception& e) {
            LOGE("mundo_enable_esp exception: %s", e.what());
            return false;
        }
    }
    
    JNIEXPORT bool JNICALL mundo_enable_skin_mods(bool enable) {
        LOGI("mundo_enable_skin_mods called: %s", enable ? "true" : "false");
        try {
            auto* core = Mundo::Core::getInstance();
            return core ? core->enableSkinMods(enable) : false;
        } catch (const std::exception& e) {
            LOGE("mundo_enable_skin_mods exception: %s", e.what());
            return false;
        }
    }
    
    JNIEXPORT const char* JNICALL mundo_get_version() {
        return MUNDO_API_VERSION;
    }
    
    JNIEXPORT const char* JNICALL mundo_get_last_error() {
        try {
            auto* core = Mundo::Core::getInstance();
            if (core) {
                g_lastError = core->getLastError();
                return g_lastError.c_str();
            }
            return "Core not available";
        } catch (...) {
            return "Exception occurred";
        }
    }
    
    // Additional JNI bridge methods for Java MundoCore integration

    JNIEXPORT jobject JNICALL Java_com_bearmod_MundoCore_nativeInitialize(JNIEnv *env, jobject thiz, jobject context, jobject config) {
        LOGI("Java_com_bearmod_MundoCore_nativeInitialize called");

        try {
            // Extract configuration from Java object
            jclass configClass = env->GetObjectClass(config);

            // Get field IDs
            jfieldID keyAuthTokenField = env->GetFieldID(configClass, "keyAuthToken", "Ljava/lang/String;");
            jfieldID bearTokenField = env->GetFieldID(configClass, "bearToken", "Ljava/lang/String;");
            jfieldID targetPackageField = env->GetFieldID(configClass, "targetPackage", "Ljava/lang/String;");
            jfieldID securityLevelField = env->GetFieldID(configClass, "securityLevel", "I");
            jfieldID enableNonRootField = env->GetFieldID(configClass, "enableNonRoot", "Z");
            jfieldID enableAntiHookField = env->GetFieldID(configClass, "enableAntiHook", "Z");
            jfieldID enableStealthField = env->GetFieldID(configClass, "enableStealth", "Z");

            // Extract values
            jstring jKeyAuthToken = (jstring)env->GetObjectField(config, keyAuthTokenField);
            jstring jBearToken = (jstring)env->GetObjectField(config, bearTokenField);
            jstring jTargetPackage = (jstring)env->GetObjectField(config, targetPackageField);
            jint securityLevel = env->GetIntField(config, securityLevelField);
            jboolean enableNonRoot = env->GetBooleanField(config, enableNonRootField);
            jboolean enableAntiHook = env->GetBooleanField(config, enableAntiHookField);
            jboolean enableStealth = env->GetBooleanField(config, enableStealthField);

            // Convert to C strings
            const char* keyAuthToken = jKeyAuthToken ? env->GetStringUTFChars(jKeyAuthToken, nullptr) : "";
            const char* bearToken = jBearToken ? env->GetStringUTFChars(jBearToken, nullptr) : "";
            const char* targetPackage = jTargetPackage ? env->GetStringUTFChars(jTargetPackage, nullptr) : "";

            // Create native config
            MundoConfig nativeConfig = {};
            nativeConfig.keyauth_token = keyAuthToken;
            nativeConfig.bear_token = bearToken;
            nativeConfig.target_package = targetPackage;
            nativeConfig.security_level = securityLevel;
            nativeConfig.enable_nonroot = enableNonRoot;
            nativeConfig.enable_anti_hook = enableAntiHook;
            nativeConfig.enable_stealth = enableStealth;

            // Call native initialization
            MundoInitResult result = mundo_initialize(env, context, &nativeConfig);

            // Release strings
            if (jKeyAuthToken) env->ReleaseStringUTFChars(jKeyAuthToken, keyAuthToken);
            if (jBearToken) env->ReleaseStringUTFChars(jBearToken, bearToken);
            if (jTargetPackage) env->ReleaseStringUTFChars(jTargetPackage, targetPackage);

            // Create Java result object
            jclass resultClass = env->FindClass("com/bearmod/MundoCore$MundoInitResult");
            jmethodID resultConstructor = env->GetMethodID(resultClass, "<init>", "()V");
            jobject jResult = env->NewObject(resultClass, resultConstructor);

            // Set result fields
            jfieldID successField = env->GetFieldID(resultClass, "success", "Z");
            jfieldID messageField = env->GetFieldID(resultClass, "message", "Ljava/lang/String;");
            jfieldID versionField = env->GetFieldID(resultClass, "version", "Ljava/lang/String;");
            jfieldID securityStatusField = env->GetFieldID(resultClass, "securityStatus", "I");
            jfieldID nonRootAvailableField = env->GetFieldID(resultClass, "nonRootAvailable", "Z");

            env->SetBooleanField(jResult, successField, result.success);
            env->SetObjectField(jResult, messageField, env->NewStringUTF(result.message));
            env->SetObjectField(jResult, versionField, env->NewStringUTF(result.version));
            env->SetIntField(jResult, securityStatusField, result.security_status);
            env->SetBooleanField(jResult, nonRootAvailableField, result.nonroot_available);

            return jResult;

        } catch (const std::exception& e) {
            LOGE("Java_com_bearmod_MundoCore_nativeInitialize exception: %s", e.what());

            // Return error result
            jclass resultClass = env->FindClass("com/bearmod/MundoCore$MundoInitResult");
            jmethodID resultConstructor = env->GetMethodID(resultClass, "<init>", "()V");
            jobject jResult = env->NewObject(resultClass, resultConstructor);

            jfieldID successField = env->GetFieldID(resultClass, "success", "Z");
            jfieldID messageField = env->GetFieldID(resultClass, "message", "Ljava/lang/String;");

            env->SetBooleanField(jResult, successField, false);
            env->SetObjectField(jResult, messageField, env->NewStringUTF(e.what()));

            return jResult;
        }
    }

    JNIEXPORT jboolean JNICALL Java_com_bearmod_MundoCore_nativeAuthenticateKeyAuth(JNIEnv *env, jobject thiz, jstring bearToken) {
        try {
            const char* token = bearToken ? env->GetStringUTFChars(bearToken, nullptr) : "";
            bool result = mundo_authenticate_keyauth(token);
            if (bearToken) env->ReleaseStringUTFChars(bearToken, token);
            return result;
        } catch (...) {
            return false;
        }
    }

    JNIEXPORT jboolean JNICALL Java_com_bearmod_MundoCore_nativeInjectToPackage(JNIEnv *env, jobject thiz, jstring packageName) {
        try {
            const char* package = packageName ? env->GetStringUTFChars(packageName, nullptr) : "";
            bool result = mundo_inject_to_package(package);
            if (packageName) env->ReleaseStringUTFChars(packageName, package);
            return result;
        } catch (...) {
            return false;
        }
    }

    JNIEXPORT jboolean JNICALL Java_com_bearmod_MundoCore_nativeEnableESP(JNIEnv *env, jobject thiz, jboolean enable) {
        try {
            return mundo_enable_esp(enable);
        } catch (...) {
            return false;
        }
    }

    JNIEXPORT jboolean JNICALL Java_com_bearmod_MundoCore_nativeEnableSkinMods(JNIEnv *env, jobject thiz, jboolean enable) {
        try {
            return mundo_enable_skin_mods(enable);
        } catch (...) {
            return false;
        }
    }

    JNIEXPORT jstring JNICALL Java_com_bearmod_MundoCore_nativeGetSecurityStatus(JNIEnv *env, jobject thiz) {
        try {
            const char* status = mundo_get_security_status();
            return env->NewStringUTF(status);
        } catch (...) {
            return env->NewStringUTF("Error");
        }
    }

    JNIEXPORT jint JNICALL Java_com_bearmod_MundoCore_nativeGetThreatLevel(JNIEnv *env, jobject thiz) {
        try {
            return mundo_get_threat_level();
        } catch (...) {
            return -1;
        }
    }

    JNIEXPORT jboolean JNICALL Java_com_bearmod_MundoCore_nativeIsInjectionActive(JNIEnv *env, jobject thiz) {
        try {
            return mundo_is_injection_active();
        } catch (...) {
            return false;
        }
    }

    JNIEXPORT jstring JNICALL Java_com_bearmod_MundoCore_nativeGetLastError(JNIEnv *env, jobject thiz) {
        try {
            const char* error = mundo_get_last_error();
            return env->NewStringUTF(error);
        } catch (...) {
            return env->NewStringUTF("Unknown error");
        }
    }

    JNIEXPORT void JNICALL Java_com_bearmod_MundoCore_nativeShutdown(JNIEnv *env, jobject thiz) {
        try {
            mundo_shutdown();
        } catch (...) {
            // Ignore shutdown errors
        }
    }

    JNIEXPORT jstring JNICALL Java_com_bearmod_MundoCore_getMundoVersion(JNIEnv *env, jclass clazz) {
        try {
            const char* version = mundo_get_version();
            return env->NewStringUTF(version);
        } catch (...) {
            return env->NewStringUTF("Unknown");
        }
    }

    JNIEXPORT jboolean JNICALL Java_com_bearmod_MundoCore_isCompatibleDevice(JNIEnv *env, jclass clazz) {
        try {
            // Basic compatibility check
            return true; // For demo purposes
        } catch (...) {
            return false;
        }
    }

} // extern "C"