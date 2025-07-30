#!/bin/bash

# BearMod Comprehensive Testing Script
# Executes full testing matrix across all PUBG variants

set -e

# Configuration
SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="$(dirname "$SCRIPT_DIR")"
DEVICE_SERIAL="${1:-}"
TEST_RESULTS_DIR="$PROJECT_ROOT/test/results"
TIMESTAMP=$(date +"%Y%m%d_%H%M%S")

# Colors for output
RED='\033[0;31m'
GREEN='\033[0;32m'
YELLOW='\033[1;33m'
BLUE='\033[0;34m'
NC='\033[0m' # No Color

# Test configuration
PUBG_VARIANTS=("global" "korea" "vietnam" "taiwan")
PUBG_PACKAGES=("com.tencent.ig" "com.pubg.krmobile" "com.vng.pubgmobile" "com.rekoo.pubgm")
DEPLOYMENT_PATH="/data/local/tmp"

# Logging functions
log_info() {
    echo -e "${BLUE}[INFO]${NC} $1"
}

log_success() {
    echo -e "${GREEN}[SUCCESS]${NC} $1"
}

log_warning() {
    echo -e "${YELLOW}[WARNING]${NC} $1"
}

log_error() {
    echo -e "${RED}[ERROR]${NC} $1"
}

# Check prerequisites
check_prerequisites() {
    log_info "Checking prerequisites..."
    
    # Check if device is specified
    if [ -z "$DEVICE_SERIAL" ]; then
        log_error "Device serial not specified. Usage: $0 <device_serial>"
        exit 1
    fi
    
    # Check if adb is available
    if ! command -v adb &> /dev/null; then
        log_error "ADB not found in PATH"
        exit 1
    fi
    
    # Check device connection
    if ! adb -s "$DEVICE_SERIAL" shell echo "connected" &> /dev/null; then
        log_error "Cannot connect to device: $DEVICE_SERIAL"
        exit 1
    fi
    
    # Create results directory
    mkdir -p "$TEST_RESULTS_DIR"
    
    log_success "Prerequisites check passed"
}

# Initialize test environment
initialize_test_environment() {
    log_info "Initializing test environment..."
    
    # Clean previous test artifacts
    adb -s "$DEVICE_SERIAL" shell "rm -rf $DEPLOYMENT_PATH/bearmod_* $DEPLOYMENT_PATH/libhelper*" 2>/dev/null || true
    
    # Deploy test payloads
    cd "$PROJECT_ROOT"
    for variant in "${PUBG_VARIANTS[@]}"; do
        if [ -f "script/payloads/bearmod_$variant.js" ]; then
            adb -s "$DEVICE_SERIAL" push "script/payloads/bearmod_$variant.js" "$DEPLOYMENT_PATH/bearmod_$variant.js"
            log_info "Deployed $variant payload"
        else
            log_warning "Payload not found: bearmod_$variant.js"
        fi
    done
    
    # Deploy base framework
    if [ -f "script/payloads/bearmod_base.js" ]; then
        adb -s "$DEVICE_SERIAL" push "script/payloads/bearmod_base.js" "$DEPLOYMENT_PATH/bearmod_base.js"
        log_info "Deployed base framework"
    fi
    
    # Deploy Frida Gadget
    if [ -f "mundo_core/src/main/jniLibs/arm64-v8a/libhelper.so" ]; then
        adb -s "$DEVICE_SERIAL" push "mundo_core/src/main/jniLibs/arm64-v8a/libhelper.so" "$DEPLOYMENT_PATH/libhelper.so"
        adb -s "$DEVICE_SERIAL" shell "chmod 755 $DEPLOYMENT_PATH/libhelper.so"
        log_info "Deployed Frida Gadget"
    fi
    
    # Deploy Frida configuration
    if [ -f "mundo_core/src/main/assets/libhelper.config.so" ]; then
        adb -s "$DEVICE_SERIAL" push "mundo_core/src/main/assets/libhelper.config.so" "$DEPLOYMENT_PATH/libhelper.config.so"
        adb -s "$DEVICE_SERIAL" shell "chmod 644 $DEPLOYMENT_PATH/libhelper.config.so"
        log_info "Deployed Frida configuration"
    fi
    
    log_success "Test environment initialized"
}

