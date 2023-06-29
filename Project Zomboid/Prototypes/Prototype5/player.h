#pragma once

void RenderCheckboxWithTooltip(const char* checkbox_text, const char* checkbox_command, bool& checkbox_value, const char* tooltip_text)
{
    if (ImGui::Checkbox(checkbox_text, &checkbox_value))
    {
        CallVoidMethodOnPlayer(checkbox_command, checkbox_value);
    }

    if (ImGui::IsItemHovered())
    {
        ImGui::SetTooltip(tooltip_text);
    }
}

void RenderPlayerTab()
{
    ImGui::Columns(2, "playerTabColumns", false);

	ImGui::BeginChild("playerTabChild", ImVec2(0, 0), true);

    ImGui::Text("Player Modifications");
    ImGui::Separator();
    RenderCheckboxWithTooltip("God Mode", "setGodMod", config.boolSettings[1], "Enables god mode for the player");
    RenderCheckboxWithTooltip("No Clip", "setNoClip", config.boolSettings[2], "Allows the player to pass through objects");
    RenderCheckboxWithTooltip("Invincible", "setInvincible", config.boolSettings[3], "Makes the player invincible");
    RenderCheckboxWithTooltip("Invisible", "setInvisible", config.boolSettings[4], "Makes the player invisible");
    RenderCheckboxWithTooltip("Zombies Dont Attack", "setZombiesDontAttack", config.boolSettings[21], "Zombies Wont Attack You");
    RenderCheckboxWithTooltip("Ghost Mode", "setGhostMode", config.boolSettings[5], "Enables ghost mode for the player");
    RenderCheckboxWithTooltip("Unlimited Carry", "setUnlimitedCarry", config.boolSettings[6], "Allows the player to carry unlimited items");
    RenderCheckboxWithTooltip("Unlimited Endurance", "setUnlimitedEndurance", config.boolSettings[7], "Gives the player unlimited endurance");
    ImGui::Spacing();

    ImGui::EndChild();

    ImGui::NextColumn();

	ImGui::BeginChild("playerTabChild3", ImVec2(0, 0), true);

    ImGui::Text("Player Actions");
    ImGui::Separator();
    if (ImGui::Button("Suicide"))
    {
        Suicide();
    }
    if (ImGui::IsItemHovered())
    {
        ImGui::SetTooltip("KYS lol - Only works on multiplayer servers");
    }
    ImGui::Spacing();

    ImGui::Text("Player Delays");
    ImGui::Separator();
    ImGui::InputFloat("##RecoilDelay", &config.floatSettings[0]);
    if (ImGui::Button(config.localizationManager.getString("no_recoil_delay").c_str()))
    {
        SetRecoilDelay(config.floatSettings[0]);
    }
    ImGui::InputFloat("##MeleeDelay", &config.floatSettings[1]);
    if (ImGui::Button(config.localizationManager.getString("no_melee_delay").c_str()))
    {
        SetMeleeDelay(config.floatSettings[1]);
    }

    ImGui::Spacing();

    ImGui::Text("Ammo and Weapons");
    
    ImGui::Separator();

    ImGui::Checkbox("Auto Reload Ammo", &config.boolSettings[20]);

    if (ImGui::IsItemHovered())
    {
        ImGui::SetTooltip("Automatically reloads the weapon when ammo is shot");
    }
    
    if (ImGui::Button("Manually Refill Magazine"))
    {
        LegitMaxAmmo();
    }

    if (ImGui::IsItemHovered())
    {
        ImGui::SetTooltip("Manually refills the magazine to its max capacity");
    }
    
    ImGui::InputInt("##Rage Ammo Count", &config.intSettings[0]);
    if (ImGui::Button("Rage Max Ammo")) {
        RageMaxAmmo(config.intSettings[0]);
    }

    if (ImGui::IsItemHovered())
    {
		ImGui::SetTooltip("Sets the max ammo for the weapon to the specified amount");
    }

    if (ImGui::Button("Manually Repair Hand Item"))
    {
        RepairHandItem();
    }

	if (ImGui::IsItemHovered())
	{
		ImGui::SetTooltip("Manually repairs the item in the player's hand");
	}
    
    ImGui::EndChild();

    ImGui::Columns(1);
}

