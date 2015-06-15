// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.HitTestResult.h>
#include <app/Fuse.Node.h>

namespace app {
namespace Fuse {

HitTestResult__uType* HitTestResult__typeof()
{
    static HitTestResult__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (HitTestResult__uType*)::uAllocClassType(sizeof(HitTestResult__uType), "Fuse.HitTestResult", ::uObject__typeof(), 0, 1);
        type->StrongRefOffsets[0] = offsetof(HitTestResult, _HitObject);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_HitObject";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

bool HitTestResult__get_HasHitDistance(HitTestResult* __this)
{
    return __this->_HasHitDistance;
}

void HitTestResult__set_HasHitDistance(HitTestResult* __this, bool value)
{
    __this->_HasHitDistance = value;
}

float HitTestResult__get_HitDistance(HitTestResult* __this)
{
    return __this->_HitDistance;
}

void HitTestResult__set_HitDistance(HitTestResult* __this, float value)
{
    __this->_HitDistance = value;
}

::app::Fuse::Node* HitTestResult__get_HitObject(HitTestResult* __this)
{
    return __this->_HitObject;
}

void HitTestResult__set_HitObject(HitTestResult* __this, ::app::Fuse::Node* value)
{
    __this->_HitObject = value;
}

void HitTestResult___ObjInit(HitTestResult* __this)
{
}

HitTestResult* HitTestResult__New_1(::uStatic* __this)
{
    HitTestResult* inst = (::app::Fuse::HitTestResult*)::uAllocObject(sizeof(::app::Fuse::HitTestResult), ::app::Fuse::HitTestResult__typeof());
    inst->_ObjInit();
    return inst;
}

}}
