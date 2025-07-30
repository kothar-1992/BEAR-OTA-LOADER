/**
 * Native Authentication Validator Implementation
 * C++ implementation for KeyAuth token validation
 */

#include "auth_validator.h"
#include <curl/curl.h>
#include <json/json.h>
#include <openssl/sha.h>
#include <openssl/evp.h>
#include <android/log.h>
#include <sstream>
#include <iomanip>
#include <thread>
#include <regex>

#define LOG_TAG "AuthValidator"
#define LOGD(...) __android_log_print(ANDROID_LOG_DEBUG, LOG_TAG, __VA_ARGS__)
#define LOGE(...) __android_log_print(ANDROID_LOG_ERROR, LOG_TAG, __VA_ARGS__)
#define LOGI(...) __android_log_print(ANDROID_LOG_INFO, LOG_TAG, __VA_ARGS__)

namespace bearmod {
namespace auth {

// Callback for libcurl to write response data
static size_t WriteCallback(void* contents, size_t size, size_t nmemb, std::string* userp) {
    size_t totalSize = size * nmemb;
    userp->append((char*)contents, totalSize);
    return totalSize;
}

AuthValidator::AuthValidator(const Config& config) : config_(config) {
    // Initialize libcurl
    curl_global_init(CURL_GLOBAL_DEFAULT);
    LOGD("AuthValidator initialized with app: %s", config_.appName.c_str());
}

AuthValidator::~AuthValidator() {
    curl_global_cleanup();
}

ValidationResponse AuthValidator::validateBearToken(const std::string& bearToken) {
    LOGI("Starting bearToken validation");
    
    // Input validation
    if (bearToken.empty()) {
        LOGE("BearToken is empty");
        return ValidationResponse(ValidationResult::INVALID_FORMAT, "Token cannot be empty");
    }
    
    // Format validation
    if (!isValidTokenFormat(bearToken)) {
        LOGE("BearToken format is invalid");
        return ValidationResponse(ValidationResult::INVALID_FORMAT, "Invalid token format");
    }
    
    // Perform validation with retry
    ValidationResponse response = performValidationWithRetry(bearToken);
    LOGI("BearToken validation completed: %d", static_cast<int>(response.result));
    return response;
}

ValidationResponse AuthValidator::performValidationWithRetry(const std::string& bearToken) {
    ValidationResponse lastResponse(ValidationResult::NETWORK_ERROR, "No attempts made");
    
    for (int attempt = 1; attempt <= config_.maxRetryAttempts; attempt++) {
        LOGD("Validation attempt %d/%d", attempt, config_.maxRetryAttempts);
        
        try {
            ValidationResponse response = performSingleValidation(bearToken);
            
            // Return immediately on success or non-retryable errors
            if (response.isSuccess() || 
                response.result == ValidationResult::INVALID_TOKEN ||
                response.result == ValidationResult::EXPIRED_TOKEN ||
                response.result == ValidationResult::REVOKED_TOKEN ||
                response.result == ValidationResult::INVALID_FORMAT) {
                return response;
            }
            
            lastResponse = response;
            
            // Wait before retry (except on last attempt)
            if (attempt < config_.maxRetryAttempts) {
                std::this_thread::sleep_for(std::chrono::milliseconds(config_.retryDelayMs));
            }
            
        } catch (const std::exception& e) {
            LOGE("Validation attempt %d failed: %s", attempt, e.what());
            lastResponse = ValidationResponse(ValidationResult::NETWORK_ERROR, 
                                            std::string("Network error: ") + e.what());
            
            if (attempt < config_.maxRetryAttempts) {
                std::this_thread::sleep_for(std::chrono::milliseconds(config_.retryDelayMs));
            }
        }
    }
    
    return lastResponse;
}

ValidationResponse AuthValidator::performSingleValidation(const std::string& bearToken) {
    LOGD("Performing KeyAuth API validation");
    
    // Create request payload
    std::string requestPayload = createRequestPayload(bearToken);
    
    // Perform HTTP request
    HttpResponse httpResponse = performHttpRequest(config_.baseUrl, requestPayload);
    
    if (httpResponse.responseCode == 200) {
        return parseApiResponse(httpResponse.body);
    } else if (httpResponse.responseCode == 429) {
        return ValidationResponse(ValidationResult::RATE_LIMITED, "Rate limit exceeded");
    } else {
        std::string errorMsg = "HTTP " + std::to_string(httpResponse.responseCode);
        if (!httpResponse.error.empty()) {
            errorMsg += ": " + httpResponse.error;
        }
        return ValidationResponse(ValidationResult::SERVER_ERROR, errorMsg);
    }
}

AuthValidator::HttpResponse AuthValidator::performHttpRequest(const std::string& url, const std::string& postData) {
    HttpResponse response;
    CURL* curl = curl_easy_init();
    
    if (!curl) {
        response.error = "Failed to initialize CURL";
        response.responseCode = 0;
        return response;
    }
    
    try {
        // Set URL
        curl_easy_setopt(curl, CURLOPT_URL, url.c_str());
        
        // Set POST data
        curl_easy_setopt(curl, CURLOPT_POSTFIELDS, postData.c_str());
        curl_easy_setopt(curl, CURLOPT_POSTFIELDSIZE, postData.length());
        
        // Set headers
        struct curl_slist* headers = nullptr;
        headers = curl_slist_append(headers, "Content-Type: application/json");
        std::string userAgent = "BearMod-Loader/" + config_.appVersion;
        headers = curl_slist_append(headers, ("User-Agent: " + userAgent).c_str());
        curl_easy_setopt(curl, CURLOPT_HTTPHEADER, headers);
        
        // Set timeouts
        curl_easy_setopt(curl, CURLOPT_CONNECTTIMEOUT_MS, config_.connectionTimeoutMs);
        curl_easy_setopt(curl, CURLOPT_TIMEOUT_MS, config_.readTimeoutMs);
        
        // Set SSL options
        curl_easy_setopt(curl, CURLOPT_SSL_VERIFYPEER, 1L);
        curl_easy_setopt(curl, CURLOPT_SSL_VERIFYHOST, 2L);
        
        // Set write callback
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteCallback);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, &response.body);
        
