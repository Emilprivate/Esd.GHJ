#pragma once

bool show = false;
bool cheats[] = { false, false, false, false, false, false, false, false, false };

#pragma region ImGuiMenu
void RenderMenu(bool *show)
{
    ImGui::Begin("EsdPZ | Alpha-Prototype 3", show,
        ImGuiWindowFlags_NoSavedSettings |
        ImGuiWindowFlags_NoCollapse |
        ImGuiWindowFlags_NoResize);

    if (ImGui::Checkbox("God Mode", &cheats[0]))
        CallVoidMethodOnPlayer("setGodMod", cheats[0]);

    if (ImGui::Checkbox("Unlimited Carry", &cheats[1]))
        CallVoidMethodOnPlayer("setUnlimitedCarry", cheats[1]);

    if (ImGui::Checkbox("Unlimited Endurance", &cheats[2]))
        CallVoidMethodOnPlayer("setUnlimitedEndurance", cheats[2]);

    if (ImGui::Checkbox("Build Cheat", &cheats[3]))
        CallVoidMethodOnPlayer("setBuildCheat", cheats[3]);

    if (ImGui::Checkbox("Farming Cheat", &cheats[4]))
        CallVoidMethodOnPlayer("setFarmingCheat", cheats[4]);

    if (ImGui::Checkbox("Health Cheat", &cheats[5]))
        CallVoidMethodOnPlayer("setHealthCheat", cheats[5]);

    if (ImGui::Checkbox("Mechanics Cheat", &cheats[6]))
        CallVoidMethodOnPlayer("setMechanicsCheat", cheats[6]);

    if (ImGui::Checkbox("Movables Cheat", &cheats[7]))
        CallVoidMethodOnPlayer("setMovablesCheat", cheats[7]);

    if (ImGui::Checkbox("Timed Action Instant Cheat", &cheats[8]))
        CallVoidMethodOnPlayer("setTimedActionInstantCheat", cheats[8]);

    //Add spacing to separate the checkboxes and buttons
    ImGui::Spacing();
    ImGui::Separator();
    ImGui::Spacing();

    // Calculate the width for the buttons to fill the entire menu horizontally
    float buttonWidth = ImGui::GetContentRegionAvailWidth() / 2 - ImGui::GetStyle().ItemSpacing.x;

    // Center-align the buttons
    ImGui::SetCursorPosX((ImGui::GetWindowContentRegionMax().x - buttonWidth) / 2);
    if (ImGui::Button("UC Thread", ImVec2(buttonWidth, 0)))
        ShellExecuteA(NULL, "open", "https://www.unknowncheats.me/forum/other-mmorpg-and-strategy/584072-project-zomboid-cheat-esdpz.html", NULL, NULL, SW_SHOWNORMAL);

    ImGui::SetCursorPosX((ImGui::GetWindowContentRegionMax().x - buttonWidth) / 2);
    if (ImGui::Button("Discord", ImVec2(buttonWidth, 0)))
        ShellExecuteA(NULL, "open", "https://discord.gg/X8dQXt9b9k", NULL, NULL, SW_SHOWNORMAL);

    //Add spacing to separate the buttons and the label
    ImGui::Spacing();

    //Center-align the label
    ImGui::SetCursorPosX((ImGui::GetWindowContentRegionMax().x - ImGui::CalcTextSize("Made by Emil").x) / 2);
    ImGui::Text("Made by Emil");

    ImGui::End();
}
#pragma endregion