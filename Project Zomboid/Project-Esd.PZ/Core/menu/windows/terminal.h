#pragma once

bool showTerminalWindow = true;

static bool scrollToBottom = false;
static char searchLogsQuery[256];

void RenderTerminalWindow(ImVec2 mainWindowPos, ImVec2 mainWindowSize)
{
    float connectedWindowWidth = mainWindowSize.x;
    float connectedWindowHeight = 200;
    float connectedWindowX = mainWindowPos.x;
    float connectedWindowY = mainWindowPos.y + mainWindowSize.y;

    ImGui::SetNextWindowSizeConstraints(ImVec2(connectedWindowWidth, connectedWindowHeight), ImVec2(connectedWindowWidth, FLT_MAX));

    ImGui::Begin(config.localizationManager.getString("terminal_window_title").c_str(), &showTerminalWindow, ImGuiWindowFlags_NoSavedSettings | ImGuiWindowFlags_NoMove);
    {
        ImGui::SetWindowPos(ImVec2(connectedWindowX, connectedWindowY), ImGuiCond_Always);

        if (ImGui::Button(config.localizationManager.getString("terminal_clear_button").c_str()))
        {
            strCout.str("");
            strCout.clear();
        }

        ImGui::SameLine();

        if (ImGui::Button(config.localizationManager.getString("terminal_copy_button").c_str()))
        {
            ImGui::SetClipboardText(logs.c_str());
        }

        ImGui::SameLine();

        if (ImGui::Checkbox(config.localizationManager.getString("terminal_scroll_checkbox").c_str(), &scrollToBottom));

        ImGui::SameLine();

        if (ImGui::Button(config.localizationManager.getString("terminal_export_button").c_str()))
        {
            std::string filePath = OpenFileDialog();
            if (!filePath.empty())
            {
                std::ofstream outFile(filePath);
                if (outFile.is_open())
                {
                    outFile << logs;
                    outFile.close();
                }
                else
                {
                    std::cout << "[!] " << config.localizationManager.getString("terminal_export_failed").c_str() << filePath << std::endl;
                }
            }
        }

        ImGui::SameLine();

        if (ImGui::Button(config.localizationManager.getString("tester").c_str()))
        {
            Tester();
        }
        if (ImGui::IsItemHovered())
        {
            ImGui::SetTooltip(config.localizationManager.getString("test_new_features").c_str());
        }


        logs = strCout.str();

        ImGui::Separator();

        ImGui::BeginChild("TerminalContent");

        ImGui::TextUnformatted(logs.c_str());

        if (scrollToBottom)
        {
            ImGui::SetScrollHereY(1.0f);
        }

        ImGui::EndChild();
    }
    ImGui::End();
}
