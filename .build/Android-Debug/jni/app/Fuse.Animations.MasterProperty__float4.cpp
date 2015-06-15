// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Animations.MasterProperty__float4.h>
#include <app/Fuse.Animations.MixerBase.h>
#include <app/Uno.Object.h>
#include <app/Uno.UX.Property__float4.h>

namespace app {
namespace Fuse {
namespace Animations {

MasterProperty__float4__uType* MasterProperty__float4__typeof()
{
    static MasterProperty__float4__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (MasterProperty__float4__uType*)::uAllocClassType(sizeof(MasterProperty__float4__uType), "Fuse.Animations.MasterProperty<float4>", ::app::Fuse::Animations::MasterBase__float4__typeof(), 2, 1);
        type->__fp_OnInactive = (void(*)(::app::Fuse::Animations::MasterBase__float4*))MasterProperty__float4__OnInactive;

        type->__interface_1.__fp_GetPropertyObject = (::uObject*(*)(void*))MasterProperty__float4__GetPropertyObject;

        type->Implements[0] = ::app::Fuse::Animations::IMixerMaster__typeof();
        type->Implements[1] = ::app::Fuse::Animations::MasterPropertyGet__typeof();

        type->InterfaceOffsets[0] = offsetof(MasterProperty__float4__uType, __interface_0);
        type->InterfaceOffsets[1] = offsetof(MasterProperty__float4__uType, __interface_1);

        type->StrongRefOffsets[0] = offsetof(MasterProperty__float4, Property);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "Property";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Uno::Float4 MasterProperty__float4__get_RestValue(MasterProperty__float4* __this)
{
    return ::uPtr< ::app::Uno::UX::Property__float4*>(__this->Property)->GetRestState();
}

::uObject* MasterProperty__float4__GetPropertyObject(MasterProperty__float4* __this)
{
    return (::uObject*)__this->Property;
}

void MasterProperty__float4__OnInactive(MasterProperty__float4* __this)
{
    ::uPtr< ::app::Uno::UX::Property__float4*>(__this->Property)->Set(__this->RestValue());
}

void MasterProperty__float4___ObjInit_1(MasterProperty__float4* __this, ::app::Uno::UX::Property__float4* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    ::app::Fuse::Animations::MasterBase__float4___ObjInit(__this, mixerBase);
    __this->Property = property;
}

}}}
