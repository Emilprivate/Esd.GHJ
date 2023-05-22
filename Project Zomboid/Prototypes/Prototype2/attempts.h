#pragma once
//==========================================================================================================================

/*My attempt on imgui - failed*/
//Function to initialize ImGui
/*bool InitImGui(HWND hwnd, HGLRC hRC) {
    // Initialize ImGui context
    ImGui::CreateContext();
    ImGuiIO& io = ImGui::GetIO(); (void)io;
    ImGui::StyleColorsDark();

    // Initialize ImGui with OpenGL
    ImGui_ImplWin32_Init(hwnd);
    ImGui_ImplOpenGL3_Init("#version 150");

    // Set up ImGui rendering context
    ImGui_ImplOpenGL3_CreateDeviceObjects();

    return true;
}

//Function to shutdown ImGui
void ShutdownImGui() {
    ImGui_ImplOpenGL3_Shutdown();
    ImGui_ImplWin32_Shutdown();
    ImGui::DestroyContext();
}

//Function to render ImGui
void RenderImGui() {
    ImGui_ImplOpenGL3_NewFrame();
    ImGui_ImplWin32_NewFrame();
    ImGui::NewFrame();

    if (show_demo_window) {
        ImGui::ShowDemoWindow(&show_demo_window);
    }

    ImGui::Render();
    ImGui_ImplOpenGL3_RenderDrawData(ImGui::GetDrawData());
}*/

//==========================================================================================================================
//My own attempt
/*//Function to hook "wglSwapBuffers"
typedef BOOL(__stdcall* twglSwapBuffers)(HDC hdc);
twglSwapBuffers owglSwapBuffers;

//Hooked function for "wglSwapBuffers"
BOOL WINAPI Hooked_wglSwapBuffers(HDC hdc) {
    RenderImGui();

    if (first_init == FALSE)
    {
        glewExperimental = GL_TRUE;
        if (glewInit() != GLEW_OK) {
            std::cout << "[!] Failed to initialize GLEW.\n";
            return owglSwapBuffers(hdc);
        }
        first_init = TRUE;
    }

    return owglSwapBuffers(hdc);
}

//Function to hook "wglSwapBuffers"
bool HookWglSwapBuffers() {
    AllocConsole();
    FILE* file;
    freopen("CONOUT$", "w", stdout);

    if (!InitializeJavaVM()) {
        return FALSE;
    }

    EnableCheats();

    glewInit();

    if (!HookWglSwapBuffers()) {
        DetachCurrentThread();
        return FALSE;
    }

    owglSwapBuffers = (twglSwapBuffers)GetProcAddress(GetModuleHandle(TEXT("opengl32.dll")), "wglSwapBuffers");

    if (MH_Initialize() == MH_OK &&
        MH_CreateHook(reinterpret_cast<LPVOID>(owglSwapBuffers),
            reinterpret_cast<LPVOID>(&Hooked_wglSwapBuffers),
            reinterpret_cast<LPVOID*>(&owglSwapBuffers)) == MH_OK &&
        MH_EnableHook(reinterpret_cast<LPVOID>(owglSwapBuffers)) == MH_OK) {

        std::cout << "[+] Successfully hooked \"wglSwapBuffers\".\n";
        return true;
    }
    else {
        std::cout << "[-] Failed to hook \"wglSwapBuffers\".\n";
        return false;
    }
}*/

//==========================================================================================================================
//GuidedHacking attempt: https://guidedhacking.com/threads/opengl-hooking-drawing-text-rendering-tutorial.14460/
/*typedef BOOL(__stdcall* twglSwapBuffers) (HDC hDc);

twglSwapBuffers owglSwapBuffers;
twglSwapBuffers wglSwapBuffersGateway;

BOOL __stdcall hkwglSwapBuffers(HDC hDc)
{
    //Keyboard usage: GetAsyncKeyState(VK_NUMPAD1)

    RenderImGui();

    return wglSwapBuffersGateway(hDc);
}

DWORD WINAPI HackThread(HMODULE hModule)
{
    //Create Console
    AllocConsole();
    FILE* f;
    freopen_s(&f, "CONOUT$", "w", stdout);

    //Output current status
    std::cout << "[+] Console created.\n";

    // Initialize OpenGL context and ImGui
    HWND hwnd = FindWindowA(NULL, "Project Zomboid");
    HDC hDC = GetDC(hwnd);
    HGLRC hRC = wglCreateContext(hDC);
    wglMakeCurrent(hDC, hRC);

    //Init ImGui
    InitImGui(hwnd, hRC);

    //Hook
    Hook SwapBuffersHook("wglSwapBuffers", "opengl32.dll", (BYTE*)hkwglSwapBuffers, (BYTE*)&wglSwapBuffersGateway, 5);
    SwapBuffersHook.Enable();

    // Cleanup
    Sleep(10000);
    SwapBuffersHook.Disable();

    fclose(f);
    FreeConsole();
    FreeLibraryAndExitThread(hModule, 0);
    return 0;
}*/

