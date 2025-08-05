---
globs: app/src/main/java/com/bearmod/injection/*.java
description: Cross-manager coordination rules - IMPLEMENTATION COMPLETED ✅
---

# Cross-Manager Coordination Rules - COMPLETED ✅

## 🎯 COORDINATION ARCHITECTURE IMPLEMENTED

All critical coordination issues have been successfully resolved through the implementation of shared coordination components.

## ✅ RESOLVED COORDINATION ISSUES

### 1. Native Library Loading Coordination

**Problem Solved**: Eliminated conflicts from independent library loading across all three managers.

**Implementation**: `NativeLibraryManager.java`

- Thread-safe singleton pattern
- Actual native method verification (not just boolean flags)
- Coordinated library loading with proper error handling
- Library status debugging and force reload capabilities

**Integration**: All managers (HybridInjectionManager, InjectionManager, KeyAuthInjectionManager) now use the shared library manager.

### 2. Injection Conflict Prevention

**Problem Solved**: Prevented concurrent injection attempts that could cause system conflicts.

**Implementation**: `InjectionCoordinator.java`

- Global injection state management with atomic operations
- Manager authorization tracking (only the manager that started injection can stop it)
- Injection timeout handling (5-minute timeout with automatic cleanup)
- Force stop capabilities for emergency scenarios
- Standardized error codes for consistent error handling

**Integration**: All injection methods now check with coordinator before starting and properly release locks when finished.

### 3. Callback Interface Standardization

**Problem Solved**: Eliminated inconsistent callback interfaces that prevented proper integration.

**Implementation**: `StandardInjectionCallback.java`

- Unified callback interface with consistent method signatures
- Backward-compatible adapters for existing callback implementations
- Consistent progress reporting (0-100%) across all managers
- Standardized error handling and success reporting

**Integration**: All managers can now use the standardized interface while maintaining backward compatibility.

## 🏗️ CURRENT MANAGER RESPONSIBILITIES

### HybridInjectionManager

**Primary Responsibilities**:

- Direct native injection using libbearmod.so
- Frida script injection for debugging scenarios
- Authentication integration with pure Java AuthenticationManager
- Coordination with InjectionCoordinator for conflict prevention

**Integration Points**:

- Uses NativeLibraryManager for library loading
- Uses InjectionCoordinator for injection state management
- Integrates with AuthenticationManager for authentication checks

### InjectionManager

**Primary Responsibilities**:

- Library preparation and extraction from assets
- Basic library injection methods (native, process, hook-based)
- Package validation and compatibility checking
- Library verification and integrity checking

**Integration Points**:

- Uses NativeLibraryManager for library status
- Coordinates with other managers through shared components
- Provides library preparation services to other managers

### KeyAuthInjectionManager

**Primary Responsibilities**:

- OTA-based injection with KeyAuth authentication
- Memory-based library loading from downloaded files
- Integration with OTAUpdateManager for library updates
- Runtime monitoring coordination

**Integration Points**:

- Uses NativeLibraryManager for library verification
- Integrates with cleaned KeyAuth file system (libbearmod.so, libmundo.so)
- Coordinates with OTAUpdateManager for library management

## 🔧 SHARED COMPONENTS ARCHITECTURE

### NativeLibraryManager

- **Purpose**: Centralized native library management
- **Features**: Thread-safe loading, proper verification, status tracking
- **Usage**: All managers use this for library operations

### InjectionCoordinator

- **Purpose**: Global injection state coordination
- **Features**: Conflict prevention, timeout handling, manager authorization
- **Usage**: All injection operations must coordinate through this component

### StandardInjectionCallback

- **Purpose**: Unified callback interface
- **Features**: Consistent signatures, backward compatibility, standardized reporting
- **Usage**: All managers can implement or adapt to this interface

## 📊 IMPLEMENTATION STATUS

| Component | Status | File | Integration |
|-----------|--------|------|-------------|
| NativeLibraryManager | ✅ Complete | `NativeLibraryManager.java` | All 3 managers |
| InjectionCoordinator | ✅ Complete | `InjectionCoordinator.java` | All injection methods |
| StandardInjectionCallback | ✅ Complete | `StandardInjectionCallback.java` | All callback interfaces |
| HybridInjectionManager Updates | ✅ Complete | `HybridInjectionManager.java` | Authentication + coordination |
| InjectionManager Updates | ✅ Complete | `InjectionManager.java` | Shared library management |
| KeyAuthInjectionManager Updates | ✅ Complete | `KeyAuthInjectionManager.java` | Updated library references |

## 🎯 BENEFITS ACHIEVED

1. **Eliminated Code Duplication**: Shared library management across all managers
2. **Prevented Injection Conflicts**: Global coordination system prevents concurrent issues
3. **Improved Maintainability**: Standardized interfaces and error handling
4. **Fixed Critical Issues**: Proper library verification and missing implementations
5. **Better Integration**: Seamless integration with pure Java authentication system
6. **Enhanced Reliability**: Timeout handling and proper error recovery
7. **Clean Architecture**: Eliminated obsolete references and improved structure

## 🚀 NEXT STEPS

The injection system architecture is now complete and ready for production use. All coordination issues have been resolved, and the system provides a solid foundation for reliable BearMod injection functionality.

**Maintenance**: Regular monitoring of injection coordination logs and periodic review of shared component performance.

**Future Enhancements**: Consider adding injection analytics and performance monitoring through the shared components.

---

**Implementation Files**:

- [NativeLibraryManager.java](NativeLibraryManager.java)
- [InjectionCoordinator.java](InjectionCoordinator.java)
- [StandardInjectionCallback.java](StandardInjectionCallback.java)
- [HybridInjectionManager.java](HybridInjectionManager.java)
- [InjectionManager.java](InjectionManager.java)
- [KeyAuthInjectionManager.java](KeyAuthInjectionManager.java)
