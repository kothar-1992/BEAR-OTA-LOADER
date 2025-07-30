package com.bearmod.loader.permissions;

import android.annotation.SuppressLint;
import android.app.AlertDialog;
import android.content.Context;
import android.graphics.Color;
import android.graphics.drawable.ColorDrawable;
import android.view.LayoutInflater;
import android.view.View;
import android.widget.Button;
import android.widget.LinearLayout;
import android.widget.TextView;

import com.bearmod.loader.R;

import java.util.List;

/**
 * STREAMLINED: Simple permission confirmation dialog
 * Focuses on quick user confirmation without extensive explanations
 */
public class StreamlinedPermissionDialog {
    private static final String TAG = "StreamlinedPermissionDialog";
    
    private final Context context;
    private final PermissionManager permissionManager;
    private AlertDialog dialog;
    
    public StreamlinedPermissionDialog(Context context, PermissionManager permissionManager) {
        this.context = context;
        this.permissionManager = permissionManager;
    }
    
    /**
     * Show streamlined permission confirmation
     */
    public void showPermissionConfirmation(List<String> missingPermissions, OnConfirmListener listener) {
        if (missingPermissions.isEmpty()) {
            listener.onConfirmed();
            return;
        }
        
        // Create simple confirmation dialog
        AlertDialog.Builder builder = new AlertDialog.Builder(context);
        
        // Create custom view
        View dialogView = createDialogView(missingPermissions);
        builder.setView(dialogView);
        
        // Create dialog
        dialog = builder.create();
        
        // Set transparent background for custom styling
        if (dialog.getWindow() != null) {
            dialog.getWindow().setBackgroundDrawable(new ColorDrawable(Color.TRANSPARENT));
        }
        
        // Setup buttons
        setupButtons(dialogView, listener);
        
        dialog.setCancelable(false);
        dialog.show();
    }
    
    /**
     * Create streamlined dialog view
     */
    @SuppressLint("SetTextI18n")
    private View createDialogView(List<String> missingPermissions) {
        LayoutInflater inflater = LayoutInflater.from(context);
        @SuppressLint("InflateParams") View view = inflater.inflate(R.layout.dialog_streamlined_permission, null);
        
        TextView tvTitle = view.findViewById(R.id.tv_permission_title);
        TextView tvMessage = view.findViewById(R.id.tv_permission_message);
        LinearLayout llPermissions = view.findViewById(R.id.ll_permissions_brief);
        
        // Set title
        tvTitle.setText("Permissions Required");
        
        // Set brief message
        tvMessage.setText("BearMod needs these permissions to function:");
        
        // Add brief permission list
        for (String permission : missingPermissions) {
            TextView permissionView = new TextView(context);
            String displayName = permissionManager.getPermissionDisplayName(permission);
            String purpose = permissionManager.getPermissionDescription(permission);
            
            permissionView.setText("• " + displayName + " - " + purpose);
            permissionView.setTextColor(context.getColor(R.color.md3_on_surface));
            permissionView.setTextSize(14f);
            permissionView.setPadding(0, 4, 0, 4);
            
            llPermissions.addView(permissionView);
        }
        
        return view;
    }
    
    /**
     * Setup dialog buttons
     */
    private void setupButtons(View dialogView, OnConfirmListener listener) {
        Button btnGrant = dialogView.findViewById(R.id.btn_grant_permissions);
        Button btnCancel = dialogView.findViewById(R.id.btn_cancel_permissions);
        
        btnGrant.setOnClickListener(v -> {
            listener.onConfirmed();
            dismiss();
        });
        
        btnCancel.setOnClickListener(v -> {
            listener.onCancelled();
            dismiss();
        });
        
        // Apply Material Design 3 styling
        btnGrant.setBackgroundTintList(context.getColorStateList(R.color.md3_primary));
        btnGrant.setTextColor(context.getColor(R.color.md3_on_primary));
        
        btnCancel.setBackgroundTintList(context.getColorStateList(R.color.md3_surface_variant));
        btnCancel.setTextColor(context.getColor(R.color.md3_on_surface_variant));
    }
    
    /**
     * Update dialog when permissions change
     */
    public void updatePermissionStatus(List<String> stillMissingPermissions) {
        if (stillMissingPermissions.isEmpty()) {
            showSuccessAndDismiss();
        }
    }
    
    /**
     * Show success message and dismiss
     */
    @SuppressLint("SetTextI18n")
    private void showSuccessAndDismiss() {
        if (dialog != null && dialog.isShowing()) {
            // Find views and update
            View dialogView = dialog.findViewById(android.R.id.content);
            if (dialogView != null) {
                TextView tvTitle = dialogView.findViewById(R.id.tv_permission_title);
                TextView tvMessage = dialogView.findViewById(R.id.tv_permission_message);
                LinearLayout llPermissions = dialogView.findViewById(R.id.ll_permissions_brief);
                Button btnGrant = dialogView.findViewById(R.id.btn_grant_permissions);
                Button btnCancel = dialogView.findViewById(R.id.btn_cancel_permissions);
                
                if (tvTitle != null) tvTitle.setText("Permissions Granted");
                if (tvMessage != null) tvMessage.setText("All permissions granted successfully!");
                if (llPermissions != null) llPermissions.setVisibility(View.GONE);
                if (btnGrant != null) {
                    btnGrant.setText("Continue");
                    btnGrant.setOnClickListener(v -> dismiss());
                }
                if (btnCancel != null) btnCancel.setVisibility(View.GONE);
            }
            
            // Auto-dismiss after short delay
            assert dialogView != null;
            dialogView.postDelayed(this::dismiss, 1500);
        }
    }
    
    /**
     * Dismiss dialog
     */
    public void dismiss() {
        if (dialog != null && dialog.isShowing()) {
            dialog.dismiss();
        }
    }
    
    /**
     * Check if dialog is showing
     */
    public boolean isShowing() {
        return dialog != null && dialog.isShowing();
    }
    
    /**
     * Confirmation listener interface
     */
    public interface OnConfirmListener {
        void onConfirmed();
        void onCancelled();
    }
}
