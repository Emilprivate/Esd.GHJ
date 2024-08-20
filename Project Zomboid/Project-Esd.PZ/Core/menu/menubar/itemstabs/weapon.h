#pragma once

void RenderWeaponsSection() {
    ImGui::BeginChild("WeaponsSectionChildWindow", ImVec2(0, 0), true);

    //Weapons
    RenderSection("axe", axe, axeOpened, Combined::Axe().jsonData);
    RenderSection("handguns", handguns, handgunsOpened, Combined::Handguns().jsonData);
    RenderSection("improvised", improvised, improvisedOpened, Combined::Improvised().jsonData);
    RenderSection("longBlade", longBlade, longBladeOpened, Combined::LongBlade().jsonData);
    RenderSection("longBlunt", longBlunt, longBluntOpened, Combined::LongBlunt().jsonData);
    RenderSection("longBlunt2", longBlunt2, longBlunt2Opened, Combined::LongBlunt2().jsonData);
    RenderSection("rifles", riles, rilesOpened, Combined::Riles().jsonData);
    RenderSection("shortBlade", shortBlade, shortBladeOpened, Combined::Short_blade().jsonData);
    RenderSection("shortBlunt", shortBlunt, shortBluntOpened, Combined::Short_blunt().jsonData);
    RenderSection("shotguns", shotguns, shotgunsOpened, Combined::Shotguns().jsonData);
    RenderSection("spear", spear, spearOpened, Combined::Spear().jsonData);
    RenderSection("throwables", throwables, throwablesOpened, Combined::Throwables().jsonData);

    ImGui::EndChild();
}