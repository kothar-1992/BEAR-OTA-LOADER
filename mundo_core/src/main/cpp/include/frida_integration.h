#ifndef FRIDA_INTEGRATION_H
#define FRIDA_INTEGRATION_H

#include <string>
#include <functional>

namespace Mundo {
    namespace Frida {
        
        /**
         * Frida Gadget Integration Manager
         * Handles dynamic loading and configuration of Frida Gadget for JavaScript injection
         */
        class GadgetManager {
        public:
            enum class LoadResult {
                SUCCESS,
                ALREADY_LOADED,
                LOAD_FAILED,
                CONFIG_FAILED,
                AUTHENTICATION_FAILED
            };
            
            /**
             * Initialize Frida Gadget with stealth configuration
             * @param bearToken KeyAuth authentication token
             * @param targetPackage Target PUBG package name
             * @return Load result status
             */
            static LoadResult initializeGadget(const std::string& bearToken, 
                                             const std::string& targetPackage);
            
            /**
             * Load JavaScript payload for specific PUBG variant
             * @param variantName PUBG variant (global, korea, vietnam, taiwan)
             * @param scriptContent JavaScript code to inject
             * @return true if successful
             */
            static bool loadJavaScriptPayload(const std::string& variantName,
                                            const std::string& scriptContent);
            
            /**
             * Check if Frida Gadget is loaded and active
             * @return true if gadget is active
             */
            static bool isGadgetActive();
            
            /**
             * Unload Frida Gadget and cleanup
             */
            static void unloadGadget();
            
            /**
             * Get last error message
             * @return Error description
             */
            static std::string getLastError();
            
        private:
            static bool loadGadgetLibrary();
            static bool configureGadget(const std::string& bearToken);
            static bool validateAuthentication(const std::string& bearToken);
            static std::string generateStealthConfig(const std::string& targetPackage);
            
            static bool s_gadgetLoaded;
            static std::string s_lastError;
            static void* s_gadgetHandle;
        };
        
    } // namespace Frida
} // namespace Mundo

#endif // FRIDA_INTEGRATION_H
