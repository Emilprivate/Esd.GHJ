#pragma once

bool overwriteConfirmation = false;
std::string selectedConfig;

// configs.h
void RenderConfigTab()
{
    static char newConfigName[64] = "";
    static char editedConfigName[64] = "";

    ImGui::Columns(2, "mycolumns"); // 2-Columns

    ImGui::Text(config.localizationManager.getString("available_configs").c_str());
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

    ImGui::Text(config.localizationManager.getString("available_options").c_str());
    if (ImGui::Button(config.localizationManager.getString("add_new_config").c_str()))
    {
        ImGui::OpenPopup("Add Config Popup");
        memset(newConfigName, 0, sizeof(newConfigName));
    }

    if (ImGui::BeginPopup("Add Config Popup"))
    {
        ImGui::InputText(config.localizationManager.getString("config_name").c_str(), newConfigName, sizeof(newConfigName));
        if (ImGui::Button(config.localizationManager.getString("save").c_str()))
        {
            std::string configName = newConfigName;
            if (!configName.empty())
            {
                if (std::find(availableConfigs.begin(), availableConfigs.end(), configName) == availableConfigs.end())
                {
                    selectedConfig = configName;

                    config.name = configName;

                    ImGuiStyle& style = ImGui::GetStyle();
                    config.style = style;

                    SaveConfig(config);

                    newConfigName[0] = '\0';
                    ImGui::CloseCurrentPopup();
                }
                else
                {
                    std::cout << config.localizationManager.getString("config_name_exists").c_str() << std::endl;
                }
            }
        }
        ImGui::EndPopup();
    }


    if (!selectedConfig.empty())
    {
        ImGui::Text(config.localizationManager.getString("selected_config").c_str(), selectedConfig.c_str());

        if (ImGui::Button(config.localizationManager.getString("load_selected_config").c_str()))
        {
            LoadConfig(selectedConfig, config);
        }

        ImGui::InputText("##", editedConfigName, sizeof(editedConfigName));

        if (ImGui::Button(config.localizationManager.getString("save_edited_config").c_str()))
        {
            std::string editedName = editedConfigName;
            if (!editedName.empty() && editedName != selectedConfig)
            {
                if (std::find(availableConfigs.begin(), availableConfigs.end(), editedName) == availableConfigs.end())
                {
                    config.name = editedName;

                    ImGuiStyle& style = ImGui::GetStyle();
                    config.style = style;

                    if (editedName == selectedConfig)
                    {
                        RemoveConfig(selectedConfig);
                        selectedConfig = editedName;
                    }

                    SaveConfig(config);
                    ImGui::CloseCurrentPopup();
                }
                else
                {
                    std::cout << config.localizationManager.getString("config_name_exists").c_str() << std::endl;
                }
            }
        }

        if (ImGui::Button(config.localizationManager.getString("remove_selected_config").c_str()))
        {
            ImGui::OpenPopup("Remove Config Popup");
        }

        if (ImGui::BeginPopupModal("Remove Config Popup", NULL, ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoMove))
        {
            ImGui::Text(config.localizationManager.getString("remove_confirmation").c_str());
            ImGui::Separator();

            ImGui::SetCursorPosX((ImGui::GetWindowSize().x - 240) * 0.5f);
            if (ImGui::Button(config.localizationManager.getString("yes").c_str(), ImVec2(120, 0)))
            {
                std::string configToRemove = selectedConfig;
                selectedConfig.clear();
                RemoveConfig(configToRemove);
                ImGui::CloseCurrentPopup();
            }
            ImGui::SameLine();
            if (ImGui::Button(config.localizationManager.getString("no").c_str(), ImVec2(120, 0)))
            {
                ImGui::CloseCurrentPopup();
            }

            ImGui::EndPopup();
        }

    }
    ImGui::Columns(1);
}

