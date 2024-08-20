#pragma once

void RenderLiteratureSection() {
    ImGui::BeginChild("LiteratureSectionChildWindow", ImVec2(0, 0), true);

    //Literature
    RenderSection("leisure", leisure, leisureOpened, Combined::Leisure().jsonData);
    RenderSection("map", map, mapOpened, Combined::Map().jsonData);
    RenderSection("recipeMagazine", recipeMagazine, recipeMagazineOpened, Combined::Recipemagazine().jsonData);
    RenderSection("skillbook", skillbook, skillbookOpened, Combined::Skillbook().jsonData);
    RenderSection("sritable", sritable, sritableOpened, Combined::Sritable().jsonData);

    ImGui::EndChild();
}