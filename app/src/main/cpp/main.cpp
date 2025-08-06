#include <list>
#include <vector>
#include <string.h>
#include <pthread.h>
#include <thread>
#include <cstring>
#include <jni.h>
#include <unistd.h>
#include <fstream>
#include <iostream>
#include <dlfcn.h>
#include <android/log.h>

#include "Data_Folder/imgui/imgui.h"
#include "Data_Folder/imgui/imgui_impl_android.h"
#include "Data_Folder/imgui/imgui_impl_opengl3.h"
#include "Data_Folder/imgui/imgui_internal.h"

#include "ICON/ICON.h"

#include <Data_Folder/Helper/define.h>
#include "Data_Folder/Helper/ImguiPP.h"
#include "Data_Folder/Helper/Menu.h"
#include "Data_Folder/Helper/fake_dlfcn.h"
#include "Data_Folder/Helper/Includes.h"
#include "Data_Folder/Helper/plthook.h"
#include "Data_Folder/Helper/json.hpp"
#include "Data_Folder/Helper/StrEnc.h"
#include "Data_Folder/Helper/Spoof.h"
#include "Data_Folder/Helper/Tools.h"
#include "Data_Folder/Helper/obfuscate.h"
#include "Data_Folder/Helper/Dobby/dobby.h"
#include "Data_Folder/Helper/Items.h"
#include "Data_Folder/Helper/Vector2.hpp"
#include "Data_Folder/Helper/Vector3.hpp"
#include "Data_Folder/Helper/ElfImg.h"
#include "Data_Folder/Helper/Rect.h"
#include "Data_Folder/Helper/Quaternion.hpp"

// Clean toast utility function for debugging (replaces scattered toast implementations)
void ShowToast(JNIEnv *env, jobject context, const char* message) {
    jclass toastClass = env->FindClass("android/widget/Toast");
    if (!toastClass) return;

    jmethodID makeText = env->GetStaticMethodID(toastClass, "makeText",
        "(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;");
    if (!makeText) {
        env->DeleteLocalRef(toastClass);
        return;
    }

    jmethodID show = env->GetMethodID(toastClass, "show", "()V");
    if (!show) {
        env->DeleteLocalRef(toastClass);
        return;
    }

    jstring jMessage = env->NewStringUTF(message);
    jobject toast = env->CallStaticObjectMethod(toastClass, makeText,
        context, jMessage, 0); // 0 = LENGTH_SHORT

    if (toast) {
        env->CallVoidMethod(toast, show);
        env->DeleteLocalRef(toast);
    }

    env->DeleteLocalRef(jMessage);
    env->DeleteLocalRef(toastClass);
}
#include "Data_Folder/Substrate/SubstrateHook.h"
#include "Data_Folder/patch/MemoryPatch.h"
#include "Data_Folder/Includes/Macros.h"
#include "Data_Folder/Helper/UE4Engine.h"
#include "Data_Folder/Helper/AwesomeData.h"
#include "Data_Folder/Helper/Font.h"
#include "Data_Folder/patch/Fontee.h"
#include "Data_Folder/icon/JOIN.h"
#include "Data_File/timer2.h"
#include "Data_File/enc.h"
#include "Data_File/image_base64.h"
#include "nrg_hook/xhook.h"
#include "Data_File/timer.h"
int width = 0;
int height = 0;


static int aimbotspeednrg = 1;
float AimCustomSpeed = 5;
//#include "stb_image_write.h"
bool ggg = false;
bool ggggl = false;
bool ggggl2 = false;
ImFont* Chinese = nullptr;
ImFont* NameFont = nullptr;
extern ImTextureID subtab1IMG;
extern ImTextureID sliderIMG;

int ScreenX;
int ScreenY;
//float px;
//float py;
#include "ICON/Safe.h"
#include "ICON/SHOW.h"

#include "ICON/Bot.h"
ImTextureID addBot;
#include "ICON/Player.h"
ImTextureID addPlayer;

bool LoadTextureFromMemory2(const stbi_uc* data, size_t size, ImTextureID* out_texture, int* out_width, int* out_height)
{
    int image_width, image_height, channels;
    stbi_uc* image_data = stbi_load_from_memory(data, size, &image_width, &image_height, &channels, STBI_rgb_alpha);
    if (image_data == nullptr)
        return false;

    GLuint image_texture;
    glGenTextures(1, &image_texture);
    glBindTexture(GL_TEXTURE_2D, image_texture);

    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);

    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, image_width, image_height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image_data);
    stbi_image_free(image_data);
    *out_texture = (ImTextureID)(intptr_t)image_texture;
    *out_width = image_width;
    *out_height = image_height;
    return true;
}



bool isImageLoaded1 = false;
bool isImageLoaded2 = false;

  void LoadWeaponsphoto2() {
      
        
   if (!ggg) {
LoadTextureFromMemory(subtab1HEX, sizeof(subtab1HEX), &subtab1IMG, &width, &height);
ggg = true;
}
if (!ggggl) {
LoadTextureFromMemory(sliderHEX, sizeof(sliderHEX), &sliderIMG, &width, &height);
ggggl = true;
}


if (!isImageLoaded1) {
LoadTextureFromMemory(BotHEX, sizeof(BotHEX), &addBot, &width, &height);
isImageLoaded1 = true;
}


if (!isImageLoaded2) {
LoadTextureFromMemory(PlayerHEX, sizeof(PlayerHEX), &addPlayer, &width, &height);
isImageLoaded2 = true;
}



  /*
if (!ggggl2) {
LoadTextureFromMemory(uCount, sizeof(uCount), &aCount, &width, &height);
ggggl2 = true;
}
*/
}


#include <syscall.h>
#include "Data_Folder/Includes/Utils.h"
#include "SDK.hpp"
using namespace SDK;

std::string SHOWSKIN = OBFUSCATE("SKIN: ");


static int Tab1 = 0;
  enum Tab1
            {
                Aim1,
                Aim2,
                Aim3
            };


            
            
static int Tab2 = 0;
  enum Tab2
            {
                AimMod1,
                AimMod2
            };
TextureInfo RenderImage[150];
            


 TextureInfo ImAgeHeadFile(const unsigned char *buf, int len)
{
    int w, h, n;
    stbi_uc *data = stbi_png_load_from_memory(buf, len, &w, &h, &n, 0);
    GLuint texture;
    glGenTextures(1, &texture);
    glEnable(GL_TEXTURE_2D);
    glBindTexture(GL_TEXTURE_2D, texture);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
    if (n == 3) {
        glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, w, h, 0, GL_RGB, GL_UNSIGNED_BYTE, data);
    } else {
        glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, w, h, 0, GL_RGBA, GL_UNSIGNED_BYTE, data);
    }
    stbi_image_free(data);
    textureInfo.textureId = (GLuint*) texture;
    textureInfo.w = w;
    textureInfo.h = h;
    return textureInfo;
}

TextureInfo Base64Image[300];
TextureInfo WeaponImage[300];
TextureInfo ImAgeHeadBase64(const std::vector<unsigned char> &imageData)
{
    int w, h, n;
    stbi_uc *data = stbi_png_load_from_memory(imageData.data(), imageData.size(), &w, &h, &n, 0);
    GLuint texture;
    glGenTextures(1, &texture);
    glEnable(GL_TEXTURE_2D);
    glBindTexture(GL_TEXTURE_2D, texture);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
    if (n == 3) {
        glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, w, h, 0, GL_RGB, GL_UNSIGNED_BYTE, data);
    } else {
        glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, w, h, 0, GL_RGBA, GL_UNSIGNED_BYTE, data);
    }
    stbi_image_free(data);
    textureInfo.textureId = (GLuint*) texture;
    textureInfo.w = w;
    textureInfo.h = h;
    return textureInfo;
}
#include <iostream>
#include <vector>
#include <string>
#include <stdexcept>

std::vector<unsigned char> decodeBase64(const std::string &base64String) {
    static const std::string base64Chars =
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "abcdefghijklmnopqrstuvwxyz"
        "0123456789+/";

    std::vector<int> decodingTable(256, -1);
    for (size_t i = 0; i < base64Chars.size(); ++i) {
        decodingTable[base64Chars[i]] = i;
    }

    std::vector<unsigned char> output;
    int val = 0;
    int bits = -8;

    for (const auto &c : base64String) {
        if (decodingTable[c] == -1) continue; // Ignore invalid characters
        val = (val << 6) + decodingTable[c];
        bits += 6;

        if (bits >= 0) {
            output.push_back((val >> bits) & 0xFF);
            bits -= 8;
        }
    }

    return output;
}
float calcTextSize(const char *text, float font_size) {
    ImGuiContext &g = *GImGui;
    
    ImFont *font = g.Font;
    
    ImVec2 text_size;
    if (font_size == 0) {
        text_size = font->CalcTextSizeA(font->FontSize, FLT_MAX, -1.0f, text, NULL, NULL);
    } else {
        text_size = font->CalcTextSizeA(font_size, FLT_MAX, -1.0f, text, NULL, NULL);
    }
    
    text_size.x = IM_FLOOR(text_size.x + 0.99999f);
    
    return text_size.x;
}

GLuint textureIDTEST;
            
            
ImFont* basic = nullptr;

#include <cstring>
#include <string.h>
bool Logo = true;
float accent_color[4] = { 0.300f, 0.220f, 0.750f, 1.000f };
// REMOVED: CURL includes - replaced with KeyAuth API integration via mundo_core
// #include <curl/curl.h>
#include <openssl/rsa.h>
#include <openssl/pem.h>

using json = nlohmann::json;
int gScreenWidth;
int gScreenHeight;
// ======================================================================== //
// REMOVED: CURL includes - using KeyAuth API via mundo_core bridge
// #include <curl/curl.h>
#include <openssl/evp.h>
#include <openssl/pem.h>
#include <openssl/rsa.h>
#include <openssl/err.h>
#include <openssl/md5.h>

//#include <hook/hook.h>

#define targetLibName OBFUSCATE("libanort.so")
bool initImGui = false;
int screenWidth = -1, glWidth, screenHeight = -1, glHeight;
//float density = -1;
json items_data;

//int g_ScreenWidth = 0, g_ScreenHeight = 0, g_Screendensity = 0;
bool g_Initialized = false;
ImGuiWindow* g_window = NULL;
bool bScanPatternCompleted = false;


std::string expiretime = "";
static std::string EXP = "NULL";
static std::string USERKEY = "NULL";
//static std::string user_key = "NULL";


float AimSmooth = 1.0f;
FRotator g_aimRotation;
FVector Tarloc ;
FVector headp ;
FVector myloc ;

timer worldAutoSleep;
//static int ShowSoftKeyboardInput();
//static int PollUnicodeChars();
#include "Data_Folder/Time/Time.h"
std::string GetExpired(ImColor* col);
std::string GetExpired(ImColor *col) {
    time_t now = time(0);
    auto _tm = localtime(&now);
    Time *current = new Time(_tm);
    Time *event = new Time(EXP);
    return current->CountDownTimer(event, col, true, false);
}

std::string exp_time;
std::string g_Token, g_Auth;
bool bValid = false;//false //true
#define SLEEP_TIME 1000LL / 120LL
static char s[64];


//android_app *g_App = 0;
#define PI 3.14159265358979323846f

#define GNames_Offset 0x7e33df4
#define GUObject_Offset 0xe46bde0
#define Process_Event_Offset 0x9ad2fa0 //Main
#define Actors_Offset 0xa0

//GNames_Offset Offset : 0x7e33df4
//GEngine_Offset Offset : 0xe793470 //ULocalPlayer
//GEngine_Offset Offset : 0xe7b89e8 //UEngine
//GUObject_Offset Offset : 0xe46bde0
//GetActorArray_Offset Offset : 0x9f6ac78
//Canvas_Map_Offset Offset : 0xe294260
//Process_Event_Offset Offset : 0x8097970 //Child
//Process_Event_Offset Offset : 0x9ad2fa0 //Main
//GNativeAndroidApp_Offset Offset : 0xe1c3000
//Actors_Offset Offset : 0xa0


