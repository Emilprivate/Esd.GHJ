#pragma once

//Function to call a void method with a boolean parameter on the player instance
void CallVoidMethodOnPlayer(const char* methodName, bool value) {
    if (javaGlobals.g_jniEnv == nullptr) {
        std::cout << "[!] JNI environment not attached!\n";
        return;
    }

    const auto isoPlayerClass = javaGlobals.classes.isoPlayerClass;
    if (isoPlayerClass == nullptr) {
        std::cout << "[!] Failed to retrieve IsoPlayer class.\n";
        return;
    }

    const auto methodId = javaGlobals.g_jniEnv->GetMethodID(isoPlayerClass, methodName, "(Z)V");
    if (methodId == nullptr) {
        std::cout << "[!] Failed to retrieve method: " << methodName << ".\n";
        return;
    }

    javaGlobals.g_jniEnv->CallVoidMethod(javaGlobals.instances.g_playerInstance, methodId, value);

    std::cout << "[+] " << methodName << " set to: " << (value ? "true" : "false") << "\n";
}

void SetMeleeDelay(float delay) {
	if (javaGlobals.g_jniEnv == nullptr) {
		std::cout << "[!] JNI environment not attached!\n";
		return;
	}

	const auto setMeleeDelayMethodId = javaGlobals.g_jniEnv->GetMethodID(javaGlobals.classes.isoGameCharacterClass, "setMeleeDelay", "(F)V");
	if (setMeleeDelayMethodId == nullptr) {
		std::cout << "[!] Failed to retrieve IsoGameCharacter::setMeleeDelay method.\n";
		return;
	}

	// Call the setMeleeDelay method on the player instance with the delay value
	javaGlobals.g_jniEnv->CallVoidMethod(javaGlobals.instances.g_playerInstance, setMeleeDelayMethodId, delay);

	std::cout << "[+] Melee delay set!\n";
}

void SetRecoilDelay(float recoilDelay) {
	if (javaGlobals.g_jniEnv == nullptr) {
		std::cout << "[!] JNI environment not attached!\n";
		return;
	}

	const auto setRecoilDelayMethodId = javaGlobals.g_jniEnv->GetMethodID(javaGlobals.classes.isoGameCharacterClass, "setRecoilDelay", "(F)V");
	if (setRecoilDelayMethodId == nullptr) {
		std::cout << "[!] Failed to retrieve IsoGameCharacter::setRecoilDelay method.\n";
		return;
	}

	// Call the setRecoilDelay method on the player instance with the recoilDelay value
	javaGlobals.g_jniEnv->CallVoidMethod(javaGlobals.instances.g_playerInstance, setRecoilDelayMethodId, recoilDelay);

	std::cout << "[+] Recoil delay set!\n";
}

//TODO: Not working for me for some reason
void Suicide() {
    if (javaGlobals.g_jniEnv == nullptr) {
        std::cout << "[!] JNI environment not attached!\n";
        return;
    }

    const auto sendPlayerDeathMethod = javaGlobals.g_jniEnv->GetStaticMethodID(javaGlobals.classes.gameClientClass, "sendPlayerDeath", "(Lzombie/characters/IsoPlayer;)V");
    if (sendPlayerDeathMethod == nullptr) {
        std::cout << "[!] Failed to retrieve GameClient::sendPlayerDeath method.\n";
        return;
    }

    javaGlobals.g_jniEnv->CallStaticVoidMethod(javaGlobals.classes.gameClientClass, sendPlayerDeathMethod, javaGlobals.instances.g_playerInstance);
}

