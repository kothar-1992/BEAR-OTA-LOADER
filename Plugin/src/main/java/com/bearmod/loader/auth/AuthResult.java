package com.bearmod.loader.auth;

import java.util.Date;
import java.util.List;
import java.util.ArrayList;

/**
 * Authentication result
 * Contains information about authentication status
 */
public class AuthResult {

    private final boolean success;
    private final String message;
    private final Date expiryDate;
    private final String registrationDate;
    private final List<String> permissions;
    
    /**
     * Constructor
     * @param success Success status
     * @param message Result message
     * @param expiryDate License expiry date
     * @param registrationDate Registration date
     */
    public AuthResult(boolean success, String message, Date expiryDate, String registrationDate) {
        this.success = success;
        this.message = message;
        this.expiryDate = expiryDate;
        this.registrationDate = registrationDate;
        this.permissions = new ArrayList<>();
    }

    /**
     * Constructor with permissions
     * @param success Success status
     * @param message Result message
     * @param expiryDate License expiry date
     * @param registrationDate Registration date
     * @param permissions User permissions
     */
    public AuthResult(boolean success, String message, Date expiryDate, String registrationDate, List<String> permissions) {
        this.success = success;
        this.message = message;
        this.expiryDate = expiryDate;
        this.registrationDate = registrationDate;
        this.permissions = permissions != null ? new ArrayList<>(permissions) : new ArrayList<>();
    }
    
    /**
     * Check if authentication was successful
     * @return true if successful, false otherwise
     */
    public boolean isSuccess() {
        return success;
    }
    
    /**
     * Get result message
     * @return Result message
     */
    public String getMessage() {
        return message;
    }
    
    /**
     * Get license expiry date
     * @return Expiry date
     */
    public Date getExpiryDate() {
        return expiryDate;
    }
    
    /**
     * Get registration date
     * @return Registration date
     */
    public String getRegistrationDate() {
        return registrationDate;
    }

    /**
     * Get user permissions
     * @return List of permissions
     */
    public List<String> getPermissions() {
        return new ArrayList<>(permissions);
    }

    /**
     * Check if user has specific permission
     * @param permission Permission to check
     * @return true if user has permission, false otherwise
     */
    public boolean hasPermission(String permission) {
        return permissions != null && permissions.contains(permission);
    }

    /**
     * Add permission to the result
     * @param permission Permission to add
     */
    public void addPermission(String permission) {
        if (permission != null && !permissions.contains(permission)) {
            permissions.add(permission);
        }
    }
}
