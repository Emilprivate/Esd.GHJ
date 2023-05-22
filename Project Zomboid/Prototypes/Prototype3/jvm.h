#pragma once

JavaVM* g_javaVm = nullptr;                 //Pointer to the JavaVM
JNIEnv* g_jniEnv = nullptr;                 //JniEnv pointer
jobject g_playerInstance = nullptr;         //Player instance

using jniGetCreatedJavaVMs_t = jint(*)(JavaVM** vmBuf, jsize bufLen, jsize* nVMs);

#pragma region JvmFunctions

//Function to retrieve the JavaVM instance
bool RetrieveJavaVM() {
    const auto jvmHandle = GetModuleHandleW(L"jvm.dll");
    if (jvmHandle == nullptr) {
        SetConsoleColor(FOREGROUND_RED);
        std::cout << "[!] Failed to retrieve handle for \"jvm.dll\"!\n";
        return false;
    }
    else {
        SetConsoleColor(FOREGROUND_GREEN);
        std::cout << "[+] Retrieved handle for \"jvm.dll\" successfully.\n";
    }

    const auto jniGetCreatedJavaVMs = reinterpret_cast<jniGetCreatedJavaVMs_t>(GetProcAddress(jvmHandle, "JNI_GetCreatedJavaVMs"));
    if (jniGetCreatedJavaVMs == nullptr) {
        SetConsoleColor(FOREGROUND_RED);
        std::cout << "[!] Failed to retrieve JNI_GetCreatedJavaVMs function!\n";
        return false;
    }
    else {
        SetConsoleColor(FOREGROUND_GREEN);
        std::cout << "[+] Retrieved JNI_GetCreatedJavaVMs function successfully.\n";
    }

    JavaVM* javaVm = nullptr;
    jniGetCreatedJavaVMs(&javaVm, 1, nullptr);
    if (javaVm == nullptr) {
        SetConsoleColor(FOREGROUND_RED);
        std::cout << "[!] Failed to retrieve created Java VMs!\n";
        return false;
    }
    else {
        SetConsoleColor(FOREGROUND_GREEN);
        std::cout << "[+] Retrieved created Java VMs successfully.\n";
    }

    g_javaVm = javaVm;
    return true;
}


//Function to attach the current thread to the Java VM
bool AttachCurrentThread() {
    if (g_javaVm == nullptr) {
        SetConsoleColor(FOREGROUND_RED);
        std::cout << "[!] Java VM not retrieved!\n";
        return false;
    }
    else {
        SetConsoleColor(FOREGROUND_GREEN);
        std::cout << "[+] Java VM retrieved successfully.\n";
    }

    if (g_javaVm->AttachCurrentThread(reinterpret_cast<void**>(&g_jniEnv), nullptr) != JNI_OK) {
        SetConsoleColor(FOREGROUND_RED);
        std::cout << "[!] Failed to attach to the Java VM.\n";
        return false;
    }
    else {
        SetConsoleColor(FOREGROUND_GREEN);
        std::cout << "[+] Attached to the Java VM successfully.\n";
    }

    return true;
}


//Function to detach the current thread from the Java VM
void DetachCurrentThread() {
    if (g_javaVm != nullptr) {
        g_javaVm->DetachCurrentThread();
        g_javaVm = nullptr;
        g_jniEnv = nullptr;
    }
}

bool InitializeJavaVM() {
    if (!RetrieveJavaVM() || !AttachCurrentThread()) {
        SetConsoleColor(FOREGROUND_RED);
        std::cout << "=====================================================\n";
        std::cout << "[!] Failed RetrieveJavaVM() || AttachCurrentThread().\n";
        std::cout << "=====================================================\n";
        return false;
    }

    const auto isoPlayerClass = g_jniEnv->FindClass("zombie/characters/IsoPlayer");
    if (isoPlayerClass == nullptr)
    {
        SetConsoleColor(FOREGROUND_RED);
        std::cout << "[!] Failed to retrieve IsoPlayer class.\n";
        DetachCurrentThread();
        return false;
    }
    else
    {
        SetConsoleColor(FOREGROUND_GREEN);
        std::cout << "[+] IsoPlayer class retrieved successfully.\n";
    }

    const auto hasInstanceMethodId = g_jniEnv->GetStaticMethodID(isoPlayerClass, "hasInstance", "()Z");
    if (hasInstanceMethodId == nullptr)
    {
        SetConsoleColor(FOREGROUND_RED);
        std::cout << "[!] Failed to retrieve IsoPlayer::hasInstance method.\n";
        DetachCurrentThread();
        return false;
    }
    else
    {
        SetConsoleColor(FOREGROUND_GREEN);
        std::cout << "[+] IsoPlayer::hasInstance method retrieved successfully.\n";
    }

    const auto playerHasInstance = g_jniEnv->CallStaticBooleanMethod(isoPlayerClass, hasInstanceMethodId);
    if (!playerHasInstance)
    {
        SetConsoleColor(FOREGROUND_RED);
        std::cout << "[!] IsoPlayer::hasInstance returned false.\n";
        DetachCurrentThread();
        return false;
    }
    else
    {
        SetConsoleColor(FOREGROUND_GREEN);
        std::cout << "[+] IsoPlayer instance found.\n";
    }

    const auto getInstanceMethodId = g_jniEnv->GetStaticMethodID(isoPlayerClass, "getInstance", "()Lzombie/characters/IsoPlayer;");
    if (getInstanceMethodId == nullptr)
    {
        SetConsoleColor(FOREGROUND_RED);
        std::cout << "[!] Failed to retrieve IsoPlayer::getInstance method.\n";
        DetachCurrentThread();
        return false;
    }
    else
    {
        SetConsoleColor(FOREGROUND_GREEN);
        std::cout << "[+] IsoPlayer::getInstance method retrieved successfully.\n";
    }

    const auto playerInstance = g_jniEnv->CallStaticObjectMethod(isoPlayerClass, getInstanceMethodId);
    if (playerInstance == nullptr)
    {
        SetConsoleColor(FOREGROUND_RED);
        std::cout << "[!] IsoPlayer::getInstance returned nullptr!\n";
        DetachCurrentThread();
        return false;
    }
    else
    {
        SetConsoleColor(FOREGROUND_GREEN);
        std::cout << "[+] IsoPlayer instance retrieved successfully.\n";
    }

    g_playerInstance = playerInstance;

    return true;
}

//Function to call a void method with a boolean parameter on the player instance
void CallVoidMethodOnPlayer(const char* methodName, bool value) {
    if (g_jniEnv == nullptr) {
        SetConsoleColor(FOREGROUND_RED);
        std::cout << "[!] JNI environment not attached!\n";
        return;
    }

    const auto isoPlayerClass = g_jniEnv->FindClass("zombie/characters/IsoPlayer");
    if (isoPlayerClass == nullptr) {
        SetConsoleColor(FOREGROUND_RED);
        std::cout << "[!] Failed to retrieve IsoPlayer class.\n";
        return;
    }

    const auto methodId = g_jniEnv->GetMethodID(isoPlayerClass, methodName, "(Z)V");
    if (methodId == nullptr) {
        SetConsoleColor(FOREGROUND_RED);
        std::cout << "[!] Failed to retrieve method: " << methodName << ".\n";
        return;
    }

    g_jniEnv->CallVoidMethod(g_playerInstance, methodId, value);

    SetConsoleColor(FOREGROUND_BLUE);
    std::cout << "[+] " << methodName << " set to: " << (value ? "true" : "false") << "\n";
}
#pragma endregion