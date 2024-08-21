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

    ImGui::Text(config.localizationManager.getString("player_modifications").c_str());
    ImGui::Separator();
    RenderCheckboxWithTooltip(config.localizationManager.getString("god_mode").c_str(), "setGodMod", config.boolSettings[1], config.localizationManager.getString("enable_god_mode").c_str());
    RenderCheckboxWithTooltip(config.localizationManager.getString("no_clip").c_str(), "setNoClip", config.boolSettings[2], config.localizationManager.getString("toggle_no_clip").c_str());
    RenderCheckboxWithTooltip(config.localizationManager.getString("invincible").c_str(), "setInvincible", config.boolSettings[3], config.localizationManager.getString("make_player_invincible").c_str());
    RenderCheckboxWithTooltip(config.localizationManager.getString("invisible").c_str(), "setInvisible", config.boolSettings[4], config.localizationManager.getString("make_player_invisible").c_str());
    RenderCheckboxWithTooltip(config.localizationManager.getString("zombies_dont_attack").c_str(), "setZombiesDontAttack", config.boolSettings[21], config.localizationManager.getString("zombies_dont_attack_tooltip").c_str());
    RenderCheckboxWithTooltip(config.localizationManager.getString("ghost_mode").c_str(), "setGhostMode", config.boolSettings[5], config.localizationManager.getString("enable_ghost_mode").c_str());
    RenderCheckboxWithTooltip(config.localizationManager.getString("unlimited_carry").c_str(), "setUnlimitedCarry", config.boolSettings[6], config.localizationManager.getString("allow_unlimited_carry").c_str());
    RenderCheckboxWithTooltip(config.localizationManager.getString("unlimited_endurance").c_str(), "setUnlimitedEndurance", config.boolSettings[7], config.localizationManager.getString("give_unlimited_endurance").c_str());
    ImGui::Spacing();

    ImGui::EndChild();

    ImGui::NextColumn();

	ImGui::BeginChild("playerTabChild3", ImVec2(0, 0), true);

    ImGui::Text(config.localizationManager.getString("player_actions").c_str());
    ImGui::Separator();
    if (ImGui::Button(config.localizationManager.getString("suicide").c_str()))
    {
        Suicide();
    }
    if (ImGui::IsItemHovered())
    {
        ImGui::SetTooltip(config.localizationManager.getString("only_multiplayer").c_str());
    }
    ImGui::Spacing();

    ImGui::Text(config.localizationManager.getString("player_delays").c_str());
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

    ImGui::Text(config.localizationManager.getString("ammo_and_weapons").c_str());
    
    ImGui::Separator();

    ImGui::Checkbox(config.localizationManager.getString("auto_reload_ammo").c_str(), &config.boolSettings[20]);

    if (ImGui::IsItemHovered())
    {
        ImGui::SetTooltip(config.localizationManager.getString("auto_reload").c_str());
    }
    
    if (ImGui::Button(config.localizationManager.getString("manually_refill_magazine").c_str()))
    {
        LegitMaxAmmo();
    }

    if (ImGui::IsItemHovered())
    {
        ImGui::SetTooltip(config.localizationManager.getString("manual_refill_magazine").c_str());
    }
    
    ImGui::InputInt("##Rage Ammo Count", &config.intSettings[0]);
    if (ImGui::Button(config.localizationManager.getString("rage_max_ammo").c_str())) {
        RageMaxAmmo(config.intSettings[0]);
    }

    if (ImGui::IsItemHovered())
    {
		ImGui::SetTooltip(config.localizationManager.getString("set_max_ammo").c_str());
    }

    if (ImGui::Button(config.localizationManager.getString("manually_repair_hand_item").c_str()))
    {
        RepairHandItem();
    }

	if (ImGui::IsItemHovered())
	{
		ImGui::SetTooltip(config.localizationManager.getString("manual_repair_item").c_str());
	}
    
    ImGui::EndChild();

    ImGui::Columns(1);
}

