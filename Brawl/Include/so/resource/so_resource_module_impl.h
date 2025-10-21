#pragma once

#include <StaticAssert.h>
#include <so/so_null.h>
#include <so/resource/so_resource_id_accesser.h>
#include <gf/gf_archive.h>
#include <nw4r/g3d/g3d_resfile.h>
#include <types.h>

class soResourceModule : private soNull, public soNullable {
public:
    virtual ~soResourceModule() { }
    virtual soResourceIdAccesser* getResourceIdAccesser() = 0;
    virtual u32 getGroupNo(int unk1) = 0;
    virtual void setGroupNo(u8 unk1, u16 index) = 0;
    virtual nw4r::g3d::ResFile getTexFile(u16 fileIndex, s16 texResId) = 0;
    virtual nw4r::g3d::ResFile getMdlFile(u16 fileIndex, s16 mdlResId) = 0;
    virtual nw4r::g3d::ResFile getAnmFile(u16 fileIndex, s16 anmResId, bool p3) = 0;
    virtual nw4r::g3d::ResFile getBinFile(s16 binResId, u16 fileIndex, int archiveId) = 0;
    virtual nw4r::g3d::ResFile getFile(s16 resId, ARCNodeType nodeType, u16 fileIndex) = 0;
};

class soResourceModuleImpl : public soResourceModule {
    // 0xC
    int m_managerID;
    // 0x10
    soResourceIdAccesserImpl* m_resourceIdAccesser;
    // 0x14
    char m_archiveType1;
    // 0x15
    char m_archiveType2;
    // 0x16
    char m_archiveType3;
    // 0x17
    char m_archiveType4;
public:
    soResourceModuleImpl(u32 p1, soResourceIdAccesserImpl* rsrcIdAcc, u32 p3);

    virtual ~soResourceModuleImpl();
    virtual soResourceIdAccesser* getResourceIdAccesser() { return m_resourceIdAccesser; }
    virtual u32 getGroupNo(int unk1) {
        // TODO: UBFIX just a char array?
        u8* ptr = (u8*)((int)this + unk1);
        return ptr[0x14];
    }
    virtual void setGroupNo(u8 unk1, u16 index);
    virtual nw4r::g3d::ResFile getTexFile(u16 fileIndex, s16 texResId);
    virtual nw4r::g3d::ResFile getMdlFile(u16 fileIndex, s16 mdlResId);
    virtual nw4r::g3d::ResFile getAnmFile(u16 fileIndex, s16 anmResId, bool p3);
    virtual nw4r::g3d::ResFile getBinFile(s16 binResId, u16 fileIndex, int archiveId);
    virtual nw4r::g3d::ResFile getFile(s16 resId, ARCNodeType nodeType, u16 fileIndex);
};
static_assert(sizeof(soResourceModuleImpl) == 24, "Class is wrong size!");
