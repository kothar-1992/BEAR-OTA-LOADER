#include <android/log.h>

#define LOG_TAG "Mundo.Security"
#define LOGI(...) __android_log_print(ANDROID_LOG_INFO, LOG_TAG, __VA_ARGS__)

#include "../integration/antihook_bridge.h"

namespace Mundo {
    namespace Security {

        /**
         * Initialize the upgraded anti-hook system.
         * This bridges to the enhanced anti-hook implementation
         * from the bypass/noroot/ in the app.
         */
        void initializeSecurityManager() {
            LOGI("Initializing upgraded anti-hook system via AntiHookBridge...");
            bool success = Mundo::Integration::AntiHookBridge::initializeEnhancedAntiHook();
            if (success) {
                LOGI("Anti-hook system initialized successfully.");
            } else {
                LOGI("Failed to initialize anti-hook system.");
            }
        }

        /**
         * Get the current threat level from the anti-hook system.
         * Returns 0 if no threats detected, higher values indicate threats.
         */
        int getCurrentThreatLevel() {
            return Mundo::Integration::AntiHookBridge::getCurrentThreatLevel();
        }

    } // namespace Security
} // namespace Mundo
