#pragma once

void RenderPlayerTab(bool* cheats)
{
    ImGui::Columns(2, "playerTabColumns", false);

    if (ImGui::Checkbox("God Mode", &cheats[0]))
    {
        CallVoidMethodOnPlayer("setGodMod", cheats[0]);
    }
    if (ImGui::IsItemHovered())
    {
        ImGui::SetTooltip("Enable god mode for the player");
    }

    if (ImGui::Checkbox("No Clip", &cheats[11]))
    {
        CallVoidMethodOnPlayer("setNoClip", cheats[11]);
    }
    if (ImGui::IsItemHovered())
    {
        ImGui::SetTooltip("Toggle no clip mode for the player");
    }

    if (ImGui::Checkbox("Invincible", &cheats[12]))
    {
        CallVoidMethodOnPlayer("setInvincible", cheats[12]);
    }
    if (ImGui::IsItemHovered())
    {
        ImGui::SetTooltip("Make the player invincible");
    }

    if (ImGui::Checkbox("Invisible", &cheats[9]))
    {
        CallVoidMethodOnPlayer("setInvisible", cheats[9]);
    }
    if (ImGui::IsItemHovered())
    {
        ImGui::SetTooltip("Make the player invisible");
    }

    if (ImGui::Checkbox("Ghost Mode", &cheats[10]))
    {
        CallVoidMethodOnPlayer("setGhostMode", cheats[10]);
    }
    if (ImGui::IsItemHovered())
    {
        ImGui::SetTooltip("Enable ghost mode for the player");
    }

    if (ImGui::Checkbox("Unlimited Ammo", &cheats[13]))
    {
        CallVoidMethodOnPlayer("setUnlimitedAmmo", cheats[13]);
    }
    if (ImGui::IsItemHovered())
    {
        ImGui::SetTooltip("Give the player unlimited ammunition");
    }

    ImGui::NextColumn();

    if (ImGui::Checkbox("Unlimited Carry", &cheats[1]))
    {
        CallVoidMethodOnPlayer("setUnlimitedCarry", cheats[1]);
    }
    if (ImGui::IsItemHovered())
    {
        ImGui::SetTooltip("Allow the player to carry unlimited items");
    }

    if (ImGui::Checkbox("Unlimited Endurance", &cheats[2]))
    {
        CallVoidMethodOnPlayer("setUnlimitedEndurance", cheats[2]);
    }
    if (ImGui::IsItemHovered())
    {
        ImGui::SetTooltip("Give the player unlimited endurance");
    }

    /*if (ImGui::Checkbox("Know All Recipes", &cheats[14]))
        CallVoidMethodOnPlayer("setKnowAllRecipes", cheats[14]);*/

    /*if (ImGui::Checkbox("Fast Move", &cheats[15]))
    CallVoidMethodOnPlayer("setFastMove", cheats[12]);*/

    ImGui::Columns(1);
}





