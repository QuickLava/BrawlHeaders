#pragma once

#include <StaticAssert.h>
#include <em/em_create.h>
#include <em/em_extend_param_accesser.h>
#include <em/arman/em_arman.h>
#include <em/resource/em_resource_module_impl.h>
#include <types.h>

struct emArmanParam {

};

class emArmanParamAccesser : public emExtendParamAccesser {
public:
    emArmanParamAccesser();
    virtual ~emArmanParamAccesser();
    virtual float getParamFloat(soModuleAccesser* moduleAccesser, s32 p2);
    virtual s32 getParamInt(soModuleAccesser* moduleAccesser, s32 p2);
    virtual void* getParamIndefinite(soModuleAccesser* moduleAccesser, s32 p2);
};
static_assert(sizeof(emArmanParamAccesser) == 0xC, "Class is the wrong size!");

extern emArmanParamAccesser g_emArmankParamAccesser;
