#pragma once

namespace Stages {
    enum srStageKind {
        BattleField = 0x01, Battle = 0x01,
        FinalDestination = 0x02, Final = 0x02,
        DelfinoPlaza = 0x03, Dolpic = 0x03,
        LuigiMansion = 0x04, Mansion = 0x04,
        MushroomyKingdom = 0x05, MarioPast = 0x05,
        MarioCircuit = 0x06, Kart = 0x06,
        _75m = 0x07, Donkey = 0x07,
        RumbleFalls = 0x08, Jungle = 0x08,
        PirateShip = 0x09, Pirates = 0x09,
        Norfair = 0x0B,
        FrigateOrpheon = 0x0C, Orpheon = 0x0C,
        YoshiIsland = 0x0D, Crayon = 0x0D,
        Halberd = 0x0E,
        LylatCruise = 0x13, StarFox = 0x13,
        PokemonStadium2 = 0x14, Stadium = 0x14,
        SpearPillar = 0x15, Tengan = 0x15,
        PortTown = 0x16, FZero = 0x16,
        Summit = 0x17, Ice = 0x17,
        FlatZone2 = 0x18, GW = 0x18,
        CastleSiege = 0x19, Emblem = 0x19,
        WarioWare = 0x1C, Madein = 0x1C,
        DistantPlanet = 0x1D, Earth = 0x1D,
        Skyworld = 0x1E, Palutena = 0x1E,
        MarioBros = 0x1F, Famicom = 0x1F,
        NewPorkCity = 0x20, NewPork = 0x20,
        Smashville = 0x21, Village = 0x21,
        ShadowMoses = 0x22, MetalGear = 0x22,
        GreenHillZone = 0x23, GreenHill = 0x23,
        PictoChat = 0x24, PictChat = 0x24,
        Hanenbow = 0x25, Plankton = 0x25,
        Config = 0x26,
        Result = 0x28,
        Temple = 0x29, DxShrine = 0x29,
        YoshiIslandMelee = 0x2A, DxYorster = 0x2A,
        JungleJapes = 0x2B, DxGarden = 0x2B,
        Onett = 0x2C, DxOnett = 0x2C,
        GreenGreens = 0x2D, DxGreens = 0x2D,
        PokemonStadium = 0x2E, DxPStadium = 0x2E,
        RainbowCruise = 0x2F, DxCruise = 0x2F,
        Corneria = 0x30, DxCorneria = 0x30,
        BigBlue = 0x31, DxBigBlue = 0x31,
        Brinstar = 0x32, DxZebes = 0x32,
        BridgeOfEldin = 0x33, Oldin = 0x33,
        HomeRunContest = 0x34, Homerun = 0x34,
        Builder = 0x35, Edit = 0x35,
        RestArea = 0x36, Heal = 0x36,
        OnlineTraining = 0x37, OTrain = 0x37,
        TargetSmash = 0x38, Target = 0x38, TargetBreak = 0x38, TBreak = 0x38,
        CharacterRoll = 0x39, CharaRoll = 0x39, CRoll = 0x39,
        Subspace = 0x3d, Adventure = 0x3d,
        BattleFieldS = 0x41, BattleS = 0x41
    };
}; // namespace Stages

typedef Stages::srStageKind srStageKind;