static const int FrameWindow = 30;
static float fpsHistory[FrameWindow] = {};
static int frameIndex = 0;
static float g_FPS = 0.0f;

void UpdateFPS() {
    static auto lastFrameTime = std::chrono::steady_clock::now();
    auto currentTime = std::chrono::steady_clock::now();
    std::chrono::duration<float> deltaTime = currentTime - lastFrameTime;
    lastFrameTime = currentTime;

    float dt = deltaTime.count();
    if (dt <= 0.0f) return;

    float currentFPS = 1.0f / dt;
    fpsHistory[frameIndex % FrameWindow] = currentFPS;
    frameIndex++;

    float sum = 0.0f;
    for (int i = 0; i < FrameWindow; ++i)
        sum += fpsHistory[i];

    g_FPS = std::clamp(sum / FrameWindow, 1.0f, 240.0f); // Clamp FPS range
}
/*
void UpdateFPS() {
    auto now = std::chrono::steady_clock::now();
    auto delta = std::chrono::duration_cast<std::chrono::milliseconds>(now - g_LastFrameTime).count();

    if (delta > 0) {
        g_FPS = 1000.0f / static_cast<float>(delta);
        g_FPS = std::clamp(g_FPS, 1.0f, 240.0f);
    }

    g_LastFrameTime = now;
}
*/

uintptr_t UE4, ANORT;
uintptr_t anort;
ASTExtraPlayerCharacter *g_LocalPlayer = 0;
ASTExtraPlayerController *g_LocalController = 0;
FCameraCacheEntry  CameraCache = FCameraCacheEntry();


bool WriteAddr2(void *addr, void *buffer, size_t length) {
    unsigned long page_size = sysconf(_SC_PAGESIZE);
    unsigned long size = page_size * sizeof(uintptr_t);
    return mprotect((void *) ((uintptr_t) addr - ((uintptr_t) addr % page_size) - page_size), (size_t) size, PROT_EXEC | PROT_READ | PROT_WRITE) == 0 && memcpy(addr, buffer, length) != 0;
}
// ======================================================================== //
void WriteDword(uintptr_t addr,int var){
WriteAddr2(reinterpret_cast<void*>(addr),reinterpret_cast<void*>(&var),4);
}
void 写入D类(uintptr_t addr,int var){
WriteAddr2(reinterpret_cast<void*>(addr),reinterpret_cast<void*>(&var),4);
}



void readBuffer(long addr, void *buffer, int size) {
  struct iovec iov_ReadBuffer, iov_ReadOffset;
  iov_ReadBuffer.iov_base = buffer;
  iov_ReadBuffer.iov_len = size;
  iov_ReadOffset.iov_base = (void *)addr;
  iov_ReadOffset.iov_len = size;
  syscall(SYS_process_vm_readv, getpid, &iov_ReadBuffer, 1, &iov_ReadOffset,
          1, 0);
}

int readInt(long address) {
  int value = 0;
  int *p = &value;
  readBuffer(address, p, sizeof(int));
  return value;
}

float readFloat(long address) {
  float value = 0.0;
  float *p = &value;
  readBuffer(address, p, sizeof(float));
  return value;
}

long readValueL(long address) {
  long addr = 0;
  long *p = &addr;
  readBuffer(address, p, sizeof(long));
  return addr & 0xFFFFFFFFFF;
}

long ValueLmultiple(long address, long Offset[], char bytelength[]) {
  for (int i = 0; i < (int)atoi(bytelength); i++) {
    address = readValueL(address) + Offset[i];
  }
  return address;
}
bool FixS[50];

std::map<int, bool> Items;
std::map<int, float *> ItemColors;


static float chestY = 25.0f;
//int Cross = 5;
float AutoAimBotFovSize = 200;


float HpTestSize1 = 1;
float HpTestSize2 = 1;
float HpTestSize3 = 30;

bool BTBUTTON;
static int MotoSkinHackSdk = 0;
static int DaciaSkinHackSdk = 0;
static int BoatSkinHackSdk = 0;
static int MiniBusSkinHackSdk = 0;
static int MiradoSkinHackSdk = 0;
static int FMiradoSkinHackSdk = 0;
static int BuggySkinHackSdk = 0;
static int CoupeRPSkinHackSdk = 0;
static int BigfootSkinHackSdk = 0;
static int UAZSkinHackSdk = 0;

bool Hair;
   int emote1 = 2200101;
      int emote2 = 2200201;
      int emote3 = 2200301;
static int SuitSkinHackHudSdk = 0;
static int m16a4SkinHackHudSdk = 0;
static int m4SkinHackHudSdk = 0;
static int scarSkinHackHudSdk = 0;
static int m762SkinHackHudSdk = 0;
static int akmSkinHackHudSdk = 0;
static int awmSkinHackHudSdk = 0;
static int kerSkinHackHudSdk = 0;
static int m24SkinHackHudSdk = 0;
static int mini14SkinHackHudSdk = 0;
static int sksSkinHackHudSdk = 0;
static int uziSkinHackHudSdk = 0;
static int ump45SkinHackHudSdk = 0;
static int vectorSkinHackHudSdk = 0;
static int thompsonSkinHackHudSdk = 0;
static int augSkinHackHudSdk = 0;
static int grozaSkinHackHudSdk = 0;
static int amrSkinHackHudSdk = 0;
static int dp28SkinHackHudSdk = 0;
static int m249SkinHackHudSdk = 0;
static int helmetSkinHackHudSdk = 0;
static int bagSkinHackHudSdk = 0;
static int panSkinHackHudSdk = 0;
static int SpSuitSkinHackHudSdk = 0;
static int OfSuitSkinHackHudSdk = 0;
static int TdmSuitSkinHackHudSdk = 0;
static int ParacSkinHackHudSdk = 0;
static int mk14SkinHackHudSdk = 0;
static int MG3SkinHackHudSdk = 0;
static int Boxm4SkinHackHudSdk = 0;
static int boxakmSkinHackHudSdk = 0;
static int ace32SkinHackHudSdk = 0;
static int coupeRBSkinHackHudSdk = 0;
static int DACIASSkinHackHudSdk = 0;
static int UAZSSkinHackHudSdk = 0;
static int MartinSkinHackHudSdk = 0;
static int RONYSkinHackHudSdk = 0;
static int MotorSkinHackHudSdk = 0;
static int testnoneedhp = 0;
static int xsuit = 0;
static int skinm4 = 0;
static int skinakm = 0;
static int skinscar = 0;

float TEST_NN;
struct sConfig {
    bool MemoryWideView;
    float MemoryWideViewSize =90;
    bool Handcam;
    int styleESP = 0;
    float radarX = 10;
    float radarY = 10;
    bool RadarMap;
    bool TestJavAcpp;
             bool EspOpen;
             bool EspBone;
             bool EspLine;
             bool EspInfo;
             bool EspResource;
             bool EspLootBox;
             bool EspCar;
             bool Lvmax;
             bool Med;
             bool Energy;
             bool Weapon;
             bool EspMosin;
             bool Distance;
             bool Health;
             bool Name;
             bool TeamId;
             bool Material;
             bool Box;
             bool allBonesVisible;
             ImU32 BoxColor = IM_COL32(255, 255, 255, 255);
             bool Alert;
             bool GrenadeW;
             bool EspHideBot;
             
bool EspM24;
bool EspKar98k;
bool EspMini14;
bool EspWin94;
bool Xs3;
bool Xs4;
bool Xs6;
bool Xs8;
bool RedDot;
bool EspMag;
bool EspSilencer;
bool EspGrenade;
             	int RunFPS = 60;
             bool DP28;
    bool M249;
    bool FAMAS;
    bool G36C;
    bool M762;
    bool QBZ;
    bool AUG;
    bool Groza;
    bool ACE32;
    bool SCARL;
    bool AKM;
    bool M416;
    
    bool UZI;
    bool UMP45;
    bool Vector;
    bool TommyGun;
    bool PP19Bizon; //PP-19 Bizon
    bool P90;
    bool Skorpion;
    
    bool M24;
    bool Kar98K;
    bool AWM;
    bool AMR;
    
    
    bool mm556; //5.56mm
    bool mm762; //7.62mm
    
    bool mm9; // 9mm
    bool ACP45; // .45 ACP
    
    bool Bag;
    bool Armor;
    bool Helmet;
             
             bool AimBot;
             bool AimKnocked;
             bool AntRecoil;
             bool Hidebot;
             bool IgnoreKnocked;
             bool HideFov;
             bool AimEnable;
             bool VisCheck;
             
             int NRGtrigger;
             float AimDistance;
             float AimFov;
             float RecoilSize;
             
             
             bool HelmetlAndBag;
             bool SkinEnable;
             bool CarMod;
             bool BoxEffect;
             bool OutfitEnable;
};

sConfig Config{0};

std::chrono::steady_clock::time_point lastWeaponChangeTimei;
std::chrono::steady_clock::time_point lastWeaponChangeTime;

// ======================================================================== //
#define CREATE_COLOR(r, g, b, a) new float[4] {(float)r, (float)g, (float)b, (float)a};
struct sRegion {
    uintptr_t start, end;
};
std::vector<sRegion> trapRegions;

bool isObjectInvalid(UObject *obj) {
    if (!Tools::IsPtrValid(obj)) {
        return true;
    }

    if (!Tools::IsPtrValid(obj->ClassPrivate)) {
        return true;
    }

    if (obj->InternalIndex <= 0) {
        return true;
    }

    if (obj->NamePrivate.ComparisonIndex <= 0) {
        return true;
    }

    if ((uintptr_t)(obj) % sizeof(uintptr_t) != 0x0 && (uintptr_t)(obj) % sizeof(uintptr_t) != 0x4) {
        return true;
    }

    if (std::any_of(trapRegions.begin(), trapRegions.end(), [obj](sRegion region) { return ((uintptr_t) obj) >= region.start && ((uintptr_t) obj) <= region.end; }) ||
        std::any_of(trapRegions.begin(), trapRegions.end(), [obj](sRegion region) { return ((uintptr_t) obj->ClassPrivate) >= region.start && ((uintptr_t) obj->ClassPrivate) <= region.end; })) {
        return true;
    }

    return false;
}




static UEngine *GEngine = 0;
UWorld *GetWorld() {
    while (!GEngine) {
        GEngine = UObject::FindObject<UEngine>("UAEGameEngine Transient.UAEGameEngine_1"); 
        sleep(1);
    }
    if (GEngine) {
        auto ViewPort = GEngine->GameViewport;

        if (ViewPort) {
            return ViewPort->World;
        }
    }
    return 0;
}


UWorld *GEWorld;
int GWorldNum = 0;
TUObjectArray gobjects;
UWorld *GetFullWorld()
{
 if(GWorldNum == 0) {
  gobjects = UObject::GUObjectArray->ObjObjects;
  for (int i=0; i< gobjects.Num(); i++)
  if (auto obj = gobjects.GetByIndex(i)) {
if(obj->IsA(UEngine::StaticClass())) {
auto GEngine = (UEngine *) obj;
if(GEngine) {
auto ViewPort = GEngine->GameViewport;
if (ViewPort)
{
GEWorld = ViewPort->World;
GWorldNum = i;
return ViewPort->World;
}
}
}
  }
 }else {
  auto GEngine = (UEngine *) (gobjects.GetByIndex(GWorldNum));
  if(GEngine) {
  auto ViewPort = GEngine->GameViewport;
  if(ViewPort) {
GEWorld = ViewPort->World;
return ViewPort->World;
  }
  }
 }
 return 0;
}



