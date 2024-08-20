#define STB_IMAGE_IMPLEMENTATION

#include <Windows.h>
#include <iostream>
#include <cassert>
#include <filesystem>
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
#include "glew.h"
#pragma comment(lib, "glew32s.lib")

#include <gl/gl.h> 
#pragma comment(lib,"opengl32.lib")

#pragma endregion

//prototypes
extern LRESULT ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);
typedef BOOL(__stdcall* twglSwapBuffers) (_In_ HDC hDc);
typedef LRESULT(CALLBACK* WNDPROC)(HWND, UINT, WPARAM, LPARAM);

//font&icon
#include "../misc/icon.h"
#include "../misc/verdana.h"
#include "../misc/russian.h"
#include "../misc/chinese.h"

//libs
#include <jni.h>
#include "MinHook.h"
#include "imgui.h"
#include "imgui_impl_opengl3.h"
#include "imgui_impl_win32.h"
#include "stb_image.h"
#include "json.h"

using json = nlohmann::json;

//languages
#include "../misc/languages/zh.h"
#include "../misc/languages/en.h"
#include "../misc/languages/ru.h"
#include "../misc/languages/pl.h"
#include "../misc/languages/br.h"
#include "localization_manager.h"

//styles
#include "../menu/imguistyles.h"

//json to cpp managers
#include "combined.h"

//main jni hook
#include "../hooks/jvm.h"

#include "../utils/configsystem.h"

//jvmfunctions
#include "../manipulation/playercalls.h"
#include "../manipulation/inventorycalls.h"
#include "../manipulation/skillcalls.h"

//item window related
#include "../menu/menubar/managers/items_json_manager.h"
#include "../menu/menubar/managers/items_window_manager.h"

//utils
#include "../misc/vector_itemmaps.h"
#include "../utils/utils.h"

//menu
#include "../menu/tabs/configs.h"
#include "../menu/tabs/styles.h"
#include "../menu/tabs/about.h"
#include "../menu/tabs/player.h"
#include "../menu/tabs/skills.h"
#include "../menu/tabs/settings.h"

//itemstabs
#include "../menu/menubar/itemstabs/clothing.h"
#include "../menu/menubar/itemstabs/equipment.h"
#include "../menu/menubar/itemstabs/food.h"
#include "../menu/menubar/itemstabs/itemsmisc.h"
#include "../menu/menubar/itemstabs/literature.h"
#include "../menu/menubar/itemstabs/materials.h"
#include "../menu/menubar/itemstabs/medical.h"
#include "../menu/menubar/itemstabs/vehicle.h"
#include "../menu/menubar/itemstabs/weapon.h"

//menubar windows
#include "../menu/menubar/playerslist_window.h"
#include "../menu/menubar/items_window.h"

//menu-misc
#include "../menu/tabs/misctabs/misc1.h"
#include "../menu/tabs/misctabs/misc2.h"
#include "../menu/tabs/misc.h"

//terminal
#include "../menu/windows/terminal.h"

//menu-main
#include "../menu/menu.h"

//handlers
#include "../handlers/playerhandler.h"

//general hooks
#include "../hooks/hooks.h"