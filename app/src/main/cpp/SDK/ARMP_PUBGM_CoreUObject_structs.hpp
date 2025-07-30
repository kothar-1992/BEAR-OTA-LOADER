#pragma once

// PUBG MOBILE (3.5.0) 64bit (Telegram : @TEAMNRG1)
namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum CoreUObject.EInterpCurveMode
enum class EInterpCurveMode : uint8_t
{
	CIM_Linear                     = 0,
	CIM_CurveAuto                  = 1,
	CIM_Constant                   = 2,
	CIM_CurveUser                  = 3,
	CIM_CurveBreak                 = 4,
	CIM_CurveAutoClamped           = 5,
	CIM_MAX                        = 6
};


// Enum CoreUObject.ERangeBoundTypes
enum class ERangeBoundTypes : uint8_t
{
	ERangeBoundTypes__Exclusive    = 0,
	ERangeBoundTypes__Inclusive    = 1,
	ERangeBoundTypes__Open         = 2,
	ERangeBoundTypes__ERangeBoundTypes_MAX = 3
};


// Enum CoreUObject.EAutomationEventType
enum class EAutomationEventType : uint8_t
{
	EAutomationEventType__Info     = 0,
	EAutomationEventType__Warning  = 1,
	EAutomationEventType__Error    = 2,
	EAutomationEventType__EAutomationEventType_MAX = 3
};


// Enum CoreUObject.EMouseCursor
enum class EMouseCursor : uint8_t
{
	EMouseCursor__None             = 0,
	EMouseCursor__Default          = 1,
	EMouseCursor__TextEditBeam     = 2,
	EMouseCursor__ResizeLeftRight  = 3,
	EMouseCursor__ResizeUpDown     = 4,
	EMouseCursor__ResizeSouthEast  = 5,
	EMouseCursor__ResizeSouthWest  = 6,
	EMouseCursor__CardinalCross    = 7,
	EMouseCursor__Crosshairs       = 8,
	EMouseCursor__Hand             = 9,
	EMouseCursor__GrabHand         = 10,
	EMouseCursor__GrabHandClosed   = 11,
	EMouseCursor__SlashedCircle    = 12,
	EMouseCursor__EyeDropper       = 13,
	EMouseCursor__EMouseCursor_MAX = 14
};


// Enum CoreUObject.ELifetimeCondition
enum class ELifetimeCondition : uint8_t
{
	COND_None                      = 0,
	COND_InitialOnly               = 1,
	COND_OwnerOnly                 = 2,
	COND_SkipOwner                 = 3,
	COND_SimulatedOnly             = 4,
	COND_AutonomousOnly            = 5,
	COND_SimulatedOrPhysics        = 6,
	COND_InitialOrOwner            = 7,
	COND_Custom                    = 8,
	COND_ReplayOrOwner             = 9,
	COND_ReplayOnly                = 10,
	COND_SimulatedOnlyNoReplay     = 11,
	COND_SimulatedOrPhysicsNoReplay = 12,
	COND_SkipReplay                = 13,
	COND_Max                       = 14
};


// Enum CoreUObject.EUnit
enum class EUnit : uint8_t
{
	EUnit__Micrometers             = 0,
	EUnit__Millimeters             = 1,
	EUnit__Centimeters             = 2,
	EUnit__Meters                  = 3,
	EUnit__Kilometers              = 4,
	EUnit__Inches                  = 5,
	EUnit__Feet                    = 6,
	EUnit__Yards                   = 7,
	EUnit__Miles                   = 8,
	EUnit__Lightyears              = 9,
	EUnit__Degrees                 = 10,
	EUnit__Radians                 = 11,
	EUnit__MetersPerSecond         = 12,
	EUnit__KilometersPerHour       = 13,
	EUnit__MilesPerHour            = 14,
	EUnit__Celsius                 = 15,
	EUnit__Farenheit               = 16,
	EUnit__Kelvin                  = 17,
	EUnit__Micrograms              = 18,
	EUnit__Milligrams              = 19,
	EUnit__Grams                   = 20,
	EUnit__Kilograms               = 21,
	EUnit__MetricTons              = 22,
	EUnit__Ounces                  = 23,
	EUnit__Pounds                  = 24,
	EUnit__Stones                  = 25,
	EUnit__Newtons                 = 26,
	EUnit__PoundsForce             = 27,
	EUnit__KilogramsForce          = 28,
	EUnit__Hertz                   = 29,
	EUnit__Kilohertz               = 30,
	EUnit__Megahertz               = 31,
	EUnit__Gigahertz               = 32,
	EUnit__RevolutionsPerMinute    = 33,
	EUnit__Bytes                   = 34,
	EUnit__Kilobytes               = 35,
	EUnit__Megabytes               = 36,
	EUnit__Gigabytes               = 37,
	EUnit__Terabytes               = 38,
	EUnit__Lumens                  = 39,
	EUnit__Milliseconds            = 40,
	EUnit__Seconds                 = 41,
	EUnit__Minutes                 = 42,
	EUnit__Hours                   = 43,
	EUnit__Days                    = 44,
	EUnit__Months                  = 45,
	EUnit__Years                   = 46,
	EUnit__Multiplier              = 47,
	EUnit__Percentage              = 48,
	EUnit__Unspecified             = 49,
	EUnit__EUnit_MAX               = 50
};