TNameEntryArray *GetGNames()
{
	return ((TNameEntryArray * (*)()) (UE4 + GNames_Offset))();
}

std::vector<AActor *> getActors()
{
    auto World = GetWorld();
    if (!World)
        return std::vector<AActor *>();
    auto PersistentLevel = World->PersistentLevel;
    if (!PersistentLevel)
        return std::vector<AActor *>();
    auto Actors = *(TArray<AActor *> *)((uintptr_t)PersistentLevel + Actors_Offset);
    std::vector<AActor *> actors;
    for (int i = 0; i < Actors.Num(); i++)
    {
        auto Actor = Actors[i];
        if (Actor)
        {
            actors.push_back(Actor);
        }
    }
    return actors;
}

template <class T>
void GetAllActors(std::vector<T *> &Actors)
{
	UGameplayStatics *gGameplayStatics = (UGameplayStatics *)gGameplayStatics->StaticClass();
	auto GWorld = GetWorld();
	if (GWorld)
	{
		TArray<AActor *> Actors2;
		gGameplayStatics->GetAllActorsOfClass((UObject *)GWorld, T::StaticClass(), &Actors2);
		for (int i = 0; i < Actors2.Num(); i++)
		{
			Actors.push_back((T *)Actors2[i]);
		}
	}
}

float GetGameFps() {
    auto ScriptHelperClient = (UScriptHelperClient*)UScriptHelperClient::StaticClass();
    if (ScriptHelperClient)
    {
    return ScriptHelperClient->GetFPS();
    }
}


char extra[200];

#include <fstream>
#include <string>

struct MemoryInfo2 {
    long total_memory_kb;
    long free_memory_kb;
    long available_memory_kb;
};

MemoryInfo2 GetMemoryInfo2() {
    MemoryInfo2 mem_info = {0, 0, 0};
    
    std::ifstream mem_file("/proc/meminfo");
    std::string line;

    while (std::getline(mem_file, line)) {
        if (line.find("MemTotal:") == 0) {
            sscanf(line.c_str(), "MemTotal: %ld kB", &mem_info.total_memory_kb);
        } else if (line.find("MemFree:") == 0) {
            sscanf(line.c_str(), "MemFree: %ld kB", &mem_info.free_memory_kb);
        } else if (line.find("MemAvailable:") == 0) {
            sscanf(line.c_str(), "MemAvailable: %ld kB", &mem_info.available_memory_kb);
        }
    }

    return mem_info;
}

#include <fstream>
#include <sstream>
#include <string>
#include <unordered_map>

// Function to parse memory information
std::unordered_map<std::string, long> GetMemoryInfo()
{
    std::unordered_map<std::string, long> memInfo;
    std::ifstream file("/proc/meminfo");

    std::string line;
    while (std::getline(file, line)) {
        std::istringstream ss(line);
        std::string key;
        long value;
        std::string unit;
        ss >> key >> value >> unit;

        if (unit == "kB") {
            memInfo[key.substr(0, key.size() - 1)] = value; // Remove the trailing ':' from the key
        }
    }

    return memInfo;
}
#include <unordered_map>

float GetMemoryUsage()
{
    auto memInfo = GetMemoryInfo();

    if (memInfo.find("MemTotal") != memInfo.end() && memInfo.find("MemAvailable") != memInfo.end()) {
        long totalMem = memInfo["MemTotal"];
        long availableMem = memInfo["MemAvailable"];

        return (1.0f - (float)availableMem / totalMem) * 100.0f; // Memory usage percentage
    }

    return 0.0f; // In case of error or unavailable data
}




float GetMemoryUsagePercentage()
{
    auto memInfo = GetMemoryInfo();

    if (memInfo.find("MemTotal") != memInfo.end() && memInfo.find("MemAvailable") != memInfo.end()) {
        long totalMem = memInfo["MemTotal"];
        long availableMem = memInfo["MemAvailable"];

        return (1.0f - (float)availableMem / totalMem) * 100.0f; // Memory usage percentage
    }

    return 0.0f; // In case of error or unavailable data
}

long GetTotalMemoryKB()
{
    auto memInfo = GetMemoryInfo();

    if (memInfo.find("MemTotal") != memInfo.end()) {
        return memInfo["MemTotal"];
    }

    return 0;
}

long GetAvailableMemoryKB()
{
    auto memInfo = GetMemoryInfo();

    if (memInfo.find("MemAvailable") != memInfo.end()) {
        return memInfo["MemAvailable"];
    }

    return 0;
}

long ConvertKBToMB(long kb)
{
    return kb / 1024;
}


    long totalMemKB = GetTotalMemoryKB();
    long availableMemKB = GetAvailableMemoryKB();

    // Convert to MB
    long totalMemMB = ConvertKBToMB(totalMemKB);
    long availableMemMB = ConvertKBToMB(availableMemKB);


std::string getObjectPath(UObject *Object) {
    std::string s;
    for (auto super = Object->ClassPrivate; super; super = (UClass *) super->SuperStruct) {
        if (!s.empty())
            s += ".";
        s += super->NamePrivate.GetName();
    }
    return s;
}
bool isObjectPlayer(UObject *Object) {
    if (!Tools::IsPtrValid(Object)) {
        return false;
    }
    for (auto super = Object->ClassPrivate; Tools::IsPtrValid(super); super = (UClass *) super->SuperStruct) {
        if (super == ASTExtraPlayerCharacter::StaticClass()) {
            return true;
        }
    }
    return false;
}
bool isObjectLoot(UObject *Object) {
    if (!Tools::IsPtrValid(Object)) {
        return false;
    }
    for (auto super = Object->ClassPrivate; Tools::IsPtrValid(super); super = (UClass *) super->SuperStruct) {
        if (super == APickUpWrapperActor::StaticClass()) {
            return true;
        }
    }
    return false;
}

bool isObjectLootBox(UObject *Object) {
    if (!Tools::IsPtrValid(Object)) {
        return false;
    }
    for (auto super = Object->ClassPrivate; Tools::IsPtrValid(super); super = (UClass *) super->SuperStruct) {
        if (super == APickUpListWrapperActor::StaticClass()) {
            return true;
        }
    }
    return false;
}

bool isObjectGrenade(UObject *Object) {
    if (!Tools::IsPtrValid(Object)) {
        return false;
    }
    for (auto super = Object->ClassPrivate; Tools::IsPtrValid(super); super = (UClass *) super->SuperStruct) {
        if (super == ASTExtraGrenadeBase::StaticClass()) {
            return true;
        }
    }
    return false;
}

bool isObjectVehicle(UObject *Object) {
    if (!Tools::IsPtrValid(Object)) {
        return false;
    }
    for (auto super = Object->ClassPrivate; Tools::IsPtrValid(super); super = (UClass *) super->SuperStruct) {
        if (super == ASTExtraVehicleBase::StaticClass()) {
            return true;
        }
    }
    return false;
}
FVector GetBoneLocation(ASTExtraPlayerCharacter *Actor, const char *BoneName) {
    return Actor->GetBonePos(BoneName, FVector());
}

//#define W2S(w, s) UGameplayStatics::ProjectWorldToScreen(localController, w, true, s)

FVector GetBoneLocationByName3(ASTExtraPlayerCharacter *Actor, const char *BoneName) {
    return Actor->GetBonePos(BoneName, FVector());
}

FMatrix RotatorToMatrix(FRotator rotation) {
    float radPitch = rotation.Pitch * ((float) PI / 180.f);
    float radYaw = rotation.Yaw * ((float) PI / 180.f);
    float radRoll = rotation.Roll * ((float) PI / 180.f);

    float SP = sinf(radPitch);
    float CP = cosf(radPitch);
    float SY = sinf(radYaw);
    float CY = cosf(radYaw);
    float SR = sinf(radRoll);
    float CR = cosf(radRoll);

    FMatrix matrix;

    matrix.M[0][0] = (CP * CY);
    matrix.M[0][1] = (CP * SY);
    matrix.M[0][2] = (SP);
    matrix.M[0][3] = 0;

    matrix.M[1][0] = (SR * SP * CY - CR * SY);
    matrix.M[1][1] = (SR * SP * SY + CR * CY);
    matrix.M[1][2] = (-SR * CP);
    matrix.M[1][3] = 0;

    matrix.M[2][0] = (-(CR * SP * CY + SR * SY));
    matrix.M[2][1] = (CY * SR - CR * SP * SY);
    matrix.M[2][2] = (CR * CP);
    matrix.M[2][3] = 0;

    matrix.M[3][0] = 0;
    matrix.M[3][1] = 0;
    matrix.M[3][2] = 0;
    matrix.M[3][3] = 1;

    return matrix;
}


FVector2D WorldToScreen360(FVector worldLocation, FMinimalViewInfo camViewInfo) {
    FMatrix tempMatrix = RotatorToMatrix(camViewInfo.Rotation);
    
    
FVector vAxisX(tempMatrix.M[0][0], tempMatrix.M[0][1], tempMatrix.M[0][2]);
    FVector vAxisY(tempMatrix.M[1][0], tempMatrix.M[1][1], tempMatrix.M[1][2]);
    FVector vAxisZ(tempMatrix.M[2][0], tempMatrix.M[2][1], tempMatrix.M[2][2]);

    FVector vDelta = worldLocation - camViewInfo.Location;
    
    FVector vTransformed(vDelta.Dot(vAxisY), vDelta.Dot(vAxisZ), vDelta.Dot(vAxisX));

    if (vTransformed.Z < 1.0f) {
        vTransformed.Z = 1.0f;
    }
    
    float fov = camViewInfo.FOV;
    float screenCenterX = glWidth / 2;
    float screenCenterY = glHeight / 2;
    
    return FVector2D(
                     (screenCenterX + vTransformed.X * (screenCenterX / tanf(fov * ((float) M_PI / 360.0f))) / vTransformed.Z),
                     (screenCenterY - vTransformed.Y * (screenCenterX / tanf(fov * ((float) M_PI / 360.0f))) / vTransformed.Z)
                     );
    
    
}


struct Matrix
{
    float m[4][4];
};

Matrix GetMatrix()
{
    static UCanvas* Canvas = nullptr;

    if (Canvas == nullptr)
    {
        Canvas = UObject::FindObject<UCanvas>("Canvas Transient.DebugCanvasObject");
    }

    if (!Canvas)
    {
        return Matrix{};
    }

    uintptr_t lodalele;

#if defined(__LP64__)
    lodalele = 0x270;
#else
    lodalele = 0x200;
#endif

    return *(Matrix*)((uintptr_t)Canvas + lodalele);

}

bool WorldToScreenPlayer(FVector pos, FVector &screen, int *distance)
{
    Matrix ViewMatrix = GetMatrix();

    screen = {};
    *distance = 0;

    float screenW = (ViewMatrix.m[0][3] * pos.X) + (ViewMatrix.m[1][3] * pos.Y) + (ViewMatrix.m[2][3] * pos.Z + ViewMatrix.m[3][3]);
    if (screenW < 0.0001f)
        return false;

    *distance = (screenW / 100);
    float screenY = (ViewMatrix.m[0][1] * pos.X) + (ViewMatrix.m[1][1] * pos.Y) + (ViewMatrix.m[2][1] * (pos.Z + 85) + ViewMatrix.m[3][1]);
    float screenX = (ViewMatrix.m[0][0] * pos.X) + (ViewMatrix.m[1][0] * pos.Y) + (ViewMatrix.m[2][0] * pos.Z + ViewMatrix.m[3][0]);
    screen.Y = (glHeight / 2.f) - (glHeight / 2.f) * screenY / screenW;
    screen.X = (glWidth / 2.f) + (glWidth / 2.f) * screenX / screenW;
    float y1 = (glHeight / 2.f) - (ViewMatrix.m[0][1] * pos.X + ViewMatrix.m[1][1] * pos.Y + ViewMatrix.m[2][1] * (pos.Z - 95) + ViewMatrix.m[3][1]) * (glHeight / 2.f) / screenW;
    screen.Z = y1 - screen.Y;

    return !(screen.X == 0 && screen.Y == 0 && screen.Z == 0);
}

