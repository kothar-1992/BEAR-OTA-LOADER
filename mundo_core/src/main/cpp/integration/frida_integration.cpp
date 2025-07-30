#include "frida_integration.h"
#include <dlfcn.h>
#include <android/log.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fstream>

#define LOG_TAG "Mundo.Frida"
#define LOGI(...) __android_log_print(ANDROID_LOG_INFO, LOG_TAG, __VA_ARGS__)
#define LOGE(...) __android_log_print(ANDROID_LOG_ERROR, LOG_TAG, __VA_ARGS__)

namespace Mundo {
    namespace Frida {
        
        // Static member definitions
        bool GadgetManager::s_gadgetLoaded = false;
        std::string GadgetManager::s_lastError = "";
        void* GadgetManager::s_gadgetHandle = nullptr;
        
        GadgetManager::LoadResult GadgetManager::initializeGadget(const std::string& bearToken, 
                                                                const std::string& targetPackage) {
            LOGI("Initializing Frida Gadget for package: %s", targetPackage.c_str());
            
            if (s_gadgetLoaded) {
                LOGI("Frida Gadget already loaded");
                return LoadResult::ALREADY_LOADED;
            }
            
            // Validate authentication first
            if (!validateAuthentication(bearToken)) {
                s_lastError = "KeyAuth authentication failed";
                LOGE("%s", s_lastError.c_str());
                return LoadResult::AUTHENTICATION_FAILED;
            }
            
            // Load the gadget library
            if (!loadGadgetLibrary()) {
                s_lastError = "Failed to load Frida Gadget library";
                LOGE("%s", s_lastError.c_str());
                return LoadResult::LOAD_FAILED;
            }
            
            // Configure gadget for target package
            if (!configureGadget(targetPackage)) {
                s_lastError = "Failed to configure Frida Gadget";
                LOGE("%s", s_lastError.c_str());
                return LoadResult::CONFIG_FAILED;
            }
            
            s_gadgetLoaded = true;
            LOGI("Frida Gadget initialized successfully");
            return LoadResult::SUCCESS;
        }
        
        bool GadgetManager::loadJavaScriptPayload(const std::string& variantName,
                                                const std::string& scriptContent) {
            if (!s_gadgetLoaded) {
                s_lastError = "Frida Gadget not loaded";
                LOGE("%s", s_lastError.c_str());
                return false;
            }
            
            LOGI("Loading JavaScript payload for variant: %s", variantName.c_str());
            
            try {
                // Write script to temporary file
                std::string scriptPath = "/data/local/tmp/bearmod_" + variantName + ".js";
                std::ofstream scriptFile(scriptPath);
                if (!scriptFile.is_open()) {
                    s_lastError = "Failed to create script file: " + scriptPath;
                    LOGE("%s", s_lastError.c_str());
                    return false;
                }
                
                scriptFile << scriptContent;
                scriptFile.close();
                
                // Set proper permissions
                chmod(scriptPath.c_str(), 0644);
                
                LOGI("JavaScript payload loaded successfully: %s", scriptPath.c_str());
                return true;
                
            } catch (const std::exception& e) {
                s_lastError = "Exception loading JavaScript payload: " + std::string(e.what());
                LOGE("%s", s_lastError.c_str());
                return false;
            }
        }
        
        bool GadgetManager::isGadgetActive() {
            return s_gadgetLoaded && s_gadgetHandle != nullptr;
        }
        
        void GadgetManager::unloadGadget() {
            if (s_gadgetHandle) {
                dlclose(s_gadgetHandle);
                s_gadgetHandle = nullptr;
            }
            s_gadgetLoaded = false;
            LOGI("Frida Gadget unloaded");
        }
        
        std::string GadgetManager::getLastError() {
            return s_lastError;
        }
        
        bool GadgetManager::loadGadgetLibrary() {
            LOGI("Loading Frida Gadget library (libhelper.so)");
            
            // Load with stealth name
            s_gadgetHandle = dlopen("libhelper.so", RTLD_NOW | RTLD_GLOBAL);
            if (!s_gadgetHandle) {
                s_lastError = "dlopen failed: " + std::string(dlerror());
                LOGE("%s", s_lastError.c_str());
                return false;
            }
            
            LOGI("Frida Gadget library loaded successfully");
            return true;
        }
        
        bool GadgetManager::configureGadget(const std::string& targetPackage) {
            LOGI("Configuring Frida Gadget for package: %s", targetPackage.c_str());
            
            try {
                // Generate stealth configuration
                std::string config = generateStealthConfig(targetPackage);
                
                // Write configuration file
                std::string configPath = "/data/local/tmp/libhelper.config.so";
                std::ofstream configFile(configPath);
                if (!configFile.is_open()) {
                    s_lastError = "Failed to create config file: " + configPath;
                    LOGE("%s", s_lastError.c_str());
                    return false;
                }
                
                configFile << config;
                configFile.close();
                
                // Set proper permissions
                chmod(configPath.c_str(), 0644);
                
                LOGI("Frida Gadget configured successfully");
                return true;
                
            } catch (const std::exception& e) {
                s_lastError = "Exception configuring gadget: " + std::string(e.what());
                LOGE("%s", s_lastError.c_str());
                return false;
            }
        }
        
        bool GadgetManager::validateAuthentication(const std::string& bearToken) {
            // Basic validation - in production, this would validate with KeyAuth
            if (bearToken.empty() || bearToken.length() < 10) {
                return false;
            }
            
            // TODO: Implement actual KeyAuth validation
            LOGI("Authentication validated for token: %s...", bearToken.substr(0, 8).c_str());
            return true;
        }
        
        std::string GadgetManager::generateStealthConfig(const std::string& targetPackage) {
            // Generate package-specific configuration
            std::string scriptName = "bearmod_injection.js";
            
            // Customize script name based on package
            if (targetPackage.find("korea") != std::string::npos) {
                scriptName = "bearmod_korea.js";
            } else if (targetPackage.find("vng") != std::string::npos) {
                scriptName = "bearmod_vietnam.js";
            } else if (targetPackage.find("rekoo") != std::string::npos) {
                scriptName = "bearmod_taiwan.js";
            } else {
                scriptName = "bearmod_global.js";
            }
            
            return R"({
  "interaction": {
    "type": "script",
    "path": "/data/local/tmp/)" + scriptName + R"(",
    "on_change": "reload"
  },
  "teardown": "minimal",
  "runtime": "v8",
  "code_tracing": false,
  "stalker": {
    "trust_threshold": 3,
    "queue_capacity": 16384,
    "queue_drain_interval": 250
  }
})";
        }
        
    } // namespace Frida
} // namespace Mundo