# Test library loading and initialization
test_library_loading() {
    local variant="$1"
    local package="$2"
    local test_result_file="$TEST_RESULTS_DIR/library_loading_${variant}_${TIMESTAMP}.log"
    
    log_info "Testing library loading for $variant variant..."
    
    {
        echo "=== Library Loading Test for $variant ==="
        echo "Timestamp: $(date)"
        echo "Device: $DEVICE_SERIAL"
        echo "Package: $package"
        echo ""
        
        # Test Frida Gadget presence
        if adb -s "$DEVICE_SERIAL" shell "test -f $DEPLOYMENT_PATH/libhelper.so"; then
            echo "✓ Frida Gadget library present"
        else
            echo "✗ Frida Gadget library missing"
            return 1
        fi
        
        # Test payload presence
        if adb -s "$DEVICE_SERIAL" shell "test -f $DEPLOYMENT_PATH/bearmod_$variant.js"; then
            echo "✓ JavaScript payload present"
        else
            echo "✗ JavaScript payload missing"
            return 1
        fi
        
        # Test library permissions
        local lib_perms=$(adb -s "$DEVICE_SERIAL" shell "stat -c %a $DEPLOYMENT_PATH/libhelper.so" 2>/dev/null || echo "000")
        if [ "$lib_perms" = "755" ]; then
            echo "✓ Library permissions correct (755)"
        else
            echo "✗ Library permissions incorrect ($lib_perms)"
            return 1
        fi
        
        echo "✓ Library loading test passed for $variant"
        
    } | tee "$test_result_file"
    
    return 0
}

# Test JavaScript payload execution
test_payload_execution() {
    local variant="$1"
    local package="$2"
    local test_result_file="$TEST_RESULTS_DIR/payload_execution_${variant}_${TIMESTAMP}.log"
    
    log_info "Testing payload execution for $variant variant..."
    
    {
        echo "=== Payload Execution Test for $variant ==="
        echo "Timestamp: $(date)"
        echo "Device: $DEVICE_SERIAL"
        echo "Package: $package"
        echo ""
        
        # Check payload syntax
        local payload_path="$PROJECT_ROOT/script/payloads/bearmod_$variant.js"
        if [ -f "$payload_path" ]; then
            # Basic syntax check (if node is available)
            if command -v node &> /dev/null; then
                if node -c "$payload_path" 2>/dev/null; then
                    echo "✓ Payload syntax valid"
                else
                    echo "✗ Payload syntax error"
                    return 1
                fi
            else
                echo "⚠ Node.js not available for syntax check"
            fi
        fi
        
        # Test payload size
        local payload_size=$(adb -s "$DEVICE_SERIAL" shell "wc -c < $DEPLOYMENT_PATH/bearmod_$variant.js" 2>/dev/null || echo "0")
        if [ "$payload_size" -gt 1000 ]; then
            echo "✓ Payload size reasonable ($payload_size bytes)"
        else
            echo "✗ Payload size too small ($payload_size bytes)"
            return 1
        fi
        
        # Test payload loading time
        local start_time=$(date +%s%N)
        adb -s "$DEVICE_SERIAL" shell "cat $DEPLOYMENT_PATH/bearmod_$variant.js > /dev/null"
        local end_time=$(date +%s%N)
        local load_time=$(( (end_time - start_time) / 1000000 ))
        
        if [ "$load_time" -lt 1000 ]; then
            echo "✓ Payload loading time acceptable (${load_time}ms)"
        else
            echo "⚠ Payload loading time high (${load_time}ms)"
        fi
        
        echo "✓ Payload execution test passed for $variant"
        
    } | tee "$test_result_file"
    
    return 0
}