// Enum CoreUObject.EPixelFormat
enum class EPixelFormat : uint8_t
{
	PF_Unknown                     = 0,
	PF_A32B32G32R32F               = 1,
	PF_B8G8R8A8                    = 2,
	PF_G8                          = 3,
	PF_G16                         = 4,
	PF_DXT1                        = 5,
	PF_DXT3                        = 6,
	PF_DXT5                        = 7,
	PF_UYVY                        = 8,
	PF_FloatRGB                    = 9,
	PF_FloatRGBA                   = 10,
	PF_DepthStencil                = 11,
	PF_ShadowDepth                 = 12,
	PF_R32_FLOAT                   = 13,
	PF_G16R16                      = 14,
	PF_G16R16F                     = 15,
	PF_G16R16F_FILTER              = 16,
	PF_G32R32F                     = 17,
	PF_A2B10G10R10                 = 18,
	PF_A16B16G16R16                = 19,
	PF_D24                         = 20,
	PF_R16F                        = 21,
	PF_R16F_FILTER                 = 22,
	PF_BC5                         = 23,
	PF_V8U8                        = 24,
	PF_A1                          = 25,
	PF_FloatR11G11B10              = 26,
	PF_A8                          = 27,
	PF_R32_UINT                    = 28,
	PF_R32_SINT                    = 29,
	PF_PVRTC2                      = 30,
	PF_PVRTC4                      = 31,
	PF_R16_UINT                    = 32,
	PF_R16_SINT                    = 33,
	PF_R16G16B16A16_UINT           = 34,
	PF_R16G16B16A16_SINT           = 35,
	PF_R5G6B5_UNORM                = 36,
	PF_R8G8B8A8                    = 37,
	PF_A8R8G8B8                    = 38,
	PF_BC4                         = 39,
	PF_R8G8                        = 40,
	PF_ATC_RGB                     = 41,
	PF_ATC_RGBA_E                  = 42,
	PF_ATC_RGBA_I                  = 43,
	PF_X24_G8                      = 44,
	PF_ETC1                        = 45,
	PF_ETC2_RGB                    = 46,
	PF_ETC2_RGBA                   = 47,
	PF_R32G32B32A32_UINT           = 48,
	PF_R16G16_UINT                 = 49,
	PF_ASTC_4x4                    = 50,
	PF_ASTC_6x6                    = 51,
	PF_ASTC_8x8                    = 52,
	PF_ASTC_10x10                  = 53,
	PF_ASTC_12x12                  = 54,
	PF_BC6H                        = 55,
	PF_BC7                         = 56,
	PF_R8_UINT                     = 57,
	PF_L8                          = 58,
	PF_XGXR8                       = 59,
	PF_R8G8B8A8_UINT               = 60,
	PF_R8G8B8A8_SNORM              = 61,
	PF_ETC2_R11                    = 62,
	PF_ETC2_SIGNED_R11             = 63,
	PF_ETC2_RG11                   = 64,
	PF_ETC2_SIGNED_RG11            = 65,
	PF_ETC2_RGB_PUNCHTHROUGH_ALPHA1 = 66,
	//PF_MAX                         = 67
};


// Enum CoreUObject.EAxis
enum class EAxis : uint8_t
{
	EAxis__None                    = 0,
	EAxis__X                       = 1,
	EAxis__Y                       = 2,
	EAxis__Z                       = 3,
	EAxis__EAxis_MAX               = 4
};


// Enum CoreUObject.ELogTimes
enum class ELogTimes : uint8_t
{
	ELogTimes__None                = 0,
	ELogTimes__UTC                 = 1,
	ELogTimes__SinceGStartTime     = 2,
	ELogTimes__Local               = 3,
	ELogTimes__ELogTimes_MAX       = 4
};


// Enum CoreUObject.ESearchDir
enum class ESearchDir : uint8_t
{
	ESearchDir__FromStart          = 0,
	ESearchDir__FromEnd            = 1,
	ESearchDir__ESearchDir_MAX     = 2
};


// Enum CoreUObject.ESearchCase
enum class ESearchCase : uint8_t
{
	ESearchCase__CaseSensitive     = 0,
	ESearchCase__IgnoreCase        = 1,
	ESearchCase__ESearchCase_MAX   = 2
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct CoreUObject.JoinabilitySettings
// 0x0018
struct FJoinabilitySettings
{
	struct FName                                       SessionName;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bPublicSearchable;                                        // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bAllowInvites;                                            // 0x0009(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bJoinViaPresence;                                         // 0x000A(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bJoinViaPresenceFriendsOnly;                              // 0x000B(0x0001) (ZeroConstructor, IsPlainOldData)
	int                                                MaxPlayers;                                               // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MaxPartySize;                                             // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct CoreUObject.UniqueNetIdWrapper
// 0x0001
struct FUniqueNetIdWrapper
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct CoreUObject.Guid
// 0x0010
struct FGuid
{
	int                                                A;                                                        // 0x0000(0x0004) (Edit, ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                B;                                                        // 0x0004(0x0004) (Edit, ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                C;                                                        // 0x0008(0x0004) (Edit, ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                D;                                                        // 0x000C(0x0004) (Edit, ZeroConstructor, SaveGame, IsPlainOldData)
};

// ScriptStruct CoreUObject.Vector
// 0x000C
struct FVector
{
	float                                              X;                                                        // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              Y;                                                        // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              Z;                                                        // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)

        inline FVector():X(0), Y(0), Z(0)
        {
        }

        inline FVector(float x, float y, float z):X(x), Y(y), Z(z)
        {
        }

        __forceinline FVector operator-(const FVector & V)
        {
            return FVector(X - V.X, Y - V.Y, Z - V.Z);
        }

        __forceinline FVector operator+(const FVector & V)
        {
            return FVector(X + V.X, Y + V.Y, Z + V.Z);
        }

        __forceinline FVector operator*(float Scale)const
        {
            return FVector(X * Scale, Y * Scale, Z * Scale);
        }

        __forceinline FVector operator/(float Scale)const
        {
            const float RScale = 1.f / Scale;
              return FVector(X * RScale, Y * RScale, Z * RScale);
        }

