#include "includes.h"

//==========================================================================================================================
#pragma region Global Variables

twglSwapBuffers oSwapBuffers = NULL;
WNDPROC oWndProc;

static HWND Window = NULL;

int init = false;

#pragma endregion

#pragma region Hook Functions
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

            if (!InitializeJavaVM())
            {
                std::cout << "[!] InitializeJavaVM() failed" << std::endl;
            }
            else
            {
                std::cout << "[+] InitializeJavaVM() success" << std::endl;
            }

            SetImGuiStyle();

            //RedirectConsoleOutput();
            
            init = TRUE;
        }
    }

    if (GetAsyncKeyState(VK_INSERT) & 1)
        show = !show;

    if (GetAsyncKeyState(VK_END) & 1) // Unload
    {
        //Disable hooks
        MH_DisableHook(MH_ALL_HOOKS);
        SetWindowLongPtr(Window, GWL_WNDPROC, (LONG_PTR)oWndProc); // Reset WndProc

        //Detach from the current thread (assuming it's a Java thread)
        DetachCurrentThread();

        //Uninitialize MinHook
        MH_Uninitialize();

        //Free the console window
        FreeConsole();

        //Free the module and exit the thread
        FreeLibraryAndExitThread(GetModuleHandle(NULL), 0);
    }


    ImGui_ImplOpenGL3_NewFrame();
    ImGui_ImplWin32_NewFrame();
    ImGui::NewFrame();

    if (show)
    {
        RenderMenu(&show);
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

DWORD WINAPI Initalization(__in  LPVOID lpParameter)
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
#pragma endregion
//==========================================================================================================================
#pragma region DllMain Entrypoint
BOOL APIENTRY DllMain(HMODULE hModule, DWORD  ul_reason_for_call, LPVOID lpReserved)
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
        DisableThreadLibraryCalls(hModule);
        CreateThread(0, 0, Initalization, 0, 0, 0);
    case DLL_PROCESS_DETACH:
        //Disable hooks
        MH_DisableHook(MH_ALL_HOOKS);
        SetWindowLongPtr(Window, GWL_WNDPROC, (LONG_PTR)oWndProc); // Reset WndProc

        //Detach from the current thread (assuming it's a Java thread)
        DetachCurrentThread();

        //Uninitialize MinHook
        MH_Uninitialize();

        //Free the console window
        FreeConsole();

        //Free the module and exit the thread
        FreeLibraryAndExitThread(hModule, 0);
        break;
    }
    return TRUE;
}
#pragma endregion