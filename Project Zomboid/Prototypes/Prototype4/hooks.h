#pragma once


twglSwapBuffers oSwapBuffers = NULL;
WNDPROC oWndProc;

static HWND Window = NULL;

int init = false;
bool show = false;
bool cheats[30] = { false };

ImFont* verdanaFont;

void InitImGui()
{
    const ImWchar* range = ImGui::GetIO().Fonts->GetGlyphRangesDefault();

    ImGuiIO& io = ImGui::GetIO();
    ImFontConfig fontConfig;
    fontConfig.FontDataOwnedByAtlas = true;
    verdanaFont = io.Fonts->AddFontFromMemoryTTF(verdana, sizeof(verdana), 15.0f, &fontConfig, range);

    //TODO - not working for some reason
    //LoadTextureFromFile("skull.jpg", &my_image_texture, &my_image_width, &my_image_height);
    //LoadTextureFromMemory(skullicon, ICON_WIDTH, ICON_HEIGHT, &my_icon_texture);
}

void RenderImGui()
{
    ImGui_ImplOpenGL3_NewFrame();
    ImGui_ImplWin32_NewFrame();
    ImGui::NewFrame();

    if (show)
    {
        ImGui::PushFont(verdanaFont);
        RenderMenu(&show, cheats);
        ImGui::PopFont();
    }

    ImGui::EndFrame();
    ImGui::Render();
    ImGui_ImplOpenGL3_RenderDrawData(ImGui::GetDrawData());
}

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

            //RedirectConsoleOutput();

            if (!InitializeJavaVM())
            {
                //SetConsoleColor(FOREGROUND_RED);
                std::cout << "[!] InitializeJavaVM() failed" << std::endl;
            }
            else
            {
                //SetConsoleColor(FOREGROUND_GREEN);
                std::cout << "[+] InitializeJavaVM() success" << std::endl;
            }

            InitImGui();

            SetImGuiStyle();

            

            init = TRUE;
        }
    }

    if (GetAsyncKeyState(VK_INSERT) & 1)
        show = !show;

    if (GetAsyncKeyState(VK_END) & 1)
    {
        MH_DisableHook(MH_ALL_HOOKS);
        SetWindowLongPtr(Window, GWL_WNDPROC, (LONG_PTR)oWndProc);
    }

    RenderImGui();

    return oSwapBuffers(hDc);
}

LRESULT __stdcall WndProc(const HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {

    if (ImGui_ImplWin32_WndProcHandler(hWnd, uMsg, wParam, lParam))
        return true;

    return CallWindowProc(oWndProc, hWnd, uMsg, wParam, lParam);
}