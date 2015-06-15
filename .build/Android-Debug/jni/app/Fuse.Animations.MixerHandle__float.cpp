// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Animations.MasterBase__float.h>
#include <app/Fuse.Animations.MixerHandle__float.h>
#include <app/Uno.Diagnostics.Debug.h>
#include <app/Uno.String.h>

namespace app {
namespace Fuse {
namespace Animations {

MixerHandle__float__uType* MixerHandle__float__typeof()
{
    static MixerHandle__float__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (MixerHandle__float__uType*)::uAllocClassType(sizeof(MixerHandle__float__uType), "Fuse.Animations.MixerHandle<float>", ::uObject__typeof(), 1, 1);
        type->__interface_0.__fp_Unregister = (void(*)(void*))MixerHandle__float__Unregister;
        type->__interface_0.__fp_Set = (void(*)(void*, float, float))MixerHandle__float__Set;

        type->Implements[0] = ::app::Fuse::Animations::IMixerHandle__float__typeof();

        type->InterfaceOffsets[0] = offsetof(MixerHandle__float__uType, __interface_0);

        type->StrongRefOffsets[0] = offsetof(MixerHandle__float, Master);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "Master";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

bool MixerHandle__float__get_HasValue(MixerHandle__float* __this)
{
    return __this->_hasValue;
}

int MixerHandle__float__get_MixOp(MixerHandle__float* __this)
{
    return __this->_MixOp;
}

void MixerHandle__float__set_MixOp(MixerHandle__float* __this, int value)
{
    __this->_MixOp = value;
}

int MixerHandle__float__get_Priority(MixerHandle__float* __this)
{
    return __this->_Priority;
}

void MixerHandle__float__set_Priority(MixerHandle__float* __this, int value)
{
    __this->_Priority = value;
}

void MixerHandle__float__Unregister(MixerHandle__float* __this)
{
    ::uPtr< ::app::Fuse::Animations::MasterBase__float*>(__this->Master)->Unregister(__this);
    __this->_hasValue = false;
    ::uPtr< ::app::Fuse::Animations::MasterBase__float*>(__this->Master)->DirtyValue = true;
    __this->Master = NULL;
}

void MixerHandle__float__Set(MixerHandle__float* __this, float value, float strength)
{
    if (__this->Master == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log(NULL, ::uGetConstString("invalid MixerHandle.Set post-Unregister"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.1.0\\$.uno"), 1133);
        return;
    }

    __this->_hasValue = true;
    __this->Value = value;
    __this->Strength = strength;
    ::uPtr< ::app::Fuse::Animations::MasterBase__float*>(__this->Master)->DirtyValue = true;
}

void MixerHandle__float___ObjInit(MixerHandle__float* __this, ::app::Fuse::Animations::MasterBase__float* master, int mode, int priority)
{
    __this->Priority(priority);
    __this->Master = master;
    __this->MixOp(mode);
    ::uPtr< ::app::Fuse::Animations::MasterBase__float*>(__this->Master)->Register(__this);
}

MixerHandle__float* MixerHandle__float__New_1(::uStatic* __this, ::app::Fuse::Animations::MasterBase__float* master, int mode, int priority)
{
    MixerHandle__float* inst = (::app::Fuse::Animations::MixerHandle__float*)::uAllocObject(sizeof(::app::Fuse::Animations::MixerHandle__float), ::app::Fuse::Animations::MixerHandle__float__typeof());
    inst->_ObjInit(master, mode, priority);
    return inst;
}

}}}
