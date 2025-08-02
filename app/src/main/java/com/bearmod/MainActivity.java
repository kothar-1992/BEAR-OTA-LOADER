package com.bearmod;

import android.animation.Animator;
import android.animation.AnimatorSet;
import android.animation.ObjectAnimator;
import android.animation.ValueAnimator;
import android.annotation.SuppressLint;

import androidx.annotation.RequiresApi;
import androidx.appcompat.app.AppCompatActivity;

import android.app.AlertDialog;
import android.content.Intent;
import android.net.Uri;
import android.os.Build;
import android.os.Bundle;
import android.os.Handler;
import android.os.Looper;
import android.provider.Settings;
import android.util.Log;
import android.view.View;
import android.view.WindowInsets;
import android.view.WindowInsetsController;
import android.view.WindowManager;
import android.view.animation.AccelerateDecelerateInterpolator;
import android.view.animation.OvershootInterpolator;
import android.widget.AdapterView;
import android.widget.ArrayAdapter;
import android.widget.ImageView;
import android.widget.ProgressBar;
import android.widget.Spinner;
import android.widget.TextView;
import android.widget.Button;
import android.content.Context;
import android.widget.Toast;

import java.util.ArrayList;
import java.util.List;

import androidx.annotation.NonNull;
import androidx.core.view.WindowCompat;
import androidx.activity.result.ActivityResultLauncher;
import androidx.activity.result.contract.ActivityResultContracts;
import androidx.activity.OnBackPressedCallback;

import com.bearmod.ota.SecureOTAIntegration;

/**
 * MainActivity - Main App Activity for BearMod
 * <p>
 * This is the main activity that stays alive throughout the app lifecycle.
 * It initializes the native mod library and starts the floating overlay service.
 * Unlike a launcher app, this activity remains active and provides the main app UI.
 */
public class MainActivity extends AppCompatActivity {
    private static final String TAG = "MainActivity";
    
    // UI Components
    private View splashLayout;
    private View mainAppLayout;
    private ImageView logo;
    private TextView title;
    private TextView status;
    private TextView serviceStatus;
    private TextView targetStatusText;
    private ProgressBar logoProgress;
    private Button exitButton, startButton, stopButton;
    private Spinner targetBundleSpinner;

    // Modern UI Components
    private TextView countdownDays, countdownHours, countdownMinutes, countdownSeconds;
    private ImageView mainLogo;
    private Button regionGlobal, regionKorea, regionVietnam, regionTaiwan, regionIndia;
    private Button optionDefault, optionKernel;
    private TextView serverStatus;
    private ImageView detectionStatusIcon;
    private TextView safeStatus, unsafeStatus;
    private Button navHome, navTools, navOther;

    // Countdown Timer
    private Handler countdownHandler;
    private Runnable countdownRunnable;

    // Managers
    private TargetAppManager targetAppManager;
    private AntiDetectionManager antiDetectionManager;
    private InstallerPackageManager installerPackageManager;
    private PermissionManager permissionManager;
    private String selectedTargetPackage;

    // Auto-patch management
    private com.bearmod.patch.AutoPatchManager autoPatchManager;

    // Activity Result Launcher for login activity
    private ActivityResultLauncher<Intent> loginActivityLauncher;

    // State Management
    private AnimatorSet currentAnimation;
    private boolean isInitializing = false;
    private boolean isModInitialized = false;
    private boolean splashCompleted = false;
    private boolean isServiceRunning = false;

    // Modern Activity Result API for overlay permission
    @SuppressLint("SetTextI18n")
    private final androidx.activity.result.ActivityResultLauncher<Intent> overlayPermissionLauncher =
            registerForActivityResult(new androidx.activity.result.contract.ActivityResultContracts.StartActivityForResult(),
                    result -> {
                        Log.d(TAG, "Overlay permission result received");

                        // Check if overlay permission was granted
                        if (Settings.canDrawOverlays(this)) {
                            Log.d(TAG, "Overlay permission granted - continuing initialization");
                            status.setText("Permission granted! Initializing...");

                            // Continue initialization after short delay for UI feedback
                            new Handler(Looper.getMainLooper()).postDelayed(this::continueInitializationAfterPermission, 500);
                        } else {
                            Log.w(TAG, "Overlay permission denied - showing retry dialog");
                            status.setText("Overlay permission required");
                            showPermissionDeniedDialog();
                        }
                    });