        // Perform request
        CURLcode res = curl_easy_perform(curl);
        
        if (res != CURLE_OK) {
            response.error = curl_easy_strerror(res);
            response.responseCode = 0;
        } else {
            curl_easy_getinfo(curl, CURLINFO_RESPONSE_CODE, &response.responseCode);
        }
        
        // Cleanup
        curl_slist_free_all(headers);
        curl_easy_cleanup(curl);
        
    } catch (const std::exception& e) {
        response.error = e.what();
        response.responseCode = 0;
        curl_easy_cleanup(curl);
    }
    
    return response;
}

ValidationResponse AuthValidator::parseApiResponse(const std::string& responseBody) {
    try {
        Json::Value root;
        Json::Reader reader;
        
        if (!reader.parse(responseBody, root)) {
            return ValidationResponse(ValidationResult::SERVER_ERROR, "Invalid JSON response");
        }
        
        bool success = root.get("success", false).asBool();
        std::string message = root.get("message", "Unknown response").asString();
        
        if (success) {
            ValidationResponse response(ValidationResult::SUCCESS, message);
            
            // Extract user information
            response.username = root.get("username", "").asString();
            
            // Convert expiry time
            int64_t expiryTimestamp = root.get("expiry", 0).asInt64();
            response.expiry = std::chrono::system_clock::from_time_t(expiryTimestamp);
            
            // Extract permissions
            if (root.isMember("subscriptions")) {
                Json::Value subscriptions = root["subscriptions"];
                for (const auto& key : subscriptions.getMemberNames()) {
                    UserPermission perm;
                    perm.name = key;
                    perm.active = true;
                    perm.expiry = response.expiry; // Use same expiry for now
                    response.permissions.push_back(perm);
                }
            }
            
            return response;
        } else {
            ValidationResult errorType = determineErrorType(message);
            return ValidationResponse(errorType, message);
        }
        
    } catch (const std::exception& e) {
        LOGE("Error parsing API response: %s", e.what());
        return ValidationResponse(ValidationResult::SERVER_ERROR, "Response parsing error");
    }
}

ValidationResult AuthValidator::determineErrorType(const std::string& message) {
    std::string lowerMessage = message;
    std::transform(lowerMessage.begin(), lowerMessage.end(), lowerMessage.begin(), ::tolower);
    
    if (lowerMessage.find("invalid") != std::string::npos || 
        lowerMessage.find("not found") != std::string::npos) {
        return ValidationResult::INVALID_TOKEN;
    } else if (lowerMessage.find("expired") != std::string::npos) {
        return ValidationResult::EXPIRED_TOKEN;
    } else if (lowerMessage.find("revoked") != std::string::npos || 
               lowerMessage.find("banned") != std::string::npos) {
        return ValidationResult::REVOKED_TOKEN;
    } else if (lowerMessage.find("rate") != std::string::npos || 
               lowerMessage.find("limit") != std::string::npos) {
        return ValidationResult::RATE_LIMITED;
    } else {
        return ValidationResult::SERVER_ERROR;
    }
}

