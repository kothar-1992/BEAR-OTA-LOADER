package com.bearmod.loader.constants;

/**
 * Centralized PUBG Package Constants
 * 
 * This class provides the standardized 4-variant PUBG package system
 * used throughout the BearMod-Loader application.
 * 
 * All other classes should reference these constants instead of 
 * maintaining separate package arrays.
 */
public final class PubgPackages {
    
    // Prevent instantiation
    private PubgPackages() {}
    
    /**
     * Standardized PUBG Mobile package names
     * Order: Global, Korea, Vietnam, Taiwan
     */
    public static final String[] PUBG_PACKAGES = {
        "com.tencent.ig",        // Global
        "com.pubg.krmobile",     // Korea
        "com.vng.pubgmobile",    // Vietnam
        "com.rekoo.pubgm"        // Taiwan
    };
    
    /**
     * Corresponding display names for PUBG variants
     * Order matches PUBG_PACKAGES array
     */
    public static final String[] PUBG_NAMES = {
        "PUBG Mobile Global",
        "PUBG Mobile Korea",
        "PUBG Mobile Vietnam",
        "PUBG Mobile Taiwan"
    };
    
    /**
     * Short variant names for internal use
     * Order matches PUBG_PACKAGES array
     */
    public static final String[] PUBG_VARIANTS = {
        "Global",
        "Korea", 
        "Vietnam",
        "Taiwan"
    };
    
    // Package indices for easy reference
    public static final int GLOBAL_INDEX = 0;
    public static final int KOREA_INDEX = 1;
    public static final int VIETNAM_INDEX = 2;
    public static final int TAIWAN_INDEX = 3;
    
    /**
     * Get package name by index
     * @param index Package index (0-3)
     * @return Package name or null if invalid index
     */
    public static String getPackageByIndex(int index) {
        if (index >= 0 && index < PUBG_PACKAGES.length) {
            return PUBG_PACKAGES[index];
        }
        return null;
    }
    
    /**
     * Get display name by index
     * @param index Package index (0-3)
     * @return Display name or null if invalid index
     */
    public static String getNameByIndex(int index) {
        if (index >= 0 && index < PUBG_NAMES.length) {
            return PUBG_NAMES[index];
        }
        return null;
    }
    
    /**
     * Get index by package name
     * @param packageName Package name to find
     * @return Index (0-3) or -1 if not found
     */
    public static int getIndexByPackage(String packageName) {
        if (packageName != null) {
            for (int i = 0; i < PUBG_PACKAGES.length; i++) {
                if (PUBG_PACKAGES[i].equals(packageName)) {
                    return i;
                }
            }
        }
        return -1;
    }
    
    /**
     * Check if package is supported
     * @param packageName Package name to check
     * @return true if supported, false otherwise
     */
    public static boolean isSupported(String packageName) {
        return getIndexByPackage(packageName) != -1;
    }
    
    /**
     * Get total number of supported packages
     * @return Number of supported PUBG packages
     */
    public static int getPackageCount() {
        return PUBG_PACKAGES.length;
    }
}
