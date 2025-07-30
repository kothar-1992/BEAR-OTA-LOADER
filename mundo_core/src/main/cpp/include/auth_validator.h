/**
 * Native Authentication Validator
 * C++ implementation for KeyAuth token validation with libcurl
 */

#ifndef AUTH_VALIDATOR_H
#define AUTH_VALIDATOR_H

#include <string>
#include <memory>
#include <vector>
#include <chrono>

namespace bearmod {
namespace auth {

enum class ValidationResult {
    SUCCESS,
    INVALID_TOKEN,
    EXPIRED_TOKEN,
    REVOKED_TOKEN,
    NETWORK_ERROR,
    TIMEOUT_ERROR,
    RATE_LIMITED,
    SERVER_ERROR,
    INVALID_FORMAT
};

struct UserPermission {
    std::string name;
    std::chrono::system_clock::time_point expiry;
    bool active;
};

struct ValidationResponse {
    ValidationResult result;
    std::string message;
    std::string username;
    std::chrono::system_clock::time_point expiry;
    std::vector<UserPermission> permissions;
    
    ValidationResponse(ValidationResult res, const std::string& msg) 
        : result(res), message(msg) {}
    
    bool isSuccess() const { return result == ValidationResult::SUCCESS; }
    
    bool hasPermission(const std::string& permission) const {
        for (const auto& perm : permissions) {
            if (perm.name == permission && perm.active) {
                return std::chrono::system_clock::now() < perm.expiry;
            }
        }
        return false;
    }
};

class AuthValidator {
public:
    // Configuration
    struct Config {
        std::string baseUrl = "https://keyauth.win/api/1.2/";
        std::string appName = "BearMod";
        std::string appSecret = "your_app_secret_here";
        std::string appVersion = "1.3.0";
        int connectionTimeoutMs = 10000;
        int readTimeoutMs = 15000;
        int maxRetryAttempts = 3;
        int retryDelayMs = 2000;
    };
    
    explicit AuthValidator(const Config& config = Config{});
    ~AuthValidator();
    
    // Main validation method
    ValidationResponse validateBearToken(const std::string& bearToken);
    
    // Utility methods
    static bool isValidTokenFormat(const std::string& token);
    static std::string generateOwnerHash(const std::string& appName, const std::string& appSecret);
    
    // Configuration
    void setConfig(const Config& config);
    const Config& getConfig() const;

private:
    Config config_;
    
    // Internal validation methods
    ValidationResponse performValidationWithRetry(const std::string& bearToken);
    ValidationResponse performSingleValidation(const std::string& bearToken);
    
    // HTTP utilities
    struct HttpResponse {
        long responseCode;
        std::string body;
        std::string error;
    };
    
    HttpResponse performHttpRequest(const std::string& url, const std::string& postData);
    
    // Response parsing
    ValidationResponse parseApiResponse(const std::string& responseBody);
    ValidationResult determineErrorType(const std::string& message);
    
    // Utility methods
    std::string createRequestPayload(const std::string& bearToken);
    void logValidationAttempt(int attempt, const std::string& result);
};

// Factory function for easy creation
std::unique_ptr<AuthValidator> createAuthValidator(const AuthValidator::Config& config = AuthValidator::Config{});

// C-style interface for JNI binding
extern "C" {
    // Validation functions
    int native_validate_bear_token(const char* bearToken, char* resultBuffer, int bufferSize);
    int native_check_permission(const char* bearToken, const char* permission);
    
    // Configuration functions
    void native_set_auth_config(const char* baseUrl, const char* appName, 
                               const char* appSecret, const char* appVersion);
    
    // Utility functions
    int native_is_valid_token_format(const char* token);
    void native_generate_owner_hash(const char* appName, const char* appSecret, 
                                   char* hashBuffer, int bufferSize);
}

} // namespace auth
} // namespace bearmod

#endif // AUTH_VALIDATOR_H
