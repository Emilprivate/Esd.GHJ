#pragma once

void RenderMaterialsSection() {
    ImGui::BeginChild("MaterialsSectionChildWindow", ImVec2(0, 0), true);

    //Materials
    RenderSection("electrical", electrical, electricalOpened, Combined::Electrical().jsonData);
    RenderSection("fabric", fabric, fabricOpened, Combined::Fabric().jsonData);
    RenderSection("hairproducts", hairproducts, hairproductsOpened, Combined::Hairproducts().jsonData);
    RenderSection("lightbulb", lightbulb, lightbulbOpened, Combined::Lightbulb().jsonData);
    RenderSection("metalwork", metalwork, metalworkOpened, Combined::Metalwork().jsonData);
    RenderSection("miscellaneous3", miscellaneous3, miscellaneous3Opened, Combined::Miscellaneous3().jsonData);
    RenderSection("paint", paint, paintOpened, Combined::Paint().jsonData);
    RenderSection("seeds", seeds, seedsOpened, Combined::Seeds().jsonData);
    RenderSection("woodwork", woodwork, woodworkOpened, Combined::Woodwork().jsonData);

    ImGui::EndChild();
}