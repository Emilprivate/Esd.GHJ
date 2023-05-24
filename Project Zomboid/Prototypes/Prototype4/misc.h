#pragma once

void RenderMiscTab(bool* cheats)
{
    if (ImGui::Checkbox("Build Cheat", &cheats[3]))
    {
        CallVoidMethodOnPlayer("setBuildCheat", cheats[3]);
    }
    if (ImGui::IsItemHovered())
    {
        ImGui::SetTooltip("Enable build cheat");
    }

    if (ImGui::Checkbox("Farming Cheat", &cheats[4]))
    {
        CallVoidMethodOnPlayer("setFarmingCheat", cheats[4]);
    }
    if (ImGui::IsItemHovered())
    {
        ImGui::SetTooltip("Enable farming cheat");
    }

    if (ImGui::Checkbox("Health Cheat", &cheats[5]))
    {
        CallVoidMethodOnPlayer("setHealthCheat", cheats[5]);
    }
    if (ImGui::IsItemHovered())
    {
        ImGui::SetTooltip("Enable health cheat");
    }

    if (ImGui::Checkbox("Mechanics Cheat", &cheats[6]))
    {
        CallVoidMethodOnPlayer("setMechanicsCheat", cheats[6]);
    }
    if (ImGui::IsItemHovered())
    {
        ImGui::SetTooltip("Enable mechanics cheat");
    }

    if (ImGui::Checkbox("Movables Cheat", &cheats[7]))
    {
        CallVoidMethodOnPlayer("setMovablesCheat", cheats[7]);
    }
    if (ImGui::IsItemHovered())
    {
        ImGui::SetTooltip("Enable movables cheat");
    }
}

