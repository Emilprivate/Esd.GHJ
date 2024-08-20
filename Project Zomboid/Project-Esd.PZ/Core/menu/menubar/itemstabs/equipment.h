#pragma once

void RenderEquipmentSection() {
    ImGui::BeginChild("EquipmentSectionChildWindow", ImVec2(0, 0), true);

    //Equipment
    RenderSection("handheld", handheld, handheldOpened, Combined::Handheld().jsonData);
    RenderSection("wearable", wearable, wearableOpened, Combined::Wearable().jsonData);

    RenderSection("communication", communication, communicationOpened, Combined::Communication().jsonData);
    RenderSection("electronic", electronic, electronicOpened, Combined::Electronic().jsonData);

    RenderSection("containers", containers, containersOpened, Combined::Containers().jsonData);
    RenderSection("keys", keys, keysOpened, Combined::Keys().jsonData);
    RenderSection("locks", locks, locksOpened, Combined::Locks().jsonData);

    RenderSection("camping", camping, campingOpened, Combined::Camping().jsonData);
    RenderSection("cooking", cooking, cookingOpened, Combined::Cooking().jsonData);
    RenderSection("farmingTools", farmingTools, farmingToolsOpened, Combined::Farmingtools().jsonData);
    RenderSection("fertilizer", fertilizer, fertilizerOpened, Combined::Fertilizer().jsonData);
    RenderSection("fishing", fishing, fishingOpened, Combined::Fishing().jsonData);
    RenderSection("equipment seeds", seeds2, seeds2Opened, Combined::Seeds2().jsonData);
    RenderSection("trapping", trapping, trappingOpened, Combined::Trapping().jsonData);

    ImGui::EndChild();
}
