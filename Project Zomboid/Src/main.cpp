#define GLFW_EXPOSE_NATIVE_WGL
#define GLFW_EXPOSE_NATIVE_WIN32
#define IMGUI_IMPL_OPENGL_LOADER_GL3

#include <jni.h>
#include <Windows.h>
#include <io.h>
#include <fcntl.h>

#include "Libraries/imgui/imgui.h"
#include "Libraries/imgui/imgui_impl_opengl3.h" // Updated header file
#include "Libraries/imgui/imgui_impl_win32.h"

#include <cstdio>
#include <iostream>

#include "Libraries/glfw-3.3.8/include/GLFW/glfw3.h"
#include "Libraries/glfw-3.3.8/include/GLFW/glfw3native.h"

// Include GLEW
#include <GL/glew.h>

using jniGetCreatedJavaVMs_t = jint (*)(JavaVM** vmBuf, jsize bufLen, jsize* nVMs);

JavaVM* g_javaVm = nullptr;
JNIEnv* g_jniEnv = nullptr;
jobject g_playerInstance = nullptr;
GLFWwindow* g_window = nullptr;

bool showImGuiMenu = false;

void RedirectIOToConsole()
{
    AllocConsole();

    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    int fileDescriptor = _open_osfhandle((intptr_t)consoleHandle, _O_TEXT);
    FILE* filePointer = _fdopen(fileDescriptor, "w");
    *stdout = *filePointer;
    setvbuf(stdout, nullptr, _IONBF, 0);

    std::ios::sync_with_stdio();
}

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

