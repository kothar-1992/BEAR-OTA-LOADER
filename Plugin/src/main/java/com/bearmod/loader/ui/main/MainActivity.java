package com.bearmod.loader.ui.main;

import android.annotation.SuppressLint;
import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.content.SharedPreferences;
import android.os.Bundle;
import android.util.Log;
import android.view.MenuItem;
import android.view.View;
import android.widget.Toast;

import androidx.annotation.NonNull;
import androidx.appcompat.app.ActionBarDrawerToggle;
import androidx.appcompat.app.AppCompatActivity;
import androidx.core.content.ContextCompat;
import androidx.core.view.GravityCompat;

import com.bearmod.loader.R;
import com.bearmod.loader.auth.AuthResult;
import com.bearmod.loader.auth.KeyAuthManager;
import com.bearmod.loader.constants.PubgPackages;
import com.bearmod.loader.databinding.ActivityMainBinding;
import com.bearmod.loader.ui.auth.LoginActivity;
import com.bearmod.loader.ui.launcher.BackgroundLauncherActivity;
import com.bearmod.loader.ui.settings.SettingsActivity;
import com.bearmod.loader.security.DataClearingManager;
import com.google.android.material.navigation.NavigationView;
import com.google.android.material.snackbar.Snackbar;
import com.google.android.material.dialog.MaterialAlertDialogBuilder;
import com.google.android.material.progressindicator.LinearProgressIndicator;

/**
 * Main activity (Dashboard)
 * Modern target app selection interface for PUBG variants
 *
 * TODO: Future Implementation Phases:
 * - Phase 6: Implement actual app activation/deactivation logic
 * - Phase 7: Integrate libmundo.so for native code injection
 * - Phase 8: Add per-app KeyAuth license validation
 * - Phase 9: Implement OTA update system for automatic updates
 * - Phase 10: Add safe gaming features and anti-detection mechanisms
 * - Phase 11: Add app version detection and compatibility checks
 * - Phase 12: Implement memory scanning and offset management
 * - Phase 13: Add real-time status monitoring and health checks
 */
