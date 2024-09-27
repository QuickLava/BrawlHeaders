#pragma once

#include <types.h>

struct grCollisionLine {

    enum MaterialType {
        Material_Basic = 0x0,
        Material_Rock = 0x1,
        Material_Grass = 0x2,
        Material_Soil = 0x3,
        Material_Wood = 0x4,
        Material_Iron = 0x5,
        Material_NibuIron = 0x6,
        Material_DullIron = 0x6,
        Material_Carpet = 0x7,
        Material_NumeNume = 0x8,
        Material_Slimy = 0x8,
        Material_Creature = 0x9,
        Material_Asase = 0xA,
        Material_Water = 0xA,
        Material_Soft = 0xB,
        Material_TuruTuru = 0xC,
        Material_Slippery = 0xC,
        Material_Snow = 0xD,
        Material_Ice = 0xE,
        Material_GameWatch = 0xF,
        Material_Oil = 0x10,
        Material_Danbouru = 0x11,
        Material_Cardboard = 0x11,
        Material_Attack1 = 0x12,
        Material_Attack2 = 0x13,
        Material_Attack3 = 0x14,
        Material_Electroplankton = 0x15,
        Material_Cloud = 0x16,
        Material_Akuukan = 0x17,
        Material_Subspace = 0x17,
        Material_Brick = 0x18,
        Material_Dustless = 0x19,
        Material_Famicom = 0x1A,
        Material_Fence = 0x1B,
        Material_Sand = 0x1C,

        Material_Wet = 0x1E,
    };

    // 0
    short m_point0Index;
    // 2
    short m_point1Index;
    // 4
    char _spacer[10];
    // 14
    bool : 1;
    bool : 1;
    bool : 1;
    bool : 1;
    bool : 1;
    bool : 1;
    bool m_isEdit : 1;
    bool m_isCrush : 1;
    bool m_isDiveDown : 1; // for Bucculus
    bool m_isTargetPokeTrainer : 1;
    bool m_isTargetItem : 1;
    bool m_isTargetAll : 1;
    bool m_isRight : 1;
    bool m_isLeft: 1;
    bool m_isTop : 1;
    bool m_isGround : 1;

    // 16
    bool m_noWallJump : 1;
    bool m_isRightCliff : 1;
    bool m_isLeftCliff : 1;
    bool : 1;
    bool m_isCloudThrough : 1;
    bool m_isRotating : 1;
    bool : 1;
    bool m_isPassable : 1;

    // 17
    MaterialType m_materialType : 8;
    // 18
    char _pad[2];
};
static_assert(sizeof(grCollisionLine) == 20, "Class is wrong size!");