void RepairHandItem() {
    if (javaGlobals.g_jniEnv == nullptr) {
        std::cout << "[!] JNI environment not attached!\n";
        return;
    }

    const auto getPrimaryHandItemMethodId = javaGlobals.g_jniEnv->GetMethodID(javaGlobals.classes.isoGameCharacterClass, "getPrimaryHandItem", "()Lzombie/inventory/InventoryItem;");
    if (getPrimaryHandItemMethodId == nullptr) {
        std::cout << "[!] Failed to retrieve getPrimaryHandItem method.\n";
        return;
    }

    const auto primaryHandItem = javaGlobals.g_jniEnv->CallObjectMethod(javaGlobals.instances.g_playerInstance, getPrimaryHandItemMethodId);
    if (primaryHandItem == nullptr) {
        std::cout << "[!] getPrimaryHandItem returned nullptr!\n";
        return;
    }

    const auto setConditionMethodId = javaGlobals.g_jniEnv->GetMethodID(javaGlobals.classes.inventoryItemClass, "setCondition", "(I)V");
    if (setConditionMethodId == nullptr) {
        std::cout << "[!] Failed to retrieve setCondition method.\n";
        return;
    }

    javaGlobals.g_jniEnv->CallVoidMethod(primaryHandItem, setConditionMethodId, 999);

    std::cout << "[+] Set primary hand item condition to " << 999 << "\n";
}

int GetMaxAmmo() {
    if (javaGlobals.g_jniEnv == nullptr) {
        std::cout << "[!] JNI environment not attached!\n";
        return -1;
    }

    const auto getPrimaryHandItemMethodId = javaGlobals.g_jniEnv->GetMethodID(javaGlobals.classes.isoGameCharacterClass, "getPrimaryHandItem", "()Lzombie/inventory/InventoryItem;");
    if (getPrimaryHandItemMethodId == nullptr) {
        std::cout << "[!] Failed to retrieve getPrimaryHandItem method.\n";
        return -1;
    }

    const auto primaryHandItem = javaGlobals.g_jniEnv->CallObjectMethod(javaGlobals.instances.g_playerInstance, getPrimaryHandItemMethodId);
    if (primaryHandItem == nullptr) {
        std::cout << "[!] getPrimaryHandItem returned nullptr!\n";
        return -1;
    }
    
    const auto getMaxAmmoMethodId = javaGlobals.g_jniEnv->GetMethodID(javaGlobals.classes.inventoryItemClass, "getMaxAmmo", "()I");
    if (getMaxAmmoMethodId == nullptr) {
        std::cout << "[!] Failed to retrieve getMaxAmmo method.\n";
        return -1;
    }

    const auto maxAmmo = javaGlobals.g_jniEnv->CallIntMethod(primaryHandItem, getMaxAmmoMethodId);
    if (maxAmmo < 0) {
        std::cout << "[!] Failed to retrieve max ammo count.\n";
        return -1;
    }

    return maxAmmo;
}

int GetCurrentAmmoCount() {
    if (javaGlobals.g_jniEnv == nullptr) {
        std::cout << "[!] JNI environment not attached!\n";
        return -1;
    }

    const auto getPrimaryHandItemMethodId = javaGlobals.g_jniEnv->GetMethodID(javaGlobals.classes.isoGameCharacterClass, "getPrimaryHandItem", "()Lzombie/inventory/InventoryItem;");
    if (getPrimaryHandItemMethodId == nullptr) {
        std::cout << "[!] Failed to retrieve getPrimaryHandItem method.\n";
        return -1;
    }

    const auto primaryHandItem = javaGlobals.g_jniEnv->CallObjectMethod(javaGlobals.instances.g_playerInstance, getPrimaryHandItemMethodId);
    if (primaryHandItem == nullptr) {
        std::cout << "[!] getPrimaryHandItem returned nullptr!\n";
        return -1;
    }
    
    const auto getCurrentAmmoCountMethodId = javaGlobals.g_jniEnv->GetMethodID(javaGlobals.classes.inventoryItemClass, "getCurrentAmmoCount", "()I");
    if (getCurrentAmmoCountMethodId == nullptr) {
        std::cout << "[!] Failed to retrieve getCurrentAmmoCount method.\n";
        return -1;
    }

    const auto CurrentAmmo = javaGlobals.g_jniEnv->CallIntMethod(primaryHandItem, getCurrentAmmoCountMethodId);
    if (CurrentAmmo < 0) {
        std::cout << "[!] Failed to retrieve max ammo count.\n";
        return -1;
    }

	return CurrentAmmo;
}