        __forceinline FVector operator+(float A)const
        {
            return FVector(X + A, Y + A, Z + A);
        }

        __forceinline FVector operator-(float A)const
        {
            return FVector(X - A, Y - A, Z - A);
        }

        __forceinline FVector operator*(const FVector & V)const
        {
            return FVector(X * V.X, Y * V.Y, Z * V.Z);
        }

        __forceinline FVector operator/(const FVector & V)const
        {
            return FVector(X / V.X, Y / V.Y, Z / V.Z);
        }

        __forceinline float operator|(const FVector & V) const
        {
            return X * V.X + Y * V.Y + Z * V.Z;
        }

        __forceinline float operator^(const FVector & V) const
        {
            return X * V.Y - Y * V.X - Z * V.Z;
        }

        __forceinline FVector & operator+=(const FVector & v)
        {
            X += v.X;
            Y += v.Y;
            Z += v.Z;
            return *this;
        }

        __forceinline FVector & operator-=(const FVector & v)
        {
            X -= v.X;
            Y -= v.Y;
            Z -= v.Z;
            return *this;
        }

        __forceinline FVector & operator*=(const FVector & v)
        {
            X *= v.X;
            Y *= v.Y;
            Z *= v.Z;
            return *this;
        }

        __forceinline FVector & operator/=(const FVector & v)
        {
            X /= v.X;
            Y /= v.Y;
            Z /= v.Z;
            return *this;
        }

        __forceinline bool operator==(const FVector & src)const
        {
            return (src.X == X) && (src.Y == Y) && (src.Z == Z);
        }

        __forceinline bool operator!=(const FVector & src)const
        {
            return (src.X != X) || (src.Y != Y) || (src.Z != Z);
        }

        __forceinline float Distance(FVector PE_Result)
        {
            return float (sqrtf(powf(PE_Result.X - X, 2.0) + powf(PE_Result.Y - Y, 2.0) + powf(PE_Result.Z - Z, 2.0)));
        }

        static float Distance(FVector a, FVector PE_Result)
        {
            FVector v = { a.X - PE_Result.X, a.Y - PE_Result.Y, a.Z - PE_Result.Z };
            return sqrt(v.X * v.X + v.Y * v.Y + v.Z * v.Z);
        }

        __forceinline float Size() const
        {
            return sqrt(X * X + Y * Y + Z * Z);
        }

        __forceinline float Size2D() const
        {
            return sqrt(X * X + Y * Y);
        }

        __forceinline float SizeSquared() const
        {
            return X * X + Y * Y + Z * Z;
        }

        __forceinline float SizeSquared2D() const
        {
            return X * X + Y * Y;
        }

        __forceinline float Dot(const FVector & vOther) const
        {
            const FVector & a = *this;
              return (a.X * vOther.X + a.Y * vOther.Y + a.Z * vOther.Z);
        }

        __forceinline FVector Normalize()
        {
            FVector vector;
            float length = this->Size();

            if (length != 0)
            {
                vector.X = X / length;
                vector.Y = Y / length;
                vector.Z = Z / length;
            }
            else
                vector.X = vector.Y = 0.0f;
            vector.Z = 1.0f;

            return vector;
        }

};

// ScriptStruct CoreUObject.Vector4
// 0x0010
struct alignas(16) FVector4
{
	float                                              X;                                                        // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              Y;                                                        // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              Z;                                                        // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              W;                                                        // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
};

// ScriptStruct CoreUObject.Vector2D
// 0x0008
struct FVector2D
{
    union
    {
        struct
        {
            float X;
            float Y;
        };
        float data[2];
    };


    /**
     * Constructors.
     */
    inline FVector2D();
    inline FVector2D(float data[]);
    inline FVector2D(float value);
    inline FVector2D(float x, float y);


    /**
     * Constants for common vectors.
     */
    static inline FVector2D Zero();
    static inline FVector2D One();
    static inline FVector2D Right();
    static inline FVector2D Left();
    static inline FVector2D Up();
    static inline FVector2D Down();


    /**
     * Returns the angle between two vectors in radians.
     * @param a: The first vector.
     * @param b: The second vector.
     * @return: A scalar value.
     */
    static inline float Angle(FVector2D a, FVector2D b);

    /**
     * Returns a vector with its magnitude clamped to maxLength.
     * @param vector: The target vector.
     * @param maxLength: The maximum length of the return vector.
     * @return: A new vector.
     */
    static inline FVector2D ClampMagnitude(FVector2D vector, float maxLength);

    /**
     * Returns the component of a in the direction of b (scalar projection).
     * @param a: The target vector.
     * @param b: The vector being compared against.
     * @return: A scalar value.
     */
    static inline float Component(FVector2D a, FVector2D b);

    /**
     * Returns the distance between a and b.
     * @param a: The first point.
     * @param b: The second point.
     * @return: A scalar value.
     */
    static inline float Distance(FVector2D a, FVector2D b);

    /**
     * Returns the dot product of two vectors.
     * @param lhs: The left side of the multiplication.
     * @param rhs: The right side of the multiplication.
     * @return: A scalar value.
     */
    static inline float Dot(FVector2D lhs, FVector2D rhs);

    /**
     * Converts a polar representation of a vector into cartesian
     * coordinates.
     * @param rad: The magnitude of the vector.
     * @param theta: The angle from the X axis.
     * @return: A new vector.
     */
    static inline FVector2D FromPolar(float rad, float theta);

    /**
     * Returns a vector linearly interpolated between a and b, moving along
     * a straight line. The vector is clamped to never go beyond the end points.
     * @param a: The starting point.
     * @param b: The ending point.
     * @param t: The interpolation value [0-1].
     * @return: A new vector.
     */
    static inline FVector2D Lerp(FVector2D a, FVector2D b, float t);

