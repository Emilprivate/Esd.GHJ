#pragma once

bool showPlayerlistWindow = false;

std::string GetStringField(jobject object, jfieldID fieldId) {
    jstring fieldValue = static_cast<jstring>(javaGlobals.g_jniEnv->GetObjectField(object, fieldId));
    const char* str = javaGlobals.g_jniEnv->GetStringUTFChars(fieldValue, nullptr);
    std::string result(str);
    javaGlobals.g_jniEnv->ReleaseStringUTFChars(fieldValue, str);
    return result;
}

std::vector<std::unordered_map<std::string, std::string>> RetrievePlayerInformation() {
    std::vector<std::unordered_map<std::string, std::string>> playerInfoList;

    jobject gameClientInstance = javaGlobals.instances.g_gameClientInstance;
    jmethodID getPlayersMethodId = javaGlobals.g_jniEnv->GetMethodID(javaGlobals.classes.gameClientClass, "getPlayers", "()Ljava/util/ArrayList;");
    jobject playersList = javaGlobals.g_jniEnv->CallObjectMethod(gameClientInstance, getPlayersMethodId);

    jint playersCount = javaGlobals.g_jniEnv->CallIntMethod(playersList, javaGlobals.methods.sizeMethodId);
    jmethodID getUsernameMethodId = javaGlobals.g_jniEnv->GetMethodID(javaGlobals.classes.isoPlayerClass, "getUsername", "()Ljava/lang/String;");

    for (jint i = 0; i < playersCount; ++i) {
        jobject playerObject = javaGlobals.g_jniEnv->CallObjectMethod(playersList, javaGlobals.methods.getMethodId, i);
        jstring usernameJString = static_cast<jstring>(javaGlobals.g_jniEnv->CallObjectMethod(playerObject, getUsernameMethodId));
        const char* usernameCStr = javaGlobals.g_jniEnv->GetStringUTFChars(usernameJString, nullptr);

        std::unordered_map<std::string, std::string> playerInfo;
        playerInfo["username"] = std::string(usernameCStr);
        playerInfo["accessLevel"] = GetStringField(playerObject, javaGlobals.fields.accessLevelFieldId);
        playerInfo["showTag"] = javaGlobals.g_jniEnv->GetBooleanField(playerObject, javaGlobals.fields.showTagFieldId) ? "true" : "false";
        playerInfo["onlineID"] = std::to_string(javaGlobals.g_jniEnv->GetShortField(playerObject, javaGlobals.fields.onlineIDFieldId));
        playerInfo["playerIndex"] = std::to_string(javaGlobals.g_jniEnv->GetIntField(playerObject, javaGlobals.fields.playerIndexFieldId));
        playerInfo["serverPlayerIndex"] = std::to_string(javaGlobals.g_jniEnv->GetIntField(playerObject, javaGlobals.fields.serverPlayerIndexFieldId));
        playerInfo["maxWeightDelta"] = std::to_string(javaGlobals.g_jniEnv->GetFloatField(playerObject, javaGlobals.fields.maxWeightDeltaFieldId));
        playerInfo["currentSpeed"] = std::to_string(javaGlobals.g_jniEnv->GetFloatField(playerObject, javaGlobals.fields.currentSpeedFieldId));
        playerInfo["maxSpeed"] = std::to_string(javaGlobals.g_jniEnv->GetFloatField(playerObject, javaGlobals.fields.maxSpeedFieldId));
        playerInfo["forname"] = GetStringField(playerObject, javaGlobals.fields.fornameFieldId);
        playerInfo["surname"] = GetStringField(playerObject, javaGlobals.fields.surnameFieldId);

        playerInfoList.push_back(playerInfo);

        javaGlobals.g_jniEnv->ReleaseStringUTFChars(usernameJString, usernameCStr);
        javaGlobals.g_jniEnv->DeleteLocalRef(usernameJString);
        javaGlobals.g_jniEnv->DeleteLocalRef(playerObject);
    }

    javaGlobals.g_jniEnv->DeleteLocalRef(playersList);

    return playerInfoList;
}

