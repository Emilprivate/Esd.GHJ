#pragma once

using jniGetCreatedJavaVMs_t = jint(*)(JavaVM** vmBuf, jsize bufLen, jsize* nVMs);

bool RetrieveJavaVM();
bool AttachCurrentThread();
void DetachCurrentThread();

struct JavaClasses {
    jclass arrayListClass;
    jclass itemContainerClass;
    jclass inventoryItemClass;
    jclass isoPlayerClass;
    jclass isoGameCharacterClass;
    jclass perksClass;
    jclass gameClientClass;
    jclass isoZombieClass;
    jclass gameServerClass;
};

struct JavaMethods {
    jmethodID sizeMethodId;
    jmethodID getMethodId;
    jmethodID getItemNameMethodId;
    jmethodID addItemMethodId;
    jmethodID hasInstanceMethodId;
    jmethodID getInstanceMethodId;
    jmethodID getInventoryMethodId;
    jmethodID toStringMethod;
    jmethodID gameServerGetPlayersMethodId;
};

struct JavaFields {
    jfieldID itemsFieldId;
    jfieldID accessLevelFieldId;
    jfieldID showTagFieldId;
    jfieldID onlineIDFieldId;
    jfieldID playerIndexFieldId;
    jfieldID serverPlayerIndexFieldId;
    jfieldID maxWeightDeltaFieldId;
    jfieldID currentSpeedFieldId;
    jfieldID maxSpeedFieldId;
    jfieldID fornameFieldId;
    jfieldID surnameFieldId;
};

struct JavaInstances {
    jobject g_inventoryInstance;
    jobject g_playerInstance;
    jobject g_gameClientInstance;
};

struct JavaGlobals {
    JavaVM* g_javaVm = nullptr;
    JNIEnv* g_jniEnv = nullptr;

    JavaClasses classes;
    JavaMethods methods;
    JavaFields fields;
    JavaInstances instances;
};

JavaGlobals javaGlobals;

