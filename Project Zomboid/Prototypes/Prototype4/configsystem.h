#pragma once

namespace fs = std::filesystem;

const std::string CONFIG_FOLDER = "esdpzconfigs";
const std::string CONFIG_FILE_EXTENSION = ".ini";

struct Config
{
    std::string name;
    bool cheats[30]{ false };
    ImGuiStyle style;
};

std::string GetConfigFolderPath()
{
    WCHAR path[MAX_PATH];
    if (SUCCEEDED(SHGetFolderPathW(NULL, CSIDL_APPDATA, NULL, 0, path)))
    {
        std::wstring widePath = path;
        std::string configPath(widePath.begin(), widePath.end());
        configPath += "\\" + CONFIG_FOLDER;

        std::wstring wideConfigPath(configPath.begin(), configPath.end());
        CreateDirectoryW(wideConfigPath.c_str(), NULL);

        return configPath;
    }

    return "";
}


std::string GetConfigFilePath(const std::string& name)
{
    std::string configFolderPath = GetConfigFolderPath();
    if (!configFolderPath.empty())
    {
        std::string filePath = configFolderPath + "\\" + name + CONFIG_FILE_EXTENSION;
        return filePath;
    }

    return "";
}

void SaveConfig(Config& config)
{
    std::string filePath = GetConfigFilePath(config.name);
    if (!filePath.empty())
    {
        std::ofstream file(filePath);
        if (file.is_open())
        {
            // Save cheats
            for (int i = 0; i < 15; ++i)
            {
                file << "cheats[" << i << "]=" << (config.cheats[i] ? "true" : "false") << "\n";
            }

            // Get the current ImGui style and save it
            ImGuiStyle& style = ImGui::GetStyle();
            config.style = style;

            // Save style
            for (int i = 0; i < ImGuiCol_COUNT; ++i)
            {
                ImVec4& col = config.style.Colors[i];
                file << "style.Colors[" << i << "]=" << col.x << "," << col.y << "," << col.z << "," << col.w << "\n";
            }

            file.close();
        }
        else
        {
            std::cout << "Failed to save config file: " << filePath << std::endl;
        }
    }
}


void LoadConfig(const std::string& name, bool* cheats)
{
    std::string filePath = GetConfigFilePath(name);
    if (!filePath.empty())
    {
        std::ifstream file(filePath);
        if (file.is_open())
        {
            std::unordered_map<std::string, std::string> configData;

            std::string line;
            while (std::getline(file, line))
            {
                std::istringstream iss(line);
                std::string key, value;
                if (std::getline(iss, key, '=') && std::getline(iss, value))
                {
                    configData[key] = value;
                }
            }

            for (int i = 0; i < 15; ++i)
            {
                std::string key = "cheats[" + std::to_string(i) + "]";
                auto it = configData.find(key);
                if (it != configData.end())
                {
                    if (it->second == "true")
                        cheats[i] = true;
                    else if (it->second == "false")
                        cheats[i] = false;
                }
            }

            for (int i = 0; i < ImGuiCol_COUNT; ++i)
            {
                std::string key = "style.Colors[" + std::to_string(i) + "]";
                auto it = configData.find(key);
                if (it != configData.end())
                {
                    ImVec4 col;
                    std::sscanf(it->second.c_str(), "%f,%f,%f,%f", &col.x, &col.y, &col.z, &col.w);
                    ImGui::GetStyle().Colors[i] = col;
                }
            }

            file.close();
        }
        else
        {
            std::cout << "Failed to load config file: " << filePath << std::endl;
        }
    }
}


bool RemoveConfig(const std::string& name)
{
    std::string filePath = GetConfigFilePath(name);
    if (!filePath.empty())
    {
        if (std::remove(filePath.c_str()) != 0)
        {
            std::cout << "Failed to remove config file: " << filePath << std::endl;
            return false;
        }
    }
    return true;
}

std::vector<std::string> GetAvailableConfigs()
{
    std::vector<std::string> configs;
    std::string configFolderPath = GetConfigFolderPath();

    if (!configFolderPath.empty())
    {
        std::wstring searchPath(configFolderPath.begin(), configFolderPath.end());
        searchPath += L"\\*";

        WIN32_FIND_DATAW findData;
        HANDLE hFind = FindFirstFileW(searchPath.c_str(), &findData);

        if (hFind != INVALID_HANDLE_VALUE)
        {
            do
            {
                if (!(findData.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY))
                {
                    std::wstring wideFileName = findData.cFileName;
                    std::string fileName(wideFileName.begin(), wideFileName.end());

                    if (fileName.substr(fileName.find_last_of('.')).compare(CONFIG_FILE_EXTENSION) == 0)
                        configs.push_back(fileName.substr(0, fileName.find_last_of('.')));
                }
            } while (FindNextFileW(hFind, &findData) != 0);
            FindClose(hFind);
        }
    }

    return configs;
}