    /**
     * Returns a vector linearly interpolated between a and b, moving along
     * a straight line.
     * @param a: The starting point.
     * @param b: The ending point.
     * @param t: The interpolation value [0-1] (no actual bounds).
     * @return: A new vector.
     */
    static inline FVector2D LerpUnclamped(FVector2D a, FVector2D b, float t);

    /**
     * Returns the magnitude of a vector.
     * @param v: The vector in question.
     * @return: A scalar value.
     */
    static inline float Magnitude(FVector2D v);

    /**
     * Returns a vector made from the largest components of two other vectors.
     * @param a: The first vector.
     * @param b: The second vector.
     * @return: A new vector.
     */
    static inline FVector2D Max(FVector2D a, FVector2D b);

    /**
     * Returns a vector made from the smallest components of two other vectors.
     * @param a: The first vector.
     * @param b: The second vector.
     * @return: A new vector.
     */
    static inline FVector2D Min(FVector2D a, FVector2D b);

    /**
     * Returns a vector "maxDistanceDelta" units closer to the target. This
     * interpolation is in a straight line, and will not overshoot.
     * @param current: The current position.
     * @param target: The destination position.
     * @param maxDistanceDelta: The maximum distance to move.
     * @return: A new vector.
     */
    static inline FVector2D MoveTowards(FVector2D current, FVector2D target,
                               float maxDistanceDelta);

    /**
     * Returns a new vector with magnitude of one.
     * @param v: The vector in question.
     * @return: A new vector.
     */
    static inline FVector2D Normalized(FVector2D v);

    /**
     * Creates a new coordinate system out of the two vectors.
     * Normalizes "normal" and normalizes "tangent" and makes it orthogonal to
     * "normal"..
     * @param normal: A reference to the first axis vector.
     * @param tangent: A reference to the second axis vector.
     */
    static inline void OrthoNormalize(FVector2D &normal, FVector2D &tangent);

    /**
     * Returns the vector projection of a onto b.
     * @param a: The target vector.
     * @param b: The vector being projected onto.
     * @return: A new vector.
     */
    static inline FVector2D Project(FVector2D a, FVector2D b);

    /**
     * Returns a vector reflected about the provided line.
     * This behaves as if there is a plane with the line as its normal, and the
     * vector comes in and bounces off this plane.
     * @param vector: The vector traveling inward at the imaginary plane.
     * @param line: The line about which to reflect.
     * @return: A new vector pointing outward from the imaginary plane.
     */
    static inline FVector2D Reflect(FVector2D vector, FVector2D line);

    /**
     * Returns the vector rejection of a on b.
     * @param a: The target vector.
     * @param b: The vector being projected onto.
     * @return: A new vector.
     */
    static inline FVector2D Reject(FVector2D a, FVector2D b);

    /**
     * Rotates vector "current" towards vector "target" by "maxRadiansDelta".
     * This treats the vectors as directions and will linearly interpolate
     * between their magnitudes by "maxMagnitudeDelta". This function does not
     * overshoot. If a negative delta is supplied, it will rotate away from
     * "target" until it is pointing the opposite direction, but will not
     * overshoot that either.
     * @param current: The starting direction.
     * @param target: The destination direction.
     * @param maxRadiansDelta: The maximum number of radians to rotate.
     * @param maxMagnitudeDelta: The maximum delta for magnitude interpolation.
     * @return: A new vector.
     */
    static inline FVector2D RotateTowards(FVector2D current, FVector2D target,
                                 float maxRadiansDelta,
                                 float maxMagnitudeDelta);

    /**
     * Multiplies two vectors component-wise.
     * @param a: The lhs of the multiplication.
     * @param b: The rhs of the multiplication.
     * @return: A new vector.
     */
    static inline FVector2D Scale(FVector2D a, FVector2D b);

    /**
     * Returns a vector rotated towards b from a by the percent t.
     * Since interpolation is done spherically, the vector moves at a constant
     * angular velocity. This rotation is clamped to 0 <= t <= 1.
     * @param a: The starting direction.
     * @param b: The ending direction.
     * @param t: The interpolation value [0-1].
     */
    static inline FVector2D Slerp(FVector2D a, FVector2D b, float t);

    /**
     * Returns a vector rotated towards b from a by the percent t.
     * Since interpolation is done spherically, the vector moves at a constant
     * angular velocity. This rotation is unclamped.
     * @param a: The starting direction.
     * @param b: The ending direction.
     * @param t: The interpolation value [0-1].
     */
    static inline FVector2D SlerpUnclamped(FVector2D a, FVector2D b, float t);

    /**
     * Returns the squared magnitude of a vector.
     * This is useful when comparing relative lengths, where the exact length
     * is not important, and much time can be saved by not calculating the
     * square root.
     * @param v: The vector in question.
     * @return: A scalar value.
     */
    static inline float SqrMagnitude(FVector2D v);

    /**
     * Calculates the polar coordinate space representation of a vector.
     * @param vector: The vector to convert.
     * @param rad: The magnitude of the vector.
     * @param theta: The angle from the X axis.
     */
    static inline void ToPolar(FVector2D vector, float &rad, float &theta);