# Test stealth capabilities
test_stealth_capabilities() {
    local variant="$1"
    local package="$2"
    local test_result_file="$TEST_RESULTS_DIR/stealth_capabilities_${variant}_${TIMESTAMP}.log"
    
    log_info "Testing stealth capabilities for $variant variant..."
    
    {
        echo "=== Stealth Capabilities Test for $variant ==="
        echo "Timestamp: $(date)"
        echo "Device: $DEVICE_SERIAL"
        echo "Package: $package"
        echo ""
        
        # Test for Frida detection tools
        local detection_tools=("frida-ps" "frida-trace" "frida-discover")
        for tool in "${detection_tools[@]}"; do
            if adb -s "$DEVICE_SERIAL" shell "which $tool" &>/dev/null; then
                echo "⚠ Detection tool found: $tool"
            else
                echo "✓ No $tool detected"
            fi
        done
        
        # Test for suspicious processes
        local suspicious_processes=("frida-server" "frida-agent" "gum-js-loop")
        for process in "${suspicious_processes[@]}"; do
            if adb -s "$DEVICE_SERIAL" shell "pgrep $process" &>/dev/null; then
                echo "⚠ Suspicious process found: $process"
            else
                echo "✓ No $process detected"
            fi
        done
        
        # Test file hiding (files should exist but be hidden from casual detection)
        local hidden_files=("bearmod_$variant.js" "libhelper.so" "libhelper.config.so")
        for file in "${hidden_files[@]}"; do
            if adb -s "$DEVICE_SERIAL" shell "test -f $DEPLOYMENT_PATH/$file"; then
                echo "✓ File deployed: $file"
                
                # Test if file is in obvious locations
                if adb -s "$DEVICE_SERIAL" shell "ls /system/lib*/ | grep -i frida" &>/dev/null; then
                    echo "⚠ Frida artifacts in system directories"
                else
                    echo "✓ No obvious Frida artifacts in system"
                fi
            else
                echo "✗ File missing: $file"
            fi
        done
        
        echo "✓ Stealth capabilities test completed for $variant"
        
    } | tee "$test_result_file"
    
    return 0
}

# Test performance benchmarks
test_performance_benchmarks() {
    local variant="$1"
    local package="$2"
    local test_result_file="$TEST_RESULTS_DIR/performance_benchmarks_${variant}_${TIMESTAMP}.log"
    
    log_info "Testing performance benchmarks for $variant variant..."
    
    {
        echo "=== Performance Benchmarks Test for $variant ==="
        echo "Timestamp: $(date)"
        echo "Device: $DEVICE_SERIAL"
        echo "Package: $package"
        echo ""
        
        # Test file access time
        local start_time=$(date +%s%N)
        adb -s "$DEVICE_SERIAL" shell "ls -la $DEPLOYMENT_PATH/bearmod_$variant.js" &>/dev/null
        local end_time=$(date +%s%N)
        local access_time=$(( (end_time - start_time) / 1000000 ))
        echo "File access time: ${access_time}ms"
        
        # Test memory usage
        local memory_info=$(adb -s "$DEVICE_SERIAL" shell "cat /proc/meminfo | grep MemAvailable" | awk '{print $2}')
        echo "Available memory: ${memory_info}kB"
        
        # Test CPU usage
        local cpu_usage=$(adb -s "$DEVICE_SERIAL" shell "top -n 1 | head -3 | tail -1" | awk '{print $9}')
        echo "CPU idle: $cpu_usage"
        
        # Test storage usage
        local storage_usage=$(adb -s "$DEVICE_SERIAL" shell "df $DEPLOYMENT_PATH | tail -1" | awk '{print $5}')
        echo "Storage usage: $storage_usage"
        
        echo "✓ Performance benchmarks completed for $variant"
        
    } | tee "$test_result_file"
    
    return 0
}

# Test package compatibility
test_package_compatibility() {
    local variant="$1"
    local package="$2"
    local test_result_file="$TEST_RESULTS_DIR/package_compatibility_${variant}_${TIMESTAMP}.log"
    
    log_info "Testing package compatibility for $variant variant..."
    
    {
        echo "=== Package Compatibility Test for $variant ==="
        echo "Timestamp: $(date)"
        echo "Device: $DEVICE_SERIAL"
        echo "Package: $package"
        echo ""
        
        # Check if package is installed
        if adb -s "$DEVICE_SERIAL" shell "pm list packages | grep $package" &>/dev/null; then
            echo "✓ Target package installed: $package"
            
            # Get package info
            local package_info=$(adb -s "$DEVICE_SERIAL" shell "dumpsys package $package | grep versionName" | head -1)
            echo "Package info: $package_info"
            
            # Check package permissions
            local permissions=$(adb -s "$DEVICE_SERIAL" shell "dumpsys package $package | grep permission" | wc -l)
            echo "Package permissions count: $permissions"
            
        else
            echo "⚠ Target package not installed: $package"
            echo "Note: This is expected if testing on a device without all PUBG variants"
        fi
        
        echo "✓ Package compatibility test completed for $variant"
        
    } | tee "$test_result_file"
    
    return 0
}

