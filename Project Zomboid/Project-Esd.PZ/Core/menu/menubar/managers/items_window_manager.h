#pragma once

void RenderTable(const std::string& tableName, const std::vector<ItemMap>& items);
void RenderRow(const ItemMap& item);
void RenderContextMenu(const ItemMap& item, const std::string& lastKey);
void RenderInspectWindow(const ItemMap& item);
void RenderAddItemSection(const ItemMap& item, const std::string& lastKey);
void RenderInventoryTable(const std::string& tableName, const std::vector<std::string>& items);
void RenderInventoryRow(const std::string& item);
void RenderInventoryContextMenu(const std::string& item);

void LoadItems(std::vector<ItemMap>& items, const char* jsonData) {
    items = parseItems(jsonData);

    if (items.empty()) {
        std::cout << "[!] Failed to parse item data." << std::endl;
        return;
    }
}

void RenderTable(const std::string& tableName, const std::vector<ItemMap>& items) {
    ImGui::BeginChild("##TableChildWindow", ImVec2(ImGui::GetContentRegionAvail().x, ImGui::GetContentRegionAvail().y), true, ImGuiWindowFlags_HorizontalScrollbar);

    if (ImGui::BeginTable(tableName.c_str(), 2)) {
        ImGui::TableSetupColumn(config.localizationManager.getString("column_name").c_str());
        ImGui::TableSetupColumn(config.localizationManager.getString("column_baseid").c_str());

        ImGui::TableHeadersRow();

        for (auto& item : items) {
            RenderRow(item);
        }

        ImGui::EndTable();
    }

    ImGui::EndChild();
}

void RenderRow(const ItemMap& item) {
    ImGui::PushID(item.at("column2").c_str());

    ImGui::TableNextRow();

    ImGui::TableNextColumn();
    if (ImGui::Selectable(item.at("column2").c_str(), false, ImGuiSelectableFlags_SpanAllColumns | ImGuiSelectableFlags_AllowItemOverlap)) {
        std::cout << "[+] " << config.localizationManager.getString("selected_item") << ": " << item.at("column2") << std::endl;
    }

    if (ImGui::BeginDragDropSource())
    {
        ImGui::SetDragDropPayload("ITEM", &item, sizeof(ItemMap));
        ImGui::Text(config.localizationManager.getString("drag_text").c_str(), item.at("column2").c_str());
        ImGui::EndDragDropSource();
    }

    if (ImGui::IsItemHovered()) {
        ImGui::TableSetBgColor(ImGuiTableBgTarget_RowBg0, ImGui::GetColorU32(ImGuiCol_HeaderHovered));
        if (ImGui::IsMouseReleased(1)) {
            ImGui::OpenPopup("ItemContextMenu");
        }
    }

    auto lastKey = "column" + std::to_string(item.size());
    ImGui::TableNextColumn();
    ImGui::TextUnformatted(item.at(lastKey).c_str());

    if (ImGui::BeginPopupContextItem("ItemContextMenu")) {
        RenderContextMenu(item, lastKey);
        ImGui::EndPopup();
    }

    ImGui::PopID();
}

void RenderContextMenu(const ItemMap& item, const std::string& lastKey) {
    ImGui::Text(config.localizationManager.getString("context_name").c_str(), item.at("column2").c_str());
    ImGui::Text(config.localizationManager.getString("context_baseid").c_str(), item.at(lastKey).c_str());
    ImGui::Separator();

    static bool showInspect = false;
    if (ImGui::Button(config.localizationManager.getString("button_inspect").c_str())) {
        showInspect = !showInspect;
    }

    if (showInspect) {
        RenderInspectWindow(item);
    }

    RenderAddItemSection(item, lastKey);
}

void RenderInspectWindow(const ItemMap& item) {
    ImGui::BeginChild("InspectWindow", ImVec2(0, 100), true);

    std::map<int, std::string> sorted_item;
    for (const auto& [key, value] : item) {
        int key_as_int = std::stoi(key.substr(6));
        sorted_item[key_as_int] = value;
    }

    for (const auto& [key, value] : sorted_item) {
        ImGui::Text("column%d: %s", key, value.c_str());
    }

    ImGui::EndChild();
}