public class MainActivity extends AppCompatActivity implements
        NavigationView.OnNavigationItemSelectedListener {

    private ActivityMainBinding binding;
    private KeyAuthManager keyAuthManager;

    // State management
    private static final String PREFS_NAME = "pubg_selection_prefs";
    private static final String SELECTED_VARIANT_KEY = "selected_variant";
    private int selectedVariantIndex = -1; // -1 means no selection

    // CRITICAL FIX: Broadcast receiver for clearing variant selection
    private BroadcastReceiver clearSelectionReceiver;
    private int variantIndex;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);

        // Initialize view binding
        binding = ActivityMainBinding.inflate(getLayoutInflater());
        setContentView(binding.getRoot());

        // Initialize managers and preferences
        keyAuthManager = KeyAuthManager.getInstance();
        SharedPreferences preferences = getSharedPreferences(PREFS_NAME, MODE_PRIVATE);

        // Set up toolbar
        setSupportActionBar(binding.toolbar);

        // Set up navigation drawer
        ActionBarDrawerToggle toggle = new ActionBarDrawerToggle(
                this, binding.drawerLayout, binding.toolbar,
                R.string.navigation_drawer_open, R.string.navigation_drawer_close);
        binding.drawerLayout.addDrawerListener(toggle);
        toggle.syncState();

        // Set up navigation view
        binding.navView.setNavigationItemSelectedListener(this);

        // ARCHITECTURE FIX: Set up PUBG app switches with contextual BackgroundLauncher integration
        setupPubgAppSwitches();

        // Restore previous selection
        restoreSelectedVariant();

        // Update license info in navigation header
        updateLicenseInfo();

        // Initialize entrance animations
        initializeEntranceAnimations();

        // CRITICAL FIX: Register broadcast receiver for clearing variant selection
        setupClearSelectionReceiver();
    }

    /**
     * Set up PUBG app switches with radio button behavior and navigation
     */
    private void setupPubgAppSwitches() {
        // Global switch - radio button behavior
        binding.switchPubgGlobal.setOnCheckedChangeListener((buttonView, isChecked) -> {
            if (isChecked) {
                selectVariant(PubgPackages.GLOBAL_INDEX);
            }
        });

        // Korea switch - radio button behavior
        binding.switchPubgKorea.setOnCheckedChangeListener((buttonView, isChecked) -> {
            if (isChecked) {
                selectVariant(PubgPackages.KOREA_INDEX);
            }
        });

        // Vietnam switch - radio button behavior
        binding.switchPubgVietnam.setOnCheckedChangeListener((buttonView, isChecked) -> {
            if (isChecked) {
                selectVariant(PubgPackages.VIETNAM_INDEX);
            }
        });

        // Taiwan switch - radio button behavior
        binding.switchPubgTaiwan.setOnCheckedChangeListener((buttonView, isChecked) -> {
            if (isChecked) {
                selectVariant(PubgPackages.TAIWAN_INDEX);
            }
        });
    }

    /**
     * ARCHITECTURE FIX: Select a PUBG variant with radio button behavior
     * This is the correct entry point for accessing BackgroundLauncherActivity
     */
    private void selectVariant(int variantIndex) {
        String variantName = PubgPackages.getNameByIndex(variantIndex);

        Log.i("MainActivity", "ARCHITECTURE: User selected " + variantName + " - launching contextual enhancement tools");

        // Deactivate all other variants (radio button behavior)
        clearAllVariants();

        // Activate selected variant
        selectedVariantIndex = variantIndex;
        updateVariantState(variantIndex, true);

        // Save selection to preferences
        saveSelectedVariant(variantIndex);

        // ARCHITECTURE FIX: Navigate to BackgroundLauncherActivity contextually
        // This is the ONLY correct way to access BackgroundLauncherActivity
        navigateToLauncher(variantIndex);
    }

    /**
     * Clear all variant selections
     */
    private void clearAllVariants() {
        // Temporarily disable listeners to prevent recursive calls
        binding.switchPubgGlobal.setOnCheckedChangeListener(null);
        binding.switchPubgKorea.setOnCheckedChangeListener(null);
        binding.switchPubgVietnam.setOnCheckedChangeListener(null);
        binding.switchPubgTaiwan.setOnCheckedChangeListener(null);

        // Clear all switches
        binding.switchPubgGlobal.setChecked(false);
        binding.switchPubgKorea.setChecked(false);
        binding.switchPubgVietnam.setChecked(false);
        binding.switchPubgTaiwan.setChecked(false);

        // Update all status indicators to inactive
        updateVariantState(PubgPackages.GLOBAL_INDEX, false);
        updateVariantState(PubgPackages.KOREA_INDEX, false);
        updateVariantState(PubgPackages.VIETNAM_INDEX, false);
        updateVariantState(PubgPackages.TAIWAN_INDEX, false);

        // Re-enable listeners
        setupPubgAppSwitches();
    }

    /**
     * ARCHITECTURE FIX: Navigate to BackgroundLauncherActivity with selected package
     * This is the ONLY correct way to access BackgroundLauncherActivity - through contextual
     * game selection in MainActivity, not as a standalone menu item
     */
    private void navigateToLauncher(int variantIndex) {
        String targetPackage = PubgPackages.getPackageByIndex(variantIndex);
        String variantName = PubgPackages.getNameByIndex(variantIndex);

        Log.d("MainActivity", "ARCHITECTURE: Launching BackgroundLauncherActivity contextually for " + variantName);

        Intent intent = new Intent(this, BackgroundLauncherActivity.class);

        // ARCHITECTURE FIX: Pass comprehensive context to ensure fresh state
        intent.putExtra("TARGET_PACKAGE", targetPackage);
        intent.putExtra("VARIANT_NAME", variantName);
        intent.putExtra("VARIANT_INDEX", variantIndex);
        intent.putExtra("LAUNCH_TIMESTAMP", System.currentTimeMillis());

        // ARCHITECTURE FIX: Clear any previous BackgroundLauncherActivity state
        // This ensures fresh state on each launch
        intent.addFlags(Intent.FLAG_ACTIVITY_CLEAR_TOP | Intent.FLAG_ACTIVITY_SINGLE_TOP);

        // Show user-friendly feedback
        Snackbar.make(binding.getRoot(), "Launching " + variantName + " enhancement tools", Snackbar.LENGTH_SHORT)
                .setBackgroundTint(ContextCompat.getColor(this, R.color.card_background))
                .setTextColor(ContextCompat.getColor(this, R.color.text_primary))
                .show();

        startActivity(intent);

        Log.d("MainActivity", "BackgroundLauncherActivity launched with context: package=" + targetPackage +
              ", variant=" + variantName + ", index=" + variantIndex);
    }

    /**
     * CRITICAL FIX: Disable saving variant selection to prevent state persistence
     * This ensures fresh state on every app launch
     */
    private void saveSelectedVariant(int variantIndex) {
        this.variantIndex = variantIndex;
        // CRITICAL FIX: Do not save selection to SharedPreferences
        // This prevents automatic restoration and ensures fresh state each session
        Log.d("MainActivity", "CRITICAL FIX: Variant selection not saved - ensuring fresh state each session");
    }

    /**
     * CRITICAL FIX: Disable automatic variant restoration to prevent state persistence
     * Every app launch should start fresh with all variants showing as "Available"
     */
    private void restoreSelectedVariant() {
        // CRITICAL FIX: Always start with clean state - no automatic restoration
        // This ensures users must explicitly select a variant each session
        selectedVariantIndex = -1;

        // Ensure all variants start in "Available" state
        clearAllVariants();

        // Set all status indicators to "Available" state
        for (int i = 0; i < PubgPackages.getPackageCount(); i++) {
            updateVariantState(i, false); // false = Available state
        }

        Log.d("MainActivity", "CRITICAL FIX: Started with fresh state - no variant pre-selected");
    }

    /**
     * CRITICAL FIX: Setup broadcast receiver to handle variant selection clearing
     * This ensures MainActivity UI is updated when BackgroundLauncherActivity clears state
     */
    @SuppressLint("UnspecifiedRegisterReceiverFlag")
    private void setupClearSelectionReceiver() {
        clearSelectionReceiver = new BroadcastReceiver() {
            @Override
            public void onReceive(Context context, Intent intent) {
                if ("com.bearmod.loader.CLEAR_VARIANT_SELECTION".equals(intent.getAction())) {
                    Log.d("MainActivity", "CRITICAL FIX: Received clear selection broadcast");

                    // Clear all variant selections immediately
                    selectedVariantIndex = -1;
                    clearAllVariants();

                    // Reset all variants to "Available" state
                    for (int i = 0; i < PubgPackages.getPackageCount(); i++) {
                        updateVariantState(i, false); // false = Available state
                    }

                    Log.d("MainActivity", "Variant selection cleared via broadcast");
                }
            }
        };

        // Register the receiver
        IntentFilter filter = new IntentFilter("com.bearmod.loader.CLEAR_VARIANT_SELECTION");
        registerReceiver(clearSelectionReceiver, filter);

        Log.d("MainActivity", "Clear selection broadcast receiver registered");
    }

    /**
     * Update variant state and visual indicators
     */
    private void updateVariantState(int variantIndex, boolean isActive) {
        // Update status indicators and text
        View statusIndicator;
        android.widget.TextView statusText;

        switch (variantIndex) {
            case 0: // Global
                statusIndicator = binding.statusIndicatorGlobal;
                statusText = binding.tvStatusGlobal;
                break;
            case 1: // Korea
                statusIndicator = binding.statusIndicatorKorea;
                statusText = binding.tvStatusKorea;
                break;
            case 2: // Vietnam
                statusIndicator = binding.statusIndicatorVietnam;
                statusText = binding.tvStatusVietnam;
                break;
            case 3: // Taiwan
                statusIndicator = binding.statusIndicatorTaiwan;
                statusText = binding.tvStatusTaiwan;
                break;
            default:
                return;
        }

        // Animate status change
        statusIndicator.animate()
                .scaleX(0f)
                .scaleY(0f)
                .setDuration(150)
                .withEndAction(() -> {
                    // Update colors and text
                    int color = isActive ? R.color.accent_secondary : R.color.error;
                    String status = isActive ? "Selected" : "Available";

                    statusIndicator.setBackgroundTintList(
                            ContextCompat.getColorStateList(this, color));
                    statusText.setText(status);

                    // Animate back in
                    statusIndicator.animate()
                            .scaleX(1f)
                            .scaleY(1f)
                            .setDuration(150)
                            .start();
                });

        Log.d("MainActivity", "Variant " + PubgPackages.getNameByIndex(variantIndex) +
              " state changed to: " + (isActive ? "selected" : "available"));
    }

    /**
     * Animate switch with modern effects
     */
    private void animateSwitch(View switchView, boolean isChecked) {
        // Scale animation for feedback
        switchView.animate()
                .scaleX(0.95f)
                .scaleY(0.95f)
                .setDuration(100)
                .withEndAction(() -> {
                    switchView.animate()
                            .scaleX(1f)
                            .scaleY(1f)
                            .setDuration(100)
                            .start();
                });
    }

    /**
     * Initialize modern entrance animations for UI elements
     */
    private void initializeEntranceAnimations() {
        // Set initial states for animation
        binding.tvWelcome.setAlpha(0f);
        binding.tvWelcome.setTranslationY(-30f);
        binding.tvSubtitle.setAlpha(0f);
        binding.tvSubtitle.setTranslationY(-20f);

        binding.cardPubgGlobal.setAlpha(0f);
        binding.cardPubgGlobal.setTranslationY(50f);
        binding.cardPubgKorea.setAlpha(0f);
        binding.cardPubgKorea.setTranslationY(60f);
        binding.cardPubgVietnam.setAlpha(0f);
        binding.cardPubgVietnam.setTranslationY(70f);
        binding.cardPubgTaiwan.setAlpha(0f);
        binding.cardPubgTaiwan.setTranslationY(80f);

        // Animate welcome text
        binding.tvWelcome.animate()
                .alpha(1f)
                .translationY(0f)
                .setDuration(600)
                .setStartDelay(200)
                .start();

        binding.tvSubtitle.animate()
                .alpha(1f)
                .translationY(0f)
                .setDuration(500)
                .setStartDelay(300)
                .start();

        // Animate cards with staggered delays
        binding.cardPubgGlobal.animate()
                .alpha(1f)
                .translationY(0f)
                .setDuration(500)
                .setStartDelay(400)
                .start();

        binding.cardPubgKorea.animate()
                .alpha(1f)
                .translationY(0f)
                .setDuration(500)
                .setStartDelay(500)
                .start();

        binding.cardPubgVietnam.animate()
                .alpha(1f)
                .translationY(0f)
                .setDuration(500)
                .setStartDelay(600)
                .start();

        binding.cardPubgTaiwan.animate()
                .alpha(1f)
                .translationY(0f)
                .setDuration(500)
                .setStartDelay(700)
                .start();
    }

    /**
     * Update license info in navigation header
     */
    private void updateLicenseInfo() {
        keyAuthManager.validateLicense(new KeyAuthManager.AuthCallback() {
            @Override
            public void onSuccess(AuthResult result) {
                // Get license info
                keyAuthManager.formatExpiryDate(result.getExpiryDate());
                int remainingDays = keyAuthManager.getRemainingDays(result.getExpiryDate());

                // Update navigation header
                View headerView = binding.navView.getHeaderView(0);
                if (headerView != null) {
                    headerView.findViewById(R.id.tv_license_info).post(() -> {
                        if (headerView.findViewById(R.id.tv_license_info) != null) {
                            String licenseText;
                            if (remainingDays == -1) {
                                licenseText = "License: Active (No expiry)";
                            } else {
                                licenseText = getString(R.string.days_remaining, remainingDays);
                            }
                            ((android.widget.TextView) headerView.findViewById(R.id.tv_license_info))
                                    .setText(licenseText);
                        }
                    });
                }
            }

            @Override
            public void onError(String error) {
                // Handle error with user-friendly message
                Toast.makeText(MainActivity.this, "Authentication failed. Please check your connection.", Toast.LENGTH_SHORT).show();
            }
        });
    }



    @Override
    public boolean onNavigationItemSelected(@NonNull MenuItem item) {
        // Handle navigation view item clicks
        int id = item.getItemId();

        if (id == R.id.nav_dashboard) {
            // Already on dashboard, do nothing
        } else if (id == R.id.nav_settings) {
            // Navigate to settings activity
            Intent intent = new Intent(this, SettingsActivity.class);
            startActivity(intent);
        } else if (id == R.id.nav_logout) {
            // Logout
            logout();
        }

        // Close drawer
        binding.drawerLayout.closeDrawer(GravityCompat.START);
        return true;
    }

    /**
     * ENHANCED: Logout user with comprehensive data clearing
     */
    private void logout() {
        // Show confirmation dialog with data clearing warning
        new MaterialAlertDialogBuilder(this)
                .setTitle("Logout Confirmation")
                .setMessage("This will log you out and securely clear all game modifications, authentication data, and cached files. Continue?")
                .setPositiveButton("Logout & Clear Data", (dialog, which) -> {
                    performLogoutWithDataClearing();
                })
                .setNegativeButton("Cancel", null)
                .show();
    }

    /**
     * Perform logout with comprehensive data clearing
     */
    private void performLogoutWithDataClearing() {
        // Show progress dialog
        MaterialAlertDialogBuilder progressBuilder = new MaterialAlertDialogBuilder(this);
        progressBuilder.setTitle("Logging Out");
        progressBuilder.setMessage("Clearing sensitive data...");
        progressBuilder.setCancelable(false);

        // Create progress indicator
        LinearProgressIndicator progressIndicator = new LinearProgressIndicator(this);
        progressIndicator.setIndeterminate(false);
        progressIndicator.setProgress(0);
        progressBuilder.setView(progressIndicator);

        androidx.appcompat.app.AlertDialog progressDialog = progressBuilder.create();
        progressDialog.show();

        // Start comprehensive data clearing
        DataClearingManager dataClearingManager = DataClearingManager.getInstance(this);
        dataClearingManager.performComprehensiveCleanup(new DataClearingManager.CleanupListener() {
            @Override
            public void onCleanupStarted() {
                runOnUiThread(() -> {
                    progressIndicator.setProgress(0);
                });
            }

            @Override
            public void onCleanupProgress(int percentage, String currentTask) {
                runOnUiThread(() -> {
                    progressIndicator.setProgress(percentage);
                    progressDialog.setMessage(currentTask);
                });
            }

            @Override
            public void onCleanupCompleted(boolean success) {
                runOnUiThread(() -> {
                    progressDialog.dismiss();

                    // Logout with KeyAuth
                    keyAuthManager.logout();

                    // Navigate to login activity
                    Intent intent = new Intent(MainActivity.this, LoginActivity.class);
                    intent.addFlags(Intent.FLAG_ACTIVITY_CLEAR_TOP | Intent.FLAG_ACTIVITY_NEW_TASK);
                    startActivity(intent);
                    finish();
                });
            }

            @Override
            public void onCleanupFailed(String error) {
                runOnUiThread(() -> {
                    progressDialog.dismiss();

                    // Show error but still logout
                    Snackbar.make(binding.getRoot(), "Data clearing failed: " + error, Snackbar.LENGTH_LONG).show();

                    // Logout anyway for security
                    keyAuthManager.logout();

                    Intent intent = new Intent(MainActivity.this, LoginActivity.class);
                    intent.addFlags(Intent.FLAG_ACTIVITY_CLEAR_TOP | Intent.FLAG_ACTIVITY_NEW_TASK);
                    startActivity(intent);
                    finish();
                });
            }
        });
    }

    @Override
    public void onBackPressed() {
        // Close drawer if open
        if (binding.drawerLayout.isDrawerOpen(GravityCompat.START)) {
            binding.drawerLayout.closeDrawer(GravityCompat.START);
        } else {
            super.onBackPressed();
            getOnBackPressedDispatcher().onBackPressed();
        }
    }

    @Override
    protected void onDestroy() {
        super.onDestroy();

        // CRITICAL FIX: Unregister broadcast receiver to prevent memory leaks
        if (clearSelectionReceiver != null) {
            try {
                unregisterReceiver(clearSelectionReceiver);
                Log.d("MainActivity", "Clear selection broadcast receiver unregistered");
            } catch (Exception e) {
                Log.w("MainActivity", "Error unregistering clear selection receiver", e);
            }
        }
    }

}