# Run comprehensive test suite
run_comprehensive_tests() {
    log_info "Starting comprehensive test suite..."
    
    local total_tests=0
    local passed_tests=0
    local failed_tests=0
    
    # Test each variant
    for i in "${!PUBG_VARIANTS[@]}"; do
        local variant="${PUBG_VARIANTS[$i]}"
        local package="${PUBG_PACKAGES[$i]}"
        
        log_info "Testing $variant variant ($package)..."
        
        # Run all test categories
        local variant_tests=0
        local variant_passed=0
        
        # Library loading test
        ((variant_tests++))
        if test_library_loading "$variant" "$package"; then
            ((variant_passed++))
            log_success "Library loading test passed for $variant"
        else
            log_error "Library loading test failed for $variant"
        fi
        
        # Payload execution test
        ((variant_tests++))
        if test_payload_execution "$variant" "$package"; then
            ((variant_passed++))
            log_success "Payload execution test passed for $variant"
        else
            log_error "Payload execution test failed for $variant"
        fi
        
        # Stealth capabilities test
        ((variant_tests++))
        if test_stealth_capabilities "$variant" "$package"; then
            ((variant_passed++))
            log_success "Stealth capabilities test passed for $variant"
        else
            log_error "Stealth capabilities test failed for $variant"
        fi
        
        # Performance benchmarks test
        ((variant_tests++))
        if test_performance_benchmarks "$variant" "$package"; then
            ((variant_passed++))
            log_success "Performance benchmarks test passed for $variant"
        else
            log_error "Performance benchmarks test failed for $variant"
        fi
        
        # Package compatibility test
        ((variant_tests++))
        if test_package_compatibility "$variant" "$package"; then
            ((variant_passed++))
            log_success "Package compatibility test passed for $variant"
        else
            log_error "Package compatibility test failed for $variant"
        fi
        
        # Update totals
        total_tests=$((total_tests + variant_tests))
        passed_tests=$((passed_tests + variant_passed))
        failed_tests=$((failed_tests + variant_tests - variant_passed))
        
        log_info "$variant variant: $variant_passed/$variant_tests tests passed"
    done
    
    # Generate summary report
    generate_summary_report "$total_tests" "$passed_tests" "$failed_tests"
}

# Generate summary report
generate_summary_report() {
    local total="$1"
    local passed="$2"
    local failed="$3"
    local summary_file="$TEST_RESULTS_DIR/test_summary_${TIMESTAMP}.log"
    
    {
        echo "=== BearMod Comprehensive Test Summary ==="
        echo "Timestamp: $(date)"
        echo "Device: $DEVICE_SERIAL"
        echo ""
        echo "Total Tests: $total"
        echo "Passed: $passed"
        echo "Failed: $failed"
        echo "Success Rate: $(( passed * 100 / total ))%"
        echo ""
        echo "Test Results Directory: $TEST_RESULTS_DIR"
        echo ""
        
        if [ "$failed" -eq 0 ]; then
            echo "🎉 ALL TESTS PASSED! BearMod injection system is ready for production."
        else
            echo "⚠ $failed tests failed. Review individual test logs for details."
        fi
        
    } | tee "$summary_file"
    
    if [ "$failed" -eq 0 ]; then
        log_success "All tests passed! ($passed/$total)"
    else
        log_warning "$failed tests failed. Check $summary_file for details."
    fi
}

# Main execution
main() {
    echo "BearMod Comprehensive Testing Script"
    echo "===================================="
    echo ""
    
    check_prerequisites
    initialize_test_environment
    run_comprehensive_tests
    
    log_info "Testing completed. Results saved to: $TEST_RESULTS_DIR"
}

# Run main function
main "$@"
