#pragma once

int selectedStyleIndex = 0;
int selectedLanguageIndex = 0;

void RenderSettingsTab()
{
    std::vector<std::string> styles = {
        config.localizationManager.getString("defaultTheme"),
        config.localizationManager.getString("purpleRetroTheme"),
        config.localizationManager.getString("blueRetroTheme")
    };

    std::vector<const char*> cstr_styles;
    
    for (const auto& str : styles)
        cstr_styles.push_back(str.c_str());

    int numStyles = styles.size();

    if (ImGui::Combo(config.localizationManager.getString("themes").c_str(), &selectedStyleIndex, cstr_styles.data(), cstr_styles.size())) {
        {
            switch (selectedStyleIndex)
            {
            case 0:
                SetImGuiStyle();
                break;
            case 1:
                SetImGuiPurpleRetroStyle();
                break;
            case 2:
                SetImGuiBlueRetroStyle();
                break;
            }
        }
    }


    std::vector<std::string> languages = {
        config.localizationManager.getString("english"),
        config.localizationManager.getString("chinese"),
        config.localizationManager.getString("russian"),
        config.localizationManager.getString("polish"),
        config.localizationManager.getString("portuguese")
    };

    std::vector<const char*> cstr_languages;
    for (const auto& lang : languages)
        cstr_languages.push_back(lang.c_str());

    int numLanguages = languages.size();

    if (ImGui::Combo(config.localizationManager.getString("language").c_str(), &selectedLanguageIndex, cstr_languages.data(), cstr_languages.size()))
    {
        switch (selectedLanguageIndex)
        {
        case 0:
            config.localizationManager.setLanguage("en");
            break;
        case 1:
            config.localizationManager.setLanguage("cn");
            break;
        case 2:
            config.localizationManager.setLanguage("ru");
            break;
        case 3:
            config.localizationManager.setLanguage("pl");
            break;
        case 4:
            config.localizationManager.setLanguage("br");
			break;
        default:
			config.localizationManager.setLanguage("en");
			break;
        }
    }

    ImGui::Checkbox(config.localizationManager.getString("focusInputs").c_str(), &config.boolSettings[0]);

    ImGui::SameLine();

    if (ImGui::Button(config.localizationManager.getString("reinitialise_jvm_hook").c_str()))
    {
        if (!InitializeJavaVM())
        {
            std::cout << "[!] InitializeJavaVM() failed" << std::endl;
        }
        else
        {
            std::cout << "[+] InitializeJavaVM() success" << std::endl;
        }
    }

    if (ImGui::IsItemHovered())
    {
		ImGui::SetTooltip(config.localizationManager.getString("reinitialise_jvm_hook_desc").c_str());
	}
    
}





