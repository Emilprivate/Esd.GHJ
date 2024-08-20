#pragma once
void RenderVehicleSection() {
    ImGui::BeginChild("VehicleSectionChildWindow", ImVec2(0, 0), true);

    //Vehicle
    RenderSection("brake", brake, brakeOpened, Combined::Brake().jsonData);
    RenderSection("door", door, doorOpened, Combined::Door().jsonData);
    RenderSection("gasTank", gasTank, gasTankOpened, Combined::Gas_tank().jsonData);
    RenderSection("generalPart", generalPart, generalPartOpened, Combined::General_part().jsonData);
    RenderSection("muffler", muffler, mufflerOpened, Combined::Muffler().jsonData);
    RenderSection("seat", seat, seatOpened, Combined::Seat().jsonData);
    RenderSection("suspension", suspension, suspensionOpened, Combined::Suspension().jsonData);
    RenderSection("tire", tire, tireOpened, Combined::Tire().jsonData);
    RenderSection("window", window, windowOpened, Combined::Window().jsonData);

    ImGui::EndChild();
}