bool InitializeJavaVM() {
    if (!RetrieveJavaVM() || !AttachCurrentThread()) {
        std::cout << "[!] Failed RetrieveJavaVM() or AttachCurrentThread().\n";
        DetachCurrentThread();
        return false;
    }

    #pragma region JavaClasses
    const auto isoPlayerClass = javaGlobals.g_jniEnv->FindClass("zombie/characters/IsoPlayer");
    if (isoPlayerClass == nullptr)
    {
        std::cout << "[!] Failed to retrieve IsoPlayer class.\n";
        DetachCurrentThread();
        return false;
    }
    else
    {
        std::cout << "[+] IsoPlayer class retrieved successfully.\n";
    }

    const auto isoGameCharacterClass = javaGlobals.g_jniEnv->FindClass("zombie/characters/IsoGameCharacter");
    if (isoGameCharacterClass == nullptr)
    {
        std::cout << "[!] Failed to retrieve IsoGameCharacter class.\n";
        DetachCurrentThread();
        return false;
    }
    else
    {
        std::cout << "[+] IsoGameCharacterClass retrieved successfully.\n";
    }

    const auto perksClass = javaGlobals.g_jniEnv->FindClass("zombie/characters/skills/PerkFactory$Perks");
    if (perksClass == nullptr)
    {
        std::cout << "[!] Failed to retrieve Perks class.\n";
        DetachCurrentThread();
        return false;
    }
    else
    {
        std::cout << "[+] Perks class retrieved successfully.\n";
    }

    const auto gameClientClass = javaGlobals.g_jniEnv->FindClass("zombie/network/GameClient");
    if (gameClientClass == nullptr) {
        std::cout << "[!] Failed to retrieve GameClient class.\n";
        DetachCurrentThread();
        return false;
    }
    else
    {
        std::cout << "[+] GameClient class retrieved successfully.\n";
    }

    const auto isoZombieClass = javaGlobals.g_jniEnv->FindClass("zombie/characters/IsoZombie");
    if (isoZombieClass == nullptr) {
        std::cout << "[!] Failed to retrieve IsoZombie class.\n";
        DetachCurrentThread();
        return false;
    }
    else
    {
        std::cout << "[+] IsoZombie class retrieved successfully.\n";
    }

    const auto arrayListClass = javaGlobals.g_jniEnv->FindClass("java/util/ArrayList");
	if (arrayListClass == nullptr) {
		std::cout << "[!] Failed to retrieve ArrayList class.\n";
        DetachCurrentThread();
		return false;
	}
	else
	{
		std::cout << "[+] ArrayList class retrieved successfully.\n";
	}
    
    const auto itemContainerClass = javaGlobals.g_jniEnv->FindClass("zombie/inventory/ItemContainer");
	if (itemContainerClass == nullptr) {
		std::cout << "[!] Failed to retrieve ItemContainer class.\n";
        DetachCurrentThread();
		return false;
	}
	else
	{
		std::cout << "[+] ItemContainer class retrieved successfully.\n";
	}
    
    const auto inventoryItemClass = javaGlobals.g_jniEnv->FindClass("zombie/inventory/InventoryItem");
	if (inventoryItemClass == nullptr) {
		std::cout << "[!] Failed to retrieve InventoryItem class.\n";
        DetachCurrentThread();
		return false;
	}
	else
	{
		std::cout << "[+] InventoryItem class retrieved successfully.\n";
	}

    const auto gameServerClass = javaGlobals.g_jniEnv->FindClass("zombie/network/GameServer");
    if (gameServerClass == nullptr) {
        std::cout << "[!] Failed to retrieve GameServer class.\n";
        return false;
    }
    else {
        std::cout << "[+] GameServer class retrieved successfully.\n";
    }

    #pragma endregion

    #pragma region JavaInstances
    const auto hasInstanceMethodId = javaGlobals.g_jniEnv->GetStaticMethodID(isoPlayerClass, "hasInstance", "()Z");
    if (hasInstanceMethodId == nullptr)
    {
        std::cout << "[!] Failed to retrieve IsoPlayer::hasInstance method.\n";
        DetachCurrentThread();
        return false;
    }
    else
    {
        std::cout << "[+] IsoPlayer::hasInstance method retrieved successfully.\n";
    }

    const auto playerHasInstance = javaGlobals.g_jniEnv->CallStaticBooleanMethod(isoPlayerClass, hasInstanceMethodId);
    if (!playerHasInstance)
    {

        std::cout << "[!] IsoPlayer::hasInstance returned false.\n";
        DetachCurrentThread();
        return false;
    }
    else
    {

        std::cout << "[+] IsoPlayer instance found.\n";
    }

    const auto getInstanceMethodId = javaGlobals.g_jniEnv->GetStaticMethodID(isoPlayerClass, "getInstance", "()Lzombie/characters/IsoPlayer;");
    if (getInstanceMethodId == nullptr)
    {

        std::cout << "[!] Failed to retrieve IsoPlayer::getInstance method.\n";
        DetachCurrentThread();
        return false;
    }
    else
    {

        std::cout << "[+] IsoPlayer::getInstance method retrieved successfully.\n";
    }

    const auto playerInstance = javaGlobals.g_jniEnv->CallStaticObjectMethod(isoPlayerClass, getInstanceMethodId);
    if (playerInstance == nullptr)
    {

        std::cout << "[!] IsoPlayer::getInstance returned nullptr!\n";
        DetachCurrentThread();
        return false;
    }
    else
    {

        std::cout << "[+] IsoPlayer instance retrieved successfully.\n";
    }

    const auto getInventoryMethodId = javaGlobals.g_jniEnv->GetMethodID(isoPlayerClass, "getInventory", "()Lzombie/inventory/ItemContainer;");
    if (getInventoryMethodId == nullptr)
    {
        std::cout << "[!] Failed to retrieve IsoGameCharacter::getInventory method.\n";
        DetachCurrentThread();
        return false;
    }
    else
    {
        std::cout << "[+] IsoGameCharacter::getInventory method retrieved successfully.\n";
    }

    const auto inventoryInstance = javaGlobals.g_jniEnv->CallObjectMethod(playerInstance, getInventoryMethodId);
    if (inventoryInstance == nullptr)
    {
        std::cout << "[!] Failed to retrieve inventory instance.\n";
        DetachCurrentThread();
        return false;
    }
    else
    {
        std::cout << "[+] Inventory instance retrieved successfully.\n";
    }

    jfieldID instanceFieldId = javaGlobals.g_jniEnv->GetStaticFieldID(gameClientClass, "instance", "Lzombie/network/GameClient;");
	if (instanceFieldId == nullptr)
	{
		std::cout << "[!] Failed to retrieve GameClient::instance field.\n";
		DetachCurrentThread();
		return false;
	}
	else
	{
		std::cout << "[+] GameClient::instance field retrieved successfully.\n";
	}

    jobject gameClientInstance = javaGlobals.g_jniEnv->GetStaticObjectField(gameClientClass, instanceFieldId);
    if (gameClientInstance == nullptr) {
        std::cout << "[!] GameClient::instance returned nullptr!\n";
        DetachCurrentThread();
        return false;
    }
    else {
        std::cout << "[+] GameClient instance retrieved successfully.\n";
    }

    #pragma endregion

    #pragma region StructInitialization
    //Instances
    javaGlobals.instances.g_playerInstance = javaGlobals.g_jniEnv->NewGlobalRef(playerInstance);
    javaGlobals.instances.g_inventoryInstance = javaGlobals.g_jniEnv->NewGlobalRef(inventoryInstance);
    javaGlobals.instances.g_gameClientInstance = javaGlobals.g_jniEnv->NewGlobalRef(gameClientInstance);

    //Classes
    javaGlobals.classes.perksClass = static_cast<jclass>(javaGlobals.g_jniEnv->NewGlobalRef(perksClass));
    javaGlobals.classes.isoGameCharacterClass = static_cast<jclass>(javaGlobals.g_jniEnv->NewGlobalRef(isoGameCharacterClass));
    javaGlobals.classes.isoPlayerClass = static_cast<jclass>(javaGlobals.g_jniEnv->NewGlobalRef(isoPlayerClass));
    javaGlobals.classes.gameClientClass = static_cast<jclass>(javaGlobals.g_jniEnv->NewGlobalRef(gameClientClass));
    javaGlobals.classes.isoZombieClass = static_cast<jclass>(javaGlobals.g_jniEnv->NewGlobalRef(isoZombieClass));
    javaGlobals.classes.arrayListClass = static_cast<jclass>(javaGlobals.g_jniEnv->NewGlobalRef(arrayListClass));
    javaGlobals.classes.itemContainerClass = static_cast<jclass>(javaGlobals.g_jniEnv->NewGlobalRef(itemContainerClass));
    javaGlobals.classes.inventoryItemClass = static_cast<jclass>(javaGlobals.g_jniEnv->NewGlobalRef(inventoryItemClass));
    javaGlobals.classes.gameServerClass = static_cast<jclass>(javaGlobals.g_jniEnv->NewGlobalRef(gameServerClass));

    //Util Methods
    javaGlobals.methods.toStringMethod = javaGlobals.g_jniEnv->GetMethodID(arrayListClass, "toString", "()Ljava/lang/String;");
    javaGlobals.methods.sizeMethodId = javaGlobals.g_jniEnv->GetMethodID(arrayListClass, "size", "()I");
    javaGlobals.methods.getMethodId = javaGlobals.g_jniEnv->GetMethodID(arrayListClass, "get", "(I)Ljava/lang/Object;");

	//Game Methods
    javaGlobals.methods.getItemNameMethodId = javaGlobals.g_jniEnv->GetMethodID(inventoryItemClass, "getName", "()Ljava/lang/String;");
    javaGlobals.methods.addItemMethodId = javaGlobals.g_jniEnv->GetMethodID(itemContainerClass, "AddItem", "(Ljava/lang/String;F)Z");
    javaGlobals.methods.getInventoryMethodId = javaGlobals.g_jniEnv->GetMethodID(isoPlayerClass, "getInventory", "()Lzombie/inventory/ItemContainer;");
    
    //Static Methods
    javaGlobals.methods.hasInstanceMethodId = javaGlobals.g_jniEnv->GetStaticMethodID(isoPlayerClass, "hasInstance", "()Z");
    javaGlobals.methods.getInstanceMethodId = javaGlobals.g_jniEnv->GetStaticMethodID(isoPlayerClass, "getInstance", "()Lzombie/characters/IsoPlayer;");
    javaGlobals.methods.gameServerGetPlayersMethodId = javaGlobals.g_jniEnv->GetStaticMethodID(gameServerClass, "getPlayers", "()Ljava/util/ArrayList;");

    //Fields
    javaGlobals.fields.itemsFieldId = javaGlobals.g_jniEnv->GetFieldID(itemContainerClass, "Items", "Ljava/util/ArrayList;");
    
    javaGlobals.fields.accessLevelFieldId = javaGlobals.g_jniEnv->GetFieldID(javaGlobals.classes.isoPlayerClass, "accessLevel", "Ljava/lang/String;");
    javaGlobals.fields.showTagFieldId = javaGlobals.g_jniEnv->GetFieldID(javaGlobals.classes.isoPlayerClass, "showTag", "Z");
    javaGlobals.fields.onlineIDFieldId = javaGlobals.g_jniEnv->GetFieldID(javaGlobals.classes.isoPlayerClass, "OnlineID", "S");
    javaGlobals.fields.playerIndexFieldId = javaGlobals.g_jniEnv->GetFieldID(javaGlobals.classes.isoPlayerClass, "PlayerIndex", "I");
    javaGlobals.fields.serverPlayerIndexFieldId = javaGlobals.g_jniEnv->GetFieldID(javaGlobals.classes.isoPlayerClass, "serverPlayerIndex", "I");
    javaGlobals.fields.maxWeightDeltaFieldId = javaGlobals.g_jniEnv->GetFieldID(javaGlobals.classes.isoPlayerClass, "maxWeightDelta", "F");
    javaGlobals.fields.currentSpeedFieldId = javaGlobals.g_jniEnv->GetFieldID(javaGlobals.classes.isoPlayerClass, "CurrentSpeed", "F");
    javaGlobals.fields.maxSpeedFieldId = javaGlobals.g_jniEnv->GetFieldID(javaGlobals.classes.isoPlayerClass, "MaxSpeed", "F");
    javaGlobals.fields.fornameFieldId = javaGlobals.g_jniEnv->GetFieldID(javaGlobals.classes.isoPlayerClass, "Forname", "Ljava/lang/String;");
    javaGlobals.fields.surnameFieldId = javaGlobals.g_jniEnv->GetFieldID(javaGlobals.classes.isoPlayerClass, "Surname", "Ljava/lang/String;");
    
    #pragma endregion
    
    return true;
}

