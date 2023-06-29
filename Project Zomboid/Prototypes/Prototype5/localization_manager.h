#pragma once

class LocalizationManager {
private:
    std::map<std::string, std::string> currentLanguage;
    std::string currentLang;
public:
    void setLanguage(std::string lang) {
        if (lang == "en") {
            currentLanguage = EN_STRINGS;
        }
        else if (lang == "cn") {
            currentLanguage = CN_STRINGS;
        }
        else if (lang == "ru") {
            currentLanguage = RU_STRINGS;
        }
        else if (lang == "pl") {
			currentLanguage = PL_STRINGS;
        }
        else if (lang == "br") {
            currentLanguage = BR_STRINGS;
        }
        else {
            currentLanguage = EN_STRINGS;
            lang = "en";
        }
        currentLang = lang;
    }

    std::string getString(std::string key) {
        if (currentLanguage.count(key) > 0) {
            return currentLanguage[key];
        }
        return "Key Not Found: " + key;
    }

    std::string getCurrentLanguage() {
        return currentLang;
    }
};

