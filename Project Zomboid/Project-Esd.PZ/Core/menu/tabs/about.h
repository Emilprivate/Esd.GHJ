#pragma once

void RenderAboutTab()
{
    float buttonWidth = ImGui::GetContentRegionAvailWidth() / 2 - ImGui::GetStyle().ItemSpacing.x;
    float centerPosX = (ImGui::GetWindowContentRegionMax().x - buttonWidth) / 2;

    float buttonHeight = ImGui::GetFontSize() + ImGui::GetStyle().FramePadding.y * 2;
    float centerPosY = (ImGui::GetWindowContentRegionMax().y + ImGui::GetWindowContentRegionMin().y - buttonHeight) / 3;

    ImGui::SetCursorPosX(centerPosX);
    ImGui::SetCursorPosY(centerPosY);
    if (ImGui::Button(config.localizationManager.getString("uc_thread").c_str(), ImVec2(buttonWidth, buttonHeight)))
        ShellExecuteA(NULL, "open", "https://www.unknowncheats.me/forum/other-mmorpg-and-strategy/584072-project-zomboid-cheat-esdpz.html", NULL, NULL, SW_SHOWNORMAL);

    ImGui::SetCursorPosX(centerPosX);
    if (ImGui::Button(config.localizationManager.getString("project_github").c_str(), ImVec2(buttonWidth, buttonHeight)))
        ShellExecuteA(NULL, "open", "https://github.com/Emilprivate/Esd.GHJ/tree/main/Project%20Zomboid", NULL, NULL, SW_SHOWNORMAL);

    ImGui::SetCursorPosX(centerPosX);
    if (ImGui::Button(config.localizationManager.getString("red_github").c_str(), ImVec2(buttonWidth, buttonHeight)))
        ShellExecuteA(NULL, "open", "https://github.com/Emilprivate", NULL, NULL, SW_SHOWNORMAL);

    ImGui::SetCursorPosX(centerPosX);
    if (ImGui::Button(config.localizationManager.getString("donations").c_str(), ImVec2(buttonWidth, buttonHeight)))
        ShellExecuteA(NULL, "open", "https://www.patreon.com/redfane/membership", NULL, NULL, SW_SHOWNORMAL);
    if (ImGui::IsItemHovered())
    {
        ImGui::SetTooltip(config.localizationManager.getString("appreciate_donations").c_str());
    }

    ImGui::Spacing();

    std::vector<char> devStringVector;
    
    std::string devStr = config.localizationManager.getString("made_by");
    devStringVector.assign(devStr.begin(), devStr.end());
    devStringVector.push_back('\0');
    const char* devString = devStringVector.data();

    float textWidth = ImGui::CalcTextSize(devString).x;
    float centerTextPosX = (ImGui::GetWindowContentRegionMax().x - textWidth) / 2;

    // ===========================================================================

    //Discord links are updated on our GitHub!

    ImGui::SetCursorPosX(centerTextPosX);
    ImGui::Text(devString);
}