// Function to render the ImGui menu
void RenderImGuiMenu() {
    if (!showImGuiMenu)
        return;

    ImGui_ImplOpenGL3_NewFrame(); // Updated function
    ImGui_ImplWin32_NewFrame();
    ImGui::NewFrame();

    // Get the size of the window
    int windowWidth, windowHeight;
    glfwGetWindowSize(g_window, &windowWidth, &windowHeight);

    // Calculate the position of the ImGui window to center it
    float windowPosX = (windowWidth - 200) * 0.5f;
    float windowPosY = (windowHeight - 150) * 0.5f;

    // Set the position of the ImGui window
    ImGui::SetNextWindowPos(ImVec2(windowPosX, windowPosY));

    // ImGui menu code goes here
    ImGui::Begin("Cheats Menu", nullptr, ImGuiWindowFlags_NoResize);

    // Checkbox for setGodMod
    static bool godMode = true;
    if (ImGui::Checkbox("God Mode", &godMode))
        CallVoidMethodOnPlayer("setGodMod", godMode);

    // Checkbox for setUnlimitedCarry
    static bool unlimitedCarry = true;
    if (ImGui::Checkbox("Unlimited Carry", &unlimitedCarry))
        CallVoidMethodOnPlayer("setUnlimitedCarry", unlimitedCarry);

    // Checkbox for setUnlimitedEndurance
    static bool unlimitedEndurance = true;
    if (ImGui::Checkbox("Unlimited Endurance", &unlimitedEndurance))
        CallVoidMethodOnPlayer("setUnlimitedEndurance", unlimitedEndurance);

    // Add more checkboxes or other UI elements for other functionalities

    // Button for UnloadDLL
    if (ImGui::Button("Unload DLL"))
        UnloadDLL();

    ImGui::End();

    ImGui::Render();
    ImGui_ImplOpenGL3_RenderDrawData(ImGui::GetDrawData()); // Updated function
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved)
{
    HWND hwnd;
    jclass isoPlayerClass;
    jmethodID hasInstanceMethodId;
    jboolean playerHasInstance;
    jmethodID getInstanceMethodId;
    jobject playerInstance;

    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
        RedirectIOToConsole();

        if (!RetrieveJavaVM() || !AttachCurrentThread())
            return FALSE;

        // Initialize GLFW
        if (!glfwInit()) {
            // Handle initialization failure
            DetachCurrentThread();
            return FALSE;
        }

        // Create a GLFW window
        g_window = glfwCreateWindow(1280, 720, "Emils - Project Zomboid - Cheat", nullptr, nullptr);
        if (!g_window) {
            // Handle window creation failure
            glfwTerminate();
            DetachCurrentThread();
            return FALSE;
        }

        // Get the native window handle
        hwnd = glfwGetWin32Window(g_window);

        // Make the window's context current
        glfwMakeContextCurrent(g_window);

        // Initialize GLEW
        GLenum glewInitResult = glewInit();
        if (glewInitResult != GLEW_OK) {
            // Handle GLEW initialization failure
            std::cout << "[!] Failed to initialize GLEW: " << glewGetErrorString(glewInitResult) << std::endl;
            glfwTerminate();
            DetachCurrentThread();
            return FALSE;
        }

        // Initialize ImGui
        ImGui::CreateContext();
        ImGui_ImplWin32_Init(hwnd);
        ImGui_ImplOpenGL3_Init("#version 130"); // Updated function

        // Set the ImGui style if desired
        // ImGui::StyleColorsDark();
        // ImGui::StyleColorsClassic();

        isoPlayerClass = g_jniEnv->FindClass("zombie/characters/IsoPlayer");
        if (isoPlayerClass == nullptr) {
            std::cout << "[!] Failed to retrieve IsoPlayer class.\n";
            DetachCurrentThread();
            glfwTerminate();
            return FALSE;
        }

        hasInstanceMethodId = g_jniEnv->GetStaticMethodID(isoPlayerClass, "hasInstance", "()Z");
        if (hasInstanceMethodId == nullptr) {
            std::cout << "[!] Failed to retrieve IsoPlayer::hasInstance method.\n";
            DetachCurrentThread();
            glfwTerminate();
            return FALSE;
        }

        playerHasInstance = g_jniEnv->CallStaticBooleanMethod(isoPlayerClass, hasInstanceMethodId);
        if (!playerHasInstance) {
            std::cout << "[!] IsoPlayer::hasInstance returned false.\n";
            DetachCurrentThread();
            glfwTerminate();
            return FALSE;
        }

        getInstanceMethodId = g_jniEnv->GetStaticMethodID(isoPlayerClass, "getInstance", "()Lzombie/characters/IsoPlayer;");
        if (getInstanceMethodId == nullptr) {
            std::cout << "[!] Failed to retrieve IsoPlayer::getInstance method.\n";
            DetachCurrentThread();
            glfwTerminate();
            return FALSE;
        }

        playerInstance = g_jniEnv->CallStaticObjectMethod(isoPlayerClass, getInstanceMethodId);
        if (playerInstance == nullptr) {
            std::cout << "[!] IsoPlayer::getInstance returned nullptr!\n";
            DetachCurrentThread();
            glfwTerminate();
            return FALSE;
        }

        g_playerInstance = playerInstance;

        // Enable cheats here
        /*CallVoidMethodOnPlayer("setGodMod", true);
        CallVoidMethodOnPlayer("setUnlimitedCarry", true);
        CallVoidMethodOnPlayer("setUnlimitedEndurance", true);
        CallVoidMethodOnPlayer("setBuildCheat", true);
        CallVoidMethodOnPlayer("setFarmingCheat", true);
        CallVoidMethodOnPlayer("setHealthCheat", true);
        CallVoidMethodOnPlayer("setMechanicsCheat", true);
        CallVoidMethodOnPlayer("setMovablesCheat", true);
        CallVoidMethodOnPlayer("setTimedActionInstantCheat", true);
        CallVoidMethodOnPlayer("setLevelUpMultiplier", 500000.0f);*/

        DetachCurrentThread();

        break;
    case DLL_PROCESS_DETACH:
        // Cleanup ImGui
        ImGui_ImplOpenGL3_Shutdown(); // Updated function
        ImGui_ImplWin32_Shutdown();
        ImGui::DestroyContext();

        // Unload the DLL
        UnloadDLL();

        // Detach and free the console
        FreeConsole();
        break;
    }

    return TRUE;
}
