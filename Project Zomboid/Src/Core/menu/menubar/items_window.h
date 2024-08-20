#pragma once
#include "managers/items_json_manager.h"

bool showItemsWindow = false;

bool prevShowInventoryWindow = false;

void RenderItemsWindow(bool* showInventoryWindow)
{
    if (!prevShowInventoryWindow && *showInventoryWindow) {
        std::cout << "[+] Fetching inventory items" << std::endl;
        LocalGetInventoryItems();
    }

    ImGui::SetNextWindowSize(ImVec2(1050, 500), ImGuiCond_FirstUseEver);
    ImGui::SetNextWindowSizeConstraints(ImVec2(1050, 500), ImVec2(FLT_MAX, FLT_MAX));

    if (!ImGui::Begin(config.localizationManager.getString("items_window_title").c_str(), showInventoryWindow, ImGuiWindowFlags_NoCollapse)) {
        prevShowInventoryWindow = *showInventoryWindow;
        ImGui::End();
        return;
    }

    static const char* categories[] = {
        "Clothing", "Equipment", "Food", "Literature",
        "Medical", "Materials", "Misc", "Vehicle", "Weapons"
    };

    ImGui::Columns(2);

    ImGui::SetColumnWidth(0, 650);

    if (ImGui::BeginTabBar(config.localizationManager.getString("categories_tab_bar").c_str())) {
        for (int i = 0; i < IM_ARRAYSIZE(categories); i++) {
            if (ImGui::BeginTabItem(config.localizationManager.getString(categories[i]).c_str())) {
                switch (i) {
                case 0: // Clothing tab
                    RenderClothingSection();
                    break;
                case 1: // Equipment tab
                    RenderEquipmentSection();
                    break;
                case 2: // Food tab
                    RenderFoodSection();
                    break;
                case 3: // Literature tab
                    RenderLiteratureSection();
                    break;
                case 4: // Medical tab
                    RenderMedicalSection();
                    break;
                case 5: // Materials tab
                    RenderMaterialsSection();
                    break;
                case 6: // Misc tab
                    RenderMiscSection();
                    break;
                case 7: // Vehicle tab
                    RenderVehicleSection();
                    break;
                case 8: // Weapons tab
                    RenderWeaponsSection();
                    break;
                default:
                    ImGui::Text(config.localizationManager.getString("category_not_implemented").c_str());
                    break;
                }

                ImGui::EndTabItem();
            }
        }

        ImGui::EndTabBar();
    }

    ImGui::NextColumn();

    ImGui::Text(config.localizationManager.getString("add_item_with_base_id").c_str());
    static char itemName[128] = "";
    ImGui::InputText("##ItemName", itemName, IM_ARRAYSIZE(itemName));

    static int itemQuantity = 1;
    ImGui::InputInt(config.localizationManager.getString("amount").c_str(), &itemQuantity);

    if (itemQuantity < 1) {
        itemQuantity = 1;
    }

    if (ImGui::Button(config.localizationManager.getString("add_item_button").c_str())) {
        for (int i = 0; i < itemQuantity; i++) {
            AddItemToInventory(itemName, 1);
        }
        std::cout << "[+] [x" << itemQuantity << "] | " << config.localizationManager.getString("added_item") << " : " << itemName << std::endl;
    }

    ImGui::Separator();

    ImGui::BeginChild("Inventory Items", ImVec2(0, 0), true);
    ImGui::Text(config.localizationManager.getString("inventory_items").c_str());

    RenderInventoryTable(config.localizationManager.getString("inventory_table_name").c_str(), inventoryItems);

    ImGui::EndChild();

    ImGui::Columns(1);

    ImGui::End();
    prevShowInventoryWindow = *showInventoryWindow;
}