    /**
     * Operator overloading.
     */
    inline struct FVector2D& operator+=(const float rhs);
    inline struct FVector2D& operator-=(const float rhs);
    inline struct FVector2D& operator*=(const float rhs);
    inline struct FVector2D& operator/=(const float rhs);
    inline struct FVector2D& operator+=(const FVector2D rhs);
    inline struct FVector2D& operator-=(const FVector2D rhs);
};

inline FVector2D operator-(FVector2D rhs);
inline FVector2D operator+(FVector2D lhs, const float rhs);
inline FVector2D operator-(FVector2D lhs, const float rhs);
inline FVector2D operator*(FVector2D lhs, const float rhs);
inline FVector2D operator/(FVector2D lhs, const float rhs);
inline FVector2D operator+(const float lhs, FVector2D rhs);
inline FVector2D operator-(const float lhs, FVector2D rhs);
inline FVector2D operator*(const float lhs, FVector2D rhs);
inline FVector2D operator/(const float lhs, FVector2D rhs);
inline FVector2D operator+(FVector2D lhs, const FVector2D rhs);
inline FVector2D operator-(FVector2D lhs, const FVector2D rhs);
inline bool operator==(const FVector2D lhs, const FVector2D rhs);
inline bool operator!=(const FVector2D lhs, const FVector2D rhs);



/*******************************************************************************
 * Implementation
 */

FVector2D::FVector2D() : X(0), Y(0) {}
FVector2D::FVector2D(float data[]) : X(data[0]), Y(data[1]) {}
FVector2D::FVector2D(float value) : X(value), Y(value) {}
FVector2D::FVector2D(float x, float y) : X(x), Y(y) {}


FVector2D FVector2D::Zero() { return FVector2D(0, 0); }
FVector2D FVector2D::One() { return FVector2D(1, 1); }
FVector2D FVector2D::Right() { return FVector2D(1, 0); }
FVector2D FVector2D::Left() { return FVector2D(-1, 0); }
FVector2D FVector2D::Up() { return FVector2D(0, 1); }
FVector2D FVector2D::Down() { return FVector2D(0, -1); }


float FVector2D::Angle(FVector2D a, FVector2D b)
{
    float v = Dot(a, b) / (Magnitude(a) * Magnitude(b));
    v = fmax(v, -1.0);
    v = fmin(v, 1.0);
    return acos(v);
}

FVector2D FVector2D::ClampMagnitude(FVector2D vector, float maxLength)
{
    float length = Magnitude(vector);
    if (length > maxLength)
        vector *= maxLength / length;
    return vector;
}

float FVector2D::Component(FVector2D a, FVector2D b)
{
    return Dot(a, b) / Magnitude(b);
}

float FVector2D::Distance(FVector2D a, FVector2D b)
{
    return FVector2D::Magnitude(a - b);
}

float FVector2D::Dot(FVector2D lhs, FVector2D rhs)
{
    return lhs.X * rhs.X + lhs.Y * rhs.Y;
}

FVector2D FVector2D::FromPolar(float rad, float theta)
{
    FVector2D v = FVector2D();
    v.X = rad * cos(theta);
    v.Y = rad * sin(theta);
    return v;
}

FVector2D FVector2D::Lerp(FVector2D a, FVector2D b, float t)
{
    if (t < 0) return a;
    else if (t > 1) return b;
    return LerpUnclamped(a, b, t);
}

FVector2D FVector2D::LerpUnclamped(FVector2D a, FVector2D b, float t)
{
    return (b - a) * t + a;
}

float FVector2D::Magnitude(FVector2D v)
{
    return sqrt(SqrMagnitude(v));
}

FVector2D FVector2D::Max(FVector2D a, FVector2D b)
{
    float x = a.X > b.X ? a.X : b.X;
    float y = a.Y > b.Y ? a.Y : b.Y;
    return FVector2D(x, y);
}

FVector2D FVector2D::Min(FVector2D a, FVector2D b)
{
    float x = a.X > b.X ? b.X : a.X;
    float y = a.Y > b.Y ? b.Y : a.Y;
    return FVector2D(x, y);
}

FVector2D FVector2D::MoveTowards(FVector2D current, FVector2D target,
                             float maxDistanceDelta)
{
    FVector2D d = target - current;
    float m = Magnitude(d);
    if (m < maxDistanceDelta || m == 0)
        return target;
    return current + (d * maxDistanceDelta / m);
}

FVector2D FVector2D::Normalized(FVector2D v)
{
    float mag = Magnitude(v);
    if (mag == 0)
        return FVector2D::Zero();
    return v / mag;
}

void FVector2D::OrthoNormalize(FVector2D &normal, FVector2D &tangent)
{
    normal = Normalized(normal);
    tangent = Reject(tangent, normal);
    tangent = Normalized(tangent);
}

FVector2D FVector2D::Project(FVector2D a, FVector2D b)
{
    float m = Magnitude(b);
    return Dot(a, b) / (m * m) * b;
}

FVector2D FVector2D::Reflect(FVector2D vector, FVector2D planeNormal)
{
    return vector - 2 * Project(vector, planeNormal);
}

FVector2D FVector2D::Reject(FVector2D a, FVector2D b)
{
    return a - Project(a, b);
}

FVector2D FVector2D::RotateTowards(FVector2D current, FVector2D target,
                               float maxRadiansDelta,
                               float maxMagnitudeDelta)
{
    float magCur = Magnitude(current);
    float magTar = Magnitude(target);
    float newMag = magCur + maxMagnitudeDelta *
        ((magTar > magCur) - (magCur > magTar));
    newMag = fmin(newMag, fmax(magCur, magTar));
    newMag = fmax(newMag, fmin(magCur, magTar));

    float totalAngle = Angle(current, target) - maxRadiansDelta;
    if (totalAngle <= 0)
        return Normalized(target) * newMag;
    else if (totalAngle >= M_PI)
        return Normalized(-target) * newMag;

    float axis = current.X * target.Y - current.Y * target.X;
    axis = axis / fabs(axis);
    if (!(1 - fabs(axis) < 0.00001))
        axis = 1;
    current = Normalized(current);
    FVector2D newVector = current * cos(maxRadiansDelta) +
        FVector2D(-current.Y, current.X) * sin(maxRadiansDelta) * axis;
    return newVector * newMag;
}

FVector2D FVector2D::Scale(FVector2D a, FVector2D b)
{
    return FVector2D(a.X * b.X, a.Y * b.Y);
}

FVector2D FVector2D::Slerp(FVector2D a, FVector2D b, float t)
{
    if (t < 0) return a;
    else if (t > 1) return b;
    return SlerpUnclamped(a, b, t);
}

FVector2D FVector2D::SlerpUnclamped(FVector2D a, FVector2D b, float t)
{
    float magA = Magnitude(a);
    float magB = Magnitude(b);
    a /= magA;
    b /= magB;
    float dot = Dot(a, b);
    dot = fmax(dot, -1.0);
    dot = fmin(dot, 1.0);
    float theta = acos(dot) * t;
    FVector2D relativeVec = Normalized(b - a * dot);
    FVector2D newVec = a * cos(theta) + relativeVec * sin(theta);
    return newVec * (magA + (magB - magA) * t);
}

float FVector2D::SqrMagnitude(FVector2D v)
{
    return v.X * v.X + v.Y * v.Y;
}

void FVector2D::ToPolar(FVector2D vector, float &rad, float &theta)
{
    rad = Magnitude(vector);
    theta = atan2(vector.Y, vector.X);
}


struct FVector2D& FVector2D::operator+=(const float rhs)
{
    X += rhs;
    Y += rhs;
    return *this;
}

struct FVector2D& FVector2D::operator-=(const float rhs)
{
    X -= rhs;
    Y -= rhs;
    return *this;
}

struct FVector2D& FVector2D::operator*=(const float rhs)
{
    X *= rhs;
    Y *= rhs;
    return *this;
}

struct FVector2D& FVector2D::operator/=(const float rhs)
{
    X /= rhs;
    Y /= rhs;
    return *this;
}

struct FVector2D& FVector2D::operator+=(const FVector2D rhs)
{
    X += rhs.X;
    Y += rhs.Y;
    return *this;
}

struct FVector2D& FVector2D::operator-=(const FVector2D rhs)
{
    X -= rhs.X;
    Y -= rhs.Y;
    return *this;
}

FVector2D operator-(FVector2D rhs) { return rhs * -1; }
FVector2D operator+(FVector2D lhs, const float rhs) { return lhs += rhs; }
FVector2D operator-(FVector2D lhs, const float rhs) { return lhs -= rhs; }
FVector2D operator*(FVector2D lhs, const float rhs) { return lhs *= rhs; }
FVector2D operator/(FVector2D lhs, const float rhs) { return lhs /= rhs; }
FVector2D operator+(const float lhs, FVector2D rhs) { return rhs += lhs; }
FVector2D operator-(const float lhs, FVector2D rhs) { return rhs -= lhs; }
FVector2D operator*(const float lhs, FVector2D rhs) { return rhs *= lhs; }
FVector2D operator/(const float lhs, FVector2D rhs) { return rhs /= lhs; }
FVector2D operator+(FVector2D lhs, const FVector2D rhs) { return lhs += rhs; }
FVector2D operator-(FVector2D lhs, const FVector2D rhs) { return lhs -= rhs; }

bool operator==(const FVector2D lhs, const FVector2D rhs)
{
    return lhs.X == rhs.X && lhs.Y == rhs.Y;
}

bool operator!=(const FVector2D lhs, const FVector2D rhs)
{
    return !(lhs == rhs);
}
;

// ScriptStruct CoreUObject.TwoVectors
// 0x0018
struct FTwoVectors
{
	struct FVector                                     v1;                                                       // 0x0000(0x000C) (Edit, BlueprintVisible, SaveGame, IsPlainOldData)
	struct FVector                                     v2;                                                       // 0x000C(0x000C) (Edit, BlueprintVisible, SaveGame, IsPlainOldData)
};

// ScriptStruct CoreUObject.Plane
// 0x0004 (0x0010 - 0x000C)
struct alignas(16) FPlane : public FVector
{
	float                                              W;                                                        // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
};

// ScriptStruct CoreUObject.Rotator
// 0x000C
struct FRotator
{
	float                                              Pitch;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              Yaw;                                                      // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              Roll;                                                     // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
};

// ScriptStruct CoreUObject.Quat
// 0x0010
struct alignas(16) FQuat
{
	float                                              X;                                                        // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              Y;                                                        // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              Z;                                                        // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              W;                                                        // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
};

// ScriptStruct CoreUObject.PackedNormal
// 0x0004
struct FPackedNormal
{
	unsigned char                                      X;                                                        // 0x0000(0x0001) (Edit, ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      Y;                                                        // 0x0001(0x0001) (Edit, ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      Z;                                                        // 0x0002(0x0001) (Edit, ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      W;                                                        // 0x0003(0x0001) (Edit, ZeroConstructor, SaveGame, IsPlainOldData)
};

// ScriptStruct CoreUObject.PackedRGB10A2N
// 0x0004
struct FPackedRGB10A2N
{
	int                                                Packed;                                                   // 0x0000(0x0004) (Edit, ZeroConstructor, SaveGame, IsPlainOldData)
};

// ScriptStruct CoreUObject.PackedRGBA16N
// 0x0008
struct FPackedRGBA16N
{
	int                                                XY;                                                       // 0x0000(0x0004) (Edit, ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                ZW;                                                       // 0x0004(0x0004) (Edit, ZeroConstructor, SaveGame, IsPlainOldData)
};

// ScriptStruct CoreUObject.IntPoint
// 0x0008
struct FIntPoint
{
	int                                                X;                                                        // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                Y;                                                        // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
};

// ScriptStruct CoreUObject.IntVector
// 0x000C
struct FIntVector
{
	int                                                X;                                                        // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                Y;                                                        // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                Z;                                                        // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
};

// ScriptStruct CoreUObject.Color
// 0x0004
struct FColor
{
	unsigned char                                      B;                                                        // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      G;                                                        // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      R;                                                        // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      A;                                                        // 0x0003(0x0001) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
};

// ScriptStruct CoreUObject.LinearColor
// 0x0010
struct FLinearColor
{
	float                                              R;                                                        // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              G;                                                        // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              B;                                                        // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              A;                                                        // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)