bool WorldToScreenBone(FVector Position, FVector2D *Screen)
{
    Matrix ViewMatrix = GetMatrix();

    float ScreenW = (ViewMatrix.m[0][3] * Position.X) + (ViewMatrix.m[1][3] * Position.Y) + (ViewMatrix.m[2][3] * Position.Z + ViewMatrix.m[3][3]);
    if (ScreenW < 0.0001f)
        return false;

    ScreenW = 1 / ScreenW;
    float SightX = (glWidth / 2);
    float SightY = (glHeight / 2);

    Screen->X = SightX + (ViewMatrix.m[0][0] * Position.X + ViewMatrix.m[1][0] * Position.Y + ViewMatrix.m[2][0] * Position.Z + ViewMatrix.m[3][0]) * ScreenW * SightX;
    Screen->Y = SightY - (ViewMatrix.m[0][1] * Position.X + ViewMatrix.m[1][1] * Position.Y + ViewMatrix.m[2][1] * Position.Z + ViewMatrix.m[3][1]) * ScreenW * SightY;

    return true;
}


#define IM_PI                   3.14159265358979323846f
#define RAD2DEG(x) ((float)(x) * (float)(180.f / IM_PI))
#define DEG2RAD(x) ((float)(x) * (float)(IM_PI / 180.f))
void OffScreen(FVector Obj, float camear, ImColor color, float Radius);
void OffScreen(FVector Obj, float camear, ImColor color, float Radius)
{

  auto angle = atan2(glHeight /2 - Obj.Y, glWidth / 2 - Obj.X);
    //const auto angle_yaw_rad = DEG2RAD(Obj.Y + 180.f);//90
    angle += camear > 0 ?  IM_PI : 0.0f;
    FVector2D arrow_center (
            glWidth / 2 +  (Radius) / 2 * 8 *  cosf(angle),
            glHeight /2 +  (Radius) / 2 * 8 *  sinf(angle)

    );
    std::array<ImVec2, 4>points {
            ImVec2(-22.0f, -8.6f),
            ImVec2(0.0f, 0.0f),
            ImVec2(-22.0f, 8.6f),
            ImVec2(-18.0f, 0.0f)
    };
    
    for (auto & point : points)
    {
        auto x = point.x * 1.155f;
        auto y = point.y * 1.155f;
        point.x = arrow_center.X + x * cosf(angle) - y * sinf(angle);
      point.y = arrow_center.Y + x * sinf(angle) + y * cosf(angle);
    }
    
    float alpha = 1.0f;
    if (camear > 0)
    {
        constexpr float nearThreshold = 200 * 200;
        ImVec2 screen_outer_diff = {
                Obj.X < 0 ? abs(Obj.X) : (Obj.X > glWidth / 2 ? Obj.X - glWidth / 2 : 0.0f),
                Obj.Y < 0 ? abs(Obj.Y) : (Obj.Y > glHeight /2 ? Obj.Y - glHeight /2 : 0.0f),
                

            };
        float distance = static_cast<float>(pow(screen_outer_diff.x, 2) + pow(screen_outer_diff.y, 2));
        alpha = camear < 0 ? 1.0f : (distance / nearThreshold);
    }
    ImColor arrowColor = color;
    arrowColor.Value.w = std::min(alpha, 1.0f);
    ImGui::GetBackgroundDrawList()->AddTriangleFilled(points[0], points[1], points[3], arrowColor);
    ImGui::GetBackgroundDrawList()->AddTriangleFilled(points[2], points[1], points[3], arrowColor);
    ImGui::GetBackgroundDrawList()->AddQuad(points[0], points[1], points[2], points[3], ImColor(0.0f, 0.0f, 0.0f, alpha), 1.335f);
}

FRotator ToRotator(FVector local, FVector target) {
    FVector rotation;
    rotation.X = local.X - target.X;
    rotation.Y = local.Y - target.Y;
    rotation.Z = local.Z - target.Z;
 
    FRotator newViewAngle = {0};
 
    float hyp = sqrt(rotation.X * rotation.X + rotation.Y * rotation.Y);
 
    newViewAngle.Pitch = -atan(rotation.Z / hyp) * (180.f / (float) 3.14159265358979323846);
    newViewAngle.Yaw = atan(rotation.Y / rotation.X) * (180.f / (float) 3.14159265358979323846);
    newViewAngle.Roll = (float) 0.f;
 
    if (rotation.X >= 0.f)
        newViewAngle.Yaw += 180.0f;
 
    return newViewAngle;
}
#define W2S(w, s) UGameplayStatics::ProjectWorldToScreen(g_LocalController, w, true, s)

FVector GetBoneLocationByName(ASTExtraPlayerCharacter *Actor, const char *BoneName) {
    return Actor->GetBonePos(BoneName, FVector());
}

bool isInsideFOV(int x, int y) {
    if (!Config.AimEnable)
        return true;
    int circle_x = glWidth / 2;
    int circle_y = glHeight / 2;
    int rad = Config.AimFov;
    return (x - circle_x) * (x - circle_x) + (y - circle_y) * (y - circle_y) <= rad * rad;
}


auto GetTargetForAimBot() {
    ASTExtraPlayerCharacter *result = 0;
    float max = std::numeric_limits<float>::infinity();

    auto Actors = getActors();

    auto localPlayer = g_LocalPlayer;
    auto localController = g_LocalController;

    if (localPlayer) {
        for (int i = 0; i < Actors.size(); i++) {
            auto Actor = Actors[i];
            if (isObjectInvalid(Actor))
                continue;

            if (Actor->IsA(ASTExtraPlayerCharacter::StaticClass())) {
                auto Player = (ASTExtraPlayerCharacter *) Actor;

                if (Player->PlayerKey == localPlayer->PlayerKey)
                    continue;

                if (Player->TeamID == localPlayer->TeamID)
                    continue;

                if (Player->bDead)
                    continue;
 float Distance = localPlayer->GetDistanceTo(Player) / 100.0f;
                    if (Distance > Config.AimDistance)
                        continue;
                  if (Config.VisCheck) {
                        if(!localController->LineOfSightTo(localController->PlayerCameraManager,Player->GetBonePos("Head", {}), true))//头
                        continue;
                        }
                   if (!Config.IgnoreKnocked) {
                    if (Player->Health == 0.0f)
                        continue;
                }
                
                  if (Config.Hidebot) {
                    if (Player->bEnsure)
                        continue;
				}
                auto Root = Player->GetBonePos("pelvis", {});
                auto Head = Player->GetBonePos("Head", {});

                FVector2D RootSc, HeadSc;
                if (WorldToScreenBone(Root, &RootSc) && WorldToScreenBone(Head, &HeadSc)) {
                    float height = abs(HeadSc.Y - RootSc.Y);
                    float width = height * 0.65f;

                    FVector middlePoint = {HeadSc.X + (width / 2), HeadSc.Y + (height / 2), 0};
                    if ((middlePoint.X >= 0 && middlePoint.X <= glWidth) && (middlePoint.Y >= 0 && middlePoint.Y <= glHeight)) {
                        FVector2D v2Middle = FVector2D((float) (glWidth / 2), (float) (glHeight / 2));
                        FVector2D v2Loc = FVector2D(middlePoint.X, middlePoint.Y);
   if (isInsideFOV((int) middlePoint.X, (int) middlePoint.Y)) {
                        float dist = FVector2D::Distance(v2Middle, v2Loc);

                        if (dist < max) {
                            max = dist;
                            result = Player;
                        }
                    }
                }
            }
        }
    }
}
    return result;
}


void (*orig_shoot_event)(USTExtraShootWeaponComponent *thiz, FVector start, FRotator rot, void *unk1, int unk2) = nullptr;

void shoot_event(USTExtraShootWeaponComponent *thiz, FVector start, FRotator rot, ASTExtraShootWeapon *weapon, int unk1) {
    if (Config.AimEnable && Tab2 == Tab2::AimMod2) {
        ASTExtraPlayerCharacter* Target = GetTargetForAimBot();
        if (Target) {
            bool triggerOk = false;

            switch (Tab1) {
                case Tab1::Aim1: triggerOk = g_LocalPlayer->bIsWeaponFiring; break;
                case Tab1::Aim2: triggerOk = g_LocalPlayer->bIsGunADS; break;
                case Tab1::Aim3: triggerOk = g_LocalPlayer->bIsGunADS || g_LocalPlayer->bIsWeaponFiring; break;
                default: triggerOk = true; break;
            }

            if (triggerOk && thiz && thiz->ShootWeaponEntityComponent) {
                FVector targetAimPos = Target->GetBonePos("Head", {});
                float bulletSpeed = thiz->ShootWeaponEntityComponent->BulletFireSpeed;
                if (bulletSpeed < 1.0f) bulletSpeed = 1.0f;

                float dist = g_LocalPlayer->GetDistanceTo(Target);
                float travelTime = dist / bulletSpeed;

                FVector velocity = Target->CurrentVehicle ?
                    Target->CurrentVehicle->ReplicatedMovement.LinearVelocity :
                    Target->GetVelocity();

                targetAimPos += velocity * travelTime;

                FVector shootFrom = g_LocalPlayer->GetBonePos("Muzzle", {});  // fallback to camera if needed
                FVector direction = targetAimPos - shootFrom;
                rot = UKismetMathLibrary::Conv_VectorToRotator(direction);
            }
        }
    }

    if (orig_shoot_event) {
        return orig_shoot_event(thiz, start, rot, weapon, unk1);
    }
}


const char *GetVehicleName(ASTExtraVehicleBase *Vehicle) {
    switch (Vehicle->VehicleShapeType) {
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Motorbike:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Motorbike_SideCart:
            return "Motorbike";
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Dacia:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_HeavyDacia:
            return "Dacia";
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_MiniBus:
            return "Mini Bus";
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_PickUp:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_PickUp01:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_HeavyPickup:
            return "Pick Up";
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Buggy:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_HeavyBuggy:
            return "Buggy";
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_UAZ:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_UAZ01:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_UAZ02:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_UAZ03:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_HeavyUAZ:
            return "UAZ";
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_PG117:
            return "PG117";
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Aquarail:
            return "Aquarail";
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Mirado:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Mirado01:
            return "Mirado";
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Rony:
            return "Rony";
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Scooter:
            return "Scooter";
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_SnowMobile:
            return "Snow Mobile";
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_TukTukTuk:
            return "Tuk Tuk";
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_SnowBike:
            return "Snow Bike";
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Surfboard:
            return "Surf Board";
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Snowboard:
            return "Snow Board";
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Amphibious:
            return "Amphibious";
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_LadaNiva:
            return "Lada Niva";
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_UAV:
            return "UAV";
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_MegaDrop:
            return "Mega Drop";
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Lamborghini:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Lamborghini01:
            return "Lamborghini";
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_GoldMirado:
            return "Gold Mirado";
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_BigFoot:
            return "Big Foot";
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_UH60:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_HeavyUH60:
            return "UH60";
        default:
            return "Vehicle";
    }
}


class DrawIo{
public:
    inline void 绘制加粗文本(float size, float x, float y, ImColor color, ImColor color1, const char* str)
    {
        ImGui::GetBackgroundDrawList()->AddText(NULL, size, {(float)(x-0.1), (float)(y-0.1)}, color1, str);
        ImGui::GetBackgroundDrawList()->AddText(NULL, size, {(float)(x+0.1), (float)(y+0.1)}, color1, str);
        ImGui::GetBackgroundDrawList()->AddText(NULL, size, {x, y}, color, str);
    }
    
