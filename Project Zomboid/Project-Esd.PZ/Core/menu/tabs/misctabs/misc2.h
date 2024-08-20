#pragma once

void RenderMisc2Tab()
{
    if (ImGui::Checkbox(config.localizationManager.getString("start_reading").c_str(), &config.boolSettings[16]))
    {
        CallVoidMethodOnPlayer("setReading", config.boolSettings[16]);
    }
    if (ImGui::IsItemHovered())
    {
        ImGui::SetTooltip(config.localizationManager.getString("start_reading_tooltip").c_str());
    }

    if (ImGui::Checkbox(config.localizationManager.getString("show_admin_tag").c_str(), &config.boolSettings[17]))
    {
        CallVoidMethodOnPlayer("setShowAdminTag", config.boolSettings[17]);
    }
    if (ImGui::IsItemHovered())
    {
        ImGui::SetTooltip(config.localizationManager.getString("show_admin_tag_tooltip").c_str());
    }

    if (ImGui::Checkbox(config.localizationManager.getString("convert_to_sandwich_maker").c_str(), &config.boolSettings[18]))
    {
        CallVoidMethodOnPlayer("setFemale", config.boolSettings[18]);
    }
    if (ImGui::IsItemHovered())
    {
        ImGui::SetTooltip(config.localizationManager.getString("convert_to_sandwich_maker_tooltip").c_str());
    }

    if (ImGui::Checkbox(config.localizationManager.getString("set_ranged_weapon_empty").c_str(), &config.boolSettings[19]))
    {
        CallVoidMethodOnPlayer("setRangedWeaponEmpty", config.boolSettings[19]);
    }
    if (ImGui::IsItemHovered())
    {
        ImGui::SetTooltip(config.localizationManager.getString("set_ranged_weapon_empty_tooltip").c_str());
    }
}
