#include <jni.h>
#include <android/log.h>
#include "../include/mundo_api.h"
#include "../include/mundo_internal.h"

#define LOG_TAG "Mundo.JNI"
#define LOGI(...) __android_log_print(ANDROID_LOG_INFO, LOG_TAG, __VA_ARGS__)
#define LOGE(...) __android_log_print(ANDROID_LOG_ERROR, LOG_TAG, __VA_ARGS__)

using namespace Mundo;

// Helper function to convert C++ MundoInitResult to Java object
jobject createJavaMundoInitResult(JNIEnv* env, const MundoInitResult& result) {
    jclass resultClass = env->FindClass("com/bearmod/loader/MundoCore$MundoInitResult");
    if (!resultClass) {
        LOGE("Failed to find MundoInitResult class");
        return nullptr;
    }
    
    jmethodID constructor = env->GetMethodID(resultClass, "<init>", "()V");
    jobject jResult = env->NewObject(resultClass, constructor);
    
    // Set fields
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
}

// Helper function to convert Java MundoConfig to C++ struct
MundoConfig convertJavaMundoConfig(JNIEnv* env, jobject jConfig) {
    MundoConfig config = {};
    
    jclass configClass = env->GetObjectClass(jConfig);
    
    // Get field IDs
    jfieldID keyAuthTokenField = env->GetFieldID(configClass, "keyAuthToken", "Ljava/lang/String;");
    jfieldID bearTokenField = env->GetFieldID(configClass, "bearToken", "Ljava/lang/String;");
    jfieldID targetPackageField = env->GetFieldID(configClass, "targetPackage", "Ljava/lang/String;");
    jfieldID securityLevelField = env->GetFieldID(configClass, "securityLevel", "I");
    jfieldID enableNonRootField = env->GetFieldID(configClass, "enableNonRoot", "Z");
    jfieldID enableAntiHookField = env->GetFieldID(configClass, "enableAntiHook", "Z");
    jfieldID enableStealthField = env->GetFieldID(configClass, "enableStealth", "Z");
    
    // Extract values
    jstring jKeyAuthToken = (jstring)env->GetObjectField(jConfig, keyAuthTokenField);
    jstring jBearToken = (jstring)env->GetObjectField(jConfig, bearTokenField);
    jstring jTargetPackage = (jstring)env->GetObjectField(jConfig, targetPackageField);
    
    if (jKeyAuthToken) {
        const char* keyAuthToken = env->GetStringUTFChars(jKeyAuthToken, nullptr);
        config.keyauth_token = keyAuthToken;
        env->ReleaseStringUTFChars(jKeyAuthToken, keyAuthToken);
    }
    
    if (jBearToken) {
        const char* bearToken = env->GetStringUTFChars(jBearToken, nullptr);
        config.bear_token = bearToken;
        env->ReleaseStringUTFChars(jBearToken, bearToken);
    }
    
    if (jTargetPackage) {
        const char* targetPackage = env->GetStringUTFChars(jTargetPackage, nullptr);
        config.target_package = targetPackage;
        env->ReleaseStringUTFChars(jTargetPackage, targetPackage);
    }
    
    config.security_level = env->GetIntField(jConfig, securityLevelField);
    config.enable_nonroot = env->GetBooleanField(jConfig, enableNonRootField);
    config.enable_anti_hook = env->GetBooleanField(jConfig, enableAntiHookField);
    config.enable_stealth = env->GetBooleanField(jConfig, enableStealthField);
    
    return config;
}