    inline void 绘制字体描边(float size,int x, int y, ImVec4 color, const char* str)
    {
        ImGui::GetBackgroundDrawList()->AddText(NULL, size,ImVec2(x + 1, y), ImGui::ColorConvertFloat4ToU32(ImVec4(0.0f, 0.0f, 0.0f, 1.0f)), str);
        ImGui::GetBackgroundDrawList()->AddText(NULL, size,ImVec2(x - 0.1, y), ImGui::ColorConvertFloat4ToU32(ImVec4(0.0f, 0.0f, 0.0f, 1.0f)), str);
        ImGui::GetBackgroundDrawList()->AddText(NULL, size,ImVec2(x, y + 1), ImGui::ColorConvertFloat4ToU32(ImVec4(0.0f, 0.0f, 0.0f, 1.0f)), str);
        ImGui::GetBackgroundDrawList()->AddText(NULL, size,ImVec2(x, y - 1), ImGui::ColorConvertFloat4ToU32(ImVec4(0.0f, 0.0f, 0.0f, 1.0f)), str);
        ImGui::GetBackgroundDrawList()->AddText(NULL, size,ImVec2(x, y), ImGui::ColorConvertFloat4ToU32(color), str);
    }
    
    inline void CenterText(float X,float Y,const char* content,float fontSize, ImVec4 color){
        auto textSize = ImGui::CalcTextSize(content, 0, fontSize);
        textSize.x *= fontSize / 25.0f;
        textSize.y *= fontSize / 25.0f;        
        ImGui::GetBackgroundDrawList()->AddText(NULL, fontSize,ImVec2(X - textSize.x / 2, Y), ImGui::ColorConvertFloat4ToU32(color), content);              
    }

    inline void DrawCircleFilled(int x, int y, int radius, ImVec4 color, int segments)
    {
        ImGui::GetBackgroundDrawList()->AddCircleFilled(ImVec2(x, y), radius, ImGui::ColorConvertFloat4ToU32(color), segments);
    }
    
    inline void DrawLine(int x1, int y1, int x2, int y2, ImVec4 color, int size)
    {
        ImGui::GetBackgroundDrawList()->AddLine(ImVec2(x1, y1), ImVec2(x2, y2), ImGui::ColorConvertFloat4ToU32(color), size);
    }
    
    inline void DrawRect(int x, int y, int w, int h, ImVec4 color,int size)
    {  //rounding 方框边缘曲率  //rounding_corners_flags 方框边缘弯曲类型  1.ImDrawCornerFlags_All 2.ImDrawCornerFlags_Top 3. ImDrawCornerFlags_Bot 4. ImDrawCornerFlags_Left 5. ImDrawCornerFlags_Right
        ImGui::GetBackgroundDrawList()->AddRect(ImVec2(x, y), ImVec2(x+w, y+h), ImGui::ColorConvertFloat4ToU32(color), 0, 0, size);
    }
    
    inline void DrawRect(float x, float y, float x2, float y2, int color,int size)
    {  //rounding 方框边缘曲率  //rounding_corners_flags 方框边缘弯曲类型  1.ImDrawCornerFlags_All 2.ImDrawCornerFlags_Top 3. ImDrawCornerFlags_Bot 4. ImDrawCornerFlags_Left 5. ImDrawCornerFlags_Right
        ImGui::GetBackgroundDrawList()->AddRect(ImVec2(x, y), ImVec2(x2, y2), color, 0, 0, size);
    }
    
    inline void DrawRectFilled(int x, int y, int w, int h, ImVec4 color)
    {
        ImGui::GetBackgroundDrawList()->AddRectFilled(ImVec2(x, y), ImVec2(x+w, y+h), ImGui::ColorConvertFloat4ToU32(color), 0, 0);
    }
    
    inline void DrawCircle(float X, float Y, float radius, float a, float r, float g, float b, float thickness) {
        ImGui::GetBackgroundDrawList()->AddCircle(ImVec2(X, Y), radius, ImColor(r, g, b, a), 0, thickness);
    }
    
    inline void DrawStrokeText(int x, int y, ImVec4 color, const char* str)
    {
        ImGui::GetBackgroundDrawList()->AddText(NULL, 25, ImVec2(x + 1, y), ImGui::ColorConvertFloat4ToU32(ImVec4(0.0f, 0.0f, 0.0f, 1.0f)), str);
        ImGui::GetBackgroundDrawList()->AddText(NULL, 25, ImVec2(x - 0.1, y), ImGui::ColorConvertFloat4ToU32(ImVec4(0.0f, 0.0f, 0.0f, 1.0f)), str);
        ImGui::GetBackgroundDrawList()->AddText(NULL, 25, ImVec2(x, y + 1), ImGui::ColorConvertFloat4ToU32(ImVec4(0.0f, 0.0f, 0.0f, 1.0f)), str);

ImGui::GetBackgroundDrawList()->AddText(NULL, 25, ImVec2(x, y - 1), ImGui::ColorConvertFloat4ToU32(ImVec4(0.0f, 0.0f, 0.0f, 1.0f)), str);
        ImGui::GetBackgroundDrawList()->AddText(NULL, 25, ImVec2(x, y), ImGui::ColorConvertFloat4ToU32(color), str);
    }
    
    inline void DrawTriangleFilled(int x1, int y1, int x2, int y2, int x3, int y3, ImVec4 Color, int T)
    {
        ImGui::GetBackgroundDrawList()->AddTriangleFilled(ImVec2(x1, y1), ImVec2(x2, y2), ImVec2(x3, y3), ImGui::ColorConvertFloat4ToU32(Color));
    }
    
    inline void DrawTriangle(int x1, int y1, int x2, int y2, int x3, int y3, ImVec4 Color, int T)
    {
        ImGui::GetBackgroundDrawList()->AddTriangleFilled(ImVec2(x1, y1), ImVec2(x2, y2), ImVec2(x3, y3), ImGui::ColorConvertFloat4ToU32(Color));
    }
};


struct Vec3 {
    float x;
    float y;
    float z;
    Vec3() {
        this->x = 0;
        this->y = 0;
        this->z = 0;
    }
    Vec3(float x, float y, float z) {
        this->x = x;
        this->y = y;
        this->z = z;
    }
    Vec3 operator+(float v) const {
        return Vec3(x + v, y + v, z + v);
    }
    Vec3 operator-(float v) const {
        return Vec3(x - v, y - v, z - v);
    }
    Vec3 operator*(float v) const {
        return Vec3(x * v, y * v, z * v);
    }
    Vec3 operator/(float v) const {
        return Vec3(x / v, y / v, z / v);
    }
    Vec3& operator+=(float v) {
        x += v; y += v; z += v; return *this;
    }
    Vec3& operator-=(float v) {
        x -= v; y -= v; z -= v; return *this;
    }
    Vec3& operator*=(float v) {
        x *= v; y *= v; z *= v; return *this;
    }
    Vec3& operator/=(float v) {
        x /= v; y /= v; z /= v; return *this;
    }
    Vec3 operator+(const Vec3& v) const {
        return Vec3(x + v.x, y + v.y, z + v.z);
    }
    Vec3 operator-(const Vec3& v) const {
        return Vec3(x - v.x, y - v.y, z - v.z);
    }
    Vec3 operator*(const Vec3& v) const {
        return Vec3(x * v.x, y * v.y, z * v.z);
    }
    Vec3 operator/(const Vec3& v) const {
        return Vec3(x / v.x, y / v.y, z / v.z);
    }
    Vec3& operator+=(const Vec3& v) {
        x += v.x; y += v.y; z += v.z; return *this;
    }
    Vec3& operator-=(const Vec3& v) {
        x -= v.x; y -= v.y; z -= v.z; return *this;
    }
    Vec3& operator*=(const Vec3& v) {
        x *= v.x; y *= v.y; z *= v.z; return *this;
    }
    Vec3& operator/=(const Vec3& v) {
        x /= v.x; y /= v.y; z /= v.z; return *this;
    }
};


typedef struct Rect78
{
    float x;
    float y;
    float w;
    float h;
};
                       
static struct Color {
    ImVec4 Red = {255 / 255.f, 0 / 255.f, 0 / 255.f, 255 / 255.f};
    ImVec4 Red_ = {255 / 255.f, 0 / 255.f, 0 / 255.f, 50 / 255.f};
    ImVec4 Green = {0 / 255.f, 255 / 255.f, 0 / 255.f, 255 / 255.f};
    ImVec4 Green_ = {0 / 255.f, 255 / 255.f, 0 / 255.f, 50 / 255.f};
    ImVec4 White = {1.0, 1.0, 1.0, 1.0};
    ImVec4 White_ = {255 / 255.f, 255 / 255.f, 255 / 255.f, 180.f / 255.f};
    ImVec4 Black = {0 / 255.f, 0 / 255.f, 0 / 255.f, 255.f / 255.f};
    ImVec4 Yellow = {255 / 255.f, 255 / 255.f, 0, 255 / 255.f,};
} Color;

static float tm = 127 / 255.f;
static ImVec4 arr[] = {{144 / 255.f, 238 / 255.f, 144 / 255.f, tm},
                       {135 / 255.f, 206 / 255.f, 255 / 255.f, tm},
                       {255 / 255.f, 0 / 255.f,   0 / 255.f,   tm},
                       {0 / 255.f,   255 / 255.f, 0 / 255.f,   tm},
                       {0 / 255.f,   255 / 255.f, 127 / 255.f, tm},
                       {255 / 255.f, 182 / 255.f, 193 / 255.f, tm},
                       {218 / 255.f, 112 / 255.f, 214 / 255.f, tm},
                       {248 / 255.f, 248 / 255.f, 255 / 255.f, tm},
                       {0 / 255.f,   255 / 255.f, 255 / 255.f, tm},
                       {255 / 255.f, 165 / 255.f, 0 / 255.f,   tm},
                       {153 / 255.f, 204 / 255.f, 255 / 255.f, tm},
                       {204 / 255.f, 255 / 255.f, 153 / 255.f, tm},
                       {255 / 255.f, 255 / 255.f, 153 / 255.f, tm},
                       {255 / 255.f, 153 / 255.f, 153 / 255.f, tm},
                       {153 / 255.f, 153 / 255.f, 204 / 255.f, tm},
                       {204 / 255.f, 204 / 255.f, 204 / 255.f, tm},
                       {102 / 255.f, 204 / 255.f, 153 / 255.f, tm},
                       {255 / 255.f, 102 / 255.f, 0 / 255.f,   tm},
                       {102 / 255.f, 204 / 255.f, 204 / 255.f, tm},
                       {153 / 255.f, 204 / 255.f, 255 / 255.f, tm}
};


void DrawLine(int x1, int y1, int x2, int y2, ImVec4 color, int size);
void DrawLine(int x1, int y1, int x2, int y2, ImVec4 color, int size) {
    ImGui::GetOverlayDrawList()->AddLine(ImVec2(x1, y1), ImVec2(x2, y2),
                                         ImGui::ColorConvertFloat4ToU32(color), size);
}
static int length = sizeof(arr) / 16;

void DrawRectFilled(int x, int y, int w, int h, ImVec4 color);
void DrawRectFilled(int x, int y, int w, int h, ImVec4 color) {
    ImGui::GetOverlayDrawList()->AddRectFilled(ImVec2(x, y), ImVec2(x + w, y + h),
                                               ImGui::ColorConvertFloat4ToU32(color), 0, 0);
}

void DrawStrokeText(int x, int y, ImVec4 color, const char* str);
void DrawStrokeText(int x, int y, ImVec4 color, const char *str) {           
    ImGui::GetOverlayDrawList()->AddText(ImVec2(x, y), ImGui::ColorConvertFloat4ToU32(color), str);
}

