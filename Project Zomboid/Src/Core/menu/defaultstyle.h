#pragma once

#pragma region ImGuiStyle
void SetImGuiStyle()
{
    ImGuiStyle& style = ImGui::GetStyle();

    // Adjust window padding, rounding, and spacing
    style.WindowPadding = ImVec2(15, 15);
    style.WindowRounding = 5.0f;
    style.FramePadding = ImVec2(6, 6);
    style.FrameRounding = 4.0f;
    style.ItemSpacing = ImVec2(10, 8);
    style.ItemInnerSpacing = ImVec2(8, 6);
    style.IndentSpacing = 25.0f;

    // Adjust scrollbar size and rounding
    style.ScrollbarSize = 15.0f;
    style.ScrollbarRounding = 9.0f;

    // Adjust grab size and rounding
    style.GrabMinSize = 5.0f;
    style.GrabRounding = 3.0f;

    // Adjust frame border size
    style.FrameBorderSize = 0.5f;

    // Set colors for a modern and unique UI (darker version)
    ImVec4 transparent(0.0f, 0.0f, 0.0f, 0.5f);
    ImVec4 white(1.0f, 1.0f, 1.0f, 1.0f);
    ImVec4 grey(0.2f, 0.2f, 0.2f, 1.0f);
    ImVec4 darkGrey(0.15f, 0.15f, 0.15f, 1.0f);
    ImVec4 black(0.0f, 0.0f, 0.0f, 1.0f);

    style.Colors[ImGuiCol_Text] = white;
    style.Colors[ImGuiCol_TextDisabled] = grey;
    style.Colors[ImGuiCol_WindowBg] = transparent;
    style.Colors[ImGuiCol_ChildBg] = darkGrey;
    style.Colors[ImGuiCol_PopupBg] = black;
    style.Colors[ImGuiCol_Border] = transparent;
    style.Colors[ImGuiCol_BorderShadow] = transparent;
    style.Colors[ImGuiCol_FrameBg] = grey;
    style.Colors[ImGuiCol_FrameBgHovered] = ImVec4(0.25f, 0.25f, 0.25f, 0.40f);
    style.Colors[ImGuiCol_FrameBgActive] = ImVec4(0.35f, 0.35f, 0.35f, 0.67f);
    style.Colors[ImGuiCol_TitleBg] = darkGrey;
    style.Colors[ImGuiCol_TitleBgActive] = darkGrey;
    style.Colors[ImGuiCol_TitleBgCollapsed] = transparent;
    style.Colors[ImGuiCol_MenuBarBg] = darkGrey;
    style.Colors[ImGuiCol_ScrollbarBg] = darkGrey;
    style.Colors[ImGuiCol_ScrollbarGrab] = grey;
    style.Colors[ImGuiCol_ScrollbarGrabHovered] = ImVec4(0.3f, 0.3f, 0.3f, 1.0f);
    style.Colors[ImGuiCol_ScrollbarGrabActive] = ImVec4(0.4f, 0.4f, 0.4f, 1.0f);
    style.Colors[ImGuiCol_CheckMark] = white;
    style.Colors[ImGuiCol_SliderGrab] = grey;
    style.Colors[ImGuiCol_SliderGrabActive] = ImVec4(0.4f, 0.4f, 0.4f, 1.0f);
    style.Colors[ImGuiCol_Button] = grey;
    style.Colors[ImGuiCol_ButtonHovered] = ImVec4(0.25f, 0.25f, 0.25f, 1.0f);
    style.Colors[ImGuiCol_ButtonActive] = ImVec4(0.35f, 0.35f, 0.35f, 1.0f);
    style.Colors[ImGuiCol_Tab] = darkGrey;
    style.Colors[ImGuiCol_TabHovered] = ImVec4(0.25f, 0.25f, 0.25f, 0.80f);
    style.Colors[ImGuiCol_TabActive] = ImVec4(0.2f, 0.2f, 0.2f, 1.0f);
    style.Colors[ImGuiCol_TabUnfocused] = darkGrey;
    style.Colors[ImGuiCol_TabUnfocusedActive] = ImVec4(0.15f, 0.15f, 0.15f, 1.0f);
}

