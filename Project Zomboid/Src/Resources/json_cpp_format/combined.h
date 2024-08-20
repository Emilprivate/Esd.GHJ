#pragma once

struct Combined {
    struct Belts {
        const char* jsonData = R"(
    [
        {
            "column1": "",
            "column2": "Belt",
            "column3": "0.2",
            "column4": "Belt",
            "column5": "SmallBeltLeftSmallBeltRight",
            "column6": "Base.Belt2"
        },
        {
            "column1": "",
            "column2": "Bullets Bandolier",
            "column3": "1.0",
            "column4": "AmmoStrap",
            "column5": "-",
            "column6": "Base.AmmoStrap_Bullets"
        },
        {
            "column1": "",
            "column2": "Double Holster",
            "column3": "0.2",
            "column4": "BeltExtra",
            "column5": "HolsterLeftHolsterRight",
            "column6": "Base.HolsterDouble"
        },
        {
            "column1": "",
            "column2": "Holster",
            "column3": "0.2",
            "column4": "BeltExtra",
            "column5": "HolsterRight",
            "column6": "Base.HolsterSimple"
        },
        {
            "column1": "",
            "column2": "Shells Bandolier",
            "column3": "1.0",
            "column4": "AmmoStrap",
            "column5": "-",
            "column6": "Base.AmmoStrap_Shells"
        }
    ]
    )";
    };

    struct Eyewear {
        const char* jsonData = R"(
    [
        {
            "column1": "",
            "column2": "Aviator Glasses",
            "column3": "0.1",
            "column4": "Eyes50% chance to fall",
            "column5": "Base.Glasses_Aviators"
        },
        {
            "column1": "",
            "column2": "Glasses",
            "column3": "0.1",
            "column4": "Eyes50% chance to fall",
            "column5": "Base.Glasses_Normal"
        },
        {
            "column1": "",
            "column2": "Reading Glasses",
            "column3": "0.1",
            "column4": "Eyes50% chance to fall",
            "column5": "Base.Glasses_Reading"
        },
        {
            "column1": "",
            "column2": "Reflective Sunglasses",
            "column3": "0.1",
            "column4": "Eyes20% chance to fall",
            "column5": "Base.Glasses"
        },
        {
            "column1": "",
            "column2": "Safety Goggles",
            "column3": "0.1",
            "column4": "Eyes20% chance to fall",
            "column5": "Base.Glasses_SafetyGoggles"
        },
        {
            "column1": "",
            "column2": "Shooting Glasses",
            "column3": "0.1",
            "column4": "Eyes20% chance to fall",
            "column5": "Base.Glasses_Shooting"
        },
        {
            "column1": "",
            "column2": "Ski Goggles",
            "column3": "0.1",
            "column4": "Eyes20% chance to fall",
            "column5": "Base.Glasses_SkiGoggles"
        },
        {
            "column1": "",
            "column2": "Sunglasses",
            "column3": "0.1",
            "column4": "Eyes50% chance to fall",
            "column5": "Base.Glasses_Sun"
        },
        {
            "column1": "",
            "column2": "Swimming Goggles",
            "column3": "0.1",
            "column4": "Eyes30% chance to fall",
            "column5": "Base.Glasses_SwimmingGoggles"
        },
        {
            "column1": "",
            "column2": "Eyepatch",
            "column3": "0.01",
            "column4": "LeftEyeor RightEye",
            "column5": "Base.Glasses_Eyepatch_Left"
        }
    ]
    )";
    };

    struct Hands {
        const char* jsonData = R"(
    [
        {
            "column1": "",
            "column2": "Boxing Gloves",
            "column3": "0.1",
            "column4": "Hands",
            "column5": "Left HandRight HandCan't be repaired",
            "column6": "-",
            "column7": "0%",
            "column8": "0%",
            "column9": "0%",
            "column10": "25%",
            "column11": "30%",
            "column12": "-",
            "column13": "Base.Gloves_BoxingRed"
        },
        {
            "column1": "",
            "column2": "Fingerless Gloves",
            "column3": "0.1",
            "column4": "Hands",
            "column5": "Left HandRight HandCan't be repaired",
            "column6": "-",
            "column7": "0%",
            "column8": "0%",
            "column9": "0%",
            "column10": "25%",
            "column11": "30%",
            "column12": "-",
            "column13": "Base.Gloves_FingerlessGloves"
        },
        {
            "column1": "",
            "column2": "Gloves",
            "column3": "0.1",
            "column4": "Hands",
            "column5": "Left HandRight Hand",
            "column6": "",
            "column7": "0%",
            "column8": "0%",
            "column9": "0%",
            "column10": "100%",
            "column11": "100%",
            "column12": "-",
            "column13": "Base.Gloves_WhiteTINT"
        },
        {
            "column1": "",
            "column2": "Leather Gloves",
            "column3": "0.1",
            "column4": "Hands",
            "column5": "Left HandRight Hand",
            "column6": "",
            "column7": "15%",
            "column8": "30%",
            "column9": "0%",
            "column10": "75%",
            "column11": "75%",
            "column12": "-",
            "column13": "Base.Gloves_LeatherGloves"
        },
        {
            "column1": "",
            "column2": "Long Gloves",
            "column3": "0.1",
            "column4": "Hands",
            "column5": "Left HandRight Hand",
            "column6": "",
            "column7": "0%",
            "column8": "0%",
            "column9": "0%",
            "column10": "50%",
            "column11": "50%",
            "column12": "-",
            "column13": "Base.Gloves_LongWomenGloves"
        },
        {
            "column1": "",
            "column2": "Surgical Gloves",
            "column3": "0.1",
            "column4": "Hands",
            "column5": "Left HandRight HandCan't be repaired",
            "column6": "-",
            "column7": "0%",
            "column8": "0%",
            "column9": "0%",
            "column10": "25%",
            "column11": "30%",
            "column12": "-",
            "column13": "Base.Gloves_Surgical"
        }
    ]
    )";
    };

    struct Headwear {
        const char* jsonData = R"(
    [
           {
            "column1": "",
            "column2": "Air Force Helmet",
            "column3": "1.0",
            "column4": "FullHat(HatMaskEyesLeftEyeRightEye) 0% chance to fall",
            "column5": "HeadCan't be repairedCan't have holes",
            "column6": "95%",
            "column7": "100%",
            "column8": "100%",
            "column9": "0%",
            "column10": "70%",
            "column11": "70%",
            "column12": "100%",
            "column13": "Base.Hat_SPHhelmet"
        },
        {
            "column1": "",
            "column2": "Antlers Boppers",
            "column3": "1.0",
            "column4": "Hat10% chance to fall",
            "column5": "HeadCan't be repairedCan't have holes",
            "column6": "-",
            "column7": "0%",
            "column8": "0%",
            "column9": "0%",
            "column10": "-",
            "column11": "-",
            "column12": "-",
            "column13": "Base.Hat_Antlers"
        },
        {
            "column1": "",
            "column2": "Bandana (Head) ",
            "column3": "0.1",
            "column4": "Hat30% chance to fall",
            "column5": "HeadCan't be inspectedCan't have holes",
            "column6": "-",
            "column7": "-",
            "column8": "-",
            "column9": "-",
            "column10": "10%",
            "column11": "-",
            "column12": "-",
            "column13": "Base.Hat_Bandana"
        },
        {
            "column1": "",
            "column2": "Bandana (Tied) ",
            "column3": "0.1",
            "column4": "Hat30% chance to fall",
            "column5": "HeadCan't be inspectedCan't have holes",
            "column6": "-",
            "column7": "-",
            "column8": "-",
            "column9": "-",
            "column10": "10%",
            "column11": "-",
            "column12": "-",
            "column13": "Base.Hat_BandanaTied"
        },
        {
            "column1": "",
            "column2": "Army Baseball CapBaseball CapKentucky Baseball Cap",
            "column3": "0.5",
            "column4": "Hat60% chance to fall (80% for unreversed red variant) ",
            "column5": "HeadCan't be inspectedCan't have holes",
            "column6": "-",
            "column7": "-",
            "column8": "-",
            "column9": "-",
            "column10": "10%",
            "column11": "-",
            "column12": "-",
            "column13": "Base.Hat_BaseballCap"
        },
        {
            "column1": "",
            "column2": "Kentucky Baseball HelmetRiverside Rangers Baseball HelmetZ Hurricanes Baseball Helmet",
            "column3": "1.0",
            "column4": "Hat0% chance to fall",
            "column5": "HeadCan't be repairedCan't have holes",
            "column6": "95%",
            "column7": "100%",
            "column8": "100%",
            "column9": "0%",
            "column10": "30%",
            "column11": "-",
            "column12": "-",
            "column13": "Base.Hat_BaseballHelmet_KY"
        },
        {
            "column1": "",
            "column2": "Beanie Hat",
            "column3": "0.5",
            "column4": "Hat40% chance to fall",
            "column5": "HeadCan't be repairedCan't have holes",
            "column6": "-",
            "column7": "0%",
            "column8": "0%",
            "column9": "0%",
            "column10": "60%",
            "column11": "30%",
            "column12": "-",
            "column13": "Base.Hat_Beany"
        },
        {
            "column1": "",
            "column2": "Army BeretBeret",
            "column3": "0.5",
            "column4": "Hat60% chance to fall",
            "column5": "HeadCan't be repairedCan't have holes",
            "column6": "-",
            "column7": "0%",
            "column8": "0%",
            "column9": "0%",
            "column10": "30%",
            "column11": "-",
            "column12": "-",
            "column13": "Base.Hat_Beret"
        },
        {
            "column1": "",
            "column2": "Bicycle Helmet",
            "column3": "1.0",
            "column4": "Hat0% chance to fall",
            "column5": "HeadCan't be repairedCan't have holes",
            "column6": "-",
            "column7": "0%",
            "column8": "0%",
            "column9": "0%",
            "column10": "25%",
            "column11": "15%",
            "column12": "-",
            "column13": "Base.Hat_BicycleHelmet"
        },
        {
            "column1": "",
            "column2": "Boonie HatCamo Boonie Hat",
            "column3": "0.5",
            "column4": "Hat60% chance to fall",
            "column5": "HeadCan't be repairedCan't have holes",
            "column6": "-",
            "column7": "0%",
            "column8": "0%",
            "column9": "0%",
            "column10": "50%",
            "column11": "30%",
            "column12": "-",
            "column13": "Base.Hat_BonnieHat"
        },
        {
            "column1": "",
            "column2": "Boxing Head Gear",
            "column3": "1.0",
            "column4": "FullHat(HatMaskEyesLeftEyeRightEye) ",
            "column5": "HeadCan't be repairedCan't have holes",
            "column6": "-",
            "column7": "30%",
            "column8": "50%",
            "column9": "0%",
            "column10": "30%",
            "column11": "10%",
            "column12": "-",
            "column13": "Base.Hat_BoxingRed"
        },
        {
            "column1": "",
            "column2": "Bucket Hat",
            "column3": "1.0",
            "column4": "Hat60% chance to fall",
            "column5": "HeadCan't be repairedCan't have holes",
            "column6": "-",
            "column7": "0%",
            "column8": "0%",
            "column9": "0%",
            "column10": "50%",
            "column11": "30%",
            "column12": "-",
            "column13": "Base.Hat_BucketHat"
        },
        {
            "column1": "",
            "column2": "Bunny Ears",
            "column3": "1.0",
            "column4": "Hat10% chance to fall",
            "column5": "HeadCan't be repairedCan't have holes",
            "column6": "-",
            "column7": "0%",
            "column8": "0%",
            "column9": "0%",
            "column10": "-",
            "column11": "-",
            "column12": "-",
            "column13": "Base.Hat_BunnyEarsBlack"
        },
        {
            "column1": "",
            "column2": "Chef Hat",
            "column3": "0.5",
            "column4": "Hat80% chance to fall",
            "column5": "HeadCan't be inspectedCan't have holes",
            "column6": "-",
            "column7": "-",
            "column8": "-",
            "column9": "-",
            "column10": "-",
            "column11": "-",
            "column12": "-",
            "column13": "Base.Hat_ChefHat"
        },
        {
            "column1": "",
            "column2": "Cowboy Hat",
            "column3": "1.0",
            "column4": "Hat50% chance to fall",
            "column5": "HeadCan't be repairedCan't have holes",
            "column6": "-",
            "column7": "0%",
            "column8": "0%",
            "column9": "0%",
            "column10": "30%",
            "column11": "20%",
            "column12": "-",
            "column13": "Base.Hat_Cowboy"
        },
        {
            "column1": "",
            "column2": "Crash Helmet",
            "column3": "1.0",
            "column4": "Hat0% chance to fall",
            "column5": "HeadCan't be repairedCan't have holes",
            "column6": "-",
            "column7": "100%",
            "column8": "100%",
            "column9": "0%",
            "column10": "80%",
            "column11": "80%",
            "column12": "-",
            "column13": "Base.Hat_CrashHelmet"
        },
        {
            "column1": "",
            "column2": "Ear Muffs",
            "column3": "0.3",
            "column4": "Hat30% chance to fall",
            "column5": "HeadCan't be repairedCan't have holes",
            "column6": "-",
            "column7": "0%",
            "column8": "0%",
            "column9": "0%",
            "column10": "40%",
            "column11": "40%",
            "column12": "-",
            "column13": "Base.Hat_EarMuffs"
        },
        {
            "column1": "",
            "column2": "Ear Protectors",
            "column3": "0.3",
            "column4": "Hat30% chance to fall",
            "column5": "HeadCan't be repairedCan't have holes",
            "column6": "-",
            "column7": "0%",
            "column8": "0%",
            "column9": "0%",
            "column10": "35%",
            "column11": "35%",
            "column12": "-",
            "column13": "Base.Hat_EarMuff_Protectors"
        },
        {
            "column1": "",
            "column2": "Fast Food Server Hat",
            "column3": "0.3",
            "column4": "Hat80% chance to fall",
            "column5": "HeadCan't be inspectedCan't have holes",
            "column6": "-",
            "column7": "-",
            "column8": "-",
            "column9": "-",
            "column10": "-",
            "column11": "-",
            "column12": "-",
            "column13": "Base.Hat_FastFood"
        },
        {
            "column1": "",
            "column2": "Black Band FedoraFedora",
            "column3": "0.5",
            "column4": "Hat40% chance to fall",
            "column5": "HeadCan't be repairedCan't have holes",
            "column6": "-",
            "column7": "0%",
            "column8": "0%",
            "column9": "0%",
            "column10": "15%",
            "column11": "10%",
            "column12": "-",
            "column13": "Base.Hat_Fedora"
        },
        {
            "column1": "",
            "column2": "Firefighter Helmet",
            "column3": "1.5",
            "column4": "Hat0% chance to fall",
            "column5": "HeadCan't be repairedCan't have holes",
            "column6": "-",
            "column7": "100%",
            "column8": "100%",
            "column9": "0%",
            "column10": "65%",
            "column11": "55%",
            "column12": "60%",
            "column13": "Base.Hat_Fireman"
        },
        {
            "column1": "",
            "column2": "Football Helmet",
            "column3": "1.0",
            "column4": "FullHat(HatMaskEyesLeftEyeRightEye) 0% chance to fall",
            "column5": "HeadCan't be repairedCan't have holes",
            "column6": "95%",
            "column7": "100%",
            "column8": "100%",
            "column9": "0%",
            "column10": "55%",
            "column11": "35%",
            "column12": "85%",
            "column13": "Base.Hat_FootballHelmet"
        },
        {
            "column1": "",
            "column2": "Furry Ears",
            "column3": "1.0",
            "column4": "Hat10% chance to fall",
            "column5": "HeadCan't be repairedCan't have holes",
            "column6": "-",
            "column7": "0%",
            "column8": "0%",
            "column9": "0%",
            "column10": "-",
            "column11": "-",
            "column12": "-",
            "column13": "Base.Hat_FurryEars"
        },
        {
            "column1": "",
            "column2": "GoldStar Boppers",
            "column3": "1.0",
            "column4": "Hat10% chance to fall",
            "column5": "HeadCan't be repairedCan't have holes",
            "column6": "-",
            "column7": "0%",
            "column8": "0%",
            "column9": "0%",
            "column10": "-",
            "column11": "-",
            "column12": "-",
            "column13": "Base.Hat_GoldStar"
        },
        {
            "column1": "",
            "column2": "Golf CapTartan Golf Cap",
            "column3": "0.3",
            "column4": "Hat60% chance to fall",
            "column5": "HeadCan't be inspectedCan't have holes",
            "column6": "-",
            "column7": "-",
            "column8": "-",
            "column9": "-",
            "column10": "-",
            "column11": "-",
            "column12": "-",
            "column13": "Base.Hat_GolfHat"
        },
        {
            "column1": "",
            "column2": "Hard Hat",
            "column3": "1.0",
            "column4": "Hat",
            "column5": "HeadCan't be repairedCan't have holes",
            "column6": "-",
            "column7": "100%",
            "column8": "100%",
            "column9": "0%",
            "column10": "15%",
            "column11": "25%",
            "column12": "50%",
            "column13": "Base.Hat_HardHat"
        },
        {
            "column1": "",
            "column2": "Hat Arrow",
            "column3": "1.0",
            "column4": "Hat10% chance to fall",
            "column5": "HeadCan't be repairedCan't have holes",
            "column6": "-",
            "column7": "0%",
            "column8": "0%",
            "column9": "0%",
            "column10": "-",
            "column11": "-",
            "column12": "-",
            "column13": "Base.Hat_JokeArrow"
        },
        {
            "column1": "",
            "column2": "Hat Knife",
            "column3": "1.0",
            "column4": "Hat10% chance to fall",
            "column5": "HeadCan't be repairedCan't have holes",
            "column6": "-",
            "column7": "0%",
            "column8": "0%",
            "column9": "0%",
            "column10": "-",
            "column11": "-",
            "column12": "-",
            "column13": "Base.Hat_JokeKnife"
        },
        {
            "column1": "",
            "column2": "Hockey Helmet",
            "column3": "1.0",
            "column4": "Hat",
            "column5": "HeadCan't be repairedCan't have holes",
            "column6": "-",
            "column7": "100%",
            "column8": "100%",
            "column9": "0%",
            "column10": "-",
            "column11": "-",
            "column12": "-",
            "column13": "Base.Hat_HockeyHelmet"
        },
        {
            "column1": "",
            "column2": "Ice Cream Server Hat",
            "column3": "0.3",
            "column4": "Hat80% chance to fall",
            "column5": "HeadCan't be inspectedCan't have holes",
            "column6": "-",
            "column7": "-",
            "column8": "-",
            "column9": "-",
            "column10": "-",
            "column11": "-",
            "column12": "-",
            "column13": "Base.Hat_FastFood_IceCream"
        },
        {
            "column1": "",
            "column2": "Jay Chicken Hat",
            "column3": "1.0",
            "column4": "Hat10% chance to fall",
            "column5": "HeadCan't be repairedCan't have holes",
            "column6": "-",
            "column7": "0%",
            "column8": "0%",
            "column9": "0%",
            "column10": "-",
            "column11": "-",
            "column12": "-",
            "column13": "Base.Hat_Jay"
        },
        {
            "column1": "",
            "column2": "Jockey Helmet - 1Jockey Helmet - 2Jockey Helmet - 3 Jockey Helmet - 4Jockey Helmet - 5Jockey Helmet - 6",
            "column3": "1.0",
            "column4": "Hat",
            "column5": "HeadCan't be repairedCan't have holes",
            "column6": "-",
            "column7": "100%",
            "column8": "100%",
            "column9": "0%",
            "column10": "-",
            "column11": "-",
            "column12": "-",
            "column13": "Base.Hat_JockeyHelmet01"
        }
    ])";
    };

    struct Headwear2 {
        const char* jsonData = R"(
    [
        {
            "column1": "",
            "column2": "Peaked Army Cap",
            "column3": "0.3",
            "column4": "Hat60% chance to fall",
            "column5": "HeadCan't be repairedCan't have holes",
            "column6": "-",
            "column7": "0%",
            "column8": "0%",
            "column9": "0%",
            "column10": "15%",
            "column11": "10%",
            "column12": "-",
            "column13": "Base.Hat_PeakedCapArmy"
        },
        {
            "column1": "",
            "column2": "Police Deputy Hat",
            "column3": "1.0",
            "column4": "Hat40% chance to fall",
            "column5": "HeadCan't be inspectedCan't have holes",
            "column6": "-",
            "column7": "-",
            "column8": "-",
            "column9": "-",
            "column10": "-",
            "column11": "-",
            "column12": "20%",
            "column13": "Base.Hat_Police_Grey"
        },
        {
            "column1": "",
            "column2": "Police Motorcycle Helmet",
            "column3": "1.0",
            "column4": "Hat0% chance to fall",
            "column5": "HeadCan't be repairedCan't have holes",
            "column6": "95%",
            "column7": "100%",
            "column8": "100%",
            "column9": "0%",
            "column10": "80%",
            "column11": "80%",
            "column12": "-",
            "column13": "Base.Hat_CrashHelmet_Police"
        },
        {
            "column1": "",
            "column2": "Police Trooper Hat",
            "column3": "1.0",
            "column4": "Hat40% chance to fall",
            "column5": "HeadCan't be inspectedCan't have holes",
            "column6": "-",
            "column7": "-",
            "column8": "-",
            "column9": "-",
            "column10": "-",
            "column11": "-",
            "column12": "20%",
            "column13": "Base.Hat_Police"
        },
        {
            "column1": "",
            "column2": "Raccoon Hat",
            "column3": "2.0",
            "column4": "Hat30% chance to fall",
            "column5": "HeadCan't be repairedCan't have holes",
            "column6": "-",
            "column7": "0%",
            "column8": "0%",
            "column9": "0%",
            "column10": "80%",
            "column11": "75%",
            "column12": "35%",
            "column13": "Base.Hat_Raccoon"
        },
        {
            "column1": "",
            "column2": "Ranger Hat",
            "column3": "1.0",
            "column4": "Hat40% chance to fall",
            "column5": "HeadCan't be repairedCan't have holes",
            "column6": "-",
            "column7": "0%",
            "column8": "0%",
            "column9": "0%",
            "column10": "45%",
            "column11": "40%",
            "column12": "25%",
            "column13": "Base.Hat_Ranger"
        },
        {
            "column1": "",
            "column2": "Riding Helmet",
            "column3": "1.0",
            "column4": "Hat",
            "column5": "HeadCan't be repairedCan't have holes",
            "column6": "-",
            "column7": "100%",
            "column8": "100%",
            "column9": "0%",
            "column10": "-",
            "column11": "-",
            "column12": "-",
            "column13": "Base.Hat_RidingHelmet"
        },
        {
            "column1": "",
            "column2": "Riot Helmet",
            "column3": "1.0",
            "column4": "FullHat(HatMaskEyesLeftEyeRightEye) 0% chance to fall",
            "column5": "HeadCan't be repairedCan't have holes",
            "column6": "95%",
            "column7": "100%",
            "column8": "100%",
            "column9": "0%",
            "column10": "45%",
            "column11": "65%",
            "column12": "100%",
            "column13": "Base.Hat_RiotHelmet"
        },
        {
            "column1": "",
            "column2": "Green Santa HatSanta Hat",
            "column3": "0.5",
            "column4": "Hat80% chance to fall",
            "column5": "HeadCan't be repairedCan't have holes",
            "column6": "-",
            "column7": "0%",
            "column8": "0%",
            "column9": "0%",
            "column10": "80%",
            "column11": "25%",
            "column12": "-",
            "column13": "Base.Hat_SantaHatBase.Hat_SantaHatGreen"
        },
        {
            "column1": "",
            "column2": "Shower Cap",
            "column3": "0.2",
            "column4": "Hat60% chance to fall",
            "column5": "HeadCan't be inspectedCan't have holes",
            "column6": "-",
            "column7": "-",
            "column8": "-",
            "column9": "-",
            "column10": "-",
            "column11": "-",
            "column12": "-",
            "column13": "Base.Hat_ShowerCap"
        },
        {
            "column1": "",
            "column2": "Spiffo's Server Hat",
            "column3": "0.3",
            "column4": "Hat80% chance to fall",
            "column5": "HeadCan't be inspectedCan't have holes",
            "column6": "-",
            "column7": "-",
            "column8": "-",
            "column9": "-",
            "column10": "-",
            "column11": "-",
            "column12": "-",
            "column13": "Base.Hat_FastFood_Spiffo"
        },
        {
            "column1": "",
            "column2": "Spiffo Suit Head",
            "column3": "1.0",
            "column4": "FullHat(HatFaceEyesLeftEyeRightEye) 10% chance to fall",
            "column5": "HeadCan't be repairedCan't have holes",
            "column6": "-",
            "column7": "0%",
            "column8": "0%",
            "column9": "0%",
            "column10": "75%",
            "column11": "75%",
            "column12": "75%",
            "column13": "Base.Hat_Spiffo"
        },
        {
            "column1": "",
            "column2": "Summer Hat",
            "column3": "1.0",
            "column4": "Hat80% chance to fall",
            "column5": "HeadCan't be repairedCan't have holes",
            "column6": "-",
            "column7": "0%",
            "column8": "0%",
            "column9": "0%",
            "column10": "10%",
            "column11": "10%",
            "column12": "-",
            "column13": "Base.Hat_SummerHat"
        },
        {
            "column1": "",
            "column2": "Sweatband",
            "column3": "0.1",
            "column4": "Hat10% chance to fall",
            "column5": "HeadCan't be repairedCan't have holes",
            "column6": "-",
            "column7": "0%",
            "column8": "0%",
            "column9": "0%",
            "column10": "5%",
            "column11": "5%",
            "column12": "-",
            "column13": "Base.Hat_Sweatband"
        },
        {
            "column1": "",
            "column2": "Tin Foil Hat",
            "column3": "0.3",
            "column4": "Hat60% chance to fall",
            "column5": "HeadCan't be inspectedCan't have holes",
            "column6": "-",
            "column7": "-",
            "column8": "-",
            "column9": "-",
            "column10": "10%",
            "column11": "-",
            "column12": "-",
            "column13": "Base.Hat_TinFoilHat"
        },
        {
            "column1": "",
            "column2": "USA Crash Helmet",
            "column3": "1.0",
            "column4": "Hat0% chance to fall",
            "column5": "HeadCan't be repairedCan't have holes",
            "column6": "95%",
            "column7": "100%",
            "column8": "100%",
            "column9": "0%",
            "column10": "80%",
            "column11": "80%",
            "column12": "-",
            "column13": "Base.Hat_CrashHelmet_Stars"
        },
        {
            "column1": "",
            "column2": "Visor",
            "column3": "0.3",
            "column4": "Hat60% chance to fall",
            "column5": "HeadCan't be inspectedCan't have holes",
            "column6": "-",
            "column7": "-",
            "column8": "-",
            "column9": "-",
            "column10": "-",
            "column11": "-",
            "column12": "-",
            "column13": "Base.Hat_VisorBlackBase.Hat_VisorRedBase.Hat_VisorWhiteTINT"
        },
        {
            "column1": "",
            "column2": "Wedding Veil",
            "column3": "0.5",
            "column4": "Hat80% chance to fall",
            "column5": "HeadCan't be inspectedCan't have holes",
            "column6": "-",
            "column7": "-",
            "column8": "-",
            "column9": "-",
            "column10": "-",
            "column11": "-",
            "column12": "-",
            "column13": "Base.Hat_WeddingVeil"
        },
        {
            "column1": "",
            "column2": "Winter Hat",
            "column3": "0.5",
            "column4": "Hat40% chance to fall",
            "column5": "HeadCan't be repairedCan't have holes",
            "column6": "-",
            "column7": "0%",
            "column8": "0%",
            "column9": "0%",
            "column10": "100%",
            "column11": "100%",
            "column12": "50%",
            "column13": "Base.Hat_WinterHat"
        },
        {
            "column1": "",
            "column2": "Woolly Hat",
            "column3": "0.5",
            "column4": "Hat40% chance to fall",
            "column5": "HeadCan't be repairedCan't have holes",
            "column6": "-",
            "column7": "0%",
            "column8": "0%",
            "column9": "0%",
            "column10": "90%",
            "column11": "90%",
            "column12": "-",
            "column13": "Base.Hat_WoolyHat"
        },
        {
            "column1": "",
            "column2": "Medical Cap BlueMedical Cap Green",
            "column3": "0.2",
            "column4": "Hat60% chance to fall",
            "column5": "HeadCan't be inspectedCan't have holes",
            "column6": "-",
            "column7": "-",
            "column8": "-",
            "column9": "-",
            "column10": "-",
            "column11": "-",
            "column12": "-",
            "column13": "Base.Hat_SurgicalCap_BlueBase.Hat_SurgicalCap_Green"
        },
        {
            "column1": "",
            "column2": "Military Helmet",
            "column3": "1.0",
            "column4": "Hat10% chance to fall",
            "column5": "HeadCan't be repairedCan't have holes",
            "column6": "-",
            "column7": "100%",
            "column8": "100%",
            "column9": "0%",
            "column10": "25%",
            "column11": "-",
            "column12": "20%",
            "column13": "Base.Hat_Army"
        },
        {
            "column1": "",
            "column2": "Mining Helmet",
            "column3": "1.0",
            "column4": "Hat",
            "column5": "HeadCan't be repairedCan't have holes",
            "column6": "-",
            "column7": "100%",
            "column8": "100%",
            "column9": "0%",
            "column10": "15%",
            "column11": "20%",
            "column12": "-",
            "column13": "Base.Hat_HardHat_Miner"
        },
        {
            "column1": "",
            "column2": "Motorcycle Helmet",
            "column3": "1.0",
            "column4": "FullHat(HatMaskEyesLeftEyeRightEye) 0% chance to fall",
            "column5": "HeadCan't be repairedCan't have holes",
            "column6": "95%",
            "column7": "100%",
            "column8": "100%",
            "column9": "0%",
            "column10": "100%",
            "column11": "100%",
            "column12": "-",
            "column13": "Base.Hat_CrashHelmetFULL"
        },
        {
            "column1": "",
            "column2": "Newspaper Hat",
            "column3": "0.3",
            "column4": "Hat80% chance to fall",
            "column5": "HeadCan't be inspectedCan't have holes",
            "column6": "-",
            "column7": "-",
            "column8": "-",
            "column9": "-",
            "column10": "10%",
            "column11": "-",
            "column12": "-",
            "column13": "Base.Hat_NewspaperHat"
        },
        {
            "column1": "",
            "column2": "Nuclear Biochemical Mask",
            "column3": "1.0",
            "column4": "FullHat(HatMaskEyesLeftEyeRightEye) ",
            "column5": "HeadCan't be repairedCan't have holes",
            "column6": "-",
            "column7": "100%",
            "column8": "100%",
            "column9": "0%",
            "column10": "50%",
            "column11": "65%",
            "column12": "100%",
            "column13": "Base.Hat_NBCmask"
        },
        {
            "column1": "",
            "column2": "Colored Party HatParty Hat with Stars",
            "column3": "0.3",
            "column4": "Hat60% chance to fall",
            "column5": "HeadCan't be inspectedCan't have holes",
            "column6": "-",
            "column7": "-",
            "column8": "-",
            "column9": "-",
            "column10": "10%",
            "column11": "-",
            "column12": "-",
            "column13": "Base.Hat_PartyHat_StarsBase.Hat_PartyHat_TINT"
        }
    ]
    )";
    };

    struct Masks {
        const char* jsonData = R"(
    [
        {
            "column1": "",
            "column2": "Balaclava",
            "column3": "1.0",
            "column4": "Mask",
            "column5": "HeadCan't be repairedCan't have holes",
            "column6": "0%",
            "column7": "0%",
            "column8": "0%",
            "column9": "100%",
            "column10": "100%",
            "column11": "50%",
            "column12": "Base.Hat_BalaclavaFull"
        },
        {
            "column1": "",
            "column2": "Bandana (Face) ",
            "column3": "0.1",
            "column4": "Mask30% chance to fall",
            "column5": "HeadCan't be inspectedCan't have holes",
            "column6": "-",
            "column7": "-",
            "column8": "-",
            "column9": "10%",
            "column10": "-",
            "column11": "-",
            "column12": "Base.Hat_BandanaMask"
        },
        {
            "column1": "",
            "column2": "Dust Mask",
            "column3": "0.2",
            "column4": "Mask",
            "column5": "HeadCan't be repairedCan't have holes",
            "column6": "0%",
            "column7": "0%",
            "column8": "0%",
            "column9": "60%",
            "column10": "50%",
            "column11": "-",
            "column12": "Base.Hat_DustMask"
        },
        {
            "column1": "",
            "column2": "Gas Mask",
            "column3": "1.0",
            "column4": "MaskEyes(MaskEyesLeftEyeRightEye) ",
            "column5": "HeadCan't be repairedCan't have holes",
            "column6": "0%",
            "column7": "0%",
            "column8": "0%",
            "column9": "75%",
            "column10": "60%",
            "column11": "100%",
            "column12": "Base.Hat_GasMask"
        },
        {
            "column1": "",
            "column2": "Hockey Mask",
            "column3": "1.0",
            "column4": "MaskEyes(MaskEyesLeftEyeRightEye) ",
            "column5": "HeadCan't be repairedCan't have holes",
            "column6": "30%",
            "column7": "50%",
            "column8": "0%",
            "column9": "25%",
            "column10": "55%",
            "column11": "-",
            "column12": "Base.Hat_HockeyMask"
        },
        {
            "column1": "",
            "column2": "Medical Mask BlueMedical Mask Green",
            "column3": "0.2",
            "column4": "Mask",
            "column5": "HeadCan't be inspectedCan't have holes",
            "column6": "-",
            "column7": "-",
            "column8": "-",
            "column9": "-",
            "column10": "-",
            "column11": "-",
            "column12": "Base.Hat_SurgicalMask_BlueBase.Hat_SurgicalMask_Green"
        },
        {
            "column1": "",
            "column2": "Open Balaclava",
            "column3": "1.0",
            "column4": "Mask",
            "column5": "HeadCan't be repairedCan't have holes",
            "column6": "0%",
            "column7": "0%",
            "column8": "0%",
            "column9": "80%",
            "column10": "80%",
            "column11": "-",
            "column12": "Base.Hat_BalaclavaFace"
        },
        {
            "column1": "",
            "column2": "Welder Mask",
            "column3": "1.0",
            "column4": "MaskFull(HatMaskEyesLeftEyeRightEye) ",
            "column5": "HeadCan't be repairedCan't have holes",
            "column6": "30%",
            "column7": "50%",
            "column8": "0%",
            "column9": "25%",
            "column10": "55%",
            "column11": "100%",
            "column12": "Base.WeldingMask"
        }
    ]
    )";
    };

    struct Scarves {
        const char* jsonData = R"(
    [
        {
            "column1": "",
            "column2": "Scarf",
            "column3": "0.2",
            "column4": "Scarf",
            "column5": "Neck",
            "column6": "",
            "column7": "0%",
            "column8": "10%",
            "column9": "0%",
            "column10": "100%",
            "column11": "100%",
            "column12": "-",
            "column13": "Base.Scarf_White"
        },
        {
            "column1": "",
            "column2": "Scarf",
            "column3": "0.2",
            "column4": "Scarf",
            "column5": "Neck",
            "column6": "",
            "column7": "0%",
            "column8": "10%",
            "column9": "0%",
            "column10": "50%",
            "column11": "55%",
            "column12": "-",
            "column13": "Base.Scarf_StripeBlackWhite"
        },
        {
            "column1": "",
            "column2": "Scarf",
            "column3": "0.2",
            "column4": "Scarf",
            "column5": "Neck",
            "column6": "",
            "column7": "0%",
            "column8": "10%",
            "column9": "0%",
            "column10": "40%",
            "column11": "30%",
            "column12": "-",
            "column13": "Base.Scarf_StripeBlueWhite"
        },
        {
            "column1": "",
            "column2": "Scarf",
            "column3": "0.2",
            "column4": "Scarf",
            "column5": "Neck",
            "column6": "",
            "column7": "0%",
            "column8": "10%",
            "column9": "0%",
            "column10": "75%",
            "column11": "75%",
            "column12": "-",
            "column13": "Base.Scarf_StripeRedWhite"
        }
    ]
    )";
    };

    struct Belly {
        const char* jsonData = R"(
    [
        
        {
            "column1": "",
            "column2": "Belly Button Dangle Gold",
            "column3": "0.1",
            "column4": "BellyButton",
            "column5": "Base.BellyButton_DangleGold"
        },
        {
            "column1": "",
            "column2": "Belly Button Dangle Gold Ruby",
            "column3": "0.1",
            "column4": "BellyButton",
            "column5": "Base.BellyButton_DangleGoldRuby"
        },
        {
            "column1": "",
            "column2": "Belly Button Dangle Silver",
            "column3": "0.1",
            "column4": "BellyButton",
            "column5": "Base.BellyButton_DangleSilver"
        },
        {
            "column1": "",
            "column2": "Belly Button Dangle Silver Diamond",
            "column3": "0.1",
            "column4": "BellyButton",
            "column5": "Base.BellyButton_DangleSilverDiamond"
        },
        {
            "column1": "",
            "column2": "Belly Button Ring Gold",
            "column3": "0.1",
            "column4": "BellyButton",
            "column5": "Base.BellyButton_RingGold"
        },
        {
            "column1": "",
            "column2": "Belly Button Ring Gold Diamond",
            "column3": "0.1",
            "column4": "BellyButton",
            "column5": "Base.BellyButton_RingGoldDiamond"
        },
        {
            "column1": "",
            "column2": "Belly Button Ring Gold Ruby",
            "column3": "0.1",
            "column4": "BellyButton",
            "column5": "Base.BellyButton_RingGoldRuby"
        },
        {
            "column1": "",
            "column2": "Belly Button Ring Silver",
            "column3": "0.1",
            "column4": "BellyButton",
            "column5": "Base.BellyButton_RingSilver"
        },
        {
            "column1": "",
            "column2": "Belly Button Ring Silver Amethyst",
            "column3": "0.1",
            "column4": "BellyButton",
            "column5": "Base.BellyButton_RingSilverAmethyst"
        },
        {
            "column1": "",
            "column2": "Belly Button Ring Silver Diamond",
            "column3": "0.1",
            "column4": "BellyButton",
            "column5": "Base.BellyButton_RingSilverDiamond"
        },
        {
            "column1": "",
            "column2": "Belly Button Ring Silver Ruby",
            "column3": "0.1",
            "column4": "BellyButton",
            "column5": "Base.BellyButton_RingSilverRuby"
        },
        {
            "column1": "",
            "column2": "Belly Button Stud Gold",
            "column3": "0.1",
            "column4": "BellyButton",
            "column5": "Base.BellyButton_StudGold"
        },
        {
            "column1": "",
            "column2": "Belly Button Stud Gold Diamond",
            "column3": "0.1",
            "column4": "BellyButton",
            "column5": "Base.BellyButton_StudGoldDiamond"
        },
        {
            "column1": "",
            "column2": "Belly Button Stud Silver",
            "column3": "0.1",
            "column4": "BellyButton",
            "column5": "Base.BellyButton_StudSilver"
        },
        {
            "column1": "",
            "column2": "Belly Button Stud Silver Diamond",
            "column3": "0.1",
            "column4": "BellyButton",
            "column5": "Base.BellyButton_StudSilverDiamond"
        }
    ]
    )";
    };

    struct Ears {
        const char* jsonData = R"(
    [
        
        {
            "column1": "",
            "column2": "Large Gold Looped Earrings",
            "column3": "0.1",
            "column4": "Ears",
            "column5": "Base.Earring_LoopLrg_Gold"
        },
        {
            "column1": "",
            "column2": "Large Silver Looped Earrings",
            "column3": "0.1",
            "column4": "Ears",
            "column5": "Base.Earring_LoopLrg_Silver"
        },
        {
            "column1": "",
            "column2": "Medium Silver Looped Earrings",
            "column3": "0.1",
            "column4": "Ears",
            "column5": "Base.Earring_LoopMed_Silver"
        },
        {
            "column1": "",
            "column2": "Medium Gold Looped Earrings",
            "column3": "0.1",
            "column4": "Ears",
            "column5": "Base.Earring_LoopMed_Gold"
        },
        {
            "column1": "",
            "column2": "Small Silver Looped Earrings",
            "column3": "0.1",
            "column4": "Earsor EarTop",
            "column5": "Base.Earring_LoopSmall_Silver_BothBase.Earring_LoopSmall_Silver_Top"
        },
        {
            "column1": "",
            "column2": "Small Gold Looped Earrings",
            "column3": "0.1",
            "column4": "Earsor EarTop",
            "column5": "Base.Earring_LoopSmall_Gold_BothBase.Earring_LoopSmall_Gold_Top"
        },
        {
            "column1": "",
            "column2": "Gold Stud Earrings",
            "column3": "0.1",
            "column4": "Ears",
            "column5": "Base.Earring_Stud_Gold"
        },
        {
            "column1": "",
            "column2": "Silver Stud Earrings",
            "column3": "0.1",
            "column4": "Ears",
            "column5": "Base.Earring_Stud_Silver"
        },
        {
            "column1": "",
            "column2": "Sapphire Stone Earrings",
            "column3": "0.1",
            "column4": "Ears",
            "column5": "Base.Earring_Stone_Sapphire"
        },
        {
            "column1": "",
            "column2": "Emerald Earrings",
            "column3": "0.1",
            "column4": "Ears",
            "column5": "Base.Earring_Stone_Emerald"
        },
        {
            "column1": "",
            "column2": "Ruby Earrings",
            "column3": "0.1",
            "column4": "Ears",
            "column5": "Base.Earring_Stone_Ruby"
        },
        {
            "column1": "",
            "column2": "Pearl Earrings",
            "column3": "0.1",
            "column4": "Ears",
            "column5": "Base.Earring_Pearl"
        },
        {
            "column1": "",
            "column2": "Dangly Sapphire Earrings",
            "column3": "0.1",
            "column4": "Ears",
            "column5": "Base.Earring_Dangly_Sapphire"
        },
        {
            "column1": "",
            "column2": "Dangly Emerald Earrings",
            "column3": "0.1",
            "column4": "Ears",
            "column5": "Base.Earring_Dangly_Emerald"
        },
        {
            "column1": "",
            "column2": "Dangly Ruby Earrings",
            "column3": "0.1",
            "column4": "Ears",
            "column5": "Base.Earring_Dangly_Ruby"
        },
        {
            "column1": "",
            "column2": "Dangly Diamond Earrings",
            "column3": "0.1",
            "column4": "Ears",
            "column5": "Base.Earring_Dangly_Diamond"
        },
        {
            "column1": "",
            "column2": "Dangly Pearl Earrings",
            "column3": "0.1",
            "column4": "Ears",
            "column5": "Base.Earring_Dangly_Pearl"
        }
    ]
    )";
    };

    struct Fingers {
        const char* jsonData = R"(
    [
        {
            "column1": "",
            "column2": "Gold Ring",
            "column3": "0.1",
            "column4": "Right_MiddleFingeror Left_MiddleFingeror Right_RingFingeror Left_RingFinger",
            "column5": "Base.Ring_Right_MiddleFinger_Gold"
        },
        {
            "column1": "",
            "column2": "Silver Ring",
            "column3": "0.1",
            "column4": "Right_MiddleFingeror Left_MiddleFingeror Right_RingFingeror Left_RingFinger",
            "column5": "Base.Ring_Right_MiddleFinger_Silver"
        },
        {
            "column1": "",
            "column2": "Diamond on a Silver Ring",
            "column3": "0.1",
            "column4": "Right_MiddleFingeror Left_MiddleFingeror Right_RingFingeror Left_RingFinger",
            "column5": "Base.Ring_Right_MiddleFinger_SilverDiamond"
        },
        {
            "column1": "",
            "column2": "Ruby on a Gold Ring",
            "column3": "0.1",
            "column4": "Right_MiddleFingeror Left_MiddleFingeror Right_RingFingeror Left_RingFinger",
            "column5": "Base.Ring_Right_MiddleFinger_GoldRuby"
        },
        {
            "column1": "",
            "column2": "Diamond on a Gold Ring",
            "column3": "0.1",
            "column4": "Right_MiddleFingeror Left_MiddleFingeror Right_RingFingeror Left_RingFinger",
            "column5": "Base.Ring_Right_MiddleFinger_GoldDiamond"
        }
    ]
    )";
    };

    struct Neck {
        const char* jsonData = R"(
    [
        
        {
            "column1": "",
            "column2": "Black Choker",
            "column3": "0.1",
            "column4": "Neck",
            "column5": "Base.Necklace_Choker"
        },
        {
            "column1": "",
            "column2": "Choker with Sapphire Stone",
            "column3": "0.1",
            "column4": "Neck",
            "column5": "Base.Necklace_Choker_Sapphire"
        },
        {
            "column1": "",
            "column2": "Choker with Amber Stone",
            "column3": "0.1",
            "column4": "Neck",
            "column5": "Base.Necklace_Choker_Amber"
        },
        {
            "column1": "",
            "column2": "Choker with Diamond",
            "column3": "0.1",
            "column4": "Neck",
            "column5": "Base.Necklace_Choker_Diamond"
        },
        {
            "column1": "",
            "column2": "Bow Tie",
            "column3": "0.1",
            "column4": "Neck",
            "column5": "Base.Tie_BowTieFull"
        },
        {
            "column1": "",
            "column2": "Clip-on Bow Tie",
            "column3": "0.1",
            "column4": "Neck",
            "column5": "Base.Tie_BowTieWorn"
        },
        {
            "column1": "",
            "column2": "Tie",
            "column3": "0.1",
            "column4": "Neck",
            "column5": "Base.Tie_Full"
        },
        {
            "column1": "",
            "column2": "Clip-on Tie",
            "column3": "0.1",
            "column4": "Neck",
            "column5": "Base.Tie_Worn"
        },
        {
            "column1": "",
            "column2": "Clip-on Spiffo Tie",
            "column3": "0.1",
            "column4": "Neck",
            "column5": "Base.Tie_Worn_Spiffo"
        },
        {
            "column1": "",
            "column2": "Spiffo Tie",
            "column3": "0.1",
            "column4": "Neck",
            "column5": "Base.Tie_Full_Spiffo"
        }
    ]
    )";
    };

    struct Necklace {
        const char* jsonData = R"(
    [
        
        {
            "column1": "",
            "column2": "Dog Tags",
            "column3": "0.1",
            "column4": "Necklace",
            "column5": "Base.Necklace_DogTag"
        },
        {
            "column1": "",
            "column2": "Gold Necklace",
            "column3": "0.1",
            "column4": "Necklace",
            "column5": "Base.Necklace_Gold"
        },
        {
            "column1": "",
            "column2": "Gold Necklace with Ruby Stone",
            "column3": "0.1",
            "column4": "Necklace",
            "column5": "Base.Necklace_GoldRuby"
        },
        {
            "column1": "",
            "column2": "Gold Necklace with Diamond",
            "column3": "0.1",
            "column4": "Necklace",
            "column5": "Base.Necklace_GoldDiamond"
        },
        {
            "column1": "",
            "column2": "Silver Necklace",
            "column3": "0.1",
            "column4": "Necklace",
            "column5": "Base.Necklace_Silver"
        },
        {
            "column1": "",
            "column2": "Silver Necklace with Sapphire Stone",
            "column3": "0.1",
            "column4": "Necklace",
            "column5": "Base.Necklace_SilverSapphire"
        },
        {
            "column1": "",
            "column2": "Silver Necklace with Crucifix",
            "column3": "0.1",
            "column4": "Necklace",
            "column5": "Base.Necklace_SilverCrucifix"
        },
        {
            "column1": "",
            "column2": "Silver Necklace with Diamond",
            "column3": "0.1",
            "column4": "Necklace",
            "column5": "Base.Necklace_SilverDiamond"
        },
        {
            "column1": "",
            "column2": "Necklace with Crucifix",
            "column3": "0.1",
            "column4": "Necklace",
            "column5": "Base.Necklace_Crucifix"
        },
        {
            "column1": "",
            "column2": "Necklace with Ying and Yang Symbol",
            "column3": "0.1",
            "column4": "Necklace",
            "column5": "Base.Necklace_YingYang"
        },
        {
            "column1": "",
            "column2": "Pearl Necklace",
            "column3": "0.1",
            "column4": "Necklace",
            "column5": "Base.Necklace_Pearl"
        }
    ]
    )";
    };

    struct Necklacelong {
        const char* jsonData = R"(
    [
        
        {
            "column1": "",
            "column2": "Long Gold Necklace",
            "column3": "0.1",
            "column4": "Necklace_Long",
            "column5": "Base.NecklaceLong_Gold"
        },
        {
            "column1": "",
            "column2": "Long Gold Necklace with Diamond",
            "column3": "0.1",
            "column4": "Necklace_Long",
            "column5": "Base.NecklaceLong_GoldDiamond"
        },
        {
            "column1": "",
            "column2": "Long Silver Necklace",
            "column3": "0.1",
            "column4": "Necklace_Long",
            "column5": "Base.NecklaceLong_Silver"
        },
        {
            "column1": "",
            "column2": "Long Silver Necklace with Emerald",
            "column3": "0.1",
            "column4": "Necklace_Long",
            "column5": "Base.NecklaceLong_SilverEmerald"
        },
        {
            "column1": "",
            "column2": "Long Silver Necklace with Sapphire Stone",
            "column3": "0.1",
            "column4": "Necklace_Long",
            "column5": "Base.NecklaceLong_SilverSapphire"
        },
        {
            "column1": "",
            "column2": "Long Silver Necklace with Diamond",
            "column3": "0.1",
            "column4": "Necklace_Long",
            "column5": "Base.NecklaceLong_SilverDiamond"
        },
        {
            "column1": "",
            "column2": "Long Necklace with Amber Stone",
            "column3": "0.1",
            "column4": "Necklace_Long",
            "column5": "Base.NecklaceLong_Amber"
        }
    ]
    )";
    };

    struct Nose {
        const char* jsonData = R"(
    [
        
        {
            "column1": "",
            "column2": "Gold Nose Ring",
            "column3": "0.1",
            "column4": "Nose",
            "column5": "Base.NoseRing_Gold"
        },
        {
            "column1": "",
            "column2": "Silver Nose Ring",
            "column3": "0.1",
            "column4": "Nose",
            "column5": "Base.NoseRing_Silver"
        },
        {
            "column1": "",
            "column2": "Gold Nose Stud",
            "column3": "0.1",
            "column4": "Nose",
            "column5": "Base.NoseStud_Gold"
        },
        {
            "column1": "",
            "column2": "Silver Nose Stud",
            "column3": "0.1",
            "column4": "Nose",
            "column5": "Base.NoseStud_Silver"
        }
    ]
    )";
    };

    struct Wrists {
        const char* jsonData = R"(
    [
        
        {
            "column1": "",
            "column2": "Classic Wrist Watch with Black Strap",
            "column3": "0.1",
            "column4": "RightWristor LeftWrist",
            "column5": "",
            "column6": "7",
            "column7": "Base.WristWatch_Right_ClassicBlack"
        },
        {
            "column1": "",
            "column2": "Classic Wrist Watch with Brown Strap",
            "column3": "0.1",
            "column4": "RightWristor LeftWrist",
            "column5": "",
            "column6": "7",
            "column7": "Base.WristWatch_Right_ClassicBrown"
        },
        {
            "column1": "",
            "column2": "Standard Military Issue Wrist Watch",
            "column3": "0.1",
            "column4": "RightWristor LeftWrist",
            "column5": "",
            "column6": "7",
            "column7": "Base.WristWatch_Right_ClassicMilitary"
        },
        {
            "column1": "",
            "column2": "Gold Wrist Watch",
            "column3": "0.1",
            "column4": "RightWristor LeftWrist",
            "column5": "",
            "column6": "7",
            "column7": "Base.WristWatch_Right_ClassicGold"
        },
        {
            "column1": "",
            "column2": "Black Digital Watch",
            "column3": "0.1",
            "column4": "RightWristor LeftWrist",
            "column5": "",
            "column6": "7",
            "column7": "Base.WristWatch_Right_DigitalBlack"
        },
        {
            "column1": "",
            "column2": "Red Digital Watch",
            "column3": "0.1",
            "column4": "RightWristor LeftWrist",
            "column5": "",
            "column6": "7",
            "column7": "Base.WristWatch_Right_DigitalRed"
        },
        {
            "column1": "",
            "column2": "Metallic Dress Style Digital Watch",
            "column3": "0.1",
            "column4": "RightWristor LeftWrist",
            "column5": "",
            "column6": "7",
            "column7": "Base.WristWatch_Right_DigitalDress"
        },
        {
            "column1": "",
            "column2": "Gold Bangle",
            "column3": "0.1",
            "column4": "RightWristor LeftWrist",
            "column5": "-",
            "column6": "-",
            "column7": "Base.Bracelet_BangleRightGold"
        },
        {
            "column1": "",
            "column2": "Gold Chain Bracelet",
            "column3": "0.1",
            "column4": "RightWristor LeftWrist",
            "column5": "-",
            "column6": "-",
            "column7": "Base.Bracelet_ChainRightGold"
        },
        {
            "column1": "",
            "column2": "Silver Bangle",
            "column3": "0.1",
            "column4": "RightWristor LeftWrist",
            "column5": "-",
            "column6": "-",
            "column7": "Base.Bracelet_BangleRightSilver"
        },
        {
            "column1": "",
            "column2": "Silver Chain Bracelet",
            "column3": "0.1",
            "column4": "RightWristor LeftWrist",
            "column5": "-",
            "column6": "-",
            "column7": "Base.Bracelet_ChainRightSilver"
        },
        {
            "column1": "",
            "column2": "Friendship Bracelet",
            "column3": "0.1",
            "column4": "RightWristor LeftWrist",
            "column5": "-",
            "column6": "-",
            "column7": "Base.Bracelet_RightFriendshipTINT"
        }
    ]
    )";
    };

    struct Feet {
        const char* jsonData = R"(
    [
        {
            "column1": "",
            "column2": "Boots",
            "column3": "1.0",
            "column4": "Shoes",
            "column5": "Left FootRight FootCan't be repaired",
            "column6": "-",
            "column7": "220%",
            "column8": "90%",
            "column9": "100%",
            "column10": "100%",
            "column11": "0%",
            "column12": "75%",
            "column13": "65%",
            "column14": "65%",
            "column15": "Base.Shoes_BlackBoots"
        },
        {
            "column1": "",
            "column2": "Bowling Shoes",
            "column3": "1.0",
            "column4": "Shoes",
            "column5": "Left FootRight FootCan't be repaired",
            "column6": "-",
            "column7": "210%",
            "column8": "95%",
            "column9": "10%",
            "column10": "20%",
            "column11": "0%",
            "column12": "25%",
            "column13": "25%",
            "column14": "25%",
            "column15": "Base.Shoes_BlackBoots"
        },
        {
            "column1": "",
            "column2": "Fancy Shoes",
            "column3": "1.0",
            "column4": "Shoes",
            "column5": "Left FootRight FootCan't be repaired",
            "column6": "-",
            "column7": "210%",
            "column8": "95%",
            "column9": "10%",
            "column10": "20%",
            "column11": "0%",
            "column12": "25%",
            "column13": "25%",
            "column14": "25%",
            "column15": "Base.Shoes_FlipFlop"
        },
        {
            "column1": "",
            "column2": "Flip Flops",
            "column3": "1.0",
            "column4": "Shoes",
            "column5": "Left FootRight FootCan't be repaired",
            "column6": "-",
            "column7": "80%",
            "column8": "70%",
            "column9": "0%",
            "column10": "0%",
            "column11": "0%",
            "column12": "-",
            "column13": "-",
            "column14": "-",
            "column15": "Base.Shoes_FlipFlop"
        },
        {
            "column1": "",
            "column2": "Military Boots",
            "column3": "1.0",
            "column4": "Shoes",
            "column5": "Left FootRight FootCan't be repaired",
            "column6": "-",
            "column7": "250%",
            "column8": "90%",
            "column9": "100%",
            "column10": "100%",
            "column11": "0%",
            "column12": "55%",
            "column13": "65%",
            "column14": "80%",
            "column15": "Base.Shoes_ArmyBoots"
        },
        {
            "column1": "",
            "column2": "Military Desert Boots",
            "column3": "1.0",
            "column4": "Shoes",
            "column5": "Left FootRight FootCan't be repaired",
            "column6": "-",
            "column7": "250%",
            "column8": "90%",
            "column9": "100%",
            "column10": "100%",
            "column11": "0%",
            "column12": "50%",
            "column13": "60%",
            "column14": "50%",
            "column15": "Base.Shoes_ArmyBootsDesert"
        },
        {
            "column1": "",
            "column2": "Rain Boots",
            "column3": "1.0",
            "column4": "Shoes",
            "column5": "Left FootRight FootCan't be repaired",
            "column6": "-",
            "column7": "210%",
            "column8": "90%",
            "column9": "100%",
            "column10": "100%",
            "column11": "0%",
            "column12": "50%",
            "column13": "100%",
            "column14": "100%",
            "column15": "Base.Shoes_Wellies"
        },
        {
            "column1": "",
            "column2": "Riding Boots",
            "column3": "1.0",
            "column4": "Shoes",
            "column5": "Left FootRight FootCan't be repaired",
            "column6": "-",
            "column7": "220%",
            "column8": "90%",
            "column9": "100%",
            "column10": "100%",
            "column11": "0%",
            "column12": "90%",
            "column13": "60%",
            "column14": "45%",
            "column15": "Base.Shoes_RidingBoots"
        },
        {
            "column1": "",
            "column2": "Sandals",
            "column3": "1.0",
            "column4": "Shoes",
            "column5": "Left FootRight FootCan't be repaired",
            "column6": "-",
            "column7": "210%",
            "column8": "95%",
            "column9": "10%",
            "column10": "20%",
            "column11": "0%",
            "column12": "25%",
            "column13": "25%",
            "column14": "25%",
            "column15": "Base.Shoes_Sandals"
        },
        {
            "column1": "",
            "column2": "Strapped Shoes",
            "column3": "1.0",
            "column4": "Shoes",
            "column5": "Left FootRight FootCan't be repaired",
            "column6": "-",
            "column7": "210%",
            "column8": "95%",
            "column9": "10%",
            "column10": "20%",
            "column11": "0%",
            "column12": "25%",
            "column13": "25%",
            "column14": "25%",
            "column15": "Base.Shoes_Strapped"
        },
        {
            "column1": "",
            "column2": "Shoes",
            "column3": "1.0",
            "column4": "Shoes",
            "column5": "Left FootRight FootCan't be repaired",
            "column6": "-",
            "column7": "210%",
            "column8": "95%",
            "column9": "10%",
            "column10": "20%",
            "column11": "0%",
            "column12": "25%",
            "column13": "25%",
            "column14": "25%",
            "column15": "Base.Shoes_Black"
        },
        {
            "column1": "",
            "column2": "Shoes",
            "column3": "1.0",
            "column4": "Shoes",
            "column5": "Left FootRight FootCan't be repaired",
            "column6": "-",
            "column7": "210%",
            "column8": "95%",
            "column9": "10%",
            "column10": "20%",
            "column11": "0%",
            "column12": "30%",
            "column13": "15%",
            "column14": "-",
            "column15": "Base.Shoes_Brown"
        },
        {
            "column1": "",
            "column2": "Shoes",
            "column3": "1.0",
            "column4": "Shoes",
            "column5": "Left FootRight FootCan't be repaired",
            "column6": "-",
            "column7": "210%",
            "column8": "95%",
            "column9": "10%",
            "column10": "20%",
            "column11": "0%",
            "column12": "40%",
            "column13": "25%",
            "column14": "-",
            "column15": "Base.Shoes_Random"
        },
        {
            "column1": "",
            "column2": "Slippers",
            "column3": "1.0",
            "column4": "Shoes",
            "column5": "Left FootRight FootCan't be repaired",
            "column6": "-",
            "column7": "80%",
            "column8": "70%",
            "column9": "0%",
            "column10": "0%",
            "column11": "0%",
            "column12": "-",
            "column13": "-",
            "column14": "-",
            "column15": "Base.Shoes_Slippers"
        },
        {
            "column1": "",
            "column2": "Sneakers",
            "column3": "1.0",
            "column4": "Shoes",
            "column5": "Left FootRight FootCan't be repaired",
            "column6": "-",
            "column7": "180%",
            "column8": "110%",
            "column9": "0%",
            "column10": "10%",
            "column11": "0%",
            "column12": "55%",
            "column13": "35%",
            "column14": "-",
            "column15": "Base.Shoes_RedTrainers"
        },
        {
            "column1": "",
            "column2": "Sneakers",
            "column3": "1.0",
            "column4": "Shoes",
            "column5": "Left FootRight FootCan't be repaired",
            "column6": "-",
            "column7": "180%",
            "column8": "110%",
            "column9": "0%",
            "column10": "10%",
            "column11": "0%",
            "column12": "45%",
            "column13": "35%",
            "column14": "-",
            "column15": "Base.Shoes_BlueTrainers"
        },
        {
            "column1": "",
            "column2": "Sneakers",
            "column3": "1.0",
            "column4": "Shoes",
            "column5": "Left FootRight FootCan't be repaired",
            "column6": "-",
            "column7": "180%",
            "column8": "110%",
            "column9": "0%",
            "column10": "10%",
            "column11": "0%",
            "column12": "35%",
            "column13": "25%",
            "column14": "-",
            "column15": "Base.Shoes_TrainerTINT"
        }
    ]
    )";
    };

    struct Jackets {
        const char* jsonData = R"(
    [
        {
            "column1": "",
            "column2": "Barrel Dogs Leather Jacket",
            "column3": "2.0",
            "column4": "Jacket",
            "column5": "Upper TorsoLower TorsoLeft Upper ArmRight Upper ArmLeft ForearmRight ForearmNeck",
            "column6": "",
            "column7": "95%",
            "column8": "97%",
            "column9": "20%",
            "column10": "40%",
            "column11": "0%",
            "column12": "50%",
            "column13": "40%",
            "column14": "60%",
            "column15": "40%",
            "column16": "Base.Jacket_LeatherBarrelDogs"
        },
        {
            "column1": "",
            "column2": "Iron Rodent Leather Jacket",
            "column3": "2.0",
            "column4": "Jacket",
            "column5": "Upper TorsoLower TorsoLeft Upper ArmRight Upper ArmLeft ForearmRight ForearmNeck",
            "column6": "",
            "column7": "95%",
            "column8": "97%",
            "column9": "20%",
            "column10": "40%",
            "column11": "0%",
            "column12": "50%",
            "column13": "40%",
            "column14": "60%",
            "column15": "40%",
            "column16": "Base.Jacket_LeatherIronRodent"
        },
        {
            "column1": "",
            "column2": "Wild Raccoons Leather Jacket",
            "column3": "2.0",
            "column4": "Jacket",
            "column5": "Upper TorsoLower TorsoLeft Upper ArmRight Upper ArmLeft ForearmRight ForearmNeck",
            "column6": "",
            "column7": "95%",
            "column8": "97%",
            "column9": "20%",
            "column10": "40%",
            "column11": "0%",
            "column12": "50%",
            "column13": "40%",
            "column14": "60%",
            "column15": "40%",
            "column16": "Base.Jacket_LeatherWildRacoons"
        },
        {
            "column1": "",
            "column2": "Shell Suit Jacket",
            "column3": "1.0",
            "column4": "Jacket_Bulky(Jacket) ",
            "column5": "Upper TorsoLower TorsoLeft Upper ArmRight Upper ArmLeft ForearmRight ForearmCan't be repaired",
            "column6": "-",
            "column7": "-",
            "column8": "-",
            "column9": "0%",
            "column10": "5%",
            "column11": "0%",
            "column12": "-",
            "column13": "45%",
            "column14": "40%",
            "column15": "-",
            "column16": "Base.Jacket_Shellsuit_Black"
        },
        {
            "column1": "",
            "column2": "Wedding Jacket",
            "column3": "2.0",
            "column4": "JacketSuit(SweaterJacket) ",
            "column5": "Upper TorsoLower TorsoLeft Upper ArmRight Upper ArmLeft ForearmRight ForearmNeck",
            "column6": "",
            "column7": "93%",
            "column8": "95%",
            "column9": "0%",
            "column10": "20%",
            "column11": "0%",
            "column12": "50%",
            "column13": "40%",
            "column14": "20%",
            "column15": "-",
            "column16": "Base.WeddingJacket"
        },
        {
            "column1": "",
            "column2": "Ghillie Suit Torso",
            "column3": "4.0",
            "column4": "FullTop(HatMaskEyesSweaterJacketTorsoExtraNeck) ",
            "column5": "Upper TorsoLower TorsoLeft Upper ArmRight Upper ArmLeft ForearmRight ForearmNeckCan't be repaired",
            "column6": "-",
            "column7": "75%",
            "column8": "90%",
            "column9": "10%",
            "column10": "30%",
            "column11": "0%",
            "column12": "-",
            "column13": "70%",
            "column14": "45%",
            "column15": "35%",
            "column16": "Base.Ghillie_Top"
        },
        {
            "column1": "",
            "column2": "Suit Jacket",
            "column3": "2.0",
            "column4": "JacketSuit(SweaterJacket) ",
            "column5": "Upper TorsoLower TorsoLeft Upper ArmRight Upper ArmLeft ForearmRight ForearmNeck",
            "column6": "",
            "column7": "95%",
            "column8": "95%",
            "column9": "0%",
            "column10": "20%",
            "column11": "0%",
            "column12": "50%",
            "column13": "55%",
            "column14": "45%",
            "column15": "-",
            "column16": "Base.Suit_JacketBase.Suit_JacketTINT"
        },
        {
            "column1": "",
            "column2": "Varsity Jacket",
            "column3": "1.0",
            "column4": "Jacket",
            "column5": "Upper TorsoLower TorsoLeft Upper ArmRight Upper ArmLeft ForearmRight ForearmNeck",
            "column6": "",
            "column7": "-",
            "column8": "-",
            "column9": "10%",
            "column10": "20%",
            "column11": "0%",
            "column12": "30%",
            "column13": "60%",
            "column14": "50%",
            "column15": "-",
            "column16": "Base.Jacket_Varsity"
        },
        {
            "column1": "",
            "column2": "Medical Coat",
            "column3": "2.0",
            "column4": "Jacket",
            "column5": "Upper TorsoLower TorsoLeft Upper ArmRight Upper ArmLeft ForearmRight ForearmNeckGroinLeft ThighRight Thigh",
            "column6": "",
            "column7": "93%",
            "column8": "95%",
            "column9": "0%",
            "column10": "20%",
            "column11": "0%",
            "column12": "50%",
            "column13": "35%",
            "column14": "25%",
            "column15": "-",
            "column16": "Base.JacketLong_Doctor"
        },
        {
            "column1": "",
            "column2": "Army Coat",
            "column3": "2.0",
            "column4": "JacketSuit(SweaterJacket) ",
            "column5": "Upper TorsoLower TorsoLeft Upper ArmRight Upper ArmLeft ForearmRight ForearmNeckGroinLeft ThighRight Thigh",
            "column6": "",
            "column7": "95%",
            "column8": "-",
            "column9": "20%",
            "column10": "40%",
            "column11": "0%",
            "column12": "50%",
            "column13": "70%",
            "column14": "45%",
            "column15": "55%",
            "column16": "Base.Jacket_CoatArmy"
        },
        {
            "column1": "",
            "column2": "Leather Jacket",
            "column3": "2.0",
            "column4": "Jacket",
            "column5": "Upper TorsoLower TorsoLeft Upper ArmRight Upper ArmLeft ForearmRight ForearmNeckGroinLeft ThighRight Thigh",
            "column6": "",
            "column7": "93%",
            "column8": "97%",
            "column9": "20%",
            "column10": "40%",
            "column11": "0%",
            "column12": "50%",
            "column13": "65%",
            "column14": "35%",
            "column15": "45%",
            "column16": "Base.JacketLong_Random"
        },
        {
            "column1": "",
            "column2": "Green Santa Suit JacketSanta Suit Jacket",
            "column3": "3.0",
            "column4": "Jacket",
            "column5": "Upper TorsoLower TorsoLeft Upper ArmRight Upper ArmLeft ForearmRight ForearmNeckGroinLeft ThighRight Thigh",
            "column6": "",
            "column7": "85%",
            "column8": "90%",
            "column9": "10%",
            "column10": "30%",
            "column11": "0%",
            "column12": "50%",
            "column13": "90%",
            "column14": "60%",
            "column15": "-",
            "column16": "Base.JacketLong_SantaBase.JacketLong_SantaGreen"
        }
    ]
    )";
    };

    struct Jackets2 {
        const char* jsonData = R"(
    [
        {
            "column1": "",
            "column2": "Military Desert Camo Jacket",
            "column3": "2.0",
            "column4": "Jacket",
            "column5": "Upper TorsoLower TorsoLeft Upper ArmRight Upper ArmLeft ForearmRight ForearmNeck",
            "column6": "",
            "column7": "94%",
            "column8": "97%",
            "column9": "30%",
            "column10": "50%",
            "column11": "0%",
            "column12": "50%",
            "column13": "35%",
            "column14": "10%",
            "column15": "20%",
            "column16": "Base.Jacket_ArmyCamoDesert"
        },
        {
            "column1": "",
            "column2": "Military Green Camo Jacket",
            "column3": "2.0",
            "column4": "Jacket",
            "column5": "Upper TorsoLower TorsoLeft Upper ArmRight Upper ArmLeft ForearmRight ForearmNeck",
            "column6": "",
            "column7": "94%",
            "column8": "97%",
            "column9": "30%",
            "column10": "50%",
            "column11": "0%",
            "column12": "50%",
            "column13": "45%",
            "column14": "30%",
            "column15": "45%",
            "column16": "Base.Jacket_ArmyCamoGreen"
        },
        {
            "column1": "",
            "column2": "Leather Jacket",
            "column3": "2.0",
            "column4": "Jacket",
            "column5": "Upper TorsoLower TorsoLeft Upper ArmRight Upper ArmLeft ForearmRight ForearmNeck",
            "column6": "",
            "column7": "95%",
            "column8": "97%",
            "column9": "20%",
            "column10": "40%",
            "column11": "0%",
            "column12": "50%",
            "column13": "40%",
            "column14": "60%",
            "column15": "40%",
            "column16": "Base.Jacket_Black"
        },
        {
            "column1": "",
            "column2": "Chef Jacket",
            "column3": "2.0",
            "column4": "Jacket",
            "column5": "Upper TorsoLower TorsoLeft Upper ArmRight Upper ArmLeft ForearmRight ForearmNeck",
            "column6": "",
            "column7": "95%",
            "column8": "97%",
            "column9": "0%",
            "column10": "0%",
            "column11": "0%",
            "column12": "50%",
            "column13": "35%",
            "column14": "15%",
            "column15": "-",
            "column16": "Base.Jacket_Chef"
        },
        {
            "column1": "",
            "column2": "Firefighter Jacket",
            "column3": "4.0",
            "column4": "Jacket",
            "column5": "Upper TorsoLower TorsoLeft Upper ArmRight Upper ArmLeft ForearmRight ForearmNeckCan't be repaired",
            "column6": "-",
            "column7": "87%",
            "column8": "90%",
            "column9": "50%",
            "column10": "70%",
            "column11": "0%",
            "column12": "50%",
            "column13": "85%",
            "column14": "85%",
            "column15": "80%",
            "column16": "Base.Jacket_Fireman"
        },
        {
            "column1": "",
            "column2": "Padded Jacket",
            "column3": "3.0",
            "column4": "Jacket_Bulky(Jacket) ",
            "column5": "Upper TorsoLower TorsoLeft Upper ArmRight Upper ArmLeft ForearmRight ForearmNeckCan't be repaired",
            "column6": "-",
            "column7": "89%",
            "column8": "96%",
            "column9": "10%",
            "column10": "20%",
            "column11": "0%",
            "column12": "50%",
            "column13": "100%",
            "column14": "100%",
            "column15": "60%",
            "column16": "Base.Jacket_PaddedDOWN"
        },
        {
            "column1": "",
            "column2": "Padded Jacket (hooded) ",
            "column3": "3.0",
            "column4": "JacketHat_Bulky(JacketHat) ",
            "column5": "Upper TorsoLower TorsoLeft Upper ArmRight Upper ArmLeft ForearmRight ForearmHeadCan't be repaired",
            "column6": "-",
            "column7": "89%",
            "column8": "96%",
            "column9": "10%",
            "column10": "20%",
            "column11": "0%",
            "column12": "50%",
            "column13": "100%",
            "column14": "100%",
            "column15": "60%",
            "column16": "Base.Jacket_Padded"
        },
        {
            "column1": "",
            "column2": "Police Deputy Jacket",
            "column3": "2.0",
            "column4": "Jacket",
            "column5": "Upper TorsoLower TorsoLeft Upper ArmRight Upper ArmLeft ForearmRight ForearmNeck",
            "column6": "",
            "column7": "93%",
            "column8": "98%",
            "column9": "20%",
            "column10": "30%",
            "column11": "0%",
            "column12": "50%",
            "column13": "60%",
            "column14": "45%",
            "column15": "25%",
            "column16": "Base.Jacket_Police"
        },
        {
            "column1": "",
            "column2": "Ranger Jacket",
            "column3": "2.0",
            "column4": "Jacket",
            "column5": "Upper TorsoLower TorsoLeft Upper ArmRight Upper ArmLeft ForearmRight ForearmNeck",
            "column6": "",
            "column7": "93%",
            "column8": "98%",
            "column9": "20%",
            "column10": "30%",
            "column11": "0%",
            "column12": "50%",
            "column13": "70%",
            "column14": "70%",
            "column15": "50%",
            "column16": "Base.Jacket_Ranger"
        },
        {
            "column1": "",
            "column2": "Jacket",
            "column3": "2.0",
            "column4": "Jacket",
            "column5": "Upper TorsoLower TorsoLeft Upper ArmRight Upper ArmLeft ForearmRight ForearmNeck",
            "column6": "",
            "column7": "95%",
            "column8": "-",
            "column9": "10%",
            "column10": "25%",
            "column11": "0%",
            "column12": "50%",
            "column13": "50%",
            "column14": "35%",
            "column15": "-",
            "column16": "Base.Jacket_WhiteTINT"
        },
        {
            "column1": "",
            "column2": "Jacket",
            "column3": "2.0",
            "column4": "Jacket",
            "column5": "Upper TorsoLower TorsoLeft Upper ArmRight Upper ArmLeft ForearmRight ForearmNeck",
            "column6": "",
            "column7": "95%",
            "column8": "-",
            "column9": "20%",
            "column10": "30%",
            "column11": "0%",
            "column12": "50%",
            "column13": "50%",
            "column14": "60%",
            "column15": "25%",
            "column16": "Base.Jacket_NavyBlue"
        },
        {
            "column1": "",
            "column2": "Poncho (Green) ",
            "column3": "1.0",
            "column4": "Jacket_Down(SweaterJacket",
            "column5": "Upper TorsoLower TorsoLeft Upper ArmRight Upper ArmHeadGroinLeft ThighRight ThighLeft ShinRight ShinCan't be repaired",
            "column6": "",
            "column7": "90%",
            "column8": "-",
            "column9": "0%",
            "column10": "10%",
            "column11": "0%",
            "column12": "50%",
            "column13": "15%",
            "column14": "80%",
            "column15": "100%",
            "column16": "Base.PonchoGreenDOWN"
        },
        {
            "column1": "",
            "column2": "Poncho (Yellow) ",
            "column3": "1.0",
            "column4": "Jacket_Down(SweaterJacket) ",
            "column5": "Upper TorsoLower TorsoLeft Upper ArmRight Upper ArmGroinLeft ThighRight ThighLeft ShinRight ShinCan't be repaired",
            "column6": "",
            "column7": "90%",
            "column8": "-",
            "column9": "0%",
            "column10": "0%",
            "column11": "0%",
            "column12": "50%",
            "column13": "15%",
            "column14": "80%",
            "column15": "100%",
            "column16": "Base.PonchoYellowDOWN"
        },
        {
            "column1": "",
            "column2": "Poncho (hooded) ",
            "column3": "1.0",
            "column4": "JacketHat(SweaterJacketHat) ",
            "column5": "Upper TorsoLower TorsoLeft Upper ArmRight Upper ArmGroinLeft ThighRight ThighLeft ShinRight ShinCan't be repaired",
            "column6": "",
            "column7": "90%",
            "column8": "-",
            "column9": "0%",
            "column10": "10%",
            "column11": "0%",
            "column12": "-",
            "column13": "10%",
            "column14": "75%",
            "column15": "100%",
            "column16": "Base.PonchoGreenBase.PonchoYellow"
        }
    ]
    )";
    };

    struct Legs {
        const char* jsonData = R"(
    [
        {
            "column1": "",
            "column2": "Boxing Shorts",
            "column3": "1.0",
            "column4": "Pants",
            "column5": "GroinLeft ThighRight ThighCan't be repaired",
            "column6": "-",
            "column7": "-",
            "column8": "0%",
            "column9": "0%",
            "column10": "0%",
            "column11": "10%",
            "column12": "10%",
            "column13": "-",
            "column14": "Base.Shorts_BoxingRed"
        },
        {
            "column1": "",
            "column2": "Long Denim Shorts",
            "column3": "1.0",
            "column4": "Pants",
            "column5": "GroinLeft ThighRight ThighLeft ShinRight Shin",
            "column6": "",
            "column7": "-",
            "column8": "10%",
            "column9": "20%",
            "column10": "0%",
            "column11": "45%",
            "column12": "45%",
            "column13": "-",
            "column14": "Base.Shorts_LongDenim"
        },
        {
            "column1": "",
            "column2": "Long Sport Shorts",
            "column3": "1.0",
            "column4": "Pants",
            "column5": "GroinLeft ThighRight ThighLeft ShinRight Shin",
            "column6": "",
            "column7": "-",
            "column8": "0%",
            "column9": "0%",
            "column10": "0%",
            "column11": "25%",
            "column12": "10%",
            "column13": "-",
            "column14": "Base.Shorts_LongSport"
        },
        {
            "column1": "",
            "column2": "Long Sport Shorts",
            "column3": "1.0",
            "column4": "Pants",
            "column5": "GroinLeft ThighRight ThighLeft ShinRight Shin",
            "column6": "",
            "column7": "-",
            "column8": "0%",
            "column9": "0%",
            "column10": "0%",
            "column11": "25%",
            "column12": "10%",
            "column13": "-",
            "column14": "Base.Shorts_LongSport_Red"
        },
        {
            "column1": "",
            "column2": "Denim Shorts",
            "column3": "1.0",
            "column4": "Pants",
            "column5": "GroinLeft ThighRight Thigh",
            "column6": "",
            "column7": "-",
            "column8": "10%",
            "column9": "20%",
            "column10": "0%",
            "column11": "30%",
            "column12": "15%",
            "column13": "-",
            "column14": "Base.Shorts_ShortDenim"
        },
        {
            "column1": "",
            "column2": "Shorts",
            "column3": "1.0",
            "column4": "Pants",
            "column5": "GroinLeft ThighRight Thigh",
            "column6": "",
            "column7": "-",
            "column8": "0%",
            "column9": "0%",
            "column10": "0%",
            "column11": "15%",
            "column12": "10%",
            "column13": "-",
            "column14": "Base.Shorts_ShortFormal"
        },
        {
            "column1": "",
            "column2": "Sport Shorts",
            "column3": "1.0",
            "column4": "Pants",
            "column5": "GroinLeft ThighRight Thigh",
            "column6": "",
            "column7": "-",
            "column8": "0%",
            "column9": "0%",
            "column10": "0%",
            "column11": "15%",
            "column12": "5%",
            "column13": "-",
            "column14": "Base.Shorts_ShortSport"
        },
        {
            "column1": "",
            "column2": "Knee-length Skirt",
            "column3": "1.0",
            "column4": "Skirt",
            "column5": "GroinLeft ThighRight Thigh",
            "column6": "",
            "column7": "-",
            "column8": "0%",
            "column9": "0%",
            "column10": "0%",
            "column11": "10%",
            "column12": "1%",
            "column13": "-",
            "column14": "Base.Skirt_Knees"
        },
        {
            "column1": "",
            "column2": "Long Skirt",
            "column3": "1.0",
            "column4": "Skirt",
            "column5": "GroinLeft ThighRight ThighLeft ShinRight Shin",
            "column6": "",
            "column7": "93%",
            "column8": "0%",
            "column9": "0%",
            "column10": "0%",
            "column11": "30%",
            "column12": "20%",
            "column13": "-",
            "column14": "Base.Skirt_Long"
        },
        {
            "column1": "",
            "column2": "Skirt",
            "column3": "1.0",
            "column4": "Skirt",
            "column5": "GroinLeft ThighRight ThighLeft ShinRight Shin",
            "column6": "",
            "column7": "93%",
            "column8": "0%",
            "column9": "0%",
            "column10": "0%",
            "column11": "25%",
            "column12": "10%",
            "column13": "-",
            "column14": "Base.Skirt_Normal"
        },
        {
            "column1": "",
            "column2": "Short Skirt",
            "column3": "1.0",
            "column4": "Skirt",
            "column5": "GroinLeft ThighRight Thigh",
            "column6": "",
            "column7": "-",
            "column8": "0%",
            "column9": "0%",
            "column10": "0%",
            "column11": "5%",
            "column12": "-",
            "column13": "-",
            "column14": "Base.Skirt_Short"
        },
        {
            "column1": "",
            "column2": "Ghillie Suit Pants",
            "column3": "1.0",
            "column4": "Pants",
            "column5": "GroinLeft ThighRight ThighLeft ShinRight ShinCan't be repaired",
            "column6": "-",
            "column7": "85%",
            "column8": "10%",
            "column9": "20%",
            "column10": "0%",
            "column11": "70%",
            "column12": "65%",
            "column13": "35%",
            "column14": "Base.Ghillie_Trousers"
        },
        {
            "column1": "",
            "column2": "Pants",
            "column3": "1.0",
            "column4": "Pants",
            "column5": "GroinLeft ThighRight ThighLeft ShinRight Shin",
            "column6": "",
            "column7": "-",
            "column8": "0%",
            "column9": "0%",
            "column10": "0%",
            "column11": "50%",
            "column12": "40%",
            "column13": "-",
            "column14": "Base.Trousers"
        },
        {
            "column1": "",
            "column2": "Denim Jeans",
            "column3": "1.0",
            "column4": "Pants",
            "column5": "GroinLeft ThighRight ThighLeft ShinRight Shin",
            "column6": "",
            "column7": "98%",
            "column8": "10%",
            "column9": "20%",
            "column10": "0%",
            "column11": "65%",
            "column12": "60%",
            "column13": "-",
            "column14": "Base.TrousersMesh_DenimLight"
        },
        {
            "column1": "",
            "column2": "Military Desert Camo Pants",
            "column3": "1.0",
            "column4": "Pants",
            "column5": "GroinLeft ThighRight ThighLeft ShinRight Shin",
            "column6": "",
            "column7": "-",
            "column8": "10%",
            "column9": "20%",
            "column10": "0%",
            "column11": "30%",
            "column12": "10%",
            "column13": "-",
            "column14": "Base.Trousers_CamoDesert"
        },
        {
            "column1": "",
            "column2": "Military Green Camo Pants",
            "column3": "1.0",
            "column4": "Pants",
            "column5": "GroinLeft ThighRight ThighLeft ShinRight Shin",
            "column6": "",
            "column7": "-",
            "column8": "10%",
            "column9": "20%",
            "column10": "0%",
            "column11": "45%",
            "column12": "30%",
            "column13": "45%",
            "column14": "Base.Trousers_CamoGreen"
        },
        {
            "column1": "",
            "column2": "Military Urban Camo Pants",
            "column3": "1.0",
            "column4": "Pants",
            "column5": "GroinLeft ThighRight ThighLeft ShinRight Shin",
            "column6": "",
            "column7": "-",
            "column8": "10%",
            "column9": "20%",
            "column10": "0%",
            "column11": "60%",
            "column12": "30%",
            "column13": "35%",
            "column14": "Base.Trousers_CamoUrban"
        },
        {
            "column1": "",
            "column2": "Military Green Camo Shorts",
            "column3": "1.0",
            "column4": "Pants",
            "column5": "GroinLeft ThighRight ThighLeft ShinRight Shin",
            "column6": "",
            "column7": "-",
            "column8": "0%",
            "column9": "0%",
            "column10": "0%",
            "column11": "50%",
            "column12": "30%",
            "column13": "30%",
            "column14": "Base.Shorts_CamoGreenLong"
        },
        {
            "column1": "",
            "column2": "Military Urban Camo Shorts",
            "column3": "1.0",
            "column4": "Pants",
            "column5": "GroinLeft ThighRight ThighLeft ShinRight Shin",
            "column6": "",
            "column7": "-",
            "column8": "0%",
            "column9": "0%",
            "column10": "0%",
            "column11": "50%",
            "column12": "30%",
            "column13": "30%",
            "column14": "Base.Shorts_CamoUrbanLong"
        },
        {
            "column1": "",
            "column2": "Mini Skirt",
            "column3": "1.0",
            "column4": "Skirt",
            "column5": "GroinLeft ThighRight Thigh",
            "column6": "",
            "column7": "-",
            "column8": "0%",
            "column9": "0%",
            "column10": "0%",
            "column11": "10%",
            "column12": "1%",
            "column13": "-",
            "column14": "Base.Skirt_Mini"
        },
        {
            "column1": "",
            "column2": "Chef Pants",
            "column3": "1.0",
            "column4": "Pants",
            "column5": "GroinLeft ThighRight ThighLeft ShinRight Shin",
            "column6": "",
            "column7": "-",
            "column8": "0%",
            "column9": "0%",
            "column10": "0%",
            "column11": "40%",
            "column12": "10%",
            "column13": "-",
            "column14": "Base.Trousers_Chef"
        },
        {
            "column1": "",
            "column2": "Pants",
            "column3": "1.0",
            "column4": "Pants",
            "column5": "GroinLeft ThighRight ThighLeft ShinRight Shin",
            "column6": "",
            "column7": "-",
            "column8": "0%",
            "column9": "0%",
            "column10": "0%",
            "column11": "50%",
            "column12": "25%",
            "column13": "-",
            "column14": "Base.Trousers_DefaultTEXTUREBase.Trousers_DefaultTEXTURE_HUEBase.Trousers_DefaultTEXTURE_TINT"
        },
        {
            "column1": "",
            "column2": "Jeans",
            "column3": "1.0",
            "column4": "Pants",
            "column5": "GroinLeft ThighRight ThighLeft ShinRight Shin",
            "column6": "",
            "column7": "98%",
            "column8": "10%",
            "column9": "20%",
            "column10": "0%",
            "column11": "70%",
            "column12": "55%",
            "column13": "-",
            "column14": "Base.Trousers_Denim"
        },
        {
            "column1": "",
            "column2": "Firefighter Pants",
            "column3": "4.0",
            "column4": "Pants",
            "column5": "GroinLeft ThighRight ThighLeft ShinRight ShinCan't repair",
            "column6": "-",
            "column7": "82%",
            "column8": "20%",
            "column9": "30%",
            "column10": "0%",
            "column11": "85%",
            "column12": "85%",
            "column13": "80%",
            "column14": "Base.Trousers_Fireman"
        },
        {
            "column1": "",
            "column2": "Baggy Jeans",
            "column3": "1.0",
            "column4": "Pants",
            "column5": "GroinLeft ThighRight ThighLeft ShinRight Shin",
            "column6": "",
            "column7": "98%",
            "column8": "10%",
            "column9": "20%",
            "column10": "0%",
            "column11": "60%",
            "column12": "65%",
            "column13": "-",
            "column14": "Base.Trousers_JeanBaggy"
        },
        {
            "column1": "",
            "column2": "Padded Pants",
            "column3": "1.0",
            "column4": "Pants",
            "column5": "GroinLeft ThighRight ThighLeft ShinRight ShinCan't be repaired",
            "column6": "-",
            "column7": "95%",
            "column8": "10%",
            "column9": "20%",
            "column10": "0%",
            "column11": "100%",
            "column12": "100%",
            "column13": "60%",
            "column14": "Base.Trousers_Padded"
        },
        {
            "column1": "",
            "column2": "Police Trooper Pants",
            "column3": "1.0",
            "column4": "Pants",
            "column5": "GroinLeft ThighRight ThighLeft ShinRight Shin",
            "column6": "",
            "column7": "-",
            "column8": "0%",
            "column9": "0%",
            "column10": "0%",
            "column11": "60%",
            "column12": "30%",
            "column13": "-",
            "column14": "Base.Trousers_Police"
        },
        {
            "column1": "",
            "column2": "Police Deputy Pants",
            "column3": "1.0",
            "column4": "Pants",
            "column5": "GroinLeft ThighRight ThighLeft ShinRight Shin",
            "column6": "",
            "column7": "-",
            "column8": "0%",
            "column9": "10%",
            "column10": "0%",
            "column11": "55%",
            "column12": "40%",
            "column13": "-",
            "column14": "Base.Trousers_PoliceGrey"
        },
        {
            "column1": "",
            "column2": "Prison Guard Pants",
            "column3": "1.0",
            "column4": "Pants",
            "column5": "GroinLeft ThighRight ThighLeft ShinRight Shin",
            "column6": "",
            "column7": "-",
            "column8": "0%",
            "column9": "10%",
            "column10": "0%",
            "column11": "50%",
            "column12": "50%",
            "column13": "-",
            "column14": "Base.Trousers_PrisonGuard"
        },
        {
            "column1": "",
            "column2": "Ranger Pants",
            "column3": "1.0",
            "column4": "Pants",
            "column5": "GroinLeft ThighRight ThighLeft ShinRight Shin",
            "column6": "",
            "column7": "-",
            "column8": "0%",
            "column9": "10%",
            "column10": "0%",
            "column11": "75%",
            "column12": "75%",
            "column13": "35%",
            "column14": "Base.Trousers_Ranger"
        },
        {
            "column1": "",
            "column2": "Green Santa Suit PantsSanta Suit Pants",
            "column3": "1.0",
            "column4": "Pants",
            "column5": "GroinLeft ThighRight ThighLeft ShinRight Shin",
            "column6": "",
            "column7": "-",
            "column8": "0%",
            "column9": "10%",
            "column10": "0%",
            "column11": "90%",
            "column12": "60%",
            "column13": "-",
            "column14": "Base.Trousers_SantaBase.Trousers_SantaGReen"
        },
        {
            "column1": "",
            "column2": "Medical Pants",
            "column3": "1.0",
            "column4": "Pants",
            "column5": "GroinLeft ThighRight ThighLeft ShinRight Shin",
            "column6": "",
            "column7": "-",
            "column8": "0%",
            "column9": "0%",
            "column10": "0%",
            "column11": "20%",
            "column12": "10%",
            "column13": "-",
            "column14": "Base.Trousers_Scrubs"
        }
    ]
    )";
    };

    struct Legs2 {
        const char* jsonData = R"(
    [
        {
            "column1": "",
            "column2": "Suit Pants",
            "column3": "1.0",
            "column4": "Pants",
            "column5": "GroinLeft ThighRight ThighLeft ShinRight Shin",
            "column6": "",
            "column7": "-",
            "column8": "0%",
            "column9": "10%",
            "column10": "0%",
            "column11": "40%",
            "column12": "20%",
            "column13": "-",
            "column14": "Base.Trousers_Suit"
        },
        {
            "column1": "",
            "column2": "Suit Pants",
            "column3": "1.0",
            "column4": "Pants",
            "column5": "GroinLeft ThighRight ThighLeft ShinRight Shin",
            "column6": "",
            "column7": "-",
            "column8": "0%",
            "column9": "10%",
            "column10": "0%",
            "column11": "40%",
            "column12": "30%",
            "column13": "-",
            "column14": "Base.Trousers_SuitTEXTURE"
        },
        {
            "column1": "",
            "column2": "Suit Pants",
            "column3": "1.0",
            "column4": "Pants",
            "column5": "GroinLeft ThighRight ThighLeft ShinRight Shin",
            "column6": "",
            "column7": "-",
            "column8": "0%",
            "column9": "10%",
            "column10": "0%",
            "column11": "40%",
            "column12": "45%",
            "column13": "-",
            "column14": "Base.Trousers_SuitWhite"
        },
        {
            "column1": "",
            "column2": "Pants",
            "column3": "1.0",
            "column4": "Pants",
            "column5": "GroinLeft ThighRight ThighLeft ShinRight Shin",
            "column6": "",
            "column7": "-",
            "column8": "0%",
            "column9": "10%",
            "column10": "0%",
            "column11": "55%",
            "column12": "30%",
            "column13": "-",
            "column14": "Base.Trousers_WhiteTEXTUREBase.Trousers_WhiteTINT"
        },
        {
            "column1": "",
            "column2": "Overalls",
            "column3": "1.0",
            "column4": "Pants",
            "column5": "GroinLeft ThighRight ThighLeft ShinRight ShinUpper TorsoLower Torso",
            "column6": "",
            "column7": "95%",
            "column8": "10%",
            "column9": "20%",
            "column10": "0%",
            "column11": "65%",
            "column12": "50%",
            "column13": "20%",
            "column14": "Base.Dungarees"
        },
        {
            "column1": "",
            "column2": "Army Pants",
            "column3": "1.0",
            "column4": "Pants",
            "column5": "GroinLeft ThighRight ThighLeft ShinRight Shin",
            "column6": "",
            "column7": "-",
            "column8": "0%",
            "column9": "10%",
            "column10": "0%",
            "column11": "70%",
            "column12": "45%",
            "column13": "-",
            "column14": "Base.Trousers_ArmyService"
        },
        {
            "column1": "",
            "column2": "Black Trousers",
            "column3": "1.0",
            "column4": "Pants",
            "column5": "GroinLeft ThighRight ThighLeft ShinRight Shin",
            "column6": "",
            "column7": "-",
            "column8": "0%",
            "column9": "10%",
            "column10": "0%",
            "column11": "50%",
            "column12": "50%",
            "column13": "-",
            "column14": "Base.Trousers_Black"
        },
        {
            "column1": "",
            "column2": "Navy Blue Trousers",
            "column3": "1.0",
            "column4": "Pants",
            "column5": "GroinLeft ThighRight ThighLeft ShinRight Shin",
            "column6": "",
            "column7": "-",
            "column8": "0%",
            "column9": "10%",
            "column10": "0%",
            "column11": "35%",
            "column12": "50%",
            "column13": "-",
            "column14": "Base.Trousers_NavyBlue"
        },
        {
            "column1": "",
            "column2": "Skinny Leather Trousers",
            "column3": "1.0",
            "column4": "Pants",
            "column5": "GroinLeft ThighRight ThighLeft ShinRight Shin",
            "column6": "",
            "column7": "98%",
            "column8": "20%",
            "column9": "40%",
            "column10": "0%",
            "column11": "65%",
            "column12": "60%",
            "column13": "-",
            "column14": "Base.TrousersMesh_Leather"
        },
        {
            "column1": "",
            "column2": "Black Leather Trousers",
            "column3": "1.0",
            "column4": "Pants",
            "column5": "GroinLeft ThighRight ThighLeft ShinRight Shin",
            "column6": "",
            "column7": "98%",
            "column8": "20%",
            "column9": "40%",
            "column10": "0%",
            "column11": "65%",
            "column12": "60%",
            "column13": "-",
            "column14": "Base.Trousers_LeatherBlack"
        },
        {
            "column1": "",
            "column2": "Shell Suit Trousers",
            "column3": "1.0",
            "column4": "Pants",
            "column5": "GroinLeft ThighRight ThighLeft ShinRight ShinCan't be repaired",
            "column6": "-",
            "column7": "-",
            "column8": "0%",
            "column9": "5%",
            "column10": "0%",
            "column11": "30%",
            "column12": "40%",
            "column13": "-",
            "column14": "Base.Trousers_Shellsuit_BlackBase.Trousers_Shellsuit_BlueBase.Trousers_Shellsuit_GreenBase.Trousers_Shellsuit_PinkBase.Trousers_Shellsuit_TealBase.Trousers_Shellsuit_TINT"
        }
    ]
    )";
	};
    
    struct Shirts {
        const char* jsonData = R"(
    [
        {
            "column1": "",
            "column2": "Denim Shirt",
            "column3": "1.0",
            "column4": "Shirt",
            "column5": "Upper TorsoLower TorsoLeft Upper ArmRight Upper ArmLeft ForearmRight Forearm",
            "column6": "",
            "column7": "7%",
            "column8": "15%",
            "column9": "0%",
            "column10": "45%",
            "column11": "55%",
            "column12": "-",
            "column13": "Base.Shirt_Denim"
        },
        {
            "column1": "",
            "column2": "Formal Shirt",
            "column3": "1.0",
            "column4": "Shirt",
            "column5": "Upper TorsoLower TorsoLeft Upper ArmRight Upper ArmLeft ForearmRight Forearm",
            "column6": "",
            "column7": "0%",
            "column8": "0%",
            "column9": "0%",
            "column10": "25%",
            "column11": "15%",
            "column12": "-",
            "column13": "Base.Shirt_FormalWhite"
        },
        {
            "column1": "",
            "column2": "Jockey Silks - 1Jockey Silks - 2Jockey Silks - 3Jockey Silks - 4Jockey Silks - 5Jockey Silks - 6",
            "column3": "1.0",
            "column4": "Shirt",
            "column5": "Upper TorsoLower TorsoLeft Upper ArmRight Upper ArmLeft ForearmRight Forearm",
            "column6": "",
            "column7": "0%",
            "column8": "0%",
            "column9": "0%",
            "column10": "10%",
            "column11": "5%",
            "column12": "-",
            "column13": "Base.Shirt_Jockey01"
        },
        {
            "column1": "",
            "column2": "Lumberjack Shirt",
            "column3": "1.0",
            "column4": "Shirt",
            "column5": "Upper TorsoLower TorsoLeft Upper ArmRight Upper ArmLeft ForearmRight Forearm",
            "column6": "",
            "column7": "0%",
            "column8": "0%",
            "column9": "0%",
            "column10": "65%",
            "column11": "50%",
            "column12": "-",
            "column13": "Base.Shirt_Lumberjack"
        },
        {
            "column1": "",
            "column2": "Medical Scrubs",
            "column3": "1.0",
            "column4": "Shirt",
            "column5": "Upper TorsoLower TorsoLeft Upper ArmRight Upper ArmLeft ForearmRight Forearm",
            "column6": "",
            "column7": "0%",
            "column8": "0%",
            "column9": "0%",
            "column10": "10%",
            "column11": "5%",
            "column12": "-",
            "column13": "Base.Shirt_Scrubs"
        },
        {
            "column1": "",
            "column2": "Military Green Camo Shirt",
            "column3": "1.0",
            "column4": "Shirt",
            "column5": "Upper TorsoLower TorsoLeft Upper ArmRight Upper ArmLeft ForearmRight Forearm",
            "column6": "",
            "column7": "0%",
            "column8": "0%",
            "column9": "0%",
            "column10": "25%",
            "column11": "15%",
            "column12": "-",
            "column13": "Base.Shirt_CamoGreen"
        },
        {
            "column1": "",
            "column2": "Military Desert Camo Shirt",
            "column3": "1.0",
            "column4": "Shirt",
            "column5": "Upper TorsoLower TorsoLeft Upper ArmRight Upper ArmLeft ForearmRight Forearm",
            "column6": "",
            "column7": "0%",
            "column8": "0%",
            "column9": "0%",
            "column10": "15%",
            "column11": "10%",
            "column12": "-",
            "column13": "Base.Shirt_CamoDesert"
        },
        {
            "column1": "",
            "column2": "Military Urban Camo Shirt",
            "column3": "1.0",
            "column4": "Shirt",
            "column5": "Upper TorsoLower TorsoLeft Upper ArmRight Upper ArmLeft ForearmRight Forearm",
            "column6": "",
            "column7": "0%",
            "column8": "0%",
            "column9": "0%",
            "column10": "30%",
            "column11": "20%",
            "column12": "-",
            "column13": "Base.Shirt_CamoUrban"
        },
        {
            "column1": "",
            "column2": "Police Deputy Shirt",
            "column3": "1.0",
            "column4": "Shirt",
            "column5": "Upper TorsoLower TorsoLeft Upper ArmRight Upper ArmLeft ForearmRight Forearm",
            "column6": "",
            "column7": "0%",
            "column8": "0%",
            "column9": "0%",
            "column10": "30%",
            "column11": "15%",
            "column12": "-",
            "column13": "Base.Shirt_PoliceGrey"
        },
        {
            "column1": "",
            "column2": "Police Shirt",
            "column3": "1.0",
            "column4": "Shirt",
            "column5": "Upper TorsoLower TorsoLeft Upper ArmRight Upper ArmLeft ForearmRight Forearm",
            "column6": "",
            "column7": "0%",
            "column8": "0%",
            "column9": "0%",
            "column10": "25%",
            "column11": "15%",
            "column12": "-",
            "column13": "Base.Shirt_OfficerWhite"
        },
        {
            "column1": "",
            "column2": "Police Trooper Shirt",
            "column3": "1.0",
            "column4": "Shirt",
            "column5": "Upper TorsoLower TorsoLeft Upper ArmRight Upper ArmLeft ForearmRight Forearm",
            "column6": "",
            "column7": "0%",
            "column8": "0%",
            "column9": "0%",
            "column10": "20%",
            "column11": "20%",
            "column12": "-",
            "column13": "Base.Shirt_PoliceBlue"
        },
        {
            "column1": "",
            "column2": "Priest Shirt",
            "column3": "1.0",
            "column4": "Shirt",
            "column5": "Upper TorsoLower TorsoLeft Upper ArmRight Upper ArmLeft ForearmRight Forearm",
            "column6": "",
            "column7": "0%",
            "column8": "0%",
            "column9": "0%",
            "column10": "20%",
            "column11": "10%",
            "column12": "-",
            "column13": "Base.Shirt_Priest"
        },
        {
            "column1": "",
            "column2": "Prison Guard Shirt",
            "column3": "1.0",
            "column4": "Shirt",
            "column5": "Upper TorsoLower TorsoLeft Upper ArmRight Upper ArmLeft ForearmRight Forearm",
            "column6": "",
            "column7": "0%",
            "column8": "0%",
            "column9": "0%",
            "column10": "25%",
            "column11": "25%",
            "column12": "-",
            "column13": "Base.Shirt_PrisonGuard"
        },
        {
            "column1": "",
            "column2": "Ranger Shirt",
            "column3": "1.0",
            "column4": "Shirt",
            "column5": "Upper TorsoLower TorsoLeft Upper ArmRight Upper ArmLeft ForearmRight Forearm",
            "column6": "",
            "column7": "0%",
            "column8": "0%",
            "column9": "0%",
            "column10": "40%",
            "column11": "35%",
            "column12": "-",
            "column13": "Base.Shirt_Ranger"
        },
        {
            "column1": "",
            "column2": "Workman Shirt",
            "column3": "1.0",
            "column4": "Shirt",
            "column5": "Upper TorsoLower TorsoLeft Upper ArmRight Upper ArmLeft ForearmRight Forearm",
            "column6": "",
            "column7": "0%",
            "column8": "0%",
            "column9": "0%",
            "column10": "35%",
            "column11": "30%",
            "column12": "-",
            "column13": "Base.Shirt_Workman"
        }
    ]
    )";
    };

    struct Shortsleeveshirts {
        const char* jsonData = R"(
    [
        {
            "column1": "",
            "column2": "Kentucky Baseball ShirtRiverside Rangers Baseball ShirtZ Hurricanes Baseball Shirt",
            "column3": "1.0",
            "column4": "ShortSleeveShirt",
            "column5": "Upper TorsoLower TorsoLeft Upper ArmRight Upper Arm",
            "column6": "",
            "column7": "0%",
            "column8": "0%",
            "column9": "0%",
            "column10": "20%",
            "column11": "5%",
            "column12": "-",
            "column13": "Base.Shirt_Baseball_KY"
        },
        {
            "column1": "",
            "column2": "Bowling Shirt BlueBowling Shirt BrownBowling Shirt GreenBowling Shirt Lime GreenBowling Shirt PinkBowling Shirt White",
            "column3": "1.0",
            "column4": "ShortSleeveShirt",
            "column5": "Upper TorsoLower TorsoLeft Upper ArmRight Upper Arm",
            "column6": "",
            "column7": "0%",
            "column8": "0%",
            "column9": "0%",
            "column10": "20%",
            "column11": "5%",
            "column12": "-",
            "column13": "Base.Shirt_BowlingBlue"
        },
        {
            "column1": "",
            "column2": "Hawaiian ShirtHawaiian Red Shirt",
            "column3": "1.0",
            "column4": "ShortSleeveShirt",
            "column5": "Upper TorsoLower TorsoLeft Upper ArmRight Upper Arm",
            "column6": "",
            "column7": "0%",
            "column8": "0%",
            "column9": "0%",
            "column10": "10%",
            "column11": "5%",
            "column12": "-",
            "column13": "Base.Shirt_HawaiianTINT"
        },
        {
            "column1": "",
            "column2": "Short Sleeve Shirt",
            "column3": "1.0",
            "column4": "ShortSleeveShirt",
            "column5": "Upper TorsoLower TorsoLeft Upper ArmRight Upper Arm",
            "column6": "",
            "column7": "0%",
            "column8": "0%",
            "column9": "0%",
            "column10": "15%",
            "column11": "5%",
            "column12": "-",
            "column13": "Base.Shirt_FormalWhite_ShortSleeve"
        }
    ]
    )";
    };

    struct Socks {
        const char* jsonData = R"(
    [
        {
            "column1": "",
            "column2": "Long Socks",
            "column3": "0.1",
            "column4": "Socks",
            "column5": "Left FootRight FootLeft ShinRight Shin",
            "column6": "",
            "column7": "0%",
            "column8": "0%",
            "column9": "0%",
            "column10": "55%",
            "column11": "65%",
            "column12": "-",
            "column13": "Base.Socks_Long"
        },
        {
            "column1": "",
            "column2": "Socks",
            "column3": "0.1",
            "column4": "Socks",
            "column5": "Left FootRight Foot",
            "column6": "",
            "column7": "0%",
            "column8": "0%",
            "column9": "0%",
            "column10": "15%",
            "column11": "10%",
            "column12": "-",
            "column13": "Base.Socks_Ankle"
        }
    ]
    )";
    };

    struct Suit {
        const char* jsonData = R"(
    [
        {
            "column1": "",
            "column2": "Air Force Coveralls",
            "column3": "1.0",
            "column4": "Boilersuit(PantsSweaterJacketTorsoExtra) ",
            "column5": "GroinLeft ThighRight ThighLeft ShinRight ShinUpper TorsoLower TorsoLeft Upper ArmRight Upper ArmLeft ForearmRight Forearm",
            "column6": "",
            "column7": "90%",
            "column8": "0%",
            "column9": "10%",
            "column10": "0%",
            "column11": "75%",
            "column12": "55%",
            "column13": "-",
            "column14": "Base.Boilersuit_Flying"
        },
        {
            "column1": "",
            "column2": "Bath Robe",
            "column3": "1.0",
            "column4": "BathRobe(SweaterJacketTorsoExtra) ",
            "column5": "GroinLeft ThighRight ThighLeft ShinRight ShinUpper TorsoLower TorsoLeft Upper ArmRight Upper ArmLeft ForearmRight Forearm",
            "column6": "",
            "column7": "90%",
            "column8": "0%",
            "column9": "10%",
            "column10": "0%",
            "column11": "50%",
            "column12": "35%",
            "column13": "-",
            "column14": "Base.LongCoat_Bathrobe"
        },
        {
            "column1": "",
            "column2": "Coveralls",
            "column3": "1.0",
            "column4": "Boilersuit(PantsSweaterJacketTorsoExtra) ",
            "column5": "GroinLeft ThighRight ThighLeft ShinRight ShinUpper TorsoLower TorsoLeft Upper ArmRight Upper ArmLeft ForearmRight Forearm",
            "column6": "",
            "column7": "90%",
            "column8": "0%",
            "column9": "10%",
            "column10": "0%",
            "column11": "65%",
            "column12": "45%",
            "column13": "-",
            "column14": "Base.Boilersuit"
        },
        {
            "column1": "",
            "column2": "Dress",
            "column3": "1.0",
            "column4": "Dress(PantsShortSleeveShirtShirt) ",
            "column5": "GroinLeft ThighRight ThighLeft ShinRight ShinUpper TorsoLower TorsoLeft Upper ArmRight Upper Arm",
            "column6": "",
            "column7": "93%",
            "column8": "0%",
            "column9": "0%",
            "column10": "0%",
            "column11": "20%",
            "column12": "15%",
            "column13": "-",
            "column14": "Base.Dress_Normal"
        },
        {
            "column1": "",
            "column2": "Hazmat Suit",
            "column3": "1.0",
            "column4": "FullSuitHead(EyesMaskHatNeckHandsPantsSweaterJacketTorsoExtra) ",
            "column5": "GroinLeft ThighRight ThighLeft ShinRight ShinUpper TorsoLower TorsoLeft Upper ArmRight Upper ArmLeft ForearmRight ForearmHeadNeckLeft HandRight HandLeft FootRight FootCan't be repaired",
            "column6": "-",
            "column7": "75%",
            "column8": "5%",
            "column9": "15%",
            "column10": "0%",
            "column11": "65%",
            "column12": "90%",
            "column13": "-",
            "column14": "Base.HazmatSuit"
        },
        {
            "column1": "",
            "column2": "Hospital Gown",
            "column3": "1.0",
            "column4": "Dress(PantsShortSleeveShirtShirt) ",
            "column5": "GroinLeft ThighRight ThighLeft ShinRight ShinUpper TorsoLower TorsoLeft Upper ArmRight Upper Arm",
            "column6": "",
            "column7": "-",
            "column8": "0%",
            "column9": "0%",
            "column10": "0%",
            "column11": "10%",
            "column12": "5%",
            "column13": "-",
            "column14": "Base.HospitalGown"
        },
        {
            "column1": "",
            "column2": "Knee-length Dress",
            "column3": "1.0",
            "column4": "Dress(PantsShortSleeveShirtShirt) ",
            "column5": "GroinLeft ThighRight ThighUpper TorsoLower TorsoLeft Upper ArmRight Upper Arm",
            "column6": "",
            "column7": "-",
            "column8": "0%",
            "column9": "0%",
            "column10": "0%",
            "column11": "15%",
            "column12": "10%",
            "column13": "-",
            "column14": "Base.Dress_Knee"
        },
        {
            "column1": "",
            "column2": "Little Black Dress",
            "column3": "1.0",
            "column4": "Dress(PantsShortSleeveShirtShirt) ",
            "column5": "GroinLeft ThighRight ThighUpper TorsoLower TorsoLeft Upper ArmRight Upper Arm",
            "column6": "",
            "column7": "-",
            "column8": "0%",
            "column9": "0%",
            "column10": "0%",
            "column11": "15%",
            "column12": "10%",
            "column13": "-",
            "column14": "Base.Dress_SmallBlackStraps"
        },
        {
            "column1": "",
            "column2": "Satin Negligee",
            "column3": "1.0",
            "column4": "Dress(PantsShortSleeveShirtShirt) ",
            "column5": "GroinLeft ThighRight ThighUpper TorsoLower TorsoLeft Upper ArmRight Upper Arm",
            "column6": "",
            "column7": "-",
            "column8": "0%",
            "column9": "0%",
            "column10": "0%",
            "column11": "15%",
            "column12": "10%",
            "column13": "-",
            "column14": "Base.Dress_SatinNegligee"
        },
        {
            "column1": "",
            "column2": "Strapless Black Dress",
            "column3": "1.0",
            "column4": "Dress(PantsShortSleeveShirtShirt) ",
            "column5": "GroinLeft ThighRight ThighUpper TorsoLower TorsoLeft Upper ArmRight Upper Arm",
            "column6": "",
            "column7": "-",
            "column8": "0%",
            "column9": "0%",
            "column10": "0%",
            "column11": "15%",
            "column12": "10%",
            "column13": "-",
            "column14": "Base.Dress_SmallBlackStrapless"
        },
        {
            "column1": "",
            "column2": "Strapless Small Dress",
            "column3": "1.0",
            "column4": "Dress(PantsShortSleeveShirtShirt) ",
            "column5": "GroinLeft ThighRight ThighUpper TorsoLower TorsoLeft Upper ArmRight Upper Arm",
            "column6": "",
            "column7": "-",
            "column8": "0%",
            "column9": "0%",
            "column10": "0%",
            "column11": "15%",
            "column12": "10%",
            "column13": "-",
            "column14": "Base.Dress_SmallStrapless"
        },
        {
            "column1": "",
            "column2": "Straps Dress",
            "column3": "1.0",
            "column4": "Dress(PantsShortSleeveShirtShirt) ",
            "column5": "GroinLeft ThighRight ThighUpper TorsoLower TorsoLeft Upper ArmRight Upper Arm",
            "column6": "",
            "column7": "-",
            "column8": "0%",
            "column9": "0%",
            "column10": "0%",
            "column11": "20%",
            "column12": "15%",
            "column13": "-",
            "column14": "Base.Dress_Straps"
        },
        {
            "column1": "",
            "column2": "Straps Knee-length Dress",
            "column3": "1.0",
            "column4": "Dress(PantsShortSleeveShirtShirt) ",
            "column5": "GroinLeft ThighRight ThighUpper TorsoLower TorsoLeft Upper ArmRight Upper Arm",
            "column6": "",
            "column7": "-",
            "column8": "0%",
            "column9": "0%",
            "column10": "0%",
            "column11": "15%",
            "column12": "10%",
            "column13": "-",
            "column14": "Base.DressKnees_Straps"
        },
        {
            "column1": "",
            "column2": "Straps Small Dress",
            "column3": "1.0",
            "column4": "Dress(PantsShortSleeveShirtShirt) ",
            "column5": "GroinLeft ThighRight ThighUpper TorsoLower TorsoLeft Upper ArmRight Upper Arm",
            "column6": "",
            "column7": "-",
            "column8": "0%",
            "column9": "0%",
            "column10": "0%",
            "column11": "15%",
            "column12": "10%",
            "column13": "-",
            "column14": "Base.Dress_SmallStraps"
        },
        {
            "column1": "",
            "column2": "Long Dress",
            "column3": "1.0",
            "column4": "Dress(PantsShortSleeveShirtShirt) ",
            "column5": "GroinLeft ThighRight ThighLeft ShinRight ShinUpper TorsoLower TorsoLeft Upper ArmRight Upper Arm",
            "column6": "",
            "column7": "90%",
            "column8": "0%",
            "column9": "0%",
            "column10": "0%",
            "column11": "30%",
            "column12": "20%",
            "column13": "-",
            "column14": "Base.Dress_Long"
        },
        {
            "column1": "",
            "column2": "Prisoner Jumpsuit",
            "column3": "1.0",
            "column4": "Boilersuit(PantsSweaterJacketTorsoExtra) ",
            "column5": "GroinLeft ThighRight ThighLeft ShinRight ShinUpper TorsoLower TorsoLeft Upper ArmRight Upper ArmLeft ForearmRight Forearm",
            "column6": "",
            "column7": "90%",
            "column8": "0%",
            "column9": "10%",
            "column10": "0%",
            "column11": "45%",
            "column12": "35%",
            "column13": "-",
            "column14": "Base.Boilersuit_Prisoner"
        },
        {
            "column1": "",
            "column2": "Prisoner Jumpsuit",
            "column3": "1.0",
            "column4": "Boilersuit(PantsSweaterJacketTorsoExtra) ",
            "column5": "GroinLeft ThighRight ThighLeft ShinRight ShinUpper TorsoLower TorsoLeft Upper ArmRight Upper ArmLeft ForearmRight Forearm",
            "column6": "",
            "column7": "90%",
            "column8": "0%",
            "column9": "10%",
            "column10": "0%",
            "column11": "40%",
            "column12": "30%",
            "column13": "-",
            "column14": "Base.Boilersuit_PrisonerKhaki"
        },
        {
            "column1": "",
            "column2": "Short Dress",
            "column3": "1.0",
            "column4": "Dress(PantsShortSleeveShirtShirt) ",
            "column5": "GroinLeft ThighRight ThighUpper TorsoLower TorsoLeft Upper ArmRight Upper Arm",
            "column6": "",
            "column7": "-",
            "column8": "0%",
            "column9": "0%",
            "column10": "0%",
            "column11": "10%",
            "column12": "5%",
            "column13": "-",
            "column14": "Base.Dress_Short"
        },
        {
            "column1": "",
            "column2": "Spiffo Suit",
            "column3": "1.0",
            "column4": "FullSuit(PantsSweaterJacketTorsoExtra) ",
            "column5": "GroinLeft ThighRight ThighLeft ShinRight ShinUpper TorsoLower TorsoLeft Upper ArmRight Upper ArmLeft ForearmRight ForearmCan't be repaired",
            "column6": "-",
            "column7": "70%",
            "column8": "0%",
            "column9": "10%",
            "column10": "0%",
            "column11": "85%",
            "column12": "60%",
            "column13": "-",
            "column14": "Base.SpiffoSuit"
        },
        {
            "column1": "",
            "column2": "Wedding Dress",
            "column3": "1.0",
            "column4": "FullSuit(PantsSweaterJacketTorsoExtra) ",
            "column5": "GroinLeft Thigh. Right Thigh. Left Shin. Right Shin. Upper Torso. Lower Torso. Left Upper Arm. Right Upper Arm",
            "column6": "",
            "column7": "80%",
            "column8": "0%",
            "column9": "10%",
            "column10": "0%",
            "column11": "25%",
            "column12": "10%",
            "column13": "-",
            "column14": "Base.WeddingDress"
        }
    ]
    )";
    };

    struct Sweaters {
        const char* jsonData = R"(
    [
        {
            "column1": "",
            "column2": "Diamond-pattern Sweater",
            "column3": "1.0",
            "column4": "Sweater",
            "column5": "Upper TorsoLower Torso. Left Upper Arm. Right Upper Arm. Left Forearm. Right ForearmNeck",
            "column6": "",
            "column7": "0%",
            "column8": "10%",
            "column9": "0%",
            "column10": "-",
            "column11": "55%",
            "column12": "45%",
            "column13": "-",
            "column14": "Base.Jumper_DiamondPatternTINT"
        },
        {
            "column1": "",
            "column2": "Diamond-pattern Sweater Vest",
            "column3": "1.0",
            "column4": "Sweater",
            "column5": "Upper TorsoLower Torso",
            "column6": "",
            "column7": "0%",
            "column8": "10%",
            "column9": "0%",
            "column10": "-",
            "column11": "40%",
            "column12": "20%",
            "column13": "-",
            "column14": "Base.Jumper_TankTopDiamondTINT"
        },
        {
            "column1": "",
            "column2": "Polo Neck Sweater",
            "column3": "1.0",
            "column4": "Sweater",
            "column5": "Upper TorsoLower Torso. Left Upper Arm. Right Upper Arm. Left ForearmRight Forearm",
            "column6": "",
            "column7": "0%",
            "column8": "10%",
            "column9": "0%",
            "column10": "-",
            "column11": "55%",
            "column12": "50%",
            "column13": "-",
            "column14": "Base.Jumper_PoloNeck"
        },
        {
            "column1": "",
            "column2": "Round Neck Sweater",
            "column3": "1.0",
            "column4": "Sweater",
            "column5": "Upper TorsoLower Torso. Left Upper Arm. Right Upper Arm. Left Forearm. Right Forearm",
            "column6": "",
            "column7": "0%",
            "column8": "10%",
            "column9": "0%",
            "column10": "-",
            "column11": "40%",
            "column12": "35%",
            "column13": "-",
            "column14": "Base.Jumper_RoundNeck"
        },
        {
            "column1": "",
            "column2": "V-neck Sweater",
            "column3": "1.0",
            "column4": "Sweater",
            "column5": "Upper TorsoLower Torso. Left Upper Arm. Right Upper Arm. Left Forearm. Right Forearm",
            "column6": "",
            "column7": "0%",
            "column8": "10%",
            "column9": "0%",
            "column10": "-",
            "column11": "40%",
            "column12": "20%",
            "column13": "-",
            "column14": "Base.Jumper_VNeck"
        },
        {
            "column1": "",
            "column2": "V-neck Sweater Vest",
            "column3": "1.0",
            "column4": "Sweater",
            "column5": "Upper TorsoLower Torso",
            "column6": "",
            "column7": "0%",
            "column8": "10%",
            "column9": "0%",
            "column10": "-",
            "column11": "45%",
            "column12": "15%",
            "column13": "-",
            "column14": "Base.Jumper_TankTopTINT"
        },
        {
            "column1": "",
            "column2": "Hoodie",
            "column3": "1.0",
            "column4": "Sweater",
            "column5": "Upper Torso. Lower Torso. Left Upper Arm. Right Upper Arm. Left Forearm. Right Forearm",
            "column6": "",
            "column7": "0%",
            "column8": "10%",
            "column9": "0%",
            "column10": "50%",
            "column11": "60%",
            "column12": "25%",
            "column13": "-",
            "column14": "Base.HoodieDOWN_WhiteTINT"
        },
        {
            "column1": "",
            "column2": "Hoodie (hooded) ",
            "column3": "1.0",
            "column4": "SweaterHat(SweaterHat) ",
            "column5": "Upper Torso. Lower Torso. Left Upper Arm. Right Upper Arm. Left Forearm. Right Forearm. Head",
            "column6": "",
            "column7": "0%",
            "column8": "10%",
            "column9": "0%",
            "column10": "-",
            "column11": "55%",
            "column12": "20%",
            "column13": "-",
            "column14": "Base.HoodieUP_WhiteTINT"
        }
    ]
    )";
    };

    struct Tanktop {
        const char* jsonData = R"(
    [
        {
            "column1": "",
            "column2": "Tank Top",
            "column3": "1.0",
            "column4": "TankTop",
            "column5": "Upper TorsoLower Torso",
            "column6": "",
            "column7": "0%",
            "column8": "0%",
            "column9": "0%",
            "column10": "40%",
            "column11": "30%",
            "column12": "-",
            "column13": "Base.Vest_DefaultTEXTURE"
        }
    ]
    )";
    };

    struct Torsoextra {
        const char* jsonData = R"(
    [
        {
            "column1": "",
            "column2": "ApronTight Fit Apron",
            "column3": "1.0",
            "column4": "TorsoExtra",
            "column5": "Upper TorsoLower TorsoLeft ThighRight Thigh",
            "column6": "",
            "column7": "0%",
            "column8": "0%",
            "column9": "0%",
            "column10": "-",
            "column11": "-",
            "column12": "-",
            "column13": "Base.Apron_BlackBase.Apron_White"
        },
        {
            "column1": "",
            "column2": "Camo Hunting Vest",
            "column3": "1.0",
            "column4": "TorsoExtraVest(TorsoExtra) ",
            "column5": "Upper TorsoLower TorsoCan't be repaired",
            "column6": "-",
            "column7": "0%",
            "column8": "0%",
            "column9": "0%",
            "column10": "80%",
            "column11": "65%",
            "column12": "-",
            "column13": "Base.Vest_Hunting_Camo"
        },
        {
            "column1": "",
            "column2": "Civilian Bulletproof Vest",
            "column3": "1.0",
            "column4": "TorsoExtraVest(TorsoExtra) ",
            "column5": "Upper TorsoLower TorsoCan't be repaired",
            "column6": "-",
            "column7": "30%",
            "column8": "55%",
            "column9": "100%",
            "column10": "60%",
            "column11": "25%",
            "column12": "-",
            "column13": "Base.Vest_BulletCivilian"
        },
        {
            "column1": "",
            "column2": "Foreman Vest",
            "column3": "1.0",
            "column4": "TorsoExtraVest(TorsoExtra) ",
            "column5": "Upper TorsoLower TorsoCan't be repaired",
            "column6": "-",
            "column7": "0%",
            "column8": "0%",
            "column9": "0%",
            "column10": "70%",
            "column11": "55%",
            "column12": "-",
            "column13": "Base.Vest_Foreman"
        },
        {
            "column1": "",
            "column2": "GigaMart Waistcoat",
            "column3": "1.0",
            "column4": "TorsoExtra",
            "column5": "Upper TorsoLower Torso",
            "column6": "",
            "column7": "0%",
            "column8": "0%",
            "column9": "0%",
            "column10": "40%",
            "column11": "20%",
            "column12": "-",
            "column13": "Base.Vest_Waistcoat_GigaMart"
        },
        {
            "column1": "",
            "column2": "Gray Hunting Vest",
            "column3": "1.0",
            "column4": "TorsoExtraVest(TorsoExtra) ",
            "column5": "Upper TorsoLower TorsoCan't be repaired",
            "column6": "-",
            "column7": "0%",
            "column8": "0%",
            "column9": "0%",
            "column10": "90%",
            "column11": "80%",
            "column12": "-",
            "column13": "Base.Vest_Hunting_Grey"
        },
        {
            "column1": "",
            "column2": "Green Camo Hunting Vest",
            "column3": "1.0",
            "column4": "TorsoExtraVest(TorsoExtra) ",
            "column5": "Upper TorsoLower TorsoCan't be repaired",
            "column6": "-",
            "column7": "0%",
            "column8": "0%",
            "column9": "0%",
            "column10": "70%",
            "column11": "80%",
            "column12": "-",
            "column13": "Base.Vest_Hunting_CamoGreen"
        },
        {
            "column1": "",
            "column2": "High Visibility Vest",
            "column3": "1.0",
            "column4": "TorsoExtraVest(TorsoExtra) ",
            "column5": "Upper TorsoLower TorsoCan't be repaired",
            "column6": "-",
            "column7": "0%",
            "column8": "0%",
            "column9": "0%",
            "column10": "10%",
            "column11": "5%",
            "column12": "-",
            "column13": "Base.Vest_HighViz"
        },
        {
            "column1": "",
            "column2": "Military Bulletproof Vest",
            "column3": "1.0",
            "column4": "TorsoExtraVest(TorsoExtra) ",
            "column5": "Upper TorsoLower TorsoCan't be repaired",
            "column6": "-",
            "column7": "30%",
            "column8": "55%",
            "column9": "100%",
            "column10": "75%",
            "column11": "45%",
            "column12": "-",
            "column13": "Base.Vest_BulletArmy"
        },
        {
            "column1": "",
            "column2": "Orange Hunting Vest",
            "column3": "1.0",
            "column4": "TorsoExtraVest(TorsoExtra) ",
            "column5": "Upper TorsoLower TorsoCan't be repaired",
            "column6": "-",
            "column7": "0%",
            "column8": "0%",
            "column9": "0%",
            "column10": "75%",
            "column11": "75%",
            "column12": "-",
            "column13": "Base.Vest_Hunting_Orange"
        },
        {
            "column1": "",
            "column2": "Police Bulletproof Vest",
            "column3": "1.0",
            "column4": "TorsoExtraVest(TorsoExtra) ",
            "column5": "Upper TorsoLower TorsoCan't be repaired",
            "column6": "-",
            "column7": "30%",
            "column8": "55%",
            "column9": "100%",
            "column10": "65%",
            "column11": "30%",
            "column12": "-",
            "column13": "Base.Vest_BulletPolice"
        },
        {
            "column1": "",
            "column2": "Waistcoat",
            "column3": "1.0",
            "column4": "TorsoExtra",
            "column5": "Upper TorsoLower Torso",
            "column6": "",
            "column7": "0%",
            "column8": "0%",
            "column9": "0%",
            "column10": "35%",
            "column11": "25%",
            "column12": "-",
            "column13": "Base.Vest_Waistcoat"
        }
    ]
    )";
    };

    struct Tshirts {
        const char* jsonData = R"(
    [
        {
            "column1": "",
            "column2": "Bandeau",
            "column3": "1.0",
            "column4": "Tshirt",
            "column5": "Upper TorsoLower Torso. Left Upper Arm. Right Upper Arm",
            "column6": "",
            "column7": "0%",
            "column8": "0%",
            "column9": "0%",
            "column10": "-",
            "column11": "-",
            "column12": "-",
            "column13": "Base.BoobTube"
        },
        {
            "column1": "",
            "column2": "Crop Top",
            "column3": "1.0",
            "column4": "Tshirt",
            "column5": "Upper TorsoLower Torso. Left Upper Arm. Right Upper Arm",
            "column6": "",
            "column7": "0%",
            "column8": "0%",
            "column9": "0%",
            "column10": "-",
            "column11": "-",
            "column12": "-",
            "column13": "Base.Shirt_CropTopNoArmTINT"
        },
        {
            "column1": "",
            "column2": "Crop Top Arms",
            "column3": "1.0",
            "column4": "Tshirt",
            "column5": "Upper TorsoLower Torso. Left Upper Arm. Right Upper Arm",
            "column6": "",
            "column7": "0%",
            "column8": "0%",
            "column9": "0%",
            "column10": "-",
            "column11": "-",
            "column12": "-",
            "column13": "Base.Shirt_CropTopTINT"
        },
        {
            "column1": "",
            "column2": "Blue Fireman T-shirtDark Red Fireman T-shirtRed Fireman T-shirtWhite Fireman T-shirt",
            "column3": "1.0",
            "column4": "Tshirt",
            "column5": "Upper TorsoLower TorsoLeft Upper ArmRight Upper Arm",
            "column6": "",
            "column7": "0%",
            "column8": "0%",
            "column9": "0%",
            "column10": "50%",
            "column11": "30%",
            "column12": "-",
            "column13": "Base.Tshirt_Profession_FiremanBlue"
        },
        {
            "column1": "",
            "column2": "Long Sleeve T-shirt",
            "column3": "1.0",
            "column4": "Tshirt",
            "column5": "Upper TorsoLower Torso. Left Upper Arm. Right Upper ArmLeft Forearm. Right Forearm",
            "column6": "",
            "column7": "0%",
            "column8": "0%",
            "column9": "0%",
            "column10": "30%",
            "column11": "15%",
            "column12": "-",
            "column13": "Base.Tshirt_WhiteLongSleeve"
        },
        {
            "column1": "",
            "column2": "Medical T-shirt",
            "column3": "1.0",
            "column4": "Tshirt",
            "column5": "Upper TorsoLower Torso. Left Upper Arm. Right Upper Arm",
            "column6": "",
            "column7": "0%",
            "column8": "0%",
            "column9": "0%",
            "column10": "10%",
            "column11": "5%",
            "column12": "-",
            "column13": "Base.Tshirt_Scrubs"
        },
        {
            "column1": "",
            "column2": "Military Desert Camo T-shirt",
            "column3": "1.0",
            "column4": "Tshirt",
            "column5": "Upper TorsoLower Torso. Left Upper Arm. Right Upper Arm",
            "column6": "",
            "column7": "0%",
            "column8": "0%",
            "column9": "0%",
            "column10": "15%",
            "column11": "5%",
            "column12": "-",
            "column13": "Base.Tshirt_CamoDesert"
        },
        {
            "column1": "",
            "column2": "Military Green Camo T-shirt",
            "column3": "1.0",
            "column4": "Tshirt",
            "column5": "Upper Torso. Lower Torso. Left Upper Arm. Right Upper Arm",
            "column6": "",
            "column7": "0%",
            "column8": "0%",
            "column9": "0%",
            "column10": "25%",
            "column11": "20%",
            "column12": "-",
            "column13": "Base.Tshirt_CamoGreen"
        },
        {
            "column1": "",
            "column2": "Military T-shirt",
            "column3": "1.0",
            "column4": "Tshirt",
            "column5": "Upper TorsoLower Torso. Left Upper Arm. Right Upper Arm",
            "column6": "",
            "column7": "0%",
            "column8": "0%",
            "column9": "0%",
            "column10": "40%",
            "column11": "35%",
            "column12": "-",
            "column13": "Base.Tshirt_ArmyGreen"
        },
        {
            "column1": "",
            "column2": "Military Urban Camo T-shirt",
            "column3": "1.0",
            "column4": "Tshirt",
            "column5": "Upper TorsoLower Torso. Left Upper Arm. Right Upper Arm",
            "column6": "",
            "column7": "0%",
            "column8": "0%",
            "column9": "0%",
            "column10": "30%",
            "column11": "25%",
            "column12": "-",
            "column13": "Base.Tshirt_CamoUrban"
        },
        {
            "column1": "",
            "column2": "Police Deputy T-shirt",
            "column3": "1.0",
            "column4": "Tshirt",
            "column5": "Upper TorsoLower Torso. Left Upper Arm. Right Upper Arm",
            "column6": "",
            "column7": "0%",
            "column8": "0%",
            "column9": "0%",
            "column10": "20%",
            "column11": "25%",
            "column12": "-",
            "column13": "Base.Tshirt_PoliceGrey"
        },
        {
            "column1": "",
            "column2": "Blue Police T-shirtWhite Police T-shirt",
            "column3": "1.0",
            "column4": "Tshirt",
            "column5": "Upper TorsoLower Torso. Left Upper Arm. Right Upper Arm",
            "column6": "",
            "column7": "0%",
            "column8": "0%",
            "column9": "0%",
            "column10": "20%",
            "column11": "15%",
            "column12": "-",
            "column13": "Base.Tshirt_Profession_PoliceBlue"
        },
        {
            "column1": "",
            "column2": "Police Trooper T-shirt",
            "column3": "1.0",
            "column4": "Tshirt",
            "column5": "Upper TorsoLower Torso. Left Upper Arm. Right Upper Arm",
            "column6": "",
            "column7": "0%",
            "column8": "0%",
            "column9": "0%",
            "column10": "20%",
            "column11": "15%",
            "column12": "-",
            "column13": "Base.Tshirt_PoliceBlue"
        },
        {
            "column1": "",
            "column2": "Ranger T-shirt",
            "column3": "1.0",
            "column4": "Tshirt",
            "column5": "Upper TorsoLower Torso. Left Upper Arm. Right Upper Arm",
            "column6": "",
            "column7": "0%",
            "column8": "0%",
            "column9": "0%",
            "column10": "35%",
            "column11": "30%",
            "column12": "-",
            "column13": "Base.Tshirt_Ranger"
        },
        {
            "column1": "",
            "column2": "Brown Ranger T-shirtGreen Ranger T-shirt",
            "column3": "1.0",
            "column4": "Tshirt",
            "column5": "Upper TorsoLower Torso. Left Upper Arm. Right Upper Arm",
            "column6": "",
            "column7": "0%",
            "column8": "0%",
            "column9": "0%",
            "column10": "30%",
            "column11": "20%",
            "column12": "-",
            "column13": "Base.Tshirt_Profession_RangerBrown"
        },
        {
            "column1": "",
            "column2": "Small Bandeau",
            "column3": "1.0",
            "column4": "Tshirt",
            "column5": "Upper TorsoLower Torso. Left Upper Arm. Right Upper Arm",
            "column6": "",
            "column7": "0%",
            "column8": "0%",
            "column9": "0%",
            "column10": "-",
            "column11": "-",
            "column12": "-",
            "column13": "Base.BoobTubeSmall"
        },
        {
            "column1": "",
            "column2": "Spiffo T-shirt",
            "column3": "1.0",
            "column4": "T-shirt",
            "column5": "Upper TorsoLower Torso. Left Upper Arm. Right Upper Arm",
            "column6": "",
            "column7": "0%",
            "column8": "0%",
            "column9": "0%",
            "column10": "30%",
            "column11": "15%",
            "column12": "-",
            "column13": "Base.Tshirt_SpiffoDECAL"
        },
        {
            "column1": "",
            "column2": "Sport T-shirt",
            "column3": "1.0",
            "column4": "Tshirt",
            "column5": "Upper TorsoLower Torso. Left Upper Arm. Right Upper Arm",
            "column6": "",
            "column7": "0%",
            "column8": "0%",
            "column9": "0%",
            "column10": "15%",
            "column11": "5%",
            "column12": "-",
            "column13": "Base.Tshirt_Sport"
        },
        {
            "column1": "",
            "column2": "Striped T-shirt",
            "column3": "1.0",
            "column4": "Tshirt",
            "column5": "Upper TorsoLower Torso. Left Upper Arm. Right Upper Arm",
            "column6": "",
            "column7": "0%",
            "column8": "0%",
            "column9": "0%",
            "column10": "20%",
            "column11": "5%",
            "column12": "-",
            "column13": "Base.Tshirt_PoloStripedTINT"
        },
        {
            "column1": "",
            "column2": "Fossoil T-shirt",
            "column3": "1.0",
            "column4": "Tshirt",
            "column5": "Upper TorsoLower TorsoLeft Upper ArmRight Upper Arm",
            "column6": "",
            "column7": "0%",
            "column8": "0%",
            "column9": "0%",
            "column10": "20%",
            "column11": "5%",
            "column12": "-",
            "column13": "Base.Tshirt_Fossoil"
        },
        {
            "column1": "",
            "column2": "Spiffo T-shirt",
            "column3": "1.0",
            "column4": "Tshirt",
            "column5": "Upper TorsoLower Torso. Left Upper Arm. Right Upper Arm",
            "column6": "",
            "column7": "0%",
            "column8": "0%",
            "column9": "0%",
            "column10": "25%",
            "column11": "5%",
            "column12": "-",
            "column13": "Base.Tshirt_BusinessSpiffo"
        },
        {
            "column1": "",
            "column2": "T-shirt",
            "column3": "1.0",
            "column4": "Tshirt",
            "column5": "Upper TorsoLower Torso. Left Upper Arm. Right Upper Arm",
            "column6": "",
            "column7": "0%",
            "column8": "0%",
            "column9": "0%",
            "column10": "15%",
            "column11": "5%",
            "column12": "-",
            "column13": "Base.Tshirt_SportDECAL"
        },
        {
            "column1": "",
            "column2": "TIS T-shirt",
            "column3": "1.0",
            "column4": "Tshirt",
            "column5": "Upper TorsoLower Torso. Left Upper Arm. Right Upper Arm",
            "column6": "",
            "column7": "0%",
            "column8": "0%",
            "column9": "0%",
            "column10": "30%",
            "column11": "25%",
            "column12": "-",
            "column13": "Base.Tshirt_IndieStoneDECAL"
        },
        {
            "column1": "",
            "column2": "Green Veteran T-shirt",
            "column3": "1.0",
            "column4": "Tshirt",
            "column5": "Upper TorsoLower Torso. Left Upper Arm. Right Upper Arm",
            "column6": "",
            "column7": "0%",
            "column8": "0%",
            "column9": "0%",
            "column10": "30%",
            "column11": "20%",
            "column12": "-",
            "column13": "Base.Tshirt_Profession_VeterenGreen"
        }
    ]
    )";
    };

    struct Underclothing {
        const char* jsonData = R"(
        [
          {
            "column1": "",
            "column2": "Long Johns",
            "column3": "1.0",
            "column4": "Torso1Legs1",
            "column5": "GroinLeft ThightRight ThighLeft ShinRight ShinUpper TorsoLower TorsoLeft Upper ArmRight Upper ArmLeft ForearmRight Forearm",
            "column6": "",
            "column7": "0%",
            "column8": "0%",
            "column9": "0%",
            "column10": "30%",
            "column11": "15%",
            "column12": "-",
            "column13": "Base.LongJohns"
          },
          {
            "column1": "",
            "column2": "Long Johns Bottoms",
            "column3": "1.0",
            "column4": "Legs1",
            "column5": "GroinLeft ThightRight ThighLeft ShinRight Shin",
            "column6": "",
            "column7": "0%",
            "column8": "0%",
            "column9": "0%",
            "column10": "30%",
            "column11": "15%",
            "column12": "-",
            "column13": "Base.LongJohns_Bottoms"
          }
        ]
    )";
    };

    struct Tail {
        const char* jsonData = R"(
    [
        {
            "column1": "",
            "column2": "Bunny Tail",
            "column3": "1.0",
            "column4": "Tail",
            "column5": "Base.BunnyTail"
        },
        {
            "column1": "",
            "column2": "Spiffo Suit Tail",
            "column3": "1.0",
            "column4": "Tail",
            "column5": "Base.SpiffoTail"
        }
    ]
    )";
    };

    struct Underwear {
        const char* jsonData = R"(
    [
        {
            "column1": "",
            "column2": "Bikini",
            "column3": "0.2",
            "column4": "Underwear",
            "column5": "Base.Bikini_TINT"
        },
        {
            "column1": "",
            "column2": "Bunny Suit",
            "column3": "0.1",
            "column4": "Underwear",
            "column5": "Base.BunnySuitBlack"
        },
        {
            "column1": "",
            "column2": "Swimsuit",
            "column3": "0.1",
            "column4": "Underwear",
            "column5": "Base.Swimsuit_TINT"
        },
        {
            "column1": "",
            "column2": "Swim Trunks",
            "column3": "0.1",
            "column4": "Underwear",
            "column5": "Base.SwimTrunks_Blue"
        }
    ]
    )";
    };

    struct Underwearbottom {
        const char* jsonData = R"(
    [
        {
            "column1": "",
            "column2": "BoxersBoxers - Black SilkBoxers - Red SilkBoxers - Red StripesBoxers - Hearts",
            "column3": "0.2",
            "column4": "UnderwearBottom",
            "column5": "Base.Boxers_White"
        },
        {
            "column1": "",
            "column2": "Briefs",
            "column3": "0.2",
            "column4": "UnderwearBottom",
            "column5": "Base.Briefs_White"
        },
        {
            "column1": "",
            "column2": "TrunksBlack TrunksBlue TrunksRed Trunks",
            "column3": "0.2",
            "column4": "UnderwearBottom",
            "column5": "Base.Briefs_SmallTrunks_WhiteTINT"
        },
        {
            "column1": "",
            "column2": "UnderpantsBlack UnderpantsBlack Frilly UnderpantsPink Frilly UnderpantsRed Frilly UnderpantsRed Spots UnderpantsAnimal Print Underpants",
            "column3": "0.2",
            "column4": "UnderwearBottom",
            "column5": "Base.Underpants_White"
        }
    ]
    )";
    };

    struct Underwearextra1 {
        const char* jsonData = R"(
    [
        {
            "column1": "",
            "column2": "StockingsStockings Semi TransparentStockings Transparent",
            "column3": "0.1",
            "column4": "UnderwearExtra1",
            "column5": "Base.StockingsBlack"
        },
        {
            "column1": "",
            "column2": "TightsTights Semi TransparentTights TransparentFishnets",
            "column3": "0.1",
            "column4": "UnderwearExtra1",
            "column5": "Base.TightsBlack"
        }
    ]
    )";
    };

    struct Underwearextra2 {
        const char* jsonData = R"(
    [
        {
            "column1": "",
            "column2": "Garter",
            "column3": "0.1",
            "column4": "UnderwearExtra2",
            "column5": "Base.Garter"
        }
    ]
    )";
    };

    struct Underweartop {
        const char* jsonData = R"(
    [
        {
            "column1": "",
            "column2": "CorsetBlack CorsetRed CorsetMedical Corset",
            "column3": "0.2",
            "column4": "UnderwearTop",
            "column5": "Base.Corset"
        },
        {
            "column1": "",
            "column2": "Strapless BraStrapless Bra - BlackStrapless Bra - Black FrillsStrapless Bra - Pink FrillsStrapless Bra - Red FrillsStrapless Bra - Red SpotsStrapless Bra - Animal Print",
            "column3": "0.2",
            "column4": "UnderwearTop",
            "column5": "Base.Bra_Strapless_White"
        },
        {
            "column1": "",
            "column2": "Standard BraStandard Bra - BlackStandard Bra - Black FrillsStandard Bra - Pink FrillsStandard Bra - Red FrillsBra - Animal Print",
            "column3": "0.2",
            "column4": "UnderwearTop",
            "column5": "Base.Bra_Straps_White"
        }
    ]
    )";
    };

    struct Handheld {
        const char* jsonData = R"(
    [
        
        {
            "column1": "",
            "column2": "Bowling Ball Bag",
            "column3": "1",
            "column4": "20%",
            "column5": "-",
            "column6": "8",
            "column7": "7.9",
            "column8": "Base.Bag_BowlingBallBag"
        },
        {
            "column1": "",
            "column2": "Briefcase",
            "column3": "1.5",
            "column4": "5%",
            "column5": "97%",
            "column6": "7",
            "column7": "8.15",
            "column8": "Base.Briefcase"
        },
        {
            "column1": "",
            "column2": "Doctor Bag",
            "column3": "1.5",
            "column4": "20%",
            "column5": "-",
            "column6": "8",
            "column7": "7.9",
            "column8": "Base.Bag_DoctorBag"
        },
        {
            "column1": "",
            "column2": "Cooler",
            "column3": "1.5",
            "column4": "5%",
            "column5": "90%",
            "column6": "8",
            "column7": "9.1",
            "column8": "Base.Cooler"
        },
        {
            "column1": "",
            "column2": "Flight Case",
            "column3": "1.0",
            "column4": "20%",
            "column5": "97%",
            "column6": "5",
            "column7": "5",
            "column8": "Base.Flightcase"
        },
        {
            "column1": "",
            "column2": "First Aid Kit",
            "column3": "1.0",
            "column4": "5%",
            "column5": "-",
            "column6": "4",
            "column7": "4.8",
            "column8": "Base.FirstAidKit"
        },
        {
            "column1": "",
            "column2": "Garbage Bag",
            "column3": "0.1",
            "column4": "10%",
            "column5": "-",
            "column6": "20",
            "column7": "18.1",
            "column8": "Base.Garbagebag"
        },
        {
            "column1": "",
            "column2": "Guitar Case",
            "column3": "1.0",
            "column4": "20%",
            "column5": "97%",
            "column6": "5",
            "column7": "5",
            "column8": "Base.Guitarcase"
        },
        {
            "column1": "",
            "column2": "Gun Case (Large) ",
            "column3": "1",
            "column4": "20%",
            "column5": "97%",
            "column6": "7",
            "column7": "7.5",
            "column8": "Base.RifleCase1"
        },
        {
            "column1": "",
            "column2": "Gun Case (Large) ",
            "column3": "1",
            "column4": "20%",
            "column5": "97%",
            "column6": "7",
            "column7": "7.5",
            "column8": "Base.RifleCase2"
        },
        {
            "column1": "",
            "column2": "Gun Case (Large) ",
            "column3": "1",
            "column4": "20%",
            "column5": "97%",
            "column6": "7",
            "column7": "7.5",
            "column8": "Base.RifleCase3"
        },
        {
            "column1": "",
            "column2": "Gun Case (Large) ",
            "column3": "1",
            "column4": "20%",
            "column5": "97%",
            "column6": "7",
            "column7": "7.5",
            "column8": "Base.ShotgunCase1"
        },
        {
            "column1": "",
            "column2": "Gun Case (Large) ",
            "column3": "1",
            "column4": "20%",
            "column5": "97%",
            "column6": "7",
            "column7": "7.5",
            "column8": "Base.ShotgunCase2"
        },
        {
            "column1": "",
            "column2": "Gun Case (Small) ",
            "column3": "0.5",
            "column4": "5%",
            "column5": "99%",
            "column6": "4",
            "column7": "7.15",
            "column8": "Base.PistolCase1"
        },
        {
            "column1": "",
            "column2": "Gun Case (Small) ",
            "column3": "0.5",
            "column4": "5%",
            "column5": "99%",
            "column6": "4",
            "column7": "7.15",
            "column8": "Base.PistolCase2"
        },
        {
            "column1": "",
            "column2": "Gun Case (Small) ",
            "column3": "0.5",
            "column4": "5%",
            "column5": "99%",
            "column6": "4",
            "column7": "7.15",
            "column8": "Base.PistolCase3"
        },
        {
            "column1": "",
            "column2": "Gun Case (Small) ",
            "column3": "0.5",
            "column4": "5%",
            "column5": "99%",
            "column6": "4",
            "column7": "7.15",
            "column8": "Base.RevolverCase1"
        },
        {
            "column1": "",
            "column2": "Gun Case (Small) ",
            "column3": "0.5",
            "column4": "5%",
            "column5": "99%",
            "column6": "4",
            "column7": "7.15",
            "column8": "Base.RevolverCase2"
        },
        {
            "column1": "",
            "column2": "Gun Case (Small) ",
            "column3": "0.5",
            "column4": "5%",
            "column5": "99%",
            "column6": "4",
            "column7": "7.15",
            "column8": "Base.RevolverCase3"
        },
        {
            "column1": "",
            "column2": "Handbag",
            "column3": "1.0",
            "column4": "40%",
            "column5": "99%",
            "column6": "8",
            "column7": "5.8",
            "column8": "Base.Handbag"
        },
        {
            "column1": "",
            "column2": "Lunchbox",
            "column3": "1.0",
            "column4": "5%",
            "column5": "-",
            "column6": "4",
            "column7": "4.8",
            "column8": "Base.LunchboxBase.Lunchbox2"
        },
        {
            "column1": "",
            "column2": "Plastic Bag",
            "column3": "0.1",
            "column4": "30%",
            "column5": "-",
            "column6": "8",
            "column7": "5.7",
            "column8": "Base.Plasticbag"
        },
        {
            "column1": "",
            "column2": "Purse",
            "column3": "0.5",
            "column4": "55%",
            "column5": "99%",
            "column6": "12",
            "column7": "5.9",
            "column8": "Base.Purse"
        },
        {
            "column1": "",
            "column2": "Sack",
            "column3": "0.1",
            "column4": "10%",
            "column5": "-",
            "column6": "15",
            "column7": "13.6",
            "column8": "Base.EmptySandbag"
        },
        {
            "column1": "",
            "column2": "Seed Bag",
            "column3": "0.1",
            "column4": "30%",
            "column5": "-",
            "column6": "5",
            "column7": "3.6",
            "column8": "Base.SeedBag"
        },
        {
            "column1": "",
            "column2": "Sewing Kit",
            "column3": "0.1",
            "column4": "30%",
            "column5": "-",
            "column6": "5",
            "column7": "3.6",
            "column8": "Base.SewingKit"
        },
        {
            "column1": "",
            "column2": "Suitcase",
            "column3": "3.0",
            "column4": "50%",
            "column5": "98%",
            "column6": "16",
            "column7": "11",
            "column8": "Base.Suitcase"
        },
        {
            "column1": "",
            "column2": "Toolbox",
            "column3": "2.0",
            "column4": "15%",
            "column5": "97%",
            "column6": "8",
            "column7": "8.8",
            "column8": "Base.Toolbox"
        },
        {
            "column1": "",
            "column2": "Tote Bag",
            "column3": "0.1",
            "column4": "50%",
            "column5": "-",
            "column6": "12",
            "column7": "6.1",
            "column8": "Base.Tote"
        }
    ])";
    };

    struct Wearable {
        const char* jsonData = R"(
    [
        
        {
            "column1": "",
            "column2": "Big Hiking Bag",
            "column3": "1.5",
            "column4": "80%",
            "column5": "95%",
            "column6": "22",
            "column7": "5.9",
            "column8": "Base.Bag_BigHikingBag"
        },
        {
            "column1": "",
            "column2": "Duffelbag",
            "column3": "1.0",
            "column4": "65%",
            "column5": "95%",
            "column6": "18",
            "column7": "7.3",
            "column8": "Base.Bag_DuffelBag"
        },
        {
            "column1": "",
            "column2": "Fanny Pack*",
            "column3": "0.2",
            "column4": "50%",
            "column5": "98%",
            "column6": "1",
            "column7": "0.7",
            "column8": "Base.Bag_FannyPackFront"
        },
        {
            "column1": "",
            "column2": "Hiking Bag",
            "column3": "1.2",
            "column4": "70%",
            "column5": "96%",
            "column6": "20",
            "column7": "7.2",
            "column8": "Base.Bag_NormalHikingBag"
        },
        {
            "column1": "",
            "column2": "Large Backpack",
            "column3": "2.0",
            "column4": "85%",
            "column5": "94%",
            "column6": "27",
            "column7": "6.05",
            "column8": "Base.Bag_ALICEpack"
        },
        {
            "column1": "",
            "column2": "Military Backpack",
            "column3": "2.0",
            "column4": "87%",
            "column5": "94%",
            "column6": "28",
            "column7": "5.64",
            "column8": "Base.Bag_ALICEpack_Army"
        },
        {
            "column1": "",
            "column2": "Satchel",
            "column3": "1.0",
            "column4": "30%",
            "column5": "99%",
            "column6": "15",
            "column7": "11.5",
            "column8": "Base.Bag_Satchel"
        },
        {
            "column1": "",
            "column2": "School Bag",
            "column3": "1.0",
            "column4": "60%",
            "column5": "97%",
            "column6": "15",
            "column7": "7",
            "column8": "Base.Bag_Schoolbag"
        },
        {
            "column1": "",
            "column2": "Golf Bag",
            "column3": "1.2",
            "column4": "65%",
            "column5": "95%",
            "column6": "18",
            "column7": "7.5",
            "column8": "Base.Bag_GolfBag"
        }
    ])";
    };

    struct Communication {
        const char* jsonData = R"(
    [
        {
            "column1": "",
            "column2": "Toys-R-Mine Walkie Talkie",
            "column3": "1.0",
            "column4": "5",
            "column5": "8",
            "column6": "75 MHz",
            "column7": "150 MHz",
            "column8": "1000",
            "column9": "Radio.WalkieTalkie1"
        },
        {
            "column1": "",
            "column2": "ValuTech Walkie Talkie",
            "column3": "1.0",
            "column4": "5",
            "column5": "10",
            "column6": "50 MHz",
            "column7": "200 MHz",
            "column8": "5000",
            "column9": "Radio.WalkieTalkie2"
        },
        {
            "column1": "",
            "column2": "Premium Tech. Walkie Talkie",
            "column3": "1.0",
            "column4": "5",
            "column5": "12",
            "column6": "25 MHz",
            "column7": "300 MHz",
            "column8": "4000",
            "column9": "Radio.WalkieTalkie3"
        },
        {
            "column1": "",
            "column2": "Tactical Walkie Talkie",
            "column3": "1.25",
            "column4": "5",
            "column5": "14",
            "column6": "10 MHz",
            "column7": "500MHz",
            "column8": "6000",
            "column9": "Radio.WalkieTalkie4"
        },
        {
            "column1": "",
            "column2": "US Army Walkie Talkie",
            "column3": "1.25",
            "column4": "5",
            "column5": "16",
            "column6": "0.2 MHz",
            "column7": "1000 MHz",
            "column8": "10000",
            "column9": "Radio.WalkieTalkie5"
        },
        {
            "column1": "",
            "column2": "Makeshift Walkie Talkie",
            "column3": "1.0",
            "column4": "5",
            "column5": "8",
            "column6": "75 MHz",
            "column7": "150 MHz",
            "column8": "1000",
            "column9": "Radio.WalkieTalkieMakeShift"
        },
        {
            "column1": "",
            "column2": "Premium Technologies Ham Radio",
            "column3": "20",
            "column4": "5",
            "column5": "10",
            "column6": "10 MHz",
            "column7": "500 MHz",
            "column8": "6000",
            "column9": "Radio.HamRadio1"
        },
        {
            "column1": "",
            "column2": "US ARMY COMM. Ham Radio",
            "column3": "20",
            "column4": "5",
            "column5": "15",
            "column6": "0.2 MHz",
            "column7": "1000 MHz",
            "column8": "10000",
            "column9": "Radio.HamRadio2"
        },
        {
            "column1": "",
            "column2": "Makeshift Ham Radio",
            "column3": "20",
            "column4": "5",
            "column5": "10",
            "column6": "10 MHz",
            "column7": "500 MHz",
            "column8": "6000",
            "column9": "Radio.HamRadioMakeShift"
        },
        {
            "column1": "",
            "column2": "Premium Technologies Radio",
            "column3": "1.5",
            "column4": "0",
            "column5": "15",
            "column6": "88 MHz",
            "column7": "108 MHz",
            "column8": "-",
            "column9": "Radio.RadioRed"
        },
        {
            "column1": "",
            "column2": "ValuTech Radio",
            "column3": "1.5",
            "column4": "0",
            "column5": "10",
            "column6": "88 MHz",
            "column7": "108 MHz",
            "column8": "-",
            "column9": "Radio.RadioBlack"
        },
        {
            "column1": "",
            "column2": "Makeshift Radio",
            "column3": "1.5",
            "column4": "0",
            "column5": "10",
            "column6": "88 MHz",
            "column7": "108 MHz",
            "column8": "-",
            "column9": "Radio.RadioMakeShift"
        },
        {
            "column1": "",
            "column2": "Antique Television",
            "column3": "10",
            "column4": "0",
            "column5": "10",
            "column6": "0.2 MHz",
            "column7": "1000 MHz",
            "column8": "-",
            "column9": "Radio.TvAntique"
        },
        {
            "column1": "",
            "column2": "Premium Technologies Television",
            "column3": "10",
            "column4": "0",
            "column5": "15",
            "column6": "0.2 MHz",
            "column7": "1000 MHz",
            "column8": "-",
            "column9": "Radio.TvWideScreen"
        },
        {
            "column1": "",
            "column2": "ValuTech Television",
            "column3": "10",
            "column4": "0",
            "column5": "12",
            "column6": "0.2 MHz",
            "column7": "1000 MHz",
            "column8": "-",
            "column9": "Radio.TvBlack"
        }
    ])";
    };

    struct Electronic {
        const char* jsonData = R"(
    [
        
        {
            "column1": "",
            "column2": "Alarm Clock",
            "column3": "1.5",
            "column4": "Display time, Set alarm",
            "column5": "Base.AlarmClock"
        },
        {
            "column1": "",
            "column2": "ValuTech PortaDisc",
            "column3": "0.3",
            "column4": "Listen CDs",
            "column5": "Base.CDplayer"
        },
        {
            "column1": "",
            "column2": "Cordless Phone",
            "column3": "0.3",
            "column4": "-",
            "column5": "Base.CordlessPhone"
        },
        {
            "column1": "",
            "column2": "Earbuds",
            "column3": "0.1",
            "column4": "Silence radio",
            "column5": "Base.Earbuds"
        },
        {
            "column1": "",
            "column2": "Generator",
            "column3": "40",
            "column4": "Supply electricity",
            "column5": "Base.Generator"
        },
        {
            "column1": "",
            "column2": "Headphones",
            "column3": "0.3",
            "column4": "Silence radio",
            "column5": "Base.Headphones"
        },
        {
            "column1": "",
            "column2": "Home Alarm",
            "column3": "0.1",
            "column4": "-",
            "column5": "Base.HomeAlarm"
        },
        {
            "column1": "",
            "column2": "Speaker",
            "column3": "1.5",
            "column4": "-",
            "column5": "Base.Speaker"
        },
        {
            "column1": "",
            "column2": "Timer",
            "column3": "0.1",
            "column4": "-",
            "column5": "Base.Timer"
        },
        {
            "column1": "",
            "column2": "TV Remote",
            "column3": "0.2",
            "column4": "-",
            "column5": "Base.Remote"
        },
        {
            "column1": "",
            "column2": "V1 Remote Controller",
            "column3": "0.4",
            "column4": "Trigger trap",
            "column5": "Base.RemoteCraftedV1"
        },
        {
            "column1": "",
            "column2": "V2 Remote Controller",
            "column3": "0.4",
            "column4": "Trigger trap",
            "column5": "Base.RemoteCraftedV2"
        },
        {
            "column1": "",
            "column2": "V3 Remote Controller",
            "column3": "0.4",
            "column4": "Trigger trap",
            "column5": "Base.RemoteCraftedV3"
        },
        {
            "column1": "",
            "column2": "Video Game",
            "column3": "0.3",
            "column4": "-",
            "column5": "Base.VideoGame"
        }
    ])";
    };

    struct Containers {
        const char* jsonData = R"(
    [
        {
            "column1": "",
            "column2": "Key Ring",
            "column3": "0",
            "column4": "Store Keys",
            "column5": "Base.KeyRing"
        }
    ])";
    };

    struct Keys {
        const char* jsonData = R"(
    [
        {
            "column1": "",
            "column2": "Car Key",
            "column3": "0",
            "column4": "Vehicle",
            "column5": "Base.CarKey"
        },
        {
            "column1": "",
            "column2": "Key (Door) ",
            "column3": "0",
            "column4": "Door",
            "column5": "Base.Key1"
        },
        {
            "column1": "",
            "column2": "Key (Door) ",
            "column3": "0",
            "column4": "Door",
            "column5": "Base.Key2"
        },
        {
            "column1": "",
            "column2": "Key (Door) ",
            "column3": "0",
            "column4": "Door",
            "column5": "Base.Key3"
        },
        {
            "column1": "",
            "column2": "Key (Door) ",
            "column3": "0",
            "column4": "Door",
            "column5": "Base.Key4"
        },
        {
            "column1": "",
            "column2": "Key (Door) ",
            "column3": "0",
            "column4": "Door",
            "column5": "Base.Key5"
        },
        {
            "column1": "",
            "column2": "Key (Padlock) ",
            "column3": "0",
            "column4": "Padlock",
            "column5": "Base.KeyPadlock"
        }
    ])";
    };

    struct Locks {
        const char* jsonData = R"(
    [
        {
            "column1": "",
            "column2": "Combination Padlock",
            "column3": "0.2",
            "column4": "Crafted Metal Crate or Wooden Crate",
            "column5": "Base.CombinationPadlock"
        },
        {
            "column1": "",
            "column2": "Padlock",
            "column3": "0.2",
            "column4": "Crafted Metal Crate or Wooden Crate",
            "column5": "Base.Padlock"
        },
        {
            "column1": "",
            "column2": "Doorknob",
            "column3": "0.5",
            "column4": "Crafted Door",
            "column5": "Base.Doorknob"
        }
    ])";
    };

    struct Camping {
        const char* jsonData = R"(
    [
        {
            "column1": "",
            "column2": "Campfire Materials",
            "column3": "2.0",
            "column4": "",
            "column5": "Make campfire",
            "column6": "camping.CampfireKit"
        },
        {
            "column1": "",
            "column2": "Tent Kit",
            "column3": "3.0",
            "column4": "",
            "column5": "Make tent",
            "column6": "camping.CampingTentKit"
        },
        {
            "column1": "",
            "column2": "Notched Wooden Plank",
            "column3": "0.5",
            "column4": "",
            "column5": "Light fire",
            "column6": "Base.PercedWood"
        },
        {
            "column1": "",
            "column2": "Stone Axe",
            "column3": "2.0",
            "column4": "",
            "column5": "Chop tree",
            "column6": "Base.AxeStone"
        },
        {
            "column1": "",
            "column2": "Stone Hammer",
            "column3": "1.2",
            "column4": "",
            "column5": "Construction",
            "column6": "Base.HammerStone"
        }
    ]
    )";
    };

    struct Cooking {
        const char* jsonData = R"(
    [
        
        {
            "column1": "",
            "column2": "Baking Pan",
            "column3": "0.1",
            "column4": "",
            "column5": "Bake pie or cake",
            "column6": "Base.BakingPan"
        },
        {
            "column1": "",
            "column2": "Baking Tray",
            "column3": "0.2",
            "column4": "",
            "column5": "Base.BakingTray"
        },
        {
            "column1": "",
            "column2": "Empty Jar",
            "column3": "1.8",
            "column4": "",
            "column5": "Store jars",
            "column6": "Base.BoxOfJars"
        },
        {
            "column1": "",
            "column2": "Bread Knife",
            "column3": "0.3",
            "column4": "",
            "column5": "Cut food",
            "column6": "Base.BreadKnife"
        },
        {
            "column1": "",
            "column2": "Butter Knife",
            "column3": "0.3",
            "column4": "",
            "column5": "Cut food",
            "column6": "Base.ButterKnife"
        },
        {
            "column1": "",
            "column2": "Can Opener",
            "column3": "0.6",
            "column4": "",
            "column5": "Open cans",
            "column6": "Base.TinOpener"
        },
        {
            "column1": "",
            "column2": "Empty Jar",
            "column3": "0.2",
            "column4": "",
            "column5": "Pickle food",
            "column6": "Base.EmptyJar"
        },
        {
            "column1": "",
            "column2": "Fork",
            "column3": "0.3",
            "column4": "",
            "column5": "makeshift weapon",
            "column6": "Base.Fork"
        },
        {
            "column1": "",
            "column2": "Frying Pan",
            "column3": "1.0",
            "column4": "",
            "column5": "Make stir fry",
            "column6": "Base.Pan"
        },
        {
            "column1": "",
            "column2": "Griddle Pan",
            "column3": "1.0",
            "column4": "",
            "column5": "Make stir fry",
            "column6": "Base.GridlePan"
        },
        {
            "column1": "",
            "column2": "Hunting Knife",
            "column3": "0.3",
            "column4": "",
            "column5": "Cut food",
            "column6": "Base.HuntingKnife"
        },
        {
            "column1": "",
            "column2": "Empty Jar",
            "column3": "0.1",
            "column4": "",
            "column5": "Pickle food",
            "column6": "Base.JarLid"
        },
        {
            "column1": "",
            "column2": "Kitchen Knife",
            "column3": "0.3",
            "column4": "",
            "column5": "Cut food",
            "column6": "Base.KitchenKnife"
        },
        {
            "column1": "",
            "column2": "Meat Cleaver",
            "column3": "1.0",
            "column4": "",
            "column5": "Cut food",
            "column6": "Base.MeatCleaver"
        },
        {
            "column1": "",
            "column2": "Mortar and Pestle",
            "column3": "0.3",
            "column4": "",
            "column5": "Make Poultice",
            "column6": "Base.MortarPestle"
        },
        {
            "column1": "",
            "column2": "Roasting Pan",
            "column3": "1.3",
            "column4": "",
            "column5": "Roast vegetables",
            "column6": "Base.RoastingPan"
        },
        {
            "column1": "",
            "column2": "Rolling Pin",
            "column3": "1.5",
            "column4": "",
            "column5": "Roll dough",
            "column6": "Base.RollingPin"
        },
        {
            "column1": "",
            "column2": "Saucepan",
            "column3": "0.7",
            "column4": "",
            "column5": "Prepare soup, pasta and rice",
            "column6": "Base.Saucepan"
        },
        {
            "column1": "",
            "column2": "Spoon",
            "column3": "0.3",
            "column4": "",
            "column5": "makeshift weapon",
            "column6": "Base.Spoon"
        },
        {
            "column1": "",
            "column2": "Stone Knife",
            "column3": "0.75",
            "column4": "",
            "column5": "Cut food",
            "column6": "Base.FlintKnife"
        }
    ])";
    };

    struct Farmingtools {
        const char* jsonData = R"(
    [
        
        {
            "column1": "",
            "column2": "Garden Fork",
            "column3": "1.5",
            "column4": "",
            "column5": "Dig furrow",
            "column6": "Base.GardenFork"
        },
        {
            "column1": "",
            "column2": "Garden Hoe",
            "column3": "1.5",
            "column4": "",
            "column5": "Dig furrow",
            "column6": "Base.GardenHoe"
        },
        {
            "column1": "",
            "column2": "Hand Fork",
            "column3": "1.0",
            "column4": "",
            "column5": "Dig furrow",
            "column6": "Base.HandFork"
        },
        {
            "column1": "",
            "column2": "Shovel",
            "column3": "1.5",
            "column4": "",
            "column5": "Dig furrow & dirt",
            "column6": "Base.ShovelBase.Shovel2"
        },
        {
            "column1": "",
            "column2": "Snow Shovel",
            "column3": "2.0",
            "column4": "",
            "column5": "Dig furrow",
            "column6": "Base.SnowShovel"
        },
        {
            "column1": "",
            "column2": "Trowel",
            "column3": "1.0",
            "column4": "",
            "column5": "Dig furrow",
            "column6": "farming.HandShovel"
        }
    ])";
    };

    struct Fertilizer {
        const char* jsonData = R"(
    [
        
        {
            "column1": "",
            "column2": "Compost Bag",
            "column3": "2.0",
            "column4": "",
            "column5": "Base.CompostBag"
        },
        {
            "column1": "",
            "column2": "Dirt Bag",
            "column3": "2.0",
            "column4": "",
            "column5": "Base.Dirtbag"
        },
        {
            "column1": "",
            "column2": "Insecticide Spray",
            "column3": "1.0",
            "column4": "",
            "column5": "farming.GardeningSprayCigarettes"
        },
        {
            "column1": "",
            "column2": "Mildew Spray",
            "column3": "1.0",
            "column4": "",
            "column5": "farming.GardeningSprayMilk"
        },
        {
            "column1": "",
            "column2": "NPK Fertilizer",
            "column3": "2.0",
            "column4": "",
            "column5": "Base.Fertilizer"
        }
    ])";
    };

    struct Fishing {
        const char* jsonData = R"(
    [
        
        {
            "column1": "",
            "column2": "Fishing Rod",
            "column3": "0.4",
            "column4": "",
            "column5": "Base.FishingRod"
        },
        {
            "column1": "",
            "column2": "Fishing Rod",
            "column3": "0.4",
            "column4": "",
            "column5": "Base.CraftedFishingRod"
        },
        {
            "column1": "",
            "column2": "Crafted Spear",
            "column3": "0.4",
            "column4": "",
            "column5": "Base.WoodenLance"
        }
    ])";
    };

    struct Seeds2 {
        const char* jsonData = R"(
    [
        
        
        {
            "column1": "",
            "column2": "Broccoli Seeds",
            "column3": "0.009",
            "column4": "6",
            "column5": "70",
            "column6": "-",
            "column7": "",
            "column8": "22 days",
            "column9": "farming.BroccoliSeed"
        },
        {
            "column1": "",
            "column2": "Cabbage Seeds",
            "column3": "0.009",
            "column4": "9",
            "column5": "85",
            "column6": "-",
            "column7": "",
            "column8": "6 days",
            "column9": "farming.CabbageSeed"
        },
        {
            "column1": "",
            "column2": "Carrot Seeds",
            "column3": "0.009",
            "column4": "12",
            "column5": "35",
            "column6": "65",
            "column7": "",
            "column8": "5 days",
            "column9": "farming.CarrotSeed"
        },
        {
            "column1": "",
            "column2": "Potato Seeds",
            "column3": "0.009",
            "column4": "4",
            "column5": "65",
            "column6": "-",
            "column7": "",
            "column8": "17 days",
            "column9": "farming.PotatoSeed"
        },
        {
            "column1": "",
            "column2": "Radish Seeds",
            "column3": "0.009",
            "column4": "6",
            "column5": "45",
            "column6": "75",
            "column7": "",
            "column8": "7 days",
            "column9": "farming.RedRadishSeed"
        },
        {
            "column1": "",
            "column2": "Strawberry Seeds",
            "column3": "0.009",
            "column4": "12",
            "column5": "85",
            "column6": "-",
            "column7": "",
            "column8": "25 days",
            "column9": "farming.StrewberrieSeed"
        },
        {
            "column1": "",
            "column2": "Tomato Seeds",
            "column3": "0.009",
            "column4": "4",
            "column5": "75",
            "column6": "-",
            "column7": "",
            "column8": "18 days",
            "column9": "farming.TomatoSeed"
        }
    ])";
    };

    struct Trapping {
        const char* jsonData = R"(
    [
        
        {
            "column1": "",
            "column2": "Cage Trap",
            "column3": "1.0",
            "column4": "20",
            "column5": "-",
            "column6": "-",
            "column7": "30",
            "column8": "30",
            "column9": "-",
            "column10": "Base.TrapCage"
        },
        {
            "column1": "",
            "column2": "Fishing Net Trap",
            "column3": "0.5",
            "column4": "-",
            "column5": "-",
            "column6": "-",
            "column7": "-",
            "column8": "-",
            "column9": "-",
            "column10": "Base.FishingNet"
        },
        {
            "column1": "",
            "column2": "Mouse Trap",
            "column3": "0.3",
            "column4": "50",
            "column5": "30",
            "column6": "20",
            "column7": "-",
            "column8": "-",
            "column9": "-",
            "column10": "Base.TrapMouse"
        },
        {
            "column1": "",
            "column2": "Snare Trap",
            "column3": "0.3",
            "column4": "10",
            "column5": "-",
            "column6": "-",
            "column7": "30",
            "column8": "30",
            "column9": "-",
            "column10": "Base.TrapSnare"
        },
        {
            "column1": "",
            "column2": "Stick Trap",
            "column3": "0.5",
            "column4": "15",
            "column5": "-",
            "column6": "-",
            "column7": "-",
            "column8": "-",
            "column9": "40",
            "column10": "Base.TrapStick"
        },
        {
            "column1": "",
            "column2": "Trap Box",
            "column3": "1.0",
            "column4": "15",
            "column5": "-",
            "column6": "-",
            "column7": "25",
            "column8": "30",
            "column9": "-",
            "column10": "Base.TrapBox"
        },
        {
            "column1": "",
            "column2": "Trap Crate",
            "column3": "1.0",
            "column4": "15",
            "column5": "-",
            "column6": "-",
            "column7": "30",
            "column8": "30",
            "column9": "-",
            "column10": "Base.TrapCrate"
        }
    ])";
    };

    struct Forage {
        const char* jsonData = R"(
    [
        {
            "column1": "",
            "column2": "Black Sage",
            "column3": "0.1",
            "column4": "-1",
            "column5": "-7",
            "column6": "-",
            "column7": "-",
            "column8": "-",
            "column9": "-",
            "column10": "Base.BlackSage"
        },
        {
            "column1": "",
            "column2": "Cockroach",
            "column3": "0.1",
            "column4": "-11",
            "column5": "+20",
            "column6": "-",
            "column7": "-",
            "column8": "5",
            "column9": "25",
            "column10": "Base.Cockroach"
        },
        {
            "column1": "",
            "column2": "Common Mallow",
            "column3": "0.1",
            "column4": "-1",
            "column5": "-5",
            "column6": "-",
            "column7": "-",
            "column8": "-",
            "column9": "-",
            "column10": "Base.CommonMallow"
        },
        {
            "column1": "",
            "column2": "Cricket",
            "column3": "0.1",
            "column4": "-6",
            "column5": "+20",
            "column6": "-",
            "column7": "-",
            "column8": "5",
            "column9": "25",
            "column10": "Base.Cricket"
        },
        {
            "column1": "",
            "column2": "Ginseng",
            "column3": "0.1",
            "column4": "-1",
            "column5": "-2",
            "column6": "-",
            "column7": "-",
            "column8": "-",
            "column9": "-",
            "column10": "Base.Ginseng"
        },
        {
            "column1": "",
            "column2": "Grape Leaves",
            "column3": "0.1",
            "column4": "-4",
            "column5": "-",
            "column6": "-",
            "column7": "-",
            "column8": "-",
            "column9": "-",
            "column10": "Base.GrapeLeaves"
        },
        {
            "column1": "",
            "column2": "Grasshopper",
            "column3": "0.1",
            "column4": "-7",
            "column5": "+20",
            "column6": "-",
            "column7": "-",
            "column8": "5",
            "column9": "25",
            "column10": "Base.Grasshopper"
        },
        {
            "column1": "",
            "column2": "Lemon Grass",
            "column3": "0.1",
            "column4": "-1",
            "column5": "-12",
            "column6": "-",
            "column7": "-",
            "column8": "-",
            "column9": "-",
            "column10": "Base.LemonGrass"
        },
        {
            "column1": "",
            "column2": "Rosehips",
            "column3": "0.1",
            "column4": "-6",
            "column5": "-",
            "column6": "-",
            "column7": "-",
            "column8": "-",
            "column9": "-",
            "column10": "Base.Rosehips"
        },
        {
            "column1": "",
            "column2": "Violets",
            "column3": "0.1",
            "column4": "-2",
            "column5": "-",
            "column6": "-",
            "column7": "-",
            "column8": "-",
            "column9": "-",
            "column10": "Base.Violets"
        },
        {
            "column1": "",
            "column2": "Wild Eggs",
            "column3": "0.1",
            "column4": "-10",
            "column5": "?",
            "column6": "14",
            "column7": "21",
            "column8": "10",
            "column9": "30",
            "column10": "Base.WildEggs"
        },
        {
            "column1": "",
            "column2": "Worm",
            "column3": "0.01",
            "column4": "-5",
            "column5": "+20",
            "column6": "-",
            "column7": "-",
            "column8": "-",
            "column9": "-",
            "column10": "Base.Worm"
        }
    ])";
    };

    struct Fruit {
        const char* jsonData = R"(
    [
        {
            "column1": "",
            "column2": "Apple",
            "column3": "0.2",
            "column4": "-15",
            "column5": "-7",
            "column6": "-",
            "column7": "-",
            "column8": "5",
            "column9": "8",
            "column10": "Base.Apple"
        },
        {
            "column1": "",
            "column2": "Banana",
            "column3": "0.2",
            "column4": "-17",
            "column5": "-5",
            "column6": "-",
            "column7": "-",
            "column8": "5",
            "column9": "7",
            "column10": "Base.Banana"
        },
        {
            "column1": "",
            "column2": "Berry",
            "column3": "0.1",
            "column4": "-10",
            "column5": "-1",
            "column6": "-",
            "column7": "?",
            "column8": "6",
            "column9": "10",
            "column10": "Base.BerryBlack"
        },
        {
            "column1": "",
            "column2": "Berry",
            "column3": "0.1",
            "column4": "-10",
            "column5": "-1",
            "column6": "-",
            "column7": "?",
            "column8": "6",
            "column9": "10",
            "column10": "Base.BerryBlue"
        },
        {
            "column1": "",
            "column2": "Berry",
            "column3": "0.1",
            "column4": "-5",
            "column5": "-1",
            "column6": "-",
            "column7": "?",
            "column8": "6",
            "column9": "10",
            "column10": "Base.BerryGeneric1"
        },
        {
            "column1": "",
            "column2": "Berry",
            "column3": "0.1",
            "column4": "-10",
            "column5": "-1",
            "column6": "-",
            "column7": "?",
            "column8": "6",
            "column9": "10",
            "column10": "Base.BerryGeneric2"
        },
        {
            "column1": "",
            "column2": "Berry",
            "column3": "0.1",
            "column4": "-5",
            "column5": "-1",
            "column6": "-",
            "column7": "?",
            "column8": "6",
            "column9": "10",
            "column10": "Base.BerryGeneric3"
        },
        {
            "column1": "",
            "column2": "Berry",
            "column3": "0.1",
            "column4": "-10",
            "column5": "-1",
            "column6": "-",
            "column7": "?",
            "column8": "6",
            "column9": "10",
            "column10": "Base.BerryGeneric4"
        },
        {
            "column1": "",
            "column2": "Berry",
            "column3": "0.1",
            "column4": "-10",
            "column5": "-1",
            "column6": "-",
            "column7": "?",
            "column8": "6",
            "column9": "10",
            "column10": "Base.BerryGeneric5"
        },
        {
            "column1": "",
            "column2": "Berry",
            "column3": "0.1",
            "column4": "-5",
            "column5": "-1",
            "column6": "-",
            "column7": "?",
            "column8": "6",
            "column9": "10",
            "column10": "Base.BerryPoisonIvy"
        },
        {
            "column1": "",
            "column2": "Cherry",
            "column3": "0.3",
            "column4": "-3",
            "column5": "-1",
            "column6": "-",
            "column7": "-",
            "column8": "4",
            "column9": "9",
            "column10": "Base.Cherry"
        },
        {
            "column1": "",
            "column2": "Grapefruit",
            "column3": "0.3",
            "column4": "-20",
            "column5": "-50",
            "column6": "-",
            "column7": "-",
            "column8": "6",
            "column9": "8",
            "column10": "Base.Grapefruit"
        },
        {
            "column1": "",
            "column2": "Grapes",
            "column3": "0.2",
            "column4": "-15",
            "column5": "-5",
            "column6": "-",
            "column7": "-",
            "column8": "5",
            "column9": "8",
            "column10": "Base.Grapes"
        },
        {
            "column1": "",
            "column2": "Lemon",
            "column3": "0.2",
            "column4": "-10",
            "column5": "-5",
            "column6": "-",
            "column7": "-",
            "column8": "7",
            "column9": "9",
            "column10": "Base.Lemon"
        },
        {
            "column1": "",
            "column2": "Lime",
            "column3": "0.2",
            "column4": "-10",
            "column5": "-5",
            "column6": "-",
            "column7": "-",
            "column8": "7",
            "column9": "9",
            "column10": "Base.Lime"
        },
        {
            "column1": "",
            "column2": "Mango",
            "column3": "0.3",
            "column4": "-20",
            "column5": "-13",
            "column6": "-",
            "column7": "-",
            "column8": "6",
            "column9": "14",
            "column10": "Base.Mango"
        },
        {
            "column1": "",
            "column2": "Orange",
            "column3": "0.2",
            "column4": "-12",
            "column5": "-20",
            "column6": "-",
            "column7": "-",
            "column8": "6",
            "column9": "9",
            "column10": "Base.Orange"
        },
        {
            "column1": "",
            "column2": "Peach",
            "column3": "0.2",
            "column4": "-12",
            "column5": "-5",
            "column6": "-",
            "column7": "-",
            "column8": "5",
            "column9": "8",
            "column10": "Base.Peach"
        },
        {
            "column1": "",
            "column2": "Pear",
            "column3": "0.2",
            "column4": "-15",
            "column5": "-7",
            "column6": "-",
            "column7": "-",
            "column8": "5",
            "column9": "8",
            "column10": "Base.Pear"
        },
        {
            "column1": "",
            "column2": "Pineapple",
            "column3": "0.3",
            "column4": "-25",
            "column5": "-13",
            "column6": "-",
            "column7": "-",
            "column8": "6",
            "column9": "14",
            "column10": "Base.Pineapple"
        },
        {
            "column1": "",
            "column2": "Strawberries",
            "column3": "0.1",
            "column4": "-5",
            "column5": "-5",
            "column6": "-10",
            "column7": "-",
            "column8": "2",
            "column9": "5",
            "column10": "farming.Strewberrie"
        },
        {
            "column1": "",
            "column2": "Watermelon",
            "column3": "3",
            "column4": "-60",
            "column5": "-140",
            "column6": "-",
            "column7": "-",
            "column8": "6",
            "column9": "8",
            "column10": "Base.Watermelon"
        },
        {
            "column1": "",
            "column2": "Watermelon Chunks",
            "column3": "0.6",
            "column4": "-12",
            "column5": "-25",
            "column6": "-",
            "column7": "-",
            "column8": "2",
            "column9": "3",
            "column10": "Base.WatermelonSmashed"
        },
        {
            "column1": "",
            "column2": "Watermelon Slice",
            "column3": "0.3",
            "column4": "-6",
            "column5": "-20",
            "column6": "-",
            "column7": "-",
            "column8": "3",
            "column9": "4",
            "column10": "Base.WatermelonSliced"
        }
    ])";
    };

    struct Grains {
        const char* jsonData = R"(
    [
        {
            "column1": "",
            "column2": "Bagel",
            "column3": "0.1",
            "column4": "-10",
            "column5": "-",
            "column6": "-",
            "column7": "1",
            "column8": "2",
            "column9": "-",
            "column10": "-",
            "column11": "Base.BagelPlain"
        },
        {
            "column1": "",
            "column2": "Baguette",
            "column3": "0.3",
            "column4": "-30",
            "column5": "-",
            "column6": "-",
            "column7": "3",
            "column8": "6",
            "column9": "-",
            "column10": "-",
            "column11": "Base.Baguette"
        },
        {
            "column1": "",
            "column2": "Bread",
            "column3": "0.3",
            "column4": "-30",
            "column5": "-",
            "column6": "-",
            "column7": "3",
            "column8": "6",
            "column9": "-",
            "column10": "-",
            "column11": "Base.Bread"
        },
        {
            "column1": "",
            "column2": "Bread Slices",
            "column3": "0.1",
            "column4": "-10",
            "column5": "-",
            "column6": "-",
            "column7": "1",
            "column8": "2",
            "column9": "-",
            "column10": "-",
            "column11": "Base.BreadSlices"
        },
        {
            "column1": "",
            "column2": "Can of Oats",
            "column3": "0.8",
            "column4": "-50",
            "column5": "-",
            "column6": "-",
            "column7": "-",
            "column8": "-",
            "column9": "-",
            "column10": "-",
            "column11": "Base.OatsRaw"
        },
        {
            "column1": "",
            "column2": "Cereal",
            "column3": "0.2",
            "column4": "-40",
            "column5": "-",
            "column6": "-",
            "column7": "-",
            "column8": "-",
            "column9": "-",
            "column10": "-",
            "column11": "Base.Cereal"
        },
        {
            "column1": "",
            "column2": "Cornbread",
            "column3": "0.1",
            "column4": "-10",
            "column5": "-",
            "column6": "-",
            "column7": "-",
            "column8": "-",
            "column9": "-",
            "column10": "-",
            "column11": "Base.Cornbread"
        },
        {
            "column1": "",
            "column2": "Crackers",
            "column3": "0.1",
            "column4": "-5",
            "column5": "-",
            "column6": "-",
            "column7": "-",
            "column8": "-",
            "column9": "-",
            "column10": "-",
            "column11": "Base.Crackers"
        },
        {
            "column1": "",
            "column2": "Croissant",
            "column3": "0.1",
            "column4": "-8",
            "column5": "-",
            "column6": "-15",
            "column7": "-",
            "column8": "-",
            "column9": "-",
            "column10": "-",
            "column11": "Base.Croissant"
        },
        {
            "column1": "",
            "column2": "Dry Ramen Noodles",
            "column3": "0.2",
            "column4": "-15",
            "column5": "+40",
            "column6": "-",
            "column7": "-",
            "column8": "-",
            "column9": "-",
            "column10": "-",
            "column11": "Base.Ramen"
        },
        {
            "column1": "",
            "column2": "Flour",
            "column3": "1.0",
            "column4": "-",
            "column5": "-",
            "column6": "-",
            "column7": "-",
            "column8": "-",
            "column9": "-",
            "column10": "-",
            "column11": "Base.Flour"
        },
        {
            "column1": "",
            "column2": "Graham Crackers",
            "column3": "0.1",
            "column4": "-5",
            "column5": "-",
            "column6": "-",
            "column7": "-",
            "column8": "-",
            "column9": "-",
            "column10": "-",
            "column11": "Base.GrahamCrackers"
        },
        {
            "column1": "",
            "column2": "Granola Bar",
            "column3": "0.2",
            "column4": "-15",
            "column5": "-",
            "column6": "-",
            "column7": "40",
            "column8": "80",
            "column9": "-",
            "column10": "-",
            "column11": "Base.GranolaBar"
        },
        {
            "column1": "",
            "column2": "Instant Popcorn",
            "column3": "0.3",
            "column4": "-10",
            "column5": "+10",
            "column6": "-",
            "column7": "-",
            "column8": "-",
            "column9": "5",
            "column10": "10",
            "column11": "Base.Popcorn"
        },
        {
            "column1": "",
            "column2": "Pasta",
            "column3": "2",
            "column4": "-60",
            "column5": "+60",
            "column6": "+40",
            "column7": "-",
            "column8": "-",
            "column9": "-",
            "column10": "-",
            "column11": "Base.Pasta"
        },
        {
            "column1": "",
            "column2": "Poppy Bagel",
            "column3": "0.1",
            "column4": "-10",
            "column5": "-",
            "column6": "-",
            "column7": "1",
            "column8": "2",
            "column9": "-",
            "column10": "-",
            "column11": "Base.BagelPoppy"
        },
        {
            "column1": "",
            "column2": "Rice",
            "column3": "2",
            "column4": "-60",
            "column5": "+60",
            "column6": "+40",
            "column7": "-",
            "column8": "-",
            "column9": "-",
            "column10": "-",
            "column11": "Base.Rice"
        },
        {
            "column1": "",
            "column2": "Rice Paper",
            "column3": "0.1",
            "column4": "-4",
            "column5": "-",
            "column6": "-",
            "column7": "-",
            "column8": "-",
            "column9": "-",
            "column10": "-",
            "column11": "Base.RicePaper"
        },
        {
            "column1": "",
            "column2": "Sesame Bagel",
            "column3": "0.1",
            "column4": "-10",
            "column5": "-",
            "column6": "-",
            "column7": "1",
            "column8": "2",
            "column9": "-",
            "column10": "-",
            "column11": "Base.BagelSesame"
        },
        {
            "column1": "",
            "column2": "Taco Shell",
            "column3": "0.1",
            "column4": "-5",
            "column5": "-",
            "column6": "-",
            "column7": "15",
            "column8": "20",
            "column9": "-",
            "column10": "-",
            "column11": "Base.TacoShell"
        },
        {
            "column1": "",
            "column2": "Tortilla",
            "column3": "0.1",
            "column4": "-5",
            "column5": "-",
            "column6": "-",
            "column7": "3",
            "column8": "5",
            "column9": "-",
            "column10": "-",
            "column11": "Base.Tortilla"
        },
        {
            "column1": "",
            "column2": "Tortilla Chips",
            "column3": "0.2",
            "column4": "-15",
            "column5": "-",
            "column6": "-",
            "column7": "-",
            "column8": "-",
            "column9": "-",
            "column10": "-",
            "column11": "Base.TortillaChips"
        }
    ])";
    };

    struct Miscellaneous2 {
        const char* jsonData = R"(
    [
        {
            "column1": "",
            "column2": "Baking Soda",
            "column3": "0.3",
            "column4": "-",
            "column5": "-",
            "column6": "-",
            "column7": "-",
            "column8": "-",
            "column9": "-",
            "column10": "-",
            "column11": "Base.BakingSoda"
        },
        {
            "column1": "",
            "column2": "Butter",
            "column3": "0.3",
            "column4": "-25",
            "column5": "-",
            "column6": "-10",
            "column7": "-",
            "column8": "-",
            "column9": "3",
            "column10": "5",
            "column11": "Base.Butter"
        },
        {
            "column1": "",
            "column2": "Burger",
            "column3": "0.3",
            "column4": "-25",
            "column5": "-",
            "column6": "-10",
            "column7": "-",
            "column8": "-",
            "column9": "3",
            "column10": "5",
            "column11": "Base.Burger"
        },
        {
            "column1": "",
            "column2": "Cheese",
            "column3": "0.3",
            "column4": "-15",
            "column5": "-",
            "column6": "-10",
            "column7": "-",
            "column8": "-",
            "column9": "14",
            "column10": "20",
            "column11": "Base.Cheese"
        },
        {
            "column1": "",
            "column2": "Cheese Sandwich",
            "column3": "0.3",
            "column4": "-50",
            "column5": "-",
            "column6": "-",
            "column7": "-",
            "column8": "-",
            "column9": "2",
            "column10": "4",
            "column11": "Base.CheeseSandwich"
        },
        {
            "column1": "",
            "column2": "Chicken Nuggets",
            "column3": "0.2",
            "column4": "-10",
            "column5": "-",
            "column6": "-",
            "column7": "-",
            "column8": "-",
            "column9": "5",
            "column10": "8",
            "column11": "Base.ChickenNuggets"
        },
        {
            "column1": "",
            "column2": "Cocoa Powder",
            "column3": "0.2",
            "column4": "-10",
            "column5": "-",
            "column6": "-",
            "column7": "-",
            "column8": "-",
            "column9": "5",
            "column10": "8",
            "column11": "Base.CocoaPowder"
        },
        {
            "column1": "",
            "column2": "Coffee",
            "column3": "1",
            "column4": "-30",
            "column5": "+60",
            "column6": "+20",
            "column7": "-",
            "column8": "-50",
            "column9": "-",
            "column10": "-",
            "column11": "Base.Coffee2"
        },
        {
            "column1": "",
            "column2": "Cone",
            "column3": "0.1",
            "column4": "-5",
            "column5": "-",
            "column6": "-",
            "column7": "-",
            "column8": "-",
            "column9": "-",
            "column10": "-",
            "column11": "Base.Cone"
        },
        {
            "column1": "",
            "column2": "Corndog",
            "column3": "0.1",
            "column4": "-12",
            "column5": "-",
            "column6": "-",
            "column7": "-",
            "column8": "-",
            "column9": "3",
            "column10": "6",
            "column11": "Base.Corndog"
        },
        {
            "column1": "",
            "column2": "Egg Sushi",
            "column3": "0.1",
            "column4": "-12",
            "column5": "-",
            "column6": "-",
            "column7": "-",
            "column8": "-",
            "column9": "2",
            "column10": "4",
            "column11": "Base.SushiEgg"
        },
        {
            "column1": "",
            "column2": "Fried Chicken",
            "column3": "0.1",
            "column4": "-15",
            "column5": "-",
            "column6": "-",
            "column7": "-",
            "column8": "-",
            "column9": "2",
            "column10": "4",
            "column11": "Base.ChickenFried"
        },
        {
            "column1": "",
            "column2": "Fried Fish",
            "column3": "0.2",
            "column4": "-30",
            "column5": "-",
            "column6": "-",
            "column7": "-",
            "column8": "-",
            "column9": "4",
            "column10": "7",
            "column11": "Base.FishFried"
        },
        {
            "column1": "",
            "column2": "Fried Oysters",
            "column3": "0.1",
            "column4": "-6",
            "column5": "-",
            "column6": "-",
            "column7": "-",
            "column8": "-",
            "column9": "4",
            "column10": "7",
            "column11": "Base.OystersFried"
        },
        {
            "column1": "",
            "column2": "Fried Tofu",
            "column3": "0.3",
            "column4": "-15",
            "column5": "-",
            "column6": "-",
            "column7": "-",
            "column8": "-",
            "column9": "6",
            "column10": "14",
            "column11": "Base.TofuFried"
        },
        {
            "column1": "",
            "column2": "Fries",
            "column3": "0.4",
            "column4": "-10",
            "column5": "-",
            "column6": "-10",
            "column7": "-",
            "column8": "-",
            "column9": "3",
            "column10": "5",
            "column11": "Base.Fries"
        },
        {
            "column1": "",
            "column2": "Fruit Jam",
            "column3": "0.2",
            "column4": "-30",
            "column5": "-",
            "column6": "-10",
            "column7": "-",
            "column8": "-",
            "column9": "-",
            "column10": "-",
            "column11": "Base.JamFruit"
        },
        {
            "column1": "",
            "column2": "Gravy Mix",
            "column3": "0.1",
            "column4": "-",
            "column5": "-",
            "column6": "-",
            "column7": "-",
            "column8": "-",
            "column9": "-",
            "column10": "-",
            "column11": "Base.GravyMix"
        },
        {
            "column1": "",
            "column2": "Guacamole",
            "column3": "0.1",
            "column4": "-7",
            "column5": "-",
            "column6": "-",
            "column7": "-",
            "column8": "-",
            "column9": "-",
            "column10": "-",
            "column11": "Base.Guacamole"
        },
        {
            "column1": "",
            "column2": "Gum",
            "column3": "0.1",
            "column4": "-1",
            "column5": "-",
            "column6": "-5",
            "column7": "-",
            "column8": "-",
            "column9": "-",
            "column10": "-",
            "column11": "Base.Gum"
        },
        {
            "column1": "",
            "column2": "Honey",
            "column3": "0.4",
            "column4": "-20",
            "column5": "-",
            "column6": "-",
            "column7": "-",
            "column8": "-",
            "column9": "-",
            "column10": "-",
            "column11": "Base.Honey"
        },
        {
            "column1": "",
            "column2": "Hot Dog",
            "column3": "0.3",
            "column4": "-20",
            "column5": "-",
            "column6": "-",
            "column7": "-",
            "column8": "-",
            "column9": "3",
            "column10": "6",
            "column11": "Base.Hotdog"
        },
        {
            "column1": "",
            "column2": "Mac and Cheese",
            "column3": "0.5",
            "column4": "-40",
            "column5": "-",
            "column6": "-",
            "column7": "-",
            "column8": "-",
            "column9": "-",
            "column10": "-",
            "column11": "Base.Macandcheese"
        },
        {
            "column1": "",
            "column2": "Marmalade",
            "column3": "0.2",
            "column4": "-30",
            "column5": "-",
            "column6": "-10",
            "column7": "-",
            "column8": "-",
            "column9": "-",
            "column10": "-",
            "column11": "Base.JamMarmalade"
        },
        {
            "column1": "",
            "column2": "Meat Dumpling",
            "column3": "0.1",
            "column4": "-10",
            "column5": "-",
            "column6": "-",
            "column7": "-",
            "column8": "-",
            "column9": "2",
            "column10": "4",
            "column11": "Base.MeatDumpling"
        },
        {
            "column1": "",
            "column2": "Meat Steam Bun",
            "column3": "0.1",
            "column4": "-15",
            "column5": "-",
            "column6": "-",
            "column7": "-",
            "column8": "-",
            "column9": "2",
            "column10": "4",
            "column11": "Base.MeatSteamBun"
        },
        {
            "column1": "",
            "column2": "Onigiri",
            "column3": "0.1",
            "column4": "-10",
            "column5": "-",
            "column6": "-",
            "column7": "-",
            "column8": "-",
            "column9": "2",
            "column10": "4",
            "column11": "Base.Onigiri"
        },
        {
            "column1": "",
            "column2": "Pancake Mix",
            "column3": "0.1",
            "column4": "-",
            "column5": "-",
            "column6": "-",
            "column7": "-",
            "column8": "-",
            "column9": "-",
            "column10": "-",
            "column11": "Base.PancakeMix"
        },
        {
            "column1": "",
            "column2": "Pancakes",
            "column3": "0.3",
            "column4": "-20",
            "column5": "-",
            "column6": "-10",
            "column7": "-",
            "column8": "-",
            "column9": "3",
            "column10": "5",
            "column11": "Base.Pancakes"
        },
        {
            "column1": "",
            "column2": "Peanut Butter",
            "column3": "0.3",
            "column4": "-25",
            "column5": "-",
            "column6": "-15",
            "column7": "-5",
            "column8": "-",
            "column9": "-",
            "column10": "-",
            "column11": "Base.PeanutButter"
        },
        {
            "column1": "",
            "column2": "Peanut Butter Sandwich",
            "column3": "0.4",
            "column4": "-40",
            "column5": "-",
            "column6": "-10",
            "column7": "-",
            "column8": "-",
            "column9": "2",
            "column10": "4",
            "column11": "Base.PeanutButterSandwich"
        },
        {
            "column1": "",
            "column2": "Peanuts",
            "column3": "0.2",
            "column4": "-8",
            "column5": "-",
            "column6": "-",
            "column7": "-",
            "column8": "-",
            "column9": "-",
            "column10": "-",
            "column11": "Base.Peanuts"
        },
        {
            "column1": "",
            "column2": "Perogies",
            "column3": "0.1",
            "column4": "-7",
            "column5": "-",
            "column6": "-",
            "column7": "-",
            "column8": "-",
            "column9": "3",
            "column10": "7",
            "column11": "Base.Perogies"
        },
        {
            "column1": "",
            "column2": "Pie Slice",
            "column3": "0.5",
            "column4": "-30",
            "column5": "-",
            "column6": "-",
            "column7": "-",
            "column8": "-",
            "column9": "5",
            "column10": "8",
            "column11": "Base.Pie"
        },
        {
            "column1": "",
            "column2": "Pizza",
            "column3": "0.3",
            "column4": "-25",
            "column5": "-",
            "column6": "-10",
            "column7": "-",
            "column8": "-",
            "column9": "3",
            "column10": "5",
            "column11": "Base.Pizza"
        },
        {
            "column1": "",
            "column2": "Potato Pancakes",
            "column3": "0.1",
            "column4": "-15",
            "column5": "-",
            "column6": "-",
            "column7": "-",
            "column8": "-",
            "column9": "3",
            "column10": "7",
            "column11": "Base.PotatoPancakes"
        },
        {
            "column1": "",
            "column2": "Processed Cheese",
            "column3": "0.3",
            "column4": "-5",
            "column5": "-",
            "column6": "-",
            "column7": "-",
            "column8": "-",
            "column9": "6",
            "column10": "10",
            "column11": "Base.Processedcheese"
        },
        {
            "column1": "",
            "column2": "Refried Beans",
            "column3": "0.2",
            "column4": "-10",
            "column5": "-",
            "column6": "-",
            "column7": "-",
            "column8": "-",
            "column9": "-",
            "column10": "-",
            "column11": "Base.RefriedBeans"
        },
        {
            "column1": "",
            "column2": "Remoulade",
            "column3": "0.5",
            "column4": "-10",
            "column5": "-",
            "column6": "+5",
            "column7": "+10",
            "column8": "-",
            "column9": "8",
            "column10": "11",
            "column11": "farming.RemouladeFull"
        },
        {
            "column1": "",
            "column2": "Shrimp Dumpling",
            "column3": "0.1",
            "column4": "-15",
            "column5": "-",
            "column6": "-",
            "column7": "-",
            "column8": "-",
            "column9": "2",
            "column10": "4",
            "column11": "Base.ShrimpDumpling"
        },
        {
            "column1": "",
            "column2": "Spring Roll",
            "column3": "0.1",
            "column4": "-20",
            "column5": "-",
            "column6": "-",
            "column7": "-",
            "column8": "-",
            "column9": "2",
            "column10": "4",
            "column11": "Base.Springroll"
        },
        {
            "column1": "",
            "column2": "Sunflower Seeds",
            "column3": "0.1",
            "column4": "-5",
            "column5": "-",
            "column6": "-",
            "column7": "-",
            "column8": "-",
            "column9": "-",
            "column10": "-",
            "column11": "Base.SunflowerSeeds"
        },
        {
            "column1": "",
            "column2": "Tea Bag",
            "column3": "0.1",
            "column4": "-5",
            "column5": "+10",
            "column6": "+10",
            "column7": "-",
            "column8": "-15",
            "column9": "-",
            "column10": "-",
            "column11": "Base.Teabag2"
        },
        {
            "column1": "",
            "column2": "TV Dinner",
            "column3": "0.4",
            "column4": "-23",
            "column5": "-",
            "column6": "+25",
            "column7": "+30",
            "column8": "-",
            "column9": "-",
            "column10": "-",
            "column11": "Base.TVDinner"
        }
    ])";
    };

    struct Miscellaneous2p5
    {
        const char* jsonData = 
    R"(
        [ 
            {
                "column1": "",
                "column2": "Vinegar",
                "column3": "0.3",
                "column4": "-",
                "column5": "-",
                "column6": "-",
                "column7": "-",
                "column8": "-",
                "column9": "-",
                "column10": "-",
                "column11": "Base.Vinegar"
            },
            {
                "column1": "",
                "column2": "Waffles",
                "column3": "0.3",
                "column4": "-15",
                "column5": "-",
                "column6": "-10",
                "column7": "-",
                "column8": "-",
                "column9": "-",
                "column10": "-",
                "column11": "Base.Waffles"
            },
            {
                "column1": "",
                "column2": "Yogurt",
                "column3": "0.3",
                "column4": "-10",
                "column5": "-",
                "column6": "-",
                "column7": "-",
                "column8": "-",
                "column9": "10",
                "column10": "15",
                "column11": "Base.Yoghurt"
            }
        ]
    )";
    };

    struct Sweets {
        const char* jsonData = R"(
    [
        {
            "column1": "",
            "column2": "Biscuit",
            "column3": "0.1",
            "column4": "-15",
            "column5": "-",
            "column6": "-",
            "column7": "-",
            "column8": "-",
            "column9": "3",
            "column10": "5",
            "column11": "Base.Biscuit"
        },
        {
            "column1": "",
            "column2": "Black Forest Cake Slice",
            "column3": "0.2",
            "column4": "-10",
            "column5": "-",
            "column6": "-15",
            "column7": "-",
            "column8": "-",
            "column9": "3",
            "column10": "5",
            "column11": "Base.CakeBlackForest"
        },
        {
            "column1": "",
            "column2": "Black Licorice",
            "column3": "0.1",
            "column4": "-2",
            "column5": "-",
            "column6": "-",
            "column7": "-",
            "column8": "-",
            "column9": "-",
            "column10": "-",
            "column11": "Base.LicoriceBlack"
        },
        {
            "column1": "",
            "column2": "Cake Slice",
            "column3": "0.2",
            "column4": "-7",
            "column5": "-",
            "column6": "-10",
            "column7": "-",
            "column8": "-",
            "column9": "3",
            "column10": "5",
            "column11": "Base.CakeSlice"
        },
        {
            "column1": "",
            "column2": "Candy Cane",
            "column3": "0.2",
            "column4": "-10",
            "column5": "-",
            "column6": "-",
            "column7": "-",
            "column8": "-",
            "column9": "-",
            "column10": "-",
            "column11": "Base.Candycane"
        },
        {
            "column1": "",
            "column2": "Candy Package",
            "column3": "0.6",
            "column4": "-",
            "column5": "-",
            "column6": "-",
            "column7": "-",
            "column8": "-",
            "column9": "-",
            "column10": "-",
            "column11": "Base.CandyPackage"
        },
        {
            "column1": "",
            "column2": "Carrot Cake Slice",
            "column3": "0.2",
            "column4": "-7",
            "column5": "-",
            "column6": "-10",
            "column7": "-",
            "column8": "-",
            "column9": "3",
            "column10": "5",
            "column11": "Base.CakeCarrot"
        },
        {
            "column1": "",
            "column2": "Cheese Cake Slice",
            "column3": "0.2",
            "column4": "-8",
            "column5": "-",
            "column6": "-10",
            "column7": "-",
            "column8": "-",
            "column9": "3",
            "column10": "5",
            "column11": "Base.CakeCheesecake"
        },
        {
            "column1": "",
            "column2": "Chips",
            "column3": "0.2",
            "column4": "-15",
            "column5": "-",
            "column6": "-",
            "column7": "-",
            "column8": "-",
            "column9": "-",
            "column10": "-",
            "column11": "Base.Crisps"
        },
        {
            "column1": "",
            "column2": "Chips",
            "column3": "0.2",
            "column4": "-15",
            "column5": "-",
            "column6": "-",
            "column7": "-",
            "column8": "-",
            "column9": "-",
            "column10": "-",
            "column11": "Base.Crisps2"
        },
        {
            "column1": "",
            "column2": "Chips",
            "column3": "0.2",
            "column4": "-15",
            "column5": "-",
            "column6": "-",
            "column7": "-",
            "column8": "-",
            "column9": "-",
            "column10": "-",
            "column11": "Base.Crisps3"
        },
        {
            "column1": "",
            "column2": "Chips",
            "column3": "0.2",
            "column4": "-15",
            "column5": "-",
            "column6": "-",
            "column7": "-",
            "column8": "-",
            "column9": "-",
            "column10": "-",
            "column11": "Base.Crisps4"
        },
        {
            "column1": "",
            "column2": "Chocolate",
            "column3": "0.2",
            "column4": "-15",
            "column5": "-",
            "column6": "-",
            "column7": "-10",
            "column8": "-",
            "column9": "-",
            "column10": "-",
            "column11": "Base.Chocolate"
        },
        {
            "column1": "",
            "column2": "Chocolate Bread",
            "column3": "0.1",
            "column4": "-2",
            "column5": "-",
            "column6": "-",
            "column7": "-",
            "column8": "-",
            "column9": "3",
            "column10": "7",
            "column11": "Base.Painauchocolat"
        },
        {
            "column1": "",
            "column2": "Chocolate Cake Slice",
            "column3": "0.2",
            "column4": "-10",
            "column5": "-",
            "column6": "-15",
            "column7": "-",
            "column8": "-",
            "column9": "3",
            "column10": "5",
            "column11": "Base.CakeChocolate"
        },
        {
            "column1": "",
            "column2": "Chocolate Chips",
            "column3": "0.1",
            "column4": "-6",
            "column5": "-",
            "column6": "-",
            "column7": "-",
            "column8": "-",
            "column9": "3",
            "column10": "7",
            "column11": "Base.ChocolateChips"
        },
        {
            "column1": "",
            "column2": "Chocolate Cookie",
            "column3": "0.1",
            "column4": "-5",
            "column5": "-",
            "column6": "-10",
            "column7": "-",
            "column8": "-",
            "column9": "-",
            "column10": "-",
            "column11": "Base.CookiesChocolate"
        },
        {
            "column1": "",
            "column2": "Chocolate Doughnut",
            "column3": "0.1",
            "column4": "-7",
            "column5": "-",
            "column6": "-15",
            "column7": "-",
            "column8": "-",
            "column9": "-",
            "column10": "-",
            "column11": "Base.DoughnutChocolate"
        },
        {
            "column1": "",
            "column2": "Cinnamon Roll",
            "column3": "0.1",
            "column4": "-12",
            "column5": "-",
            "column6": "-",
            "column7": "-",
            "column8": "-",
            "column9": "-",
            "column10": "-",
            "column11": "Base.CinnamonRoll"
        },
        {
            "column1": "",
            "column2": "Cookie",
            "column3": "0.1",
            "column4": "-5",
            "column5": "-",
            "column6": "-10",
            "column7": "-",
            "column8": "-",
            "column9": "-",
            "column10": "-",
            "column11": "Base.CookieChocolateChip"
        },
        {
            "column1": "",
            "column2": "Cupcake",
            "column3": "0.2",
            "column4": "-20",
            "column5": "-",
            "column6": "-",
            "column7": "-",
            "column8": "-",
            "column9": "-",
            "column10": "-",
            "column11": "Base.Cupcake"
        },
        {
            "column1": "",
            "column2": "Doughnut",
            "column3": "0.1",
            "column4": "-7",
            "column5": "-",
            "column6": "-15",
            "column7": "-",
            "column8": "-",
            "column9": "-",
            "column10": "-",
            "column11": "Base.DoughnutPlain"
        },
        {
            "column1": "",
            "column2": "Frosted Doughnut",
            "column3": "0.1",
            "column4": "-7",
            "column5": "-",
            "column6": "-15",
            "column7": "-",
            "column8": "-",
            "column9": "-",
            "column10": "-",
            "column11": "Base.DoughnutFrosted"
        },
        {
            "column1": "",
            "column2": "Fruit Muffin",
            "column3": "0.1",
            "column4": "-7",
            "column5": "-",
            "column6": "-10",
            "column7": "-",
            "column8": "-",
            "column9": "5",
            "column10": "8",
            "column11": "Base.MuffinFruit"
        },
        {
            "column1": "",
            "column2": "Ice Cream",
            "column3": "0.2",
            "column4": "-30",
            "column5": "-",
            "column6": "-10",
            "column7": "-",
            "column8": "-",
            "column9": "1",
            "column10": "1",
            "column11": "Base.Icecream"
        },
        {
            "column1": "",
            "column2": "Ice Cream Cone",
            "column3": "0.2",
            "column4": "-25",
            "column5": "-",
            "column6": "-10",
            "column7": "-",
            "column8": "-",
            "column9": "1",
            "column10": "1",
            "column11": "Base.ConeIcecream"
        },
        {
            "column1": "",
            "column2": "Icing",
            "column3": "0.1",
            "column4": "-10",
            "column5": "-",
            "column6": "-10",
            "column7": "-",
            "column8": "-",
            "column9": "4",
            "column10": "8",
            "column11": "Base.Icing"
        },
        {
            "column1": "",
            "column2": "Jelly Doughnut",
            "column3": "0.1",
            "column4": "-7",
            "column5": "-",
            "column6": "-15",
            "column7": "-",
            "column8": "-",
            "column9": "-",
            "column10": "-",
            "column11": "Base.DoughnutJelly"
        },
        {
            "column1": "",
            "column2": "Lollipop",
            "column3": "0.1",
            "column4": "-5",
            "column5": "-",
            "column6": "-10",
            "column7": "-",
            "column8": "-",
            "column9": "-",
            "column10": "-",
            "column11": "Base.Lollipop"
        },
        {
            "column1": "",
            "column2": "Marshmallows",
            "column3": "0.1",
            "column4": "-5",
            "column5": "-",
            "column6": "-5",
            "column7": "-",
            "column8": "-",
            "column9": "-",
            "column10": "-",
            "column11": "Base.Marshmallows"
        },
        {
            "column1": "",
            "column2": "Mint Candy",
            "column3": "0.1",
            "column4": "-2",
            "column5": "-",
            "column6": "-10",
            "column7": "-",
            "column8": "-",
            "column9": "-",
            "column10": "-",
            "column11": "Base.MintCandy"
        },
        {
            "column1": "",
            "column2": "Modjeska",
            "column3": "0.1",
            "column4": "-10",
            "column5": "-",
            "column6": "-",
            "column7": "-",
            "column8": "-",
            "column9": "-",
            "column10": "-",
            "column11": "Base.Modjeska"
        },
        {
            "column1": "",
            "column2": "Oatmeal Cookie",
            "column3": "0.1",
            "column4": "-5",
            "column5": "-",
            "column6": "-10",
            "column7": "-",
            "column8": "-",
            "column9": "-",
            "column10": "-",
            "column11": "Base.CookiesOatmeal"
        },
        {
            "column1": "",
            "column2": "Peppermint",
            "column3": "0.2",
            "column4": "-10",
            "column5": "-",
            "column6": "-",
            "column7": "-",
            "column8": "-",
            "column9": "-",
            "column10": "-",
            "column11": "Base.Peppermint"
        },
        {
            "column1": "",
            "column2": "Pumpkin Pie Slice",
            "column3": "0.5",
            "column4": "-30",
            "column5": "-",
            "column6": "-",
            "column7": "-",
            "column8": "-",
            "column9": "5",
            "column10": "8",
            "column11": "Base.PiePumpkin"
        },
        {
            "column1": "",
            "column2": "Raspberry Shortbread",
            "column3": "0.1",
            "column4": "-7",
            "column5": "-",
            "column6": "-10",
            "column7": "-",
            "column8": "-",
            "column9": "-",
            "column10": "-",
            "column11": "Base.CookieJelly"
        },
        {
            "column1": "",
            "column2": "Red Licorice",
            "column3": "0.1",
            "column4": "-2",
            "column5": "-",
            "column6": "-",
            "column7": "-",
            "column8": "-",
            "column9": "-",
            "column10": "-",
            "column11": "Base.LicoriceRed"
        },
        {
            "column1": "",
            "column2": "Red Velvet Cake Slice",
            "column3": "0.2",
            "column4": "-8",
            "column5": "-",
            "column6": "-10",
            "column7": "-",
            "column8": "-",
            "column9": "3",
            "column10": "5",
            "column11": "Base.CakeRedVelvet"
        },
        {
            "column1": "",
            "column2": "Shortbread Cookie",
            "column3": "0.1",
            "column4": "-5",
            "column5": "-",
            "column6": "-10",
            "column7": "-",
            "column8": "-",
            "column9": "-",
            "column10": "-",
            "column11": "Base.CookiesShortbread"
        },
        {
            "column1": "",
            "column2": "Smore",
            "column3": "0.1",
            "column4": "-10",
            "column5": "-",
            "column6": "-",
            "column7": "-",
            "column8": "-",
            "column9": "10",
            "column10": "15",
            "column11": "Base.Smore"
        },
        {
            "column1": "",
            "column2": "Strawberry Cake Slice",
            "column3": "0.2",
            "column4": "-8",
            "column5": "-",
            "column6": "-10",
            "column7": "-",
            "column8": "-",
            "column9": "3",
            "column10": "5",
            "column11": "Base.CakeStrawberryShortcake"
        }
    ])";
    };

    struct Vegetable {
        const char* jsonData = R"(
    [
        {
            "column1": "",
            "column2": "Avocado",
            "column3": "0.3",
            "column4": "-15",
            "column5": "-7",
            "column6": "-",
            "column7": "-",
            "column8": "6",
            "column9": "14",
            "column10": "Base.Avocado"
        },
        {
            "column1": "",
            "column2": "Bell Pepper",
            "column3": "0.2",
            "column4": "-8",
            "column5": "-2",
            "column6": "-",
            "column7": "-",
            "column8": "5",
            "column9": "8",
            "column10": "Base.BellPepper"
        },
        {
            "column1": "",
            "column2": "Black Beans",
            "column3": "0.1",
            "column4": "-10",
            "column5": "-",
            "column6": "-",
            "column7": "-",
            "column8": "3",
            "column9": "5",
            "column10": "Base.Blackbeans"
        },
        {
            "column1": "",
            "column2": "Broccoli",
            "column3": "0.2",
            "column4": "-9",
            "column5": "-4",
            "column6": "-",
            "column7": "-",
            "column8": "4",
            "column9": "6",
            "column10": "Base.Broccoli"
        },
        {
            "column1": "",
            "column2": "Cabbage",
            "column3": "0.2",
            "column4": "-25",
            "column5": "-15",
            "column6": "-",
            "column7": "-",
            "column8": "2",
            "column9": "4",
            "column10": "farming.Cabbage"
        },
        {
            "column1": "",
            "column2": "Carrots",
            "column3": "0.2",
            "column4": "-8",
            "column5": "-4",
            "column6": "-",
            "column7": "-",
            "column8": "6",
            "column9": "8",
            "column10": "Base.Carrots"
        },
        {
            "column1": "",
            "column2": "Corn",
            "column3": "0.2",
            "column4": "-14",
            "column5": "-4",
            "column6": "-",
            "column7": "-",
            "column8": "5",
            "column9": "8",
            "column10": "Base.Corn"
        },
        {
            "column1": "",
            "column2": "Daikon",
            "column3": "0.2",
            "column4": "-12",
            "column5": "-5",
            "column6": "-",
            "column7": "-",
            "column8": "5",
            "column9": "8",
            "column10": "Base.Daikon"
        },
        {
            "column1": "",
            "column2": "Dried Black Beans",
            "column3": "2",
            "column4": "-60",
            "column5": "+60",
            "column6": "+40",
            "column7": "-",
            "column8": "-",
            "column9": "-",
            "column10": "Base.DriedBlackBeans"
        },
        {
            "column1": "",
            "column2": "Dried Chick Peas",
            "column3": "2",
            "column4": "-60",
            "column5": "+60",
            "column6": "+40",
            "column7": "-",
            "column8": "-",
            "column9": "-",
            "column10": "Base.DriedChickpeas"
        },
        {
            "column1": "",
            "column2": "Dried Kidney Beans",
            "column3": "2",
            "column4": "-60",
            "column5": "+60",
            "column6": "+40",
            "column7": "-",
            "column8": "-",
            "column9": "-",
            "column10": "Base.DriedKidneyBeans"
        },
        {
            "column1": "",
            "column2": "Dried Lentils",
            "column3": "2",
            "column4": "-60",
            "column5": "+60",
            "column6": "+40",
            "column7": "-",
            "column8": "-",
            "column9": "-",
            "column10": "Base.DriedLentils"
        },
        {
            "column1": "",
            "column2": "Dried Split Peas",
            "column3": "2",
            "column4": "-60",
            "column5": "+60",
            "column6": "+40",
            "column7": "-",
            "column8": "-",
            "column9": "-",
            "column10": "Base.DriedSplitPeas"
        },
        {
            "column1": "",
            "column2": "Dried White Beans",
            "column3": "2",
            "column4": "-60",
            "column5": "+60",
            "column6": "+40",
            "column7": "-",
            "column8": "-",
            "column9": "-",
            "column10": "Base.DriedWhiteBeans"
        },
        {
            "column1": "",
            "column2": "Edamame",
            "column3": "0.1",
            "column4": "-5",
            "column5": "-",
            "column6": "-",
            "column7": "-",
            "column8": "3",
            "column9": "5",
            "column10": "Base.Edamame"
        },
        {
            "column1": "",
            "column2": "Eggplant",
            "column3": "0.2",
            "column4": "-15",
            "column5": "-9",
            "column6": "-",
            "column7": "-",
            "column8": "5",
            "column9": "8",
            "column10": "Base.Eggplant"
        },
        {
            "column1": "",
            "column2": "Ginger Pickled",
            "column3": "0.1",
            "column4": "-5",
            "column5": "-",
            "column6": "-",
            "column7": "-",
            "column8": "14",
            "column9": "21",
            "column10": "Base.GingerPickled"
        },
        {
            "column1": "",
            "column2": "Habanero",
            "column3": "0.1",
            "column4": "-2",
            "column5": "-",
            "column6": "-",
            "column7": "-",
            "column8": "5",
            "column9": "8",
            "column10": "Base.PepperHabanero"
        },
        {
            "column1": "",
            "column2": "Jalapeno",
            "column3": "0.1",
            "column4": "-2",
            "column5": "-",
            "column6": "-",
            "column7": "-",
            "column8": "5",
            "column9": "8",
            "column10": "Base.PepperJalapeno"
        },
        {
            "column1": "",
            "column2": "Leek",
            "column3": "0.2",
            "column4": "-12",
            "column5": "-5",
            "column6": "-",
            "column7": "-",
            "column8": "5",
            "column9": "8",
            "column10": "Base.Leek"
        },
        {
            "column1": "",
            "column2": "Lettuce",
            "column3": "0.7",
            "column4": "-15",
            "column5": "-7",
            "column6": "-",
            "column7": "-",
            "column8": "3",
            "column9": "5",
            "column10": "Base.Lettuce"
        },
        {
            "column1": "",
            "column2": "Mushroom",
            "column3": "0.2",
            "column4": "-13",
            "column5": "-1",
            "column6": "-",
            "column7": "?",
            "column8": "3",
            "column9": "4",
            "column10": "Base.MushroomGeneric1"
        },
        {
            "column1": "",
            "column2": "Mushroom",
            "column3": "0.2",
            "column4": "-13",
            "column5": "-1",
            "column6": "-",
            "column7": "?",
            "column8": "3",
            "column9": "4",
            "column10": "Base.MushroomGeneric2"
        },
        {
            "column1": "",
            "column2": "Mushroom",
            "column3": "0.2",
            "column4": "-15",
            "column5": "-1",
            "column6": "-",
            "column7": "?",
            "column8": "3",
            "column9": "4",
            "column10": "Base.MushroomGeneric3"
        },
        {
            "column1": "",
            "column2": "Mushroom",
            "column3": "0.2",
            "column4": "-13",
            "column5": "-1",
            "column6": "-",
            "column7": "?",
            "column8": "3",
            "column9": "4",
            "column10": "Base.MushroomGeneric4"
        },
        {
            "column1": "",
            "column2": "Mushroom",
            "column3": "0.2",
            "column4": "-15",
            "column5": "-1",
            "column6": "-",
            "column7": "?",
            "column8": "3",
            "column9": "4",
            "column10": "Base.MushroomGeneric5"
        },
        {
            "column1": "",
            "column2": "Mushroom",
            "column3": "0.2",
            "column4": "-13",
            "column5": "-1",
            "column6": "-",
            "column7": "?",
            "column8": "3",
            "column9": "4",
            "column10": "Base.MushroomGeneric6"
        },
        {
            "column1": "",
            "column2": "Mushroom",
            "column3": "0.2",
            "column4": "-13",
            "column5": "-1",
            "column6": "-",
            "column7": "?",
            "column8": "3",
            "column9": "4",
            "column10": "Base.MushroomGeneric7"
        },
        {
            "column1": "",
            "column2": "Onion",
            "column3": "0.2",
            "column4": "-10",
            "column5": "-",
            "column6": "-",
            "column7": "-",
            "column8": "7",
            "column9": "9",
            "column10": "Base.Onion"
        },
        {
            "column1": "",
            "column2": "Onion Rings",
            "column3": "0.1",
            "column4": "-5",
            "column5": "-",
            "column6": "-",
            "column7": "-",
            "column8": "4",
            "column9": "7",
            "column10": "Base.OnionRings"
        },
        {
            "column1": "",
            "column2": "Peas",
            "column3": "0.6",
            "column4": "-20",
            "column5": "-5",
            "column6": "-",
            "column7": "-",
            "column8": "3",
            "column9": "5",
            "column10": "Base.Peas"
        },
        {
            "column1": "",
            "column2": "Pickles",
            "column3": "0.1",
            "column4": "-5",
            "column5": "-",
            "column6": "-",
            "column7": "-",
            "column8": "-",
            "column9": "-",
            "column10": "Base.Pickles"
        },
        {
            "column1": "",
            "column2": "Potato",
            "column3": "0.2",
            "column4": "-18",
            "column5": "-7",
            "column6": "-",
            "column7": "-",
            "column8": "14",
            "column9": "28",
            "column10": "farming.Potato"
        },
        {
            "column1": "",
            "column2": "Pumpkin",
            "column3": "1.0",
            "column4": "-40",
            "column5": "-",
            "column6": "-",
            "column7": "-",
            "column8": "5",
            "column9": "8",
            "column10": "Base.Pumpkin"
        },
        {
            "column1": "",
            "column2": "Radish",
            "column3": "0.1",
            "column4": "-3",
            "column5": "-1",
            "column6": "-",
            "column7": "-",
            "column8": "3",
            "column9": "7",
            "column10": "farming.RedRadish"
        },
        {
            "column1": "",
            "column2": "Seaweed",
            "column3": "0.2",
            "column4": "-3",
            "column5": "-",
            "column6": "-",
            "column7": "-",
            "column8": "-",
            "column9": "-",
            "column10": "Base.Seaweed"
        },
        {
            "column1": "",
            "column2": "Tomato",
            "column3": "0.2",
            "column4": "-12",
            "column5": "-15",
            "column6": "-",
            "column7": "-",
            "column8": "4",
            "column9": "12",
            "column10": "farming.Tomato"
        },
        {
            "column1": "",
            "column2": "Zucchini",
            "column3": "0.3",
            "column4": "-10",
            "column5": "-10",
            "column6": "-",
            "column7": "-",
            "column8": "6",
            "column9": "14",
            "column10": "Base.Zucchini"
        }
    ])";
    };

    struct Canned_food {
        const char* jsonData = R"(
    [
        {
            "column1": "",
            "column2": "Canned Beans",
            "column3": "0.8",
            "column4": "-25",
            "column5": "-",
            "column6": "+10",
            "column7": "(2) ",
            "column8": "(4) ",
            "column9": "Base.TinnedBeans"
        },
        {
            "column1": "",
            "column2": "Canned Carrots",
            "column3": "0.7",
            "column4": "-12",
            "column5": "-4",
            "column6": "-",
            "column7": "(2) ",
            "column8": "(4) ",
            "column9": "Base.CannedCarrots"
        },
        {
            "column1": "",
            "column2": "Canned Chili",
            "column3": "0.8",
            "column4": "-15",
            "column5": "-",
            "column6": "-",
            "column7": "(3) ",
            "column8": "(5) ",
            "column9": "Base.CannedChili"
        },
        {
            "column1": "",
            "column2": "Canned Corn",
            "column3": "0.7",
            "column4": "-15",
            "column5": "-4",
            "column6": "-",
            "column7": "(2) ",
            "column8": "(4) ",
            "column9": "Base.CannedCorn"
        },
        {
            "column1": "",
            "column2": "Canned Corned Beef",
            "column3": "0.8",
            "column4": "-25",
            "column5": "-",
            "column6": "-",
            "column7": "(2) ",
            "column8": "(4) ",
            "column9": "Base.CannedCornedBeef"
        },
        {
            "column1": "",
            "column2": "Canned Fruit Cocktail",
            "column3": "1.0",
            "column4": "-15",
            "column5": "-",
            "column6": "-10",
            "column7": "(5) ",
            "column8": "(7) ",
            "column9": "Base.CannedFruitCocktail"
        },
        {
            "column1": "",
            "column2": "Canned Mushroom Soup",
            "column3": "0.7",
            "column4": "-10",
            "column5": "-4",
            "column6": "-",
            "column7": "(2) ",
            "column8": "(4) ",
            "column9": "Base.CannedMushroomSoup"
        },
        {
            "column1": "",
            "column2": "Canned Peaches",
            "column3": "0.3",
            "column4": "-15",
            "column5": "-",
            "column6": "-10",
            "column7": "(5) ",
            "column8": "(7) ",
            "column9": "Base.CannedPeaches"
        },
        {
            "column1": "",
            "column2": "Canned Peas",
            "column3": "0.7",
            "column4": "-15",
            "column5": "-3",
            "column6": "-",
            "column7": "(2) ",
            "column8": "(4) ",
            "column9": "Base.CannedPeas"
        },
        {
            "column1": "",
            "column2": "Canned Pineapple",
            "column3": "0.3",
            "column4": "-15",
            "column5": "-",
            "column6": "-10",
            "column7": "(5) ",
            "column8": "(7) ",
            "column9": "Base.CannedPineapple"
        },
        {
            "column1": "",
            "column2": "Canned Potato",
            "column3": "0.7",
            "column4": "-18",
            "column5": "-7",
            "column6": "-",
            "column7": "(2) ",
            "column8": "(4) ",
            "column9": "Base.CannedPotato2"
        },
        {
            "column1": "",
            "column2": "Canned Sardines",
            "column3": "0.7",
            "column4": "-13",
            "column5": "-",
            "column6": "-",
            "column7": "(2) ",
            "column8": "(4) ",
            "column9": "Base.CannedSardines"
        },
        {
            "column1": "",
            "column2": "Canned Vegetable Soup",
            "column3": "0.8",
            "column4": "-25",
            "column5": "-4",
            "column6": "-",
            "column7": "(2) ",
            "column8": "(4) ",
            "column9": "Base.TinnedSoup"
        },
        {
            "column1": "",
            "column2": "Canned Spaghetti Bolognese",
            "column3": "0.8",
            "column4": "-25",
            "column5": "-",
            "column6": "-",
            "column7": "(3) ",
            "column8": "(5) ",
            "column9": "Base.CannedBolognese"
        },
        {
            "column1": "",
            "column2": "Canned Tomato",
            "column3": "0.7",
            "column4": "-12",
            "column5": "-8",
            "column6": "-",
            "column7": "(2) ",
            "column8": "(4) ",
            "column9": "Base.CannedTomato2"
        },
        {
            "column1": "",
            "column2": "Canned Tuna",
            "column3": "0.3",
            "column4": "-17",
            "column5": "-",
            "column6": "-",
            "column7": "(2) ",
            "column8": "(4) ",
            "column9": "Base.TunaTin"
        },
        {
            "column1": "",
            "column2": "Dog Food",
            "column3": "1",
            "column4": "-30",
            "column5": "-",
            "column6": "+50",
            "column7": "(5) ",
            "column8": "(7) ",
            "column9": "Base.Dogfood"
        }
    ])";
    };

    struct Pickled_food {
        const char* jsonData = R"(
    [
        {
            "column1": "",
            "column2": "Jar of Bell Peppers",
            "column3": "0.5",
            "column4": "60",
            "column5": "90",
            "column6": "60",
            "column7": "120",
            "column8": "Base.CannedBellPepper"
        },
        {
            "column1": "",
            "column2": "Jar of Broccoli",
            "column3": "0.5",
            "column4": "60",
            "column5": "90",
            "column6": "60",
            "column7": "120",
            "column8": "Base.CannedBroccoli"
        },
        {
            "column1": "",
            "column2": "Jar of Cabbage",
            "column3": "0.5",
            "column4": "60",
            "column5": "90",
            "column6": "60",
            "column7": "120",
            "column8": "Base.CannedCabbage"
        },
        {
            "column1": "",
            "column2": "Jar of Carrots",
            "column3": "0.5",
            "column4": "60",
            "column5": "90",
            "column6": "60",
            "column7": "120",
            "column8": "Base.CannedCarrots"
        },
        {
            "column1": "",
            "column2": "Jar of Eggplants",
            "column3": "0.5",
            "column4": "60",
            "column5": "90",
            "column6": "60",
            "column7": "120",
            "column8": "Base.CannedEggplant"
        },
        {
            "column1": "",
            "column2": "Jar of Leeks",
            "column3": "0.5",
            "column4": "60",
            "column5": "90",
            "column6": "60",
            "column7": "120",
            "column8": "Base.CannedLeek"
        },
        {
            "column1": "",
            "column2": "Jar of Potatoes",
            "column3": "0.5",
            "column4": "60",
            "column5": "90",
            "column6": "60",
            "column7": "120",
            "column8": "Base.CannedPotato"
        },
        {
            "column1": "",
            "column2": "Jar of Radishes",
            "column3": "0.5",
            "column4": "60",
            "column5": "90",
            "column6": "60",
            "column7": "120",
            "column8": "Base.CannedRedRadish"
        },
        {
            "column1": "",
            "column2": "Jar of Tomatoes",
            "column3": "0.5",
            "column4": "60",
            "column5": "90",
            "column6": "60",
            "column7": "120",
            "column8": "Base.CannedTomato"
        }
    ])";
    };

    struct Evolvedrecipe {
        const char* jsonData = R"(
    [
        {
            "column1": "",
            "column2": "Burger",
            "column3": "0.3",
            "column4": "-20",
            "column5": "-",
            "column6": "-10",
            "column7": "-",
            "column8": "3",
            "column9": "5",
            "column10": "-",
            "column11": "-",
            "column12": "Base.BurgerRecipe"
        },
        {
            "column1": "",
            "column2": "Burrito",
            "column3": "0.1",
            "column4": "-5",
            "column5": "-",
            "column6": "-",
            "column7": "-",
            "column8": "3",
            "column9": "5",
            "column10": "-",
            "column11": "-",
            "column12": "Base.BurritoRecipe"
        },
        {
            "column1": "",
            "column2": "Cake",
            "column3": "0.2",
            "column4": "-15",
            "column5": "-",
            "column6": "-10",
            "column7": "-",
            "column8": "4",
            "column9": "9",
            "column10": "40",
            "column11": "110",
            "column12": "Base.CakeRaw"
        },
        {
            "column1": "",
            "column2": "Hot Drink",
            "column3": "0.5",
            "column4": "-",
            "column5": "-20",
            "column6": "-10",
            "column7": "-",
            "column8": "-",
            "column9": "-",
            "column10": "10",
            "column11": "50",
            "column12": "Base.HotDrink"
        },
        {
            "column1": "",
            "column2": "Hot Drink",
            "column3": "0.5",
            "column4": "-",
            "column5": "-20",
            "column6": "-10",
            "column7": "-",
            "column8": "-",
            "column9": "-",
            "column10": "10",
            "column11": "50",
            "column12": "Base.HotDrinkRed"
        },
        {
            "column1": "",
            "column2": "Hot Drink",
            "column3": "0.5",
            "column4": "-",
            "column5": "-20",
            "column6": "-10",
            "column7": "-",
            "column8": "-",
            "column9": "-",
            "column10": "10",
            "column11": "50",
            "column12": "Base.HotDrinkWhite"
        },
        {
            "column1": "",
            "column2": "Hot Drink",
            "column3": "0.5",
            "column4": "-",
            "column5": "-20",
            "column6": "-10",
            "column7": "-",
            "column8": "-",
            "column9": "-",
            "column10": "10",
            "column11": "50",
            "column12": "Base.HotDrinkSpiffo"
        },
        {
            "column1": "",
            "column2": "Muffin Baking Tray",
            "column3": "1.5",
            "column4": "-30",
            "column5": "-",
            "column6": "-",
            "column7": "-",
            "column8": "3",
            "column9": "10",
            "column10": "30",
            "column11": "60",
            "column12": "Base.BakingTray_Muffin_Recipe"
        },
        {
            "column1": "",
            "column2": "Recipe Ingredients",
            "column3": "0.1",
            "column4": "-20",
            "column5": "-",
            "column6": "-",
            "column7": "-",
            "column8": "14",
            "column9": "21",
            "column10": "-",
            "column11": "-",
            "column12": "Base.EggOmelette"
        },
        {
            "column1": "",
            "column2": "Pancakes",
            "column3": "0.3",
            "column4": "-20",
            "column5": "-",
            "column6": "+10",
            "column7": "-",
            "column8": "3",
            "column9": "5",
            "column10": "10",
            "column11": "30",
            "column12": "Base.PancakesCraft"
        },
        {
            "column1": "",
            "column2": "Pasta (Cooking Pot) ",
            "column3": "3",
            "column4": "-",
            "column5": "-",
            "column6": "-",
            "column7": "-",
            "column8": "3",
            "column9": "5",
            "column10": "20",
            "column11": "50",
            "column12": "Base.PastaPot"
        },
        {
            "column1": "",
            "column2": "Pasta (Saucepan) ",
            "column3": "3",
            "column4": "-",
            "column5": "-",
            "column6": "-",
            "column7": "-",
            "column8": "3",
            "column9": "5",
            "column10": "20",
            "column11": "50",
            "column12": "Base.PastaPan"
        },
        {
            "column1": "",
            "column2": "Pie",
            "column3": "0.2",
            "column4": "-15",
            "column5": "-",
            "column6": "-10",
            "column7": "-",
            "column8": "4",
            "column9": "9",
            "column10": "40",
            "column11": "110",
            "column12": "Base.PieWholeRaw"
        },
        {
            "column1": "",
            "column2": "Rice (Cooking Pot) ",
            "column3": "3",
            "column4": "-",
            "column5": "-",
            "column6": "-",
            "column7": "-",
            "column8": "3",
            "column9": "5",
            "column10": "20",
            "column11": "50",
            "column12": "Base.RicePot"
        },
        {
            "column1": "",
            "column2": "Rice (Saucepan) ",
            "column3": "3",
            "column4": "-",
            "column5": "-",
            "column6": "-",
            "column7": "-",
            "column8": "3",
            "column9": "5",
            "column10": "20",
            "column11": "50",
            "column12": "Base.RicePan"
        },
        {
            "column1": "",
            "column2": "Roasted Vegetables",
            "column3": "1.3",
            "column4": "-",
            "column5": "-",
            "column6": "-",
            "column7": "-",
            "column8": "3",
            "column9": "5",
            "column10": "-",
            "column11": "-",
            "column12": "Base.PanFriedVegetables2"
        },
        {
            "column1": "",
            "column2": "Salad",
            "column3": "0.5",
            "column4": "-60",
            "column5": "-",
            "column6": "-",
            "column7": "-5",
            "column8": "2",
            "column9": "3",
            "column10": "-",
            "column11": "-",
            "column12": "farming.Salad"
        },
        {
            "column1": "",
            "column2": "Salad (Fruit) ",
            "column3": "0.7",
            "column4": "-60",
            "column5": "-",
            "column6": "-",
            "column7": "-",
            "column8": "2",
            "column9": "3",
            "column10": "-",
            "column11": "-",
            "column12": "Base.FruitSalad"
        },
        {
            "column1": "",
            "column2": "Sandwich (Bread) ",
            "column3": "0.2",
            "column4": "-10",
            "column5": "-",
            "column6": "-",
            "column7": "-",
            "column8": "3",
            "column9": "6",
            "column10": "-",
            "column11": "-",
            "column12": "Base.Sandwich"
        },
        {
            "column1": "",
            "column2": "Sandwich (Baguette) ",
            "column3": "0.2",
            "column4": "-10",
            "column5": "-",
            "column6": "-",
            "column7": "-",
            "column8": "3",
            "column9": "6",
            "column10": "-",
            "column11": "-",
            "column12": "Base.BaguetteSandwich"
        },
        {
            "column1": "",
            "column2": "Soup",
            "column3": "4",
            "column4": "-40",
            "column5": "-40",
            "column6": "-20",
            "column7": "-",
            "column8": "3",
            "column9": "5",
            "column10": "50",
            "column11": "100",
            "column12": "Base.PotOfSoupRecipe"
        },
        {
            "column1": "",
            "column2": "Stew",
            "column3": "4",
            "column4": "-40",
            "column5": "-40",
            "column6": "-20",
            "column7": "-",
            "column8": "3",
            "column9": "5",
            "column10": "70",
            "column11": "140",
            "column12": "Base.PotOfStew"
        },
        {
            "column1": "",
            "column2": "Stir Fry (Frying Pan) ",
            "column3": "1.2",
            "column4": "-",
            "column5": "-",
            "column6": "-",
            "column7": "-",
            "column8": "3",
            "column9": "5",
            "column10": "-",
            "column11": "-",
            "column12": "Base.PanFriedVegetables"
        },
        {
            "column1": "",
            "column2": "Stir Fry (Griddle Pan) ",
            "column3": "1.2",
            "column4": "-",
            "column5": "-",
            "column6": "-",
            "column7": "-",
            "column8": "3",
            "column9": "5",
            "column10": "-",
            "column11": "-",
            "column12": "Base.GriddlePanFriedVegetables"
        },
        {
            "column1": "",
            "column2": "Taco",
            "column3": "0.3",
            "column4": "-25",
            "column5": "-",
            "column6": "-10",
            "column7": "-",
            "column8": "3",
            "column9": "5",
            "column10": "-",
            "column11": "-",
            "column12": "Base.Taco"
        },
        {
            "column1": "",
            "column2": "Waffles",
            "column3": "0.3",
            "column4": "-15",
            "column5": "-",
            "column6": "-10",
            "column7": "-",
            "column8": "3",
            "column9": "5",
            "column10": "-",
            "column11": "-",
            "column12": "Base.WafflesRecipe"
        }
    ])";
    };

    struct Preparedorcooked {
        const char* jsonData = R"(
    [
        {
            "column1": "",
            "column2": "Boiled Egg",
            "column3": "0.1",
            "column4": "-10",
            "column5": "-",
            "column6": "-",
            "column7": "-",
            "column8": "14",
            "column9": "21",
            "column10": "5",
            "column11": "20",
            "column12": "Base.EggBoiled"
        },
        {
            "column1": "",
            "column2": "Bowl of Beans",
            "column3": "1.5",
            "column4": "-25",
            "column5": "-",
            "column6": "+10",
            "column7": "-",
            "column8": "2",
            "column9": "4",
            "column10": "20",
            "column11": "40",
            "column12": "Base.BeanBowl"
        },
        {
            "column1": "",
            "column2": "Bowl of Cereal",
            "column3": "0.8",
            "column4": "-8",
            "column5": "-20",
            "column6": "-",
            "column7": "-",
            "column8": "1",
            "column9": "1",
            "column10": "-",
            "column11": "-",
            "column12": "Base.CerealBowl"
        },
        {
            "column1": "",
            "column2": "Bowl of Oatmeal",
            "column3": "0.8",
            "column4": "-10",
            "column5": "-",
            "column6": "-",
            "column7": "-",
            "column8": "1",
            "column9": "1",
            "column10": "-",
            "column11": "-",
            "column12": "Base.Oatmeal"
        },
        {
            "column1": "",
            "column2": "Bowl of Pasta",
            "column3": "1.0",
            "column4": "?",
            "column5": "?",
            "column6": "?",
            "column7": "?",
            "column8": "-",
            "column9": "-",
            "column10": "10",
            "column11": "40",
            "column12": "Base.PastaBowl"
        },
        {
            "column1": "",
            "column2": "Bowl of Rice",
            "column3": "1.0",
            "column4": "?",
            "column5": "?",
            "column6": "?",
            "column7": "?",
            "column8": "-",
            "column9": "-",
            "column10": "10",
            "column11": "40",
            "column12": "Base.RiceBowl"
        },
        {
            "column1": "",
            "column2": "Bowl of Soup",
            "column3": "1.0",
            "column4": "-15",
            "column5": "-15",
            "column6": "-20",
            "column7": "-",
            "column8": "1",
            "column9": "3",
            "column10": "15",
            "column11": "25",
            "column12": "Base.SoupBowl"
        },
        {
            "column1": "",
            "column2": "Bowl of Stew",
            "column3": "1.0",
            "column4": "-15",
            "column5": "-15",
            "column6": "-20",
            "column7": "-",
            "column8": "2",
            "column9": "4",
            "column10": "15",
            "column11": "25",
            "column12": "Base.StewBowl"
        },
        {
            "column1": "",
            "column2": "Bread Dough",
            "column3": "0.3",
            "column4": "-15",
            "column5": "+20",
            "column6": "-20",
            "column7": "-",
            "column8": "3",
            "column9": "6",
            "column10": "40",
            "column11": "80",
            "column12": "Base.BreadDough"
        },
        {
            "column1": "",
            "column2": "Cake Batter",
            "column3": "0.3",
            "column4": "-",
            "column5": "-",
            "column6": "-",
            "column7": "-",
            "column8": "-",
            "column9": "-",
            "column10": "-",
            "column11": "-",
            "column12": "Base.CakeBatter"
        },
        {
            "column1": "",
            "column2": "Cake Preparation",
            "column3": "0.5",
            "column4": "-30",
            "column5": "-",
            "column6": "-20",
            "column7": "-",
            "column8": "-",
            "column9": "-",
            "column10": "-",
            "column11": "-",
            "column12": "Base.CakePrep"
        },
        {
            "column1": "",
            "column2": "Cake Slice",
            "column3": "0.2",
            "column4": "-7",
            "column5": "-",
            "column6": "-10",
            "column7": "-",
            "column8": "3",
            "column9": "5",
            "column10": "-",
            "column11": "-",
            "column12": "Base.CakeSlice"
        },
        {
            "column1": "",
            "column2": "Fish Sushi",
            "column3": "0.1",
            "column4": "-12",
            "column5": "-",
            "column6": "-",
            "column7": "-",
            "column8": "2",
            "column9": "4",
            "column10": "-",
            "column11": "-",
            "column12": "Base.SushiFish"
        },
        {
            "column1": "",
            "column2": "Fried Onion Rings",
            "column3": "0.1",
            "column4": "-10",
            "column5": "-",
            "column6": "-",
            "column7": "-",
            "column8": "4",
            "column9": "7",
            "column10": "10",
            "column11": "30",
            "column12": "Base.FriedOnionRingsCraft"
        },
        {
            "column1": "",
            "column2": "Fried Shrimp",
            "column3": "0.1",
            "column4": "-15",
            "column5": "-",
            "column6": "-",
            "column7": "-",
            "column8": "2",
            "column9": "4",
            "column10": "10",
            "column11": "30",
            "column12": "Base.ShrimpFriedCraft"
        },
        {
            "column1": "",
            "column2": "Gravy",
            "column3": "0.2",
            "column4": "-7",
            "column5": "-",
            "column6": "-",
            "column7": "-",
            "column8": "-",
            "column9": "-",
            "column10": "-",
            "column11": "-",
            "column12": "Base.Gravy"
        },
        {
            "column1": "",
            "column2": "Jack-o'-lantern",
            "column3": "1.0",
            "column4": "-40",
            "column5": "-",
            "column6": "-",
            "column7": "-",
            "column8": "5",
            "column9": "8",
            "column10": "-",
            "column11": "-",
            "column12": "Base.HalloweenPumpkin"
        },
        {
            "column1": "",
            "column2": "Maki",
            "column3": "0.1",
            "column4": "-8",
            "column5": "-",
            "column6": "-",
            "column7": "-",
            "column8": "2",
            "column9": "4",
            "column10": "-",
            "column11": "-",
            "column12": "Base.Maki"
        },
        {
            "column1": "",
            "column2": "Recipe Ingredients",
            "column3": "0.1",
            "column4": "-7",
            "column5": "-",
            "column6": "-10",
            "column7": "-",
            "column8": "5",
            "column9": "8",
            "column10": "-",
            "column11": "-",
            "column12": "Base.MuffinGeneric"
        },
        {
            "column1": "",
            "column2": "Muffin Baking Tray",
            "column3": "1.5",
            "column4": "-30",
            "column5": "-",
            "column6": "-",
            "column7": "-",
            "column8": "3",
            "column9": "10",
            "column10": "30",
            "column11": "60",
            "column12": "Base.BakingTray_Muffin"
        },
        {
            "column1": "",
            "column2": "Noodle Soup",
            "column3": "1.0",
            "column4": "-10",
            "column5": "-",
            "column6": "-20",
            "column7": "-",
            "column8": "1",
            "column9": "3",
            "column10": "10",
            "column11": "20",
            "column12": "Base.NoodleSoup"
        },
        {
            "column1": "",
            "column2": "Pie Dough",
            "column3": "0.3",
            "column4": "-",
            "column5": "-",
            "column6": "-",
            "column7": "-",
            "column8": "-",
            "column9": "-",
            "column10": "-",
            "column11": "-",
            "column12": "Base.PieDough"
        },
        {
            "column1": "",
            "column2": "Pie Preparation",
            "column3": "0.5",
            "column4": "-30",
            "column5": "-",
            "column6": "-20",
            "column7": "-",
            "column8": "-",
            "column9": "-",
            "column10": "-",
            "column11": "-",
            "column12": "Base.PiePrep"
        },
        {
            "column1": "",
            "column2": "Pie Slice",
            "column3": "0.5",
            "column4": "-30",
            "column5": "-",
            "column6": "-",
            "column7": "-",
            "column8": "5",
            "column9": "8",
            "column10": "-",
            "column11": "-",
            "column12": "Base.Pie"
        },
        {
            "column1": "",
            "column2": "Poached Egg",
            "column3": "0.1",
            "column4": "-10",
            "column5": "-",
            "column6": "-",
            "column7": "-",
            "column8": "14",
            "column9": "21",
            "column10": "0",
            "column11": "10",
            "column12": "Base.EggPoached"
        },
        {
            "column1": "",
            "column2": "Pot of Soup",
            "column3": "4",
            "column4": "-30",
            "column5": "-30",
            "column6": "-20",
            "column7": "-",
            "column8": "3",
            "column9": "5",
            "column10": "50",
            "column11": "100",
            "column12": "Base.PotOfSoup"
        },
        {
            "column1": "",
            "column2": "Scrambled Egg",
            "column3": "0.1",
            "column4": "-20",
            "column5": "-",
            "column6": "-",
            "column7": "-",
            "column8": "14",
            "column9": "21",
            "column10": "-",
            "column11": "-",
            "column12": "Base.EggScrambled"
        }
    ])";
    };

    struct Spice {
        const char* jsonData = R"(
    [
        {
            "column1": "",
            "column2": "Brown Sugar",
            "column3": "0.6",
            "column4": "-30",
            "column5": "-",
            "column6": "-",
            "column7": "Base.SugarBrown"
        },
        {
            "column1": "",
            "column2": "Hot Sauce",
            "column3": "0.2",
            "column4": "-15",
            "column5": "-",
            "column6": "+20",
            "column7": "Base.Hotsauce"
        },
        {
            "column1": "",
            "column2": "Ketchup",
            "column3": "0.2",
            "column4": "-20",
            "column5": "-",
            "column6": "+30",
            "column7": "Base.Ketchup"
        },
        {
            "column1": "",
            "column2": "Maple Syrup",
            "column3": "0.2",
            "column4": "-45",
            "column5": "-",
            "column6": "-20",
            "column7": "Base.MapleSyrup"
        },
        {
            "column1": "",
            "column2": "Marinara",
            "column3": "0.2",
            "column4": "-10",
            "column5": "-",
            "column6": "-",
            "column7": "Base.Marinara"
        },
        {
            "column1": "",
            "column2": "Mayonnaise",
            "column3": "0.5",
            "column4": "-30",
            "column5": "-",
            "column6": "+5",
            "column7": "farming.MayonnaiseFull"
        },
        {
            "column1": "",
            "column2": "Mustard",
            "column3": "0.2",
            "column4": "-20",
            "column5": "-",
            "column6": "+30",
            "column7": "Base.Mustard"
        },
        {
            "column1": "",
            "column2": "Olive Oil",
            "column3": "0.2",
            "column4": "-30",
            "column5": "-",
            "column6": "+50",
            "column7": "Base.OilOlive"
        },
        {
            "column1": "",
            "column2": "Pepper",
            "column3": "0.2",
            "column4": "-10",
            "column5": "+20",
            "column6": "+20",
            "column7": "Base.Pepper"
        },
        {
            "column1": "",
            "column2": "Rice Vinegar",
            "column3": "0.2",
            "column4": "-20",
            "column5": "-",
            "column6": "50",
            "column7": "Base.RiceVinegar"
        },
        {
            "column1": "",
            "column2": "Salt",
            "column3": "0.2",
            "column4": "-10",
            "column5": "+20",
            "column6": "+20",
            "column7": "Base.Salt"
        },
        {
            "column1": "",
            "column2": "Soy Sauce",
            "column3": "0.2",
            "column4": "-10",
            "column5": "+40",
            "column6": "+50",
            "column7": "Base.Soysauce"
        },
        {
            "column1": "",
            "column2": "Sugar",
            "column3": "0.6",
            "column4": "-30",
            "column5": "-",
            "column6": "-",
            "column7": "Base.Sugar"
        },
        {
            "column1": "",
            "column2": "Vegetable Oil",
            "column3": "0.2",
            "column4": "-30",
            "column5": "-",
            "column6": "+50",
            "column7": "Base.OilVegetable"
        },
        {
            "column1": "",
            "column2": "Wasabi",
            "column3": "0.2",
            "column4": "-10",
            "column5": "+20",
            "column6": "-",
            "column7": "Base.Wasabi"
        }
    ])";
    };

    struct Drink {
        const char* jsonData = R"(
    [
        {
            "column1": "",
            "column2": "Beer Bottle",
            "column3": "0.4",
            "column4": "-9",
            "column5": "-13",
            "column6": "-16",
            "column7": "-",
            "column8": "-",
            "column9": "",
            "column10": "-",
            "column11": "-",
            "column12": "-",
            "column13": "Base.BeerBottle"
        },
        {
            "column1": "",
            "column2": "Beer Can",
            "column3": "0.3",
            "column4": "-8",
            "column5": "-13",
            "column6": "-15",
            "column7": "-",
            "column8": "-",
            "column9": "",
            "column10": "-",
            "column11": "-",
            "column12": "-",
            "column13": "Base.BeerCan"
        },
        {
            "column1": "",
            "column2": "Bleach",
            "column3": "0.3",
            "column4": "-",
            "column5": "-60",
            "column6": "+99",
            "column7": "-",
            "column8": "-",
            "column9": "-",
            "column10": "+120",
            "column11": "-",
            "column12": "-",
            "column13": "Base.Bleach"
        },
        {
            "column1": "",
            "column2": "Bourbon",
            "column3": "0.7",
            "column4": "-20",
            "column5": "-20",
            "column6": "-20",
            "column7": "-",
            "column8": "-",
            "column9": "",
            "column10": "-",
            "column11": "-",
            "column12": "-",
            "column13": "Base.WhiskeyFull"
        },
        {
            "column1": "",
            "column2": "Cold Cuppa",
            "column3": "1",
            "column4": "-5",
            "column5": "-50",
            "column6": "-5",
            "column7": "-",
            "column8": "-",
            "column9": "-",
            "column10": "-",
            "column11": "-",
            "column12": "-",
            "column13": "Base.ColdCuppaBase.ColdDrinkRedBase.ColdDrinkWhiteBase.ColdDrinkSpiffo"
        },
        {
            "column1": "",
            "column2": "Hot Cuppa",
            "column3": "1",
            "column4": "-5",
            "column5": "-50",
            "column6": "-5",
            "column7": "-10",
            "column8": "-5",
            "column9": "-",
            "column10": "-",
            "column11": "-",
            "column12": "-",
            "column13": "Base.Mugfulll"
        },
        {
            "column1": "",
            "column2": "Hot Teacup",
            "column3": "0.5",
            "column4": "-",
            "column5": "-20",
            "column6": "-10",
            "column7": "-",
            "column8": "-",
            "column9": "-",
            "column10": "-",
            "column11": "-",
            "column12": "-",
            "column13": "Base.HotDrinkTea"
        },
        {
            "column1": "",
            "column2": "Juice Box",
            "column3": "0.1",
            "column4": "-2",
            "column5": "-13",
            "column6": "-10",
            "column7": "-",
            "column8": "-",
            "column9": "-",
            "column10": "-",
            "column11": "-",
            "column12": "-",
            "column13": "Base.JuiceBox"
        },
        {
            "column1": "",
            "column2": "Milk",
            "column3": "1",
            "column4": "-10",
            "column5": "-100",
            "column6": "-",
            "column7": "-",
            "column8": "-",
            "column9": "-",
            "column10": "-",
            "column11": "4",
            "column12": "7",
            "column13": "Base.Milk"
        },
        {
            "column1": "",
            "column2": "Orange Soda",
            "column3": "0.8",
            "column4": "-12",
            "column5": "-85",
            "column6": "-10",
            "column7": "-",
            "column8": "-",
            "column9": "-",
            "column10": "-",
            "column11": "-",
            "column12": "-",
            "column13": "Base.PopBottle"
        },
        {
            "column1": "",
            "column2": "Pop",
            "column3": "0.3",
            "column4": "-8",
            "column5": "-60",
            "column6": "-10",
            "column7": "-",
            "column8": "-",
            "column9": "-",
            "column10": "-",
            "column11": "-",
            "column12": "-",
            "column13": "Base.Pop2"
        },
        {
            "column1": "",
            "column2": "Pop",
            "column3": "0.3",
            "column4": "-8",
            "column5": "-60",
            "column6": "-10",
            "column7": "-",
            "column8": "-",
            "column9": "-",
            "column10": "-",
            "column11": "-",
            "column12": "-",
            "column13": "Base.Pop"
        },
        {
            "column1": "",
            "column2": "Pop",
            "column3": "0.3",
            "column4": "-8",
            "column5": "-60",
            "column6": "-10",
            "column7": "-",
            "column8": "-",
            "column9": "-",
            "column10": "-",
            "column11": "-",
            "column12": "-",
            "column13": "Base.Pop3"
        },
        {
            "column1": "",
            "column2": "Red Wine",
            "column3": "1",
            "column4": "-20",
            "column5": "-20",
            "column6": "-20",
            "column7": "-",
            "column8": "-",
            "column9": "",
            "column10": "-",
            "column11": "-",
            "column12": "-",
            "column13": "Base.Wine2"
        },
        {
            "column1": "",
            "column2": "White Wine",
            "column3": "1",
            "column4": "-20",
            "column5": "-20",
            "column6": "-20",
            "column7": "-",
            "column8": "-",
            "column9": "",
            "column10": "-",
            "column11": "-",
            "column12": "-",
            "column13": "Base.Wine"
        }
    ])";
    };

    struct Refillable {
        const char* jsonData = R"(
    [
        {
            "column1": "",
            "column2": "Bleach Bottle with Water",
            "column3": "1.6",
            "column4": "-100",
            "column5": "10",
            "column6": "Base.WaterBleachBottle"
        },
        {
            "column1": "",
            "column2": "Bowl of Water",
            "column3": "1.2",
            "column4": "-20",
            "column5": "2",
            "column6": "Base.WaterBowl"
        },
        {
            "column1": "",
            "column2": "Bucket of Water",
            "column3": "4",
            "column4": "-323",
            "column5": "32.3",
            "column6": "Base.BucketWaterFull"
        },
        {
            "column1": "",
            "column2": "Cooking Pot with Water",
            "column3": "3",
            "column4": "-250",
            "column5": "25",
            "column6": "Base.WaterPot"
        },
        {
            "column1": "",
            "column2": "Gardening Spray Can (Full) ",
            "column3": "1",
            "column4": "-100",
            "column5": "10",
            "column6": "farming.GardeningSprayFull"
        },
        {
            "column1": "",
            "column2": "Kettle of Water",
            "column3": "2",
            "column4": "-143",
            "column5": "14.3",
            "column6": "Base.FullKettle"
        },
        {
            "column1": "",
            "column2": "Mug of Water",
            "column3": "0.8",
            "column4": "-10",
            "column5": "1",
            "column6": "Base.WaterMug"
        },
        {
            "column1": "",
            "column2": "Saucepan with Water",
            "column3": "2",
            "column4": "-250",
            "column5": "25",
            "column6": "Base.WaterSaucepan"
        },
        {
            "column1": "",
            "column2": "Teacup of Water",
            "column3": "0.4",
            "column4": "-10",
            "column5": "1",
            "column6": "Base.WaterTeacup"
        },
        {
            "column1": "",
            "column2": "Water Bottle",
            "column3": "0.8",
            "column4": "-100",
            "column5": "10",
            "column6": "Base.WaterBottleFull"
        },
        {
            "column1": "",
            "column2": "Water Bottle (Beer) ",
            "column3": "0.4",
            "column4": "-62.5",
            "column5": "6.25",
            "column6": "Base.BeerBottle"
        },
        {
            "column1": "",
            "column2": "Water Bottle (Bourbon) ",
            "column3": "1.4",
            "column4": "-125",
            "column5": "12.5",
            "column6": "Base.WhiskeyWaterFull"
        },
        {
            "column1": "",
            "column2": "Water Bottle (Mayonnaise) ",
            "column3": "0.5",
            "column4": "-67",
            "column5": "6.7",
            "column6": "farming.MayonnaiseWaterFull"
        },
        {
            "column1": "",
            "column2": "Water Bottle (Orange Soda) ",
            "column3": "0.8",
            "column4": "-100",
            "column5": "10",
            "column6": "Base.WaterPopBottle"
        },
        {
            "column1": "",
            "column2": "Water Bottle (Remoulade) ",
            "column3": "0.5",
            "column4": "-67",
            "column5": "6.7",
            "column6": "farming.RemouladeWaterFull"
        },
        {
            "column1": "",
            "column2": "Water Bottle (White Wine) ",
            "column3": "1",
            "column4": "-125",
            "column5": "12.5",
            "column6": "Base.WineWaterFull"
        },
        {
            "column1": "",
            "column2": "Watering Can (Full) ",
            "column3": "4",
            "column4": "-400",
            "column5": "40",
            "column6": "farming.WateredCanFull"
        }
    ])";
    };

    struct Fish {
        const char* jsonData = R"(
    [
        {
            "column1": "",
            "column2": "Bass",
            "column3": "1.1",
            "column4": "-15",
            "column5": "+20",
            "column6": "-",
            "column7": "4",
            "column8": "8",
            "column9": "20",
            "column10": "60",
            "column11": "Base.Bass"
        },
        {
            "column1": "",
            "column2": "Catfish",
            "column3": "0.4",
            "column4": "-15",
            "column5": "+20",
            "column6": "-",
            "column7": "4",
            "column8": "8",
            "column9": "20",
            "column10": "60",
            "column11": "Base.Catfish"
        },
        {
            "column1": "",
            "column2": "Crappie",
            "column3": "0.4",
            "column4": "-15",
            "column5": "+20",
            "column6": "-",
            "column7": "4",
            "column8": "8",
            "column9": "20",
            "column10": "60",
            "column11": "Base.Crappie"
        },
        {
            "column1": "",
            "column2": "Crayfish",
            "column3": "0.2",
            "column4": "-10",
            "column5": "-",
            "column6": "?",
            "column7": "2",
            "column8": "4",
            "column9": "30",
            "column10": "60",
            "column11": "Base.Crayfish"
        },
        {
            "column1": "",
            "column2": "Fish Fillet",
            "column3": "0.2",
            "column4": "-25",
            "column5": "-",
            "column6": "-",
            "column7": "2",
            "column8": "4",
            "column9": "20",
            "column10": "50",
            "column11": "Base.FishFillet"
        },
        {
            "column1": "",
            "column2": "Fish Roe",
            "column3": "0.1",
            "column4": "-10",
            "column5": "-",
            "column6": "-",
            "column7": "14",
            "column8": "21",
            "column9": "-",
            "column10": "-",
            "column11": "Base.FishRoe"
        },
        {
            "column1": "",
            "column2": "Little Bait Fish",
            "column3": "0.1",
            "column4": "-5",
            "column5": "+20",
            "column6": "-",
            "column7": "4",
            "column8": "8",
            "column9": "20",
            "column10": "60",
            "column11": "Base.BaitFish"
        },
        {
            "column1": "",
            "column2": "Lobster",
            "column3": "0.4",
            "column4": "-40",
            "column5": "-",
            "column6": "?",
            "column7": "2",
            "column8": "4",
            "column9": "30",
            "column10": "60",
            "column11": "Base.Lobster"
        },
        {
            "column1": "",
            "column2": "Oysters",
            "column3": "0.1",
            "column4": "-5",
            "column5": "-",
            "column6": "-",
            "column7": "2",
            "column8": "4",
            "column9": "10",
            "column10": "25",
            "column11": "Base.Oysters"
        },
        {
            "column1": "",
            "column2": "Perch",
            "column3": "0.4",
            "column4": "-15",
            "column5": "+20",
            "column6": "-",
            "column7": "4",
            "column8": "8",
            "column9": "30",
            "column10": "60",
            "column11": "Base.Perch"
        },
        {
            "column1": "",
            "column2": "Pike",
            "column3": "0.4",
            "column4": "-15",
            "column5": "+20",
            "column6": "-",
            "column7": "4",
            "column8": "8",
            "column9": "20",
            "column10": "60",
            "column11": "Base.Pike"
        },
        {
            "column1": "",
            "column2": "Salmon",
            "column3": "0.3",
            "column4": "-30",
            "column5": "+20",
            "column6": "-",
            "column7": "2",
            "column8": "4",
            "column9": "80",
            "column10": "130",
            "column11": "Base.Salmon"
        },
        {
            "column1": "",
            "column2": "Shrimp",
            "column3": "0.1",
            "column4": "-10",
            "column5": "-",
            "column6": "?",
            "column7": "2",
            "column8": "4",
            "column9": "10",
            "column10": "60",
            "column11": "Base.Shrimp"
        },
        {
            "column1": "",
            "column2": "Squid",
            "column3": "0.2",
            "column4": "-30",
            "column5": "-",
            "column6": "-",
            "column7": "2",
            "column8": "4",
            "column9": "-",
            "column10": "-",
            "column11": "Base.Squid"
        },
        {
            "column1": "",
            "column2": "Squid Calamari",
            "column3": "0.1",
            "column4": "-10",
            "column5": "-",
            "column6": "-",
            "column7": "2",
            "column8": "4",
            "column9": "10",
            "column10": "20",
            "column11": "Base.SquidCalamari"
        },
        {
            "column1": "",
            "column2": "Sunfish",
            "column3": "0.4",
            "column4": "-15",
            "column5": "+20",
            "column6": "-",
            "column7": "4",
            "column8": "8",
            "column9": "20",
            "column10": "60",
            "column11": "Base.Panfish"
        },
        {
            "column1": "",
            "column2": "Trout",
            "column3": "0.4",
            "column4": "-15",
            "column5": "+20",
            "column6": "-",
            "column7": "4",
            "column8": "8",
            "column9": "20",
            "column10": "60",
            "column11": "Base.Trout"
        }
    ])";
    };

    struct Game {
        const char* jsonData = R"(
    [
        {
            "column1": "",
            "column2": "Dead Bird",
            "column3": "0.2",
            "column4": "-20",
            "column5": "-",
            "column6": "+20",
            "column7": "?",
            "column8": "8",
            "column9": "12",
            "column10": "25",
            "column11": "60",
            "column12": "Base.DeadBird"
        },
        {
            "column1": "",
            "column2": "Dead Mouse",
            "column3": "0.2",
            "column4": "-10",
            "column5": "-",
            "column6": "+30",
            "column7": "?",
            "column8": "6",
            "column9": "10",
            "column10": "15",
            "column11": "50",
            "column12": "Base.DeadMouse"
        },
        {
            "column1": "",
            "column2": "Dead Rabbit",
            "column3": "0.2",
            "column4": "-30",
            "column5": "-",
            "column6": "+20",
            "column7": "?",
            "column8": "8",
            "column9": "12",
            "column10": "25",
            "column11": "60",
            "column12": "Base.DeadRabbit"
        },
        {
            "column1": "",
            "column2": "Dead Rat",
            "column3": "0.2",
            "column4": "-15",
            "column5": "-",
            "column6": "+30",
            "column7": "?",
            "column8": "6",
            "column9": "10",
            "column10": "20",
            "column11": "60",
            "column12": "Base.DeadRat"
        },
        {
            "column1": "",
            "column2": "Dead Squirrel",
            "column3": "0.2",
            "column4": "-30",
            "column5": "-",
            "column6": "+20",
            "column7": "?",
            "column8": "8",
            "column9": "12",
            "column10": "25",
            "column11": "60",
            "column12": "Base.DeadSquirrel"
        },
        {
            "column1": "",
            "column2": "Rabbit Meat",
            "column3": "0.3",
            "column4": "-30",
            "column5": "-",
            "column6": "-",
            "column7": "?",
            "column8": "2",
            "column9": "4",
            "column10": "25",
            "column11": "70",
            "column12": "Base.Rabbitmeat"
        },
        {
            "column1": "",
            "column2": "Rodent Meat",
            "column3": "0.3",
            "column4": "-15",
            "column5": "-",
            "column6": "-",
            "column7": "?",
            "column8": "2",
            "column9": "4",
            "column10": "20",
            "column11": "70",
            "column12": "Base.Smallanimalmeat"
        },
        {
            "column1": "",
            "column2": "Small Bird Meat",
            "column3": "0.3",
            "column4": "-15",
            "column5": "-",
            "column6": "-",
            "column7": "?",
            "column8": "2",
            "column9": "4",
            "column10": "20",
            "column11": "70",
            "column12": "Base.Smallbirdmeat"
        }
    ])";
    };

    struct Protein {
        const char* jsonData = R"(
    [
        {
            "column1": "",
            "column2": "Bacon",
            "column3": "0.3",
            "column4": "-12",
            "column5": "-",
            "column6": "?",
            "column7": "3",
            "column8": "5",
            "column9": "20",
            "column10": "50",
            "column11": "farming.Bacon"
        },
        {
            "column1": "",
            "column2": "Bacon Bits",
            "column3": "0.1",
            "column4": "-1",
            "column5": "-",
            "column6": "?",
            "column7": "1",
            "column8": "1",
            "column9": "15",
            "column10": "30",
            "column11": "farming.BaconBits"
        },
        {
            "column1": "",
            "column2": "Bacon Strips",
            "column3": "0.1",
            "column4": "-4",
            "column5": "-",
            "column6": "?",
            "column7": "1",
            "column8": "2",
            "column9": "15",
            "column10": "30",
            "column11": "farming.BaconRashers"
        },
        {
            "column1": "",
            "column2": "Baloney",
            "column3": "0.2",
            "column4": "-30",
            "column5": "-",
            "column6": "-",
            "column7": "2",
            "column8": "4",
            "column9": "-",
            "column10": "-",
            "column11": "Base.Baloney"
        },
        {
            "column1": "",
            "column2": "Baloney Slices",
            "column3": "0.4",
            "column4": "-5",
            "column5": "-",
            "column6": "-",
            "column7": "2",
            "column8": "4",
            "column9": "-",
            "column10": "-",
            "column11": "Base.BaloneySlice"
        },
        {
            "column1": "",
            "column2": "Beef Jerky",
            "column3": "0.2",
            "column4": "-20",
            "column5": "-",
            "column6": "-",
            "column7": "-",
            "column8": "-",
            "column9": "-",
            "column10": "-",
            "column11": "Base.BeefJerky"
        },
        {
            "column1": "",
            "column2": "Chicken",
            "column3": "0.3",
            "column4": "-35",
            "column5": "-",
            "column6": "?",
            "column7": "2",
            "column8": "4",
            "column9": "30",
            "column10": "60",
            "column11": "Base.Chicken"
        },
        {
            "column1": "",
            "column2": "Chicken Foot",
            "column3": "0.1",
            "column4": "-12",
            "column5": "-",
            "column6": "-",
            "column7": "2",
            "column8": "4",
            "column9": "-",
            "column10": "-",
            "column11": "Base.ChickenFoot"
        },
        {
            "column1": "",
            "column2": "Dehydrated Meat Stick",
            "column3": "0.1",
            "column4": "-10",
            "column5": "-",
            "column6": "-",
            "column7": "-",
            "column8": "-",
            "column9": "-",
            "column10": "-",
            "column11": "Base.DehydratedMeatStick"
        },
        {
            "column1": "",
            "column2": "Egg",
            "column3": "0.1",
            "column4": "-10",
            "column5": "-",
            "column6": "-",
            "column7": "14",
            "column8": "21",
            "column9": "-",
            "column10": "-",
            "column11": "Base.Egg"
        },
        {
            "column1": "",
            "column2": "Egg Carton",
            "column3": "1",
            "column4": "-",
            "column5": "-",
            "column6": "-",
            "column7": "14",
            "column8": "21",
            "column9": "-",
            "column10": "-",
            "column11": "Base.EggCarton"
        },
        {
            "column1": "",
            "column2": "Frog Meat",
            "column3": "0.2",
            "column4": "-10",
            "column5": "-",
            "column6": "-",
            "column7": "4",
            "column8": "8",
            "column9": "10",
            "column10": "40",
            "column11": "Base.FrogMeat"
        },
        {
            "column1": "",
            "column2": "Ham",
            "column3": "1",
            "column4": "-60",
            "column5": "-",
            "column6": "-",
            "column7": "5",
            "column8": "10",
            "column9": "-",
            "column10": "-",
            "column11": "Base.Ham"
        },
        {
            "column1": "",
            "column2": "Ham Slice",
            "column3": "0.2",
            "column4": "-10",
            "column5": "-",
            "column6": "-",
            "column7": "3",
            "column8": "6",
            "column9": "-",
            "column10": "-",
            "column11": "Base.HamSlice"
        },
        {
            "column1": "",
            "column2": "Meat Patty",
            "column3": "0.3",
            "column4": "-40",
            "column5": "-",
            "column6": "?",
            "column7": "2",
            "column8": "4",
            "column9": "50",
            "column10": "70",
            "column11": "Base.MeatPatty"
        },
        {
            "column1": "",
            "column2": "Minced Meat",
            "column3": "0.3",
            "column4": "-40",
            "column5": "-",
            "column6": "?",
            "column7": "2",
            "column8": "4",
            "column9": "50",
            "column10": "70",
            "column11": "Base.MincedMeat"
        },
        {
            "column1": "",
            "column2": "Mutton Chop",
            "column3": "0.3",
            "column4": "-30",
            "column5": "-",
            "column6": "?",
            "column7": "2",
            "column8": "4",
            "column9": "50",
            "column10": "70",
            "column11": "Base.MuttonChop"
        },
        {
            "column1": "",
            "column2": "Pepperoni",
            "column3": "0.1",
            "column4": "-20",
            "column5": "-",
            "column6": "-",
            "column7": "15",
            "column8": "30",
            "column9": "-",
            "column10": "-",
            "column11": "Base.Pepperoni"
        },
        {
            "column1": "",
            "column2": "Pork Chop",
            "column3": "0.3",
            "column4": "-30",
            "column5": "-",
            "column6": "?",
            "column7": "2",
            "column8": "4",
            "column9": "50",
            "column10": "70",
            "column11": "Base.PorkChop"
        },
        {
            "column1": "",
            "column2": "Salami",
            "column3": "0.1",
            "column4": "-20",
            "column5": "-",
            "column6": "-",
            "column7": "10",
            "column8": "15",
            "column9": "-",
            "column10": "-",
            "column11": "Base.Salami"
        },
        {
            "column1": "",
            "column2": "Salami Slices",
            "column3": "0.02",
            "column4": "-10",
            "column5": "-",
            "column6": "-",
            "column7": "10",
            "column8": "15",
            "column9": "-",
            "column10": "-",
            "column11": "Base.SalamiSlice"
        },
        {
            "column1": "",
            "column2": "Sausage",
            "column3": "0.1",
            "column4": "-20",
            "column5": "-",
            "column6": "?",
            "column7": "2",
            "column8": "4",
            "column9": "50",
            "column10": "70",
            "column11": "Base.Sausage"
        },
        {
            "column1": "",
            "column2": "Steak",
            "column3": "0.3",
            "column4": "-40",
            "column5": "-",
            "column6": "?",
            "column7": "2",
            "column8": "4",
            "column9": "50",
            "column10": "70",
            "column11": "Base.Steak"
        },
        {
            "column1": "",
            "column2": "Tofu",
            "column3": "0.3",
            "column4": "-10",
            "column5": "-",
            "column6": "-",
            "column7": "6",
            "column8": "14",
            "column9": "-",
            "column10": "-",
            "column11": "Base.Tofu"
        }
    ])";
    };

    struct Leisure {
        const char* jsonData = R"(
    [
        {
            "column1": "",
            "column2": "Book",
            "column3": "0.5",
            "column4": "-40",
            "column5": "-40",
            "column6": "-50",
            "column7": "Base.Book"
        },
        {
            "column1": "",
            "column2": "Comic Book",
            "column3": "0.1",
            "column4": "-20",
            "column5": "-20",
            "column6": "-30",
            "column7": "Base.ComicBook"
        },
        {
            "column1": "",
            "column2": "HottieZ",
            "column3": "0.2",
            "column4": "-",
            "column5": "-50",
            "column6": "-40",
            "column7": "Base.HottieZ"
        },
        {
            "column1": "",
            "column2": "Magazine",
            "column3": "0.2",
            "column4": "-",
            "column5": "-15",
            "column6": "-20",
            "column7": "Base.Magazine"
        },
        {
            "column1": "",
            "column2": "Newspaper",
            "column3": "0.1",
            "column4": "-",
            "column5": "-15",
            "column6": "-15",
            "column7": "Base.Newspaper"
        }
    ])";
    };

    struct Map {
        const char* jsonData = R"(
    [
        {
            "column1": "",
            "column2": "March Ridge Map",
            "column3": "0.1",
            "column4": "Base.MarchRidgeMap"
        },
        {
            "column1": "",
            "column2": "Muldraugh Map",
            "column3": "0.1",
            "column4": "Base.MuldraughMap"
        },
        {
            "column1": "",
            "column2": "Riverside Map",
            "column3": "0.1",
            "column4": "Base.RiversideMap"
        },
        {
            "column1": "",
            "column2": "Rosewood Map",
            "column3": "0.1",
            "column4": "Base.RosewoodMap"
        },
        {
            "column1": "",
            "column2": "West Point Map",
            "column3": "0.1",
            "column4": "Base.WestpointMap"
        },
        {
            "column1": "",
            "column2": "Louisville Map 1",
            "column3": "0.1",
            "column4": "Base.LouisvilleMap1"
        },
        {
            "column1": "",
            "column2": "Louisville Map 2",
            "column3": "0.1",
            "column4": "Base.LouisvilleMap2"
        },
        {
            "column1": "",
            "column2": "Louisville Map 3",
            "column3": "0.1",
            "column4": "Base.LouisvilleMap3"
        },
        {
            "column1": "",
            "column2": "Louisville Map 4",
            "column3": "0.1",
            "column4": "Base.LouisvilleMap4"
        },
        {
            "column1": "",
            "column2": "Louisville Map 5",
            "column3": "0.1",
            "column4": "Base.LouisvilleMap5"
        },
        {
            "column1": "",
            "column2": "Louisville Map 6",
            "column3": "0.1",
            "column4": "Base.LouisvilleMap6"
        },
        {
            "column1": "",
            "column2": "Louisville Map 7",
            "column3": "0.1",
            "column4": "Base.LouisvilleMap7"
        },
        {
            "column1": "",
            "column2": "Louisville Map 8",
            "column3": "0.1",
            "column4": "Base.LouisvilleMap8"
        },
        {
            "column1": "",
            "column2": "Louisville Map 9",
            "column3": "0.1",
            "column4": "Base.LouisvilleMap9"
        }
    ])";
    };

    struct Recipemagazine {
        const char* jsonData = R"(
    [
        
        {
            "column1": "",
            "column2": "Angler USA Magazine Vol.1",
            "column3": "0.1",
            "column4": "Make Fishing RodFix Fishing Rod",
            "column5": "Fishing",
            "column6": "Base.FishingMag1"
        },
        {
            "column1": "",
            "column2": "Angler USA Magazine Vol.2",
            "column3": "0.1",
            "column4": "Make Fishing NetGet Wire Back",
            "column5": "Fishing",
            "column6": "Base.FishingMag2"
        },
        {
            "column1": "",
            "column2": "Electronics Magazine Vol.1",
            "column3": "0.1",
            "column4": "Make Remote Controller",
            "column5": "Electrical",
            "column6": "Base.ElectronicsMag1"
        },
        {
            "column1": "",
            "column2": "Electronics Magazine Vol.2",
            "column3": "0.1",
            "column4": "Make TimerAdd Timer",
            "column5": "Electrical",
            "column6": "Base.ElectronicsMag2"
        },
        {
            "column1": "",
            "column2": "Electronics Magazine Vol.3",
            "column3": "0.1",
            "column4": "Add Motion Sensor V1. Add Motion Sensor V2. Add Motion Sensor V3",
            "column5": "Electrical",
            "column6": "Base.ElectronicsMag3"
        },
        {
            "column1": "",
            "column2": "Electronics Magazine Vol.4",
            "column3": "0.1",
            "column4": "Make Remote TriggerAdd Crafted Trigger",
            "column5": "Electrical",
            "column6": "Base.ElectronicsMag5"
        },
        {
            "column1": "",
            "column2": "Engineer Magazine Vol.1",
            "column3": "0.1",
            "column4": "Make Noise Maker",
            "column5": "Electrical",
            "column6": "Base.EngineerMagazine1"
        },
        {
            "column1": "",
            "column2": "Engineer Magazine Vol.2",
            "column3": "0.1",
            "column4": "Make Smoke Bomb",
            "column5": "Electrical",
            "column6": "Base.EngineerMagazine2"
        },
        {
            "column1": "",
            "column2": "Good Cooking Magazine Vol.1",
            "column3": "0.1",
            "column4": "Make Cake BatterMake Pie Dough",
            "column5": "Cooking",
            "column6": "Base.CookingMag1"
        },
        {
            "column1": "",
            "column2": "Good Cooking Magazine Vol.2",
            "column3": "0.1",
            "column4": "Make Bread Dough",
            "column5": "Cooking",
            "column6": "Base.CookingMag2"
        },
        {
            "column1": "",
            "column2": "Guerilla Radio Vol.1",
            "column3": "0.1",
            "column4": "Craft Radio",
            "column5": "Electrical",
            "column6": "Radio.RadioMag1"
        },
        {
            "column1": "",
            "column2": "Guerilla Radio Vol.2",
            "column3": "0.1",
            "column4": "Craft Walkie Talkie",
            "column5": "Electrical",
            "column6": "Radio.RadioMag2"
        },
        {
            "column1": "",
            "column2": "Guerilla Radio Vol.3",
            "column3": "0.1",
            "column4": "Craft Ham Radio",
            "column5": "Electrical",
            "column6": "Radio.RadioMag3"
        },
        {
            "column1": "",
            "column2": "How to use Generators",
            "column3": "0.1",
            "column4": "Teaches the player how to connect generators to buildings",
            "column5": "Electrical",
            "column6": "Base.ElectronicsMag4"
        },
        {
            "column1": "",
            "column2": "Laines Auto Manual - Standard Models",
            "column3": "0.1",
            "column4": "Can perform maintenance on standard vehicle types",
            "column5": "Mechanics",
            "column6": "Base.MechanicMag1"
        },
        {
            "column1": "",
            "column2": "Laines Auto Manual - Commercial Models",
            "column3": "0.1",
            "column4": "Can perform maintenance on heavy-duty vehicle types",
            "column5": "Mechanics",
            "column6": "Base.MechanicMag2"
        },
        {
            "column1": "",
            "column2": "Laines Auto Manual - Performance Models",
            "column3": "0.1",
            "column4": "Can perform maintenance on sport vehicle types",
            "column5": "Mechanics",
            "column6": "Base.MechanicMag3"
        },
        {
            "column1": "",
            "column2": "The Farming Magazine",
            "column3": "0.1",
            "column4": "Make Mildew CureMake Flies Cure",
            "column5": "Farming",
            "column6": "Base.FarmingMag1"
        },
        {
            "column1": "",
            "column2": "The Herbalist",
            "column3": "0.1",
            "column4": "Can identifty poisonous berries and mushrooms, and forage medicinal herbs",
            "column5": "Foraging",
            "column6": "Base.HerbalistMag"
        },
        {
            "column1": "",
            "column2": "The Hunter Magazine Vol. 1",
            "column3": "0.1",
            "column4": "Make Snare Trap",
            "column5": "Trapping",
            "column6": "Base.HuntingMag1"
        },
        {
            "column1": "",
            "column2": "The Hunter Magazine Vol. 2",
            "column3": "0.1",
            "column4": "Make Trap CrateMake Stick Trap",
            "column5": "Trapping",
            "column6": "Base.HuntingMag2"
        },
        {
            "column1": "",
            "column2": "The Hunter Magazine Vol. 3",
            "column3": "0.1",
            "column4": "Make Trap BoxMake Cage Trap",
            "column5": "Trapping",
            "column6": "Base.HuntingMag3"
        },
        {
            "column1": "",
            "column2": "The Metalwork Magazine Vol.1",
            "column3": "0.1",
            "column4": "Make Metal WallsMake Metal Roof",
            "column5": "Metalworking",
            "column6": "Base.MetalworkMag1"
        },
        {
            "column1": "",
            "column2": "The Metalwork Magazine Vol.2",
            "column3": "0.1",
            "column4": "Make Metal Containers",
            "column5": "Metalworking",
            "column6": "Base.MetalworkMag2"
        },
        {
            "column1": "",
            "column2": "The Metalwork Magazine Vol.3",
            "column3": "0.1",
            "column4": "Make Metal Fences",
            "column5": "Metalworking",
            "column6": "Base.MetalworkMag3"
        },
        {
            "column1": "",
            "column2": "The Metalwork Magazine Vol.4",
            "column3": "0.1",
            "column4": "Make Metal SheetMake Small Metal Sheet",
            "column5": "Metalworking",
            "column6": "Base.MetalworkMag4"
        }
    ])";
    };

    struct Skillbook {
        const char* jsonData = R"(
    [
        
        {
            "column1": "",
            "column2": "Angler USA Magazine Vol.1",
            "column3": "0.1",
            "column4": "Make Fishing RodFix Fishing Rod",
            "column5": "Fishing",
            "column6": "Base.FishingMag1"
        },
        {
            "column1": "",
            "column2": "Angler USA Magazine Vol.2",
            "column3": "0.1",
            "column4": "Make Fishing NetGet Wire Back",
            "column5": "Fishing",
            "column6": "Base.FishingMag2"
        },
        {
            "column1": "",
            "column2": "Electronics Magazine Vol.1",
            "column3": "0.1",
            "column4": "Make Remote Controller",
            "column5": "Electrical",
            "column6": "Base.ElectronicsMag1"
        },
        {
            "column1": "",
            "column2": "Electronics Magazine Vol.2",
            "column3": "0.1",
            "column4": "Make TimerAdd Timer",
            "column5": "Electrical",
            "column6": "Base.ElectronicsMag2"
        },
        {
            "column1": "",
            "column2": "Electronics Magazine Vol.3",
            "column3": "0.1",
            "column4": "Add Motion Sensor V1Add Motion Sensor V2Add Motion Sensor V3",
            "column5": "Electrical",
            "column6": "Base.ElectronicsMag3"
        },
        {
            "column1": "",
            "column2": "Electronics Magazine Vol.4",
            "column3": "0.1",
            "column4": "Make Remote TriggerAdd Crafted Trigger",
            "column5": "Electrical",
            "column6": "Base.ElectronicsMag5"
        },
        {
            "column1": "",
            "column2": "Engineer Magazine Vol.1",
            "column3": "0.1",
            "column4": "Make Noise Maker",
            "column5": "Electrical",
            "column6": "Base.EngineerMagazine1"
        },
        {
            "column1": "",
            "column2": "Engineer Magazine Vol.2",
            "column3": "0.1",
            "column4": "Make Smoke Bomb",
            "column5": "Electrical",
            "column6": "Base.EngineerMagazine2"
        },
        {
            "column1": "",
            "column2": "Good Cooking Magazine Vol.1",
            "column3": "0.1",
            "column4": "Make Cake BatterMake Pie Dough",
            "column5": "Cooking",
            "column6": "Base.CookingMag1"
        },
        {
            "column1": "",
            "column2": "Good Cooking Magazine Vol.2",
            "column3": "0.1",
            "column4": "Make Bread Dough",
            "column5": "Cooking",
            "column6": "Base.CookingMag2"
        },
        {
            "column1": "",
            "column2": "Guerilla Radio Vol.1",
            "column3": "0.1",
            "column4": "Craft Radio",
            "column5": "Electrical",
            "column6": "Radio.RadioMag1"
        },
        {
            "column1": "",
            "column2": "Guerilla Radio Vol.2",
            "column3": "0.1",
            "column4": "Craft Walkie Talkie",
            "column5": "Electrical",
            "column6": "Radio.RadioMag2"
        },
        {
            "column1": "",
            "column2": "Guerilla Radio Vol.3",
            "column3": "0.1",
            "column4": "Craft Ham Radio",
            "column5": "Electrical",
            "column6": "Radio.RadioMag3"
        },
        {
            "column1": "",
            "column2": "How to use Generators",
            "column3": "0.1",
            "column4": "Teaches the player how to connect generators to buildings",
            "column5": "Electrical",
            "column6": "Base.ElectronicsMag4"
        },
        {
            "column1": "",
            "column2": "Laines Auto Manual - Standard Models",
            "column3": "0.1",
            "column4": "Can perform maintenance on standard vehicle types",
            "column5": "Mechanics",
            "column6": "Base.MechanicMag1"
        },
        {
            "column1": "",
            "column2": "Laines Auto Manual - Commercial Models",
            "column3": "0.1",
            "column4": "Can perform maintenance on heavy-duty vehicle types",
            "column5": "Mechanics",
            "column6": "Base.MechanicMag2"
        },
        {
            "column1": "",
            "column2": "Laines Auto Manual - Performance Models",
            "column3": "0.1",
            "column4": "Can perform maintenance on sport vehicle types",
            "column5": "Mechanics",
            "column6": "Base.MechanicMag3"
        },
        {
            "column1": "",
            "column2": "The Farming Magazine",
            "column3": "0.1",
            "column4": "Make Mildew CureMake Flies Cure",
            "column5": "Farming",
            "column6": "Base.FarmingMag1"
        },
        {
            "column1": "",
            "column2": "The Herbalist",
            "column3": "0.1",
            "column4": "Can identifty poisonous berries and mushrooms, and forage medicinal herbs",
            "column5": "Foraging",
            "column6": "Base.HerbalistMag"
        },
        {
            "column1": "",
            "column2": "The Hunter Magazine Vol. 1",
            "column3": "0.1",
            "column4": "Make Snare Trap",
            "column5": "Trapping",
            "column6": "Base.HuntingMag1"
        },
        {
            "column1": "",
            "column2": "The Hunter Magazine Vol. 2",
            "column3": "0.1",
            "column4": "Make Trap CrateMake Stick Trap",
            "column5": "Trapping",
            "column6": "Base.HuntingMag2"
        },
        {
            "column1": "",
            "column2": "The Hunter Magazine Vol. 3",
            "column3": "0.1",
            "column4": "Make Trap BoxMake Cage Trap",
            "column5": "Trapping",
            "column6": "Base.HuntingMag3"
        },
        {
            "column1": "",
            "column2": "The Metalwork Magazine Vol.1",
            "column3": "0.1",
            "column4": "Make Metal WallsMake Metal Roof",
            "column5": "Metalworking",
            "column6": "Base.MetalworkMag1"
        },
        {
            "column1": "",
            "column2": "The Metalwork Magazine Vol.2",
            "column3": "0.1",
            "column4": "Make Metal Containers",
            "column5": "Metalworking",
            "column6": "Base.MetalworkMag2"
        },
        {
            "column1": "",
            "column2": "The Metalwork Magazine Vol.3",
            "column3": "0.1",
            "column4": "Make Metal Fences",
            "column5": "Metalworking",
            "column6": "Base.MetalworkMag3"
        },
        {
            "column1": "",
            "column2": "The Metalwork Magazine Vol.4",
            "column3": "0.1",
            "column4": "Make Metal SheetMake Small Metal Sheet",
            "column5": "Metalworking",
            "column6": "Base.MetalworkMag4"
        }
    ])";
    };

    struct Sritable {
        const char* jsonData = R"(
    [
        {
            "column1": "",
            "column2": "Empty Notebook",
            "column3": "0.5",
            "column4": "10",
            "column5": "Base.Notebook"
        },
        {
            "column1": "",
            "column2": "Journal",
            "column3": "0.1",
            "column4": "20",
            "column5": "Base.Journal"
        },
        {
            "column1": "",
            "column2": "Sheet of Paper",
            "column3": "0.1",
            "column4": "1",
            "column5": "Base.SheetPaper2"
        }
    ])";
    };

    struct Electrical {
        const char* jsonData = R"(
    [
        {
            "column1": "",
            "column2": "Amplifier",
            "column3": "0.3",
            "column4": "",
            "column5": "Base.Amplifier"
        },
        {
            "column1": "",
            "column2": "Battery",
            "column3": "0.6",
            "column4": "",
            "column5": "Base.Battery"
        },
        {
            "column1": "",
            "column2": "Crafted Timer",
            "column3": "0.5",
            "column4": "",
            "column5": "Base.TimerCrafted"
        },
        {
            "column1": "",
            "column2": "Crafted Trigger",
            "column3": "0.2",
            "column4": "",
            "column5": "Base.TriggerCrafted"
        },
        {
            "column1": "",
            "column2": "Electric Wire",
            "column3": "0.1",
            "column4": "",
            "column5": "Radio.ElectricWire"
        },
        {
            "column1": "",
            "column2": "Electronics Scrap",
            "column3": "0.1",
            "column4": "",
            "column5": "Base.ElectronicsScrap"
        },
        {
            "column1": "",
            "column2": "Motion Sensor",
            "column3": "0.1",
            "column4": "",
            "column5": "Base.MotionSensor"
        },
        {
            "column1": "",
            "column2": "Radio Receiver",
            "column3": "0.1",
            "column4": "",
            "column5": "Radio.RadioReceiver"
        },
        {
            "column1": "",
            "column2": "Radio Transmitter",
            "column3": "0.1",
            "column4": "",
            "column5": "Radio.RadioTransmitter"
        }
    ])";
    };

    struct Fabric {
        const char* jsonData = R"(
    [
        {
            "column1": "",
            "column2": "Denim Strips",
            "column3": "0.05",
            "column4": "",
            "column5": "Base.DenimStrips"
        },
        {
            "column1": "",
            "column2": "Leather Strips",
            "column3": "0.05",
            "column4": "",
            "column5": "Base.LeatherStrips"
        },
        {
            "column1": "",
            "column2": "Mattress",
            "column3": "2.0",
            "column4": "",
            "column5": "Base.Mattress"
        },
        {
            "column1": "",
            "column2": "Pillow",
            "column3": "0.8",
            "column4": "",
            "column5": "Base.Pillow"
        },
        {
            "column1": "",
            "column2": "Ripped Sheets",
            "column3": "0.05",
            "column4": "",
            "column5": "Base.RippedSheets"
        },
        {
            "column1": "",
            "column2": "Rope",
            "column3": "0.3",
            "column4": "",
            "column5": "Base.Rope"
        },
        {
            "column1": "",
            "column2": "Sheet",
            "column3": "0.8",
            "column4": "",
            "column5": "Base.Sheet"
        },
        {
            "column1": "",
            "column2": "Sheet Rope",
            "column3": "0.8",
            "column4": "",
            "column5": "Base.SheetRope"
        },
        {
            "column1": "",
            "column2": "Tarp",
            "column3": "1.0",
            "column4": "",
            "column5": "Base.Tarp"
        },
        {
            "column1": "",
            "column2": "Thread",
            "column3": "0.1",
            "column4": "",
            "column5": "Base.Thread"
        },
        {
            "column1": "",
            "column2": "Twine",
            "column3": "0.1",
            "column4": "",
            "column5": "Base.Twine"
        }
    ])";
    };

    struct Hairproducts {
        const char* jsonData = R"(
    [
        {
            "column1": "",
            "column2": "Blonde Hair Dye",
            "column3": "1",
            "column4": "",
            "column5": "Base.HairDyeBlonde"
        },
        {
            "column1": "",
            "column2": "Black Hair Dye",
            "column3": "1",
            "column4": "",
            "column5": "Base.HairDyeBlack"
        },
        {
            "column1": "",
            "column2": "White Hair Dye",
            "column3": "1",
            "column4": "",
            "column5": "Base.HairDyeWhite"
        },
        {
            "column1": "",
            "column2": "Pink Hair Dye",
            "column3": "1",
            "column4": "",
            "column5": "Base.HairDyePink"
        },
        {
            "column1": "",
            "column2": "Yellow Hair Dye",
            "column3": "1",
            "column4": "",
            "column5": "Base.HairDyeYellow"
        },
        {
            "column1": "",
            "column2": "Red Hair Dye",
            "column3": "1",
            "column4": "",
            "column5": "Base.HairDyeRed"
        },
        {
            "column1": "",
            "column2": "Strawberry Blonde Hair Dye",
            "column3": "1",
            "column4": "",
            "column5": "Base.HairDyeGinger"
        },
        {
            "column1": "",
            "column2": "Light Brown Hair Dye",
            "column3": "1",
            "column4": "",
            "column5": "Base.HairDyeLightBrown"
        },
        {
            "column1": "",
            "column2": "Green Hair Dye",
            "column3": "1",
            "column4": "",
            "column5": "Base.HairDyeGreen"
        },
        {
            "column1": "",
            "column2": "Blue Hair Dye",
            "column3": "1",
            "column4": "",
            "column5": "Base.HairDyeBlue"
        },
        {
            "column1": "",
            "column2": "Hair Gel",
            "column3": "0.1",
            "column4": "",
            "column5": "Base.Hairgel"
        },
        {
            "column1": "",
            "column2": "Hairspray",
            "column3": "0.2",
            "column4": "",
            "column5": "Base.Hairspray"
        }
    ])";
    };

    struct Lightbulb {
        const char* jsonData = R"(
    [
        {
            "column1": "",
            "column2": "Light Bulb",
            "column3": "0.1",
            "column4": "",
            "column5": "Base.LightBulb"
        },
        {
            "column1": "",
            "column2": "Red Light Bulb",
            "column3": "0.1",
            "column4": "",
            "column5": "Base.LightBulbRed"
        },
        {
            "column1": "",
            "column2": "Green Light Bulb",
            "column3": "0.1",
            "column4": "",
            "column5": "Base.LightBulbGreen"
        },
        {
            "column1": "",
            "column2": "Blue Light Bulb",
            "column3": "0.1",
            "column4": "",
            "column5": "Base.LightBulbBlue"
        },
        {
            "column1": "",
            "column2": "Yellow Light Bulb",
            "column3": "0.1",
            "column4": "",
            "column5": "Base.LightBulbYellow"
        },
        {
            "column1": "",
            "column2": "Cyan Light Bulb",
            "column3": "0.1",
            "column4": "",
            "column5": "Base.LightBulbCyan"
        },
        {
            "column1": "",
            "column2": "Magenta Light Bulb",
            "column3": "0.1",
            "column4": "",
            "column5": "Base.LightBulbMagenta"
        },
        {
            "column1": "",
            "column2": "Orange Light Bulb",
            "column3": "0.1",
            "column4": "",
            "column5": "Base.LightBulbOrange"
        },
        {
            "column1": "",
            "column2": "Purple Light Bulb",
            "column3": "0.1",
            "column4": "",
            "column5": "Base.LightBulbPurple"
        },
        {
            "column1": "",
            "column2": "Pink Light Bulb",
            "column3": "0.1",
            "column4": "",
            "column5": "Base.LightBulbPink"
        }
    ])";
    };

    struct Metalwork {
        const char* jsonData = R"(
    [
        {
            "column1": "",
            "column2": "Aluminum",
            "column3": "0.1",
            "column4": "",
            "column5": "Base.Aluminum"
        },
        {
            "column1": "",
            "column2": "Barbed Wire",
            "column3": "1",
            "column4": "",
            "column5": "Base.BarbedWire"
        },
        {
            "column1": "",
            "column2": "Nails",
            "column3": "0.3",
            "column4": "",
            "column5": "Base.NailsBox"
        },
        {
            "column1": "",
            "column2": "Box of Screws",
            "column3": "0.3",
            "column4": "",
            "column5": "Base.Screws"
        },
        {
            "column1": "",
            "column2": "Door Hinge",
            "column3": "0.3",
            "column4": "",
            "column5": "Base.Hinge"
        },
        {
            "column1": "",
            "column2": "Doorknob",
            "column3": "0.5",
            "column4": "",
            "column5": "Base.Doorknob"
        },
        {
            "column1": "",
            "column2": "Empty Paint Bucket",
            "column3": "0.5",
            "column4": "",
            "column5": "Base.PaintbucketEmpty"
        },
        {
            "column1": "",
            "column2": "Empty Pop Can",
            "column3": "0.1",
            "column4": "",
            "column5": "Base.PopEmpty"
        },
        {
            "column1": "",
            "column2": "Empty Tin Can",
            "column3": "0.2",
            "column4": "",
            "column5": "Base.TinCanEmpty"
        },
        {
            "column1": "",
            "column2": "Metal Bar",
            "column3": "1.5",
            "column4": "",
            "column5": "Base.MetalBar"
        },
        {
            "column1": "",
            "column2": "Metal Pipe",
            "column3": "1",
            "column4": "",
            "column5": "Base.MetalPipe"
        },
        {
            "column1": "",
            "column2": "Metal Pipe",
            "column3": "0.3",
            "column4": "",
            "column5": "Base.Pipe"
        },
        {
            "column1": "",
            "column2": "Metal Sheet",
            "column3": "1.5",
            "column4": "",
            "column5": "Base.SheetMetal"
        },
        {
            "column1": "",
            "column2": "Nails",
            "column3": "0.003",
            "column4": "",
            "column5": "Base.Nails"
        },
        {
            "column1": "",
            "column2": "Paperclip",
            "column3": "0.1",
            "column4": "",
            "column5": "Base.Paperclip"
        },
        {
            "column1": "",
            "column2": "Scrap Metal",
            "column3": "0.1",
            "column4": "",
            "column5": "Base.ScrapMetal"
        },
        {
            "column1": "",
            "column2": "Screws",
            "column3": "0.1",
            "column4": "",
            "column5": "Base.Screws"
        },
        {
            "column1": "",
            "column2": "Small Metal Sheet",
            "column3": "0.4",
            "column4": "",
            "column5": "Base.SmallSheetMetal"
        },
        {
            "column1": "",
            "column2": "Tent Peg",
            "column3": "0.2",
            "column4": "",
            "column5": "camping.TentPeg"
        },
        {
            "column1": "",
            "column2": "Unusable Metal",
            "column3": "1",
            "column4": "",
            "column5": "Base.UnusableMetal"
        },
        {
            "column1": "",
            "column2": "Welding Rods",
            "column3": "1.5 (0.2 empty) ",
            "column4": "",
            "column5": "Base.WeldingRods"
        },
        {
            "column1": "",
            "column2": "Wire",
            "column3": "0.2",
            "column4": "",
            "column5": "Base.Wire"
        }
    ])";
    };

    struct Miscellaneous3 {
        const char* jsonData = R"(
    [
        {
            "column1": "",
            "column2": "Adhesive Tape",
            "column3": "0.1",
            "column4": "",
            "column5": "Base.Scotchtape"
        },
        {
            "column1": "",
            "column2": "Bag of Concrete Powder",
            "column3": "5.0",
            "column4": "",
            "column5": "Base.ConcretePowder"
        },
        {
            "column1": "",
            "column2": "Bag of Plaster Powder",
            "column3": "5.0",
            "column4": "",
            "column5": "Base.PlasterPowder"
        },
        {
            "column1": "",
            "column2": "Box of Sparklers",
            "column3": "0.2",
            "column4": "",
            "column5": "Base.Sparklers"
        },
        {
            "column1": "",
            "column2": "Charcoal",
            "column3": "8.0",
            "column4": "",
            "column5": "Base.Charcoal"
        },
        {
            "column1": "",
            "column2": "Chipped Stone",
            "column3": "0.3",
            "column4": "",
            "column5": "Base.SharpedStone"
        },
        {
            "column1": "",
            "column2": "Coal",
            "column3": "8.0",
            "column4": "",
            "column5": "Base.Coal"
        },
        {
            "column1": "",
            "column2": "Compost Bag",
            "column3": "2.0",
            "column4": "",
            "column5": "Base.CompostBag"
        },
        {
            "column1": "",
            "column2": "Dirt Bag",
            "column3": "2.0",
            "column4": "",
            "column5": "Base.Dirtbag"
        },
        {
            "column1": "",
            "column2": "Duct Tape",
            "column3": "0.3",
            "column4": "",
            "column5": "Base.DuctTape"
        },
        {
            "column1": "",
            "column2": "Fishing Line",
            "column3": "0.1",
            "column4": "",
            "column5": "Base.FishingLine"
        },
        {
            "column1": "",
            "column2": "Fishing Tackle",
            "column3": "0.1",
            "column4": "",
            "column5": "Base.FishingTackle"
        },
        {
            "column1": "",
            "column2": "Fishing Tackle",
            "column3": "0.1",
            "column4": "",
            "column5": "Base.FishingTackle2"
        },
        {
            "column1": "",
            "column2": "Gas Can",
            "column3": "1.6",
            "column4": "",
            "column5": "Base.PetrolCanBase.EmptyPetrolCan"
        },
        {
            "column1": "",
            "column2": "Glue",
            "column3": "0.1",
            "column4": "",
            "column5": "Base.Glue"
        },
        {
            "column1": "",
            "column2": "Gravel Bag",
            "column3": "2.0",
            "column4": "",
            "column5": "Base.Gravelbag"
        },
        {
            "column1": "",
            "column2": "Gunpowder",
            "column3": "0.1",
            "column4": "",
            "column5": "Base.GunPowder"
        },
        {
            "column1": "",
            "column2": "Insecticide Spray",
            "column3": "1.0",
            "column4": "",
            "column5": "farming.GardeningSprayCigarettes"
        },
        {
            "column1": "",
            "column2": "Mildew Spray",
            "column3": "1.0",
            "column4": "",
            "column5": "farming.GardeningSprayMilk"
        },
        {
            "column1": "",
            "column2": "NPK Fertilizer",
            "column3": "2.0",
            "column4": "",
            "column5": "Base.Fertilizer"
        },
        {
            "column1": "",
            "column2": "Propane Tank",
            "column3": "10",
            "column4": "",
            "column5": "Base.PropaneTank"
        },
        {
            "column1": "",
            "column2": "Sand Bag",
            "column3": "2.0",
            "column4": "",
            "column5": "Base.Sandbag"
        },
        {
            "column1": "",
            "column2": "Stone",
            "column3": "0.3",
            "column4": "",
            "column5": "Base.Stone"
        },
        {
            "column1": "",
            "column2": "Wood Glue",
            "column3": "0.1",
            "column4": "",
            "column5": "Base.Woodglue"
        }
    ])";
    };

    struct Paint {
        const char* jsonData = R"(
    [
        {
            "column1": "",
            "column2": "Black Paint",
            "column3": "5.0",
            "column4": "",
            "column5": "Base.PaintBlack"
        },
        {
            "column1": "",
            "column2": "Blue Paint",
            "column3": "5.0",
            "column4": "",
            "column5": "Base.PaintBlue"
        },
        {
            "column1": "",
            "column2": "Brown Paint",
            "column3": "5.0",
            "column4": "",
            "column5": "Base.PaintBrown"
        },
        {
            "column1": "",
            "column2": "Cyan Paint",
            "column3": "5.0",
            "column4": "",
            "column5": "Base.PaintCyan"
        },
        {
            "column1": "",
            "column2": "Green Paint",
            "column3": "5.0",
            "column4": "",
            "column5": "Base.PaintGreen"
        },
        {
            "column1": "",
            "column2": "Gray Paint",
            "column3": "5.0",
            "column4": "",
            "column5": "Base.PaintGrey"
        },
        {
            "column1": "",
            "column2": "Light Blue Paint",
            "column3": "5.0",
            "column4": "",
            "column5": "Base.PaintLightBlue"
        },
        {
            "column1": "",
            "column2": "Light Brown Paint",
            "column3": "5.0",
            "column4": "",
            "column5": "Base.PaintLightBrown"
        },
        {
            "column1": "",
            "column2": "Orange Paint",
            "column3": "5.0",
            "column4": "",
            "column5": "Base.PaintOrange"
        },
        {
            "column1": "",
            "column2": "Pink Paint",
            "column3": "5.0",
            "column4": "",
            "column5": "Base.PaintPink"
        },
        {
            "column1": "",
            "column2": "Purple Paint",
            "column3": "5.0",
            "column4": "",
            "column5": "Base.PaintPurple"
        },
        {
            "column1": "",
            "column2": "Red Paint",
            "column3": "5.0",
            "column4": "",
            "column5": "Base.PaintRed"
        },
        {
            "column1": "",
            "column2": "Turquoise Paint",
            "column3": "5.0",
            "column4": "",
            "column5": "Base.PaintTurquoise"
        },
        {
            "column1": "",
            "column2": "White Paint",
            "column3": "5.0",
            "column4": "",
            "column5": "Base.PaintWhite"
        },
        {
            "column1": "",
            "column2": "Yellow Paint",
            "column3": "5.0",
            "column4": "",
            "column5": "Base.PaintYellow"
        }
    ])";
    };

    struct Seeds {
        const char* jsonData = R"(
    [
        {
            "column1": "",
            "column2": "Broccoli Seeds",
            "column3": "0.009",
            "column4": "6",
            "column5": "70",
            "column6": "-",
            "column7": "",
            "column8": "22 days",
            "column9": "Base.BroccoliSeed"
        },
        {
            "column1": "",
            "column2": "Cabbage Seeds",
            "column3": "0.009",
            "column4": "9",
            "column5": "85",
            "column6": "-",
            "column7": "",
            "column8": "6 days",
            "column9": "Base.CabbageSeed"
        },
        {
            "column1": "",
            "column2": "Carrot Seeds",
            "column3": "0.009",
            "column4": "12",
            "column5": "35",
            "column6": "65",
            "column7": "",
            "column8": "5 days",
            "column9": "Base.CarrotSeed"
        },
        {
            "column1": "",
            "column2": "Potato Seeds",
            "column3": "0.009",
            "column4": "4",
            "column5": "65",
            "column6": "-",
            "column7": "",
            "column8": "17 days",
            "column9": "Base.PotatoSeed"
        },
        {
            "column1": "",
            "column2": "Radish Seeds",
            "column3": "0.009",
            "column4": "6",
            "column5": "45",
            "column6": "75",
            "column7": "",
            "column8": "7 days",
            "column9": "Base.RedRadishSeed"
        },
        {
            "column1": "",
            "column2": "Strawberry Seeds",
            "column3": "0.009",
            "column4": "12",
            "column5": "85",
            "column6": "-",
            "column7": "",
            "column8": "25 days",
            "column9": "Base.StrewberrieSeed"
        },
        {
            "column1": "",
            "column2": "Tomato Seeds",
            "column3": "0.009",
            "column4": "4",
            "column5": "75",
            "column6": "-",
            "column7": "",
            "column8": "18 days",
            "column9": "Base.TomatoSeed"
        }
    ])";
    };

    struct Woodwork {
        const char* jsonData = R"(
    [
        {
            "column1": "",
            "column2": "Drawer",
            "column3": "3.0",
            "column4": "",
            "column5": "Base.Drawer"
        },
        {
            "column1": "",
            "column2": "Logs Stack",
            "column3": "12.0",
            "column4": "",
            "column5": "Base.LogStacks4"
        },
        {
            "column1": "",
            "column2": "Log",
            "column3": "9.0",
            "column4": "",
            "column5": "Base.Log"
        },
        {
            "column1": "",
            "column2": "Plank",
            "column3": "3.0",
            "column4": "",
            "column5": "Base.Plank"
        },
        {
            "column1": "",
            "column2": "Sturdy Stick",
            "column3": "0.1",
            "column4": "",
            "column5": "Base.WoodenStick"
        },
        {
            "column1": "",
            "column2": "Logs Stack",
            "column3": "9.0",
            "column4": "",
            "column5": "Base.LogStacks3"
        },
        {
            "column1": "",
            "column2": "Tree Branch",
            "column3": "0.2",
            "column4": "",
            "column5": "Base.TreeBranch"
        },
        {
            "column1": "",
            "column2": "Twigs",
            "column3": "0.1",
            "column4": "",
            "column5": "Base.Twigs"
        },
        {
            "column1": "",
            "column2": "Logs Stack",
            "column3": "6.0",
            "column4": "",
            "column5": "Base.LogStacks2"
        },
        {
            "column1": "",
            "column2": "Scrap Wood",
            "column3": "1.0",
            "column4": "",
            "column5": "Base.UnusableWood"
        }
    ])";
    };

    struct Bandages {
        const char* jsonData = R"(
    [
        
        {
            "column1": "",
            "column2": "Adhesive Bandages",
            "column3": "0.05",
            "column4": "1.5",
            "column5": "Stops bleeding and increases rate of healing.",
            "column6": "Base.Bandaid"
        },
        {
            "column1": "",
            "column2": "Bandage",
            "column3": "0.1",
            "column4": "4.0",
            "column5": "Stops bleeding and increases rate of healing.",
            "column6": "Base.Bandage"
        },
        {
            "column1": "",
            "column2": "Sterilized Bandage",
            "column3": "0.1",
            "column4": "4.0",
            "column5": "Stops bleeding and increases rate of healing. Decreases chance of infection.",
            "column6": "Base.AlcoholBandage"
        },
        {
            "column1": "",
            "column2": "Dirty Bandage",
            "column3": "0.1",
            "column4": "0.5",
            "column5": "Stops bleeding. Increased chance of infection.",
            "column6": "Base.BandageDirty"
        },
        {
            "column1": "",
            "column2": "Denim Strips",
            "column3": "0.05",
            "column4": "2.0",
            "column5": "Stops bleeding and increases rate of healing.",
            "column6": "Base.DenimStrips"
        },
        {
            "column1": "",
            "column2": "Dirty Denim Strips",
            "column3": "0.05",
            "column4": "0.5",
            "column5": "Stops bleeding and increases rate of healing.",
            "column6": "Base.DenimStripsDirty"
        },
        {
            "column1": "",
            "column2": "Leather Strips",
            "column3": "0.05",
            "column4": "2.0",
            "column5": "Stops bleeding and increases rate of healing.",
            "column6": "Base.LeatherStrips"
        },
        {
            "column1": "",
            "column2": "Dirty Leather Strips",
            "column3": "0.05",
            "column4": "0.5",
            "column5": "Stops bleeding and increases rate of healing.",
            "column6": "Base.LeatherStripsDirty"
        },
        {
            "column1": "",
            "column2": "Ripped Sheets",
            "column3": "0.05",
            "column4": "2.0",
            "column5": "Stops bleeding and increases rate of healing.",
            "column6": "Base.RippedSheets"
        },
        {
            "column1": "",
            "column2": "Sterilized Rag",
            "column3": "0.05",
            "column4": "2.0",
            "column5": "Stops bleeding and increases rate of healing. Decreases chance of infection.",
            "column6": "Base.AlcoholRippedSheets"
        },
        {
            "column1": "",
            "column2": "Dirty Rag",
            "column3": "0.05",
            "column4": "0.5",
            "column5": "Stops bleeding. Increased chance of infection.",
            "column6": "Base.RippedSheetsDirty"
        },
        {
            "column1": "",
            "column2": "Splint",
            "column3": "1.0",
            "column4": "-",
            "column5": "Aids recovery from broken bones. Reduces time taken to heal.",
            "column6": "Base.Splint"
        }
    ])";
    };

    struct Disinfectants {
        const char* jsonData = R"(
    [
        
        {
            "column1": "",
            "column2": "Alcohol Wipes",
            "column3": "0.2",
            "column4": "4.0",
            "column5": "Used to sterilize wounds and aid recovery from infection.",
            "column6": "Base.AlcoholWipes"
        },
        {
            "column1": "",
            "column2": "Bottle of Disinfectant",
            "column3": "0.3",
            "column4": "3.0",
            "column5": "Fights wound infection. Use on Bandage to improve healing.",
            "column6": "Base.Disinfectant"
        },
        {
            "column1": "",
            "column2": "Cotton Balls Doused in Alcohol",
            "column3": "0.1",
            "column4": "4.0",
            "column5": "Used to sterilize wounds and aid recovery from infection.",
            "column6": "Base.AlcoholedCottonBalls"
        },
        {
            "column1": "",
            "column2": "Bourbon",
            "column3": "0.7",
            "column4": "2.0",
            "column5": "Fights wound infection. Use on Bandage to improve healing.",
            "column6": "Base.WhiskeyFull"
        }
    ])";
    };

    struct Medicalequipment {
        const char* jsonData = R"(
    [
        
        {
            "column1": "",
            "column2": "Cotton Balls",
            "column3": "0.1",
            "column4": "-",
            "column5": "Base.CottonBalls"
        },
        {
            "column1": "",
            "column2": "Suture Needle",
            "column3": "0.1",
            "column4": "Used to stitch deep wounds.",
            "column5": "Base.SutureNeedle"
        },
        {
            "column1": "",
            "column2": "Suture Needle Holder",
            "column3": "0.1",
            "column4": "Improves the success rate of suture needles.",
            "column5": "Base.SutureNeedleHolder"
        },
        {
            "column1": "",
            "column2": "Tissue",
            "column3": "0.1",
            "column4": "Mutes the effects of colds.",
            "column5": "Base.Tissue"
        },
        {
            "column1": "",
            "column2": "Tweezers",
            "column3": "0.1",
            "column4": "Used to extract broken glass and bullets.",
            "column5": "Base.Tweezers"
        }
    ])";
    };

    struct Pharmaceuticals {
        const char* jsonData = R"(
    [
        
        {
            "column1": "",
            "column2": "Antibiotics",
            "column3": "0.1",
            "column4": "Fights wound infections. Cannot prevent zombification.",
            "column5": "Base.Antibiotics"
        },
        {
            "column1": "",
            "column2": "Antidepressants",
            "column3": "0.2",
            "column4": "Reduces unhappiness over a sustained period.",
            "column5": "Base.PillsAntiDep"
        },
        {
            "column1": "",
            "column2": "Beta Blockers",
            "column3": "0.2",
            "column4": "Reduces panic.",
            "column5": "Base.PillsBeta"
        },
        {
            "column1": "",
            "column2": "Cigarettes",
            "column3": "0.005",
            "column4": "Smoke for a slight reduction to stress.",
            "column5": "Base.Cigarettes"
        },
        {
            "column1": "",
            "column2": "Painkillers",
            "column3": "0.2",
            "column4": "Reduces feelings of pain.",
            "column5": "Base.Pills"
        },
        {
            "column1": "",
            "column2": "Sleeping Tablets",
            "column3": "0.2",
            "column4": "Helps in getting to sleep. Useful when anxious or in pain.",
            "column5": "Base.PillsSleepingTablets"
        },
        {
            "column1": "",
            "column2": "Vitamins",
            "column3": "0.2",
            "column4": "Provides a burst of energy when taken. Reduces fatigue.",
            "column5": "Base.PillsVitamins"
        }
    ])";
    };

    struct Herbs {
        const char* jsonData = R"(
    [
        
        {
            "column1": "",
            "column2": "Black Sage",
            "column3": "0.1",
            "column4": "Provides mild pain relief.",
            "column5": "Base.BlackSage"
        },
        {
            "column1": "",
            "column2": "Comfrey",
            "column3": "0.1",
            "column4": "Aids recovery from broken bones when applied as a poultice.",
            "column5": "Base.Comfrey"
        },
        {
            "column1": "",
            "column2": "Common Mallow",
            "column3": "0.1",
            "column4": "Eat to relieve cold and flu symptoms.",
            "column5": "Base.CommonMallow"
        },
        {
            "column1": "",
            "column2": "Ginseng",
            "column3": "0.1",
            "column4": "Eat to restore endurance.",
            "column5": "Base.Ginseng"
        },
        {
            "column1": "",
            "column2": "Lemongrass",
            "column3": "0.1",
            "column4": "Eat to soothe bouts of food poisoning.",
            "column5": "Base.LemonGrass"
        },
        {
            "column1": "",
            "column2": "Plantain",
            "column3": "0.1",
            "column4": "Aids recovery from wounds when applied as a poultice.",
            "column5": "Base.Plantain"
        },
        {
            "column1": "",
            "column2": "Wild Garlic",
            "column3": "0.1",
            "column4": "Helps to fight against infection when applied as poultice.",
            "column5": "Base.WildGarlic"
        }
    ])";
    };

    struct Poultices {
        const char* jsonData = R"(
    [
        
        {
            "column1": "",
            "column2": "Comfrey Poultice",
            "column3": "0.2",
            "column4": "Aids recovery from broken bones when applied as a poultice.",
            "column5": "Base.ComfreyCataplasm"
        },
        {
            "column1": "",
            "column2": "Plantain Poultice",
            "column3": "0.2",
            "column4": "Aids recovery from wounds when applied as a poultice.",
            "column5": "Base.PlantainCataplasm"
        },
        {
            "column1": "",
            "column2": "Wild Garlic Poultice",
            "column3": "0.2",
            "column4": "Helps to fight against infection when applied as poultice.",
            "column5": "Base.WildGarlicCataplasm"
        }
    ])";
    };

    struct Miscellaneous4 {
        const char* jsonData = R"(
    [
        
        {
            "column1": "",
            "column2": "Baseball",
            "column3": "0.1",
            "column4": "Base.Baseball"
        },
        {
            "column1": "",
            "column2": "Basketball",
            "column3": "0.2",
            "column4": "Base.Basketball"
        },
        {
            "column1": "",
            "column2": "Bell",
            "column3": "0.1",
            "column4": "Base.Bell"
        },
        {
            "column1": "",
            "column2": "Belt",
            "column3": "0.3",
            "column4": "Base.Belt"
        },
        {
            "column1": "",
            "column2": "Chess Pieces",
            "column3": "0.1",
            "column4": "Base.ChessBlack"
        },
        {
            "column1": "",
            "column2": "Bricktoys",
            "column3": "0.1",
            "column4": "Base.Bricktoys"
        },
        {
            "column1": "",
            "column2": "Button",
            "column3": "0.1",
            "column4": "Base.Button"
        },
        {
            "column1": "",
            "column2": "Cat Toy",
            "column3": "0.1",
            "column4": "Base.CatToy"
        },
        {
            "column1": "",
            "column2": "CD",
            "column3": "0.1",
            "column4": "Base.Disc"
        },
        {
            "column1": "",
            "column2": "Cologne",
            "column3": "0.2",
            "column4": "Base.Cologne"
        },
        {
            "column1": "",
            "column2": "Comb",
            "column3": "0.2",
            "column4": "Base.Comb"
        },
        {
            "column1": "",
            "column2": "Corkscrew",
            "column3": "0.1",
            "column4": "Base.Corkscrew"
        },
        {
            "column1": "",
            "column2": "Corpse",
            "column3": "20",
            "column4": "Base.CorpseMale"
        },
        {
            "column1": "",
            "column2": "Corpse",
            "column3": "20",
            "column4": "Base.CorpseFemale"
        },
        {
            "column1": "",
            "column2": "Crayons",
            "column3": "0.1",
            "column4": "Base.Crayons"
        },
        {
            "column1": "",
            "column2": "Credit Card",
            "column3": "0.1",
            "column4": "Base.CreditCard"
        },
        {
            "column1": "",
            "column2": "Cube",
            "column3": "0.2",
            "column4": "Base.Cube"
        },
        {
            "column1": "",
            "column2": "Dart",
            "column3": "0.1",
            "column4": "Base.Dart"
        },
        {
            "column1": "",
            "column2": "Dice",
            "column3": "0.2",
            "column4": "Base.Dice"
        },
        {
            "column1": "",
            "column2": "Dog Chew Toy",
            "column3": "0.1",
            "column4": "Base.DogChew"
        },
        {
            "column1": "",
            "column2": "Doll",
            "column3": "0.1",
            "column4": "Base.Doll"
        },
        {
            "column1": "",
            "column2": "Earrings",
            "column3": "0.1",
            "column4": "Base.Earrings"
        },
        {
            "column1": "",
            "column2": "Frame",
            "column3": "0.1",
            "column4": "Base.Frame"
        },
        {
            "column1": "",
            "column2": "Eyes Makeup",
            "column3": "0.1",
            "column4": "Base.MakeupEyeshadow"
        },
        {
            "column1": "",
            "column2": "Football",
            "column3": "0.2",
            "column4": "Base.Football"
        },
        {
            "column1": "",
            "column2": "Foundation Makeup",
            "column3": "0.1",
            "column4": "Base.MakeupFoundation"
        },
        {
            "column1": "",
            "column2": "Glasses",
            "column3": "0.2",
            "column4": "Base.Glasses"
        },
        {
            "column1": "",
            "column2": "Glasses",
            "column3": "0.2",
            "column4": "Base.Glasses2"
        },
        {
            "column1": "",
            "column2": "Golf Ball",
            "column3": "0.1",
            "column4": "Base.GolfBall"
        },
        {
            "column1": "",
            "column2": "Knitting Needles",
            "column3": "0.2",
            "column4": "Base.KnittingNeedles"
        },
        {
            "column1": "",
            "column2": "Lamp",
            "column3": "0.2",
            "column4": "Base.Lamp"
        },
        {
            "column1": "",
            "column2": "Leash",
            "column3": "0.2",
            "column4": "Base.Leash"
        },
        {
            "column1": "",
            "column2": "Lipstick",
            "column3": "0.2",
            "column4": "Base.Lipstick"
        },
        {
            "column1": "",
            "column2": "Locket",
            "column3": "0.5",
            "column4": "Base.Locket"
        },
        {
            "column1": "",
            "column2": "Mirror",
            "column3": "0.2",
            "column4": "Base.Mirror"
        },
        {
            "column1": "",
            "column2": "Money",
            "column3": "0.01",
            "column4": "Base.Money"
        },
        {
            "column1": "",
            "column2": "Pearl Necklace",
            "column3": "0.1",
            "column4": "Base.Necklacepearl"
        },
        {
            "column1": "",
            "column2": "Perfume",
            "column3": "0.1",
            "column4": "Base.Perfume"
        },
        {
            "column1": "",
            "column2": "Playing Cards",
            "column3": "0.2",
            "column4": "Base.CardDeck"
        },
        {
            "column1": "",
            "column2": "Pool Ball",
            "column3": "0.2",
            "column4": "Base.Poolball"
        },
        {
            "column1": "",
            "column2": "Razor",
            "column3": "0.2",
            "column4": "Base.Razor"
        },
        {
            "column1": "",
            "column2": "Ring",
            "column3": "0.1",
            "column4": "Base.Ring"
        },
        {
            "column1": "",
            "column2": "Rubber Band",
            "column3": "0.1",
            "column4": "Base.RubberBand"
        },
        {
            "column1": "",
            "column2": "Rubber Duck",
            "column3": "0.1",
            "column4": "Base.Rubberducky"
        },
        {
            "column1": "",
            "column2": "Socks",
            "column3": "0.01",
            "column4": "Base.Socks1"
        },
        {
            "column1": "",
            "column2": "Socks",
            "column3": "0.01",
            "column4": "Base.Socks2"
        },
        {
            "column1": "",
            "column2": "Spiffo (item) ",
            "column3": "0.2",
            "column4": "Base.Spiffo"
        },
        {
            "column1": "",
            "column2": "Sponge",
            "column3": "0.1",
            "column4": "Base.Sponge"
        },
        {
            "column1": "",
            "column2": "Tennis Ball",
            "column3": "0.1",
            "column4": "Base.TennisBall"
        },
        {
            "column1": "",
            "column2": "Toilet Paper",
            "column3": "0.2",
            "column4": "Base.ToiletPaper"
        },
        {
            "column1": "",
            "column2": "Toothbrush",
            "column3": "0.1",
            "column4": "Base.Toothbrush"
        },
        {
            "column1": "",
            "column2": "Toothpaste",
            "column3": "0.1",
            "column4": "Base.Toothpaste"
        },
        {
            "column1": "",
            "column2": "Toy Bear",
            "column3": "0.2",
            "column4": "Base.ToyBear"
        },
        {
            "column1": "",
            "column2": "Toy Car",
            "column3": "0.1",
            "column4": "Base.ToyCar"
        },
        {
            "column1": "",
            "column2": "Underwear",
            "column3": "0.1",
            "column4": "Base.Underwear1"
        },
        {
            "column1": "",
            "column2": "Underwear",
            "column3": "0.1",
            "column4": "Base.Underwear2"
        },
        {
            "column1": "",
            "column2": "Wallet",
            "column3": "0.2",
            "column4": "Base.Wallet"
        },
        {
            "column1": "",
            "column2": "Wallet",
            "column3": "0.2",
            "column4": "Base.Wallet2"
        },
        {
            "column1": "",
            "column2": "Wallet",
            "column3": "0.2",
            "column4": "Base.Wallet3"
        },
        {
            "column1": "",
            "column2": "Wallet",
            "column3": "0.2",
            "column4": "Base.Wallet4"
        },
        {
            "column1": "",
            "column2": "Wedding Ring",
            "column3": "0.2",
            "column4": "Base.WeddingRing_Man"
        },
        {
            "column1": "",
            "column2": "Wedding Ring",
            "column3": "0.2",
            "column4": "Base.WeddingRing_Woman"
        },
        {
            "column1": "",
            "column2": "Chess Pieces",
            "column3": "0.1",
            "column4": "Base.ChessWhite"
        },
        {
            "column1": "",
            "column2": "Water Dish",
            "column3": "0.1",
            "column4": "Base.WaterDish"
        },
        {
            "column1": "",
            "column2": "Yoyo",
            "column3": "0.2",
            "column4": "Base.Yoyo"
        }
    ])";
    };

    struct Materials {
        const char* jsonData = R"(
    [
        
        {
            "column1": "",
            "column2": "Bucket of Concrete",
            "column3": "10.0",
            "column4": "",
            "column5": "Base.BucketConcreteFull"
        },
        {
            "column1": "",
            "column2": "Workable Iron",
            "column3": "5.0",
            "column4": "",
            "column5": "Base.IronIngot"
        }
    ])";
    };

    struct Miscellaneous5 {
        const char* jsonData = R"(
    [
        
        {
            "column1": "",
            "column2": "Cork",
            "column3": "0.1",
            "column4": "",
            "column5": "Base.Cork"
        }
    ])";
    };

    struct Recipemagazine2 {
        const char* jsonData = R"(
    [
        
        {
            "column1": "",
            "column2": "The Smithing Magazine Vol. 1",
            "column3": "0.1",
            "column4": "Make Fork, Make Spoon, Make Cooking Pot, Make Roasting Pan, Make Saucepan, Make Baking Tray, Make Baking Pan, Make Frying Pan",
            "column5": "Blacksmith",
            "column6": "Base.SmithingMag1"
        },
        {
            "column1": "",
            "column2": "The Smithing Magazine Vol. 2",
            "column3": "0.1",
            "column4": "Make Letter Opener, Make Nails, Make Paperclip, Make Scissors, Make Doorknob, Make Door Hinge, Make Butter Knife, Make Ball-peen Hammer",
            "column5": "Blacksmith",
            "column6": "Base.SmithingMag2"
        },
        {
            "column1": "",
            "column2": "The Smithing Magazine Vol. 3",
            "column3": "0.1",
            "column4": "Make Tongs, Make Hammer, Make Metal Sheet, Make Suture Needle Holder, Make Tweezers, Make Suture Needle, Make Metal Barrel, Make Kitchen Knife, Make Saw, Make Hunting Knife, Make Shovel, Make Trowel",
            "column5": "Blacksmith",
            "column6": "Base.SmithingMag3"
        },
        {
            "column1": "",
            "column2": "The Smithing Magazine Vol. 4",
            "column3": "0.1",
            "column4": "Make 9mm Bullets Mold, Make .308 Bullets Mold, Make .223 Bullets Mold, Make Shotgun Shells Mold, Make 9mm Round, Make Shotgun Shells, Make .308 Round, Make .223 Round, Make Crowbar, Make Golf Club, Make Axe, Make Sledgehammer",
            "column5": "Blacksmith",
            "column6": "Base.SmithingMag4"
        }
    ])";
    };

    struct SkillBook2 {
        const char* jsonData = R"(
    [
        
        {
            "column1": "",
            "column2": "Blacksmith Vol. 1",
            "column3": "0.8",
            "column4": "220",
            "column5": "3",
            "column6": "Blacksmith",
            "column7": "Base.BookBlacksmith1"
        },
        {
            "column1": "",
            "column2": "Blacksmith Vol. 2",
            "column3": "0.8",
            "column4": "260",
            "column5": "5",
            "column6": "Blacksmith",
            "column7": "Base.SmithingMag2"
        },
        {
            "column1": "",
            "column2": "Blacksmith Vol. 3",
            "column3": "0.8",
            "column4": "300",
            "column5": "8",
            "column6": "Blacksmith",
            "column7": "Base.BookBlacksmith3"
        },
        {
            "column1": "",
            "column2": "Blacksmith Vol. 4",
            "column3": "0.8",
            "column4": "340",
            "column5": "12",
            "column6": "Blacksmith",
            "column7": "Base.BookBlacksmith4"
        },
        {
            "column1": "",
            "column2": "Blacksmith Vol. 5",
            "column3": "0.8",
            "column4": "380",
            "column5": "16",
            "column6": "Blacksmith",
            "column7": "Base.BookBlacksmith5"
        }
    ])";
    };

    struct Tools {
        const char* jsonData = R"(
    [
        
        {
            "column1": "",
            "column2": ".223 Bullets Mold",
            "column3": "0.5",
            "column4": "",
            "column5": "Base.223BulletsMold"
        },
        {
            "column1": "",
            "column2": ".308 Bullets Mold",
            "column3": "0.5",
            "column4": "",
            "column5": "Base.308BulletsMold"
        },
        {
            "column1": "",
            "column2": "9mm Bullets Mold",
            "column3": "0.5",
            "column4": "",
            "column5": "Base.9mmBulletsMold"
        },
        {
            "column1": "",
            "column2": "Bellows",
            "column3": "0.1",
            "column4": "",
            "column5": "Base.Bellows"
        },
        {
            "column1": "",
            "column2": "Handle",
            "column3": "0.3",
            "column4": "",
            "column5": "Base.Handle"
        },
        {
            "column1": "",
            "column2": "Metal Barrel",
            "column3": "10.0",
            "column4": "",
            "column5": "Base.MetalDrum"
        },
        {
            "column1": "",
            "column2": "Shotgun Shells Mold",
            "column3": "0.5",
            "column4": "",
            "column5": "Base.ShotgunShellsMold"
        },
        {
            "column1": "",
            "column2": "Tongs",
            "column3": "0.5",
            "column4": "",
            "column5": "Base.Tongs"
        }
    ])";
    };

    struct Weapons {
        const char* jsonData = R"(
    [
        
        {
            "column1": "",
            "column2": "Chainsaw",
            "column3": "3",
            "column4": "",
            "column5": "Base.Chainsaw"
        }
    ])";
    };

    struct Writable {
        const char* jsonData = R"(
    [
        
        {
            "column1": "",
            "column2": "Doodle",
            "column3": "0.3",
            "column4": "1",
            "column5": "Base.Doodle"
        }
    ])";
    };

    struct Brake {
        const char* jsonData = R"(
    [
        {
            "column1": "",
            "column2": "Old Brake",
            "column3": "3",
            "column4": "Standard",
            "column5": "17",
            "column6": "&",
            "column7": "Mechanics 3",
            "column8": "",
            "column9": "Base.OldBrake1"
        },
        {
            "column1": "",
            "column2": "Old Brake",
            "column3": "3",
            "column4": "Heavy-Duty",
            "column5": "20",
            "column6": "&",
            "column7": "Mechanics 6",
            "column8": "",
            "column9": "Base.OldBrake2"
        },
        {
            "column1": "",
            "column2": "Old Brake",
            "column3": "3",
            "column4": "Sport",
            "column5": "20",
            "column6": "&",
            "column7": "Mechanics 7",
            "column8": "",
            "column9": "Base.OldBrake3"
        },
        {
            "column1": "",
            "column2": "Regular Brake",
            "column3": "3",
            "column4": "Standard",
            "column5": "20",
            "column6": "&",
            "column7": "Mechanics 3",
            "column8": "",
            "column9": "Base.NormalBrake1"
        },
        {
            "column1": "",
            "column2": "Regular Brake",
            "column3": "3",
            "column4": "Heavy-Duty",
            "column5": "23",
            "column6": "&",
            "column7": "Mechanics 6",
            "column8": "",
            "column9": "Base.NormalBrake2"
        },
        {
            "column1": "",
            "column2": "Regular Brake",
            "column3": "3",
            "column4": "Sport",
            "column5": "23",
            "column6": "&",
            "column7": "Mechanics 7",
            "column8": "",
            "column9": "Base.NormalBrake3"
        },
        {
            "column1": "",
            "column2": "Performance Brake",
            "column3": "3",
            "column4": "Standard",
            "column5": "25",
            "column6": "&",
            "column7": "Mechanics 3",
            "column8": "",
            "column9": "Base.ModernBrake1"
        },
        {
            "column1": "",
            "column2": "Performance Brake",
            "column3": "3",
            "column4": "Heavy-Duty",
            "column5": "28",
            "column6": "&",
            "column7": "Mechanics 6",
            "column8": "",
            "column9": "Base.ModernBrake2"
        },
        {
            "column1": "",
            "column2": "Performance Brake",
            "column3": "3",
            "column4": "Sport",
            "column5": "27",
            "column6": "&",
            "column7": "Mechanics 7",
            "column8": "",
            "column9": "Base.ModernBrake3"
        }
    ])";
    };

    struct Door {
        const char* jsonData = R"(
    [
        {
            "column1": "",
            "column2": "Front Door",
            "column3": "10",
            "column4": "Standard",
            "column5": "Base.FrontCarDoor1"
        },
        {
            "column1": "",
            "column2": "Front Door",
            "column3": "10",
            "column4": "Heavy-Duty",
            "column5": "Base.FrontCarDoor2"
        },
        {
            "column1": "",
            "column2": "Front Door",
            "column3": "10",
            "column4": "Sport",
            "column5": "Base.FrontCarDoor3"
        },
        {
            "column1": "",
            "column2": "Rear Door",
            "column3": "10",
            "column4": "Standard",
            "column5": "Base.RearCarDoor1"
        },
        {
            "column1": "",
            "column2": "Rear Door",
            "column3": "10",
            "column4": "Heavy-Duty",
            "column5": "Base.RearCarDoor2"
        },
        {
            "column1": "",
            "column2": "Rear Door",
            "column3": "10",
            "column4": "Sport",
            "column5": "Base.RearCarDoor3"
        },
        {
            "column1": "",
            "column2": "Double Rear Door",
            "column3": "20",
            "column4": "Standard",
            "column5": "Base.RearCarDoorDouble1"
        },
        {
            "column1": "",
            "column2": "Double Rear Door",
            "column3": "20",
            "column4": "Heavy-Duty",
            "column5": "Base.RearCarDoorDouble2"
        },
        {
            "column1": "",
            "column2": "Double Rear Door",
            "column3": "20",
            "column4": "Sport",
            "column5": "Base.RearCarDoorDouble3"
        }
    ])";
    };

    struct Gas_tank {
        const char* jsonData = R"(
    [
        {
            "column1": "",
            "column2": "Small Gas Tank",
            "column3": "11",
            "column4": "Standard",
            "column5": "39",
            "column6": "Base.SmallGasTank1"
        },
        {
            "column1": "",
            "column2": "Small Gas Tank",
            "column3": "14",
            "column4": "Heavy-Duty",
            "column5": "55",
            "column6": "Base.SmallGasTank2"
        },
        {
            "column1": "",
            "column2": "Small Gas Tank",
            "column3": "10",
            "column4": "Sport",
            "column5": "35",
            "column6": "Base.SmallGasTank3"
        },
        {
            "column1": "",
            "column2": "Standard Gas Tank",
            "column3": "13",
            "column4": "Standard",
            "column5": "49",
            "column6": "Base.NormalGasTank1"
        },
        {
            "column1": "",
            "column2": "Standard Gas Tank",
            "column3": "17",
            "column4": "Heavy-Duty",
            "column5": "65",
            "column6": "Base.NormalGasTank2"
        },
        {
            "column1": "",
            "column2": "Standard Gas Tank",
            "column3": "12",
            "column4": "Sport",
            "column5": "45",
            "column6": "Base.NormalGasTank3"
        },
        {
            "column1": "",
            "column2": "Big Gas Tank",
            "column3": "15",
            "column4": "Standard",
            "column5": "59",
            "column6": "Base.BigGasTank1"
        },
        {
            "column1": "",
            "column2": "Big Gas Tank",
            "column3": "22",
            "column4": "Heavy-Duty",
            "column5": "75",
            "column6": "Base.BigGasTank2"
        },
        {
            "column1": "",
            "column2": "Big Gas Tank",
            "column3": "14",
            "column4": "Sport",
            "column5": "55",
            "column6": "Base.BigGasTank3"
        }
    ])";
    };

    struct General_part {
        const char* jsonData = R"(
    [
        {
            "column1": "",
            "column2": "Car Battery",
            "column3": "5",
            "column4": "Standard",
            "column5": "",
            "column6": "-",
            "column7": "-",
            "column8": "Base.CarBattery1"
        },
        {
            "column1": "",
            "column2": "Car Battery",
            "column3": "5",
            "column4": "Heavy-Duty",
            "column5": "",
            "column6": "-",
            "column7": "-",
            "column8": "Base.CarBattery2"
        },
        {
            "column1": "",
            "column2": "Car Battery",
            "column3": "5",
            "column4": "Sport",
            "column5": "",
            "column6": "-",
            "column7": "-",
            "column8": "Base.CarBattery3"
        },
        {
            "column1": "",
            "column2": "Hood",
            "column3": "5",
            "column4": "Standard",
            "column5": "",
            "column6": "Mechanics 3",
            "column7": "",
            "column8": "Base.EngineDoor1"
        },
        {
            "column1": "",
            "column2": "Hood",
            "column3": "5",
            "column4": "Heavy-Duty",
            "column5": "",
            "column6": "Mechanics 3",
            "column7": "",
            "column8": "Base.EngineDoor2"
        },
        {
            "column1": "",
            "column2": "Hood",
            "column3": "5",
            "column4": "Sport",
            "column5": "",
            "column6": "Mechanics 3",
            "column7": "",
            "column8": "Base.EngineDoor3"
        },
        {
            "column1": "",
            "column2": "Spare Engine Parts",
            "column3": "0.4",
            "column4": "-",
            "column5": "-",
            "column6": "-",
            "column7": "-",
            "column8": "Base.EngineParts"
        },
        {
            "column1": "",
            "column2": "Trunk Lid",
            "column3": "15",
            "column4": "Standard",
            "column5": "",
            "column6": "Mechanics 3",
            "column7": "",
            "column8": "Base.TrunkDoor1"
        },
        {
            "column1": "",
            "column2": "Trunk Lid",
            "column3": "15",
            "column4": "Heavy-Duty",
            "column5": "",
            "column6": "Mechanics 3",
            "column7": "",
            "column8": "Base.TrunkDoor2"
        },
        {
            "column1": "",
            "column2": "Trunk Lid",
            "column3": "15",
            "column4": "Sport",
            "column5": "",
            "column6": "Mechanics 3",
            "column7": "",
            "column8": "Base.TrunkDoor3"
        }
    ])";
    };

    struct Muffler {
        const char* jsonData = R"(
    [
        {
            "column1": "",
            "column2": "Old Muffler",
            "column3": "10",
            "column4": "Standard",
            "column5": "80",
            "column6": "Base.OldCarMuffler1"
        },
        {
            "column1": "",
            "column2": "Old Muffler",
            "column3": "10",
            "column4": "Heavy-Duty",
            "column5": "80",
            "column6": "Base.OldCarMuffler2"
        },
        {
            "column1": "",
            "column2": "Old Muffler",
            "column3": "10",
            "column4": "Sport",
            "column5": "80",
            "column6": "Base.OldCarMuffler3"
        },
        {
            "column1": "",
            "column2": "Average Muffler",
            "column3": "10",
            "column4": "Standard",
            "column5": "100",
            "column6": "Base.NormalCarMuffler1"
        },
        {
            "column1": "",
            "column2": "Average Muffler",
            "column3": "10",
            "column4": "Heavy-Duty",
            "column5": "100",
            "column6": "Base.NormalCarMuffler2"
        },
        {
            "column1": "",
            "column2": "Average Muffler",
            "column3": "10",
            "column4": "Sport",
            "column5": "100",
            "column6": "Base.NormalCarMuffler3"
        },
        {
            "column1": "",
            "column2": "Performance Muffler",
            "column3": "10",
            "column4": "Standard",
            "column5": "120",
            "column6": "Base.ModernCarMuffler1"
        },
        {
            "column1": "",
            "column2": "Performance Muffler",
            "column3": "10",
            "column4": "Heavy-Duty",
            "column5": "120",
            "column6": "Base.ModernCarMuffler2"
        },
        {
            "column1": "",
            "column2": "Performance Muffler",
            "column3": "10",
            "column4": "Sport",
            "column5": "120",
            "column6": "Base.ModernCarMuffler3"
        }
    ])";
    };

    struct Seat {
        const char* jsonData = R"(
    [
        {
            "column1": "",
            "column2": "Standard Seat",
            "column3": "15",
            "column4": "Standard",
            "column5": "20",
            "column6": "Base.NormalCarSeat1"
        },
        {
            "column1": "",
            "column2": "Standard Seat",
            "column3": "15",
            "column4": "Heavy-Duty",
            "column5": "20",
            "column6": "Base.NormalCarSeat2"
        },
        {
            "column1": "",
            "column2": "Standard Seat",
            "column3": "15",
            "column4": "Sport",
            "column5": "20",
            "column6": "Base.NormalCarSeat3"
        },
        {
            "column1": "",
            "column2": "Big Seat",
            "column3": "20",
            "column4": "Standard",
            "column5": "30",
            "column6": "Base.BigCarSeat1"
        },
        {
            "column1": "",
            "column2": "Big Seat",
            "column3": "20",
            "column4": "Heavy-Duty",
            "column5": "30",
            "column6": "Base.BigCarSeat2"
        },
        {
            "column1": "",
            "column2": "Big Seat",
            "column3": "20",
            "column4": "Sport",
            "column5": "30",
            "column6": "Base.BigCarSeat3"
        },
        {
            "column1": "",
            "column2": "Sports Seat",
            "column3": "10",
            "column4": "Standard",
            "column5": "10",
            "column6": "Base.SportCarSeat1"
        },
        {
            "column1": "",
            "column2": "Sports Seat",
            "column3": "10",
            "column4": "Heavy-Duty",
            "column5": "10",
            "column6": "Base.SportCarSeat2"
        },
        {
            "column1": "",
            "column2": "Sports Seat",
            "column3": "10",
            "column4": "Sport",
            "column5": "10",
            "column6": "Base.SportCarSeat3"
        }
    ])";
    };

    struct Suspension {
        const char* jsonData = R"(
    [
        {
            "column1": "",
            "column2": "Regular Suspension",
            "column3": "2",
            "column4": "Standard",
            "column5": "2.88",
            "column6": "3.83",
            "column7": "0.03",
            "column8": "0.04",
            "column9": "&",
            "column10": "Mechanics 3",
            "column11": "",
            "column12": "Base.NormalSuspension1"
        },
        {
            "column1": "",
            "column2": "Regular Suspension",
            "column3": "2",
            "column4": "Heavy-Duty",
            "column5": "3.88",
            "column6": "4.83",
            "column7": "0.03",
            "column8": "0.15",
            "column9": "&",
            "column10": "Mechanics 6",
            "column11": "",
            "column12": "Base.NormalSuspension2"
        },
        {
            "column1": "",
            "column2": "Regular Suspension",
            "column3": "2",
            "column4": "Sport",
            "column5": "3.4",
            "column6": "4.1",
            "column7": "0.03",
            "column8": "0.4",
            "column9": "&",
            "column10": "Mechanics 7",
            "column11": "",
            "column12": "Base.NormalSuspension3"
        },
        {
            "column1": "",
            "column2": "Performance Suspension",
            "column3": "3",
            "column4": "Standard",
            "column5": "2.88",
            "column6": "3.83",
            "column7": "0.02",
            "column8": "0.03",
            "column9": "&",
            "column10": "Mechanics 3",
            "column11": "",
            "column12": "Base.ModernSuspension1"
        },
        {
            "column1": "",
            "column2": "Performance Suspension",
            "column3": "3",
            "column4": "Heavy-Duty",
            "column5": "3.88",
            "column6": "4.83",
            "column7": "0.02",
            "column8": "0.1",
            "column9": "&",
            "column10": "Mechanics 6",
            "column11": "",
            "column12": "Base.ModernSuspension2"
        },
        {
            "column1": "",
            "column2": "Performance Suspension",
            "column3": "3",
            "column4": "Sport",
            "column5": "3.4",
            "column6": "4.1",
            "column7": "0.02",
            "column8": "0.3",
            "column9": "&",
            "column10": "Mechanics 7",
            "column11": "",
            "column12": "Base.ModernSuspension3"
        }
    ])";
    };

    struct Tire {
        const char* jsonData = R"(
    [
        {
            "column1": "",
            "column2": "Valu-Tire",
            "column3": "15",
            "column4": "Standard",
            "column5": "1.2",
            "column6": "Base.OldTire1"
        },
        {
            "column1": "",
            "column2": "Valu-Tire",
            "column3": "15",
            "column4": "Heavy-Duty",
            "column5": "1.3",
            "column6": "Base.OldTire2"
        },
        {
            "column1": "",
            "column2": "Valu-Tire",
            "column3": "15",
            "column4": "Sport",
            "column5": "1.3",
            "column6": "Base.OldTire3"
        },
        {
            "column1": "",
            "column2": "Regular Tire",
            "column3": "15",
            "column4": "Standard",
            "column5": "1.4",
            "column6": "Base.NormalTire1"
        },
        {
            "column1": "",
            "column2": "Regular Tire",
            "column3": "15",
            "column4": "Heavy-Duty",
            "column5": "1.5",
            "column6": "Base.NormalTire2"
        },
        {
            "column1": "",
            "column2": "Regular Tire",
            "column3": "15",
            "column4": "Sport",
            "column5": "1.6",
            "column6": "Base.NormalTire3"
        },
        {
            "column1": "",
            "column2": "Performance Tire",
            "column3": "15",
            "column4": "Standard",
            "column5": "1.6",
            "column6": "Base.ModernTire1"
        },
        {
            "column1": "",
            "column2": "Performance Tire",
            "column3": "15",
            "column4": "Heavy-Duty",
            "column5": "1.6",
            "column6": "Base.ModernTire2"
        },
        {
            "column1": "",
            "column2": "Performance Tire",
            "column3": "15",
            "column4": "Sport",
            "column5": "1.8",
            "column6": "Base.ModernTire3"
        }
    ])";
    };

    struct Window {
        const char* jsonData = R"(
    [
        {
            "column1": "",
            "column2": "Windshield",
            "column3": "8",
            "column4": "Standard",
            "column5": "Base.Windshield1"
        },
        {
            "column1": "",
            "column2": "Windshield",
            "column3": "8",
            "column4": "Heavy-Duty",
            "column5": "Base.Windshield2"
        },
        {
            "column1": "",
            "column2": "Windshield",
            "column3": "8",
            "column4": "Sport",
            "column5": "Base.Windshield3"
        },
        {
            "column1": "",
            "column2": "Rear Windshield",
            "column3": "8",
            "column4": "Standard",
            "column5": "Base.RearWindshield1"
        },
        {
            "column1": "",
            "column2": "Rear Windshield",
            "column3": "8",
            "column4": "Heavy-Duty",
            "column5": "Base.RearWindshield2"
        },
        {
            "column1": "",
            "column2": "Rear Windshield",
            "column3": "8",
            "column4": "Sport",
            "column5": "Base.RearWindshield3"
        },
        {
            "column1": "",
            "column2": "Front Window",
            "column3": "3",
            "column4": "Standard",
            "column5": "Base.FrontWindow1"
        },
        {
            "column1": "",
            "column2": "Front Window",
            "column3": "3",
            "column4": "Heavy-Duty",
            "column5": "Base.FrontWindow2"
        },
        {
            "column1": "",
            "column2": "Front Window",
            "column3": "3",
            "column4": "Sport",
            "column5": "Base.FrontWindow3"
        },
        {
            "column1": "",
            "column2": "Rear Window",
            "column3": "3",
            "column4": "Standard",
            "column5": "Base.RearWindow1"
        },
        {
            "column1": "",
            "column2": "Rear Window",
            "column3": "3",
            "column4": "Heavy-Duty",
            "column5": "Base.RearWindow2"
        },
        {
            "column1": "",
            "column2": "Rear Window",
            "column3": "3",
            "column4": "Sport",
            "column5": "Base.RearWindow3"
        }
    ])";
    };

    struct Axe {
        const char* jsonData = R"(
    [
        {
            "column1": "",
            "column2": "Axe",
            "column3": "3.0",
            "column4": "Two-Hand",
            "column5": "0.8",
            "column6": "2",
            "column7": "35",
            "column8": "35",
            "column9": "0.61",
            "column10": "1.2",
            "column11": "1",
            "column12": "20%",
            "column13": "5x",
            "column14": "0.3",
            "column15": "2",
            "column16": "13",
            "column17": "35",
            "column18": "455",
            "column19": "Base.Axe"
        },
        {
            "column1": "",
            "column2": "Hand Axe",
            "column3": "2.0",
            "column4": "One-Hand",
            "column5": "0.7",
            "column6": "1.5",
            "column7": "20",
            "column8": "15",
            "column9": "0.61",
            "column10": "1.1",
            "column11": "1",
            "column12": "15%",
            "column13": "5x",
            "column14": "0.3",
            "column15": "2",
            "column16": "10",
            "column17": "15",
            "column18": "150",
            "column19": "Base.HandAxe"
        },
        {
            "column1": "",
            "column2": "Pick Axe",
            "column3": "3.0",
            "column4": "Two-Hand",
            "column5": "1",
            "column6": "2.2",
            "column7": "35",
            "column8": "35",
            "column9": "0.61",
            "column10": "1.6",
            "column11": "0.8",
            "column12": "25%",
            "column13": "9x",
            "column14": "0.3",
            "column15": "2",
            "column16": "13",
            "column17": "20",
            "column18": "260",
            "column19": "Base.PickAxe"
        },
        {
            "column1": "",
            "column2": "Stone Axe",
            "column3": "1.2",
            "column4": "Two-Hand",
            "column5": "0.5",
            "column6": "1.5",
            "column7": "10",
            "column8": "15",
            "column9": "0.61",
            "column10": "1.2",
            "column11": "1",
            "column12": "15%",
            "column13": "5x",
            "column14": "0.3",
            "column15": "1.5",
            "column16": "5",
            "column17": "5",
            "column18": "25",
            "column19": "Base.AxeStone"
        },
        {
            "column1": "",
            "column2": "Wood Axe",
            "column3": "3.0",
            "column4": "Heavy",
            "column5": "1.3",
            "column6": "3",
            "column7": "55",
            "column8": "55",
            "column9": "0.61",
            "column10": "1.35",
            "column11": "1",
            "column12": "50%",
            "column13": "12x",
            "column14": "0.3",
            "column15": "3",
            "column16": "15",
            "column17": "25",
            "column18": "375",
            "column19": "Base.WoodAxe"
        }
    ])";
    };

    struct Handguns {
        const char* jsonData = R"(
    [
        {
            "column1": "",
            "column2": "D-E Pistol",
            "column3": "1.5",
            "column4": "One-Hand",
            "column5": "",
            "column6": "8",
            "column7": "1",
            "column8": "1.9",
            "column9": "0.61",
            "column10": "10",
            "column11": "20",
            "column12": "+12",
            "column13": "20%",
            "column14": "+10%",
            "column15": "70",
            "column16": "0.3",
            "column17": "2",
            "column18": "Base.Pistol3"
        },
        {
            "column1": "",
            "column2": "M1911 Pistol",
            "column3": "1.5",
            "column4": "One-Hand",
            "column5": "",
            "column6": "7",
            "column7": "1",
            "column8": "1.4",
            "column9": "0.61",
            "column10": "8",
            "column11": "40",
            "column12": "+10",
            "column13": "20%",
            "column14": "+10%",
            "column15": "50",
            "column16": "0.3",
            "column17": "2",
            "column18": "Base.Pistol2"
        },
        {
            "column1": "",
            "column2": "M36 Revolver",
            "column3": "1.5",
            "column4": "One-Hand",
            "column5": "",
            "column6": "5",
            "column7": "0.7",
            "column8": "1.2",
            "column9": "0.61",
            "column10": "6",
            "column11": "65",
            "column12": "+8",
            "column13": "20%",
            "column14": "+10%",
            "column15": "30",
            "column16": "0.3",
            "column17": "2",
            "column18": "Base.Revolver_Short"
        },
        {
            "column1": "",
            "column2": "M625 Revolver",
            "column3": "1.75",
            "column4": "One-Hand",
            "column5": "",
            "column6": "6",
            "column7": "1",
            "column8": "1.6",
            "column9": "0.61",
            "column10": "9",
            "column11": "30",
            "column12": "+10",
            "column13": "20%",
            "column14": "+10%",
            "column15": "50",
            "column16": "0.3",
            "column17": "2",
            "column18": "Base.Revolver"
        },
        {
            "column1": "",
            "column2": "M9 Pistol",
            "column3": "1.5",
            "column4": "One-Hand",
            "column5": "",
            "column6": "15",
            "column7": "0.6",
            "column8": "1",
            "column9": "0.61",
            "column10": "7",
            "column11": "50",
            "column12": "+8",
            "column13": "20%",
            "column14": "+10%",
            "column15": "40",
            "column16": "0.3",
            "column17": "2",
            "column18": "Base.Pistol"
        },
        {
            "column1": "",
            "column2": "Magnum",
            "column3": "2.0",
            "column4": "One-Hand",
            "column5": "",
            "column6": "6",
            "column7": "1.2",
            "column8": "1.9",
            "column9": "0.61",
            "column10": "11",
            "column11": "20",
            "column12": "+12",
            "column13": "20%",
            "column14": "+10%",
            "column15": "80",
            "column16": "0.3",
            "column17": "2",
            "column18": "Base.Revolver_Long"
        }
    ])";
    };

    struct Improvised {
        const char* jsonData = R"(
    [
        {
            "column1": "",
            "column2": "Pen",
            "column3": "0.1",
            "column4": "Stab",
            "column5": "0.1",
            "column6": "0.1",
            "column7": "-",
            "column8": "-",
            "column9": "0.61",
            "column10": "0.8",
            "column11": "2",
            "column12": "-",
            "column13": "0.3",
            "column14": "-",
            "column15": "2",
            "column16": "2",
            "column17": "Base.PenBase.RedPenBase.BluePen"
        },
        {
            "column1": "",
            "column2": "Pencil",
            "column3": "0.1",
            "column4": "Stab",
            "column5": "0.1",
            "column6": "0.1",
            "column7": "-",
            "column8": "-",
            "column9": "0.61",
            "column10": "0.8",
            "column11": "2",
            "column12": "-",
            "column13": "0.3",
            "column14": "-",
            "column15": "2",
            "column16": "2",
            "column17": "Base.Pencil"
        }
    ])";
    };

    struct LongBlade {
        const char* jsonData = R"(
    [
        {
            "column1": "",
            "column2": "Katana",
            "column3": "2.0",
            "column4": "Two-Hand",
            "column5": "8",
            "column6": "8",
            "column7": "8",
            "column8": "1",
            "column9": "0.61",
            "column10": "1.4",
            "column11": "1",
            "column12": "30%",
            "column13": "6x",
            "column14": "0.5",
            "column15": "-",
            "column16": "10",
            "column17": "15",
            "column18": "150",
            "column19": "Base.Katana"
        },
        {
            "column1": "",
            "column2": "Machete",
            "column3": "2.0",
            "column4": "One-Hand",
            "column5": "2",
            "column6": "3",
            "column7": "10",
            "column8": "10",
            "column9": "0.61",
            "column10": "1.23",
            "column11": "1",
            "column12": "20%",
            "column13": "5x",
            "column14": "0.3",
            "column15": "2",
            "column16": "13",
            "column17": "25",
            "column18": "325",
            "column19": "Base.Machete"
        }
    ])";
    };

    struct LongBlunt {
        const char* jsonData = R"(
    [
        {
            "column1": "",
            "column2": "Acoustic Guitar",
            "column3": "2.3",
            "column4": "Two-Hand",
            "column5": "0.3",
            "column6": "0.8",
            "column7": "3",
            "column8": "10",
            "column9": "0.61",
            "column10": "1.3",
            "column11": "0.9",
            "column12": "20%",
            "column13": "2x",
            "column14": "0.3",
            "column15": "1.5",
            "column16": "2",
            "column17": "3",
            "column18": "6",
            "column19": "Base.GuitarAcoustic"
        },
        {
            "column1": "",
            "column2": "Badminton Racket",
            "column3": "1.0",
            "column4": "One-Hand",
            "column5": "0.1",
            "column6": "0.2",
            "column7": "2",
            "column8": "-",
            "column9": "0.61",
            "column10": "1.25",
            "column11": "1.2",
            "column12": "-",
            "column13": "-",
            "column14": "0.3",
            "column15": "2",
            "column16": "4",
            "column17": "3",
            "column18": "12",
            "column19": "Base.BadmintonRacket"
        },
        {
            "column1": "",
            "column2": "Barbell",
            "column3": "6.0",
            "column4": "Heavy",
            "column5": "1.8",
            "column6": "2.8",
            "column7": "35",
            "column8": "55",
            "column9": "0.61",
            "column10": "1.35",
            "column11": "0.7",
            "column12": "-",
            "column13": "2x",
            "column14": "0.3",
            "column15": "2",
            "column16": "15",
            "column17": "25",
            "column18": "375",
            "column19": "Base.BarBell"
        },
        {
            "column1": "",
            "column2": "Baseball Bat",
            "column3": "2.0",
            "column4": "Two-Hand",
            "column5": "0.8",
            "column6": "1.1",
            "column7": "5",
            "column8": "1",
            "column9": "0.61",
            "column10": "1.25",
            "column11": "1",
            "column12": "40%",
            "column13": "2x",
            "column14": "0.5",
            "column15": "2",
            "column16": "15",
            "column17": "20",
            "column18": "300",
            "column19": "Base.BaseballBat"
        },
        {
            "column1": "",
            "column2": "Broom",
            "column3": "1.0",
            "column4": "Two-Hand",
            "column5": "0.2",
            "column6": "0.5",
            "column7": "1",
            "column8": "-",
            "column9": "0.61",
            "column10": "1.6",
            "column11": "1.2",
            "column12": "5%",
            "column13": "1x",
            "column14": "0.3",
            "column15": "-",
            "column16": "3",
            "column17": "2",
            "column18": "6",
            "column19": "Base.Broom"
        },
        {
            "column1": "",
            "column2": "Canoe Paddle",
            "column3": "2.0",
            "column4": "Two-Hand",
            "column5": "0.5",
            "column6": "1.3",
            "column7": "1",
            "column8": "-",
            "column9": "0.61",
            "column10": "1.6",
            "column11": "0.85",
            "column12": "40%",
            "column13": "2x",
            "column14": "0.3",
            "column15": "-",
            "column16": "10",
            "column17": "10",
            "column18": "100",
            "column19": "Base.CanoePadel"
        },
        {
            "column1": "",
            "column2": "Canoe Paddle - Double-bladed",
            "column3": "2.2",
            "column4": "Two-Hand",
            "column5": "0.8",
            "column6": "1.9",
            "column7": "1",
            "column8": "-",
            "column9": "0.61",
            "column10": "1.6",
            "column11": "0.8",
            "column12": "50%",
            "column13": "2x",
            "column14": "0.3",
            "column15": "-",
            "column16": "10",
            "column17": "10",
            "column18": "100",
            "column19": "Base.CanoePadelX2"
        },
        {
            "column1": "",
            "column2": "Chainsaw",
            "column3": "3.0",
            "column4": "Chainsaw",
            "column5": "0.6",
            "column6": "1.1",
            "column7": "8",
            "column8": "-",
            "column9": "0.61",
            "column10": "1.2",
            "column11": "1",
            "column12": "35%",
            "column13": "6x",
            "column14": "0.5",
            "column15": "-",
            "column16": "15",
            "column17": "70",
            "column18": "1050",
            "column19": "Base.Chainsaw"
        },
        {
            "column1": "",
            "column2": "Crowbar",
            "column3": "2.0",
            "column4": "Two-Hand",
            "column5": "0.6",
            "column6": "1.15",
            "column7": "8",
            "column8": "-",
            "column9": "0.61",
            "column10": "1.25",
            "column11": "1",
            "column12": "20%",
            "column13": "2.5x",
            "column14": "0.5",
            "column15": "-",
            "column16": "15",
            "column17": "70",
            "column18": "1050",
            "column19": "Base.Crowbar"
        },
        {
            "column1": "",
            "column2": "Electric Bass",
            "column3": "3.5",
            "column4": "Heavy",
            "column5": "0.9",
            "column6": "1.4",
            "column7": "10",
            "column8": "-",
            "column9": "0.61",
            "column10": "1.35",
            "column11": "1",
            "column12": "70%",
            "column13": "2x",
            "column14": "0.3",
            "column15": "1.5",
            "column16": "12",
            "column17": "9",
            "column18": "108",
            "column19": "Base.GuitarElectricBassBlack"
        },
        {
            "column1": "",
            "column2": "Electric Guitar",
            "column3": "2.8",
            "column4": "Heavy",
            "column5": "0.8",
            "column6": "1.2",
            "column7": "10",
            "column8": "-",
            "column9": "0.61",
            "column10": "1.35",
            "column11": "1.1",
            "column12": "55%",
            "column13": "2x",
            "column14": "0.3",
            "column15": "1.5",
            "column16": "10",
            "column17": "7",
            "column18": "70",
            "column19": "Base.GuitarElectricBlack"
        },
        {
            "column1": "",
            "column2": "Fishing Rod (crafted) ",
            "column3": "0.4",
            "column4": "Two-Hand",
            "column5": "0.2",
            "column6": "0.3",
            "column7": "1",
            "column8": "-",
            "column9": "0.61",
            "column10": "1.55",
            "column11": "1.3",
            "column12": "5%",
            "column13": "2x",
            "column14": "0.3",
            "column15": "-",
            "column16": "3",
            "column17": "1",
            "column18": "3",
            "column19": "Base.CraftedFishingRod"
        },
        {
            "column1": "",
            "column2": "Fishing Rod",
            "column3": "0.4",
            "column4": "Two-Hand",
            "column5": "0.2",
            "column6": "0.3",
            "column7": "1",
            "column8": "-",
            "column9": "0.61",
            "column10": "1.55",
            "column11": "1.3",
            "column12": "5%",
            "column13": "2x",
            "column14": "0.3",
            "column15": "-",
            "column16": "3",
            "column17": "1",
            "column18": "3",
            "column19": "Base.FishingRod"
        },
        {
            "column1": "",
            "column2": "Fishing Rod without Line",
            "column3": "0.4",
            "column4": "Two-Hand",
            "column5": "0.2",
            "column6": "0.3",
            "column7": "1",
            "column8": "-",
            "column9": "0.61",
            "column10": "1.55",
            "column11": "1.3",
            "column12": "5%",
            "column13": "2x",
            "column14": "0.3",
            "column15": "-",
            "column16": "3",
            "column17": "1",
            "column18": "3",
            "column19": "Base.FishingRodBreak"
        },
        {
            "column1": "",
            "column2": "Garden Hoe",
            "column3": "1.5",
            "column4": "Two-Hand",
            "column5": "0.6",
            "column6": "1.7",
            "column7": "10",
            "column8": "1",
            "column9": "0.61",
            "column10": "1.6",
            "column11": "0.85",
            "column12": "35%",
            "column13": "2x",
            "column14": "0.5",
            "column15": "2",
            "column16": "10",
            "column17": "10",
            "column18": "100",
            "column19": "Base.GardenHoe"
        },
        {
            "column1": "",
            "column2": "Golf Club",
            "column3": "2.0",
            "column4": "Two-Hand",
            "column5": "0.5",
            "column6": "1.0",
            "column7": "5",
            "column8": "-",
            "column9": "0.61",
            "column10": "1.42",
            "column11": "1",
            "column12": "25%",
            "column13": "2x",
            "column14": "0.6",
            "column15": "-",
            "column16": "5",
            "column17": "15",
            "column18": "75",
            "column19": "Base.Golfclub"
        },
        {
            "column1": "",
            "column2": "Hockey Stick",
            "column3": "1.5",
            "column4": "Two-Hand",
            "column5": "0.3",
            "column6": "0.7",
            "column7": "1",
            "column8": "-",
            "column9": "0.61",
            "column10": "1.6",
            "column11": "0.9",
            "column12": "30%",
            "column13": "2x",
            "column14": "0.3",
            "column15": "-",
            "column16": "7",
            "column17": "5",
            "column18": "35",
            "column19": "Base.HockeyStick"
        },
        {
            "column1": "",
            "column2": "Ice Hockey Stick",
            "column3": "1.5",
            "column4": "Two-Hand",
            "column5": "0.3",
            "column6": "0.7",
            "column7": "1",
            "column8": "-",
            "column9": "0.61",
            "column10": "1.6",
            "column11": "0.9",
            "column12": "30%",
            "column13": "2x",
            "column14": "0.3",
            "column15": "-",
            "column16": "7",
            "column17": "5",
            "column18": "35",
            "column19": "Base.IceHockeyStick"
        },
        {
            "column1": "",
            "column2": "Keytar",
            "column3": "2.0",
            "column4": "Heavy",
            "column5": "0.2",
            "column6": "0.7",
            "column7": "3",
            "column8": "10",
            "column9": "0.58",
            "column10": "1.25",
            "column11": "1.2",
            "column12": "20%",
            "column13": "2x",
            "column14": "0.3",
            "column15": "1.5",
            "column16": "2",
            "column17": "3",
            "column18": "6",
            "column19": "Base.Keytar"
        },
        {
            "column1": "",
            "column2": "Lacrosse Stick",
            "column3": "0.4",
            "column4": "Two-Hand",
            "column5": "0.3",
            "column6": "0.7",
            "column7": "1",
            "column8": "-",
            "column9": "0.61",
            "column10": "1.6",
            "column11": "0.9",
            "column12": "30%",
            "column13": "2x",
            "column14": "0.3",
            "column15": "-",
            "column16": "10",
            "column17": "10",
            "column18": "100",
            "column19": "Base.LaCrosseStick"
        },
        {
            "column1": "",
            "column2": "Leaf Rake",
            "column3": "1.5",
            "column4": "Two-Hand",
            "column5": "0.2",
            "column6": "0.4",
            "column7": "1",
            "column8": "0",
            "column9": "0.61",
            "column10": "1.6",
            "column11": "1.2",
            "column12": "5%",
            "column13": "1x",
            "column14": "0.3",
            "column15": "-",
            "column16": "4",
            "column17": "3",
            "column18": "12",
            "column19": "Base.LeafRake"
        },
        {
            "column1": "",
            "column2": "Plank",
            "column3": "3.0",
            "column4": "Two-Hand",
            "column5": "0.4",
            "column6": "0.6",
            "column7": "5",
            "column8": "-",
            "column9": "0.61",
            "column10": "1.3",
            "column11": "0.9",
            "column12": "30%",
            "column13": "2x",
            "column14": "0.3",
            "column15": "2",
            "column16": "10",
            "column17": "2",
            "column18": "20",
            "column19": "Base.Plank"
        },
        {
            "column1": "",
            "column2": "Pool Cue",
            "column3": "1.0",
            "column4": "Two-Hand",
            "column5": "0.2",
            "column6": "0.4",
            "column7": "1",
            "column8": "-",
            "column9": "0.61",
            "column10": "1.6",
            "column11": "1.2",
            "column12": "-",
            "column13": "-",
            "column14": "0.3",
            "column15": "-",
            "column16": "10",
            "column17": "10",
            "column18": "100",
            "column19": "Base.Poolcue"
        },
        {
            "column1": "",
            "column2": "Rake",
            "column3": "1.5",
            "column4": "Two-Hand",
            "column5": "0.2",
            "column6": "0.4",
            "column7": "1",
            "column8": "-",
            "column9": "0.61",
            "column10": "1.6",
            "column11": "1.2",
            "column12": "5%",
            "column13": "1x",
            "column14": "0.3",
            "column15": "-",
            "column16": "4",
            "column17": "3",
            "column18": "12",
            "column19": "Base.Rake"
        },
        {
            "column1": "",
            "column2": "Saxophone",
            "column3": "3.0",
            "column4": "One-Hand",
            "column5": "0.4",
            "column6": "0.8",
            "column7": "5",
            "column8": "-",
            "column9": "0.61",
            "column10": "1.2",
            "column11": "0.9",
            "column12": "70%",
            "column13": "2x",
            "column14": "0.3",
            "column15": "2",
            "column16": "5",
            "column17": "2",
            "column18": "10",
            "column19": "Base.Saxophone"
        },
        {
            "column1": "",
            "column2": "Shovel",
            "column3": "1.5",
            "column4": "Two-Hand",
            "column5": "0.8",
            "column6": "1.9",
            "column7": "10",
            "column8": "1",
            "column9": "0.61",
            "column10": "1.6",
            "column11": "0.8",
            "column12": "40%",
            "column13": "2x",
            "column14": "0.5",
            "column15": "2",
            "column16": "10",
            "column17": "10",
            "column18": "100",
            "column19": "Base.ShovelBase.Shovel2"
        }
    ])";
    };

    struct LongBlunt2
    {
        const char* jsonData = R"(
        [
            {
                "column1": "",
                "column2": "Sledgehammer",
                "column3": "6.0",
                "column4": "Heavy",
                "column5": "2",
                "column6": "3",
                "column7": "40",
                "column8": "10",
                "column9": "0.7",
                "column10": "1.35",
                "column11": "0.9",
                "column12": "-",
                "column13": "2x",
                "column14": "1",
                "column15": "3",
                "column16": "10",
                "column17": "40",
                "column18": "400",
                "column19": "Base.SledgehammerBase.Sledgehammer2"
            },
            {
                "column1": "",
                "column2": "Snow Shovel",
                "column3": "1.5",
                "column4": "Two-Hand",
                "column5": "0.8",
                "column6": "1.9",
                "column7": "10",
                "column8": "1",
                "column9": "0.61",
                "column10": "1.6",
                "column11": "0.8",
                "column12": "40%",
                "column13": "2x",
                "column14": "0.5",
                "column15": "2",
                "column16": "10",
                "column17": "10",
                "column18": "100",
                "column19": "Base.SnowShovel"
            },
            {
                "column1": "",
                "column2": "Spiked Baseball Bat",
                "column3": "2.0",
                "column4": "Two-Hand",
                "column5": "1",
                "column6": "1.5",
                "column7": "7",
                "column8": "1",
                "column9": "0.61",
                "column10": "1.28",
                "column11": "0.95",
                "column12": "30%",
                "column13": "5x",
                "column14": "0.5",
                "column15": "2",
                "column16": "15",
                "column17": "10",
                "column18": "150",
                "column19": "Base.BaseballBatNails"
            },
            {
                "column1": "",
                "column2": "Spiked Plank",
                "column3": "3.1",
                "column4": "Two-Hand",
                "column5": "0.5",
                "column6": "0.8",
                "column7": "8",
                "column8": "-",
                "column9": "0.61",
                "column10": "1.32",
                "column11": "0.85",
                "column12": "25%",
                "column13": "5x",
                "column14": "0.3",
                "column15": "2",
                "column16": "10",
                "column17": "2",
                "column18": "20",
                "column19": "Base.PlankNail"
            },
            {
                "column1": "",
                "column2": "Tennis Racket",
                "column3": "1.0",
                "column4": "One-Hand",
                "column5": "0.3",
                "column6": "0.5",
                "column7": "2",
                "column8": "-",
                "column9": "0.61",
                "column10": "1.25",
                "column11": "1.1",
                "column12": "5%",
                "column13": "1x",
                "column14": "0.3",
                "column15": "2",
                "column16": "4",
                "column17": "6",
                "column18": "24",
                "column19": "Base.TennisRacket"
            },
            {
                "column1": "",
                "column2": "Trumpet",
                "column3": "1.0",
                "column4": "One-Hand",
                "column5": "0.4",
                "column6": "0.8",
                "column7": "5",
                "column8": "-",
                "column9": "0.61",
                "column10": "1.15",
                "column11": "1",
                "column12": "20%",
                "column13": "2x",
                "column14": "0.3",
                "column15": "2",
                "column16": "5",
                "column17": "2",
                "column18": "10",
                "column19": "Base.Trumpet"
            }
        ]
    )";
    };

    struct Riles {
        const char* jsonData = R"(
    [
        {
            "column1": "",
            "column2": "M14 Rifle",
            "column3": "4.0",
            "column4": "Two-Hand",
            "column5": "",
            "column6": "20",
            "column7": "1.2",
            "column8": "2.0",
            "column9": "0.61",
            "column10": "10",
            "column11": "50",
            "column12": "+5",
            "column13": "30%",
            "column14": "+15%",
            "column15": "70",
            "column16": "0.3",
            "column17": "2",
            "column18": "Base.AssaultRifle2"
        },
        {
            "column1": "",
            "column2": "M16 Assault Rifle",
            "column3": "4.0",
            "column4": "Two-Hand",
            "column5": "",
            "column6": "30",
            "column7": "0.8",
            "column8": "1.4",
            "column9": "0.61",
            "column10": "11",
            "column11": "20",
            "column12": "+7",
            "column13": "25%",
            "column14": "+12%",
            "column15": "70",
            "column16": "0.3",
            "column17": "4",
            "column18": "Base.AssaultRifle"
        },
        {
            "column1": "",
            "column2": "MSR700 Rifle",
            "column3": "4.0",
            "column4": "Two-Hand",
            "column5": "",
            "column6": "3",
            "column7": "0.6",
            "column8": "1.3",
            "column9": "0.61",
            "column10": "10",
            "column11": "27",
            "column12": "+17",
            "column13": "25%",
            "column14": "+12%",
            "column15": "70",
            "column16": "0.3",
            "column17": "2",
            "column18": "Base.VarmintRifle"
        },
        {
            "column1": "",
            "column2": "MSR788 Rifle",
            "column3": "4.0",
            "column4": "Two-Hand",
            "column5": "",
            "column6": "3",
            "column7": "1.2",
            "column8": "2.0",
            "column9": "0.61",
            "column10": "10",
            "column11": "25",
            "column12": "+15",
            "column13": "30%",
            "column14": "+15%",
            "column15": "70",
            "column16": "0.3",
            "column17": "2",
            "column18": "Base.HuntingRifle"
        }
    ])";
    };

    struct Short_blade {
        const char* jsonData = R"(
    [
        {
            "column1": "",
            "column2": "Bread Knife",
            "column3": "0.3",
            "column4": "Stab",
            "column5": "0.1",
            "column6": "0.4",
            "column7": "1",
            "column8": "-",
            "column9": "0.61",
            "column10": "1",
            "column11": "1",
            "column12": "15%",
            "column13": "10x",
            "column14": "0.3",
            "column15": "-",
            "column16": "5",
            "column17": "5",
            "column18": "25",
            "column19": "Base.BreadKnife"
        },
        {
            "column1": "",
            "column2": "Butter Knife",
            "column3": "0.3",
            "column4": "Stab",
            "column5": "0.1",
            "column6": "0.4",
            "column7": "1",
            "column8": "-",
            "column9": "0.61",
            "column10": "0.8",
            "column11": "1",
            "column12": "7%",
            "column13": "10x",
            "column14": "0.3",
            "column15": "-",
            "column16": "3",
            "column17": "1",
            "column18": "3",
            "column19": "Base.ButterKnife"
        },
        {
            "column1": "",
            "column2": "Fork",
            "column3": "0.3",
            "column4": "Stab",
            "column5": "0.1",
            "column6": "0.1",
            "column7": "1",
            "column8": "-",
            "column9": "0.2",
            "column10": "0.8",
            "column11": "1",
            "column12": "5%",
            "column13": "10x",
            "column14": "0.3",
            "column15": "-",
            "column16": "3",
            "column17": "1",
            "column18": "3",
            "column19": "Base.Fork"
        },
        {
            "column1": "",
            "column2": "Hand Fork",
            "column3": "0.5",
            "column4": "Stab",
            "column5": "0.2",
            "column6": "0.4",
            "column7": "5",
            "column8": "-",
            "column9": "0.61",
            "column10": "0.9",
            "column11": "1",
            "column12": "10%",
            "column13": "10x",
            "column14": "0.3",
            "column15": "2",
            "column16": "6",
            "column17": "9",
            "column18": "54",
            "column19": "Base.HandFork"
        },
        {
            "column1": "",
            "column2": "Trowel",
            "column3": "0.5",
            "column4": "One-Hand",
            "column5": "0.2",
            "column6": "0.4",
            "column7": "5",
            "column8": "-",
            "column9": "0.61",
            "column10": "0.9",
            "column11": "1",
            "column12": "30%",
            "column13": "10x",
            "column14": "0.3",
            "column15": "2",
            "column16": "6",
            "column17": "9",
            "column18": "54",
            "column19": "Base.HandShovel"
        },
        {
            "column1": "",
            "column2": "Hand Scythe",
            "column3": "0.5",
            "column4": "One-Hand",
            "column5": "0.6",
            "column6": "1.2",
            "column7": "5",
            "column8": "-",
            "column9": "0.61",
            "column10": "1.1",
            "column11": "1.1",
            "column12": "15%",
            "column13": "5x",
            "column14": "0.3",
            "column15": "2",
            "column16": "5",
            "column17": "5",
            "column18": "25",
            "column19": "Base.HandScythe"
        },
        {
            "column1": "",
            "column2": "Hunting Knife",
            "column3": "0.5",
            "column4": "Stab",
            "column5": "0.6",
            "column6": "1.2",
            "column7": "1",
            "column8": "2",
            "column9": "0.61",
            "column10": "0.9",
            "column11": "1",
            "column12": "50%",
            "column13": "3x",
            "column14": "0.3",
            "column15": "-",
            "column16": "10",
            "column17": "15",
            "column18": "150",
            "column19": "Base.HuntingKnife"
        },
        {
            "column1": "",
            "column2": "Ice Pick",
            "column3": "0.3",
            "column4": "Stab",
            "column5": "0.6",
            "column6": "0.9",
            "column7": "1",
            "column8": "2",
            "column9": "0.61",
            "column10": "0.9",
            "column11": "1",
            "column12": "10%",
            "column13": "5x",
            "column14": "0.3",
            "column15": "-",
            "column16": "10",
            "column17": "7",
            "column18": "70",
            "column19": "Base.IcePick"
        },
        {
            "column1": "",
            "column2": "Kitchen Knife",
            "column3": "0.3",
            "column4": "Stab",
            "column5": "0.3",
            "column6": "0.7",
            "column7": "1",
            "column8": "1",
            "column9": "0.61",
            "column10": "0.9",
            "column11": "1",
            "column12": "25%",
            "column13": "4x",
            "column14": "0.3",
            "column15": "-",
            "column16": "10",
            "column17": "2",
            "column18": "20",
            "column19": "Base.KitchenKnife"
        },
        {
            "column1": "",
            "column2": "Letter Opener",
            "column3": "0.3",
            "column4": "Stab",
            "column5": "0.1",
            "column6": "0.1",
            "column7": "1",
            "column8": "2",
            "column9": "0.61",
            "column10": "0.9",
            "column11": "1",
            "column12": "5%",
            "column13": "10x",
            "column14": "0.3",
            "column15": "-",
            "column16": "5",
            "column17": "1",
            "column18": "5",
            "column19": "Base.LetterOpener"
        },
        {
            "column1": "",
            "column2": "Meat Cleaver",
            "column3": "1.0",
            "column4": "One-Hand",
            "column5": "0.4",
            "column6": "0.8",
            "column7": "20",
            "column8": "15",
            "column9": "0.61",
            "column10": "1",
            "column11": "1.2",
            "column12": "15%",
            "column13": "5x",
            "column14": "0.3",
            "column15": "2",
            "column16": "10",
            "column17": "15",
            "column18": "150",
            "column19": "Base.MeatCleaver"
        },
        {
            "column1": "",
            "column2": "Scalpel",
            "column3": "0.3",
            "column4": "Stab",
            "column5": "0.1",
            "column6": "0.4",
            "column7": "1",
            "column8": "-",
            "column9": "0.61",
            "column10": "0.8",
            "column11": "1",
            "column12": "10%",
            "column13": "10x",
            "column14": "0.3",
            "column15": "-",
            "column16": "5",
            "column17": "1",
            "column18": "5",
            "column19": "Base.Scalpel"
        },
        {
            "column1": "",
            "column2": "Scissors",
            "column3": "0.4",
            "column4": "Stab",
            "column5": "0.1",
            "column6": "0.1",
            "column7": "1",
            "column8": "-",
            "column9": "0.61",
            "column10": "0.9",
            "column11": "1",
            "column12": "5%",
            "column13": "-",
            "column14": "0.3",
            "column15": "-",
            "column16": "10",
            "column17": "1",
            "column18": "10",
            "column19": "Base.Scissors"
        },
        {
            "column1": "",
            "column2": "Screwdriver",
            "column3": "0.4",
            "column4": "Stab",
            "column5": "0.3",
            "column6": "0.7",
            "column7": "1",
            "column8": "1",
            "column9": "0.61",
            "column10": "0.85",
            "column11": "1",
            "column12": "10%",
            "column13": "10x",
            "column14": "0.3",
            "column15": "-",
            "column16": "10",
            "column17": "6",
            "column18": "60",
            "column19": "Base.Screwdriver"
        },
        {
            "column1": "",
            "column2": "Smashed Bottle",
            "column3": "1.0",
            "column4": "Stab",
            "column5": "0.2",
            "column6": "0.5",
            "column7": "-",
            "column8": "-",
            "column9": "0.61",
            "column10": "0.8",
            "column11": "1.4",
            "column12": "5%",
            "column13": "5x",
            "column14": "0.3",
            "column15": "2",
            "column16": "3",
            "column17": "1",
            "column18": "3",
            "column19": "Base.SmashedBottle"
        },
        {
            "column1": "",
            "column2": "Spoon",
            "column3": "0.3",
            "column4": "Stab",
            "column5": "0.1",
            "column6": "0.1",
            "column7": "1",
            "column8": "-",
            "column9": "0.2",
            "column10": "0.8",
            "column11": "-",
            "column12": "-",
            "column13": "-",
            "column14": "0.3",
            "column15": "-",
            "column16": "3",
            "column17": "1",
            "column18": "3",
            "column19": "Base.Spoon"
        },
        {
            "column1": "",
            "column2": "Stake",
            "column3": "0.3",
            "column4": "Stab",
            "column5": "0.25",
            "column6": "0.53",
            "column7": "1",
            "column8": "-",
            "column9": "0.61",
            "column10": "0.85",
            "column11": "1",
            "column12": "10%",
            "column13": "10x",
            "column14": "0.3",
            "column15": "-",
            "column16": "5",
            "column17": "1",
            "column18": "5",
            "column19": "Base.Stake"
        },
        {
            "column1": "",
            "column2": "Stone Knife",
            "column3": "0.75",
            "column4": "Stab",
            "column5": "0.4",
            "column6": "0.6",
            "column7": "1",
            "column8": "2",
            "column9": "0.61",
            "column10": "0.85",
            "column11": "1",
            "column12": "20%",
            "column13": "2x",
            "column14": "0.3",
            "column15": "-",
            "column16": "6",
            "column17": "7",
            "column18": "42",
            "column19": "Base.FlintKnife"
        }
    ])";
    };

    struct Short_blunt {
        const char* jsonData = R"(
    [
        {
            "column1": "",
            "column2": "Ball-peen Hammer",
            "column3": "1.0",
            "column4": "One-Hand",
            "column5": "0.5",
            "column6": "1",
            "column7": "9",
            "column8": "-",
            "column9": "0.61",
            "column10": "1",
            "column11": "1",
            "column12": "20%",
            "column13": "3x",
            "column14": "0.5",
            "column15": "-",
            "column16": "10",
            "column17": "30",
            "column18": "300",
            "column19": "Base.BallPeenHammer"
        },
        {
            "column1": "",
            "column2": "Banjo",
            "column3": "3.0",
            "column4": "Two-Hand",
            "column5": "0.3",
            "column6": "0.6",
            "column7": "5",
            "column8": "-",
            "column9": "0.61",
            "column10": "1.25",
            "column11": "1.1",
            "column12": "5%",
            "column13": "2x",
            "column14": "0.3",
            "column15": "2",
            "column16": "3",
            "column17": "2",
            "column18": "6",
            "column19": "Base.Banjo"
        },
        {
            "column1": "",
            "column2": "Chair Leg",
            "column3": "1.0",
            "column4": "One-Hand",
            "column5": "0.4",
            "column6": "0.8",
            "column7": "5",
            "column8": "-",
            "column9": "0.61",
            "column10": "1",
            "column11": "1.1",
            "column12": "5%",
            "column13": "2x",
            "column14": "0.3",
            "column15": "2",
            "column16": "3",
            "column17": "2",
            "column18": "6",
            "column19": "Base.ChairLeg"
        },
        {
            "column1": "",
            "column2": "Club Hammer",
            "column3": "1.0",
            "column4": "One-Hand",
            "column5": "0.5",
            "column6": "1",
            "column7": "9",
            "column8": "-",
            "column9": "0.61",
            "column10": "1",
            "column11": "1",
            "column12": "20%",
            "column13": "2x",
            "column14": "0.5",
            "column15": "-",
            "column16": "10",
            "column17": "25",
            "column18": "250",
            "column19": "Base.ClubHammer"
        },
        {
            "column1": "",
            "column2": "Drumstick",
            "column3": "3.0",
            "column4": "One-Hand",
            "column5": "0.1",
            "column6": "0.2",
            "column7": "-",
            "column8": "-",
            "column9": "0.61",
            "column10": "0.9",
            "column11": "1.3",
            "column12": "-",
            "column13": "-",
            "column14": "0.3",
            "column15": "2",
            "column16": "1",
            "column17": "1",
            "column18": "1",
            "column19": "Base.Drumstick"
        },
        {
            "column1": "",
            "column2": "Dumbbell",
            "column3": "5.0",
            "column4": "One-Hand",
            "column5": "0.5",
            "column6": "1",
            "column7": "9",
            "column8": "-",
            "column9": "0.61",
            "column10": "1",
            "column11": "0.9",
            "column12": "25%",
            "column13": "3x",
            "column14": "0.5",
            "column15": "-",
            "column16": "10",
            "column17": "25",
            "column18": "250",
            "column19": "Base.DumbBell"
        },
        {
            "column1": "",
            "column2": "Flute",
            "column3": "3.0",
            "column4": "One-Hand",
            "column5": "0.1",
            "column6": "0.2",
            "column7": "-",
            "column8": "-",
            "column9": "0.61",
            "column10": "0.9",
            "column11": "1.3",
            "column12": "-",
            "column13": "-",
            "column14": "0.3",
            "column15": "2",
            "column16": "1",
            "column17": "1",
            "column18": "1",
            "column19": "Base.Flute"
        },
        {
            "column1": "",
            "column2": "Frying Pan",
            "column3": "1.0",
            "column4": "One-Hand",
            "column5": "0.3",
            "column6": "0.5",
            "column7": "3",
            "column8": "-",
            "column9": "0.61",
            "column10": "1.1",
            "column11": "1",
            "column12": "30%",
            "column13": "2x",
            "column14": "0.5",
            "column15": "1.3",
            "column16": "10",
            "column17": "12",
            "column18": "120",
            "column19": "Base.Pan"
        },
        {
            "column1": "",
            "column2": "Griddle Pan",
            "column3": "1.0",
            "column4": "One-Hand",
            "column5": "0.25",
            "column6": "0.45",
            "column7": "3",
            "column8": "-",
            "column9": "0.61",
            "column10": "1.1",
            "column11": "1",
            "column12": "30%",
            "column13": "1.7x",
            "column14": "0.5",
            "column15": "1.3",
            "column16": "10",
            "column17": "12",
            "column18": "120",
            "column19": "Base.GridlePan"
        },
        {
            "column1": "",
            "column2": "Hammer",
            "column3": "1.0",
            "column4": "One-Hand",
            "column5": "0.5",
            "column6": "1",
            "column7": "9",
            "column8": "-",
            "column9": "0.61",
            "column10": "1.1",
            "column11": "1",
            "column12": "20%",
            "column13": "3x",
            "column14": "0.5",
            "column15": "-",
            "column16": "10",
            "column17": "30",
            "column18": "300",
            "column19": "Base.Hammer"
        },
        {
            "column1": "",
            "column2": "Lead Pipe",
            "column3": "1.5",
            "column4": "One-Hand",
            "column5": "0.7",
            "column6": "1.2",
            "column7": "1",
            "column8": "-",
            "column9": "0.61",
            "column10": "1.15",
            "column11": "0.93",
            "column12": "30%",
            "column13": "2x",
            "column14": "0.3",
            "column15": "-",
            "column16": "15",
            "column17": "20",
            "column18": "300",
            "column19": "Base.LeadPipe"
        },
        {
            "column1": "",
            "column2": "Metal Bar",
            "column3": "1.5",
            "column4": "One-Hand",
            "column5": "0.7",
            "column6": "1.1",
            "column7": "1",
            "column8": "-",
            "column9": "0.61",
            "column10": "1.2",
            "column11": "0.95",
            "column12": "30%",
            "column13": "2x",
            "column14": "0.3",
            "column15": "-",
            "column16": "8",
            "column17": "15",
            "column18": "120",
            "column19": "Base.MetalBar"
        },
        {
            "column1": "",
            "column2": "Metal Pipe",
            "column3": "1.5",
            "column4": "One-Hand",
            "column5": "0.6",
            "column6": "1",
            "column7": "1",
            "column8": "-",
            "column9": "0.61",
            "column10": "1.2",
            "column11": "0.95",
            "column12": "30%",
            "column13": "2x",
            "column14": "0.3",
            "column15": "-",
            "column16": "8",
            "column17": "15",
            "column18": "120",
            "column19": "Base.MetalPipe"
        },
        {
            "column1": "",
            "column2": "Nightstick",
            "column3": "1.5",
            "column4": "One-Hand",
            "column5": "0.6",
            "column6": "1.1",
            "column7": "1",
            "column8": "-",
            "column9": "0.61",
            "column10": "1.2",
            "column11": "1",
            "column12": "25%",
            "column13": "2x",
            "column14": "0.3",
            "column15": "-",
            "column16": "15",
            "column17": "20",
            "column18": "300",
            "column19": "Base.Nightstick"
        },
        {
            "column1": "",
            "column2": "Pickaxe Handle",
            "column3": "3.0",
            "column4": "One-Hand",
            "column5": "0.4",
            "column6": "0.8",
            "column7": "5",
            "column8": "-",
            "column9": "0.61",
            "column10": "1.05",
            "column11": "1.1",
            "column12": "10%",
            "column13": "2x",
            "column14": "0.3",
            "column15": "2",
            "column16": "4",
            "column17": "3",
            "column18": "12",
            "column19": "Base.PickAxeHandle"
        },
        {
            "column1": "",
            "column2": "Pipe Wrench",
            "column3": "1.5",
            "column4": "One-Hand",
            "column5": "0.5",
            "column6": "1",
            "column7": "10",
            "column8": "-",
            "column9": "0.61",
            "column10": "1.1",
            "column11": "1",
            "column12": "25%",
            "column13": "2x",
            "column14": "0.3",
            "column15": "2",
            "column16": "10",
            "column17": "25",
            "column18": "250",
            "column19": "Base.PipeWrench"
        },
        {
            "column1": "",
            "column2": "Plunger",
            "column3": "0.5",
            "column4": "One-Hand",
            "column5": "0.3",
            "column6": "0.5",
            "column7": "2",
            "column8": "-",
            "column9": "0.61",
            "column10": "1.1",
            "column11": "1.2",
            "column12": "5%",
            "column13": "2x",
            "column14": "0.3",
            "column15": "2",
            "column16": "3",
            "column17": "2",
            "column18": "6",
            "column19": "Base.Plunger"
        },
        {
            "column1": "",
            "column2": "Rolling Pin",
            "column3": "1.5",
            "column4": "One-Hand",
            "column5": "0.2",
            "column6": "0.5",
            "column7": "5",
            "column8": "-",
            "column9": "0.61",
            "column10": "1.1",
            "column11": "1.2",
            "column12": "15%",
            "column13": "2x",
            "column14": "0.5",
            "column15": "-",
            "column16": "8",
            "column17": "14",
            "column18": "112",
            "column19": "Base.RollingPin"
        },
        {
            "column1": "",
            "column2": "Saucepan",
            "column3": "0.7",
            "column4": "One-Hand",
            "column5": "0.2",
            "column6": "0.7",
            "column7": "1",
            "column8": "-",
            "column9": "0.61",
            "column10": "1",
            "column11": "1",
            "column12": "30%",
            "column13": "2x",
            "column14": "0.3",
            "column15": "-",
            "column16": "5",
            "column17": "10",
            "column18": "50",
            "column19": "Base.Saucepan"
        },
        {
            "column1": "",
            "column2": "Spiked Pickaxe Handle",
            "column3": "3.0",
            "column4": "One-Hand",
            "column5": "0.7",
            "column6": "1",
            "column7": "5",
            "column8": "-",
            "column9": "0.61",
            "column10": "1.1",
            "column11": "1",
            "column12": "10%",
            "column13": "5x",
            "column14": "0.3",
            "column15": "2",
            "column16": "4",
            "column17": "2",
            "column18": "8",
            "column19": "Base.PickAxeHandleSpiked"
        },
        {
            "column1": "",
            "column2": "Stone Hammer",
            "column3": "1.2",
            "column4": "One-Hand",
            "column5": "0.3",
            "column6": "0.7",
            "column7": "2",
            "column8": "-",
            "column9": "0.61",
            "column10": "1.05",
            "column11": "1",
            "column12": "15%",
            "column13": "3x",
            "column14": "0.5",
            "column15": "-",
            "column16": "5",
            "column17": "5",
            "column18": "25",
            "column19": "Base.HammerStone"
        },
        {
            "column1": "",
            "column2": "Table Leg",
            "column3": "1.5",
            "column4": "One-Hand",
            "column5": "0.5",
            "column6": "0.9",
            "column7": "5",
            "column8": "-",
            "column9": "0.61",
            "column10": "1",
            "column11": "1",
            "column12": "10%",
            "column13": "2x",
            "column14": "0.3",
            "column15": "2",
            "column16": "4",
            "column17": "3",
            "column18": "12",
            "column19": "Base.TableLeg"
        },
        {
            "column1": "",
            "column2": "Violin",
            "column3": "0.7",
            "column4": "One-Hand",
            "column5": "0.2",
            "column6": "0.4",
            "column7": "5",
            "column8": "-",
            "column9": "0.61",
            "column10": "1",
            "column11": "1.2",
            "column12": "5%",
            "column13": "-",
            "column14": "0.3",
            "column15": "2",
            "column16": "1",
            "column17": "1",
            "column18": "1",
            "column19": "Base.Violin"
        },
        {
            "column1": "",
            "column2": "Wooden Mallet",
            "column3": "1.0",
            "column4": "One-Hand",
            "column5": "0.4",
            "column6": "0.9",
            "column7": "9",
            "column8": "-",
            "column9": "0.61",
            "column10": "1",
            "column11": "1.1",
            "column12": "17%",
            "column13": "3x",
            "column14": "0.5",
            "column15": "-",
            "column16": "8",
            "column17": "20",
            "column18": "160",
            "column19": "Base.WoodenMallet"
        },
        {
            "column1": "",
            "column2": "Wrench",
            "column3": "1.0",
            "column4": "One-Hand",
            "column5": "0.5",
            "column6": "1",
            "column7": "10",
            "column8": "-",
            "column9": "0.61",
            "column10": "1",
            "column11": "1",
            "column12": "20%",
            "column13": "2x",
            "column14": "0.3",
            "column15": "2",
            "column16": "9",
            "column17": "15",
            "column18": "135",
            "column19": "Base.Wrench"
        }
    ])";
    };

    struct Shotguns {
        const char* jsonData = R"(
    [
        {
            "column1": "",
            "column2": "Double Barrel Shotgun",
            "column3": "4.0",
            "column4": "Two-Hand",
            "column5": "",
            "column6": "2",
            "column7": "2",
            "column8": "2.7",
            "column9": "0.67",
            "column10": "9",
            "column11": "80",
            "column12": "+5",
            "column13": "80%",
            "column14": "+4%",
            "column15": "100",
            "column16": "0.8",
            "column17": "8",
            "column18": "Base.DoubleBarrelShotgun"
        },
        {
            "column1": "",
            "column2": "Sawed-off Double Barrel Shotgun",
            "column3": "3.5",
            "column4": "Two-Hand",
            "column5": "",
            "column6": "2",
            "column7": "2",
            "column8": "2.7",
            "column9": "0.67",
            "column10": "8",
            "column11": "80",
            "column12": "+5",
            "column13": "80%",
            "column14": "+4%",
            "column15": "100",
            "column16": "0.8",
            "column17": "8",
            "column18": "Base.DoubleBarrelShotgunSawnoff"
        },
        {
            "column1": "",
            "column2": "JS-2000 Shotgun",
            "column3": "4.0",
            "column4": "Two-Hand",
            "column5": "",
            "column6": "6",
            "column7": "1.5",
            "column8": "2.2",
            "column9": "0.61",
            "column10": "7",
            "column11": "70",
            "column12": "+5",
            "column13": "60%",
            "column14": "+4%",
            "column15": "100",
            "column16": "0.8",
            "column17": "8",
            "column18": "Base.Shotgun"
        },
        {
            "column1": "",
            "column2": "Sawed-off JS-2000 Shotgun",
            "column3": "3.5",
            "column4": "Two-Hand",
            "column5": "",
            "column6": "6",
            "column7": "1.5",
            "column8": "2.2",
            "column9": "0.61",
            "column10": "6",
            "column11": "100",
            "column12": "+0",
            "column13": "60%",
            "column14": "+4%",
            "column15": "100",
            "column16": "0.9",
            "column17": "8",
            "column18": "Base.ShotgunSawnoff"
        }
    ])";
    };

    struct Spear {
        const char* jsonData = R"(
    [
        {
            "column1": "",
            "column2": "Closed Umbrella",
            "column3": "1.0",
            "column4": "Spear",
            "column5": "0.5",
            "column6": "0.7",
            "column7": "1",
            "column8": "-",
            "column9": "0.61",
            "column10": "1.1",
            "column11": "0.9",
            "column12": "10%",
            "column13": "1x",
            "column14": "0.3",
            "column15": "-",
            "column16": "7",
            "column17": "3",
            "column18": "21",
            "column19": "Base.ClosedUmbrellaWhite"
        },
        {
            "column1": "",
            "column2": "Garden Fork",
            "column3": "1.5",
            "column4": "Spear",
            "column5": "1",
            "column6": "1.5",
            "column7": "7",
            "column8": "-",
            "column9": "0.61",
            "column10": "1.37",
            "column11": "0.9",
            "column12": "30%",
            "column13": "10x",
            "column14": "0.3",
            "column15": "-",
            "column16": "10",
            "column17": "15",
            "column18": "150",
            "column19": "Base.GardenFork"
        },
        {
            "column1": "",
            "column2": "Crafted Spear",
            "column3": "1.7",
            "column4": "Spear",
            "column5": "1",
            "column6": "1.5",
            "column7": "5",
            "column8": "-",
            "column9": "0.98",
            "column10": "1.4",
            "column11": "1",
            "column12": "30%",
            "column13": "10x",
            "column14": "0.3",
            "column15": "-",
            "column16": "5",
            "column17": "2",
            "column18": "10",
            "column19": "Base.SpearCrafted"
        },
        {
            "column1": "",
            "column2": "Spear with Bread Knife",
            "column3": "2.0",
            "column4": "Spear",
            "column5": "1",
            "column6": "1.6",
            "column7": "5",
            "column8": "-",
            "column9": "0.98",
            "column10": "1.55",
            "column11": "1",
            "column12": "30%",
            "column13": "10x",
            "column14": "0.3",
            "column15": "-",
            "column16": "6",
            "column17": "3",
            "column18": "18",
            "column19": "Base.SpearBreadKnife"
        },
        {
            "column1": "",
            "column2": "Spear with Butter Knife",
            "column3": "2.0",
            "column4": "Spear",
            "column5": "1",
            "column6": "1.6",
            "column7": "5",
            "column8": "-",
            "column9": "0.98",
            "column10": "1.42",
            "column11": "1",
            "column12": "30%",
            "column13": "10x",
            "column14": "0.3",
            "column15": "-",
            "column16": "6",
            "column17": "3",
            "column18": "18",
            "column19": "Base.SpearButterKnife"
        },
        {
            "column1": "",
            "column2": "Spear with Fork",
            "column3": "2.0",
            "column4": "Spear",
            "column5": "1",
            "column6": "1.6",
            "column7": "5",
            "column8": "-",
            "column9": "0.98",
            "column10": "1.42",
            "column11": "0.95",
            "column12": "30%",
            "column13": "10x",
            "column14": "0.3",
            "column15": "-",
            "column16": "6",
            "column17": "3",
            "column18": "18",
            "column19": "Base.SpearFork"
        },
        {
            "column1": "",
            "column2": "Spear with Letter Opener",
            "column3": "2.0",
            "column4": "Spear",
            "column5": "1",
            "column6": "1.6",
            "column7": "5",
            "column8": "-",
            "column9": "0.98",
            "column10": "1.42",
            "column11": "1",
            "column12": "30%",
            "column13": "10x",
            "column14": "0.3",
            "column15": "-",
            "column16": "6",
            "column17": "3",
            "column18": "18",
            "column19": "Base.SpearLetterOpener"
        },
        {
            "column1": "",
            "column2": "Spear with Scalpel",
            "column3": "2.0",
            "column4": "Spear",
            "column5": "1",
            "column6": "1.6",
            "column7": "5",
            "column8": "-",
            "column9": "0.98",
            "column10": "1.42",
            "column11": "1",
            "column12": "30%",
            "column13": "10x",
            "column14": "0.3",
            "column15": "-",
            "column16": "6",
            "column17": "3",
            "column18": "18",
            "column19": "Base.SpearScalpel"
        },
        {
            "column1": "",
            "column2": "Spear with Spoon",
            "column3": "2.0",
            "column4": "Spear",
            "column5": "1",
            "column6": "1.6",
            "column7": "5",
            "column8": "-",
            "column9": "0.98",
            "column10": "1.4",
            "column11": "1",
            "column12": "30%",
            "column13": "10x",
            "column14": "0.3",
            "column15": "-",
            "column16": "6",
            "column17": "3",
            "column18": "18",
            "column19": "Base.SpearSpoon"
        },
        {
            "column1": "",
            "column2": "Spear with Scissors",
            "column3": "2.1",
            "column4": "Spear",
            "column5": "1",
            "column6": "1.6",
            "column7": "5",
            "column8": "-",
            "column9": "0.98",
            "column10": "1.42",
            "column11": "1",
            "column12": "30%",
            "column13": "10x",
            "column14": "0.3",
            "column15": "-",
            "column16": "6",
            "column17": "3",
            "column18": "18",
            "column19": "Base.SpearScissors"
        },
        {
            "column1": "",
            "column2": "Spear with Hand Fork",
            "column3": "2.2",
            "column4": "Spear",
            "column5": "1.1",
            "column6": "1.6",
            "column7": "6",
            "column8": "-",
            "column9": "0.98",
            "column10": "1.45",
            "column11": "0.95",
            "column12": "30%",
            "column13": "10x",
            "column14": "0.3",
            "column15": "-",
            "column16": "7",
            "column17": "4",
            "column18": "28",
            "column19": "Base.SpearHandFork"
        },
        {
            "column1": "",
            "column2": "Spear with Screwdriver",
            "column3": "2.1",
            "column4": "Spear",
            "column5": "1.2",
            "column6": "1.6",
            "column7": "7",
            "column8": "-",
            "column9": "0.98",
            "column10": "1.45",
            "column11": "1",
            "column12": "30%",
            "column13": "10x",
            "column14": "0.3",
            "column15": "-",
            "column16": "7",
            "column17": "4",
            "column18": "28",
            "column19": "Base.SpearScrewdriver"
        },
        {
            "column1": "",
            "column2": "Spear with Hunting Knife",
            "column3": "2.2",
            "column4": "Spear",
            "column5": "1.2",
            "column6": "1.7",
            "column7": "7",
            "column8": "-",
            "column9": "0.98",
            "column10": "1.48",
            "column11": "1",
            "column12": "30%",
            "column13": "10x",
            "column14": "0.3",
            "column15": "-",
            "column16": "9",
            "column17": "8",
            "column18": "72",
            "column19": "Base.SpearHuntingKnife"
        },
        {
            "column1": "",
            "column2": "Spear with Machete",
            "column3": "3.7",
            "column4": "Spear",
            "column5": "1.3",
            "column6": "2",
            "column7": "10",
            "column8": "-",
            "column9": "0.98",
            "column10": "1.55",
            "column11": "0.9",
            "column12": "30%",
            "column13": "10x",
            "column14": "0.3",
            "column15": "-",
            "column16": "12",
            "column17": "10",
            "column18": "120",
            "column19": "Base.SpearMachete"
        },
        {
            "column1": "",
            "column2": "Spear with Ice Pick",
            "column3": "2.0",
            "column4": "Spear",
            "column5": "1",
            "column6": "1.6",
            "column7": "5",
            "column8": "-",
            "column9": "0.98",
            "column10": "1.42",
            "column11": "1",
            "column12": "30%",
            "column13": "10x",
            "column14": "0.3",
            "column15": "-",
            "column16": "6",
            "column17": "3",
            "column18": "18",
            "column19": "Base.SpearIcePick"
        },
        {
            "column1": "",
            "column2": "Spear with Knife",
            "column3": "2.0",
            "column4": "Spear",
            "column5": "1",
            "column6": "1.6",
            "column7": "5",
            "column8": "-",
            "column9": "0.98",
            "column10": "1.45",
            "column11": "1",
            "column12": "30%",
            "column13": "10x",
            "column14": "0.3",
            "column15": "-",
            "column16": "7",
            "column17": "4",
            "column18": "28",
            "column19": "Base.SpearKnife"
        }
    ])";
    };

    struct Throwables {
        const char* jsonData = R"(
    [
        {
            "column1": "",
            "column2": "Molotov Cocktail",
            "column3": "1.5",
            "column4": "8",
            "column5": "Fire",
            "column6": "90",
            "column7": "4",
            "column8": "-",
            "column9": "-",
            "column10": "Base.Molotov"
        },
        {
            "column1": "",
            "column2": "Aerosol Bomb",
            "column3": "1.5",
            "column4": "10",
            "column5": "Explosion",
            "column6": "70",
            "column7": "6",
            "column8": "-",
            "column9": "-",
            "column10": "Base.Aerosolbomb"
        },
        {
            "column1": "",
            "column2": "Aerosol Bomb with Timer",
            "column3": "1.5",
            "column4": "10",
            "column5": "Explosion",
            "column6": "70",
            "column7": "6",
            "column8": "10",
            "column9": "-",
            "column10": "Base.AerosolbombTriggered"
        },
        {
            "column1": "",
            "column2": "Aerosol Bomb with Sensor",
            "column3": "1.5",
            "column4": "10",
            "column5": "Explosion",
            "column6": "70",
            "column7": "6",
            "column8": "5",
            "column9": "3",
            "column10": "4",
            "column11": "6",
            "column12": "Base.AerosolbombSensorV1"
        },
        {
            "column1": "",
            "column2": "Aerosol Bomb with Sensor",
            "column3": "1.5",
            "column4": "10",
            "column5": "Explosion",
            "column6": "70",
            "column7": "6",
            "column8": "5",
            "column9": "3",
            "column10": "4",
            "column11": "6",
            "column12": "Base.AerosolbombSensorV2"
        },
        {
            "column1": "",
            "column2": "Aerosol Bomb with Sensor",
            "column3": "1.5",
            "column4": "10",
            "column5": "Explosion",
            "column6": "70",
            "column7": "6",
            "column8": "5",
            "column9": "3",
            "column10": "4",
            "column11": "6",
            "column12": "Base.AerosolbombSensorV3"
        },
        {
            "column1": "",
            "column2": "Remote Aerosol Bomb",
            "column3": "1.5",
            "column4": "10",
            "column5": "Explosion",
            "column6": "70",
            "column7": "6",
            "column8": "-",
            "column9": "-",
            "column10": "Base.AerosolbombRemote"
        },
        {
            "column1": "",
            "column2": "Fire Bomb",
            "column3": "1.5",
            "column4": "10",
            "column5": "Fire",
            "column6": "97",
            "column7": "6",
            "column8": "-",
            "column9": "-",
            "column10": "Base.FlameTrap"
        },
        {
            "column1": "",
            "column2": "Fire Bomb with Timer",
            "column3": "1.5",
            "column4": "10",
            "column5": "Fire",
            "column6": "97",
            "column7": "6",
            "column8": "10",
            "column9": "-",
            "column10": "Base.FlameTrapTriggered"
        },
        {
            "column1": "",
            "column2": "Fire Bomb with Sensor",
            "column3": "1.5",
            "column4": "10",
            "column5": "Fire",
            "column6": "97",
            "column7": "6",
            "column8": "5",
            "column9": "3",
            "column10": "4",
            "column11": "5",
            "column12": "Base.FlameTrapSensorV1"
        },
        {
            "column1": "",
            "column2": "Fire Bomb with Sensor",
            "column3": "1.5",
            "column4": "10",
            "column5": "Fire",
            "column6": "97",
            "column7": "6",
            "column8": "5",
            "column9": "3",
            "column10": "4",
            "column11": "5",
            "column12": "Base.FlameTrapSensorV2"
        },
        {
            "column1": "",
            "column2": "Fire Bomb with Sensor",
            "column3": "1.5",
            "column4": "10",
            "column5": "Fire",
            "column6": "97",
            "column7": "6",
            "column8": "5",
            "column9": "3",
            "column10": "4",
            "column11": "5",
            "column12": "Base.FlameTrapSensorV3"
        },
        {
            "column1": "",
            "column2": "Remote Fire Bomb",
            "column3": "1.5",
            "column4": "10",
            "column5": "Fire",
            "column6": "97",
            "column7": "6",
            "column8": "-",
            "column9": "-",
            "column10": "Base.FlameTrapRemote"
        },
        {
            "column1": "",
            "column2": "Pipe Bomb",
            "column3": "1.5",
            "column4": "10",
            "column5": "Explosion",
            "column6": "90",
            "column7": "7",
            "column8": "-",
            "column9": "-",
            "column10": "Base.PipeBomb"
        },
        {
            "column1": "",
            "column2": "Pipe Bomb with Timer",
            "column3": "1.5",
            "column4": "10",
            "column5": "Explosion",
            "column6": "90",
            "column7": "7",
            "column8": "10",
            "column9": "-",
            "column10": "Base.PipeBombTriggered"
        },
        {
            "column1": "",
            "column2": "Pipe Bomb with Sensor",
            "column3": "1.5",
            "column4": "10",
            "column5": "Explosion",
            "column6": "90",
            "column7": "7",
            "column8": "5",
            "column9": "3",
            "column10": "4",
            "column11": "6",
            "column12": "Base.PipeBombSensorV1"
        },
        {
            "column1": "",
            "column2": "Pipe Bomb with Sensor",
            "column3": "1.5",
            "column4": "10",
            "column5": "Explosion",
            "column6": "90",
            "column7": "7",
            "column8": "5",
            "column9": "3",
            "column10": "4",
            "column11": "6",
            "column12": "Base.PipeBombSensorV2"
        },
        {
            "column1": "",
            "column2": "Pipe Bomb with Sensor",
            "column3": "1.5",
            "column4": "10",
            "column5": "Explosion",
            "column6": "90",
            "column7": "7",
            "column8": "5",
            "column9": "3",
            "column10": "4",
            "column11": "6",
            "column12": "Base.PipeBombSensorV3"
        },
        {
            "column1": "",
            "column2": "Remote Pipe Bomb",
            "column3": "1.5",
            "column4": "10",
            "column5": "Explosion",
            "column6": "90",
            "column7": "7",
            "column8": "-",
            "column9": "-",
            "column10": "Base.PipeBombRemote"
        },
        {
            "column1": "",
            "column2": "Smoke Bomb",
            "column3": "1.5",
            "column4": "10",
            "column5": "Smoke",
            "column6": "-",
            "column7": "5",
            "column8": "50",
            "column9": "-",
            "column10": "Base.SmokeBomb"
        },
        {
            "column1": "",
            "column2": "Smoke Bomb with Timer",
            "column3": "1.5",
            "column4": "10",
            "column5": "Smoke",
            "column6": "-",
            "column7": "5",
            "column8": "10",
            "column9": "-",
            "column10": "Base.SmokeBombTriggered"
        },
        {
            "column1": "",
            "column2": "Smoke Bomb with Sensor",
            "column3": "1.5",
            "column4": "10",
            "column5": "Smoke",
            "column6": "-",
            "column7": "5",
            "column8": "-",
            "column9": "3",
            "column10": "4",
            "column11": "5",
            "column12": "Base.SmokeBombSensorV1"
        },
        {
            "column1": "",
            "column2": "Smoke Bomb with Sensor",
            "column3": "1.5",
            "column4": "10",
            "column5": "Smoke",
            "column6": "-",
            "column7": "5",
            "column8": "-",
            "column9": "3",
            "column10": "4",
            "column11": "5",
            "column12": "Base.SmokeBombSensorV2"
        },
        {
            "column1": "",
            "column2": "Smoke Bomb with Sensor",
            "column3": "1.5",
            "column4": "10",
            "column5": "Smoke",
            "column6": "-",
            "column7": "5",
            "column8": "-",
            "column9": "3",
            "column10": "4",
            "column11": "5",
            "column12": "Base.SmokeBombSensorV3"
        },
        {
            "column1": "",
            "column2": "Remote Smoke Bomb",
            "column3": "1.5",
            "column4": "10",
            "column5": "Smoke",
            "column6": "-",
            "column7": "5",
            "column8": "-",
            "column9": "-",
            "column10": "Base.SmokeBombRemote"
        },
        {
            "column1": "",
            "column2": "Noise Maker",
            "column3": "1.5",
            "column4": "10",
            "column5": "Noise",
            "column6": "-",
            "column7": "17",
            "column8": "50",
            "column9": "-",
            "column10": "Base.NoiseTrap"
        },
        {
            "column1": "",
            "column2": "Noise Generator with Timer",
            "column3": "1.5",
            "column4": "10",
            "column5": "Noise",
            "column6": "-",
            "column7": "17",
            "column8": "10",
            "column9": "-",
            "column10": "Base.NoiseTrapTriggered"
        },
        {
            "column1": "",
            "column2": "Noise Generator with Sensor",
            "column3": "1.5",
            "column4": "10",
            "column5": "Noise",
            "column6": "-",
            "column7": "17",
            "column8": "-",
            "column9": "3",
            "column10": "4",
            "column11": "6",
            "column12": "Base.NoiseTrapSensorV1"
        },
        {
            "column1": "",
            "column2": "Noise Generator with Sensor",
            "column3": "1.5",
            "column4": "10",
            "column5": "Noise",
            "column6": "-",
            "column7": "17",
            "column8": "-",
            "column9": "3",
            "column10": "4",
            "column11": "6",
            "column12": "Base.NoiseTrapSensorV2"
        },
        {
            "column1": "",
            "column2": "Noise Generator with Sensor",
            "column3": "1.5",
            "column4": "10",
            "column5": "Noise",
            "column6": "-",
            "column7": "17",
            "column8": "-",
            "column9": "3",
            "column10": "4",
            "column11": "6",
            "column12": "Base.NoiseTrapSensorV3"
        },
        {
            "column1": "",
            "column2": "Remote Noise Generator",
            "column3": "1.5",
            "column4": "10",
            "column5": "Noise",
            "column6": "-",
            "column7": "17",
            "column8": "10",
            "column9": "-",
            "column10": "Base.NoiseTrapRemote"
        }
    ]
    )";
    };

};
