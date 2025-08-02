# 🛠️ BearMod v2.0 Development Guide

## 🔄 Development Workflow

### 1. Feature Development Process

```bash
# 1. Create feature branch from main
git checkout main
git pull origin main
git checkout -b feature/your-feature-name

# 2. Make your changes
# ... code changes ...

# 3. Commit with conventional format
git add .
git commit -m "🚀 feat: add your feature description"

# 4. Push to trigger auto-PR creation
git push origin feature/your-feature-name
```

### 2. Automated Processes

When you push a feature branch, the following happens automatically:

- ✅ **Auto-PR Creation** - GitHub Actions creates a pull request
- ✅ **Build Validation** - Automated build and test verification
- ✅ **Security Scanning** - CodeQL analysis and security checks
- ✅ **APK Size Check** - Enforces 20MB limit
- ✅ **Code Quality** - Lint analysis and quality reports

### 3. Branch Protection Rules

- **Main Branch** - Protected, requires PR approval
- **Feature Branches** - Auto-create PRs when pushed
- **Security Checks** - All PRs must pass security validation
- **Build Requirements** - Must build successfully before merge

## 🔨 Local Development

### Quick Build Commands

#### Windows
```batch
# Debug build (most common)
build.bat debug

# Release build
build.bat release

# Clean build
build.bat clean

# Run tests
build.bat test
```

#### Linux/macOS
```bash
# Make executable (first time only)
chmod +x build.sh

# Debug build (most common)
./build.sh debug

# Release build
./build.sh release

# Clean build
./build.sh clean

# Run tests
./build.sh test
```

### Manual Gradle Commands

```bash
# Clean and build debug
./gradlew clean assembleDebug

# Build release
./gradlew assembleRelease

# Run all tests
./gradlew test

# Run specific tests
./gradlew testDebugUnitTest

# Install on device
./gradlew installDebug

# Generate lint report
./gradlew lintDebug
```

## 📋 Commit Message Format

Use conventional commit format with emojis:

```
🚀 feat: add new injection method
🐛 fix: resolve memory leak in gadget manager
📚 docs: update API documentation
🔧 refactor: improve NonRootManager performance
🧪 test: add unit tests for SecureScriptManager
🔒 security: enhance anti-hook protection
🎨 style: update UI components
⚡ perf: optimize APK size
```

### Commit Types
- **feat**: New feature
- **fix**: Bug fix
- **docs**: Documentation changes
- **style**: Code style changes (formatting, etc.)
- **refactor**: Code refactoring
- **test**: Adding or updating tests
- **chore**: Maintenance tasks
- **security**: Security improvements

## 🧪 Testing Guidelines

### Unit Testing
```bash
# Run all unit tests
./gradlew testDebugUnitTest

# Run specific test class
./gradlew testDebugUnitTest --tests="*NonRootManagerTest*"

# Generate test report
./gradlew testDebugUnitTest --continue
```

### Manual Testing Checklist
- [ ] APK builds successfully (debug and release)
- [ ] App launches without crashes
- [ ] Injection functionality works on target apps
- [ ] UI responds correctly to user interactions
- [ ] Permissions are requested and handled properly
- [ ] OTA updates work correctly
- [ ] No memory leaks detected
- [ ] APK size is under 20MB limit

### Integration Testing
- [ ] Test with real target applications
- [ ] Verify non-root injection works
- [ ] Test KeyAuth authentication flow
- [ ] Verify script loading and execution
- [ ] Test anti-hook protection mechanisms

## 🛡️ Security Development

### Security Checklist
- [ ] No hardcoded API keys or secrets
- [ ] Sensitive data properly encrypted
- [ ] Input validation implemented
- [ ] Debug logging minimized in release builds
- [ ] Permissions properly scoped
- [ ] Network communications secured

### Code Review Focus Areas
1. **Security Vulnerabilities** - Check for potential security issues
2. **Performance Impact** - Ensure changes don't degrade performance
3. **APK Size** - Monitor impact on APK size
4. **Code Quality** - Follow project coding standards
5. **Documentation** - Update docs for new features

## 📱 APK Requirements

### Size Limits
- **Maximum APK Size**: 20MB (enforced in CI/CD)
- **Target Size**: <15MB for optimal distribution

### Compatibility
- **Minimum SDK**: Android 28 (API level 28)
- **Target SDK**: Android 35 (API level 35)
- **Architecture**: ARM64-v8a (primary)

### Performance Requirements
- **App Launch Time**: <3 seconds on mid-range devices
- **Memory Usage**: <100MB baseline
- **Battery Impact**: Minimal background usage

## 🔧 Build Configuration

### Debug vs Release
- **Debug**: Full logging, debugging symbols, unobfuscated
- **Release**: Minimal logging, obfuscated, optimized

### NDK Configuration
- **NDK Version**: 25.1.8937393
- **C++ Standard**: C++17
- **Architecture**: ARM64-v8a

### Gradle Configuration
- **AGP Version**: 8.12.0
- **Gradle Version**: 8.13
- **Java Version**: 17

## 🚀 Release Process

### Automated Release (Main Branch)
1. **Merge PR** to main branch
2. **Automated Build** triggers on main
3. **Security Scan** runs automatically
4. **Release Creation** with APK artifacts
5. **Version Tagging** with release notes

### Manual Release
```bash
# Create release tag
git tag -a v2.1.0 -m "BearMod v2.1.0 Release"

# Push tag to trigger release
git push origin v2.1.0
```

## 📚 Documentation

### Required Documentation Updates
- [ ] Update README.md for new features
- [ ] Add API documentation for new methods
- [ ] Update security guidelines if applicable
- [ ] Add examples for new functionality

### Documentation Standards
- Use clear, concise language
- Include code examples
- Add screenshots for UI changes
- Update version information

## 🤝 Contributing Guidelines

1. **Fork** the repository
2. **Create** feature branch from main
3. **Follow** coding standards and commit format
4. **Test** thoroughly before submitting
5. **Update** documentation as needed
6. **Submit** PR with detailed description

### Code Standards
- Follow existing code style
- Add comments for complex logic
- Use meaningful variable names
- Keep functions focused and small
- Handle errors appropriately

## 🔍 Troubleshooting

### Common Build Issues
- **NDK not found**: Check NDK installation and path
- **Gradle sync failed**: Clean and rebuild project
- **APK too large**: Check for unnecessary resources
- **Tests failing**: Verify test environment setup

### Development Environment
- **Android Studio**: Use latest stable version
- **JDK**: Ensure JDK 17 is properly configured
- **Git**: Configure user name and email
- **NDK**: Install correct version (25.1.8937393)