void CleanupJavaVM() {
    if (javaGlobals.g_javaVm != nullptr && javaGlobals.g_jniEnv != nullptr) {
        
        if (javaGlobals.instances.g_playerInstance != nullptr) {
            javaGlobals.g_jniEnv->DeleteGlobalRef(javaGlobals.instances.g_playerInstance);
            javaGlobals.instances.g_playerInstance = nullptr;
        }
        if (javaGlobals.instances.g_inventoryInstance != nullptr) {
            javaGlobals.g_jniEnv->DeleteGlobalRef(javaGlobals.instances.g_inventoryInstance);
            javaGlobals.instances.g_inventoryInstance = nullptr;
        }
		if (javaGlobals.instances.g_gameClientInstance != nullptr) {
			javaGlobals.g_jniEnv->DeleteGlobalRef(javaGlobals.instances.g_gameClientInstance);
			javaGlobals.instances.g_gameClientInstance = nullptr;
		}

        // =================================================================================
        
        if (javaGlobals.classes.arrayListClass != nullptr) {
            javaGlobals.g_jniEnv->DeleteGlobalRef(javaGlobals.classes.arrayListClass);
            javaGlobals.classes.arrayListClass = nullptr;
        }
        if (javaGlobals.classes.itemContainerClass != nullptr) {
            javaGlobals.g_jniEnv->DeleteGlobalRef(javaGlobals.classes.itemContainerClass);
            javaGlobals.classes.itemContainerClass = nullptr;
        }
        if (javaGlobals.classes.inventoryItemClass != nullptr) {
            javaGlobals.g_jniEnv->DeleteGlobalRef(javaGlobals.classes.inventoryItemClass);
            javaGlobals.classes.inventoryItemClass = nullptr;
        }
        if (javaGlobals.classes.isoPlayerClass != nullptr) {
            javaGlobals.g_jniEnv->DeleteGlobalRef(javaGlobals.classes.isoPlayerClass);
            javaGlobals.classes.isoPlayerClass = nullptr;
        }
        if (javaGlobals.classes.isoGameCharacterClass != nullptr) {
            javaGlobals.g_jniEnv->DeleteGlobalRef(javaGlobals.classes.isoGameCharacterClass);
            javaGlobals.classes.isoGameCharacterClass = nullptr;
        }
        if (javaGlobals.classes.perksClass != nullptr) {
            javaGlobals.g_jniEnv->DeleteGlobalRef(javaGlobals.classes.perksClass);
            javaGlobals.classes.perksClass = nullptr;
        }
        if (javaGlobals.classes.gameClientClass != nullptr) {
            javaGlobals.g_jniEnv->DeleteGlobalRef(javaGlobals.classes.gameClientClass);
            javaGlobals.classes.gameClientClass = nullptr;
        }
        if (javaGlobals.classes.isoZombieClass != nullptr) {
            javaGlobals.g_jniEnv->DeleteGlobalRef(javaGlobals.classes.isoZombieClass);
            javaGlobals.classes.isoZombieClass = nullptr;
        }
        
    }
}