//==========================================================================================================================
//Random source attempt: https://github.com/ocornut/imgui/blob/master/examples/example_win32_opengl3/main.cpp
/*typedef PROC(*func_wglGetProcAddress_t) (LPCSTR lpszProc);
static func_wglGetProcAddress_t _wglGetProcAddress;
func_wglGetProcAddress_t	owglGetProcAddress;

PROC hwglGetProcAddress(LPCSTR ProcName)
{
    //glBufferSubData
    //glVertexAttribPointer
    //glViewportIndexedf
    //glGetUniformLocation
    //glBufferData
    //glCompressedTexSubImage2DARB

    return owglGetProcAddress(ProcName);
}

DWORD WINAPI OpenglInit(__in  LPVOID lpParameter)
{
    while (GetModuleHandle("opengl32.dll") == 0)
    {
        Sleep(100);
    }

    //HMODULE dll = LoadLibrary(TEXT("opengl32"));
    HMODULE hMod = GetModuleHandle("opengl32.dll");
    if (hMod)
    {
        //use GetProcAddress to find address of wglSwapBuffers in opengl32.dll

        void* ptr = GetProcAddress(hMod, "wglSwapBuffers");
        MH_Initialize();
        MH_CreateHook(ptr, Hooked_wglSwapBuffers, reinterpret_cast<void**>(&owglSwapBuffers));
        MH_EnableHook(ptr);

        _wglGetProcAddress = (func_wglGetProcAddress_t)GetProcAddress(hMod, "wglGetProcAddress");
        //MH_Initialize();
        MH_CreateHook(_wglGetProcAddress, hwglGetProcAddress, (void**)&owglGetProcAddress);
        MH_EnableHook(_wglGetProcAddress);
    }

    return 1;
}*/