void DrawTriangle(int x1, int y1, int x2, int y2, int x3, int y3, ImVec4 Color, int T);
void DrawTriangle(int x1, int y1, int x2, int y2, int x3, int y3, ImVec4 Color, int T) {
    ImGui::GetOverlayDrawList()->AddTriangleFilled(ImVec2(x1, y1), ImVec2(x2, y2), ImVec2(x3, y3),
                                                   ImGui::ColorConvertFloat4ToU32(Color));
}

void DrawImage(int x, int y, int w, int h, ImTextureID Texture);
void DrawImage(int x, int y, int w, int h, ImTextureID Texture) {
    ImGui::GetOverlayDrawList()->AddImage(Texture, ImVec2(x, y), ImVec2(x + w, y + h));
}

void DrawHealth(Rect78 box, int entityHealth, int MaxHP,int TeamID, const char *namemmm, float d) {
    float x = box.x - (140 - box.w) / 2;
    float y = box.y;
    char dis[50];
    sprintf(dis, "%0.fM", d);
    char TeamText[50];
    sprintf(TeamText, "%d", (int) TeamID);
    int HealthLength = std::min(entityHealth, MaxHP);
    ImVec4 HPColor = entityHealth < 80 ? entityHealth < 60 ? entityHealth < 30 ? ImVec4{0.5f, 0.0f, 0.0f,127 / 255.f}: ImVec4{1, 0, 0, 127 / 255.f}: ImVec4{1, 1, 0, 127 / 255.f} : ImVec4{255 / 255.f, 255 / 255.f, 255 / 255.f, 127 / 255.f};
    tm = 100.f / 255.f;
    DrawRectFilled(x - strlen(namemmm), y - 41, 120 + strlen(namemmm) * 2, 20,arr[TeamID % length]);//玩家名称背景
    tm = 255.f / 255.f;
    DrawRectFilled(x - strlen(namemmm), box.y - 41, 25, 20, arr[TeamID % length]);
    if (strlen(TeamText) < 2) {
        DrawStrokeText(x + 6 - strlen(namemmm), box.y - 42, ImVec4{1.0f, 1.0f, 1.0f, 1.0f},TeamText);//队伍ID
    } else {
        DrawStrokeText(x - strlen(namemmm), box.y - 42, ImVec4{1.0f, 1.0f, 1.0f, 1.0f},TeamText);//队伍ID
    }
    DrawStrokeText(x + 28 - strlen(namemmm), y - 43,ImVec4{255.f / 255.f, 255.f / 255.f, 255.f / 255.f, 255.f / 255.f}, namemmm);//玩家名称
    DrawRectFilled(x - strlen(namemmm), y - 18, HealthLength * (strlen(namemmm) * 2 + 120) / 100, 8,HPColor);//血量线条
    DrawStrokeText(x + 125 + strlen(namemmm), y - 43, ImVec4{1.0f, 1.0f, 1.0f, 1.0f}, dis);//距离显示
   // DrawTriangle(box.x + box.w / 2 - 10, y - 8, box.x + box.w / 2 + 15 - 10, y - 8,box.x + box.w / 2 - 2, y, Color.White_, 1);//第一个左边 第二个右边 第三个底边
}

DrawIo* Fly_Draw = new DrawIo;

   ImVec4 White_={255/255.f,255/255.f,255/255.f,180.f/255.f};
   
   
   
   void DrawHealth2(Rect78 box, int entityHealth, int MaxHP, int TeamID, std::string name)
{
    ImGui::PushFont(Chinese);
    float x = box.x - (140 - box.w) / 2;
    float y = box.y;
    char TeamText[50];
    
    

    sprintf(TeamText,"%d",TeamID);
    
    int HealthLength = std::min(entityHealth, MaxHP);
    ImVec4 HPColor = entityHealth < 80 ? entityHealth < 60 ? entityHealth < 30 ? ImVec4{ 0.5f,0.0f,0.0f,200/255.f } : ImVec4{ 1, 0, 0, 200/255.f } : ImVec4{ 1, 1, 0, 200/255.f } : ImVec4{ 0.0f, 1.0f, 0.0f, 200/255.f };
    /*ImVec4 HPColor = entityHealth < 80 ? entityHealth < 60 ? entityHealth < 30 ? ImVec4{ 0.5f,0.0f,0.0f,127/255.f } : ImVec4{ 1, 0, 0, 127/255.f } : ImVec4{ 1, 1, 0, 127/255.f } : ImVec4{ 255/255.f, 255/255.f, 255/255.f, 127/255.f };*/
 
 if (Config.Name) {
     tm = 100.f/255.f;
  if (name == "  Bot") {
      Fly_Draw->DrawRectFilled(x-name.length(), y - 41, 120 + name.length()*2, 20,ImVec4(1, 1, 1, 100.f/255.f));//玩家名称背景
  } else {
   Fly_Draw->DrawRectFilled(x-name.length(), y - 41, 120 + name.length()*2, 20,arr[TeamID%length]);//玩家名称背景
  }
  
     tm = 255.f/255.f;
  if (name == "  Bot") {
      Fly_Draw->DrawRectFilled(x-name.length(), box.y - 41, 25, 20, ImVec4(1, 1, 1, 255.f/255.f));
  } else {
      Fly_Draw->DrawRectFilled(x-name.length(), box.y - 41, 25, 20, arr[TeamID % length]);
  }
  }
   if (Config.TeamId) {
     if (strlen(TeamText) < 2) {
         Fly_Draw->DrawStrokeText(x+6-name.length(), box.y - 42, ImVec4{ 1.0f,1.0f ,1.0f ,1.0f }, TeamText);//队伍ID
     } else {
         Fly_Draw->DrawStrokeText(x-name.length(), box.y - 42, ImVec4{ 1.0f,1.0f ,1.0f ,1.0f }, TeamText);//队伍ID
     }
     }
   if (Config.Name) {
     Fly_Draw->DrawStrokeText(x + 28-name.length(), y - 43, ImVec4{ 255.f/255.f,255.f/255.f,255.f/255.f,255.f/255.f }, name.c_str());//玩家名称
 }
 
    if (Config.Health) {
        Fly_Draw->DrawRectFilled(x-name.length(), y - 18, HealthLength * (name.length() + 120) / 100, 10, HPColor);//血量线条
 }
 
    Fly_Draw->DrawTriangle(box.x + box.w / 2 - 10,y - 8, box.x + box.w / 2 + 5,y -8,box.x+box.w/2-2,y,White_,1);//第一个左边 第二个右边 第三个底边
    ImGui::PopFont();
}
  
//=======================================================//
//void DrawESP(ImDrawList *draw) {
static bool ShowMainMenu = true;
          bool IsDown()
{
    bool a;
    static ImVec2 suspensinPos;
    static bool isActive;
    if (ImGui::IsItemActive())
    {
        if (!isActive)
        {
            isActive = true;
            suspensinPos = ImGui::GetWindowPos();
            return false;
        }
    } else if (isActive) {
        isActive = false;
        if (suspensinPos.x == ImGui::GetWindowPos().x && ImGui::GetWindowPos().y == suspensinPos.y)
        {
            return true;
        }
    }
    return false;
}
#define IM_PI                   3.14159265358979323846f
#define RAD2DEG(x) ((float)(x) * (float)(180.f / IM_PI))
#define DEG2RAD(x) ((float)(x) * (float)(IM_PI / 180.f))
void VectorAnglesRadar(Vector3 & forward, FVector & angles) {
    if (forward.X == 0.f && forward.Y == 0.f) {
        angles.X = forward.Z > 0.f ? -90.f : 90.f;
        angles.Y = 0.f;
    } else {
        angles.X = RAD2DEG(atan2(-forward.Z, forward.Magnitude(forward)));
        angles.Y = RAD2DEG(atan2(forward.Y, forward.X));
    }
    angles.Z = 0.f;
}

void RotateTriangle(std::array<Vector3, 3> & points, float rotation) {
    const auto points_center = (points.at(0) + points.at(1) +  points.at(2)) / 3;
    for (auto & point : points) {
        point = point - points_center;
        const auto temp_x = point.X;
        const auto temp_y = point.Y;
        const auto theta = DEG2RAD(rotation);
        const auto c = cosf(theta);
        const auto s = sinf(theta);
        point.X = temp_x * c - temp_y * s;
        point.Y = temp_x * s + temp_y * c;
        point = point + points_center;
    }
}


FVector WorldToRadar(float Yaw, FVector Origin, FVector LocalOrigin, float PosX, float PosY, Vector3 Size, bool &outbuff) {
 bool flag = false;
 double num = (double)Yaw;
 double num2 = num * 0.017453292519943295;
 float num3 = (float)std::cos(num2);
 float num4 = (float)std::sin(num2);
 float num5 = Origin.X - LocalOrigin.X;
 float num6 = Origin.Y - LocalOrigin.Y;
 struct FVector Xector;
 Xector.X = (num6 * num3 - num5 * num4) / 150.f;
 Xector.Y = (num5 * num3 + num6 * num4) / 150.f;
 struct FVector Xector2;
 Xector2.X = Xector.X + PosX + Size.X / 2.f;
 Xector2.Y = -Xector.Y + PosY + Size.Y / 2.f;
 bool flag2 = Xector2.X > PosX + Size.X;
 if (flag2) {
  Xector2.X = PosX + Size.X;
 }else{
  bool flag3 = Xector2.X < PosX;
  if (flag3) {
   Xector2.X = PosX;
  }
 }
 bool flag4 = Xector2.Y > PosY + Size.Y;
 if (flag4) {
  Xector2.Y = PosY + Size.Y;
 }else{
  bool flag5 = Xector2.Y < PosY;
  if (flag5){
   Xector2.Y = PosY;
  }
 }
 bool flag6 = Xector2.Y == PosY || Xector2.X == PosX;
 if (flag6){
  flag = true;
 }
 outbuff = flag;
 return Xector2;
}


bool g_Initialized2 = false;


//int screenWidth22 = -1, glWidth22, screenHeight22 = -1, glHeight22;
#define ICON_FA_INFO_CIRCLE "\xef\x81\x9a"	// U+f05a

static UFont *tslFont = 0;

void *LoadFont(void *)
{
    while (!tslFont)
    {
        tslFont = UObject::FindObject<UFont>("Font Roboto.Roboto"); 
        sleep(1);
    }
    return 0;
}


float GGGGGGGG;

#include "ESP.h"



int eglWidth, eglHeight;

#include "SKIN.h"


static bool p_open;

#include "MENU.h"
  
// ======================================================================== //


int pid222 = -1;
int initPid() {
pid222 = getpid();
return pid222;
}
#define BYTE1024 0x00000400
#define BYTE16 0x00000010

long GetModuleBase(const char *moduleName) {
initPid();
char path[BYTE1024], line[BYTE1024];
if (pid222 == -1)
sprintf(path, "/proc/self/maps");
else
sprintf(path, "/proc/%d/maps", pid222);
FILE *file = fopen(path, "r");
long len = 0;
if (file) {
while (fgets(line, sizeof(line), file)) {
if (strstr(line, moduleName) != NULL) {
len = strtoul(line, NULL, BYTE16);
break;
}}}
return len;
}



