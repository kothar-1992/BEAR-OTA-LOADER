package com.bearmod.loader.model;

/**
 * PHASE 6 ENHANCED: JavaScript Patch Model
 * Represents a JavaScript patch that can be applied to a target PUBG app
 *
 * TODO: PHASE 7 - ENHANCED PATCH MODEL
 * - Add support for target package association
 * - Include JavaScript patch script content
 * - Add patch dependency and compatibility information
 * - Support for patch versioning and update management
 */
public class Patch {

    private String id;
    private String name;
    private String description;
    private String gameVersion;
    private String updateDate;
    private PatchStatus status;

    // TODO: PHASE 7 - Add JavaScript patch specific fields with proper getters/setters
    // These fields will be added in Phase 7:
    // - targetPackage (String): Target PUBG package (com.tencent.ig, etc.)
    // - scriptContent (String): JavaScript patch script
    // - patchType (String): "javascript", "memory", "hook", "hybrid"
    // - dependencies (String[]): Required patch dependencies
    // - minAppVersion (String): Minimum target app version
    // - maxAppVersion (String): Maximum target app version
    
    /**
     * Constructor
     * @param id Patch ID
     * @param name Patch name
     * @param description Patch description
     * @param gameVersion Game version
     * @param updateDate Update date
     * @param status Patch status
     */
    public Patch(String id, String name, String description, String gameVersion, String updateDate, PatchStatus status) {
        this.id = id;
        this.name = name;
        this.description = description;
        this.gameVersion = gameVersion;
        this.updateDate = updateDate;
        this.status = status;
    }
    
    /**
     * Get patch ID
     * @return Patch ID
     */
    public String getId() {
        return id;
    }
    
    /**
     * Set patch ID
     * @param id Patch ID
     */
    public void setId(String id) {
        this.id = id;
    }
    
    /**
     * Get patch name
     * @return Patch name
     */
    public String getName() {
        return name;
    }
    
    /**
     * Set patch name
     * @param name Patch name
     */
    public void setName(String name) {
        this.name = name;
    }
    
    /**
     * Get patch description
     * @return Patch description
     */
    public String getDescription() {
        return description;
    }
    
    /**
     * Set patch description
     * @param description Patch description
     */
    public void setDescription(String description) {
        this.description = description;
    }
    
    /**
     * Get game version
     * @return Game version
     */
    public String getGameVersion() {
        return gameVersion;
    }
    
    /**
     * Set game version
     * @param gameVersion Game version
     */
    public void setGameVersion(String gameVersion) {
        this.gameVersion = gameVersion;
    }
    
    /**
     * Get update date
     * @return Update date
     */
    public String getUpdateDate() {
        return updateDate;
    }
    
    /**
     * Set update date
     * @param updateDate Update date
     */
    public void setUpdateDate(String updateDate) {
        this.updateDate = updateDate;
    }
    
    /**
     * Get patch status
     * @return Patch status
     */
    public PatchStatus getStatus() {
        return status;
    }
    
    /**
     * Set patch status
     * @param status Patch status
     */
    public void setStatus(PatchStatus status) {
        this.status = status;
    }
    
    /**
     * Patch status enum
     */
    public enum PatchStatus {
        UP_TO_DATE,
        UPDATE_AVAILABLE,
        NOT_INSTALLED
    }
}
