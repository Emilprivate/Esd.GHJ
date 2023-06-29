#pragma once

void RenderMedicalSection() {
    ImGui::BeginChild("MedicalSectionChildWindow", ImVec2(0, 0), true);

    //Medical
    RenderSection("bandages", bandages, bandagesOpened, Combined::Bandages().jsonData);
    RenderSection("disinfectants", disinfectants, disinfectantsOpened, Combined::Disinfectants().jsonData);
    RenderSection("medicalequipment", medicalequipment, medicalequipmentOpened, Combined::Medicalequipment().jsonData);
    RenderSection("pharmaceuticals", pharmaceuticals, pharmaceuticalsOpened, Combined::Pharmaceuticals().jsonData);

    RenderSection("herbs", herbs, herbsOpened, Combined::Herbs().jsonData);
    RenderSection("poultices", poultices, poulticesOpened, Combined::Poultices().jsonData);

    ImGui::EndChild();
}