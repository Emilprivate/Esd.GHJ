#define STB_IMAGE_IMPLEMENTATION
#define _CRT_SECURE_NO_WARNINGS

#include <Windows.h>
#include <iostream>
#include <cassert>
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

#include <cstdint>
#include <WinUser.h>
#include <fstream>
#include <sstream>
#include <ShlObj.h>
#include <string>
#include <vector>
#include <unordered_map>

#include "icon.h"
#include "verdana.h"

#include "MinHook.h"
#include "imgui.h"
#include "imgui_impl_opengl3.h"
#include "imgui_impl_win32.h"
#include <jni.h>
#include <stb_image.h>

#include "utils.h"
#include "jvm.h"
#include "configsystem.h"

#include "configs.h"
#include "styles.h"
#include "about.h"
#include "misc.h"
#include "player.h"
#include "debug.h"

#include "menu.h"
#include "defaultstyle.h"

#include "hooks.h"