void RenderAddItemSection(const ItemMap& item, const std::string& lastKey) {
    ImGui::Separator();

    static int contextMenuQuantity = 1;
    ImGui::InputInt(config.localizationManager.getString("context_amount").c_str(), &contextMenuQuantity);

    if (contextMenuQuantity < 1) {
        contextMenuQuantity = 1;
    }

    if (ImGui::MenuItem(config.localizationManager.getString("context_add").c_str())) {
        for (int i = 0; i < contextMenuQuantity; i++) {
            AddItemToInventory(item.at(lastKey), 1);
        }
        std::cout << "[+] [x" << contextMenuQuantity << "] | " << config.localizationManager.getString("item_added").c_str() << ": " << item.at("column2").c_str() << std::endl;
    }
}

void RenderSection(const char* name, std::vector<ItemMap>& items, bool& opened, const char* jsonData) {
    if (ImGui::TreeNode(name)) {
        if (!opened) {
            LoadItems(items, jsonData);
            opened = true;
        }

        float childWindowHeight = ImGui::GetTextLineHeightWithSpacing() * (items.size() + 1);

        if (ImGui::BeginChild(name, ImVec2(ImGui::GetContentRegionAvail().x, childWindowHeight), true, ImGuiWindowFlags_HorizontalScrollbar)) {
            RenderTable(name, items);
        }
        ImGui::EndChild();

        ImGui::TreePop();
    }
    else {
        items.clear();
        opened = false;
    }
}

void RenderInventoryTable(const std::string& tableName, const std::vector<std::string>& items) {
    ImGui::BeginChild("##TableChildWindow", ImVec2(ImGui::GetContentRegionAvail().x, ImGui::GetContentRegionAvail().y), true, ImGuiWindowFlags_HorizontalScrollbar);

    if (ImGui::BeginTable(tableName.c_str(), 1)) {
        ImGui::TableSetupColumn(config.localizationManager.getString("column_name").c_str());

        ImGui::TableHeadersRow();

        for (auto& item : items) {
            RenderInventoryRow(item);
        }

        ImGui::EndTable();
    }

    if (ImGui::BeginDragDropTarget())
    {
        if (const ImGuiPayload* payload = ImGui::AcceptDragDropPayload("ITEM"))
        {
            IM_ASSERT(payload->DataSize == sizeof(ItemMap));
            const ItemMap& droppedItem = *static_cast<const ItemMap*>(payload->Data);

            auto lastKey = "column" + std::to_string(droppedItem.size());

            AddItemToInventory(droppedItem.at(lastKey), 1);
        }
        ImGui::EndDragDropTarget();
    }

    ImGui::EndChild();
}

void RenderInventoryRow(const std::string& item) {
    ImGui::PushID(item.c_str());

    ImGui::TableNextRow();

    ImGui::TableNextColumn();
    if (ImGui::Selectable(item.c_str(), false, ImGuiSelectableFlags_SpanAllColumns | ImGuiSelectableFlags_AllowItemOverlap)) {
        std::cout << "[+] " << config.localizationManager.getString("selected_item") << ": " << item << std::endl;
    }
    if (ImGui::IsItemHovered()) {
        ImGui::TableSetBgColor(ImGuiTableBgTarget_RowBg0, ImGui::GetColorU32(ImGuiCol_HeaderHovered));
        if (ImGui::IsMouseReleased(1)) {
            ImGui::OpenPopup("ItemContextMenu");
        }
    }

    if (ImGui::BeginPopupContextItem("ItemContextMenu")) {
        RenderInventoryContextMenu(item);
        ImGui::EndPopup();
    }

    ImGui::PopID();
}

void RenderInventoryContextMenu(const std::string& item) {
    ImGui::Text(config.localizationManager.getString("context_name").c_str(), item.c_str());
    ImGui::Separator();

    static bool showInspect = false;
    if (ImGui::Button(config.localizationManager.getString("button_inspect").c_str())) {
        showInspect = !showInspect;
    }

    if (showInspect) {
        ImGui::Text(config.localizationManager.getString("item_text").c_str(), item.c_str());
    }
}

