#include <cstdio>
#include <jni.h>
#include <iostream>
#include <Windows.h>

using jniGetCreatedJavaVMs_t = jint(*)(JavaVM** vmBuf, jsize bufLen, jsize* nVMs);

JavaVM* g_javaVm = nullptr;
JNIEnv* g_jniEnv = nullptr;
jobject g_playerInstance = nullptr;
HHOOK g_keyboardHook = nullptr;

//Function to retrieve the JavaVM instance
bool RetrieveJavaVM() {
    const auto jvmHandle = GetModuleHandleW(L"jvm.dll");
    if (jvmHandle == nullptr) {
        std::cout << "[!] Failed to retrieve handle for \"jvm.dll\"!\n";
        return false;
    }

    const auto jniGetCreatedJavaVMs = reinterpret_cast<jniGetCreatedJavaVMs_t>(GetProcAddress(jvmHandle, "JNI_GetCreatedJavaVMs"));
    if (jniGetCreatedJavaVMs == nullptr) {
        std::cout << "[!] Failed to retrieve JNI_GetCreatedJavaVMs function!\n";
        return false;
    }

    JavaVM* javaVm = nullptr;
    if (jniGetCreatedJavaVMs(&javaVm, 1, nullptr) != JNI_OK) {
        std::cout << "[!] Failed to retrieve created Java VMs!\n";
        return false;
    }

    g_javaVm = javaVm;
    return true;
}

//Function to attach the current thread to the Java VM
bool AttachCurrentThread() {
    if (g_javaVm == nullptr) {
        std::cout << "[!] Java VM not retrieved!\n";
        return false;
    }

    if (g_javaVm->AttachCurrentThread(reinterpret_cast<void**>(&g_jniEnv), nullptr) != JNI_OK) {
        std::cout << "[!] Failed to attach to the Java VM.\n";
        return false;
    }

    return true;
}

//Function to detach the current thread from the Java VM
void DetachCurrentThread() {
    if (g_javaVm != nullptr) {
        g_javaVm->DetachCurrentThread();
        g_javaVm = nullptr;
        g_jniEnv = nullptr;
    }
}

//Function to call a void method with a boolean parameter on the player instance
void CallVoidMethodOnPlayer(const char* methodName, bool value) {
    if (g_jniEnv == nullptr) {
        std::cout << "[!] JNI environment not attached!\n";
        return;
    }

    const auto isoPlayerClass = g_jniEnv->FindClass("zombie/characters/IsoPlayer");
    if (isoPlayerClass == nullptr) {
        std::cout << "[!] Failed to retrieve IsoPlayer class.\n";
        return;
    }

    const auto methodId = g_jniEnv->GetMethodID(isoPlayerClass, methodName, "(Z)V");
    if (methodId == nullptr) {
        std::cout << "[!] Failed to retrieve method: " << methodName << ".\n";
        return;
    }

    g_jniEnv->CallVoidMethod(g_playerInstance, methodId, value);
    std::cout << "[+] " << methodName << " set to: " << (value ? "true" : "false") << "\n";
}

//Function to unload the DLL
void UnloadDLL() {
    //Perform any cleanup or necessary operations before unloading

    //Unload the DLL
    HMODULE moduleHandle = GetModuleHandleW(L"EsdPZ.dll");
    if (moduleHandle != NULL) {
        FreeLibrary(moduleHandle);
    }
}

//Keyboard hook procedure
LRESULT CALLBACK KeyboardProc(int nCode, WPARAM wParam, LPARAM lParam) {
    if (nCode == HC_ACTION && wParam == WM_KEYDOWN) {
        //Check if the F12 key is pressed
        if (((KBDLLHOOKSTRUCT*)lParam)->vkCode == VK_F12) {
            UnloadDLL(); // Call the function to unload the DLL
        }
    }

    //Call the next hook procedure
    return CallNextHookEx(NULL, nCode, wParam, lParam);
}

//Entry point for the DLL
BOOL APIENTRY DllMain(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved) {
    if (ul_reason_for_call == DLL_PROCESS_ATTACH) {
        AllocConsole();
        FILE* file;
        freopen("CONOUT$", "w", stdout);

        if (!RetrieveJavaVM() || !AttachCurrentThread())
            return FALSE;

        const auto isoPlayerClass = g_jniEnv->FindClass("zombie/characters/IsoPlayer");
        if (isoPlayerClass == nullptr) {
            std::cout << "[!] Failed to retrieve IsoPlayer class.\n";
            DetachCurrentThread();
            return FALSE;
        }

        const auto hasInstanceMethodId = g_jniEnv->GetStaticMethodID(isoPlayerClass, "hasInstance", "()Z");
        if (hasInstanceMethodId == nullptr) {
            std::cout << "[!] Failed to retrieve IsoPlayer::hasInstance method.\n";
            DetachCurrentThread();
            return FALSE;
        }

        const auto playerHasInstance = g_jniEnv->CallStaticBooleanMethod(isoPlayerClass, hasInstanceMethodId);
        if (!playerHasInstance) {
            std::cout << "[!] IsoPlayer::hasInstance returned false.\n";
            DetachCurrentThread();
            return FALSE;
        }

        const auto getInstanceMethodId = g_jniEnv->GetStaticMethodID(isoPlayerClass, "getInstance", "()Lzombie/characters/IsoPlayer;");
        if (getInstanceMethodId == nullptr) {
            std::cout << "[!] Failed to retrieve IsoPlayer::getInstance method.\n";
            DetachCurrentThread();
            return FALSE;
        }

        const auto playerInstance = g_jniEnv->CallStaticObjectMethod(isoPlayerClass, getInstanceMethodId);
        if (playerInstance == nullptr) {
            std::cout << "[!] IsoPlayer::getInstance returned nullptr!\n";
            DetachCurrentThread();
            return FALSE;
        }

        g_playerInstance = playerInstance;

        // Enable cheats here
        CallVoidMethodOnPlayer("setGodMod", true);
        CallVoidMethodOnPlayer("setUnlimitedCarry", true);
        CallVoidMethodOnPlayer("setUnlimitedEndurance", true);
        CallVoidMethodOnPlayer("setBuildCheat", true);
        CallVoidMethodOnPlayer("setFarmingCheat", true);
        CallVoidMethodOnPlayer("setHealthCheat", true);
        CallVoidMethodOnPlayer("setMechanicsCheat", true);
        CallVoidMethodOnPlayer("setMovablesCheat", true);
        CallVoidMethodOnPlayer("setTimedActionInstantCheat", true);
        CallVoidMethodOnPlayer("setLevelUpMultiplier", 500000.0f);

        DetachCurrentThread();

        //Set the keyboard hook
        g_keyboardHook = SetWindowsHookEx(WH_KEYBOARD_LL, KeyboardProc, hModule, 0);
        if (g_keyboardHook == nullptr) {
            std::cout << "[!] Failed to set the keyboard hook.\n";
            return FALSE;
        }
    } else if (ul_reason_for_call == DLL_PROCESS_DETACH) {
        if (g_keyboardHook != nullptr) {
            UnhookWindowsHookEx(g_keyboardHook);
            g_keyboardHook = nullptr;
        }
        //Unload the DLL
        UnloadDLL(); 
    }

    return TRUE;
}