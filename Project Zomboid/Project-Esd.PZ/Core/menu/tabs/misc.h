#pragma once

void RenderMiscTab()
{
    ImGui::Columns(2, "miscTabColumns", false);

    ImGui::BeginChild("miscTabChild1", ImVec2(0, 0), true);
    ImGui::Text(config.localizationManager.getString("misc_1").c_str());
    ImGui::Separator();
    RenderMisc1Tab();
    ImGui::EndChild();

    ImGui::NextColumn();

    ImGui::BeginChild("miscTabChild2", ImVec2(0, 0), true);
    ImGui::Text(config.localizationManager.getString("misc_2").c_str());
    ImGui::Separator();
    RenderMisc2Tab();
    ImGui::EndChild();

    ImGui::Columns(1);
}