//Function to retrieve the JavaVM instance
bool RetrieveJavaVM() {
    const auto jvmHandle = GetModuleHandleW(L"jvm.dll");
    if (jvmHandle == nullptr) {

        std::cout << "[!] Failed to retrieve handle for \"jvm.dll\"!\n";
        return false;
    }
    else {

        std::cout << "[+] Retrieved handle for \"jvm.dll\" successfully.\n";
    }

    const auto jniGetCreatedJavaVMs = reinterpret_cast<jniGetCreatedJavaVMs_t>(GetProcAddress(jvmHandle, "JNI_GetCreatedJavaVMs"));
    if (jniGetCreatedJavaVMs == nullptr) {

        std::cout << "[!] Failed to retrieve JNI_GetCreatedJavaVMs function!\n";
        return false;
    }
    else {

        std::cout << "[+] Retrieved JNI_GetCreatedJavaVMs function successfully.\n";
    }

    JavaVM* javaVm = nullptr;
    jniGetCreatedJavaVMs(&javaVm, 1, nullptr);
    if (javaVm == nullptr) {

        std::cout << "[!] Failed to retrieve created Java VMs!\n";
        return false;
    }
    else {

        std::cout << "[+] Retrieved created Java VMs successfully.\n";
    }

    javaGlobals.g_javaVm = javaVm;
    return true;
}

//Function to attach the current thread to the Java VM
bool AttachCurrentThread() {
    if (javaGlobals.g_javaVm == nullptr) {

        std::cout << "[!] Java VM not retrieved!\n";
        return false;
    }
    else {

        std::cout << "[+] Java VM retrieved successfully.\n";
    }

    if (javaGlobals.g_javaVm->AttachCurrentThread(reinterpret_cast<void**>(&javaGlobals.g_jniEnv), nullptr) != JNI_OK) {

        std::cout << "[!] Failed to attach to the Java VM.\n";
        return false;
    }
    else {

        std::cout << "[+] Attached to the Java VM successfully.\n";
    }

    return true;
}

//Function to detach the current thread from the Java VM
void DetachCurrentThread() {
    if (javaGlobals.g_javaVm != nullptr) {
        javaGlobals.g_javaVm->DetachCurrentThread();
        javaGlobals.g_javaVm = nullptr;
        javaGlobals.g_jniEnv = nullptr;
    }
}