#include <list>
#include <string.h>
#include <pthread.h>
#include <thread>
#include <cstring>
#include <jni.h>
#include <dlfcn.h>
#include <unordered_map>
#include "patch/MemoryPatch.h"
#include "obfuscate.h"
#include <syscall.h>
#include "Includes/Utils.h"
#include "Includes/Macros.h"

// Forward declaration for BearMod JNI initialization
extern bool initializeBearModJNI(JavaVM* vm, JNIEnv* env);
#include <fstream>
#include <fcntl.h>


uintptr_t GetLibraryBaseAddress(const std::string& lib_name) {
std::ifstream maps_file("/proc/self/maps");
std::string line;
uintptr_t base_address = 0;
while (std::getline(maps_file, line)) {
if (line.find(lib_name) != std::string::npos) {
std::istringstream iss(line);
std::string address_range;
if (iss >> address_range) {
std::string base_str = address_range.substr(0, address_range.find('-'));
std::stringstream ss;
ss << std::hex << base_str;
ss >> base_address;
if (ss.fail()) return 0;
break;
}
}
}
return base_address;
}
uintptr_t xelahot_pointer(const std::vector<std::string>& lib_info, const std::vector<uintptr_t>& offsets, bool some_flag) {
std::string lib_name = lib_info[0];
uintptr_t base_address = GetLibraryBaseAddress(lib_name);
if (base_address == 0) return 0;
for (const auto& offset : offsets) {
base_address += offset;
}
return base_address;
}
void setMemoryValue(uintptr_t address, int value) {
int mem_fd = open("/proc/self/mem", O_RDWR);
if (mem_fd == -1) return;
pwrite(mem_fd, &value, sizeof(value), address);
close(mem_fd);
}
void setValues(uintptr_t address, int flags, int value, bool freeze) {
setMemoryValue(address, value);
}

size_t BEAR(const char *s) {
    static const std::unordered_map<std::string, std::string> rep_Yummy = {
        {"mrpcs_abort.dat", "0000"}, 
        {"OJWV_GN]J", "0000"}
    };
    auto Yummy_Hex = rep_Yummy.find(s);
    if (Yummy_Hex != rep_Yummy.end()) {
        strcpy((char *)s, Yummy_Hex->second.c_str());
        return strlen(s);
    }
    return strlen(s); // fallback or original logic
}



#define targetLibName OBFUSCATE("libanogs.so")
void *IsAntiCheat2(void *) {
do {
sleep(1);
} while (!isLibraryLoaded(targetLibName));

//HOOK_LIB_NO_ORIG("libUE4.so", "0x0", BEAR);
//HOOK_LIB_NO_ORIG("libanogs.so", "0xdfba0", strlen); //strlen

/*
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

MemoryPatch::createWithHex("libanogs.so", 0xDFB60, "00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libanogs.so", 0xDFB70, "00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libanogs.so", 0xDFBF0, "00 00 80 D2 C0 03 5F D6").Modify();
*/

return 0; 
}


__attribute((constructor)) void _bypass() {
pthread_t t;
pthread_create(&t, 0, IsAntiCheat2, 0); //safe
}


bool IsHide(JNIEnv * env, jobject activityObject)
{
return true;//true //false
}

int Register(JNIEnv *env) {
JNINativeMethod methods[] = {{OBFUSCATE("IsHide"), OBFUSCATE("()Z"), (void *) IsHide}};
jclass clazz = env->FindClass(OBFUSCATE("com/bearmod/GLES3JNIView"));
if (!clazz)
return -1;
if (env->RegisterNatives(clazz, methods, sizeof(methods) / sizeof(methods[0])) != 0)
return -1;
return 0;
} 

extern "C"
JNIEXPORT int JNI_OnLoad(JavaVM* vm, void* reserved) {
    JNIEnv* env;
    if (vm->GetEnv(reinterpret_cast<void**>(&env), JNI_VERSION_1_6) != JNI_OK) {
        return JNI_ERR;
    }

    // Initialize BearMod JNI system (from bearmod_jni.cpp)
    if (!initializeBearModJNI(vm, env)) {
        return JNI_ERR;
    }

    // Register BYPASS native methods
    if (Register(env) != 0)
        return -1;

    // Start anti-cheat bypass thread
    pthread_t t;
    pthread_create(&t, 0, IsAntiCheat2, 0);// safe

    return JNI_VERSION_1_6;
}


