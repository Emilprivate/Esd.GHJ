#include <jni.h>
#include <cstdio>

// Function to find and enable cheats
bool enableCheats(JNIEnv* jniEnv, jobject playerInstance) {
    const auto isoPlayerClass = jniEnv->FindClass("zombie/characters/IsoPlayer");
    if (isoPlayerClass == nullptr) {
        printf("[!] Failed to retrieve IsoPlayer class.\n");
        return false;
    }
 
    // Find and call IsoPlayer::setGhostMode method to enable ghost mode cheat
    const auto setGhostModeMethodId = jniEnv->GetMethodID(isoPlayerClass, "setGhostMode", "(Z)V");
    if (setGhostModeMethodId == nullptr) {
        printf("[!] Failed to retrieve IsoGameCharacter::setGhostMode method.\n");
        return false;
    }
 
    jniEnv->CallVoidMethod(playerInstance, setGhostModeMethodId, JNI_TRUE);

    return true;
}

extern "C" JNIEXPORT jint JNICALL JNI_OnLoad(JavaVM* vm, void* reserved) {
    JNIEnv* jniEnv;
    if (vm->GetEnv(reinterpret_cast<void**>(&jniEnv), JNI_VERSION_1_6) != JNI_OK) {
        printf("[!] Failed to get JNIEnv.\n");
        return -1;
    }

    // Get the player instance using IsoPlayer::getInstance method
    const auto isoPlayerClass = jniEnv->FindClass("zombie/characters/IsoPlayer");
    if (isoPlayerClass == nullptr) {
        printf("[!] Failed to retrieve IsoPlayer class.\n");
        return -1;
    }

    const auto hasInstanceMethodId = jniEnv->GetStaticMethodID(isoPlayerClass, "hasInstance", "()Z");
    if (hasInstanceMethodId == nullptr) {
        printf("[!] Failed to retrieve IsoPlayer::hasInstance method.\n");
        return -1;
    }

    const auto playerHasInstance = jniEnv->CallStaticBooleanMethod(isoPlayerClass, hasInstanceMethodId);
    if (!playerHasInstance) {
        printf("[!] IsoPlayer::hasInstance returned false.\n");
        return -1;
    }

    const auto getInstanceMethodId = jniEnv->GetStaticMethodID(isoPlayerClass, "getInstance", "()Lzombie/characters/IsoPlayer;");
    if (getInstanceMethodId == nullptr) {
        printf("[!] Failed to retrieve IsoPlayer::getInstance method.\n");
        return -1;
    }

    const auto playerInstance = jniEnv->CallStaticObjectMethod(isoPlayerClass, getInstanceMethodId);
    if (playerInstance == nullptr) {
        printf("[!] IsoPlayer::getInstance returned nullptr!\n");
        return -1;
    }

    // Enable cheats
    if (!enableCheats(jniEnv, playerInstance)) {
        printf("[!] Failed to enable cheats.\n");
        return -1;
    }

    return JNI_VERSION_1_6;
}