void OutputPlayerInformation(const std::unordered_map<std::string, std::string>& playerInfo) {
    std::cout << "Player Information:\n";
    std::cout << "Username: " << playerInfo.at("username") << std::endl;
    std::cout << "Access Level: " << playerInfo.at("accessLevel") << std::endl;
    std::cout << "Show Tag: " << playerInfo.at("showTag") << std::endl;
    std::cout << "Online ID: " << playerInfo.at("onlineID") << std::endl;
    std::cout << "Player Index: " << playerInfo.at("playerIndex") << std::endl;
    std::cout << "Server Player Index: " << playerInfo.at("serverPlayerIndex") << std::endl;
    std::cout << "Max Weight Delta: " << playerInfo.at("maxWeightDelta") << std::endl;
    std::cout << "Current Speed: " << playerInfo.at("currentSpeed") << std::endl;
    std::cout << "Max Speed: " << playerInfo.at("maxSpeed") << std::endl;
    std::cout << "Forname: " << playerInfo.at("forname") << std::endl;
    std::cout << "Surname: " << playerInfo.at("surname") << std::endl;
}

std::string getColumnName(int columnIndex) {
    switch (columnIndex) {
    case 1:
        return "serverPlayerIndex";
    case 2:
        return "onlineID";
    case 3:
        return "accessLevel";
    default:
        return "username";
    }
}

