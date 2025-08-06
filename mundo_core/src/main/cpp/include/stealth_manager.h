/**
 * Stealth Manager
 * Comprehensive anti-detection capabilities for injection system
 */

#ifndef STEALTH_MANAGER_H
#define STEALTH_MANAGER_H

#include <string>
#include <vector>
#include <memory>
#include <unordered_set>
#include <functional>

namespace bearmod {
namespace stealth {

enum class DetectionType {
    PROCESS_SCANNING,
    MEMORY_SCANNING,
    FILE_SCANNING,
    NETWORK_MONITORING,
    SYSTEM_CALL_MONITORING,
    LIBRARY_ENUMERATION,
    THREAD_ENUMERATION
};

enum class StealthLevel {
    BASIC,      // Basic hiding techniques
    ADVANCED,   // Advanced obfuscation
    PARANOID    // Maximum stealth with performance impact
};

class StealthManager {
public:
    struct Config {
        StealthLevel level = StealthLevel::ADVANCED;
        bool enableProcessHiding = true;
        bool enableMemoryObfuscation = true;
        bool enableFileHiding = true;
        bool enableNetworkStealth = true;
        bool enableSelfCleaning = true;
        bool enableBinaryObfuscation = true;
        std::vector<std::string> hiddenProcessNames;
        std::vector<std::string> hiddenLibraryNames;
        std::vector<std::string> hiddenFilePatterns;
    };
    
    StealthManager(); // Default constructor with default config
    explicit StealthManager(const Config& config);
    ~StealthManager();
    
    // Main stealth operations
    bool initializeStealth();
    bool applyStealth();
    bool removeStealth();
    
    // Process protection
    bool hideProcesses();
    bool hideThreads();
    bool spoofProcessInfo();
    
    // Memory protection
    bool obfuscateMemoryRegions();
    bool hideMemoryMappings();
    bool protectInjectedCode();
    
    // File system protection
    bool hideFiles();
    bool hideLibraries();
    bool cleanupArtifacts();
    
    // Network protection
    bool hideNetworkActivity();
    bool obfuscateTraffic();
    
    // Binary obfuscation
    bool obfuscateBinary();
    bool stripSymbols();
    bool applyELFModifications();
    
    // Detection monitoring
    bool startDetectionMonitoring();
    bool stopDetectionMonitoring();
    bool isDetectionAttempted(DetectionType type);
    
    // Self-cleaning
    bool scheduleCleanup(int delaySeconds = 300);
    bool performImmediateCleanup();
    
    // Configuration
    void setConfig(const Config& config);
    const Config& getConfig() const;
    
    // Status
    bool isStealthActive() const;
    std::vector<DetectionType> getDetectedScans() const;

private:
    Config config_;
    bool stealthActive_;
    std::unordered_set<DetectionType> detectedScans_;
    
    // Hook management
    struct HookInfo {
        void* originalFunction;
        void* hookFunction;
        std::string functionName;
        bool active;
    };
    std::vector<HookInfo> activeHooks_;
    
    // Process hiding implementation
    bool hookProcessEnumeration();
    bool hookFileSystemAccess();
    bool hookMemoryAccess();
    bool hookNetworkCalls();
    
    // Obfuscation implementation
    bool applyStringObfuscation();
    bool applyControlFlowObfuscation();
    bool applyAntiDebugging();
    
    // Cleanup implementation
    struct CleanupItem {
        std::string path;
        std::string type;
        std::function<bool()> cleanupFunction;
    };
    std::vector<CleanupItem> cleanupItems_;
    
    void registerCleanupItem(const std::string& path, const std::string& type, 
                           std::function<bool()> cleanupFunc);
    
    // Detection callbacks
    void onDetectionAttempt(DetectionType type, const std::string& details);
    
    // Utility methods
    bool isTargetProcess(const std::string& processName);
    bool isHiddenLibrary(const std::string& libraryName);
    bool isHiddenFile(const std::string& filePath);
    std::string obfuscateString(const std::string& input);
};

// Hook function prototypes for system call interception
extern "C" {
    // Process enumeration hooks
    int hooked_open(const char* pathname, int flags, ...);
    FILE* hooked_fopen(const char* pathname, const char* mode);
    int hooked_readdir(int fd, void* dirp, unsigned int count);
    
    // Memory access hooks
    void* hooked_dlopen(const char* filename, int flags);
    int hooked_dladdr(const void* addr, void* info);
    
    // Network hooks
    int hooked_socket(int domain, int type, int protocol);
    int hooked_connect(int sockfd, const struct sockaddr* addr, socklen_t addrlen);
    
    // System call hooks
    long hooked_syscall(long number, ...);
    int hooked_prctl(int option, unsigned long arg2, unsigned long arg3, 
                    unsigned long arg4, unsigned long arg5);
}

// Factory functions
std::unique_ptr<StealthManager> createStealthManager(const StealthManager::Config& config = StealthManager::Config{});

// Global stealth interface
namespace global {
    bool initializeGlobalStealth(const StealthManager::Config& config = StealthManager::Config{});
    bool applyGlobalStealth();
    bool removeGlobalStealth();
    bool isGlobalStealthActive();
    void cleanupGlobalStealth();
}

} // namespace stealth
} // namespace bearmod

#endif // STEALTH_MANAGER_H
