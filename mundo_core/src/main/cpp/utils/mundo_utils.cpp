#include <android/log.h>
#include <chrono>
#include <ctime>
#include <sstream>
#include <iomanip>
#include <string>
#include <thread>
#include <unistd.h>

#define LOG_TAG "Mundo.Utils"
#define LOGI(...) __android_log_print(ANDROID_LOG_INFO, LOG_TAG, __VA_ARGS__)
#define LOGE(...) __android_log_print(ANDROID_LOG_ERROR, LOG_TAG, __VA_ARGS__)

namespace Mundo {
    namespace Utils {

        // Returns current time as ISO 8601 string
        std::string getCurrentTimestamp() {
            auto now = std::chrono::system_clock::now();
            std::time_t now_c = std::chrono::system_clock::to_time_t(now);
            std::tm tm;
            localtime_r(&now_c, &tm);
            std::ostringstream oss;
            oss << std::put_time(&tm, "%Y-%m-%dT%H:%M:%S");
            return oss.str();
        }

        // Sleep for given milliseconds
        void sleepMs(int ms) {
            std::this_thread::sleep_for(std::chrono::milliseconds(ms));
        }

        // Get current process ID
        pid_t getCurrentPid() {
            return getpid();
        }

        // Log utility initialization with timestamp and PID
        void initializeUtils() {
            std::string ts = getCurrentTimestamp();
            pid_t pid = getCurrentPid();
            LOGI("Mundo utils initialized at %s (pid=%d)", ts.c_str(), pid);
        }

        // Example: log an error with timestamp
        void logError(const std::string& message) {
            std::string ts = getCurrentTimestamp();
            LOGE("[ERROR][%s] %s", ts.c_str(), message.c_str());
        }

    } // namespace Utils
} // namespace Mundo