void ACWarning() {
    ImVec4 textColor = ImVec4(1.0f, 0.0f, 0.0f, 1.0f);
    static auto safety_status = "[UNSAFE]: Enable God Mode to be safe from AC-Type 12 kicks!";

    if (config.boolSettings[1])
    {
        textColor = ImVec4(0.0f, 1.0f, 0.0f, 1.0f);
        safety_status = "[SAFE]: You should be safe from AC-Type 12 kicks!";
    }
    else
    {
        safety_status = "[UNSAFE]: Enable God Mode to be safe from AC-Type 12 kicks!";
    }

    ImVec2 windowSize = ImGui::GetWindowSize();
    ImVec2 textSize = ImGui::CalcTextSize(safety_status);

    float posX = (windowSize.x - textSize.x) * 0.5f;

    ImVec2 oldPos = ImGui::GetCursorPos();

    ImGui::SetCursorPosX(posX);

    ImGui::TextColored(textColor, safety_status);
}

void RenderMenu(bool* showMainWindow)
{
    ImVec2 mainWindowPos;
    ImVec2 mainWindowSize;

    ImGui::SetNextWindowSize(ImVec2(550, 400), ImGuiCond_Always);
    ImGui::Begin(config.localizationManager.getString("main_window_title").c_str(), showMainWindow, ImGuiWindowFlags_NoSavedSettings | ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_MenuBar);
    {
        if (ImGui::BeginMenuBar())
        {
            if (ImGui::MenuItem(config.localizationManager.getString("menu_items").c_str(), NULL, &showItemsWindow)) {}
            if (ImGui::MenuItem(config.localizationManager.getString("menu_playerslist").c_str(), NULL, &showPlayerlistWindow)) {}

            ImGui::EndMenuBar();
        }

        if (showItemsWindow)
        {
            RenderItemsWindow(&showItemsWindow);
        }

        prevShowInventoryWindow = showItemsWindow;

        if (showPlayerlistWindow)
        {
            RenderPlayerlistWindow(&showPlayerlistWindow);
        }

        //ACWarning();

        ImGuiTabBarFlags tab_bar_flags = ImGuiTabBarFlags_None;

        if (ImGui::BeginTabBar("MenuTabs", tab_bar_flags))
        {
            if (ImGui::BeginTabItem(config.localizationManager.getString("tab_player").c_str()))
            {
                RenderPlayerTab();
                ImGui::EndTabItem();
            }

            if (ImGui::BeginTabItem(config.localizationManager.getString("tab_skills").c_str()))
            {
                RenderSkillsTab();
                ImGui::EndTabItem();
            }

            if (ImGui::BeginTabItem(config.localizationManager.getString("tab_misc").c_str()))
            {
                RenderMiscTab();
                ImGui::EndTabItem();
            }

            if (ImGui::BeginTabItem(config.localizationManager.getString("tab_style").c_str()))
            {
                RenderStyleTab();
                ImGui::EndTabItem();
            }

            if (ImGui::BeginTabItem(config.localizationManager.getString("tab_config").c_str()))
            {
                RenderConfigTab();
                ImGui::EndTabItem();
            }

            if (ImGui::BeginTabItem(config.localizationManager.getString("tab_settings").c_str()))
            {
                RenderSettingsTab();
                ImGui::EndTabItem();
            }

            if (ImGui::BeginTabItem(config.localizationManager.getString("tab_about").c_str()))
            {
                RenderAboutTab();
                ImGui::EndTabItem();
            }

            ImGui::EndTabBar();
        }

        mainWindowPos = ImGui::GetWindowPos();
        mainWindowSize = ImGui::GetWindowSize();
    }
    ImGui::End();

    RenderTerminalWindow(mainWindowPos, mainWindowSize);
}