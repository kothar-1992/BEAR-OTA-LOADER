# ===================================================================
# BearMod App Module - Optimized ProGuard Configuration
# ===================================================================
# Purpose: Aggressive code shrinking and obfuscation for minimal APK size
# Target: Reduce APK from ~70MB back to 15-17MB range

# Enable aggressive optimizations
-optimizations !code/simplification/arithmetic,!code/simplification/cast,!field/*,!class/merging/*
-optimizationpasses 5
-allowaccessmodification
-dontpreverify

# Remove debug information to reduce size
-assumenosideeffects class android.util.Log {
    public static boolean isLoggable(java.lang.String, int);
    public static int v(...);
    public static int i(...);
    public static int w(...);
    public static int d(...);
    public static int e(...);
}

# Remove unused resources
-dontwarn javax.annotation.**
-dontwarn javax.inject.**
-dontwarn sun.misc.Unsafe

# ===================================================================
# Critical Preservation Rules - DO NOT MODIFY
# ===================================================================

# Keep native library related classes from obfuscation
-keep class com.bearmod.Launcher { *; }

# Keep all JNI-related methods and classes
-keepclasseswithmembernames class * {
    native <methods>;
}

# Keep classes that might be accessed from native code
-keep class com.bearmod.** {
    public *;
    protected *;
}

# Keep ESP and GLES3JNIView functionality
-keep class com.bearmod.GLES3JNIView { *; }

# ===================================================================
# Dependency Optimization Rules
# ===================================================================

# OkHttp optimization
-dontwarn okhttp3.**
-dontwarn okio.**
-keep class okhttp3.** { *; }
-keep interface okhttp3.** { *; }

# Retrofit optimization
-dontwarn retrofit2.**
-keep class retrofit2.** { *; }
-keepattributes Signature
-keepattributes Exceptions

# Gson optimization
-keep class com.google.gson.** { *; }
-keep class * implements com.google.gson.TypeAdapterFactory
-keep class * implements com.google.gson.JsonSerializer
-keep class * implements com.google.gson.JsonDeserializer

# Remove unused Android support libraries
-dontwarn android.support.**
-dontwarn androidx.annotation.**