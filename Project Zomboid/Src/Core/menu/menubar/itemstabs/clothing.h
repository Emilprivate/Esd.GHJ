#pragma once

void RenderClothingSection() {
    ImGui::BeginChild("ClothingSectionChildWindow", ImVec2(0, 0), true);
    
    //Clothing
    RenderSection("belts", belts, beltsOpened, Combined::Belts().jsonData);
    RenderSection("eyewear", eyewear, eyewearOpened, Combined::Eyewear().jsonData);
    RenderSection("hands", hands, handsOpened, Combined::Hands().jsonData);
    RenderSection("headwear", headwear, headwearOpened, Combined::Headwear().jsonData);
    RenderSection("headwear2", headwear2, headwear2Opened, Combined::Headwear2().jsonData);
    RenderSection("masks", masks, masksOpened, Combined::Masks().jsonData);
    RenderSection("scarves", scarves, scarvesOpened, Combined::Scarves().jsonData);
    
    RenderSection("belly", belly, bellyOpened, Combined::Belly().jsonData);
    RenderSection("ears", ears, earsOpened, Combined::Ears().jsonData);
    RenderSection("fingers", fingers, fingersOpened, Combined::Fingers().jsonData);
    RenderSection("neck", neck, neckOpened, Combined::Neck().jsonData);
    RenderSection("necklace", necklace, necklaceOpened, Combined::Necklace().jsonData);
    RenderSection("necklaceLong", necklaceLong, necklaceLongOpened, Combined::Necklacelong().jsonData);
    RenderSection("nose", nose, noseOpened, Combined::Nose().jsonData);
    RenderSection("wrists", wrists, wristsOpened, Combined::Wrists().jsonData);
    
    RenderSection("feet", feet, feetOpened, Combined::Feet().jsonData);
    RenderSection("jackets", jackets, jacketsOpened, Combined::Jackets().jsonData);
    RenderSection("jackets2", jackets2, jackets2Opened, Combined::Jackets2().jsonData);
    RenderSection("legs", legs, legsOpened, Combined::Legs().jsonData);
    RenderSection("legs2", legs2, legs2Opened, Combined::Legs2().jsonData);
    RenderSection("shirts", shirts, shirtsOpened, Combined::Shirts().jsonData);
    RenderSection("shortsleeveShirts", shortsleeveShirts, shortsleeveShirtsOpened, Combined::Shortsleeveshirts().jsonData);
    RenderSection("socks", socks, socksOpened, Combined::Socks().jsonData);
    RenderSection("suit", suit, suitOpened, Combined::Suit().jsonData);
    RenderSection("sweaters", sweaters, sweatersOpened, Combined::Sweaters().jsonData);
    RenderSection("tanktop", tanktop, tanktopOpened, Combined::Tanktop().jsonData);
    RenderSection("torsoExtra", torsoExtra, torsoExtraOpened, Combined::Torsoextra().jsonData);
    RenderSection("tshirt", tShirts, tShirtsOpened, Combined::Tshirts().jsonData);
    RenderSection("underclothing", underclothing, underclothingOpened, Combined::Underclothing().jsonData);
    
    RenderSection("tail", tail, tailOpened, Combined::Tail().jsonData);
    RenderSection("underwear", underwear, underwearOpened, Combined::Underwear().jsonData);
    RenderSection("underwearBottom", underwearBottom, underwearBottomOpened, Combined::Underwearbottom().jsonData);
    RenderSection("underwearExtra1", underwearExtra1, underwearExtra1Opened, Combined::Underwearextra1().jsonData);
    RenderSection("underwearExtra2", underwearExtra2, underwearExtra2Opened, Combined::Underwearextra2().jsonData);
    RenderSection("underwearTop", underwearTop, underwearTopOpened, Combined::Underweartop().jsonData);

    ImGui::EndChild();
}
