#ifndef KEYAUTH_BRIDGE_H
#define KEYAUTH_BRIDGE_H

#include <jni.h>
#include <string>

namespace Mundo {
    namespace Integration {
        
        class KeyAuthBridge {
        private:
            static JNIEnv* s_env;
            static jobject s_context;
            
        public:
            /**
             * Initialize the KeyAuth bridge with JNI environment and context
             */
            static bool initialize(JNIEnv* env, jobject context);
            
            /**
             * Authenticate using existing KeyAuth system via BearToken validation
             */
            static bool authenticateWithExistingSystem(const std::string& bearToken);
            
            /**
             * Authenticate using license key via existing KeyAuth system
             */
            static bool authenticateWithLicenseKey(const std::string& licenseKey);
            
            /**
             * Cleanup bridge resources
             */
            static void cleanup();
        };
        
    } // namespace Integration
} // namespace Mundo

#endif // KEYAUTH_BRIDGE_H
