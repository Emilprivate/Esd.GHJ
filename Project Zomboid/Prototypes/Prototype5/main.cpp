#include "includes.h"

DWORD WINAPI Initialization(LPVOID lpParameter)
{
    while (GetModuleHandle("opengl32.dll") == NULL)
    {
        Sleep(0);
    }

    HMODULE hMod = GetModuleHandle("opengl32.dll");
    if (hMod)
    {
        void* ptr = GetProcAddress(hMod, "wglSwapBuffers");
        MH_Initialize();
        MH_CreateHook(ptr, hkSwapBuffers, reinterpret_cast<void**>(&oSwapBuffers));
        MH_EnableHook(ptr);
        do
        {
            Window = GetProcessWindow();
            Sleep(0);
        } while (Window == NULL);

        oWndProc = reinterpret_cast<WNDPROC>(SetWindowLongPtr(Window, GWL_WNDPROC, reinterpret_cast<LONG_PTR>(WndProc)));
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

// Thanks to: https://learn.microsoft.com/en-us/windows/win32/api/winuser/nf-winuser-setwindowshookexa
extern "C" __declspec(dllexport) int setWindowsHook(int code, WPARAM wParam, LPARAM lParam)
{
    return CallNextHookEx(NULL, code, wParam, lParam);
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD callReason, LPVOID lpReserved)
{
    switch (callReason)
    {
    case DLL_PROCESS_ATTACH:
    {
        DisableThreadLibraryCalls(hModule);

        HANDLE hThread = CreateThread(NULL, 0, Initialization, NULL, 0, NULL);
        if (hThread != NULL)
        {
            CloseHandle(hThread);
        }
        else
        {
            // TO-DO: Handle thread creation error
            return FALSE;
        }
        break;
    }
    case DLL_PROCESS_DETACH:
        // TO-DO: Cleanup resources if necessary
        break;
    }
    return TRUE;
}