void RenderHookedGameClientClass() {
    static std::vector<std::unordered_map<std::string, std::string>> playerInfoList;
    static int selectedPlayer = -1;
    static bool autoUpdate = false; 
    static bool popOut = false; 
    static auto lastUpdate = std::chrono::steady_clock::now();
    static int updateInterval = 2000; 

    if (ImGui::Button("Refresh List") || (autoUpdate && std::chrono::steady_clock::now() - lastUpdate > std::chrono::milliseconds(updateInterval))) {
        playerInfoList = RetrievePlayerInformation();

        /*playerInfoList = {
            {
                {"username", "Player " + std::to_string(randomNum)},  // Append random number to username.
                {"accessLevel", "Admin"},
                {"showTag", "true"},
                {"onlineID", "12345"},
                {"playerIndex", "1"},
                {"serverPlayerIndex", "1"},
                {"maxWeightDelta", "0.5"},
                {"currentSpeed", "10.0"},
                {"maxSpeed", "20.0"},
                {"forname", "John"},
                {"surname", "Doe"}
            },
                        {
                {"username", "Player 2 " + std::to_string(randomNum)},  // Append random number to username.
                {"accessLevel", "Moderator"},
                {"showTag", "true"},
                {"onlineID", "12345"},
                {"playerIndex", "1"},
                {"serverPlayerIndex", "1"},
                {"maxWeightDelta", "0.5"},
                {"currentSpeed", "10.0"},
                {"maxSpeed", "20.0"},
                {"forname", "John"},
                {"surname", "Doe"}
            }
        };*/

        if (!autoUpdate || selectedPlayer == -1) {
            selectedPlayer = -1;
        }

        if (!playerInfoList.empty()) {
            //OutputPlayerInformation(playerInfoList[0]);
        }

        lastUpdate = std::chrono::steady_clock::now();
    }

    ImGui::SameLine();
    ImGui::Checkbox("Auto Update", &autoUpdate);
    ImGui::SameLine();
    ImGui::Checkbox("Pop out Infopanel", &popOut);
    ImGui::PushItemWidth(200);
    ImGui::InputInt("Delay (ms)", &updateInterval);
    ImGui::PopItemWidth();
    if (updateInterval < 0) {
        updateInterval = 0;
    }

    ImGui::BeginChild("##PlayerListChildWindow", ImVec2(ImGui::GetContentRegionAvail().x, ImGui::GetContentRegionAvail().y), true, ImGuiWindowFlags_HorizontalScrollbar);
    {
        if (ImGui::BeginTable("##PlayerListTable", 4)) {
            ImGui::TableSetupColumn("Username");
            ImGui::TableSetupColumn("Server Index");
            ImGui::TableSetupColumn("Online ID");
            ImGui::TableSetupColumn("Access Level");

            ImGui::TableHeadersRow();

            for (int i = 0; i < playerInfoList.size(); ++i) {
                const bool isSelected = (selectedPlayer == i);

                ImGui::TableNextRow();
                ImGui::TableSetColumnIndex(0);

                if (ImGui::Selectable((playerInfoList[i]["username"] + "##" + std::to_string(i)).c_str(), isSelected, ImGuiSelectableFlags_SpanAllColumns)) {
                    selectedPlayer = isSelected ? -1 : i;
                }

                if (ImGui::IsItemClicked(1)) {
                    selectedPlayer = i;
                    ImGui::OpenPopup("PlayerInfoPopup");
                }

                for (int j = 1; j < 4; ++j) {
                    ImGui::TableSetColumnIndex(j);
                    ImGui::TextUnformatted(playerInfoList[i][getColumnName(j)].c_str());
                }
            }

            if (selectedPlayer >= 0 && selectedPlayer < playerInfoList.size() && ImGui::BeginPopup("PlayerInfoPopup")) {
                const auto& selectedPlayerInfo = playerInfoList[selectedPlayer];

                float popupWidth = 600;
                float popupHeight = 400;

                float childWidth = popupWidth * 0.5;
                float childHeight = popupHeight * 0.5;

                ImGui::SetNextWindowSize(ImVec2(popupWidth, popupHeight));

                ImGui::BeginChild("PlayerInfoChildWindow", ImVec2(childWidth, childHeight), true);

                if (ImGui::BeginTable("PlayerInfoTable", 2)) {
                    ImGui::TableSetupColumn("Info Categories");
                    ImGui::TableSetupColumn("Player Information");
                    ImGui::TableHeadersRow();

                    for (const auto& entry : selectedPlayerInfo) {
                        ImGui::TableNextRow();
                        ImGui::TableSetColumnIndex(0);
                        ImGui::TextUnformatted(entry.first.c_str());

                        ImGui::TableSetColumnIndex(1);
                        ImGui::TextUnformatted(entry.second.c_str());
                    }

                    ImGui::EndTable();
                }

                ImGui::EndChild();

                ImGui::SameLine();

                ImGui::BeginGroup();

                ImGui::Button("Teleport to Player");
                ImGui::Button("Teleport Player to Me");
                ImGui::Button("Kill Player");
                ImGui::Button("Adjust Privilege");
                
                if (ImGui::ArrowButton("##left", ImGuiDir_Left))
                {

                }

                ImGui::SameLine();
                if (ImGui::ArrowButton("##right", ImGuiDir_Right))
                {

                }

                ImGui::Text("Work in progress...");
                ImGui::EndGroup();

                ImGui::EndPopup();
            }

            ImGui::EndTable();
        }

        ImGui::EndChild();
    }

    if (popOut && selectedPlayer >= 0 && selectedPlayer < playerInfoList.size()) {

		ImGui::Begin("Pop Out Information Panel", NULL, ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoSavedSettings);

        const auto& selectedPlayerInfo = playerInfoList[selectedPlayer];

        if (ImGui::BeginTable("PopOutTable", 2)) {
            ImGui::TableSetupColumn("Info Categories");
            ImGui::TableSetupColumn("Player Information");
            ImGui::TableHeadersRow();

            for (const auto& entry : selectedPlayerInfo) {
                ImGui::TableNextRow();
                ImGui::TableSetColumnIndex(0);
                ImGui::TextUnformatted(entry.first.c_str());

                ImGui::TableSetColumnIndex(1);
                ImGui::TextUnformatted(entry.second.c_str());
            }

            ImGui::EndTable();
        }

        ImGui::End();
    }
}

//Testing with GameServer Class - Can't get it to work :shrug:

