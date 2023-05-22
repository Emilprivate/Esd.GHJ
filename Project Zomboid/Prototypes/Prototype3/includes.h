#include <Windows.h>
#include <iostream>
#include <cassert>
#include <cstdint>
#include "MinHook.h"
#include "imgui.h"
#include "imgui_impl_opengl3.h"
#include "imgui_impl_win32.h"
#include <jni.h>

#include "utils.h"

#include "jvm.h"

#include "menu.h"
#include "style.h"

#pragma region OpenGL
#ifdef _WIN64
#define GWL_WNDPROC GWLP_WNDPROC
#endif

#define GLEW_STATIC
#if defined _M_X64
#include "glew.h"
#pragma comment(lib, "../../Libraries/GLx64/glew32s.lib")
#elif defined _M_IX86
#include "glew.h"
#pragma comment(lib, "../../Libraries/GLx86/glew32s.lib")
#endif
#include <gl/gl.h> 
#pragma comment(lib,"opengl32.lib")
#pragma endregion

extern LRESULT ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);
typedef BOOL(__stdcall* twglSwapBuffers) (_In_ HDC hDc);
typedef LRESULT(CALLBACK* WNDPROC)(HWND, UINT, WPARAM, LPARAM);