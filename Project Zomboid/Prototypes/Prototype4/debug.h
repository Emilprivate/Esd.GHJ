#pragma once

void RenderDebugTab(bool* cheats)
{
    if (ImGui::Checkbox("Timed Action Instant Cheat", &cheats[8]))
    {
        CallVoidMethodOnPlayer("setTimedActionInstantCheat", cheats[8]);
    }
    if (ImGui::IsItemHovered())
    {
        ImGui::SetTooltip("Enable instant completion of timed actions");
    }

    if (ImGui::Checkbox("Convert To Sandwich Maker", &cheats[16]))
    {
        CallVoidMethodOnPlayer("setFemale", cheats[16]);
    }
    if (ImGui::IsItemHovered())
    {
        ImGui::SetTooltip("Convert the player character to a sandwich maker");
    }

    if (ImGui::Checkbox("Start Reading", &cheats[17]))
    {
        CallVoidMethodOnPlayer("setReading", cheats[17]);
    }
    if (ImGui::IsItemHovered())
    {
        ImGui::SetTooltip("Start reading a book");
    }

    if (ImGui::Checkbox("Show Admin Tag", &cheats[18]))
    {
        CallVoidMethodOnPlayer("setShowAdminTag", cheats[18]);
    }
    if (ImGui::IsItemHovered())
    {
        ImGui::SetTooltip("Display an admin tag for the player");
    }

    if (ImGui::Checkbox("Set Ranged Weapon Empty", &cheats[19]))
    {
        CallVoidMethodOnPlayer("setRangedWeaponEmpty", cheats[19]);
    }
    if (ImGui::IsItemHovered())
    {
        ImGui::SetTooltip("Set the player's ranged weapon to empty");
    }
}

