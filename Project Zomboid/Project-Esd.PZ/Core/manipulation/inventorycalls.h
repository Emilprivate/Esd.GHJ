#pragma once

std::vector<std::string> inventoryItems;

std::vector<std::string> GetInventoryItems() {
    jobject inventoryItemsObj = javaGlobals.g_jniEnv->GetObjectField(javaGlobals.instances.g_inventoryInstance, javaGlobals.fields.itemsFieldId);

    if (inventoryItemsObj == nullptr) {
        std::cout << "[!] Failed to retrieve inventory items object." << std::endl;
        return std::vector<std::string>();
    }

    jint inventorySize = javaGlobals.g_jniEnv->CallIntMethod(inventoryItemsObj, javaGlobals.methods.sizeMethodId);

    if (inventorySize < 0) {
        std::cout << "[!] Failed to get inventory items size." << std::endl;
        return std::vector<std::string>();
    }

    std::vector<std::string> inventoryItems;

    for (int i = 0; i < inventorySize; i++) {
        jobject item = javaGlobals.g_jniEnv->CallObjectMethod(inventoryItemsObj, javaGlobals.methods.getMethodId, i);

        if (item == nullptr) {
            std::cout << "[!] Failed to retrieve item at index " << i << "." << std::endl;
            continue;
        }

        jstring itemNameJString = (jstring)javaGlobals.g_jniEnv->CallObjectMethod(item, javaGlobals.methods.getItemNameMethodId);

        if (itemNameJString == nullptr) {
            std::cout << "[!] Failed to retrieve item name for item at index " << i << "." << std::endl;
            continue;
        }

        const char* itemNameCStr = javaGlobals.g_jniEnv->GetStringUTFChars(itemNameJString, 0);

        if (itemNameCStr == nullptr) {
            std::cout << "[!] Failed to convert item name to UTF-8 for item at index " << i << "." << std::endl;
            continue;
        }

        inventoryItems.push_back(std::string(itemNameCStr));

        javaGlobals.g_jniEnv->ReleaseStringUTFChars(itemNameJString, itemNameCStr);
    }

    return inventoryItems;
}

void LocalGetInventoryItems() {
    try {
        inventoryItems = GetInventoryItems();

        if (inventoryItems.empty()) {
            std::cout << "[!] Failed to fetch inventory items." << std::endl;
            return;
        }

        for (const auto& item : inventoryItems) {
            std::cout << item << std::endl;
        }
    }
    catch (const std::exception& e) {
        std::cout << "[!] " << e.what() << std::endl;
    }
    catch (...) {
        std::cout << "[!] An unknown error occurred while fetching inventory items." << std::endl;
    }
}


void AddItemToInventory(const std::string& itemName, float itemCount) {
    jstring itemNameJString = javaGlobals.g_jniEnv->NewStringUTF(itemName.c_str());

    jboolean success = javaGlobals.g_jniEnv->CallBooleanMethod(javaGlobals.instances.g_inventoryInstance, javaGlobals.methods.addItemMethodId, itemNameJString, itemCount);

    javaGlobals.g_jniEnv->DeleteLocalRef(itemNameJString);

    if (success != JNI_TRUE) {
        std::cout << "[!] Failed to add item with baseId: " << itemName << std::endl;
        return;
    }

    LocalGetInventoryItems();
}


