#pragma once

void RenderMiscSection() {
    ImGui::BeginChild("MiscSectionChildWindow", ImVec2(0, 0), true);

    //Misc
    RenderSection("miscellaneous4", miscellaneous4, miscellaneous4Opened, Combined::Miscellaneous4().jsonData);

    //Unimplemented - also misc
    RenderSection("Unimplemented materials", materials, materialsOpened, Combined::Materials().jsonData);
    RenderSection("Unimplemented miscellaneous", miscellaneous5, miscellaneous5Opened, Combined::Miscellaneous5().jsonData);
    RenderSection("Unimplemented recipeMagazine", recipeMagazine2, recipeMagazine2Opened, Combined::Recipemagazine2().jsonData);
    RenderSection("Unimplemented skillBook", skillBook2, skillBook2Opened, Combined::SkillBook2().jsonData);
    RenderSection("Unimplemented tools", tools, toolsOpened, Combined::Tools().jsonData);
    RenderSection("Unimplemented weapons", weapons, weaponsOpened, Combined::Weapons().jsonData);
    RenderSection("Unimplemented writable", writable, writableOpened, Combined::Writable().jsonData);

    ImGui::EndChild();
}
