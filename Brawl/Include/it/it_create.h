#pragma once

#include <StaticAssert.h>
#include <types.h>
#include <mt/mt_vector.h>
#include <so/resource/so_resource_module_impl.h>

#define NUM_IT_KINDS 178

enum itKind {
    Item_Common = -0x3,
    Item_AssistTrophy = 0x00,
    Item_Assist = 0x00,
    Item_FranklinBadge = 0x01,
    Item_Badge = 0x01,
    Item_BananaPeel = 0x02,
    Item_Banana = 0x02,
    Item_Barrel = 0x03,
    Item_BeamSword = 0x04,
    Item_Bill = 0x05,
    Item_BobOmb = 0x06,
    Item_Bombhei = 0x06,
    Item_Crate = 0x07,
    Item_Box = 0x07,
    Item_Bumper = 0x08,
    Item_Capsule = 0x09,
    Item_RollingCrate = 0x0A,
    Item_CarrierBox = 0x0A,
    Item_CD = 0x0B,
    Item_GooeyBomb = 0x0C,
    Item_Chewing = 0x0C,
    Item_CrackerLauncher = 0x0D,
    Item_Clacker = 0x0D,
    Item_CrackerLauncher_Shot = 0x0E,
    Item_Clacker_Shot = 0x0E,
    Item_Coin = 0x0F,
    Item_SuperspicyCurry = 0x10,
    Item_Curry = 0x10,
    Item_SuperspicyCurry_Shot = 0x11,
    Item_Curry_Shot = 0x11,
    Item_DekuNut = 0x12,
    Item_Deku = 0x12,
    Item_MrSaturn = 0x13,
    Item_Doseisan = 0x13,
    Item_Dragoon_Part = 0x14,
    Item_Dragoon = 0x14,
    Item_Dragoon_Set = 0x15,
    Item_Dragoon_Sight = 0x16,
    Item_Trophy = 0x17,
    Item_Figure = 0x17,
    Item_FireFlower = 0x18,
    Item_FireFlower_Shot = 0x19,
    Item_Freezie = 0x1A,
    Item_Freezer = 0x1A,
    Item_GoldenHammer = 0x1B,
    Item_GreenShell = 0x1C,
    Item_Hammer = 0x1D,
    Item_Hammer_Head = 0x1E,
    Item_Fan = 0x1F,
    Item_Harisen = 0x1F,
    Item_HeartContainer = 0x20,
    Item_Heart = 0x20,
    Item_HomeRunBat = 0x21,
    Item_PartyBall = 0x22,
    Item_Kusudama = 0x22,
    Item_Manaphy_Heart = 0x23,
    Item_MaximTomato = 0x24,
    Item_PoisonMushroom = 0x25,
    Item_MushD = 0x25,
    Item_SuperMushroom = 0x26,
    Item_Mushroom = 0x26,
    Item_MetalBox = 0x27,
    Item_Hothead = 0x28,
    Item_Pasaran = 0x28,
    Item_Pitfall = 0x29,
    Item_PokeBall = 0x2A,
    Item_BlastBox = 0x2B,
    Item_PowderBox = 0x2B,
    Item_RayGun = 0x2C,
    Item_RayGun_Shot = 0x2D,
    Item_LipStick = 0x2E,
    Item_RipStick = 0x2E,
    Item_LipStick_Flower = 0x2F,
    Item_RipStick_Flower = 0x2f,
    Item_LipStick_Shot = 0x30,
    Item_RipStick_Shot = 0x30,
    Item_Sandbag = 0x31,
    Item_ScrewAttack = 0x32,
    Item_Screw = 0x32,
    Item_Sticker = 0x33,
    Item_Seal = 0x33,
    Item_MotionSensorBomb = 0x34,
    Item_SensorBomb = 0x34,
    Item_Timer = 0x35,
    Item_Slow = 0x35,
    Item_SmartBomb = 0x36,
    Item_SmashBall = 0x37,
    Item_SmokeBall = 0x38,
    Item_SmokeScreen = 0x38,
    Item_Spring = 0x39,
    Item_StarRod = 0x3A,
    Item_StarRod_Shot = 0x3B,
    Item_SoccerBall = 0x3C,
    Item_SuperScope = 0x3D,
    Item_SuperScope_Shot = 0x3E,
    Item_Star = 0x3F,
    Item_Starman = 0x3f,
    Item_Food = 0x40,
    Item_Tabemono = 0x40,
    Item_TeamHealer = 0x41,
    Item_TeamHealing = 0x41,
    Item_Lightning = 0x42,
    Item_Thunder = 0x42,
    Item_Unira = 0x43,
    Item_BunnyHood = 0x44,
    Item_UsagiHat = 0x44,
    Item_WarpStar = 0x45,
    Item_Warpstar = 0x45,
    Item_Subspace_Trophy = 0x46,
    Item_Adventure_Figure = 0x46,
    Item_Subspace_Key = 0x47,
    Item_Adventure_Key = 0x47,
    Item_Subspace_TrophyStand = 0x48,
    Item_Adventure_SmashPlate = 0x48,
    Item_Subspace_StockBall = 0x49,
    Item_Adventure_Stock = 0x49,
    Item_Stage_Apple = 0x4A,
    Item_Stage_Sidestepper = 0x4B,
    Item_Stage_Crab = 0x4b,
    Item_Stage_Shellcreeper = 0x4C,
    Item_Stage_Shell = 0x4c,
    Item_Stage_Pellet = 0x4D,
    Item_Stage_Vegetable = 0x4E,
    Item_Stage_Yasai = 0x4E,
    Item_HomeRun_Sandbag = 0x4F,
    Item_Enemy_Auroros = 0x50,
    Item_Enemy_Aroaros = 0x50,
    Item_Enemy_Koopa1 = 0x51,
    Item_Enemy_Patapata = 0x51,
    Item_Enemy_Koopa2 = 0x52,
    Item_Enemy_PatapataG = 0x52,
    Item_Snake_CardboardBox = 0x53,
    Item_Snake_CBox = 0x53,
    Item_DiddyKong_Peanut = 0x54,
    Item_Diddy_Peanuts = 0x54,
    Item_Link_Bomb = 0x55,
    Item_Peach_Turnip = 0x56,
    Item_Peach_Daikon = 0x56,
    Item_ROB_Gyro = 0x57,
    Item_Robot_Gyro = 0x57,
    Item_DiddyKong_Peanut_Seed = 0x58,
    Item_Diddy_Peanuts_Seed = 0x58,
    Item_Snake_Grenade = 0x59,
    Item_ZeroSuitSamus_ArmorPiece = 0x5A,
    Item_SZeroSuit_Armor = 0x5A,
    Item_ToonLink_Bomb = 0x5B,
    Item_Wario_Bike = 0x5C,
    Item_Wario_Bike_A = 0x5D,
    Item_Wario_Bike_B = 0x5E,
    Item_Wario_Bike_C = 0x5F,
    Item_Wario_Bike_D = 0x60,
    Item_Wario_Bike_E = 0x61,
    Item_Pokemon_Torchic = 0x62,
    Item_Pokemon_Achamo = 0x62,
    Item_Pokemon_Celebi = 0x63,
    Item_Pokemon_Cerebi = 0x63,
    Item_Pokemon_Chikorita = 0x64,
    Item_Pokemon_Chicorita = 0x64,
    Item_Pokemon_Chikorita_Shot = 0x65,
    Item_Pokemon_Chicorita_Shot = 0x65,
    Item_Pokemon_Entei = 0x66,
    Item_Pokemon_Moltres = 0x67,
    Item_Pokemon_Fire = 0x67,
    Item_Pokemon_Munchlax = 0x68,
    Item_Pokemon_Gonbe = 0x68,
    Item_Pokemon_Deoxys = 0x69,
    Item_Pokemon_Groudon = 0x6A,
    Item_Pokemon_Gulpin = 0x6B,
    Item_Pokemon_Gokulin = 0x6B,
    Item_Pokemon_Staryu = 0x6C,
    Item_Pokemon_Hitodeman = 0x6C,
    Item_Pokemon_Staryu_Shot = 0x6D,
    Item_Pokemon_Hitodeman_Shot = 0x6D,
    Item_Pokemon_HoOh = 0x6E,
    Item_Pokemon_Houou = 0x6E,
    Item_Pokemon_HoOh_Shot = 0x6F,
    Item_Pokemon_Houou_Shot = 0x6F,
    Item_Pokemon_Jirachi = 0x70,
    Item_Pokemon_Snorlax = 0x71,
    Item_Pokemon_Kabigon = 0x71,
    Item_Pokemon_Bellossom = 0x72,
    Item_Pokemon_Kireihana = 0x72,
    Item_Pokemon_Kyogre = 0x73,
    Item_Pokemon_Kyogre_Shot = 0x74,
    Item_Pokemon_LatiasLatios = 0x75,
    Item_Pokemon_Lugia = 0x76,
    Item_Pokemon_Lugia_Shot = 0x77,
    Item_Pokemon_Manaphy = 0x78,
    Item_Pokemon_Weavile = 0x79,
    Item_Pokemon_Manyula = 0x79,
    Item_Pokemon_Electrode = 0x7A,
    Item_Pokemon_Marumine = 0x7A,
    Item_Pokemon_Metagross = 0x7B,
    Item_Pokemon_Mew = 0x7C,
    Item_Pokemon_Meowth = 0x7D,
    Item_Pokemon_Nyarth = 0x7D,
    Item_Pokemon_Meowth_Shot = 0x7E,
    Item_Pokemon_Nyarth_Shot = 0x7E,
    Item_Pokemon_Piplup = 0x7F,
    Item_Pokemon_Pochama = 0x7F,
    Item_Pokemon_Togepi = 0x80,
    Item_Pokemon_Togepy = 0x80,
    Item_Pokemon_Goldeen = 0x81,
    Item_Pokemon_Tosakinto = 0x81,
    Item_Pokemon_Gardevoir = 0x82,
    Item_Pokemon_Sirnight = 0x82,
    Item_Pokemon_Wobbuffet = 0x83,
    Item_Pokemon_Sonans = 0x83,
    Item_Pokemon_Suicune = 0x84,
    Item_Pokemon_Bonsly = 0x85,
    Item_Pokemon_Usohachi = 0x85,
    Item_Assist_Andross = 0x86,
    Item_Assist_Andross_Shot = 0x87,
    Item_Assist_Barbara = 0x88,
    Item_Assist_GrayFox = 0x89,
    Item_Assist_Cyborg = 0x89,
    Item_Assist_RayMKII = 0x8A,
    Item_Assist_CustomRobo = 0x8A,
    Item_Assist_RayMKII_Bomb = 0x8B,
    Item_Assist_CustomRobo_Bomb = 0x8B,
    Item_Assist_RayMKII_Gun = 0x8C,
    Item_Assist_CustomRobo_Gun = 0x8C,
    Item_Assist_SamuraiGoroh = 0x8D,
    Item_Assist_Goroh = 0x8D,
    Item_Assist_Devil = 0x8E,
    Item_Assist_Excitebike = 0x8F,
    Item_Assist_Jeff = 0x90,
    Item_Assist_Jeff_PencilBullet = 0x91,
    Item_Assist_Jeff_PencilRocket = 0x92,
    Item_Assist_Lakitu = 0x93,
    Item_Assist_Jugem = 0x93,
    Item_Assist_KnuckleJoe = 0x94,
    Item_Assist_Joe = 0x94,
    Item_Assist_KnuckleJoe_Shot = 0x95,
    Item_Assist_Joe_Shot = 0x95,
    Item_Assist_HammerBro = 0x96,
    Item_Assist_HammerBros = 0x96,
    Item_Assist_HammerBro_Hammer = 0x97,
    Item_Assist_HammerBros_Hammer = 0x97,
    Item_Assist_Helirin = 0x98,
    Item_Assist_Heririn = 0x98,
    Item_Assist_KatAna = 0x99,
    Item_Assist_KatAna_Ana = 0x9A,
    Item_Assist_JillDozer = 0x9B,
    Item_Assist_Kururi = 0x9B,
    Item_Assist_Lyn = 0x9C,
    Item_Assist_Lin = 0x9C,
    Item_Assist_LittleMac = 0x9D,
    Item_Assist_Metroid = 0x9E,
    Item_Assist_Nintendog = 0x9F,
    Item_Assist_Nintendogs = 0x9F,
    Item_Assist_Nintendog_Full = 0xA0,
    Item_Assist_Nintendogs_Hi = 0xA0,
    Item_Assist_MrResetti = 0xA1,
    Item_Assist_Resetsan = 0xA1,
    Item_Assist_Isaac = 0xA2,
    Item_Assist_Robin = 0xA2,
    Item_Assist_Isaac_Shot = 0xA3,
    Item_Assist_Robin_Shot = 0xA3,
    Item_Assist_Saki = 0xA4,
    Item_Assist_Saki_Shot1 = 0xA5,
    Item_Assist_Saki_Shot2 = 0xA6,
    Item_Assist_Shadow = 0xA7,
    Item_Assist_War_Infantry = 0xA8,
    Item_Assist_War_Soldier = 0xA8,
    Item_Assist_War_Infantry_Shot = 0xA9,
    Item_Assist_War_Soldier_Shot = 0xA9,
    Item_Assist_Starfy = 0xAA,
    Item_Assist_Stafy = 0xAA,
    Item_Assist_War_Tank = 0xAB,
    Item_Assist_War_Tank_Shot = 0xAC,
    Item_Assist_Tingle = 0xAD,
    Item_Assist_Lakitu_Spiny = 0xAE,
    Item_Assist_Jugem_Togezo = 0xAE,
    Item_Assist_Waluigi = 0xAF,
    Item_Assist_DrWright = 0xB0,
    Item_Assist_Wright = 0xB0,
    Item_Assist_DrWright_Building = 0xB1,
    Item_Assist_Wright_Buil = 0xB1,
    Item_Lot_Food = 0x7D1,
    Item_Lot_Basic = 0x7D2,
    Item_Lot_Unk3 = 0x7D3,
    Item_Lot_Bomb = 0x7D4,
    Item_Lot_Empty = 0x7D5
};

struct ItemKind {
    itKind m_kind;
    u32 m_variation;
};

struct itCreate {
    int m_index;
    int m_createOwnerTaskId;
    int m_teamOwnerTaskId;
    union {
        struct {
            ItemKind m_itemKind;
        };
        struct {
            itKind m_kind;
            u32 m_variation;
        };
    };
    Vec3f* m_safePos;
    Vec3f* m_pos;
    float m_lr;
    int m_teamNo;
    soResourceModule* m_resourceModule;
    u8 m_groupNo;
    char _41[3];
    int m_brresId;
    int m_texResIndex;
    int m_texResId;
};
static_assert(sizeof(itCreate) == 56, "Class is wrong size!");