void SetImGuiBlueRetroStyle()
{
    ImGuiStyle& style = ImGui::GetStyle();

    // Adjust window padding, rounding, and spacing
    style.WindowPadding = ImVec2(10, 10);
    style.WindowRounding = 4.0f;
    style.FramePadding = ImVec2(5, 5);
    style.FrameRounding = 2.0f;
    style.ItemSpacing = ImVec2(12, 8);
    style.ItemInnerSpacing = ImVec2(8, 6);
    style.IndentSpacing = 24.0f;

    // Adjust scrollbar size and rounding
    style.ScrollbarSize = 18.0f;
    style.ScrollbarRounding = 8.0f;

    // Adjust grab size and rounding
    style.GrabMinSize = 5.0f;
    style.GrabRounding = 2.0f;

    // Adjust frame border size
    style.FrameBorderSize = 1.0f;

    // Set colors for a forest dawn inspired UI
    ImVec4 morningBlue(0.6f, 0.8f, 1.0f, 1.0f);
    ImVec4 lightBrown(0.8f, 0.7f, 0.6f, 1.0f);
    ImVec4 softGreen(0.6f, 0.8f, 0.6f, 1.0f);
    ImVec4 deepGreen(0.2f, 0.4f, 0.2f, 1.0f);
    ImVec4 black(0.0f, 0.0f, 0.0f, 1.0f);

    style.Colors[ImGuiCol_Text] = black;
    style.Colors[ImGuiCol_TextDisabled] = deepGreen;
    style.Colors[ImGuiCol_WindowBg] = morningBlue;
    style.Colors[ImGuiCol_ChildBg] = softGreen;
    style.Colors[ImGuiCol_PopupBg] = lightBrown;
    style.Colors[ImGuiCol_Border] = black;
    style.Colors[ImGuiCol_BorderShadow] = deepGreen;
    style.Colors[ImGuiCol_FrameBg] = softGreen;
    style.Colors[ImGuiCol_FrameBgHovered] = ImVec4(0.7f, 0.9f, 0.7f, 1.0f);
    style.Colors[ImGuiCol_FrameBgActive] = ImVec4(0.8f, 1.0f, 0.8f, 1.0f);
    style.Colors[ImGuiCol_TitleBg] = morningBlue;
    style.Colors[ImGuiCol_TitleBgActive] = morningBlue;
    style.Colors[ImGuiCol_TitleBgCollapsed] = morningBlue;
    style.Colors[ImGuiCol_MenuBarBg] = softGreen;
    style.Colors[ImGuiCol_ScrollbarBg] = morningBlue;
    style.Colors[ImGuiCol_ScrollbarGrab] = lightBrown;
    style.Colors[ImGuiCol_ScrollbarGrabHovered] = deepGreen;
    style.Colors[ImGuiCol_ScrollbarGrabActive] = black;
    style.Colors[ImGuiCol_CheckMark] = deepGreen;
    style.Colors[ImGuiCol_SliderGrab] = lightBrown;
    style.Colors[ImGuiCol_SliderGrabActive] = black;
    style.Colors[ImGuiCol_Button] = softGreen;
    style.Colors[ImGuiCol_ButtonHovered] = lightBrown;
    style.Colors[ImGuiCol_ButtonActive] = deepGreen;
    style.Colors[ImGuiCol_Tab] = morningBlue;
    style.Colors[ImGuiCol_TabHovered] = softGreen;
    style.Colors[ImGuiCol_TabActive] = lightBrown;
    style.Colors[ImGuiCol_TabUnfocused] = morningBlue;
    style.Colors[ImGuiCol_TabUnfocusedActive] = softGreen;
}
void SetImGuiPurpleRetroStyle()
{
    ImGuiStyle& style = ImGui::GetStyle();

    // Adjust window padding, rounding, and spacing
    style.WindowPadding = ImVec2(12, 12);
    style.WindowRounding = 5.0f;
    style.FramePadding = ImVec2(5, 5);
    style.FrameRounding = 3.0f;
    style.ItemSpacing = ImVec2(12, 8);
    style.ItemInnerSpacing = ImVec2(8, 4);
    style.IndentSpacing = 20.0f;

    // Adjust scrollbar size and rounding
    style.ScrollbarSize = 20.0f;
    style.ScrollbarRounding = 10.0f;

    // Adjust grab size and rounding
    style.GrabMinSize = 5.0f;
    style.GrabRounding = 2.0f;

    // Adjust frame border size
    style.FrameBorderSize = 1.0f;

    // Set colors for a futuristic cyberpunk UI
    ImVec4 midnightBlue(0.1f, 0.1f, 0.35f, 1.0f);
    ImVec4 neonPurple(0.7f, 0.0f, 1.0f, 1.0f);
    ImVec4 deepViolet(0.3f, 0.0f, 0.5f, 1.0f);
    ImVec4 hotPink(1.0f, 0.0f, 0.5f, 1.0f);
    ImVec4 black(0.0f, 0.0f, 0.0f, 1.0f);

    style.Colors[ImGuiCol_Text] = neonPurple;
    style.Colors[ImGuiCol_TextDisabled] = deepViolet;
    style.Colors[ImGuiCol_WindowBg] = midnightBlue;
    style.Colors[ImGuiCol_ChildBg] = deepViolet;
    style.Colors[ImGuiCol_PopupBg] = black;
    style.Colors[ImGuiCol_Border] = hotPink;
    style.Colors[ImGuiCol_BorderShadow] = black;
    style.Colors[ImGuiCol_FrameBg] = deepViolet;
    style.Colors[ImGuiCol_FrameBgHovered] = ImVec4(0.5f, 0.0f, 0.7f, 1.0f);
    style.Colors[ImGuiCol_FrameBgActive] = hotPink;
    style.Colors[ImGuiCol_TitleBg] = midnightBlue;
    style.Colors[ImGuiCol_TitleBgActive] = deepViolet;
    style.Colors[ImGuiCol_TitleBgCollapsed] = midnightBlue;
    style.Colors[ImGuiCol_MenuBarBg] = deepViolet;
    style.Colors[ImGuiCol_ScrollbarBg] = midnightBlue;
    style.Colors[ImGuiCol_ScrollbarGrab] = hotPink;
    style.Colors[ImGuiCol_ScrollbarGrabHovered] = neonPurple;
    style.Colors[ImGuiCol_ScrollbarGrabActive] = hotPink;
    style.Colors[ImGuiCol_CheckMark] = neonPurple;
    style.Colors[ImGuiCol_SliderGrab] = neonPurple;
    style.Colors[ImGuiCol_SliderGrabActive] = hotPink;
    style.Colors[ImGuiCol_Button] = deepViolet;
    style.Colors[ImGuiCol_ButtonHovered] = neonPurple;
    style.Colors[ImGuiCol_ButtonActive] = hotPink;
    style.Colors[ImGuiCol_Tab] = midnightBlue;
    style.Colors[ImGuiCol_TabHovered] = neonPurple;
    style.Colors[ImGuiCol_TabActive] = hotPink;
    style.Colors[ImGuiCol_TabUnfocused] = deepViolet;
    style.Colors[ImGuiCol_TabUnfocusedActive] = midnightBlue;
}
#pragma endregion

