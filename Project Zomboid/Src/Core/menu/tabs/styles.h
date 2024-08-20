#pragma once

void RenderStyleTab()
{
    ImGuiStyle& style = ImGui::GetStyle();

    for (int i = 0; i < ImGuiCol_COUNT; ++i)
    {
        ImGui::ColorEdit4(ImGui::GetStyleColorName(i), (float*)&style.Colors[i]);
    }
}