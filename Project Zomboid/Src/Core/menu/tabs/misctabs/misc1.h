#pragma once

void RenderMisc1Tab()
{
    if (ImGui::Checkbox(config.localizationManager.getString("timed_action_instant_cheat").c_str(), &config.boolSettings[15]))
    {
        CallVoidMethodOnPlayer("setTimedActionInstantCheat", config.boolSettings[15]);
    }
    if (ImGui::IsItemHovered())
    {
        ImGui::SetTooltip(config.localizationManager.getString("timed_action_instant_cheat_tooltip").c_str());
    }
}

