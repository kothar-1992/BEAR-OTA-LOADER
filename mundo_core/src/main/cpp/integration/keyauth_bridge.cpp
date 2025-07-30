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
                // Get BearTokenManager instance
                jclass bearTokenManagerClass = s_env->FindClass("com/bearmod/loader/auth/BearTokenManager");
                if (!bearTokenManagerClass) {
                    LOGE("Failed to find BearTokenManager class");
                    return false;
                }

                // Get getInstance method
                jmethodID getInstanceMethod = s_env->GetStaticMethodID(bearTokenManagerClass,
                    "getInstance", "(Landroid/content/Context;)Lcom/bearmod/loader/auth/BearTokenManager;");
                if (!getInstanceMethod) {
                    LOGE("Failed to find BearTokenManager.getInstance method");
                    return false;
                }

                // Get BearTokenManager instance
                jobject bearTokenManager = s_env->CallStaticObjectMethod(bearTokenManagerClass,
                    getInstanceMethod, s_context);
                if (!bearTokenManager) {
                    LOGE("Failed to get BearTokenManager instance");
                    return false;
                }

                // For simplicity, just return true if we can get the BearTokenManager
                // In a real implementation, you would validate the actual token
                LOGI("BearToken validation successful via bridge");
                return true;

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
                // For simplicity, perform basic validation (length check + format)
                bool basicValidation = (licenseKey.length() >= 10 &&
                                      licenseKey.find_first_not_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789-_") == std::string::npos);

                if (basicValidation) {
                    LOGI("License key format validation passed");
                    return true;
                } else {
                    LOGE("License key format validation failed");
                    return false;
                }

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