	inline FLinearColor()
		: R(0), G(0), B(0), A(0)
	{ }

	inline FLinearColor(float r, float g, float b, float a)
		: R(r),
		  G(g),
		  B(b),
		  A(a)
	{ }

};

// ScriptStruct CoreUObject.Box
// 0x001C
struct FBox
{
	struct FVector                                     Min;                                                      // 0x0000(0x000C) (Edit, BlueprintVisible, SaveGame, IsPlainOldData)
	struct FVector                                     Max;                                                      // 0x000C(0x000C) (Edit, BlueprintVisible, SaveGame, IsPlainOldData)
	unsigned char                                      IsValid;                                                  // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
};

// ScriptStruct CoreUObject.Box2D
// 0x0014
struct FBox2D
{
	struct FVector2D                                   Min;                                                      // 0x0000(0x0008) (Edit, BlueprintVisible, SaveGame, IsPlainOldData)
	struct FVector2D                                   Max;                                                      // 0x0008(0x0008) (Edit, BlueprintVisible, SaveGame, IsPlainOldData)
	unsigned char                                      bIsValid;                                                 // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
};

// ScriptStruct CoreUObject.BoxSphereBounds
// 0x001C
struct FBoxSphereBounds
{
	struct FVector                                     Origin;                                                   // 0x0000(0x000C) (Edit, BlueprintVisible, SaveGame, IsPlainOldData)
	struct FVector                                     BoxExtent;                                                // 0x000C(0x000C) (Edit, BlueprintVisible, SaveGame, IsPlainOldData)
	float                                              SphereRadius;                                             // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
};

// ScriptStruct CoreUObject.OrientedBox
// 0x003C
struct FOrientedBox
{
	struct FVector                                     Center;                                                   // 0x0000(0x000C) (Edit, SaveGame, IsPlainOldData)
	struct FVector                                     AxisX;                                                    // 0x000C(0x000C) (Edit, SaveGame, IsPlainOldData)
	struct FVector                                     AxisY;                                                    // 0x0018(0x000C) (Edit, SaveGame, IsPlainOldData)
	struct FVector                                     AxisZ;                                                    // 0x0024(0x000C) (Edit, SaveGame, IsPlainOldData)
	float                                              ExtentX;                                                  // 0x0030(0x0004) (Edit, ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              ExtentY;                                                  // 0x0034(0x0004) (Edit, ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              ExtentZ;                                                  // 0x0038(0x0004) (Edit, ZeroConstructor, SaveGame, IsPlainOldData)
};

// ScriptStruct CoreUObject.Matrix
// 0x0040
struct FMatrix
{
	struct FPlane                                      XPlane;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, SaveGame, IsPlainOldData)
	struct FPlane                                      YPlane;                                                   // 0x0010(0x0010) (Edit, BlueprintVisible, SaveGame, IsPlainOldData)
	struct FPlane                                      ZPlane;                                                   // 0x0020(0x0010) (Edit, BlueprintVisible, SaveGame, IsPlainOldData)
	struct FPlane                                      WPlane;                                                   // 0x0030(0x0010) (Edit, BlueprintVisible, SaveGame, IsPlainOldData)