#define targetLibName OBFUSCATE("libanogs.so")
void *IsAntiCheat(void *) {
do {
sleep(5);
} while (!isLibraryLoaded(targetLibName));
/*
//HOOK_LIB_NO_ORIG("libUE4.so", "0x0", BEAR);
//HOOK_LIB_NO_ORIG("libanogs.so", "0xdfba0", strlen); //strlen
//MemoryPatch::createWithHex("libUE4.so", 0xb55afa0, "C0 03 5F D6").Modify();//testgl
//MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x6CC2448, OBFUSCATE("00 00 80 D2 C0 03 5F D6")).Modify();//testgl

HOOK_LIB("libanogs.so", "0x1672E8", hsub_1672E8, sub_1672E8);
//HOOK_LIB("libanogs.so", "0x1672E8", H_Dice_Memek, O_Dice_Memek);//Case 35 (integrity check)
//HOOK_LIB("libanogs.so", "0x12f0bc", sub_5B8, hook_sub_5B8);

MemoryPatch::createWithHex("libanogs.so", 0x3c2c40, "E0 03 1F 2A E0 03 1F 2A").Modify();
MemoryPatch::createWithHex("libanogs.so", 0x1672e8, "00 00 80 D2 C0 03 5F D6").Modify();//kill
MemoryPatch::createWithHex("libanogs.so", 0x12F0BC, "00 00 80 D2 C0 03 5F D6").Modify();//kill
MemoryPatch::createWithHex("libanogs.so", 0xdf040, "00 00 80 D2 C0 03 5F D6").Modify();//kill
MemoryPatch::createWithHex("libanogs.so", 0xdf6d0, "00 00 80 D2 C0 03 5F D6").Modify();//gettimeofday
MemoryPatch::createWithHex("libanogs.so", 0xdf0a0, "00 00 80 D2 C0 03 5F D6").Modify();//__strncpy_chk
MemoryPatch::createWithHex("libanogs.so", 0xdefa0, "00 00 80 D2 C0 03 5F D6").Modify();//__memmove_chk
MemoryPatch::createWithHex("libanogs.so", 0xdf2d0, "00 00 80 D2 C0 03 5F D6").Modify();//__FD_SET_chk
MemoryPatch::createWithHex("libanogs.so", 0xdf3c0, "00 00 80 D2 C0 03 5F D6").Modify();//__android_log_print
MemoryPatch::createWithHex("libanogs.so", 0xdf570, "00 00 80 D2 C0 03 5F D6").Modify();//__strlen_chk
MemoryPatch::createWithHex("libanogs.so", 0xdfc40, "00 00 80 D2 C0 03 5F D6").Modify();//__memcpy_chk
MemoryPatch::createWithHex("libanogs.so", 0xdefa0, "00 00 80 D2 C0 03 5F D6").Modify();//memmove_chk

MemoryPatch::createWithHex("libanogs.so", 0xdef20, "00 00 80 D2 C0 03 5F D6").Modify();//16 sym.imp.__strchr_chk
MemoryPatch::createWithHex("libanogs.so", 0xdf160, "00 00 80 D2 C0 03 5F D6").Modify();//16 sym.imp.__stack_chk_fail
MemoryPatch::createWithHex("libanogs.so", 0xdf3b0, "00 00 80 D2 C0 03 5F D6").Modify();//16 sym.imp.__memset_chk
MemoryPatch::createWithHex("libanogs.so", 0xdf610, "00 00 80 D2 C0 03 5F D6").Modify();//16 sym.imp.__FD_ISSET_chk
MemoryPatch::createWithHex("libanogs.so", 0xdf9c0, "00 00 80 D2 C0 03 5F D6").Modify();//16 sym.imp.__strncat_chk
MemoryPatch::createWithHex("libanogs.so", 0xdfae0, "00 00 80 D2 C0 03 5F D6").Modify();//16 sym.imp.__fgets_chk
MemoryPatch::createWithHex("libanogs.so", 0xdfa60, "00 00 80 D2 C0 03 5F D6").Modify();//16 sym.imp.__strlcpy_chk
MemoryPatch::createWithHex("libanogs.so", 0xdfb70, "00 00 80 D2 C0 03 5F D6").Modify();//16 sym.imp.__strcat_chk

MemoryPatch::createWithHex("libanogs.so", 0xDEF40, "00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libanogs.so", 0xDEF50, "00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libanogs.so", 0xDF0A0, "00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libanogs.so", 0xDF180, "00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libanogs.so", 0xDF280, "00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libanogs.so", 0xDF2F0, "00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libanogs.so", 0xDF360, "00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libanogs.so", 0xDF3B0, "00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libanogs.so", 0xDF610, "00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libanogs.so", 0xDF7B0, "00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libanogs.so", 0xDF880, "00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libanogs.so", 0xDF8B0, "00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libanogs.so", 0xDF970, "00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libanogs.so", 0xDF9C0, "00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libanogs.so", 0xDFA20, "00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libanogs.so", 0xDFA60, "00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libanogs.so", 0xDFA80, "00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libanogs.so", 0xDFAD0, "00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libanogs.so", 0xDFAE0, "00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libanogs.so", 0xDFB30, "00 00 80 D2 C0 03 5F D6").Modify();

MemoryPatch::createWithHex("libanogs.so", 0xDFB60, "00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libanogs.so", 0xDFB70, "00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libanogs.so", 0xDFBF0, "00 00 80 D2 C0 03 5F D6").Modify();
*/
return 0; 
}
/*
//this thread is fir korean version 

void * Super_thread(void *) {
    do {
        sleep(1);
    } while (!isLibraryLoaded("libanogs.so"));


//HOOK_LIB_NO_ORIG("libanogs.so","0xDFA50",hook_memcpy2);
//MemoryPatch::createWithHex("libUE4.so", 0xb4, "00 40 00 00").Modify();
//MemoryPatch::createWithHex("libUE4.so", 0x5a28598, "1F 20 03 D5").Modify();

return 0;
}


int GetMemoryProtection(void *address) {
    char line[PATH_MAX] = {0};
    char perms[5];
    int bol = 1;
    FILE *fp = fopen("/proc/self/maps", "r");
    if (fp == nullptr)
        return 0;

    while (fgets(line, PATH_MAX, fp) != nullptr) {
        unsigned long start, end;
        int eol = (strchr(line, '\n') != nullptr);
        if (bol){
            if (!eol){
                bol = 0;
            }
        } else {
            if (eol){
                bol = 1;
            }
            continue;
        }
        if (sscanf(line, "%lx-%lx %4s", &start, &end, perms) != 3){
            continue;
        }
        if (start <= (unsigned long) address && (unsigned long) address < end){
            int prot = 0;
            if (perms[0] == 'r'){
                prot |= PROT_READ;
            } else if (perms[0] != '-'){
                goto unknown_perms;
            }
            if (perms[1] == 'w'){
                prot |= PROT_WRITE;
            } else if (perms[1] != '-'){
                goto unknown_perms;
            }
            if (perms[2] == 'x'){
                prot |= PROT_EXEC;
            } else if (perms[2] != '-'){
                goto unknown_perms;
            }
            if (perms[3] != 'p'){
                goto unknown_perms;
            }
            if (perms[4] != '\0'){
                perms[4] = '\0';
                goto unknown_perms;
            }
            fclose(fp);
            return prot;
        }
    }
    unknown_perms:
    fclose(fp);
    return 0;
}

int32_t ChangeMemoryProtection(void *address, int32_t protection) {
    unsigned long page_size = sysconf(_SC_PAGESIZE);
    unsigned long size = page_size * sizeof(uintptr_t);
    return mprotect((void *) ((uintptr_t) address - ((uintptr_t) address % page_size) - page_size), (size_t) size, protection);
}

template <typename T>
    void VTable_Hook(void **vtable, int32_t index, T newFunction, T& oldFunction) {
        if (vtable[index] != newFunction) {
            int oldProtection = GetMemoryProtection(vtable[index]);
            if (oldProtection != 0) {
                if (ChangeMemoryProtection(&vtable[index], PROT_READ | PROT_WRITE) == 0) {
                    oldFunction = reinterpret_cast<T>(vtable[index]);
                    vtable[index] = (void *) newFunction;
                    if (vtable[index] == newFunction) {
                        ChangeMemoryProtection(&vtable[index], oldProtection);
                    }
                }
            }
        }
    }


    void xhook(){
        sleep(3);
        xhook_register(".*\\libUE4.so$", "strlen", (void*)PostRender, 0);
        xhook_refresh(0);
        }
*/

// ======================================================================== //
void *main_thread(void *) {
std::string Touches;
Touches += "adb shell am compat disable BLOCK_UNTRUSTED_TOUCHES ";
Touches += GetPackageName().c_str();
system(Touches.c_str());


running = true;
std::thread(renderLoop).detach();
while (!UE4){
UE4 = GetModuleBase("libUE4.so");
sleep(1);
}
        
        
        
        LOGI("libUE4.so: %p", UE4);
       FName::GNames = GetGNames();
       while (!FName::GNames) {
        FName::GNames = GetGNames();
        sleep(1);
    }
    
    

   // UObject::GUObjectArray = (FUObjectArray *) (UE4 + GUObject_Offset);

UObject::GUObjectArray = (FUObjectArray *) (UE4 + GUObject_Offset);
while (!UObject::GUObjectArray) {
UObject::GUObjectArray = (FUObjectArray *) (UE4 + GUObject_Offset);
sleep(1);
}

    
A64HookFunction((void *) (Tools::GetBaseAddress(OBFUSCATE("libUE4.so")) + Process_Event_Offset), (void *) hkProcessEvent, (void **) &oProcessEvent);

A64HookFunction((void *) (Tools::GetBaseAddress(OBFUSCATE("libUE4.so")) + Process_Event_Offset), (void *) hDeadBox, (void **) &oDeadBox);

//A64HookFunction((void *) (Tools::GetBaseAddress(OBFUSCATE("libUE4.so")) + 0x5C2DB24), (void *) sub_5C2DB24, (void **) &osub_5C2DB24);

    
    
bScanPatternCompleted = true;
pthread_t t;
//pthread_create(&t, 0, IsAntiCheat, 0);
//pthread_create(&t, 0, Super_thread, 0);


       pthread_create(&t, 0, maps_thread, 0);
       items_data = json::parse(JSON_ITEMS);
        return 0;
    }


__attribute__((constructor)) void _init() {
      pthread_t thread;
pthread_create(&thread, 0, main_thread, 0);
}

const char *GetAndroidID(JNIEnv *env, jobject context) {
    jclass contextClass = env->FindClass(/*android/content/Context*/ StrEnc("`L+&0^[S+-:J^$,r9q92(as", "\x01\x22\x4F\x54\x5F\x37\x3F\x7C\x48\x42\x54\x3E\x3B\x4A\x58\x5D\x7A\x1E\x57\x46\x4D\x19\x07", 23).c_str());
    jmethodID getContentResolverMethod = env->GetMethodID(contextClass, /*getContentResolver*/ StrEnc("E8X\\7r7ys_Q%JS+L+~", "\x22\x5D\x2C\x1F\x58\x1C\x43\x1C\x1D\x2B\x03\x40\x39\x3C\x47\x3A\x4E\x0C", 18).c_str(), /*()Landroid/content/ContentResolver;*/ StrEnc("8^QKmj< }5D:9q7f.BXkef]A*GYLNg}B!/L", "\x10\x77\x1D\x2A\x03\x0E\x4E\x4F\x14\x51\x6B\x59\x56\x1F\x43\x03\x40\x36\x77\x28\x0A\x08\x29\x24\x44\x33\x0B\x29\x3D\x08\x11\x34\x44\x5D\x77", 35).c_str());
    jclass settingSecureClass = env->FindClass(/*android/provider/Settings$Secure*/ StrEnc("T1yw^BCF^af&dB_@Raf}\\FS,zT~L(3Z\"", "\x35\x5F\x1D\x05\x31\x2B\x27\x69\x2E\x13\x09\x50\x0D\x26\x3A\x32\x7D\x32\x03\x09\x28\x2F\x3D\x4B\x09\x70\x2D\x29\x4B\x46\x28\x47", 32).c_str());
    jmethodID getStringMethod = env->GetStaticMethodID(settingSecureClass, /*getString*/ StrEnc("e<F*J5c0Y", "\x02\x59\x32\x79\x3E\x47\x0A\x5E\x3E", 9).c_str(), /*(Landroid/content/ContentResolver;Ljava/lang/String;)Ljava/lang/String;*/ StrEnc("$6*%R*!XO\"m18o,0S!*`uI$IW)l_/_knSdlRiO1T`2sH|Ouy__^}%Y)JsQ:-\"(2_^-$i{?H", "\x0C\x7A\x4B\x4B\x36\x58\x4E\x31\x2B\x0D\x0E\x5E\x56\x1B\x49\x5E\x27\x0E\x69\x0F\x1B\x3D\x41\x27\x23\x7B\x09\x2C\x40\x33\x1D\x0B\x21\x5F\x20\x38\x08\x39\x50\x7B\x0C\x53\x1D\x2F\x53\x1C\x01\x0B\x36\x31\x39\x46\x0C\x15\x43\x2B\x05\x30\x15\x41\x43\x46\x55\x70\x0D\x59\x56\x00\x15\x58\x73", 71).c_str());

    auto obj = env->CallObjectMethod(context, getContentResolverMethod);
    auto str = (jstring) env->CallStaticObjectMethod(settingSecureClass, getStringMethod, obj, env->NewStringUTF(/*android_id*/ StrEnc("ujHO)8OfOE", "\x14\x04\x2C\x3D\x46\x51\x2B\x39\x26\x21", 10).c_str()));
    return env->GetStringUTFChars(str, 0);
}

