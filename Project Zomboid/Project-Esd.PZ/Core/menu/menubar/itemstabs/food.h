#pragma once

void RenderFoodSection() {
    ImGui::BeginChild("FoodSectionChildWindow", ImVec2(0, 0), true);

    //Food
    RenderSection("forage", forage, forageOpened, Combined::Forage().jsonData);
    RenderSection("fruit", fruit, fruitOpened, Combined::Fruit().jsonData);
    RenderSection("grains", grains, grainsOpened, Combined::Grains().jsonData);
    RenderSection("miscellaneous2", miscellaneous2, miscellaneous2Opened, Combined::Miscellaneous2().jsonData);
    RenderSection("miscellaneous2p5", miscellaneous2p5, miscellaneous2p5Opened, Combined::Miscellaneous2p5().jsonData);
    RenderSection("sweets", sweets, sweetsOpened, Combined::Sweets().jsonData);
    RenderSection("vegetable", vegetable, vegetableOpened, Combined::Vegetable().jsonData);

    RenderSection("cannedFood", cannedFood, cannedFoodOpened, Combined::Canned_food().jsonData);
    RenderSection("pickledFood", pickledFood, pickledFoodOpened, Combined::Pickled_food().jsonData);

    RenderSection("evolvedRecipe", evolvedRecipe, evolvedRecipeOpened, Combined::Evolvedrecipe().jsonData);
    RenderSection("preparedOrCooked", preparedOrCooked, preparedOrCookedOpened, Combined::Preparedorcooked().jsonData);
    RenderSection("spice", spice, spiceOpened, Combined::Spice().jsonData);

    RenderSection("drink", drink, drinkOpened, Combined::Drink().jsonData);
    RenderSection("refillable", refillable, refillableOpened, Combined::Refillable().jsonData);

    RenderSection("fish", fish, fishOpened, Combined::Fish().jsonData);
    RenderSection("game", game, gameOpened, Combined::Game().jsonData);
    RenderSection("protein", protein, proteinOpened, Combined::Protein().jsonData);

    ImGui::EndChild();
}
