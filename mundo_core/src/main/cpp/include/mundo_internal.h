#ifndef MUNDO_INTERNAL_H
#define MUNDO_INTERNAL_H

#include "mundo_api.h"
#include <memory>
#include <string>
#include <mutex>
#include <atomic>

namespace Mundo {

    // Forward declarations for integration bridges
    namespace Integration {
        class KeyAuthBridge;
    }

    class Core {
    private:
        static std::unique_ptr<Core> s_instance;
        static std::mutex s_mutex;
        
        std::atomic<bool> m_initialized{false};
        MundoConfig m_config;
        std::string m_lastError;
        
        // JNI environment
        JavaVM* m_jvm = nullptr;
        jobject m_context = nullptr;
        
    public:
        static Core* getInstance();
        static void destroyInstance();
        
        // Core methods
        MundoInitResult initialize(JNIEnv* env, jobject context, const MundoConfig* config);
        void shutdown();
        bool isInitialized() const { return m_initialized.load(); }
        
        // Authentication
        bool authenticateKeyAuth(const std::string& bearToken);
        bool validateLicense();
        
        // Security
        bool enableAntiHookProtection();
        int getThreatLevel();
        std::string getSecurityStatus();
        
        // Non-root injection
        bool injectToPackage(const std::string& packageName);
        bool isInjectionActive();
        
        // Game modifications
        bool enableESP(bool enable);
        bool enableSkinMods(bool enable);
        
        // Utilities
        std::string getVersion() const { return MUNDO_API_VERSION; }
        std::string getLastError() const { return m_lastError; }
        
    public:
        ~Core() = default;

    private:
        Core() = default;
        
        // Initialization helpers
        bool initializeKeyAuth();
        bool initializeSecurityComponents();
        bool initializeNonRootComponents();
        
        // Prevent copying
        Core(const Core&) = delete;
        Core& operator=(const Core&) = delete;
    };
    
} // namespace Mundo

#endif // MUNDO_INTERNAL_H