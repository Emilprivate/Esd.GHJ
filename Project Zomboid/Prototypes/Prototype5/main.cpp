#include "includes.h"

DWORD WINAPI Initialization(HMODULE hModule)
{
    while (GetModuleHandleW(L"opengl32.dll") == NULL)
    {
        Sleep(1);
    }

    HMODULE hOpenGL32 = GetModuleHandleW(L"opengl32.dll");
    if (hOpenGL32)
    {
        if (MH_Initialize() == MH_OK)
        {
            void* pSwapBuffersRoutine = GetProcAddress(hOpenGL32, "wglSwapBuffers");
            if (MH_CreateHook(pSwapBuffersRoutine, hkSwapBuffers, reinterpret_cast<void**>(&oSwapBuffers)) == MH_OK)
            {
                if (MH_EnableHook(pSwapBuffersRoutine) == MH_OK) 
                {
                    do
                    {
                        Window = GetProcessWindow();
                        Sleep(1);
                    } while (Window == NULL);

                    oWndProc = reinterpret_cast<WNDPROC>(SetWindowLongPtrA(Window, GWL_WNDPROC, reinterpret_cast<LONG_PTR>(WndProc)));
                    return TRUE;
                }
                else
                {
                    MH_RemoveHook(pSwapBuffersRoutine);
                    MH_Uninitialize();
                }
            }
            else
            {
                MH_Uninitialize();
            }
        }
    }

    FreeLibraryAndExitThread(hModule, EXIT_FAILURE);
    return FALSE; //will never be called...
}

// Thanks to: https://learn.microsoft.com/en-us/windows/win32/api/winuser/nf-winuser-setwindowshookexa
extern "C" __declspec(dllexport) int setWindowsHook(int code, WPARAM wParam, LPARAM lParam)
{
    return CallNextHookEx(NULL, code, wParam, lParam);
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD dwCallReason, LPVOID lpReserved)
{
    switch (dwCallReason)
    {
    case DLL_PROCESS_ATTACH:
    {
        DisableThreadLibraryCalls(hModule);
        
        HANDLE hThread = CreateThread(nullptr, 0, (LPTHREAD_START_ROUTINE)Initialization, hModule, 0, nullptr);
        if (hThread != NULL)
        {
            CloseHandle(hThread);
        }
        else
        {
            MessageBoxW(NULL, L"Failed to create thread.", L"Critical Error", MB_OK | MB_ICONERROR);
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