#pragma once

bool IsValidField(const char* field) {
    const std::string fields[] = {
        "Agility",
        "Aiming",
        "Axe",
        "Blacksmith",
        "Blunt",
        "Combat",
        "Cooking",
        "Crafting",
        "Doctor",
        "Electricity",
        "Farming",
        "Firearm",
        "Fishing",
        "Fitness",
        "Lightfoot",
        "LongBlade",
        "Maintenance",
        "MAX",
        "Mechanics",
        "Melee",
        "Melting",
        "MetalWelding",
        "Nimble",
        "None",
        "Passiv",
        "PlantScavenging",
        "Reloading",
        "SmallBlade",
        "SmallBlunt",
        "Sneak",
        "Spear",
        "Sprinting",
        "Strength",
        "Survivalist",
        "Tailoring",
        "Trapping",
        "Woodwork"
    };

    for (const std::string& validField : fields) {
        if (validField == field) {
            return true;
        }
    }

    return false;
}

void RenderCheckboxWithTooltipAndValidityCheck(const char* checkbox_text, const char* command, bool& checkbox_value, const char* tooltip_text)
{
    if (ImGui::Checkbox(checkbox_text, &checkbox_value))
    {
        CallVoidMethodOnPlayer(command, checkbox_value);
    }

    if (ImGui::IsItemHovered())
    {
        ImGui::SetTooltip(tooltip_text);
    }
}

void UpgradeAllPerks(bool direction) {
    const char* perkFieldList[] = {
        "Fitness", "Strength", "Sprinting", "Lightfoot", "Nimble", "Sneak", "Axe", "Blunt",
        "SmallBlunt", "LongBlade", "SmallBlade", "Spear", "Maintenance", "Woodwork", "Cooking",
        "Farming", "Doctor", "Electricity", "MetalWelding", "Mechanics", "Tailoring", "Aiming",
        "Reloading", "Fishing", "Trapping", "PlantScavenging"
    };
    bool checkbox_value = true; 
    for (int n = 0; n < IM_ARRAYSIZE(perkFieldList); n++)
    {
        const char* perk = perkFieldList[n];
        if (IsValidField(perk)) {
            if (direction)
            {
                LevelUpPerks(perk);
            }
            else
            {
                LosePerks(perk);
            }
        }
        else {
            std::cout << "[!] Perk field not found: " << perk << "\n";
        }
    }
}


void RenderSkillsTab()
{
    ImGui::Columns(2, "skillsTabColumns", false);

    ImGui::BeginChild("skillsTabChild", ImVec2(0, 0), true);

    ImGui::Text(config.localizationManager.getString("add_level_to_perks").c_str());
    ImGui::Separator();

    const char* perkFieldList[] = {
        "Fitness", "Strength", "Sprinting", "Lightfoot", "Nimble", "Sneak", "Axe", "Blunt",
        "SmallBlunt", "LongBlade", "SmallBlade", "Spear", "Maintenance", "Woodwork", "Cooking",
        "Farming", "Doctor", "Electricity", "MetalWelding", "Mechanics", "Tailoring", "Aiming",
        "Reloading", "Fishing", "Trapping", "PlantScavenging"
    };

    static int currentIndex = 0;
    const char* selectedPerk = perkFieldList[currentIndex];

    static ImGuiComboFlags comboFlag = 0;
    if (ImGui::BeginCombo(config.localizationManager.getString("perk_list").c_str(), selectedPerk, comboFlag))
    {
        for (int n = 0; n < IM_ARRAYSIZE(perkFieldList); n++)
        {
            const bool is_selected = (currentIndex == n);
            if (ImGui::Selectable(perkFieldList[n], is_selected))
                currentIndex = n;

            if (is_selected)
                ImGui::SetItemDefaultFocus();
        }

        ImGui::EndCombo();
    }

    if (ImGui::ArrowButton("##left", ImGuiDir_Left))
    {
        if (IsValidField(selectedPerk))
        {
            LosePerks(selectedPerk);
        }
        else
        {
            std::cout << "[!] Perk field not found!\n";
        }
    }

    ImGui::SameLine();
    if (ImGui::ArrowButton("##right", ImGuiDir_Right))
    {
        if (IsValidField(selectedPerk))
        {
            LevelUpPerks(selectedPerk);
        }
        else
        {
            std::cout << "[!] Perk field not found!\n";
        }
    }

    ImGui::Text("Upgrade All Perks");

    if (ImGui::ArrowButton("##left-ua", ImGuiDir_Left))
    {
        UpgradeAllPerks(false);
    }

    ImGui::SameLine();
    if (ImGui::ArrowButton("##right-ua", ImGuiDir_Right))
    {
        UpgradeAllPerks(true);
    }


    ImGui::EndChild();

    ImGui::NextColumn();

    ImGui::BeginChild("skillsTabChild2", ImVec2(0, 0), true);

    ImGui::Text("Cheat Options");
    ImGui::Separator();

	RenderCheckboxWithTooltipAndValidityCheck(config.localizationManager.getString("build_cheat").c_str(), "setBuildCheat", config.boolSettings[10], config.localizationManager.getString("enable_build_cheat").c_str());
	RenderCheckboxWithTooltipAndValidityCheck(config.localizationManager.getString("farming_cheat").c_str(), "setFarmingCheat", config.boolSettings[11], config.localizationManager.getString("enable_farming_cheat").c_str());
	RenderCheckboxWithTooltipAndValidityCheck(config.localizationManager.getString("health_cheat").c_str(), "setHealthCheat", config.boolSettings[12], config.localizationManager.getString("enable_health_cheat").c_str());
	RenderCheckboxWithTooltipAndValidityCheck(config.localizationManager.getString("mechanics_cheat").c_str(), "setMechanicsCheat", config.boolSettings[13], config.localizationManager.getString("enable_mechanics_cheat").c_str());
	RenderCheckboxWithTooltipAndValidityCheck(config.localizationManager.getString("movables_cheat").c_str(), "setMovablesCheat", config.boolSettings[14], config.localizationManager.getString("enable_movables_cheat").c_str());

    ImGui::Spacing();

    ImGui::EndChild();

    ImGui::Columns(1);
}