//==========================================================================================================================
//Ketum's source attempt backup:
/*

#ifdef _WIN64
#define GWL_WNDPROC GWLP_WNDPROC
#endif

#define _CRT_SECURE_NO_WARNINGS

#pragma region OpenGL
#define GLEW_STATIC

#if defined _M_X64
#include "../../Libraries/GLx64/glew.h"
#pragma comment(lib, "glew32s.lib")
#elif defined _M_IX86
#include "../../Libraries/GLx86/glew.h"
#pragma comment(lib, "glew32s.lib")
#endif

#include <Windows.h>
#include <iostream>
#include <cassert>
#include <cstdint>
#include <cstdio>
#include <jni.h>
#include <fstream>

#include <GL/gl.h>

#pragma comment(lib,"opengl32.lib")
#pragma endregion

#include "../../Libraries/imgui/imgui.h"
#include "../../Libraries/imgui/imgui_impl_opengl3.h"
#include "../../Libraries/imgui/imgui_impl_win32.h"

#include "MinHook.h"

//==========================================================================================================================

using namespace std;
using jniGetCreatedJavaVMs_t = jint(*)(JavaVM** vmBuf, jsize bufLen, jsize* nVMs);

//==========================================================================================================================
//Global variables

JavaVM* g_javaVm = nullptr;                 //Pointer to the JavaVM
JNIEnv* g_jniEnv = nullptr;                 //JniEnv pointer
jobject g_playerInstance = nullptr;         //Player instance

bool cheats[9] = { false, false, false, false, false, false, false, false, false };

//bool first_init = false;                  //My own version - failed attempt

//==========================================================================================================================

HWND tmp_window = NULL;
BOOL CALLBACK EnumWindowsCallback(HWND handle, LPARAM lParam)
{
    DWORD wndProcId;
    GetWindowThreadProcessId(handle, &wndProcId);

    if (GetCurrentProcessId() != wndProcId)
        return TRUE; // skip to next window

    tmp_window = handle;
    return FALSE; // window found abort search
}

HWND GetProcessWindow()
{
    tmp_window = NULL;
    EnumWindows(EnumWindowsCallback, NULL);
    return tmp_window;
}

void RedirectConsoleOutput()
{
    AllocConsole();
    FILE* file;
    freopen_s(&file, "CONOUT$", "w", stdout);
}

//==========================================================================================================================

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

//Function to initialize the JavaVM and attach the current thread
bool InitializeJavaVM() {
    if (!RetrieveJavaVM() || !AttachCurrentThread()) {
        return false;
    }

    const auto isoPlayerClass = g_jniEnv->FindClass("zombie/characters/IsoPlayer");
    if (isoPlayerClass == nullptr) {
        std::cout << "[!] Failed to retrieve IsoPlayer class.\n";
        DetachCurrentThread();
        return false;
    }

    const auto hasInstanceMethodId = g_jniEnv->GetStaticMethodID(isoPlayerClass, "hasInstance", "()Z");
    if (hasInstanceMethodId == nullptr) {
        std::cout << "[!] Failed to retrieve IsoPlayer::hasInstance method.\n";
        DetachCurrentThread();
        return false;
    }

    const auto playerHasInstance = g_jniEnv->CallStaticBooleanMethod(isoPlayerClass, hasInstanceMethodId);
    if (!playerHasInstance) {
        std::cout << "[!] IsoPlayer::hasInstance returned false.\n";
        DetachCurrentThread();
        return false;
    }

    const auto getInstanceMethodId = g_jniEnv->GetStaticMethodID(isoPlayerClass, "getInstance", "()Lzombie/characters/IsoPlayer;");
    if (getInstanceMethodId == nullptr) {
        std::cout << "[!] Failed to retrieve IsoPlayer::getInstance method.\n";
        DetachCurrentThread();
        return false;
    }

    const auto playerInstance = g_jniEnv->CallStaticObjectMethod(isoPlayerClass, getInstanceMethodId);
    if (playerInstance == nullptr) {
        std::cout << "[!] IsoPlayer::getInstance returned nullptr!\n";
        DetachCurrentThread();
        return false;
    }

    g_playerInstance = playerInstance;

    return true;
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


//==========================================================================================================================

//Function to enable debug cheats
void EnableCheats() {
    CallVoidMethodOnPlayer("setGodMod", true);
    CallVoidMethodOnPlayer("setUnlimitedCarry", true);
    CallVoidMethodOnPlayer("setUnlimitedEndurance", true);
    CallVoidMethodOnPlayer("setBuildCheat", true);
    CallVoidMethodOnPlayer("setFarmingCheat", true);
    CallVoidMethodOnPlayer("setHealthCheat", true);
    CallVoidMethodOnPlayer("setMechanicsCheat", true);
    CallVoidMethodOnPlayer("setMovablesCheat", true);
    CallVoidMethodOnPlayer("setTimedActionInstantCheat", true);
}

LRESULT CALLBACK WndProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
LRESULT ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);

typedef BOOL(__stdcall* twglSwapBuffers) (_In_ HDC hDc);
typedef LRESULT(CALLBACK* WNDPROC)(HWND, UINT, WPARAM, LPARAM);

twglSwapBuffers oSwapBuffers = NULL;
WNDPROC         oWndProc;
static HWND     Window       = NULL;

int  init = false;
bool show = false;

BOOL __stdcall hkSwapBuffers(_In_ HDC hDc)
{
    if (init == FALSE)
    {
        glewExperimental = GL_TRUE;
        if (glewInit() == GLEW_OK)
        {
            ImGui::CreateContext();
            ImGuiIO& io = ImGui::GetIO();
            io.ConfigFlags = ImGuiConfigFlags_NoMouseCursorChange;
            ImGui_ImplWin32_Init(Window);
            ImGui_ImplOpenGL3_Init();

            RedirectConsoleOutput();
            init = TRUE;
        }
    }

    if (GetAsyncKeyState(VK_INSERT) & 1)
        show = !show;

    if (GetAsyncKeyState(VK_END) & 1) // Unload
    {
        MH_DisableHook(MH_ALL_HOOKS);
        SetWindowLongPtr(Window, GWL_WNDPROC, (LONG_PTR)oWndProc); // Reset WndProc
    }

    ImGui_ImplOpenGL3_NewFrame();
    ImGui_ImplWin32_NewFrame();
    ImGui::NewFrame();

    if (show)
    {
        ImGui::Begin("Prototype2", &show, ImGuiWindowFlags_NoSavedSettings);

        //ImGui Button that initializes InitializeJavaVM()
        if (ImGui::Button("InitializeJavaVM"))
        {
            if (!InitializeJavaVM())
            {
                std::cout << "[!] InitializeJavaVM() failed" << std::endl;
            }
            else
            {
                std::cout << "[+] InitializeJavaVM() succeeded" << std::endl;

                if (ImGui::Checkbox("God Mode", &cheats[0]))
                    CallVoidMethodOnPlayer("setGodMod", cheats[0]);

                if (ImGui::Checkbox("Unlimited Carry", &cheats[1]))
                    CallVoidMethodOnPlayer("setUnlimitedCarry", cheats[1]);

                if (ImGui::Checkbox("Unlimited Endurance", &cheats[2]))
                    CallVoidMethodOnPlayer("setUnlimitedEndurance", cheats[2]);

                if (ImGui::Checkbox("Build Cheat", &cheats[3]))
                    CallVoidMethodOnPlayer("setBuildCheat", cheats[3]);

                if (ImGui::Checkbox("Farming Cheat", &cheats[4]))
                    CallVoidMethodOnPlayer("setFarmingCheat", cheats[4]);

                if (ImGui::Checkbox("Health Cheat", &cheats[5]))
                    CallVoidMethodOnPlayer("setHealthCheat", cheats[5]);

                if (ImGui::Checkbox("Mechanics Cheat", &cheats[6]))
                    CallVoidMethodOnPlayer("setMechanicsCheat", cheats[6]);

                if (ImGui::Checkbox("Movables Cheat", &cheats[7]))
                    CallVoidMethodOnPlayer("setMovablesCheat", cheats[7]);

                if (ImGui::Checkbox("Timed Action Instant Cheat", &cheats[8]))
                    CallVoidMethodOnPlayer("setTimedActionInstantCheat", cheats[8]);
            }
        }


        ImGui::End();
    }

    ImGui::EndFrame();
    ImGui::Render();
    ImGui_ImplOpenGL3_RenderDrawData(ImGui::GetDrawData());

    return oSwapBuffers(hDc);
}

LRESULT __stdcall WndProc(const HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {

    if (ImGui_ImplWin32_WndProcHandler(hWnd, uMsg, wParam, lParam))
        return true;

    return CallWindowProc(oWndProc, hWnd, uMsg, wParam, lParam);
}

DWORD WINAPI Initialization(__in  LPVOID lpParameter)
{
    while (GetModuleHandle("opengl32.dll") == NULL) { Sleep(100); }
    Sleep(100);

    HMODULE hMod = GetModuleHandle("opengl32.dll");
    if (hMod)
    {
        void* ptr = GetProcAddress(hMod, "wglSwapBuffers");
        MH_Initialize();
        MH_CreateHook(ptr, hkSwapBuffers, reinterpret_cast<void**>(&oSwapBuffers));
        MH_EnableHook(ptr);
        do
            Window = GetProcessWindow();
        while (Window == NULL);
        oWndProc = (WNDPROC)SetWindowLongPtr(Window, GWL_WNDPROC, (LONG_PTR)WndProc);
        return true;
    }
    else
        return false;
}

//Entry point
BOOL APIENTRY DllMain(HMODULE hModule, DWORD  ul_reason_for_call, LPVOID lpReserved)
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
        DisableThreadLibraryCalls(hModule);
        CreateThread(0, 0, Initialization, 0, 0, 0);

    case DLL_PROCESS_DETACH:
        DetachCurrentThread();
        break;
    }
    return TRUE;
}

*/