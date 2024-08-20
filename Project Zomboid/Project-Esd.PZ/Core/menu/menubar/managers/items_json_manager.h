#pragma once

typedef std::unordered_map<std::string, std::string> ItemMap;

std::vector<ItemMap> parseItems(const char* jsonData) {
    std::vector<ItemMap> items;

    try {
        auto j = json::parse(jsonData);
        for (auto& item : j) {
            ItemMap map;
            for (json::iterator it = item.begin(); it != item.end(); ++it) {
                map[it.key()] = it.value();
            }
            items.push_back(map);
        }
    }
    catch (const std::exception& e) {
        std::cout << "[!] Failed to parse item data. Exception: " << e.what() << std::endl;
    }

    return items;
}