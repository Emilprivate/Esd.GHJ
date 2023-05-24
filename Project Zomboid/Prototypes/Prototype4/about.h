#pragma once

void RenderAboutTab()
{
    float buttonWidth = ImGui::GetContentRegionAvailWidth() / 2 - ImGui::GetStyle().ItemSpacing.x;
    float centerPosX = (ImGui::GetWindowContentRegionMax().x - buttonWidth) / 2;

    float buttonHeight = ImGui::GetFontSize() + ImGui::GetStyle().FramePadding.y * 2;
    float centerPosY = (ImGui::GetWindowContentRegionMax().y + ImGui::GetWindowContentRegionMin().y - buttonHeight) / 3;

    ImGui::SetCursorPosX(centerPosX);
    ImGui::SetCursorPosY(centerPosY);
    if (ImGui::Button("UC Thread", ImVec2(buttonWidth, buttonHeight)))
        ShellExecuteA(NULL, "open", "https://www.unknowncheats.me/forum/other-mmorpg-and-strategy/584072-project-zomboid-cheat-esdpz.html", NULL, NULL, SW_SHOWNORMAL);

    ImGui::SetCursorPosX(centerPosX);
    if (ImGui::Button("Discord", ImVec2(buttonWidth, buttonHeight)))
        ShellExecuteA(NULL, "open", "https://discord.gg/X8dQXt9b9k", NULL, NULL, SW_SHOWNORMAL);

    ImGui::SetCursorPosX(centerPosX);
    if (ImGui::Button("GitHub", ImVec2(buttonWidth, buttonHeight)))
        ShellExecuteA(NULL, "open", "https://github.com/Emilprivate/Esd.GHJ/tree/main/Project%20Zomboid", NULL, NULL, SW_SHOWNORMAL);

    ImGui::Spacing();

    float textWidth = ImGui::CalcTextSize("Made by Emil").x;
    float centerTextPosX = (ImGui::GetWindowContentRegionMax().x - textWidth) / 2;

    ImGui::SetCursorPosX(centerTextPosX);
    ImGui::Text("Made by Emil");
}