void LegitMaxAmmo() {
    if (javaGlobals.g_jniEnv == nullptr) {
        std::cout << "[!] JNI environment not attached!\n";
        return;
    }

    const auto getPrimaryHandItemMethodId = javaGlobals.g_jniEnv->GetMethodID(javaGlobals.classes.isoGameCharacterClass, "getPrimaryHandItem", "()Lzombie/inventory/InventoryItem;");
    if (getPrimaryHandItemMethodId == nullptr) {
        std::cout << "[!] Failed to retrieve getPrimaryHandItem method.\n";
        return;
    }

    const auto primaryHandItem = javaGlobals.g_jniEnv->CallObjectMethod(javaGlobals.instances.g_playerInstance, getPrimaryHandItemMethodId);
    if (primaryHandItem == nullptr) {
        std::cout << "[!] getPrimaryHandItem returned nullptr!\n";
        return;
    }

    const auto setCurrentAmmoCountMethodId = javaGlobals.g_jniEnv->GetMethodID(javaGlobals.classes.inventoryItemClass, "setCurrentAmmoCount", "(I)V");
    if (setCurrentAmmoCountMethodId == nullptr) {
        std::cout << "[!] Failed to retrieve setCurrentAmmoCount method.\n";
        return;
    }

    javaGlobals.g_jniEnv->CallVoidMethod(primaryHandItem, setCurrentAmmoCountMethodId, GetMaxAmmo());

    std::cout << "[+] Set gun ammo count to max (" << GetMaxAmmo() << ")\n";
}

void RageMaxAmmo(int amount) {
    if (javaGlobals.g_jniEnv == nullptr) {
        std::cout << "[!] JNI environment not attached!\n";
        return;
    }

    const auto getPrimaryHandItemMethodId = javaGlobals.g_jniEnv->GetMethodID(javaGlobals.classes.isoGameCharacterClass, "getPrimaryHandItem", "()Lzombie/inventory/InventoryItem;");
    if (getPrimaryHandItemMethodId == nullptr) {
        std::cout << "[!] Failed to retrieve getPrimaryHandItem method.\n";
        return;
    }

    const auto primaryHandItem = javaGlobals.g_jniEnv->CallObjectMethod(javaGlobals.instances.g_playerInstance, getPrimaryHandItemMethodId);
    if (primaryHandItem == nullptr) {
        std::cout << "[!] getPrimaryHandItem returned nullptr!\n";
        return;
    }

    const auto setMaxAmmoMethodId = javaGlobals.g_jniEnv->GetMethodID(javaGlobals.classes.inventoryItemClass, "setMaxAmmo", "(I)V");
    if (setMaxAmmoMethodId == nullptr) {
        std::cout << "[!] Failed to retrieve setMaxAmmo method.\n";
        return;
    }

    const auto setCurrentAmmoCountMethodId = javaGlobals.g_jniEnv->GetMethodID(javaGlobals.classes.inventoryItemClass, "setCurrentAmmoCount", "(I)V");
    if (setCurrentAmmoCountMethodId == nullptr) {
        std::cout << "[!] Failed to retrieve setCurrentAmmoCount method.\n";
        return;
    }

	std::cout << "[+] Set gun ammo count to max (" << amount << ")\n";

    javaGlobals.g_jniEnv->CallVoidMethod(primaryHandItem, setMaxAmmoMethodId, amount);
    javaGlobals.g_jniEnv->CallVoidMethod(primaryHandItem, setCurrentAmmoCountMethodId, GetMaxAmmo());
}

void Tester() {
    
}