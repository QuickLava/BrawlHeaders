#pragma once

#include <StaticAssert.h>
#include <types.h>
#include <ac/ac_anim_cmd_impl.h>

struct soModuleAccesser;
struct acCmdArgConv;
struct soAnimCmdArgList {
    soArrayContractibleTable<const acCmdArgConv> m_argList;
    // Is not populated by default, must be supplied before using functions for getting arguments.
    soModuleAccesser* m_moduleAccesser;
    // Is 0 by default. Is set to 1 if a getter function call fails, but is *not* set to 0 if it succeeds, so must be reset between calls.
    u8 m_errorOnValueFetch;
    // Doesn't appear to be used deliberately, though is sometimes zeroed by functions which zero m_errorOnValueFetch by stw'ing to it.
    u8 _unk15[0x3];

    soAnimCmdArgList() : m_argList() { }
    soAnimCmdArgList(const acCmdArgConv* p1, s32 p2) : m_argList(p1, p2) { }

    ~soAnimCmdArgList() { }

    // Returns the variable ID of the specified argument. If the specified argument isn't a variable, m_errorOnValueFetch is set to 1!
    u32 getValueIndex(u32 index);
    // Returns the integer value of the specified argument. If the specified argument isn't a variable or Value/Integer typed, m_errorOnValueFetch is set to 1!
    int getInt(u32 index);
    // Returns the float value of the specified argument. If the specified argument isn't a variable or Scalar/Float typed, m_errorOnValueFetch is set to 1!
    double getFloat(u32 index);
    // Returns the boolean value of the specified argument. If the specified argument isn't Boolean typed, m_errorOnValueFetch is set to 1!
    bool getBool(u32 index);

    bool isEmpty() const { return m_argList.isEmpty(); }
};
static_assert(sizeof(soAnimCmdArgList) == 0x18, "Class is the wrong size!");
