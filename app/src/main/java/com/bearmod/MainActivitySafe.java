package com.bearmod;

import android.annotation.SuppressLint;
import android.content.Intent;
import android.os.Bundle;
import android.util.Log;
import android.view.View;
import android.widget.Button;
import android.widget.ProgressBar;
import android.widget.TextView;
import android.widget.ImageView;
import android.os.Handler;
import android.os.Looper;

import androidx.appcompat.app.AppCompatActivity;

/**
 * Safe version of MainActivity with minimal features
 * Use this if the main MainActivity crashes
 */
public class MainActivitySafe extends AppCompatActivity {
    private static final String TAG = "MainActivitySafe";
    
    private View splashLayout;
    private View mainAppLayout;
    private TextView status;
    
    @SuppressLint("SetTextI18n")
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        
        try {
            Log.d(TAG, "Starting safe MainActivity");
            
            // Use the safe layout
            setContentView(R.layout.activity_main_safe);
            
            initViews();
            startSafeInitialization();
            
        } catch (Exception e) {
            Log.e(TAG, "Error in safe onCreate", e);
            // If even this fails, show a simple error
            setContentView(android.R.layout.simple_list_item_1);
            TextView errorView = findViewById(android.R.id.text1);
            if (errorView != null) {
                errorView.setText("BearMod failed to start: " + e.getMessage());
            }
        }
    }
    
    @SuppressLint("SetTextI18n")
    private void initViews() {
        splashLayout = findViewById(R.id.splash_layout);
        mainAppLayout = findViewById(R.id.main_app_layout);
        status = findViewById(R.id.status);
        
        Button settingsButton = findViewById(R.id.settings_button);
        Button aboutButton = findViewById(R.id.about_button);
        Button exitButton = findViewById(R.id.exit_button);
        
        if (settingsButton != null) {
            settingsButton.setOnClickListener(v -> {
                try {
                    // Note: GLES3JNIView is not a Service - this is for demo/testing only
                    // In production, floating service should be started by injection process
                    status.setText("Demo: Floating service would start after injection");
                    Log.d(TAG, "Settings button clicked - floating service integration needed");
                } catch (Exception e) {
                    Log.e(TAG, "Error in settings", e);
                    status.setText("Error: " + e.getMessage());
                }
            });
        }
        
        if (aboutButton != null) {
            aboutButton.setOnClickListener(v -> {
                try {
                    new android.app.AlertDialog.Builder(this)
                        .setTitle("BearMod Safe Mode")
                        .setMessage("BearMod v3.9.0 (Safe Mode)\nThis is a fallback version with minimal features.")
                        .setPositiveButton("OK", null)
                        .show();
                } catch (Exception e) {
                    Log.e(TAG, "Error showing about", e);
                }
            });
        }
        
        if (exitButton != null) {
            exitButton.setOnClickListener(v -> finish());
        }
    }
    
    @SuppressLint("SetTextI18n")
    private void startSafeInitialization() {
        new Handler(Looper.getMainLooper()).postDelayed(() -> {
            try {
                status.setText("Initializing native library...");
                
                // Try to load native library safely
                try {
                    System.loadLibrary("bearmod"); // Load correct native library
                    status.setText("Native library loaded");
                } catch (Exception e) {
                    status.setText("Running in demo mode");
                    Log.w(TAG, "Native library not available: " + e.getMessage());
                }
                
                // Transition to main view
                new Handler(Looper.getMainLooper()).postDelayed(() -> {
                    splashLayout.setVisibility(View.GONE);
                    mainAppLayout.setVisibility(View.VISIBLE);
                    status.setText("BearMod ready (Safe Mode)");
                }, 1000);
                
            } catch (Exception e) {
                Log.e(TAG, "Error in initialization", e);
                status.setText("Error: " + e.getMessage());
            }
        }, 1000);
    }
} 