void RenderHookedGameServerClass() {
    static std::vector<std::string> playerNames;

    if (ImGui::Button("Test Game Server Hook"))
    {
        std::cout << "[*] Button clicked\n";

        //TODO: Hook GameServer

        /*
            [*] Button clicked
            [-] Exception thrown by GameServer.getPlayers method.
            [*] Exception description: java.lang.NullPointerException: Cannot read field "connections" because "zombie.network.GameServer.udpEngine" is null
        */

        jobject playerList = javaGlobals.g_jniEnv->CallStaticObjectMethod(javaGlobals.classes.gameServerClass, javaGlobals.methods.gameServerGetPlayersMethodId);
        if (javaGlobals.g_jniEnv->ExceptionCheck()) {
            std::cout << "[-] Exception thrown by GameServer.getPlayers method.\n";

            jthrowable exception = javaGlobals.g_jniEnv->ExceptionOccurred();
            javaGlobals.g_jniEnv->ExceptionClear();

            jmethodID toStringMethod = javaGlobals.g_jniEnv->GetMethodID(javaGlobals.g_jniEnv->FindClass("java/lang/Throwable"), "toString", "()Ljava/lang/String;");
            jstring description = (jstring)javaGlobals.g_jniEnv->CallObjectMethod(exception, toStringMethod);

            const char* cDescription = javaGlobals.g_jniEnv->GetStringUTFChars(description, nullptr);
            std::cout << "[*] Exception description: " << cDescription << "\n";
            javaGlobals.g_jniEnv->ReleaseStringUTFChars(description, cDescription);

            return;
        }

        jint size = javaGlobals.g_jniEnv->CallIntMethod(playerList, javaGlobals.methods.sizeMethodId);
        if (size == 0) {
            std::cout << "[+] No players found.\n";
            return;
        }

        jmethodID getUsernameMethodId = javaGlobals.g_jniEnv->GetMethodID(javaGlobals.classes.isoPlayerClass, "getUsername", "()Ljava/lang/String;");
        if (!getUsernameMethodId) {
            std::cout << "[-] Error: Failed to get method ID of 'getUsername'.\n";
            return;
        }

        for (jint i = 0; i < size; ++i) {
            jobject player = javaGlobals.g_jniEnv->CallObjectMethod(playerList, javaGlobals.methods.getMethodId, i);
            if (!player) {
                std::cout << "[-] Error: Failed to get player at index " << i << ".\n";
                continue;
            }

            jstring usernameJString = (jstring)javaGlobals.g_jniEnv->CallObjectMethod(player, getUsernameMethodId);
            if (!usernameJString) {
                std::cout << "[-] Error: Failed to get username for player at index " << i << ".\n";
                continue;
            }

            const char* usernameCString = javaGlobals.g_jniEnv->GetStringUTFChars(usernameJString, nullptr);
            if (!usernameCString) {
                std::cout << "[-] Error: Failed to convert username to C string for player at index " << i << ".\n";
                continue;
            }

            std::string username(usernameCString);
            std::cout << "[+] Found: " << username << "\n";

            javaGlobals.g_jniEnv->ReleaseStringUTFChars(usernameJString, usernameCString);
        }
    }
}

void RenderPlayerlistWindow(bool* showPlayerlistWindow)
{
    ImGui::SetNextWindowSize(ImVec2(450, 350));

    if (ImGui::Begin("Playerslist Window", showPlayerlistWindow, ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoResize))
    {
        ImGui::Text(config.localizationManager.getString("development_notice").c_str());

        RenderHookedGameClientClass();
        
        //static int currentTab = 0;
        //ImGui::BeginTabBar("PlayerlistTabBar");

        //if (ImGui::BeginTabItem("Player List | GameClient"))
        //{
        //    RenderHookedGameClientClass();
        //    ImGui::EndTabItem();
        //}

        //if (ImGui::BeginTabItem("Player List | GameServer"))
        //{
        //    RenderHookedGameServerClass();
        //    ImGui::EndTabItem();
        //}

        //ImGui::EndTabBar();

        ImGui::End();
    }
}