extern "C" {

// JNI method implementations for MundoCore.java

JNIEXPORT jobject JNICALL
Java_com_bearmod_loader_MundoCore_nativeInitialize(JNIEnv* env, jobject thiz, jobject context, jobject config) {
    LOGI("nativeInitialize called");
    
    try {
        Core* core = Core::getInstance();
        if (!core) {
            LOGE("Failed to get Core instance");
            MundoInitResult result = {};
            result.success = false;
            result.message = "Failed to get Core instance";
            return createJavaMundoInitResult(env, result);
        }
        
        MundoConfig nativeConfig = convertJavaMundoConfig(env, config);
        MundoInitResult result = core->initialize(env, context, &nativeConfig);
        
        return createJavaMundoInitResult(env, result);
        
    } catch (const std::exception& e) {
        LOGE("nativeInitialize exception: %s", e.what());
        MundoInitResult result = {};
        result.success = false;
        result.message = e.what();
        return createJavaMundoInitResult(env, result);
    }
}

JNIEXPORT jboolean JNICALL
Java_com_bearmod_loader_MundoCore_nativeAuthenticateKeyAuth(JNIEnv* env, jobject thiz, jstring bearToken) {
    LOGI("nativeAuthenticateKeyAuth called");
    
    try {
        Core* core = Core::getInstance();
        if (!core) {
            LOGE("Core not initialized");
            return JNI_FALSE;
        }
        
        const char* token = env->GetStringUTFChars(bearToken, nullptr);
        bool result = core->authenticateKeyAuth(std::string(token));
        env->ReleaseStringUTFChars(bearToken, token);
        
        return result ? JNI_TRUE : JNI_FALSE;
        
    } catch (const std::exception& e) {
        LOGE("nativeAuthenticateKeyAuth exception: %s", e.what());
        return JNI_FALSE;
    }
}

JNIEXPORT jboolean JNICALL
Java_com_bearmod_loader_MundoCore_nativeInjectToPackage(JNIEnv* env, jobject thiz, jstring packageName) {
    LOGI("nativeInjectToPackage called");
    
    try {
        Core* core = Core::getInstance();
        if (!core) {
            LOGE("Core not initialized");
            return JNI_FALSE;
        }
        
        const char* package = env->GetStringUTFChars(packageName, nullptr);
        bool result = core->injectToPackage(std::string(package));
        env->ReleaseStringUTFChars(packageName, package);
        
        return result ? JNI_TRUE : JNI_FALSE;
        
    } catch (const std::exception& e) {
        LOGE("nativeInjectToPackage exception: %s", e.what());
        return JNI_FALSE;
    }
}

JNIEXPORT jboolean JNICALL
Java_com_bearmod_loader_MundoCore_nativeEnableESP(JNIEnv* env, jobject thiz, jboolean enable) {
    LOGI("nativeEnableESP called with enable=%s", enable ? "true" : "false");
    
    try {
        Core* core = Core::getInstance();
        if (!core) {
            LOGE("Core not initialized");
            return JNI_FALSE;
        }
        
        bool result = core->enableESP(enable == JNI_TRUE);
        return result ? JNI_TRUE : JNI_FALSE;
        
    } catch (const std::exception& e) {
        LOGE("nativeEnableESP exception: %s", e.what());
        return JNI_FALSE;
    }
}

JNIEXPORT jboolean JNICALL
Java_com_bearmod_loader_MundoCore_nativeEnableSkinMods(JNIEnv* env, jobject thiz, jboolean enable) {
    LOGI("nativeEnableSkinMods called with enable=%s", enable ? "true" : "false");
    
    try {
        Core* core = Core::getInstance();
        if (!core) {
            LOGE("Core not initialized");
            return JNI_FALSE;
        }
        
        bool result = core->enableSkinMods(enable == JNI_TRUE);
        return result ? JNI_TRUE : JNI_FALSE;
        
    } catch (const std::exception& e) {
        LOGE("nativeEnableSkinMods exception: %s", e.what());
        return JNI_FALSE;
    }
}

JNIEXPORT jstring JNICALL
Java_com_bearmod_loader_MundoCore_nativeGetSecurityStatus(JNIEnv* env, jobject thiz) {
    LOGI("nativeGetSecurityStatus called");
    
    try {
        Core* core = Core::getInstance();
        if (!core) {
            LOGE("Core not initialized");
            return env->NewStringUTF("Core not initialized");
        }
        
        std::string status = core->getSecurityStatus();
        return env->NewStringUTF(status.c_str());
        
    } catch (const std::exception& e) {
        LOGE("nativeGetSecurityStatus exception: %s", e.what());
        return env->NewStringUTF("Error getting security status");
    }
}

JNIEXPORT jint JNICALL
Java_com_bearmod_loader_MundoCore_nativeGetThreatLevel(JNIEnv* env, jobject thiz) {
    LOGI("nativeGetThreatLevel called");
    
    try {
        Core* core = Core::getInstance();
        if (!core) {
            LOGE("Core not initialized");
            return -1;
        }
        
        return core->getThreatLevel();
        
    } catch (const std::exception& e) {
        LOGE("nativeGetThreatLevel exception: %s", e.what());
        return -1;
    }
}

JNIEXPORT jboolean JNICALL
Java_com_bearmod_loader_MundoCore_nativeIsInjectionActive(JNIEnv* env, jobject thiz) {
    LOGI("nativeIsInjectionActive called");
    
    try {
        Core* core = Core::getInstance();
        if (!core) {
            LOGE("Core not initialized");
            return JNI_FALSE;
        }
        
        bool result = core->isInjectionActive();
        return result ? JNI_TRUE : JNI_FALSE;
        
    } catch (const std::exception& e) {
        LOGE("nativeIsInjectionActive exception: %s", e.what());
        return JNI_FALSE;
    }
}

JNIEXPORT jstring JNICALL
Java_com_bearmod_loader_MundoCore_nativeGetLastError(JNIEnv* env, jobject thiz) {
    LOGI("nativeGetLastError called");
    
    try {
        Core* core = Core::getInstance();
        if (!core) {
            LOGE("Core not initialized");
            return env->NewStringUTF("Core not initialized");
        }
        
        std::string error = core->getLastError();
        return env->NewStringUTF(error.c_str());
        
    } catch (const std::exception& e) {
        LOGE("nativeGetLastError exception: %s", e.what());
        return env->NewStringUTF("Error getting last error");
    }
}

JNIEXPORT void JNICALL
Java_com_bearmod_loader_MundoCore_nativeShutdown(JNIEnv* env, jobject thiz) {
    LOGI("nativeShutdown called");
    
    try {
        Core* core = Core::getInstance();
        if (core) {
            core->shutdown();
        }
        
    } catch (const std::exception& e) {
        LOGE("nativeShutdown exception: %s", e.what());
    }
}

} // extern "C"
