#include "keyauth_bridge.h"
#include <android/log.h>

#define LOG_TAG "Mundo.KeyAuthBridge"
#define LOGI(...) __android_log_print(ANDROID_LOG_INFO, LOG_TAG, __VA_ARGS__)
#define LOGE(...) __android_log_print(ANDROID_LOG_ERROR, LOG_TAG, __VA_ARGS__)

namespace Mundo {
    namespace Integration {

        // Static member definitions
        JNIEnv* KeyAuthBridge::s_env = nullptr;
        jobject KeyAuthBridge::s_context = nullptr;

        bool KeyAuthBridge::initialize(JNIEnv* env, jobject context) {
            LOGI("Initializing KeyAuth bridge");
            s_env = env;
            s_context = env->NewGlobalRef(context);
            return true;
        }

        bool KeyAuthBridge::authenticateWithExistingSystem(const std::string& bearToken) {
            LOGI("KeyAuth bridge authentication called with BearToken");

            if (!s_env || !s_context) {
                LOGE("KeyAuth bridge not initialized");
                return false;
            }

            if (bearToken.empty()) {
                LOGE("Empty BearToken provided");
                return false;
            }

            try {
                // Use existing SimpleLicenseVerifier for authentication
                jclass simpleLicenseVerifierClass = s_env->FindClass("com/bearmod/auth/SimpleLicenseVerifier");
                if (!simpleLicenseVerifierClass) {
                    LOGE("Failed to find SimpleLicenseVerifier class");
                    return false;
                }

                // Get quickLicenseCheck method (synchronous)
                jmethodID quickLicenseCheckMethod = s_env->GetStaticMethodID(simpleLicenseVerifierClass,
                    "quickLicenseCheck", "(Landroid/content/Context;Ljava/lang/String;)Z");
                if (!quickLicenseCheckMethod) {
                    LOGE("Failed to find SimpleLicenseVerifier.quickLicenseCheck method");
                    return false;
                }

                // Convert bearToken to jstring
                jstring jBearToken = s_env->NewStringUTF(bearToken.c_str());
                if (!jBearToken) {
                    LOGE("Failed to create jstring for bearToken");
                    return false;
                }

                // Call quickLicenseCheck method
                jboolean result = s_env->CallStaticBooleanMethod(simpleLicenseVerifierClass,
                    quickLicenseCheckMethod, s_context, jBearToken);

                // Clean up local references
                s_env->DeleteLocalRef(jBearToken);
                s_env->DeleteLocalRef(simpleLicenseVerifierClass);

                // Check for JNI exceptions
                if (s_env->ExceptionCheck()) {
                    s_env->ExceptionDescribe();
                    s_env->ExceptionClear();
                    LOGE("JNI exception during license verification");
                    return false;
                }

                bool authResult = (result == JNI_TRUE);
                LOGI("BearToken validation via SimpleLicenseVerifier: %s", authResult ? "SUCCESS" : "FAILED");
                return authResult;

            } catch (...) {
                LOGE("Exception during KeyAuth bridge authentication");
                return false;
            }
        }


        bool KeyAuthBridge::authenticateWithLicenseKey(const std::string& licenseKey) {
            LOGI("KeyAuth bridge license authentication called");

            if (!s_env || !s_context) {
                LOGE("KeyAuth bridge not initialized");
                return false;
            }

            if (licenseKey.empty()) {
                LOGE("Empty license key provided");
                return false;
            }

            try {
                // Use existing SimpleLicenseVerifier for license key authentication
                jclass simpleLicenseVerifierClass = s_env->FindClass("com/bearmod/auth/SimpleLicenseVerifier");
                if (!simpleLicenseVerifierClass) {
                    LOGE("Failed to find SimpleLicenseVerifier class");
                    return false;
                }

                // Get quickLicenseCheck method (synchronous)
                jmethodID quickLicenseCheckMethod = s_env->GetStaticMethodID(simpleLicenseVerifierClass,
                    "quickLicenseCheck", "(Landroid/content/Context;Ljava/lang/String;)Z");
                if (!quickLicenseCheckMethod) {
                    LOGE("Failed to find SimpleLicenseVerifier.quickLicenseCheck method");
                    return false;
                }

                // Convert licenseKey to jstring
                jstring jLicenseKey = s_env->NewStringUTF(licenseKey.c_str());
                if (!jLicenseKey) {
                    LOGE("Failed to create jstring for licenseKey");
                    return false;
                }

                // Call quickLicenseCheck method
                jboolean result = s_env->CallStaticBooleanMethod(simpleLicenseVerifierClass,
                    quickLicenseCheckMethod, s_context, jLicenseKey);

                // Clean up local references
                s_env->DeleteLocalRef(jLicenseKey);
                s_env->DeleteLocalRef(simpleLicenseVerifierClass);

                // Check for JNI exceptions
                if (s_env->ExceptionCheck()) {
                    s_env->ExceptionDescribe();
                    s_env->ExceptionClear();
                    LOGE("JNI exception during license verification");
                    return false;
                }

                bool authResult = (result == JNI_TRUE);
                LOGI("License key validation via SimpleLicenseVerifier: %s", authResult ? "SUCCESS" : "FAILED");
                return authResult;

            } catch (...) {
                LOGE("Exception during license key authentication");
                return false;
            }
        }

        void KeyAuthBridge::cleanup() {
            if (s_env && s_context) {
                s_env->DeleteGlobalRef(s_context);
                s_context = nullptr;
                s_env = nullptr;
            }
        }

    } // namespace Integration
} // namespace Mundo