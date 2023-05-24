#pragma once

bool overwriteConfirmation = false;
std::string selectedConfig;

// configs.h
void RenderConfigTab(bool* cheats)
{
    static char newConfigName[64] = "";
    static char editedConfigName[64] = "";

    ImGui::Columns(2, "mycolumns"); // 2-Columns

    ImGui::Text("Available Configs:");
    std::vector<std::string> availableConfigs = GetAvailableConfigs();
    for (const std::string& config : availableConfigs)
    {
        ImGui::Selectable(config.c_str(), selectedConfig == config);
        if (ImGui::IsItemClicked())
        {
            selectedConfig = config;
            memset(editedConfigName, 0, sizeof(editedConfigName));
            strncpy_s(editedConfigName, config.c_str(), sizeof(editedConfigName) - 1);
        }
    }

    ImGui::NextColumn();

    ImGui::Text("Available Options:");
    if (ImGui::Button("Add New Config"))
    {
        ImGui::OpenPopup("Add Config Popup");
        memset(newConfigName, 0, sizeof(newConfigName));
    }

    if (ImGui::BeginPopup("Add Config Popup"))
    {
        ImGui::InputText("Config Name", newConfigName, sizeof(newConfigName));
        if (ImGui::Button("Save"))
        {
            std::string configName = newConfigName;
            if (!configName.empty())
            {
                if (std::find(availableConfigs.begin(), availableConfigs.end(), configName) == availableConfigs.end())
                {
                    selectedConfig = configName;

                    Config config;
                    config.name = configName;
                    memcpy(config.cheats, cheats, sizeof(bool) * 15);

                    ImGuiStyle& style = ImGui::GetStyle();
                    config.style = style;

                    SaveConfig(config);

                    newConfigName[0] = '\0';
                    ImGui::CloseCurrentPopup();
                }
                else
                {
                    std::cout << "Config name already exists. Please choose a different name.\n";
                }
            }
        }
        ImGui::EndPopup();
    }

    if (!selectedConfig.empty())
    {
        ImGui::Text("Selected Config: %s", selectedConfig.c_str());

        if (ImGui::Button("Load Selected Config"))
        {
            LoadConfig(selectedConfig, cheats);
        }

        ImGui::InputText("##", editedConfigName, sizeof(editedConfigName));

        if (ImGui::Button("Save Edited Config"))
        {
            std::string editedName = editedConfigName;
            if (!editedName.empty() && editedName != selectedConfig)
            {
                if (std::find(availableConfigs.begin(), availableConfigs.end(), editedName) == availableConfigs.end())
                {
                    Config config;
                    config.name = editedName;
                    memcpy(config.cheats, cheats, sizeof(bool) * 15);

                    ImGuiStyle& style = ImGui::GetStyle();
                    config.style = style;

                    // Check if the selected config is being edited
                    if (editedName == selectedConfig)
                    {
                        // Remove the old config file
                        RemoveConfig(selectedConfig);
                        selectedConfig = editedName;
                    }

                    SaveConfig(config);
                    ImGui::CloseCurrentPopup();
                }
                else
                {
                    std::cout << "Config name already exists. Please choose a different name.\n";
                }
            }
        }

        if (ImGui::Button("Remove Selected Config"))
        {
            ImGui::OpenPopup("Remove Config Popup");
        }

        if (ImGui::BeginPopupModal("Remove Config Popup", NULL, ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoMove))
        {
            ImGui::Text("Are you sure you want to remove the selected config?");
            ImGui::Separator();

            ImGui::SetCursorPosX((ImGui::GetWindowSize().x - 240) * 0.5f);
            if (ImGui::Button("Yes", ImVec2(120, 0)))
            {
                std::string configToRemove = selectedConfig;
                selectedConfig.clear();
                RemoveConfig(configToRemove);
                ImGui::CloseCurrentPopup();
            }
            ImGui::SameLine();
            if (ImGui::Button("No", ImVec2(120, 0)))
            {
                ImGui::CloseCurrentPopup();
            }

            ImGui::EndPopup();
        }

    }
    ImGui::Columns(1);
}
