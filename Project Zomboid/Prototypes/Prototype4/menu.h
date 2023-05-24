#pragma once

void RenderMenu(bool* show, bool* cheats)
{
    ImGui::SetNextWindowSize(ImVec2(450, 300), ImGuiCond_FirstUseEver);

    ImGui::Begin("EsdPZ | Prototype 4", show,
        ImGuiWindowFlags_NoSavedSettings |
        ImGuiWindowFlags_NoCollapse |
        ImGuiWindowFlags_NoResize);

    ImGuiTabBarFlags tab_bar_flags = ImGuiTabBarFlags_None;

    if (ImGui::BeginTabBar("Tabs", tab_bar_flags))
    {
        if (ImGui::BeginTabItem("Player"))
        {
            RenderPlayerTab(cheats);
            ImGui::EndTabItem();
        }

        if (ImGui::BeginTabItem("Misc"))
        {
            RenderMiscTab(cheats);
            ImGui::EndTabItem();
        }

        if (ImGui::BeginTabItem("Debug"))
        {
            RenderDebugTab(cheats);
            ImGui::EndTabItem();
        }

        if (ImGui::BeginTabItem("Style"))
        {
            RenderStyleTab();
            ImGui::EndTabItem();
        }

        if (ImGui::BeginTabItem("Config"))
        {
            RenderConfigTab(cheats);
            ImGui::EndTabItem();
        }

        if (ImGui::BeginTabItem("About"))
        {
            RenderAboutTab();
            ImGui::EndTabItem();
        }

        ImGui::EndTabBar();
    }

    ImGui::End();
}
