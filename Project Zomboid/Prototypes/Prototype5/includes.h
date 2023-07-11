#define STB_IMAGE_IMPLEMENTATION

#include <Windows.h>
#include <iostream>
#include <cassert>
#include <cstdint>
#include <WinUser.h>
#include <fstream>
#include <sstream>
#include <ShlObj.h>
#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <map>
#include <commdlg.h>
#include <chrono>
#include <thread>

#pragma region OpenGL
#ifdef _WIN64
#define GWL_WNDPROC GWLP_WNDPROC
#endif

#define GLEW_STATIC
#if defined _M_X64
#include "Libs/opengl/x64/glew.h"
#pragma comment(lib, "Libs/opengl/x64/glew32s.lib")
#elif defined _M_IX86
#include "Libs/opengl/x86/glew.h"
#pragma comment(lib, "Libs/opengl/x86/glew32s.lib")
#endif
#include <gl/gl.h> 
#pragma comment(lib,"opengl32.lib")
#pragma endregion

//prototypes
extern LRESULT ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);
typedef BOOL(__stdcall* twglSwapBuffers) (_In_ HDC hDc);
typedef LRESULT(CALLBACK* WNDPROC)(HWND, UINT, WPARAM, LPARAM);

//font&icon
#include "icon.h"
#include "verdana.h"
#include "russian.h"
#include "chinese.h"

//libs
#include "Libs/minhook/MinHook.h"
#include "Libs/imgui/imgui.h"
#include "Libs/imgui/imgui_impl_opengl3.h"
#include "Libs/imgui/imgui_impl_win32.h"
#include <jni.h>
#include "Libs/stb/stb_image.h"
#include "Libs/json/json.h"

using json = nlohmann::json;

//languages
#include "zh.h"
#include "en.h"
#include "ru.h"
#include "pl.h"
#include "br.h"
#include "localization_manager.h"

//styles
#include "imguistyles.h"

//json to cpp managers
#include "json_cpp_format/combined.h"

//main jni hook
#include "jvm.h"

#include "configsystem.h"

//jvmfunctions
#include "playercalls.h"
#include "inventorycalls.h"
#include "skillcalls.h"

//item window related
#include "items_json_manager.h"
#include "items_window_manager.h"

//utils
#include "vector_itemmaps.h"
#include "utils.h"

//menu
#include "configs.h"
#include "styles.h"
#include "about.h"
#include "player.h"
#include "skills.h"
#include "settings.h"

//itemstabs
#include "clothing.h"
#include "equipment.h"
#include "food.h"
#include "itemsmisc.h"
#include "literature.h"
#include "materials.h"
#include "medical.h"
#include "vehicle.h"
#include "weapon.h"

//menubar windows
#include "playerslist_window.h"
#include "items_window.h"

//menu-misc
#include "misc1.h"
#include "misc2.h"
#include "misc.h"

//terminal
#include "terminal.h"

//menu-main
#include "menu.h"

//handlers
#include "playerhandler.h"

//general hooks
#include "hooks.h"