std::string AuthValidator::createRequestPayload(const std::string& bearToken) {
    Json::Value request;
    request["type"] = "check";
    request["name"] = config_.appName;
    request["ownerid"] = generateOwnerHash(config_.appName, config_.appSecret);
    request["sessionid"] = bearToken;
    request["version"] = config_.appVersion;
    
    Json::StreamWriterBuilder builder;
    return Json::writeString(builder, request);
}

bool AuthValidator::isValidTokenFormat(const std::string& token) {
    // Basic format validation
    if (token.length() < 32 || token.length() > 128) {
        return false;
    }
    
    // Check for alphanumeric characters only
    std::regex tokenPattern("^[a-zA-Z0-9]+$");
    return std::regex_match(token, tokenPattern);
}

std::string AuthValidator::generateOwnerHash(const std::string& appName, const std::string& appSecret) {
    std::string input = appName + appSecret;
    
    unsigned char hash[SHA256_DIGEST_LENGTH];
    SHA256_CTX sha256;
    SHA256_Init(&sha256);
    SHA256_Update(&sha256, input.c_str(), input.length());
    SHA256_Final(hash, &sha256);
    
    std::stringstream ss;
    for (int i = 0; i < SHA256_DIGEST_LENGTH; i++) {
        ss << std::hex << std::setw(2) << std::setfill('0') << (int)hash[i];
    }
    
    return ss.str();
}

void AuthValidator::setConfig(const Config& config) {
    config_ = config;
}

const AuthValidator::Config& AuthValidator::getConfig() const {
    return config_;
}

// Factory function
std::unique_ptr<AuthValidator> createAuthValidator(const AuthValidator::Config& config) {
    return std::make_unique<AuthValidator>(config);
}

// C-style interface for JNI binding
extern "C" {
    static std::unique_ptr<AuthValidator> g_validator = nullptr;
    
    int native_validate_bear_token(const char* bearToken, char* resultBuffer, int bufferSize) {
        if (!g_validator) {
            g_validator = createAuthValidator();
        }
        
        try {
            ValidationResponse response = g_validator->validateBearToken(bearToken);
            
            // Create result JSON
            Json::Value result;
            result["success"] = response.isSuccess();
            result["result"] = static_cast<int>(response.result);
            result["message"] = response.message;
            result["username"] = response.username;
            
            Json::StreamWriterBuilder builder;
            std::string resultJson = Json::writeString(builder, result);
            
            if (resultJson.length() < bufferSize) {
                strcpy(resultBuffer, resultJson.c_str());
                return 1; // Success
            } else {
                return 0; // Buffer too small
            }
        } catch (const std::exception& e) {
            LOGE("Native validation error: %s", e.what());
            return -1; // Error
        }
    }
    
    int native_check_permission(const char* bearToken, const char* permission) {
        if (!g_validator) {
            g_validator = createAuthValidator();
        }
        
        try {
            ValidationResponse response = g_validator->validateBearToken(bearToken);
            return response.hasPermission(permission) ? 1 : 0;
        } catch (const std::exception& e) {
            LOGE("Native permission check error: %s", e.what());
            return -1;
        }
    }
    
    void native_set_auth_config(const char* baseUrl, const char* appName, 
                               const char* appSecret, const char* appVersion) {
        AuthValidator::Config config;
        config.baseUrl = baseUrl;
        config.appName = appName;
        config.appSecret = appSecret;
        config.appVersion = appVersion;
        
        if (!g_validator) {
            g_validator = createAuthValidator(config);
        } else {
            g_validator->setConfig(config);
        }
    }
    
    int native_is_valid_token_format(const char* token) {
        return AuthValidator::isValidTokenFormat(token) ? 1 : 0;
    }
    
    void native_generate_owner_hash(const char* appName, const char* appSecret, 
                                   char* hashBuffer, int bufferSize) {
        std::string hash = AuthValidator::generateOwnerHash(appName, appSecret);
        if (hash.length() < bufferSize) {
            strcpy(hashBuffer, hash.c_str());
        }
    }
}

} // namespace auth
} // namespace bearmod
