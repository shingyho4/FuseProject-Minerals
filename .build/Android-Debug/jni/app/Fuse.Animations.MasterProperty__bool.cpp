// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Animations.MasterProperty__bool.h>
#include <app/Fuse.Animations.MixerBase.h>
#include <app/Uno.Object.h>
#include <app/Uno.UX.Property__bool.h>

namespace app {
namespace Fuse {
namespace Animations {

MasterProperty__bool__uType* MasterProperty__bool__typeof()
{
    static MasterProperty__bool__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (MasterProperty__bool__uType*)::uAllocClassType(sizeof(MasterProperty__bool__uType), "Fuse.Animations.MasterProperty<bool>", ::app::Fuse::Animations::MasterBase__bool__typeof(), 2, 1);
        type->__fp_OnInactive = (void(*)(::app::Fuse::Animations::MasterBase__bool*))MasterProperty__bool__OnInactive;

        type->__interface_1.__fp_GetPropertyObject = (::uObject*(*)(void*))MasterProperty__bool__GetPropertyObject;

        type->Implements[0] = ::app::Fuse::Animations::IMixerMaster__typeof();
        type->Implements[1] = ::app::Fuse::Animations::MasterPropertyGet__typeof();

        type->InterfaceOffsets[0] = offsetof(MasterProperty__bool__uType, __interface_0);
        type->InterfaceOffsets[1] = offsetof(MasterProperty__bool__uType, __interface_1);

        type->StrongRefOffsets[0] = offsetof(MasterProperty__bool, Property);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "Property";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

bool MasterProperty__bool__get_RestValue(MasterProperty__bool* __this)
{
    return ::uPtr< ::app::Uno::UX::Property__bool*>(__this->Property)->GetRestState();
}

::uObject* MasterProperty__bool__GetPropertyObject(MasterProperty__bool* __this)
{
    return (::uObject*)__this->Property;
}

void MasterProperty__bool__OnInactive(MasterProperty__bool* __this)
{
    ::uPtr< ::app::Uno::UX::Property__bool*>(__this->Property)->Set(__this->RestValue());
}

void MasterProperty__bool___ObjInit_1(MasterProperty__bool* __this, ::app::Uno::UX::Property__bool* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    ::app::Fuse::Animations::MasterBase__bool___ObjInit(__this, mixerBase);
    __this->Property = property;
}

}}}