const char *GetDeviceModel(JNIEnv *env) {
    jclass buildClass = env->FindClass(/*android/os/Build*/ StrEnc("m5I{GKGWBP-VOxkA", "\x0C\x5B\x2D\x09\x28\x22\x23\x78\x2D\x23\x02\x14\x3A\x11\x07\x25", 16).c_str());
    jfieldID modelId = env->GetStaticFieldID(buildClass, /*MODEL*/ StrEnc("|}[q:", "\x31\x32\x1F\x34\x76", 5).c_str(), /*Ljava/lang/String;*/ StrEnc(".D:C:ETZ1O-Ib&^h.Y", "\x62\x2E\x5B\x35\x5B\x6A\x38\x3B\x5F\x28\x02\x1A\x16\x54\x37\x06\x49\x62", 18).c_str());

    auto str = (jstring) env->GetStaticObjectField(buildClass, modelId);
    return env->GetStringUTFChars(str, 0);
}

const char *GetDeviceBrand(JNIEnv *env) {
    jclass buildClass = env->FindClass(/*android/os/Build*/ StrEnc("0iW=2^>0zTRB!B90", "\x51\x07\x33\x4F\x5D\x37\x5A\x1F\x15\x27\x7D\x00\x54\x2B\x55\x54", 16).c_str());
    jfieldID modelId = env->GetStaticFieldID(buildClass, /*BRAND*/ StrEnc("@{[FP", "\x02\x29\x1A\x08\x14", 5).c_str(), /*Ljava/lang/String;*/ StrEnc(".D:C:ETZ1O-Ib&^h.Y", "\x62\x2E\x5B\x35\x5B\x6A\x38\x3B\x5F\x28\x02\x1A\x16\x54\x37\x06\x49\x62", 18).c_str());

    auto str = (jstring) env->GetStaticObjectField(buildClass, modelId);
    return env->GetStringUTFChars(str, 0);
}

const char *GetPackageName(JNIEnv *env, jobject context) {
    jclass contextClass = env->FindClass(/*android/content/Context*/ StrEnc("`L+&0^[S+-:J^$,r9q92(as", "\x01\x22\x4F\x54\x5F\x37\x3F\x7C\x48\x42\x54\x3E\x3B\x4A\x58\x5D\x7A\x1E\x57\x46\x4D\x19\x07", 23).c_str());
    jmethodID getPackageNameId = env->GetMethodID(contextClass, /*getPackageName*/ StrEnc("YN4DaP)!{wRGN}", "\x3E\x2B\x40\x14\x00\x33\x42\x40\x1C\x12\x1C\x26\x23\x18", 14).c_str(), /*()Ljava/lang/String;*/ StrEnc("VnpibEspM(b]<s#[9cQD", "\x7E\x47\x3C\x03\x03\x33\x12\x5F\x21\x49\x0C\x3A\x13\x20\x57\x29\x50\x0D\x36\x7F", 20).c_str());

    auto str = (jstring) env->CallObjectMethod(context, getPackageNameId);
    return env->GetStringUTFChars(str, 0);
}

const char *GetDeviceUniqueIdentifier(JNIEnv *env, const char *uuid) {
    jclass uuidClass = env->FindClass(/*java/util/UUID*/ StrEnc("B/TxJ=3BZ_]SFx", "\x28\x4E\x22\x19\x65\x48\x47\x2B\x36\x70\x08\x06\x0F\x3C", 14).c_str());

    auto len = strlen(uuid);

    jbyteArray myJByteArray = env->NewByteArray(len);
    env->SetByteArrayRegion(myJByteArray, 0, len, (jbyte *) uuid);

    jmethodID nameUUIDFromBytesMethod = env->GetStaticMethodID(uuidClass, /*nameUUIDFromBytes*/ StrEnc("P6LV|'0#A+zQmoat,", "\x3E\x57\x21\x33\x29\x72\x79\x67\x07\x59\x15\x3C\x2F\x16\x15\x11\x5F", 17).c_str(), /*([B)Ljava/util/UUID;*/ StrEnc("sW[\"Q[W3,7@H.vT0) xB", "\x5B\x0C\x19\x0B\x1D\x31\x36\x45\x4D\x18\x35\x3C\x47\x1A\x7B\x65\x7C\x69\x3C\x79", 20).c_str());
    jmethodID toStringMethod = env->GetMethodID(uuidClass, /*toString*/ StrEnc("2~5292eW", "\x46\x11\x66\x46\x4B\x5B\x0B\x30", 8).c_str(), /*()Ljava/lang/String;*/ StrEnc("P$BMc' #j?<:myTh_*h0", "\x78\x0D\x0E\x27\x02\x51\x41\x0C\x06\x5E\x52\x5D\x42\x2A\x20\x1A\x36\x44\x0F\x0B", 20).c_str());

    auto obj = env->CallStaticObjectMethod(uuidClass, nameUUIDFromBytesMethod, myJByteArray);
    auto str = (jstring) env->CallObjectMethod(obj, toStringMethod);
    return env->GetStringUTFChars(str, 0);
}

// REMOVED: CURL includes and MemoryStruct - replaced with KeyAuth API integration
// #include <curl/curl.h>
// struct MemoryStruct {
//     char *memory;
//     size_t size;
// };

// REMOVED: WriteMemoryCallback function - no longer needed with KeyAuth API integration
// static size_t WriteMemoryCallback(void *contents, size_t size, size_t nmemb, void *userp) {
//     size_t realsize = size * nmemb;
//     struct MemoryStruct *mem = (struct MemoryStruct *) userp;
//
//     mem->memory = (char *) realloc(mem->memory, mem->size + realsize + 1);
//     if (mem->memory == NULL) {
//         return 0;
//     }
//
//     memcpy(&(mem->memory[mem->size]), contents, realsize);
//     mem->size += realsize;
//     mem->memory[mem->size] = 0;
//
//     return realsize;
// }

//#include "LicenseTools.h"

//void

// TODO Plan-B: REPLACEABLE - Replace with mundo_core initialization
// This method should be replaced with MundoCore bridge initialization
extern "C" JNIEXPORT void JNICALL
Java_com_bearmod_Launcher_Init(JNIEnv *env, jclass clazz, jobject mContext) {
    jclass mundoCoreClass = env->FindClass("com/bearmod/MundoCore");
    if (!mundoCoreClass) {
        __android_log_print(ANDROID_LOG_ERROR, "BearMod", "MundoCore class not found.");
        return;
    }

    // Get singleton instance
    jmethodID getInstance = env->GetStaticMethodID(mundoCoreClass, "getInstance", "(Landroid/content/Context;)Lcom/bearmod/MundoCore;");
    if (!getInstance) {
        __android_log_print(ANDROID_LOG_ERROR, "BearMod", "MundoCore.getInstance method not found.");
        env->DeleteLocalRef(mundoCoreClass);
        return;
    }

    jobject mundoInstance = env->CallStaticObjectMethod(mundoCoreClass, getInstance, mContext);
    if (!mundoInstance) {
        __android_log_print(ANDROID_LOG_ERROR, "BearMod", "Failed to get MundoCore instance.");
        env->DeleteLocalRef(mundoCoreClass);
        return;
    }

    __android_log_print(ANDROID_LOG_INFO, "BearMod", "MundoCore instance obtained successfully.");

    // Cleanup
    env->DeleteLocalRef(mundoInstance);
    env->DeleteLocalRef(mundoCoreClass);


}

// REMOVED: Complex KeyAuth API Integration via JNI Bridge
// The authentication is now handled entirely in Java layer using SimpleLicenseVerifier
// This simplifies the codebase and eliminates JNI authentication complexity

// Simple authentication status check - reads from Java SharedPreferences
extern "C" JNIEXPORT jstring JNICALL
Java_com_bearmod_Launcher_Check(JNIEnv *env, jclass clazz, jobject mContext, jstring mUserKey) {
    // Authentication is now handled entirely in Java layer
    // This method simply checks if authentication was successful in Java

    try {
        // Get SharedPreferences to check authentication status
        jclass contextClass = env->GetObjectClass(mContext);
        jmethodID getSharedPrefsMethod = env->GetMethodID(contextClass, "getSharedPreferences",
            "(Ljava/lang/String;I)Landroid/content/SharedPreferences;");

        jstring prefName = env->NewStringUTF("bearmod_auth");
        jobject sharedPrefs = env->CallObjectMethod(mContext, getSharedPrefsMethod, prefName, 0);

        if (sharedPrefs) {
            jclass prefsClass = env->GetObjectClass(sharedPrefs);
            jmethodID getBooleanMethod = env->GetMethodID(prefsClass, "getBoolean", "(Ljava/lang/String;Z)Z");

            jstring authKey = env->NewStringUTF("is_authenticated");
            jboolean isAuthenticated = env->CallBooleanMethod(sharedPrefs, getBooleanMethod, authKey, JNI_FALSE);

            if (isAuthenticated == JNI_TRUE) {
                // Set authentication variables for ESP compatibility
                g_Token = "AUTHENTICATED";
                g_Auth = "AUTHENTICATED";
                bValid = true;
                EXP = time(0) + 86400; // 24h

                // Cleanup
                env->DeleteLocalRef(authKey);
                env->DeleteLocalRef(prefsClass);
                env->DeleteLocalRef(sharedPrefs);
                env->DeleteLocalRef(prefName);
                env->DeleteLocalRef(contextClass);

                return env->NewStringUTF("OK");
            }

            // Cleanup
            env->DeleteLocalRef(authKey);
            env->DeleteLocalRef(prefsClass);
            env->DeleteLocalRef(sharedPrefs);
        }

        env->DeleteLocalRef(prefName);
        env->DeleteLocalRef(contextClass);

    } catch (...) {
        // Fallback on any exception
    }

    // Authentication failed or not completed in Java layer
    bValid = false;
    g_Token = "";
    g_Auth = "";
    return env->NewStringUTF("Authentication required - please complete login in Java layer");
}


// REMOVED: UI String JNI method implementations - replaced with hardcoded strings in Java
// These 9 C++ implementations were removed as part of Plan-A cleanup:
// Java_com_bearmod_Launcher_LoginNameNrg, Java_com_bearmod_Launcher_Pleaselog,
// Java_com_bearmod_Launcher_KeyAdd, Java_com_bearmod_Launcher_Login,
// Java_com_bearmod_Launcher_Cancel, Java_com_bearmod_Launcher_Link,
// Java_com_bearmod_Launcher_Error, Java_com_bearmod_Launcher_Pleasecheck,
// Java_com_bearmod_Launcher_Ok, Java_com_bearmod_Launcher_Loging
