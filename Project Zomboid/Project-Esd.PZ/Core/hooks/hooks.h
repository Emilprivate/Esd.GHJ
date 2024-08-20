#pragma once

twglSwapBuffers oSwapBuffers = NULL;
WNDPROC oWndProc;

static HWND Window = NULL;

int init = false;

bool showMainWindow = false;

ImFont* verdanaFont;
ImFont* chineseFont;
ImFont* russianFont;
ImFont* polishFont;

void CallHandlers() {
    PlayerHandler();
}

void InitImGui()
{
    const ImWchar* range = ImGui::GetIO().Fonts->GetGlyphRangesDefault();
    ImGuiIO& io = ImGui::GetIO();
    ImFontConfig fontConfig;
    fontConfig.FontDataOwnedByAtlas = true;

    const ImWchar* range_verdana = ImGui::GetIO().Fonts->GetGlyphRangesDefault();
    const ImWchar* range_chinese = ImGui::GetIO().Fonts->GetGlyphRangesChineseFull();
    const ImWchar* range_russian = ImGui::GetIO().Fonts->GetGlyphRangesCyrillic();
    verdanaFont = io.Fonts->AddFontFromMemoryTTF(verdanaFontData, sizeof(verdanaFontData), 15.0f, &fontConfig, range_verdana);
    chineseFont = io.Fonts->AddFontFromMemoryTTF(chineseFontData, sizeof(chineseFontData), 15.0f, &fontConfig, range_chinese);
    russianFont = io.Fonts->AddFontFromMemoryTTF(russianFontData, sizeof(russianFontData), 15.0f, &fontConfig, range_russian);
	polishFont = io.Fonts->AddFontFromMemoryTTF(russianFontData, sizeof(russianFontData), 15.0f, &fontConfig, range_russian);

}

void RenderImGui()
{
    ImGui_ImplOpenGL3_NewFrame();
    ImGui_ImplWin32_NewFrame();
    ImGui::NewFrame();

    if (showMainWindow)
    {
        std::string currentLanguage = config.localizationManager.getCurrentLanguage();

        if (currentLanguage == "en")
            ImGui::PushFont(verdanaFont);
        else if (currentLanguage == "cn")
            ImGui::PushFont(chineseFont);
        else if (currentLanguage == "ru")
            ImGui::PushFont(russianFont);
        else if (currentLanguage == "pl")
            ImGui::PushFont(polishFont);
        else if (currentLanguage == "br")
            ImGui::PushFont(verdanaFont);

        RenderMenu(&showMainWindow);

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
                std::cout << "[!] InitializeJavaVM() failed" << std::endl;
            }
            else
            {
                std::cout << "[+] InitializeJavaVM() success" << std::endl;
            }

            InitImGui();

            SetImGuiStyle();

            init = TRUE;
        }
    }

    if (GetAsyncKeyState(VK_INSERT) & 1)
        showMainWindow = !showMainWindow;

    if (GetAsyncKeyState(VK_END) & 1)
    {
        MH_DisableHook(MH_ALL_HOOKS);
        SetWindowLongPtr(Window, GWL_WNDPROC, (LONG_PTR)oWndProc);
    }

    CallHandlers();

    RenderImGui();

    return oSwapBuffers(hDc);
}

LRESULT __stdcall WndProc(const HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
    static bool isInactive = false;

    if (init)
    {
        if (uMsg == VK_INSERT)
            showMainWindow = !showMainWindow;

        ImGui_ImplWin32_WndProcHandler(hWnd, uMsg, wParam, lParam);

        if (showMainWindow && !config.boolSettings[0] && !isInactive)
        {
            CallWindowProc(reinterpret_cast<WNDPROC>(oWndProc), hWnd, WM_ACTIVATE, WA_INACTIVE, 0);
            isInactive = true;
        }

        else if (showMainWindow && config.boolSettings[0] && isInactive)
        {
            CallWindowProc(reinterpret_cast<WNDPROC>(oWndProc), hWnd, WM_ACTIVATE, WA_ACTIVE, 0);
            isInactive = false;
        }

        else if (!showMainWindow && isInactive)
        {
            CallWindowProc(reinterpret_cast<WNDPROC>(oWndProc), hWnd, WM_ACTIVATE, WA_ACTIVE, 0);
            isInactive = false;
        }
    }

    return (showMainWindow && config.boolSettings[0]) ? true : CallWindowProc(reinterpret_cast<WNDPROC>(oWndProc), hWnd, uMsg, wParam, lParam);
}


