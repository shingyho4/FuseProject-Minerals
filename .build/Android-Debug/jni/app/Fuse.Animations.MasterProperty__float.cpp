// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Animations.MasterProperty__float.h>
#include <app/Fuse.Animations.MixerBase.h>
#include <app/Uno.Object.h>
#include <app/Uno.UX.Property__float.h>

namespace app {
namespace Fuse {
namespace Animations {

MasterProperty__float__uType* MasterProperty__float__typeof()
{
    static MasterProperty__float__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (MasterProperty__float__uType*)::uAllocClassType(sizeof(MasterProperty__float__uType), "Fuse.Animations.MasterProperty<float>", ::app::Fuse::Animations::MasterBase__float__typeof(), 2, 1);
        type->__fp_OnInactive = (void(*)(::app::Fuse::Animations::MasterBase__float*))MasterProperty__float__OnInactive;

        type->__interface_1.__fp_GetPropertyObject = (::uObject*(*)(void*))MasterProperty__float__GetPropertyObject;

        type->Implements[0] = ::app::Fuse::Animations::IMixerMaster__typeof();
        type->Implements[1] = ::app::Fuse::Animations::MasterPropertyGet__typeof();

        type->InterfaceOffsets[0] = offsetof(MasterProperty__float__uType, __interface_0);
        type->InterfaceOffsets[1] = offsetof(MasterProperty__float__uType, __interface_1);

        type->StrongRefOffsets[0] = offsetof(MasterProperty__float, Property);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "Property";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

float MasterProperty__float__get_RestValue(MasterProperty__float* __this)
{
    return ::uPtr< ::app::Uno::UX::Property__float*>(__this->Property)->GetRestState();
}

::uObject* MasterProperty__float__GetPropertyObject(MasterProperty__float* __this)
{
    return (::uObject*)__this->Property;
}

void MasterProperty__float__OnInactive(MasterProperty__float* __this)
{
    ::uPtr< ::app::Uno::UX::Property__float*>(__this->Property)->Set(__this->RestValue());
}

void MasterProperty__float___ObjInit_1(MasterProperty__float* __this, ::app::Uno::UX::Property__float* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    ::app::Fuse::Animations::MasterBase__float___ObjInit(__this, mixerBase);
    __this->Property = property;
}

}}}
