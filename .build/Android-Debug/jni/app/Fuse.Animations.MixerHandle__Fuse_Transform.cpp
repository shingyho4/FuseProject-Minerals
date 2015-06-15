// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Animations.MasterBase__Fuse_Transform.h>
#include <app/Fuse.Animations.MixerHandle__Fuse_Transform.h>
#include <app/Fuse.Transform.h>
#include <app/Uno.Diagnostics.Debug.h>
#include <app/Uno.String.h>

namespace app {
namespace Fuse {
namespace Animations {

MixerHandle__Fuse_Transform__uType* MixerHandle__Fuse_Transform__typeof()
{
    static MixerHandle__Fuse_Transform__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (MixerHandle__Fuse_Transform__uType*)::uAllocClassType(sizeof(MixerHandle__Fuse_Transform__uType), "Fuse.Animations.MixerHandle<Fuse.Transform>", ::uObject__typeof(), 1, 2);
        type->__interface_0.__fp_Unregister = (void(*)(void*))MixerHandle__Fuse_Transform__Unregister;
        type->__interface_0.__fp_Set = (void(*)(void*, ::app::Fuse::Transform*, float))MixerHandle__Fuse_Transform__Set;

        type->Implements[0] = ::app::Fuse::Animations::IMixerHandle__Fuse_Transform__typeof();

        type->InterfaceOffsets[0] = offsetof(MixerHandle__Fuse_Transform__uType, __interface_0);

        type->StrongRefOffsets[0] = offsetof(MixerHandle__Fuse_Transform, Value);
        type->StrongRefOffsets[1] = offsetof(MixerHandle__Fuse_Transform, Master);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "Value";
        type->StrongRefNames[1] = "Master";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

bool MixerHandle__Fuse_Transform__get_HasValue(MixerHandle__Fuse_Transform* __this)
{
    return __this->_hasValue;
}

int MixerHandle__Fuse_Transform__get_MixOp(MixerHandle__Fuse_Transform* __this)
{
    return __this->_MixOp;
}

void MixerHandle__Fuse_Transform__set_MixOp(MixerHandle__Fuse_Transform* __this, int value)
{
    __this->_MixOp = value;
}

int MixerHandle__Fuse_Transform__get_Priority(MixerHandle__Fuse_Transform* __this)
{
    return __this->_Priority;
}

void MixerHandle__Fuse_Transform__set_Priority(MixerHandle__Fuse_Transform* __this, int value)
{
    __this->_Priority = value;
}

void MixerHandle__Fuse_Transform__Unregister(MixerHandle__Fuse_Transform* __this)
{
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Transform*>(__this->Master)->Unregister(__this);
    __this->_hasValue = false;
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Transform*>(__this->Master)->DirtyValue = true;
    __this->Master = NULL;
}

void MixerHandle__Fuse_Transform__Set(MixerHandle__Fuse_Transform* __this, ::app::Fuse::Transform* value, float strength)
{
    if (__this->Master == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log(NULL, ::uGetConstString("invalid MixerHandle.Set post-Unregister"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.1.0\\$.uno"), 1133);
        return;
    }

    __this->_hasValue = true;
    __this->Value = value;
    __this->Strength = strength;
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Transform*>(__this->Master)->DirtyValue = true;
}

void MixerHandle__Fuse_Transform___ObjInit(MixerHandle__Fuse_Transform* __this, ::app::Fuse::Animations::MasterBase__Fuse_Transform* master, int mode, int priority)
{
    __this->Priority(priority);
    __this->Master = master;
    __this->MixOp(mode);
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Transform*>(__this->Master)->Register(__this);
}

MixerHandle__Fuse_Transform* MixerHandle__Fuse_Transform__New_1(::uStatic* __this, ::app::Fuse::Animations::MasterBase__Fuse_Transform* master, int mode, int priority)
{
    MixerHandle__Fuse_Transform* inst = (::app::Fuse::Animations::MixerHandle__Fuse_Transform*)::uAllocObject(sizeof(::app::Fuse::Animations::MixerHandle__Fuse_Transform), ::app::Fuse::Animations::MixerHandle__Fuse_Transform__typeof());
    inst->_ObjInit(master, mode, priority);
    return inst;
}

}}}
