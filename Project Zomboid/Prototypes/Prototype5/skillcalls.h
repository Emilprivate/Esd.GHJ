#pragma once

void LevelUpPerks(const char* field)
{
	if (javaGlobals.g_jniEnv == nullptr) {
		std::cout << "[!] JNI environment not attached!\n";
		return;
	}

	const std::string fieldSignature = "Lzombie/characters/skills/PerkFactory$Perk;";

	jfieldID fieldId = javaGlobals.g_jniEnv->GetStaticFieldID(javaGlobals.classes.perksClass, field, fieldSignature.c_str());
	if (fieldId == nullptr) {
		std::cout << "[!] Failed to retrieve field ID for " << field << std::endl;
		return;
	}

	jobject fieldObject = javaGlobals.g_jniEnv->GetStaticObjectField(javaGlobals.classes.perksClass, fieldId);
	if (fieldObject == nullptr) {
		std::cout << "[!] Failed to retrieve field object for " << field << std::endl;
		return;
	}

	jmethodID levelPerkMethodId = javaGlobals.g_jniEnv->GetMethodID(javaGlobals.classes.isoGameCharacterClass, "LevelPerk", "(Lzombie/characters/skills/PerkFactory$Perk;)V");
	if (levelPerkMethodId == nullptr) {
		std::cout << "[!] Failed to retrieve IsoGameCharacter::LevelPerk method.\n";
		return;
	}

	javaGlobals.g_jniEnv->CallVoidMethod(javaGlobals.instances.g_playerInstance, levelPerkMethodId, fieldObject);
}

void LosePerks(const char* field)
{
	if (javaGlobals.g_jniEnv == nullptr) {
		std::cout << "[!] JNI environment not attached!\n";
		return;
	}

	const std::string fieldSignature = "Lzombie/characters/skills/PerkFactory$Perk;";

	// Get the field ID
	jfieldID fieldId = javaGlobals.g_jniEnv->GetStaticFieldID(javaGlobals.classes.perksClass, field, fieldSignature.c_str());
	if (fieldId == nullptr) {
		std::cout << "[!] Failed to retrieve field ID for " << field << std::endl;
		return;
	}

	// Get the field object
	jobject fieldObject = javaGlobals.g_jniEnv->GetStaticObjectField(javaGlobals.classes.perksClass, fieldId);
	if (fieldObject == nullptr) {
		std::cout << "[!] Failed to retrieve field object for " << field << std::endl;
		return;
	}

	// Call the LoseLevel method with the field object
	jmethodID loseLevelMethodId = javaGlobals.g_jniEnv->GetMethodID(javaGlobals.classes.isoGameCharacterClass, "LoseLevel", "(Lzombie/characters/skills/PerkFactory$Perk;)V");
	if (loseLevelMethodId == nullptr) {
		std::cout << "[!] Failed to retrieve IsoGameCharacter::LoseLevel method.\n";
		return;
	}

	// Call the LoseLevel method with the field object
	javaGlobals.g_jniEnv->CallVoidMethod(javaGlobals.instances.g_playerInstance, loseLevelMethodId, fieldObject);
}