    // Modern Activity Result API for unknown sources permission
    private final androidx.activity.result.ActivityResultLauncher<Intent> unknownSourcesPermissionLauncher =
            registerForActivityResult(new androidx.activity.result.contract.ActivityResultContracts.StartActivityForResult(),
                    result -> {
                        Log.d(TAG, "Unknown sources permission result received");

                        // Handle unknown sources permission result
                        if (installerPackageManager.isUnknownSourcesEnabled()) {
                            Log.d(TAG, "Unknown sources permission granted");
                            android.widget.Toast.makeText(this, "Unknown sources permission granted", android.widget.Toast.LENGTH_SHORT).show();

                            // Show restart dialog for better reliability
                            showRestartDialog();
                        } else {
                            Log.w(TAG, "Unknown sources permission denied");
                            android.widget.Toast.makeText(this, "Permission denied - package installation may not work", android.widget.Toast.LENGTH_LONG).show();

                            // Show explanation dialog
                            showPermissionExplanationDialog();
                        }
                    });

    
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);

        // Initialize Activity Result Launcher for login
        loginActivityLauncher = registerForActivityResult(
            new ActivityResultContracts.StartActivityForResult(),
                result -> {
                    if (result.getResultCode() == RESULT_OK) {
                        // Login successful - start initialization
                        Log.d(TAG, "Login successful - starting initialization");
                        startSplashAnimation();
                    } else {
                        // Login failed or cancelled - exit app
                        Log.d(TAG, "Login failed or cancelled - exiting");
                        finish();
                    }
                }
        );

        try {
        
        // Load native library first - this matches the original BearMod pattern
        try {
            System.loadLibrary("BearMod");
            System.loadLibrary("BEAR");
            Log.d(TAG, "Native library loaded successfully in MainActivity");
        } catch (UnsatisfiedLinkError e) {
            Log.e(TAG, "Failed to load native library: " + e.getMessage());
            // Continue anyway - app can work in demo mode
        } catch (Exception e) {
            Log.e(TAG, "Unexpected error loading native library: " + e.getMessage());
            // Continue anyway - app can work in demo mode
        }

        testHmacGeneration();
        
        // Configure window for fullscreen experience
        getWindow().addFlags(WindowManager.LayoutParams.FLAG_KEEP_SCREEN_ON);

            WindowCompat.setDecorFitsSystemWindows(getWindow(), false);

            setContentView(R.layout.activity_main);
            initializeViews();
            setupBackPressedHandler();
            startInitializationSequence();
            
        } catch (Exception e) {
            Log.e(TAG, "Critical error in onCreate", e);
            // Show error and exit gracefully
            try {
                new android.app.AlertDialog.Builder(this)
                    .setTitle("Startup Error")
                    .setMessage("Failed to initialize BearMod: " + e.getMessage())
                    .setPositiveButton("Exit", (dialog, which) -> finish())
                    .setCancelable(false)
                    .show();
            } catch (Exception dialogError) {
                // If we can't even show a dialog, just finish
                finish();
            }
        }
    }

    private void initializeViews() {
        // Splash screen components
        splashLayout = findViewById(R.id.splash_layout);
        findViewById(R.id.logo_container);
        logo = findViewById(R.id.logo);
        title = findViewById(R.id.title);
        status = findViewById(R.id.status);
        logoProgress = findViewById(R.id.logo_progress);
        
        // Main app components
        mainAppLayout = findViewById(R.id.main_app_layout);
        findViewById(R.id.welcome_text);
        serviceStatus = findViewById(R.id.service_status);
        startButton = findViewById(R.id.start_button);
        stopButton = findViewById(R.id.stop_button);
        exitButton = findViewById(R.id.exit_button);

        // Target bundle selection (legacy compatibility)
        targetBundleSpinner = findViewById(R.id.target_bundle_spinner);
        targetStatusText = findViewById(R.id.target_status_text);

        // Modern UI Components
        countdownDays = findViewById(R.id.countdown_days);
        countdownHours = findViewById(R.id.countdown_hours);
        countdownMinutes = findViewById(R.id.countdown_minutes);
        countdownSeconds = findViewById(R.id.countdown_seconds);
        mainLogo = findViewById(R.id.main_logo);

        // Region selection buttons
        regionGlobal = findViewById(R.id.region_global);
        regionKorea = findViewById(R.id.region_korea);
        regionVietnam = findViewById(R.id.region_vietnam);
        regionTaiwan = findViewById(R.id.region_taiwan);
        regionIndia = findViewById(R.id.region_india);

        // Option buttons
        optionDefault = findViewById(R.id.option_default);
        optionKernel = findViewById(R.id.option_kernel);

        // Status displays
        serverStatus = findViewById(R.id.server_status);
        detectionStatusIcon = findViewById(R.id.detection_status_icon);
        safeStatus = findViewById(R.id.safe_status);
        unsafeStatus = findViewById(R.id.unsafe_status);

        // Navigation buttons
        navHome = findViewById(R.id.nav_home);
        navTools = findViewById(R.id.nav_tools);
        navOther = findViewById(R.id.nav_other);

        // Add long-press listener for detailed package info (development feature)
        if (targetStatusText != null) {
            targetStatusText.setOnLongClickListener(v -> {
                if (selectedTargetPackage != null) {
                    showPackageDetails(selectedTargetPackage);
                }
                return true;
            });
        }

        // Initialize managers
        targetAppManager = new TargetAppManager(this);
        antiDetectionManager = new AntiDetectionManager(this);
        installerPackageManager = new InstallerPackageManager(this);
        autoPatchManager = com.bearmod.patch.AutoPatchManager.getInstance(this);
        permissionManager = PermissionManager.Companion.getInstance(this);

        // SecureScriptManager removed - scripts directory initialization skipped

        // Initialize plugin loader
        com.bearmod.plugin.PluginLoader.getInstance(this).loadPlugins();
        
        // Set initial states
        logo.setScaleX(0);
        logo.setScaleY(0);
        title.setAlpha(0);
        status.setAlpha(0);
        logoProgress.setProgress(0);
        
        // Hide main app initially
        mainAppLayout.setVisibility(View.GONE);

        setupTargetBundleSpinner();
        setupButtonListeners();

        // Log permission status on startup for debugging
        logPermissionStatus();
    }

    /**
     * Log current permission status for debugging
     */
    private void logPermissionStatus() {
        try {
            Log.d(TAG, "Permission Status on Startup:");
            Log.d(TAG, "Unknown Sources: " + isUnknownSourcesEnabled());
            Log.d(TAG, "Storage: " + isStoragePermissionGranted());
            Log.d(TAG, "Overlay: " + Settings.canDrawOverlays(this));

        } catch (Exception e) {
            Log.e(TAG, "Error checking permission status", e);
        }
    }
    
    private void setupButtonListeners() {
        // START button - Launch game and start service with stealth
        startButton.setOnClickListener(v -> {
            Log.d(TAG, "START MENU clicked");
            startModService();
        });

        // STOP button - Stop service and cleanup
        stopButton.setOnClickListener(v -> {
            Log.d(TAG, "STOP MENU clicked");
            stopModService();
        });

        // Legacy exit button (hidden but preserved for compatibility)
        if (exitButton != null) {
            exitButton.setOnClickListener(v -> {
                // Properly exit the app
                if (isServiceRunning) {
                    stopModService();
                }
                finish();
                System.exit(0);
            });
        }

        // Region selection buttons
        setupRegionButtons();

        // Option buttons
        setupOptionButtons();

        // Navigation buttons
        setupNavigationButtons();

        // Add debug menu on logo long-press
        if (logo != null) {
            logo.setOnLongClickListener(v -> {
                showDebugMenu();
                return true;
            });
        }

        // Add debug menu on main logo long-press too
        if (mainLogo != null) {
            mainLogo.setOnLongClickListener(v -> {
                showDebugMenu();
                return true;
            });
        }
    }

    private void setupRegionButtons() {
        if (regionGlobal != null) {
            regionGlobal.setOnClickListener(v -> selectRegion("com.tencent.ig", regionGlobal, "GLOBAL"));
        }
        if (regionKorea != null) {
            regionKorea.setOnClickListener(v -> selectRegion("com.pubg.krmobile", regionKorea, "KOREA"));
        }
        if (regionVietnam != null) {
            regionVietnam.setOnClickListener(v -> selectRegion("com.vng.pubgmobile", regionVietnam, "VIETNAM"));
        }
        if (regionTaiwan != null) {
            regionTaiwan.setOnClickListener(v -> selectRegion("com.rekoo.pubgm", regionTaiwan, "TAIWAN"));
        }
        if (regionIndia != null) {
            regionIndia.setOnClickListener(v -> selectRegion("com.pubg.imobile", regionIndia, "INDIA"));
        }
    }

    private void selectRegion(String packageName, Button selectedButton, String regionName) {
        // Clear all region button selections
        clearRegionSelections();

        // Highlight selected button
        selectedButton.setSelected(true);

        // Update target package
        selectedTargetPackage = packageName;
        updateServerStatus(regionName, packageName);

        Log.d(TAG, "Region selected: " + regionName + " (" + packageName + ")");
    }

    private void clearRegionSelections() {
        if (regionGlobal != null) regionGlobal.setSelected(false);
        if (regionKorea != null) regionKorea.setSelected(false);
        if (regionVietnam != null) regionVietnam.setSelected(false);
        if (regionTaiwan != null) regionTaiwan.setSelected(false);
        if (regionIndia != null) regionIndia.setSelected(false);
    }

    private void setupOptionButtons() {
        if (optionDefault != null) {
            optionDefault.setOnClickListener(v -> selectOption(optionDefault, optionKernel, "Default"));
        }
        if (optionKernel != null) {
            optionKernel.setOnClickListener(v -> selectOption(optionKernel, optionDefault, "Kernel"));
        }

        // Set default selection
        if (optionDefault != null) {
            optionDefault.setSelected(true);
        }
    }

    private void selectOption(Button selectedButton, Button otherButton, String optionName) {
        selectedButton.setSelected(true);
        if (otherButton != null) {
            otherButton.setSelected(false);
        }
        Log.d(TAG, "Option selected: " + optionName);
    }

    private void setupNavigationButtons() {
        if (navHome != null) {
            navHome.setOnClickListener(v -> selectNavigation(navHome, "Home"));
            navHome.setSelected(true); // Default selection
        }
        if (navTools != null) {
            navTools.setOnClickListener(v -> selectNavigation(navTools, "Tools"));
        }
        if (navOther != null) {
            navOther.setOnClickListener(v -> selectNavigation(navOther, "Other"));
        }
    }

    private void selectNavigation(Button selectedButton, String navName) {
        // Clear all navigation selections
        if (navHome != null) navHome.setSelected(false);
        if (navTools != null) navTools.setSelected(false);
        if (navOther != null) navOther.setSelected(false);

        // Select current button
        selectedButton.setSelected(true);

        Log.d(TAG, "Navigation selected: " + navName);

        // TODO: Implement navigation functionality
        if ("Tools".equals(navName)) {
            // Could open tools/settings menu
        } else if ("Other".equals(navName)) {
            // Could open additional options
        }
    }

    @SuppressLint("SetTextI18n")
    private void updateServerStatus(String regionName, String packageName) {
        if (serverStatus != null) {
            // Check if the package is actually installed
            boolean isInstalled = targetAppManager.isPackageInstalled(packageName);

            if (isInstalled) {
                serverStatus.setText("SERVER " + regionName);
                if (detectionStatusIcon != null) {
                    detectionStatusIcon.setImageResource(R.drawable.ic_check_circle);
                    detectionStatusIcon.setColorFilter(getColor(R.color.premium_accent_green));
                }
                updateSafetyStatus(true);
            } else {
                serverStatus.setText("SERVER " + regionName + " (NOT INSTALLED)");
                if (detectionStatusIcon != null) {
                    detectionStatusIcon.setImageResource(R.drawable.ic_error);
                    detectionStatusIcon.setColorFilter(getColor(R.color.premium_accent_red));
                }
                updateSafetyStatus(false);
            }
        }
    }

    private void updateSafetyStatus(boolean isSafe) {
        if (safeStatus != null && unsafeStatus != null) {
            if (isSafe) {
                safeStatus.setVisibility(View.VISIBLE);
                unsafeStatus.setVisibility(View.GONE);
            } else {
                safeStatus.setVisibility(View.GONE);
                unsafeStatus.setVisibility(View.VISIBLE);
            }
        }
    }

    private void startCountdownTimer() {
        if (countdownHandler != null) {
            countdownHandler.removeCallbacks(countdownRunnable);
        }

        countdownHandler = new Handler(Looper.getMainLooper());
        countdownRunnable = new Runnable() {
            @Override
            public void run() {
                try {
                    // Get countdown time from native code (if available)
                    String timeString = getCountdownTime();
                    updateCountdownDisplay(timeString);
                } catch (Exception e) {
                    // Fallback to demo countdown
                    updateCountdownDisplay("04:16:17:29");
                }

                // Update every second
                countdownHandler.postDelayed(this, 1000);
            }
        };
        countdownHandler.post(countdownRunnable);
    }

    private void stopCountdownTimer() {
        if (countdownHandler != null && countdownRunnable != null) {
            countdownHandler.removeCallbacks(countdownRunnable);
        }
    }

    private String getCountdownTime() {
        // Try to get time from native code
        try {
            // This would call the native countdown function
            // For now, return a demo countdown
            return "04:16:17:29";
        } catch (Exception e) {
            Log.w(TAG, "Could not get native countdown time", e);
            return "04:16:17:29";
        }
    }

    private void updateCountdownDisplay(String timeString) {
        try {
            String[] parts = timeString.split(":");
            if (parts.length >= 4) {
                if (countdownDays != null) countdownDays.setText(parts[0]);
                if (countdownHours != null) countdownHours.setText(parts[1]);
                if (countdownMinutes != null) countdownMinutes.setText(parts[2]);
                if (countdownSeconds != null) countdownSeconds.setText(parts[3]);
            }
        } catch (Exception e) {
            Log.w(TAG, "Error updating countdown display", e);
        }
    }

    private void setupTargetBundleSpinner() {
        // Create list of target bundle options
        List<String> targetOptions = new ArrayList<>();
        targetOptions.add("Auto-detect installed version");
        targetOptions.add("Global (com.tencent.ig)");
        targetOptions.add("Korea (com.pubg.krmobile)");
        targetOptions.add("India/BGMI (com.pubg.imobile)");
        targetOptions.add("Taiwan (com.rekoo.pubgm)");
        targetOptions.add("Vietnam (com.vng.pubgmobile)");

        // Create adapter
        ArrayAdapter<String> adapter = new ArrayAdapter<>(this,
            android.R.layout.simple_spinner_item, targetOptions);
        adapter.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item);

        // Set adapter to spinner
        targetBundleSpinner.setAdapter(adapter);

        // Set selection listener
        targetBundleSpinner.setOnItemSelectedListener(new AdapterView.OnItemSelectedListener() {
            @Override
            public void onItemSelected(AdapterView<?> parent, View view, int position, long id) {
                handleTargetBundleSelection(position);
            }

            @Override
            public void onNothingSelected(AdapterView<?> parent) {
                // Do nothing
            }
        });

        // Set default selection to auto-detect
        targetBundleSpinner.setSelection(0);
    }

    @SuppressLint("SetTextI18n")
    private void handleTargetBundleSelection(int position) {
        switch (position) {
            case 0: // Auto-detect
                selectedTargetPackage = targetAppManager.getInstalledTargetPackage();
                if (selectedTargetPackage != null) {
                    updateTargetStatus(selectedTargetPackage, "Auto-detected");
                    Log.d(TAG, "Auto-detected target package: " + selectedTargetPackage);
                } else {
                    targetStatusText.setText("No PUBG Mobile version found installed");
                    Log.w(TAG, "No target package found installed");
                }
                break;
            case 1: // Global
                selectedTargetPackage = "com.tencent.ig";
                updateTargetStatus(selectedTargetPackage, "Selected");
                break;
            case 2: // Korea
                selectedTargetPackage = "com.pubg.krmobile";
                updateTargetStatus(selectedTargetPackage, "Selected");
                break;
            case 3: // India/BGMI
                selectedTargetPackage = "com.pubg.imobile";
                updateTargetStatus(selectedTargetPackage, "Selected");
                break;
            case 4: // Taiwan
                selectedTargetPackage = "com.rekoo.pubgm";
                updateTargetStatus(selectedTargetPackage, "Selected");
                break;
            case 5: // Vietnam
                selectedTargetPackage = "com.vng.pubgmobile";
                updateTargetStatus(selectedTargetPackage, "Selected");
                break;
        }

        Log.d(TAG, "Target package selected: " + selectedTargetPackage);

        // Trigger auto-patch if configured for target selection
        if (selectedTargetPackage != null &&
            autoPatchManager.shouldTriggerAutoPatch(com.bearmod.patch.AutoPatchConfig.AutoPatchTrigger.ON_TARGET_SELECTION)) {
            triggerAutoPatch();
        }
    }

    /**
     * Update target status with installation and OBB information
     */
    @SuppressLint("SetTextI18n")
    private void updateTargetStatus(String packageName, String prefix) {
        if (packageName == null) {
            targetStatusText.setText("No package selected");
            return;
        }

        String displayName = installerPackageManager.getPackageDisplayName(packageName);
        boolean isInstalled = installerPackageManager.isPackageInstalled(packageName);
        boolean obbRequired = installerPackageManager.requiresObb(packageName);
        boolean obbInstalled = !obbRequired || installerPackageManager.isObbInstalled(packageName);

        StringBuilder status = new StringBuilder();
        status.append(prefix).append(": ").append(displayName);

        if (isInstalled) {
            String version = installerPackageManager.getInstalledPackageVersion(packageName);
            status.append(" (v").append(version != null ? version : "unknown").append(")");

            if (obbRequired) {
                if (obbInstalled) {
                    status.append(" ✓ OBB OK");
                } else {
                    status.append(" ⚠ OBB Missing");
                }
            }
        } else {
            status.append(" (Not Installed)");
        }

        targetStatusText.setText(status.toString());
    }

    private String getDisplayNameForPackage(String packageName) {
        if (packageName == null) return "Unknown";

        return switch (packageName) {
            case "com.tencent.ig" -> "Global version";
            case "com.pubg.krmobile" -> "Korea version";
            case "com.pubg.imobile" -> "India/BGMI version";
            case "com.rekoo.pubgm" -> "Taiwan version";
            case "com.vng.pubgmobile" -> "Vietnam version";
            default -> packageName;
        };
    }

    private void startInitializationSequence() {
        if (currentAnimation != null) {
            currentAnimation.cancel();
        }

        // Debug HWID information for troubleshooting
        Launcher.debugHWID(this);

        // Stage 1: Check essential permissions before proceeding
        if (!checkStage1Permissions()) {
            Log.d(TAG, "Stage 1 permissions not granted - requesting permissions");
            requestStage1Permissions();
            return;
        }

        // Check if user needs to login first
        if (!Launcher.hasValidKey(this)) {
            Log.d(TAG, "No valid license key - showing login");
            startLoginActivity();
            return;
        }

        // User has valid key - start splash animation and initialization
        startSplashAnimation();
    }

    /**
     * Check Stage 1 permissions (required at app startup)
     * - Storage permissions (Android version appropriate)
     * - Basic app functionality permissions
     */
    private boolean checkStage1Permissions() {
        if (permissionManager == null) {
            Log.e(TAG, "PermissionManager not initialized");
            return false;
        }

        // Check storage permission (version-appropriate)
        PermissionManager.PermissionStatus storageStatus = permissionManager.checkStoragePermission();
        boolean storageGranted = storageStatus.isGranted();

        Log.d(TAG, "Stage 1 Permission Check:");
        Log.d(TAG, "Storage (" + storageStatus.getPermissionName() + "): " + (storageGranted ? "GRANTED" : "DENIED"));

        return storageGranted;
    }

    /**
     * Request Stage 1 permissions with user-friendly dialog
     */
    private void requestStage1Permissions() {
        if (permissionManager == null) {
            Log.e(TAG, "PermissionManager not initialized - cannot request permissions");
            showPermissionErrorDialog();
            return;
        }

        // Show explanation dialog first
        new android.app.AlertDialog.Builder(this)
            .setTitle("Permissions Required")
            .setMessage("BearMod needs storage access to manage game files and OBB data.\n\n" +
                       "This permission is required for the app to function properly.")
            .setPositiveButton("Grant Permissions", (dialog, which) -> {
                // Request storage permission
                Log.d(TAG, "User agreed to grant Stage 1 permissions");
                permissionManager.requestStoragePermission(this, PermissionManager.REQUEST_STORAGE_PERMISSION);
            })
            .setNegativeButton("Exit", (dialog, which) -> {
                Log.d(TAG, "User denied Stage 1 permissions - exiting");
                finish();
            })
            .setCancelable(false)
            .show();
    }

    /**
     * Show error dialog when PermissionManager is not available
     */
    private void showPermissionErrorDialog() {
        new android.app.AlertDialog.Builder(this)
            .setTitle("Initialization Error")
            .setMessage("Permission system could not be initialized. Please restart the app.")
            .setPositiveButton("Exit", (dialog, which) -> finish())
            .setCancelable(false)
            .show();
    }

    /**
     * Check Stage 2 permissions (required before injection)
     * - Unknown Sources permission for APK installation
     * - Storage permissions (double-check)
     */
    private boolean checkStage2Permissions() {
        if (permissionManager == null) {
            Log.e(TAG, "PermissionManager not initialized");
            return false;
        }

        // Check Unknown Sources permission
        PermissionManager.PermissionStatus unknownSourcesStatus = permissionManager.checkUnknownSourcesPermission();
        boolean unknownSourcesGranted = unknownSourcesStatus.isGranted();

        // Double-check storage permission
        PermissionManager.PermissionStatus storageStatus = permissionManager.checkStoragePermission();
        boolean storageGranted = storageStatus.isGranted();

        Log.d(TAG, "Stage 2 Permission Check:");
        Log.d(TAG, "Unknown Sources: " + (unknownSourcesGranted ? "GRANTED" : "DENIED"));
        Log.d(TAG, "Storage (" + storageStatus.getPermissionName() + "): " + (storageGranted ? "GRANTED" : "DENIED"));

        return unknownSourcesGranted && storageGranted;
    }

    /**
     * Request Stage 2 permissions with user-friendly dialog
     */
    private void requestStage2Permissions() {
        if (permissionManager == null) {
            Log.e(TAG, "PermissionManager not initialized - cannot request permissions");
            showPermissionErrorDialog();
            return;
        }

        // Show explanation dialog first
        new android.app.AlertDialog.Builder(this)
            .setTitle("Additional Permissions Required")
            .setMessage("BearMod needs additional permissions for injection:\n\n" +
                       "• Install Unknown Apps - Required for game enhancement\n" +
                       "• Storage Access - Required for OBB file management\n\n" +
                       "These permissions are required for injection to work properly.")
            .setPositiveButton("Grant Permissions", (dialog, which) -> {
                Log.d(TAG, "User agreed to grant Stage 2 permissions");
                // Request Unknown Sources permission first
                permissionManager.requestUnknownSourcesPermission(this, PermissionManager.REQUEST_UNKNOWN_SOURCES);
            })
            .setNegativeButton("Cancel", (dialog, which) -> {
                Log.d(TAG, "User cancelled Stage 2 permissions");
                android.widget.Toast.makeText(this, "Injection cancelled - permissions required", android.widget.Toast.LENGTH_LONG).show();
            })
            .setCancelable(false)
            .show();
    }

    private void startLoginActivity() {
        Intent loginIntent = new Intent(this, LauncherLoginActivity.class);
        loginActivityLauncher.launch(loginIntent);
    }
    
    @Override
    protected void onActivityResult(int requestCode, int resultCode, Intent data) {
        super.onActivityResult(requestCode, resultCode, data);

        // Note: Login activity (1001) is now handled by ActivityResultLauncher
        if (requestCode == 1002) { // Overlay permission result
            if (resultCode == RESULT_OK) {
                // Permission granted - start initialization
                Log.d(TAG, "Overlay permission granted - starting initialization");
                startSplashAnimation();
            } else {
                // Permission denied - exit app
                Log.d(TAG, "Overlay permission denied - exiting");
                finish();
            }
        // Note: requestCode 1003 (Unknown Sources permission) is now handled by unknownSourcesPermissionLauncher
        } else if (requestCode == InstallerPackageManager.REQUEST_INSTALL_APK) {
            // Handle APK installation result
            if (resultCode == RESULT_OK) {
                Log.d(TAG, "APK installation completed successfully");
                android.widget.Toast.makeText(this, "Package installed successfully", android.widget.Toast.LENGTH_SHORT).show();
            } else {
                Log.w(TAG, "APK installation cancelled or failed");
                android.widget.Toast.makeText(this, "Package installation cancelled", android.widget.Toast.LENGTH_SHORT).show();
            }
        } else if (requestCode == InstallerPackageManager.REQUEST_UNKNOWN_SOURCES) {
            // Handle Unknown Sources permission result from InstallerPackageManager
            if (isUnknownSourcesEnabled()) {
                Log.d(TAG, "Unknown Sources permission granted via InstallerPackageManager");
                android.widget.Toast.makeText(this, "Permission granted - you can now install packages", android.widget.Toast.LENGTH_SHORT).show();
            } else {
                Log.w(TAG, "Unknown Sources permission denied via InstallerPackageManager");
                android.widget.Toast.makeText(this, "Permission denied - package installation may not work", android.widget.Toast.LENGTH_LONG).show();
            }
        } else if (requestCode == PermissionManager.REQUEST_STORAGE_PERMISSION ||
                   requestCode == PermissionManager.REQUEST_MANAGE_EXTERNAL_STORAGE) {
            // Handle Stage 1 storage permission result
            handleStage1PermissionResult();
        } else if (requestCode == PermissionManager.REQUEST_UNKNOWN_SOURCES) {
            // Handle Stage 2 Unknown Sources permission result
            handleStage2PermissionResult();
        }
    }

    /**
     * Handle Stage 1 permission result and continue initialization
     */
    private void handleStage1PermissionResult() {
        if (checkStage1Permissions()) {
            Log.d(TAG, "Stage 1 permissions granted - continuing initialization");
            // Continue with the initialization sequence
            startInitializationSequence();
        } else {
            Log.w(TAG, "Stage 1 permissions still not granted");
            // Show error dialog and exit
            new android.app.AlertDialog.Builder(this)
                .setTitle("Permissions Required")
                .setMessage("BearMod requires storage permissions to function. Please grant the permissions and restart the app.")
                .setPositiveButton("Exit", (dialog, which) -> finish())
                .setCancelable(false)
                .show();
        }
    }

    /**
     * Handle Stage 2 permission result and continue injection
     */
    private void handleStage2PermissionResult() {
        if (checkStage2Permissions()) {
            Log.d(TAG, "Stage 2 permissions granted - continuing injection");
            // Continue with the injection process
            startModService();
        } else {
            Log.w(TAG, "Stage 2 permissions still not granted");
            android.widget.Toast.makeText(this, "Injection cancelled - permissions required", android.widget.Toast.LENGTH_LONG).show();
        }
    }

    private void startSplashAnimation() {
        isInitializing = true;
        
        AnimatorSet animatorSet = new AnimatorSet();

        // Logo scale animation with bounce
        ObjectAnimator scaleX = ObjectAnimator.ofFloat(logo, "scaleX", 0f, 1f);
        ObjectAnimator scaleY = ObjectAnimator.ofFloat(logo, "scaleY", 0f, 1f);
        scaleX.setInterpolator(new OvershootInterpolator());
        scaleY.setInterpolator(new OvershootInterpolator());

        // Progress bar animation
        ValueAnimator progressAnimator = ValueAnimator.ofInt(0, 100);
        progressAnimator.addUpdateListener(animation -> 
            logoProgress.setProgress((Integer) animation.getAnimatedValue()));

        // Title and status fade in
        ObjectAnimator titleFade = ObjectAnimator.ofFloat(title, "alpha", 0f, 1f);
        ObjectAnimator statusFade = ObjectAnimator.ofFloat(status, "alpha", 0f, 1f);

        // Logo rotation
        ObjectAnimator rotation = ObjectAnimator.ofFloat(logo, "rotation", 0f, 360f);
        rotation.setInterpolator(new AccelerateDecelerateInterpolator());

        // Combine animations
        AnimatorSet initialSet = new AnimatorSet();
        initialSet.playTogether(scaleX, scaleY, progressAnimator, rotation);

        animatorSet.playSequentially(
            initialSet,
            titleFade,
            statusFade
        );

        // Set durations
        scaleX.setDuration(1000);
        scaleY.setDuration(1000);
        progressAnimator.setDuration(1500);
        rotation.setDuration(1000);
        titleFade.setDuration(500);
        statusFade.setDuration(500);

        // Initialize mod after animations
        animatorSet.addListener(new Animator.AnimatorListener() {
            @SuppressLint("SetTextI18n")
            @Override
            public void onAnimationStart(@NonNull Animator animation) {
                status.setText("Initializing BearMod...");
            }

            @Override
            public void onAnimationEnd(@NonNull Animator animation) {
                if (!isInitializing) return;
                
                // Start mod initialization
                new Handler(Looper.getMainLooper()).postDelayed(() -> {
                    initializeMod();
                }, 500);
            }

            @Override
            public void onAnimationCancel(@NonNull Animator animation) {
                isInitializing = false;
            }

            @Override
            public void onAnimationRepeat(@NonNull Animator animation) {}
        });

        currentAnimation = animatorSet;
        animatorSet.start();
    }
    
    @SuppressLint("SetTextI18n")
    private void initializeMod() {
        try {
            status.setText("Loading native library...");
            
            // Check overlay permission first
            if (!Settings.canDrawOverlays(this)) {
                status.setText("Requesting overlay permission...");
                requestOverlayPermission();
                return;
            }

            // Initialize native library
            Launcher.safeInit(this);
            
            // Verify native library is working
            if (!Launcher.isNativeLibraryLoaded()) {
                status.setText("Running in demo mode...");
                Log.w(TAG, "Native library not loaded - running in demo mode");
            }

            status.setText("Verifying anti-detection assets...");

            // Verify anti-detection assets are available
            if (!antiDetectionManager.verifyAntiDetectionAssets()) {
                Log.w(TAG, "Anti-detection assets not found - continuing without stealth");
            }

            status.setText("Checking for library updates...");

            // Check for OTA updates before initializing injection system
            checkOTAUpdates();

            status.setText("Initializing KeyAuth injection system...");

            // Initialize KeyAuth injection system after successful authentication
            initializeKeyAuthInjectionSystem();

            status.setText("BearMod ready!");

            // Mark as initialized (but service not started yet)
            isModInitialized = true;
            
            // Transition to main app after short delay
            new Handler(Looper.getMainLooper()).postDelayed(this::transitionToMainApp, 1000);
            
        } catch (Exception e) {
            Log.e(TAG, "Error initializing mod", e);
            status.setText("Error: " + e.getMessage());
            
            // Show retry option
            new Handler(Looper.getMainLooper()).postDelayed(this::showRetryDialog, 2000);
        }
    }
    
    // Modern Activity Result API for overlay permission
    private void requestOverlayPermission() {
        Intent intent = new Intent(Settings.ACTION_MANAGE_OVERLAY_PERMISSION,
                Uri.parse("package:" + getPackageName()));
        overlayPermissionLauncher.launch(intent);
    }

    /**
     * Check if Unknown Sources permission is enabled
     */
    private boolean isUnknownSourcesEnabled() {
        return installerPackageManager.isUnknownSourcesEnabled();
    }

    /**
     * Request Unknown Sources permission
     */
    private void requestUnknownSourcesPermission() {
        Intent intent = installerPackageManager.createUnknownSourcesPermissionIntent();
        unknownSourcesPermissionLauncher.launch(intent);
    }

    /**
     * Check if storage permissions are granted (using PermissionManager)
     */
    private boolean isStoragePermissionGranted() {
        if (permissionManager != null) {
            PermissionManager.PermissionStatus status = permissionManager.checkStoragePermission();
            return status.isGranted();
        }
        return false;
    }

    /**
     * Request storage permission (using PermissionManager)
     */
    private void requestStoragePermission() {
        if (permissionManager != null) {
            Log.d(TAG, "Requesting storage permission via PermissionManager");
            permissionManager.requestStoragePermission(this, PermissionManager.REQUEST_STORAGE_PERMISSION);
        } else {
            Log.e(TAG, "PermissionManager not initialized - cannot request storage permission");
        }
    }

    /**
     * Check if OBB files are installed for the selected target package
     */
    private boolean isObbInstalled() {
        if (selectedTargetPackage == null) {
            return false;
        }

        return installerPackageManager.isObbInstalled(selectedTargetPackage);
    }

    /**
     * Show OBB installation prompt with detailed information
     */
    private void showObbInstallationPrompt() {
        InstallerPackageManager.ObbStatus obbStatus = installerPackageManager.getObbStatus(selectedTargetPackage);
        String packageDisplayName = installerPackageManager.getPackageDisplayName(selectedTargetPackage);

        StringBuilder message = getStringBuilder(packageDisplayName, obbStatus);

        new android.app.AlertDialog.Builder(this)
            .setTitle("OBB Files Required")
            .setMessage(message.toString())
            .setPositiveButton("Continue Anyway", (dialog, which) -> {
                Log.d(TAG, "User chose to continue without complete OBB files");
                android.widget.Toast.makeText(this, "Warning: Game may not function properly without complete OBB data", android.widget.Toast.LENGTH_LONG).show();
                proceedWithServiceStart();
            })
            .setNegativeButton("Cancel", (dialog, which) -> {
                Log.d(TAG, "User cancelled due to missing OBB files");
                android.widget.Toast.makeText(this, "Please install complete game data and try again", android.widget.Toast.LENGTH_SHORT).show();
            })
            .setNeutralButton("Help", (dialog, which) -> {
                showObbInstallationHelp();
            })
            .setCancelable(false)
            .show();
    }

    @NonNull
    private static StringBuilder getStringBuilder(String packageDisplayName, InstallerPackageManager.ObbStatus obbStatus) {
        StringBuilder message = new StringBuilder();
        message.append("The selected game (").append(packageDisplayName).append(") requires OBB data files to run properly.\n\n");
        message.append("Status: ").append(obbStatus.statusMessage()).append("\n");

        if (!obbStatus.fileNames().isEmpty()) {
            message.append("Found files: ").append(obbStatus.fileNames().size()).append("\n");
            message.append("Total size: ").append(obbStatus.getFormattedSize()).append("\n\n");
        }

        message.append("Please install the complete game package including OBB files.\n\n");
      //  message.append("Would you like to continue anyway? The mod may not work properly without complete game data.");
        return message;
    }

    /**
     * Show help dialog for OBB installation
     */
    private void showObbInstallationHelp() {
        String packageDisplayName = installerPackageManager.getPackageDisplayName(selectedTargetPackage);
        java.io.File obbDir = installerPackageManager.getObbDirectory(selectedTargetPackage);

        String helpMessage = "To install OBB files for " + packageDisplayName + ":\n\n" +
             //   "1. Download the complete game package from the official source\n" +
               // "2. Install the APK file\n" +
              //  "3. Copy OBB files to:\n" +
                obbDir.getAbsolutePath() + "\n\n" +
                "4. Ensure OBB files have proper permissions\n";
               // "5. Restart the app and try again\n\n" +
              //  "Note: OBB files are usually downloaded automatically when you first run the game from official sources.";

        new android.app.AlertDialog.Builder(this)
            .setTitle("OBB Installation Help")
            .setMessage(helpMessage)
            .setPositiveButton("OK", null)
            .show();
    }

    /**
     * Show package installation guidance
     */
    private void showPackageInstallationGuidance(String packageName) {
        String displayName = installerPackageManager.getPackageDisplayName(packageName);
        boolean unknownSourcesEnabled = installerPackageManager.isUnknownSourcesEnabled();

        StringBuilder message = getStringBuilder(displayName, unknownSourcesEnabled);

        android.app.AlertDialog.Builder builder = new android.app.AlertDialog.Builder(this)
            .setTitle("Game Not Installed")
            .setMessage(message.toString())
            .setNegativeButton("Cancel", null);

        if (!unknownSourcesEnabled) {
            builder.setPositiveButton("Enable Permission", (dialog, which) -> {
                requestUnknownSourcesPermission();
            });
        } else {
            builder.setPositiveButton("OK", null);
        }

        // Add option to show detailed permission explanation
        builder.setNeutralButton("Learn More", (dialog, which) -> {
            showPermissionExplanationDialog();
        });

        builder.show();
    }

    @NonNull
    private static StringBuilder getStringBuilder(String displayName, boolean unknownSourcesEnabled) {
        StringBuilder message = new StringBuilder();
        message.append("The selected game (").append(displayName).append(") is not installed.\n\n");

        if (!unknownSourcesEnabled) {
            message.append("⚠ Unknown Sources permission is required to install APK files.\n\n");
        }

        message.append("To install ").append(displayName).append(":\n\n");
        message.append("1. Download the official APK from a trusted source\n");
        message.append("2. Enable Unknown Sources permission if needed\n");
        message.append("3. Install the APK file\n");
        message.append("4. Launch the game to download OBB data\n");
        message.append("5. Return to BearMod and try again\n\n");
        message.append("Would you like to enable Unknown Sources permission now?");
        return message;
    }

    /**
     * Show detailed permission explanation dialog
     */
    private void showPermissionExplanationDialog() {
        String explanation = "This permission is required for BearMod to function properly.";
        if ("UNKNOWN_SOURCES".equals("UNKNOWN_SOURCES")) {
            explanation = "BearMod needs permission to install game packages (APK files) for proper mod functionality.";
        }
        String title = "Why " + "UNKNOWN_SOURCES".replace("_", " ") + " Permission?";

        new android.app.AlertDialog.Builder(this)
            .setTitle(title)
            .setMessage(explanation)
            .setPositiveButton("OK", null)
            .show();
    }

    /**
     * Show detailed package information (for debugging/development)
     */
    private void showPackageDetails(String packageName) {
        if (packageName == null) {
            android.widget.Toast.makeText(this, "No package selected", android.widget.Toast.LENGTH_SHORT).show();
            return;
        }

        StringBuilder details = new StringBuilder();
        details.append("Package: ").append(packageName).append("\n");
        details.append("Display Name: ").append(installerPackageManager.getPackageDisplayName(packageName)).append("\n");
        details.append("Installed: ").append(installerPackageManager.isPackageInstalled(packageName) ? "Yes" : "No").append("\n");

        if (installerPackageManager.isPackageInstalled(packageName)) {
            String version = installerPackageManager.getInstalledPackageVersion(packageName);
            details.append("Version: ").append(version != null ? version : "Unknown").append("\n");
        }

        details.append("Requires OBB: ").append(installerPackageManager.requiresObb(packageName) ? "Yes" : "No").append("\n");

        if (installerPackageManager.requiresObb(packageName)) {
            InstallerPackageManager.ObbStatus obbStatus = installerPackageManager.getObbStatus(packageName);
            details.append("OBB Status: ").append(obbStatus.statusMessage()).append("\n");
            details.append("OBB Size: ").append(obbStatus.getFormattedSize()).append("\n");
            details.append("OBB Files: ").append(obbStatus.fileNames().size()).append("\n");
        }

        details.append("Unknown Sources: ").append(installerPackageManager.isUnknownSourcesEnabled() ? "Enabled" : "Disabled").append("\n");
        details.append("Storage Permission: ").append(isStoragePermissionGranted() ? "Granted" : "Denied").append("\n");
        details.append("Overlay Permission: ").append(Settings.canDrawOverlays(this) ? "Granted" : "Denied").append("\n");

        new android.app.AlertDialog.Builder(this)
            .setTitle("Package Details")
            .setMessage(details.toString())
            .setPositiveButton("OK", null)
            .show();
    }

    /**
     * Continue initialization after overlay permission is granted
     */
    private void continueInitializationAfterPermission() {
        Log.d(TAG, "Continuing initialization after permission granted");

        // Reset initialization state
        isInitializing = false;

        // Restart the initialization process
        initializeMod();
    }

    /**
     * Show dialog when overlay permission is denied
     */
    @SuppressLint("SetTextI18n")
    private void showPermissionDeniedDialog() {
        new android.app.AlertDialog.Builder(this)
            .setTitle("Permission Required")
            .setMessage("""
                    BearMod requires overlay permission to display ESP and mod features over games.
                    
                    Please grant the permission to continue.""")
            .setPositiveButton("Retry", (dialog, which) -> {
                status.setText("Requesting overlay permission...");
                requestOverlayPermission();
            })
            .setNegativeButton("Exit", (dialog, which) -> {
                Log.d(TAG, "User denied overlay permission - exiting app");
                finish();
            })
            .setCancelable(false)
            .show();
    }

    /**
     * Show app restart dialog after critical permissions are granted
     */
    private void showRestartDialog() {
        new android.app.AlertDialog.Builder(this)
            .setTitle("Restart Required")
            .setMessage("""
                    Unknown sources permission has been granted.
                    
                    The app will restart to apply changes.""")
            .setPositiveButton("Restart Now", (dialog, which) -> {
                restartApp();
            })
            .setNegativeButton("Continue", (dialog, which) -> {
                // Continue without restart
                Log.d(TAG, "User chose to continue without restart");
            })
            .setCancelable(false)
            .show();
    }

    /**
     * Restart the application
     */
    private void restartApp() {
        Log.d(TAG, "Restarting application");

        Intent intent = getPackageManager().getLaunchIntentForPackage(getPackageName());
        if (intent != null) {
            intent.addFlags(Intent.FLAG_ACTIVITY_CLEAR_TOP | Intent.FLAG_ACTIVITY_NEW_TASK);
            startActivity(intent);
        }
        finish();
    }

    /**
     * Show debug menu for testing and troubleshooting
     */
    private void showDebugMenu() {
        String[] options = {
            "Force Re-Login",
            "Clear All Data",
            "Test Auth",
            "Check Permissions",
            "Restart App",
            "Cancel"
        };

        new AlertDialog.Builder(this)
            .setTitle("🐻 BearMod Login")
            .setItems(options, (dialog, which) -> {
                switch (which) {
                    case 0: // Force Re-Login
                        Launcher.clearKey(this);
                        Toast.makeText(this, "Re-login forced. Restarting...", Toast.LENGTH_SHORT).show();
                        restartApp();
                        break;

                    case 1: // Clear All Data
                        Launcher.clearKey(this);
                        Toast.makeText(this, "All data cleared. Restarting...", Toast.LENGTH_SHORT).show();
                        restartApp();
                        break;

                    case 2: // Test KeyAuth
                        startLoginActivity();
                        break;

                    case 3: // Check Permissions
                        showPermissionStatusDialog();
                        break;

                    case 4: // Restart App
                        restartApp();
                        break;

                    case 5: // Cancel
                        break;
                }
            })
            .show();
    }

    /**
     * Show detailed permission status dialog
     */
    private void showPermissionStatusDialog() {
        StringBuilder status = new StringBuilder();
        status.append("🔐 Permission Status:\n\n");
        status.append("Overlay: ").append(Settings.canDrawOverlays(this) ? "✅ Granted" : "❌ Denied").append("\n");
        status.append("Unknown Sources: ").append(isUnknownSourcesEnabled() ? "✅ Enabled" : "❌ Disabled").append("\n");
        status.append("Storage: ").append(isStoragePermissionGranted() ? "✅ Granted" : "❌ Denied").append("\n\n");

        status.append("🔑 License Status:\n\n");
        status.append("Has Valid Key: ").append(Launcher.hasValidKey(this) ? "✅ Yes" : "❌ No").append("\n");
        status.append("HWID: ").append(Launcher.getDeviceHWID(this)).append("\n\n");

        status.append("🏗️ Build Info:\n\n");
        status.append("Native Library: ").append(Launcher.isNativeLibraryLoaded() ? "✅ Loaded" : "❌ Not Loaded").append("\n");
        status.append("Mundo Core: ").append("✅ Available (libmundo.so)").append("\n");

        new android.app.AlertDialog.Builder(this)
            .setTitle("System Status")
            .setMessage(status.toString())
            .setPositiveButton("OK", null)
            .setNeutralButton("Copy to Clipboard", (dialog, which) -> {
                android.content.ClipboardManager clipboard = (android.content.ClipboardManager) getSystemService(Context.CLIPBOARD_SERVICE);
                android.content.ClipData clip = android.content.ClipData.newPlainText("BearMod Status", status.toString());
                clipboard.setPrimaryClip(clip);
                android.widget.Toast.makeText(this, "Status copied to clipboard", android.widget.Toast.LENGTH_SHORT).show();
            })
            .show();
    }

    // Simplified permission status methods removed for build fix
    // TODO: Re-implement with PermissionManager when build issues are resolved

    /**
     * Check for OTA updates before initializing injection system
     * Updated to use consolidated SecureOTAIntegration
     */
    private void checkOTAUpdates() {
        try {
            Log.d(TAG, "Checking for simplified OTA updates...");

            SecureOTAIntegration secureOTA = new SecureOTAIntegration(this);

            // Perform secure OTA update with progress tracking
            secureOTA.performSecureOTAUpdate("com.tencent.ig", new com.bearmod.ota.OTAUpdateManager.OTAUpdateCallback() {
                @Override
                public void onUpdateCheckStarted() {
                    runOnUiThread(() -> status.setText("Checking for library updates..."));
                }

                @Override
                public void onUpdateCheckComplete(java.util.Map<String, com.bearmod.ota.OTAUpdateManager.LibraryConfig> updatesNeeded) {
                    runOnUiThread(() -> {
                        if (updatesNeeded.isEmpty()) {
                            status.setText("All libraries up to date");
                        } else {
                            status.setText("Downloading " + updatesNeeded.size() + " library updates...");
                        }
                    });
                }

                @Override
                public void onUpdateProgress(String message, int progress) {
                    runOnUiThread(() -> status.setText(message + " (" + progress + "%)"));
                }

                @Override
                public void onUpdateComplete(String message) {
                    runOnUiThread(() -> {
                        Log.d(TAG, "OTA update completed successfully: " + message);
                        status.setText("Libraries updated successfully");
                    });
                }

                @Override
                public void onUpdateFailed(String error) {
                    runOnUiThread(() -> {
                        Log.w(TAG, "OTA update failed - will use fallback methods: " + error);
                        status.setText("Using fallback library loading");
                    });
                }

                @Override
                public void onAllUpdatesComplete(boolean success) {
                    runOnUiThread(() -> {
                        if (success) {
                            status.setText("All updates completed successfully");
                        } else {
                            status.setText("Some updates failed - using fallback");
                        }
                    });
                }
            });

        } catch (Exception e) {
            Log.e(TAG, "Error initializing simplified OTA update check", e);
            status.setText("OTA system unavailable - using fallback");
        }
    }

    /**
     * Initialize KeyAuth injection system after successful authentication
     * This triggers the automated KeyAuth library integration as specified in requirements
     */
    private void initializeKeyAuthInjectionSystem() {
        try {
            Log.d(TAG, "Initializing KeyAuth injection system...");

            // Get KeyAuth injection manager instance
            com.bearmod.injection.KeyAuthInjectionManager keyAuthManager =
                com.bearmod.injection.KeyAuthInjectionManager.getInstance();

            // Initialize after authentication success
            keyAuthManager.initializeAfterAuth(this)
                .thenAccept(success -> {
                    if (success) {
                        Log.d(TAG, "KeyAuth injection system initialized successfully");

                        // SecureScriptManager removed - KeyAuth script initialization skipped
                        Log.d(TAG, "KeyAuth script system initialization skipped (SecureScriptManager removed)");

                    } else {
                        Log.w(TAG, "KeyAuth injection system initialization failed - continuing with fallback methods");
                    }
                })
                .exceptionally(throwable -> {
                    Log.e(TAG, "Error initializing KeyAuth injection system", throwable);
                    return null;
                });

        } catch (Exception e) {
            Log.e(TAG, "Error setting up KeyAuth injection system", e);
            // Continue without KeyAuth - fallback methods will be used
        }
    }

    private void transitionToMainApp() {
        splashCompleted = true;
        
        // Animate splash screen out
        AnimatorSet exitAnimation = new AnimatorSet();

        // Scale down logo
        ObjectAnimator scaleDownX = ObjectAnimator.ofFloat(logo, "scaleX", 1f, 0f);
        ObjectAnimator scaleDownY = ObjectAnimator.ofFloat(logo, "scaleY", 1f, 0f);

        // Fade out splash elements
        ObjectAnimator titleFadeOut = ObjectAnimator.ofFloat(title, "alpha", 1f, 0f);
        ObjectAnimator statusFadeOut = ObjectAnimator.ofFloat(status, "alpha", 1f, 0f);
        ObjectAnimator splashFadeOut = ObjectAnimator.ofFloat(splashLayout, "alpha", 1f, 0f);

        // Fade in main app
        ObjectAnimator mainAppFadeIn = ObjectAnimator.ofFloat(mainAppLayout, "alpha", 0f, 1f);

        // Combine animations
        AnimatorSet exitSet = new AnimatorSet();
        exitSet.playTogether(scaleDownX, scaleDownY, titleFadeOut, statusFadeOut, splashFadeOut);
        
        exitAnimation.playSequentially(exitSet, mainAppFadeIn);
        exitAnimation.setDuration(800);

        exitAnimation.addListener(new Animator.AnimatorListener() {
            @Override
            public void onAnimationStart(@NonNull Animator animation) {}

            @Override
            public void onAnimationEnd(@NonNull Animator animation) {
                splashLayout.setVisibility(View.GONE);
                mainAppLayout.setVisibility(View.VISIBLE);

                // Initialize modern UI
                initializeModernUI();

                // Update welcome text and service status
                updateServiceStatus();
            }

            @Override
            public void onAnimationCancel(@NonNull Animator animation) {
                splashLayout.setVisibility(View.GONE);
                mainAppLayout.setVisibility(View.VISIBLE);
            }

            @Override
            public void onAnimationRepeat(@NonNull Animator animation) {}
        });

        exitAnimation.start();
    }

    private void initializeModernUI() {
        // Start countdown timer
        startCountdownTimer();

        // Set up auto-detection
        setupAutoDetection();

        // Initialize button listeners for modern UI
        setupButtonListeners();
    }

    @SuppressLint("SetTextI18n")
    private void setupAutoDetection() {
        // Auto-detect installed target package
        String detectedPackage = targetAppManager.getInstalledTargetPackage();
        if (detectedPackage != null) {
            selectedTargetPackage = detectedPackage;
            String regionName = getPackageDisplayName(detectedPackage);

            // Update server status
            updateServerStatus(regionName, detectedPackage);

            // Select corresponding region button
            selectRegionButtonForPackage(detectedPackage);

            Log.d(TAG, "Auto-detected target package: " + detectedPackage + " (" + regionName + ")");
        } else {
            // No package detected
            if (serverStatus != null) {
                serverStatus.setText("NO GAME DETECTED");
            }
            if (detectionStatusIcon != null) {
                detectionStatusIcon.setImageResource(R.drawable.ic_error);
                detectionStatusIcon.setColorFilter(getColor(R.color.premium_accent_red));
            }
            updateSafetyStatus(false);
            Log.d(TAG, "No target package detected");
        }
    }

    private String getPackageDisplayName(String packageName) {
        return switch (packageName) {
            case "com.tencent.ig" -> "GLOBAL";
            case "com.pubg.krmobile" -> "KOREA";
            case "com.pubg.imobile" -> "INDIA";
            case "com.rekoo.pubgm" -> "TAIWAN";
            case "com.vng.pubgmobile" -> "VIETNAM";
            default -> "UNKNOWN";
        };
    }

    private void selectRegionButtonForPackage(String packageName) {
        clearRegionSelections();

        switch (packageName) {
            case "com.tencent.ig":
                if (regionGlobal != null) regionGlobal.setSelected(true);
                break;
            case "com.pubg.krmobile":
                if (regionKorea != null) regionKorea.setSelected(true);
                break;
            case "com.pubg.imobile":
                if (regionIndia != null) regionIndia.setSelected(true);
                break;
            case "com.rekoo.pubgm":
                if (regionTaiwan != null) regionTaiwan.setSelected(true);
                break;
            case "com.vng.pubgmobile":
                if (regionVietnam != null) regionVietnam.setSelected(true);
                break;
        }
    }
    
    private void showRetryDialog() {
        new android.app.AlertDialog.Builder(this)
            .setTitle("Initialization Failed")
            .setMessage("Failed to initialize BearMod. Would you like to retry?")
            .setPositiveButton("Retry", (dialog, which) -> {
                // Reset and retry
                initializeMod();
            })
            .setNegativeButton("Exit", (dialog, which) -> {
                finish();
            })
            .setCancelable(false)
            .show();
    }
    


    /**
     * Start the mod service with stealth measures
     */
    private void startModService() {
        if (isServiceRunning) {
            Log.d(TAG, "Service already running");
            return;
        }

        try {
            Log.d(TAG, "Starting mod service...");

            // Check if a target package is selected
            if (selectedTargetPackage == null) {
                android.widget.Toast.makeText(this, "Please select a target game version first", android.widget.Toast.LENGTH_LONG).show();
                Log.w(TAG, "No target package selected");
                return;
            }

            // Check if the selected target app is installed
            if (!installerPackageManager.isPackageInstalled(selectedTargetPackage)) {
                showPackageInstallationGuidance(selectedTargetPackage);
                Log.w(TAG, "Selected target app not installed: " + selectedTargetPackage);
                return;
            }

            // Stage 2: Check injection-specific permissions
            if (!checkStage2Permissions()) {
                Log.d(TAG, "Stage 2 permissions not granted - requesting permissions");
                requestStage2Permissions();
                return;
            }

            // Check OBB files
            if (!isObbInstalled()) {
                Log.w(TAG, "OBB files not found for: " + selectedTargetPackage);
                showObbInstallationPrompt();
                return;
            }

            proceedWithServiceStart();

        } catch (Exception e) {
            Log.e(TAG, "Error starting mod service", e);
            android.widget.Toast.makeText(this, "Error starting service: " + e.getMessage(), android.widget.Toast.LENGTH_LONG).show();
        }
    }

    /**
     * Proceed with starting the service after all checks pass
     */
    private void proceedWithServiceStart() {
        try {
            // Apply auto-patches if configured for service start
            if (autoPatchManager.shouldTriggerAutoPatch(com.bearmod.patch.AutoPatchConfig.AutoPatchTrigger.ON_SERVICE_START)) {
                Log.d(TAG, "Applying auto-patches before service start");
                // Continue with service start after patches
                triggerAutoPatch(this::continueServiceStart);
                return;
            }

            continueServiceStart();
        } catch (Exception e) {
            Log.e(TAG, "Error in proceedWithServiceStart", e);
            android.widget.Toast.makeText(this, "Error starting service: " + e.getMessage(), android.widget.Toast.LENGTH_LONG).show();
        }
    }

    /**
     * Continue with service start after patches (if any)
     */
    private void continueServiceStart() {
        try {
            // Activate stealth measures first
            Log.d(TAG, "Activating stealth measures for: " + selectedTargetPackage);
            if (!antiDetectionManager.activateStealthMeasures()) {
                Log.w(TAG, "Failed to activate stealth measures - continuing anyway");
            }

            // Launch the selected target app
            Log.d(TAG, "Launching target app: " + selectedTargetPackage);
            if (launchSelectedTargetApp()) {
                android.widget.Toast.makeText(this, "Game launched! Starting injection...", android.widget.Toast.LENGTH_SHORT).show();

                // Wait a moment for the game to start, then start injection process
                new android.os.Handler(android.os.Looper.getMainLooper()).postDelayed(this::startInjectionProcess, 3000); // 3 second delay to let game start

            } else {
                android.widget.Toast.makeText(this, "Failed to launch game", android.widget.Toast.LENGTH_SHORT).show();
                Log.e(TAG, "Failed to launch target app: " + selectedTargetPackage);
            }
        } catch (Exception e) {
            Log.e(TAG, "Error in proceedWithServiceStart", e);
            android.widget.Toast.makeText(this, "Error starting service: " + e.getMessage(), android.widget.Toast.LENGTH_LONG).show();
        }
    }

    private boolean launchSelectedTargetApp() {
        try {
            Intent launchIntent = getPackageManager().getLaunchIntentForPackage(selectedTargetPackage);
            if (launchIntent != null) {
                launchIntent.addFlags(Intent.FLAG_ACTIVITY_NEW_TASK);
                startActivity(launchIntent);
                Log.d(TAG, "Successfully launched target app: " + selectedTargetPackage);
                return true;
            } else {
                Log.w(TAG, "No launch intent found for: " + selectedTargetPackage);
                return false;
            }
        } catch (Exception e) {
            Log.e(TAG, "Error launching target app: " + selectedTargetPackage, e);
            return false;
        }
    }

    /**
     * Start injection process using MundoCore with KeyAuth library downloads
     * Floating service will be automatically started by successful injection
     */
    private void startInjectionProcess() {
        new Thread(() -> {
            try {
                Log.d(TAG, "Starting injection process for: " + selectedTargetPackage);

                // Step 1: Download required libraries from KeyAuth
                runOnUiThread(() -> {
                    android.widget.Toast.makeText(this, "Downloading injection libraries...", android.widget.Toast.LENGTH_SHORT).show();
                });

                // Check if libraries are already downloaded
                com.bearmod.patch.FridaPatchManager fridaManager = com.bearmod.patch.FridaPatchManager.getInstance();

                if (!fridaManager.isGadgetLibraryCached("arm64")) {
                    Log.d(TAG, "Downloading required libraries from KeyAuth...");

                    final boolean[] downloadComplete = {false};
                    final String[] downloadError = {null};

                    // Download all required libraries
                    fridaManager.downloadAllRequiredLibraries(this, new com.bearmod.patch.FridaPatchManager.PatchCallback() {
                        @Override
                        public void onPatchSuccess(com.bearmod.patch.model.PatchResult result) {
                            Log.d(TAG, "Library download successful: " + result.getMessage());
                            synchronized (downloadComplete) {
                                downloadComplete[0] = true;
                                downloadComplete.notify();
                            }
                        }

                        @Override
                        public void onPatchFailed(String error) {
                            Log.e(TAG, "Library download failed: " + error);
                            synchronized (downloadComplete) {
                                downloadError[0] = error;
                                downloadComplete[0] = true;
                                downloadComplete.notify();
                            }
                        }

                        @Override
                        public void onPatchProgress(int progress) {
                            Log.d(TAG, "Download progress: " + progress + "%");
                            runOnUiThread(() -> {
                                // Update countdown timer with download progress
                                if (countdownSeconds != null) {
                                    countdownSeconds.setText("DL:" + progress + "%");
                                }
                            });
                        }
                    });

                    // Wait for download to complete
                    synchronized (downloadComplete) {
                        while (!downloadComplete[0]) {
                            downloadComplete.wait();
                        }
                    }

                    if (downloadError[0] != null) {
                        runOnUiThread(() -> {
                            android.widget.Toast.makeText(this, "Download failed: " + downloadError[0], android.widget.Toast.LENGTH_LONG).show();
                        });
                        return;
                    }
                } else {
                    Log.d(TAG, "Required libraries already cached");
                }

                // Step 2: Initialize MundoCore if not already done
                runOnUiThread(() -> {
                    android.widget.Toast.makeText(this, "Initializing injection system...", android.widget.Toast.LENGTH_SHORT).show();
                });

                MundoCore mundoCore = MundoCore.getInstance(this);
                if (!mundoCore.isInitialized()) {
                    Log.w(TAG, "MundoCore not initialized - attempting initialization");
                    // MundoCore should be initialized in LauncherLoginActivity
                    // If not initialized, injection will fail gracefully
                }

                // Step 3: Perform injection using MundoCore
                runOnUiThread(() -> {
                    android.widget.Toast.makeText(this, "Starting injection...", android.widget.Toast.LENGTH_SHORT).show();
                    if (countdownSeconds != null) {
                        countdownSeconds.setText("INJECT");
                    }
                });

                boolean injectionSuccess = mundoCore.injectToPackage(selectedTargetPackage);

                runOnUiThread(() -> {
                    if (injectionSuccess) {
                        // Injection successful - floating service will start automatically
                        isServiceRunning = true;
                        updateServiceStatus();

                        Log.d(TAG, "Injection successful - floating service should start automatically");
                        android.widget.Toast.makeText(this, "Injection successful! Mod active.", android.widget.Toast.LENGTH_SHORT).show();

                        if (countdownSeconds != null) {
                            countdownSeconds.setText("DONE");
                        }

                    } else {
                        // Injection failed
                        String error = mundoCore.getLastError();
                        Log.e(TAG, "Injection failed: " + error);
                        android.widget.Toast.makeText(this, "Injection failed: " + error, android.widget.Toast.LENGTH_LONG).show();

                        if (countdownSeconds != null) {
                            countdownSeconds.setText("FAIL");
                        }
                    }
                });

            } catch (Exception e) {
                Log.e(TAG, "Error during injection process", e);
                runOnUiThread(() -> {
                    android.widget.Toast.makeText(this, "Injection error: " + e.getMessage(), android.widget.Toast.LENGTH_LONG).show();
                });
            }
        }).start();
    }

    /**
     * Stop the mod service and cleanup
     */
    private void stopModService() {
        if (!isServiceRunning) {
            Log.d(TAG, "Service not running");
            return;
        }

        try {
            Log.d(TAG, "Stopping mod service...");

            // Stop injection and floating service through MundoCore
            MundoCore mundoCore = MundoCore.getInstance(this);
            if (mundoCore.isInitialized()) {
                // Disable ESP and other features
                mundoCore.enableESP(false);
                mundoCore.enableSkinMods(false);

                Log.d(TAG, "MundoCore features disabled");
            }

            // Deactivate stealth measures
            antiDetectionManager.deactivateStealthMeasures();

            isServiceRunning = false;
            updateServiceStatus();

            Log.d(TAG, "Mod service stopped successfully");
            android.widget.Toast.makeText(this, "Mod service stopped", android.widget.Toast.LENGTH_SHORT).show();

        } catch (Exception e) {
            Log.e(TAG, "Error stopping mod service", e);
            android.widget.Toast.makeText(this, "Error stopping service: " + e.getMessage(), android.widget.Toast.LENGTH_LONG).show();
        }
    }

    /**
     * Update service status UI
     */
    @SuppressLint("SetTextI18n")
    private void updateServiceStatus() {
        if (serviceStatus != null) {
            if (isServiceRunning) {
                serviceStatus.setText("Service Status: Running");
                serviceStatus.setTextColor(0xFF4CAF50); // Green
                startButton.setEnabled(false);
                stopButton.setEnabled(true);
            } else {
                serviceStatus.setText("Service Status: Stopped");
                serviceStatus.setTextColor(0xFFFFAA00); // Orange
                startButton.setEnabled(true);
                stopButton.setEnabled(false);
            }
        }
    }

    private void setupBackPressedHandler() {
        OnBackPressedCallback callback = new OnBackPressedCallback(true) {
            @Override
            public void handleOnBackPressed() {
                if (splashCompleted) {
                    // Show exit confirmation
                    new android.app.AlertDialog.Builder(MainActivity.this)
                        .setTitle("Exit BearMod")
                        .setMessage("Are you sure you want to exit?")
                        .setPositiveButton("Yes", (dialog, which) -> {
                            if (isModInitialized) {
                                // Stop mod service properly through stopModService method
                                stopModService();
                            }
                            finish();
                            System.exit(0);
                        })
                        .setNegativeButton("No", null)
                        .show();
                } else {
                    // During splash, just minimize
                    moveTaskToBack(true);
                }
            }
        };
        getOnBackPressedDispatcher().addCallback(this, callback);
    }

    @Override
    public void onWindowFocusChanged(boolean hasFocus) {
        super.onWindowFocusChanged(hasFocus);
        if (hasFocus) {
            if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.R) {
                hideSystemUI();
            }
        }
    }
    
    @RequiresApi(api = Build.VERSION_CODES.R)
    private void hideSystemUI() {
        WindowInsetsController controller = null;
        controller = getWindow().getInsetsController();
        if (controller != null) {
            controller.hide(WindowInsets.Type.statusBars() |
                    WindowInsets.Type.navigationBars());
            controller.setSystemBarsBehavior(
                WindowInsetsController.BEHAVIOR_SHOW_TRANSIENT_BARS_BY_SWIPE);
        }
    }
    
    @Override
    protected void onResume() {
        super.onResume();
        Log.d(TAG, "MainActivity resumed - mod active: " + isModInitialized);
    }
    
    @Override
    protected void onPause() {
        super.onPause();
        Log.d(TAG, "MainActivity paused");
    }
    
    /**
     * KeyAuth API v1.3 initialization - no secrets needed
     */
    private void testHmacGeneration() {
        Log.d(TAG, "KeyAuth API v1.3 - No application secrets required");
        Log.d(TAG, "Using simplified license verification");
        
        // Example: Calculate hashes for app integrity verification
        calculateAppHashes();
    }
    
    /**
     * Calculate hashes for app integrity verification
     */
    private void calculateAppHashes() {
        try {
            Log.d(TAG, "=== Starting Hash Calculation ===");
            
            // Calculate hashes for items.json in assets
            FileHashCalculator.HashResult assetResult = FileHashCalculator.calculateAssetHashes(
                this, 
                "items.json"
            );
            
            if (assetResult.isSuccess()) {
                Log.d(TAG, "Asset Hash Results:");
                Log.d(TAG, "File: " + assetResult.getFilePath());
                Log.d(TAG, "MD5: " + assetResult.getMd5());
                Log.d(TAG, "SHA1: " + assetResult.getSha1());
                Log.d(TAG, "SHA256: " + assetResult.getSha256());
                Log.d(TAG, "CRC32: " + assetResult.getCrc32());
            } else {
                Log.e(TAG, "Failed to calculate asset hashes: " + assetResult.getErrorMessage());
            }
            
            // Calculate hashes for current APK
            FileHashCalculator.HashResult apkResult = FileHashCalculator.calculateCurrentApkHashes(this);
            
            if (apkResult.isSuccess()) {
                Log.d(TAG, "APK Hash Results:");
                Log.d(TAG, "APK File: " + apkResult.getFilePath());
                Log.d(TAG, "APK MD5: " + apkResult.getMd5());
                Log.d(TAG, "APK SHA1: " + apkResult.getSha1());
                Log.d(TAG, "APK SHA256: " + apkResult.getSha256());
                Log.d(TAG, "APK CRC32: " + apkResult.getCrc32());
            } else {
                Log.e(TAG, "Failed to calculate APK hashes: " + apkResult.getErrorMessage());
            }
            
        } catch (Exception e) {
            Log.e(TAG, "Error during hash calculation", e);
        }
    }
    

    
    @Override
    protected void onDestroy() {
        super.onDestroy();
        Log.d(TAG, "MainActivity destroyed");

        // Clean up
        if (currentAnimation != null) {
            currentAnimation.cancel();
        }

        // Stop countdown timer
        stopCountdownTimer();

        // Stop mod service if running
        if (isModInitialized && isServiceRunning) {
            stopModService();
        }
    }

    /**
     * Trigger auto-patch for selected target package
     */
    private void triggerAutoPatch() {
        triggerAutoPatch(null);
    }

    /**
     * Trigger auto-patch with callback
     */
    private void triggerAutoPatch(Runnable onComplete) {
        if (selectedTargetPackage == null) {
            Log.w(TAG, "No target package selected for auto-patch");
            if (onComplete != null) onComplete.run();
            return;
        }

        Log.d(TAG, "Starting auto-patch for: " + selectedTargetPackage);
        android.widget.Toast.makeText(this, "Applying patches for " + getDisplayNameForPackage(selectedTargetPackage) + "...", android.widget.Toast.LENGTH_SHORT).show();

        autoPatchManager.applyAutoPatch(this, selectedTargetPackage, new com.bearmod.patch.AutoPatchManager.AutoPatchCallback() {
            @Override
            public void onAllPatchesComplete(java.util.List<com.bearmod.patch.model.PatchResult> results) {
                runOnUiThread(() -> {
                    int successCount = 0;
                    int failCount = 0;

                    for (com.bearmod.patch.model.PatchResult result : results) {
                        if (result.isSuccess()) {
                            successCount++;
                        } else {
                            failCount++;
                        }
                    }

                    String message;
                    if (failCount == 0) {
                        message = "All patches applied successfully (" + successCount + "/" + results.size() + ")";
                        android.widget.Toast.makeText(MainActivity.this, message, android.widget.Toast.LENGTH_SHORT).show();
                    } else {
                        message = "Patches completed: " + successCount + " success, " + failCount + " failed";
                        android.widget.Toast.makeText(MainActivity.this, message, android.widget.Toast.LENGTH_LONG).show();
                    }

                    Log.d(TAG, "Auto-patch completed: " + message);

                    if (onComplete != null) {
                        onComplete.run();
                    }
                });
            }

            @Override
            public void onPatchProgress(String patchId, int progress) {
                Log.d(TAG, "Patch progress - " + patchId + ": " + progress + "%");
            }

            @Override
            public void onPatchComplete(com.bearmod.patch.model.PatchResult result) {
                Log.d(TAG, "Patch completed: " + result);
            }
        });
    }
}
