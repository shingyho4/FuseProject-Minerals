// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Animations.MasterBase__bool.h>
#include <app/Fuse.Animations.MixerHandle__bool.h>
#include <app/Uno.Diagnostics.Debug.h>
#include <app/Uno.String.h>

namespace app {
namespace Fuse {
namespace Animations {

MixerHandle__bool__uType* MixerHandle__bool__typeof()
{
    static MixerHandle__bool__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (MixerHandle__bool__uType*)::uAllocClassType(sizeof(MixerHandle__bool__uType), "Fuse.Animations.MixerHandle<bool>", ::uObject__typeof(), 1, 1);
        type->__interface_0.__fp_Unregister = (void(*)(void*))MixerHandle__bool__Unregister;
        type->__interface_0.__fp_Set = (void(*)(void*, bool, float))MixerHandle__bool__Set;

        type->Implements[0] = ::app::Fuse::Animations::IMixerHandle__bool__typeof();

        type->InterfaceOffsets[0] = offsetof(MixerHandle__bool__uType, __interface_0);

        type->StrongRefOffsets[0] = offsetof(MixerHandle__bool, Master);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "Master";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

bool MixerHandle__bool__get_HasValue(MixerHandle__bool* __this)
{
    return __this->_hasValue;
}

int MixerHandle__bool__get_MixOp(MixerHandle__bool* __this)
{
    return __this->_MixOp;
}

void MixerHandle__bool__set_MixOp(MixerHandle__bool* __this, int value)
{
    __this->_MixOp = value;
}

int MixerHandle__bool__get_Priority(MixerHandle__bool* __this)
{
    return __this->_Priority;
}

void MixerHandle__bool__set_Priority(MixerHandle__bool* __this, int value)
{
    __this->_Priority = value;
}

void MixerHandle__bool__Unregister(MixerHandle__bool* __this)
{
    ::uPtr< ::app::Fuse::Animations::MasterBase__bool*>(__this->Master)->Unregister(__this);
    __this->_hasValue = false;
    ::uPtr< ::app::Fuse::Animations::MasterBase__bool*>(__this->Master)->DirtyValue = true;
    __this->Master = NULL;
}

void MixerHandle__bool__Set(MixerHandle__bool* __this, bool value, float strength)
{
    if (__this->Master == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log(NULL, ::uGetConstString("invalid MixerHandle.Set post-Unregister"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.1.0\\$.uno"), 1133);
        return;
    }

    __this->_hasValue = true;
    __this->Value = value;
    __this->Strength = strength;
    ::uPtr< ::app::Fuse::Animations::MasterBase__bool*>(__this->Master)->DirtyValue = true;
}

void MixerHandle__bool___ObjInit(MixerHandle__bool* __this, ::app::Fuse::Animations::MasterBase__bool* master, int mode, int priority)
{
    __this->Priority(priority);
    __this->Master = master;
    __this->MixOp(mode);
    ::uPtr< ::app::Fuse::Animations::MasterBase__bool*>(__this->Master)->Register(__this);
}

MixerHandle__bool* MixerHandle__bool__New_1(::uStatic* __this, ::app::Fuse::Animations::MasterBase__bool* master, int mode, int priority)
{
    MixerHandle__bool* inst = (::app::Fuse::Animations::MixerHandle__bool*)::uAllocObject(sizeof(::app::Fuse::Animations::MixerHandle__bool), ::app::Fuse::Animations::MixerHandle__bool__typeof());
    inst->_ObjInit(master, mode, priority);
    return inst;
}

}}}