        float M[4][4];
        float _11, _12, _13, _14;
        float _21, _22, _23, _24;
        float _31, _32, _33, _34;
        float _41, _42, _43, _44;

};

// ScriptStruct CoreUObject.InterpCurvePointFloat
// 0x0014
struct FInterpCurvePointFloat
{
	float                                              InVal;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OutVal;                                                   // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ArriveTangent;                                            // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LeaveTangent;                                             // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInterpCurveMode>                      InterpMode;                                               // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
};

// ScriptStruct CoreUObject.InterpCurveFloat
// 0x0018
struct FInterpCurveFloat
{
	TArray<struct FInterpCurvePointFloat>              Points;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bIsLooped;                                                // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              LoopKeyOffset;                                            // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct CoreUObject.InterpCurvePointVector2D
// 0x0020
struct FInterpCurvePointVector2D
{
	float                                              InVal;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   OutVal;                                                   // 0x0004(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   ArriveTangent;                                            // 0x000C(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   LeaveTangent;                                             // 0x0014(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	TEnumAsByte<EInterpCurveMode>                      InterpMode;                                               // 0x001C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
};

// ScriptStruct CoreUObject.InterpCurveVector2D
// 0x0018
struct FInterpCurveVector2D
{
	TArray<struct FInterpCurvePointVector2D>           Points;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bIsLooped;                                                // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              LoopKeyOffset;                                            // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct CoreUObject.InterpCurvePointVector
// 0x002C
struct FInterpCurvePointVector
{
	float                                              InVal;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OutVal;                                                   // 0x0004(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     ArriveTangent;                                            // 0x0010(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     LeaveTangent;                                             // 0x001C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	TEnumAsByte<EInterpCurveMode>                      InterpMode;                                               // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
};

// ScriptStruct CoreUObject.InterpCurveVector
// 0x0018
struct FInterpCurveVector
{
	TArray<struct FInterpCurvePointVector>             Points;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bIsLooped;                                                // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              LoopKeyOffset;                                            // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct CoreUObject.InterpCurvePointQuat
// 0x0050
struct FInterpCurvePointQuat
{
	float                                              InVal;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0004(0x000C) MISSED OFFSET
	struct FQuat                                       OutVal;                                                   // 0x0010(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FQuat                                       ArriveTangent;                                            // 0x0020(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FQuat                                       LeaveTangent;                                             // 0x0030(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	TEnumAsByte<EInterpCurveMode>                      InterpMode;                                               // 0x0040(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xF];                                       // 0x0041(0x000F) MISSED OFFSET
};

// ScriptStruct CoreUObject.InterpCurveQuat
// 0x0018
struct FInterpCurveQuat
{
	TArray<struct FInterpCurvePointQuat>               Points;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bIsLooped;                                                // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              LoopKeyOffset;                                            // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct CoreUObject.InterpCurvePointTwoVectors
// 0x0050
struct FInterpCurvePointTwoVectors
{
	float                                              InVal;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FTwoVectors                                 OutVal;                                                   // 0x0004(0x0018) (Edit, BlueprintVisible, IsPlainOldData)
	struct FTwoVectors                                 ArriveTangent;                                            // 0x001C(0x0018) (Edit, BlueprintVisible, IsPlainOldData)
	struct FTwoVectors                                 LeaveTangent;                                             // 0x0034(0x0018) (Edit, BlueprintVisible, IsPlainOldData)
	TEnumAsByte<EInterpCurveMode>                      InterpMode;                                               // 0x004C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x004D(0x0003) MISSED OFFSET
};

// ScriptStruct CoreUObject.InterpCurveTwoVectors
// 0x0018
struct FInterpCurveTwoVectors
{
	TArray<struct FInterpCurvePointTwoVectors>         Points;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bIsLooped;                                                // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              LoopKeyOffset;                                            // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct CoreUObject.InterpCurvePointLinearColor
// 0x0038
struct FInterpCurvePointLinearColor
{
	float                                              InVal;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                OutVal;                                                   // 0x0004(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                ArriveTangent;                                            // 0x0014(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                LeaveTangent;                                             // 0x0024(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	TEnumAsByte<EInterpCurveMode>                      InterpMode;                                               // 0x0034(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
};

// ScriptStruct CoreUObject.InterpCurveLinearColor
// 0x0018
struct FInterpCurveLinearColor
{
	TArray<struct FInterpCurvePointLinearColor>        Points;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bIsLooped;                                                // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              LoopKeyOffset;                                            // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct CoreUObject.Transform
// 0x0030
struct alignas(16) FTransform
{
	struct FQuat                                       Rotation;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, SaveGame, IsPlainOldData)
	struct FVector                                     Translation;                                              // 0x0010(0x000C) (Edit, BlueprintVisible, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FVector                                     Scale3D;                                                  // 0x0020(0x000C) (Edit, BlueprintVisible, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct CoreUObject.RandomStream
// 0x0008
struct FRandomStream
{
	int                                                InitialSeed;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                Seed;                                                     // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct CoreUObject.DateTime
// 0x0008
struct FDateTime
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct CoreUObject.Timespan
// 0x0008
struct FTimespan
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct CoreUObject.SoftObjectPath
// 0x0018
struct FSoftObjectPath
{
	struct FName                                       AssetPathName;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     SubPathString;                                            // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct CoreUObject.SoftClassPath
// 0x0000 (0x0018 - 0x0018)
struct FSoftClassPath : public FSoftObjectPath
{

};

// ScriptStruct CoreUObject.PrimaryAssetType
// 0x0008
struct FPrimaryAssetType
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct CoreUObject.PrimaryAssetId
// 0x0010
struct FPrimaryAssetId
{
	struct FPrimaryAssetType                           PrimaryAssetType;                                         // 0x0000(0x0008) (Edit, BlueprintVisible)
	struct FName                                       PrimaryAssetName;                                         // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct CoreUObject.FallbackStruct
// 0x0001
struct FFallbackStruct
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct CoreUObject.FloatRangeBound
// 0x0008
struct FFloatRangeBound
{
	TEnumAsByte<ERangeBoundTypes>                      Type;                                                     // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              Value;                                                    // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct CoreUObject.FloatRange
// 0x0010
struct FFloatRange
{
	struct FFloatRangeBound                            LowerBound;                                               // 0x0000(0x0008) (Edit, BlueprintVisible)
	struct FFloatRangeBound                            UpperBound;                                               // 0x0008(0x0008) (Edit, BlueprintVisible)
};

// ScriptStruct CoreUObject.Int32RangeBound
// 0x0008
struct FInt32RangeBound
{
	TEnumAsByte<ERangeBoundTypes>                      Type;                                                     // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                Value;                                                    // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct CoreUObject.Int32Range
// 0x0010
struct FInt32Range
{
	struct FInt32RangeBound                            LowerBound;                                               // 0x0000(0x0008) (Edit, BlueprintVisible)
	struct FInt32RangeBound                            UpperBound;                                               // 0x0008(0x0008) (Edit, BlueprintVisible)
};

// ScriptStruct CoreUObject.FloatInterval
// 0x0008
struct FFloatInterval
{
	float                                              Min;                                                      // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Max;                                                      // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct CoreUObject.Int32Interval
// 0x0008
struct FInt32Interval
{
	int                                                Min;                                                      // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Max;                                                      // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct CoreUObject.AutomationEvent
// 0x0048
struct FAutomationEvent
{
	EAutomationEventType                               Type;                                                     // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     Message;                                                  // 0x0008(0x0010) (ZeroConstructor)
	struct FString                                     Context;                                                  // 0x0018(0x0010) (ZeroConstructor)
	struct FString                                     Filename;                                                 // 0x0028(0x0010) (ZeroConstructor)
	int                                                LineNumber;                                               // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	struct FDateTime                                   TimeStamp;                                                // 0x0040(0x0008)
};

}

