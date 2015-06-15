// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Animations.MasterBase__float4.h>
#include <app/Fuse.Animations.MixerHandle__float4.h>
#include <app/Uno.Diagnostics.Debug.h>
#include <app/Uno.String.h>

namespace app {
namespace Fuse {
namespace Animations {

MixerHandle__float4__uType* MixerHandle__float4__typeof()
{
    static MixerHandle__float4__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (MixerHandle__float4__uType*)::uAllocClassType(sizeof(MixerHandle__float4__uType), "Fuse.Animations.MixerHandle<float4>", ::uObject__typeof(), 1, 1);
        type->__interface_0.__fp_Unregister = (void(*)(void*))MixerHandle__float4__Unregister;
        type->__interface_0.__fp_Set = (void(*)(void*, ::app::Uno::Float4, float))MixerHandle__float4__Set;

        type->Implements[0] = ::app::Fuse::Animations::IMixerHandle__float4__typeof();

        type->InterfaceOffsets[0] = offsetof(MixerHandle__float4__uType, __interface_0);

        type->StrongRefOffsets[0] = offsetof(MixerHandle__float4, Master);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "Master";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

bool MixerHandle__float4__get_HasValue(MixerHandle__float4* __this)
{
    return __this->_hasValue;
}

int MixerHandle__float4__get_MixOp(MixerHandle__float4* __this)
{
    return __this->_MixOp;
}

void MixerHandle__float4__set_MixOp(MixerHandle__float4* __this, int value)
{
    __this->_MixOp = value;
}

int MixerHandle__float4__get_Priority(MixerHandle__float4* __this)
{
    return __this->_Priority;
}

void MixerHandle__float4__set_Priority(MixerHandle__float4* __this, int value)
{
    __this->_Priority = value;
}

void MixerHandle__float4__Unregister(MixerHandle__float4* __this)
{
    ::uPtr< ::app::Fuse::Animations::MasterBase__float4*>(__this->Master)->Unregister(__this);
    __this->_hasValue = false;
    ::uPtr< ::app::Fuse::Animations::MasterBase__float4*>(__this->Master)->DirtyValue = true;
    __this->Master = NULL;
}

void MixerHandle__float4__Set(MixerHandle__float4* __this, ::app::Uno::Float4 value, float strength)
{
    if (__this->Master == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log(NULL, ::uGetConstString("invalid MixerHandle.Set post-Unregister"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.1.0\\$.uno"), 1133);
        return;
    }

    __this->_hasValue = true;
    __this->Value = value;
    __this->Strength = strength;
    ::uPtr< ::app::Fuse::Animations::MasterBase__float4*>(__this->Master)->DirtyValue = true;
}

void MixerHandle__float4___ObjInit(MixerHandle__float4* __this, ::app::Fuse::Animations::MasterBase__float4* master, int mode, int priority)
{
    __this->Priority(priority);
    __this->Master = master;
    __this->MixOp(mode);
    ::uPtr< ::app::Fuse::Animations::MasterBase__float4*>(__this->Master)->Register(__this);
}

MixerHandle__float4* MixerHandle__float4__New_1(::uStatic* __this, ::app::Fuse::Animations::MasterBase__float4* master, int mode, int priority)
{
    MixerHandle__float4* inst = (::app::Fuse::Animations::MixerHandle__float4*)::uAllocObject(sizeof(::app::Fuse::Animations::MixerHandle__float4), ::app::Fuse::Animations::MixerHandle__float4__typeof());
    inst->_ObjInit(master, mode, priority);
    return inst;
}

}}}
