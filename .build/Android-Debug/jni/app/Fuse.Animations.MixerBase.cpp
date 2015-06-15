// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Animations.IMixerHandle__bool.h>
#include <app/Fuse.Animations.IMixerHandle__float.h>
#include <app/Fuse.Animations.IMixerHandle__float4.h>
#include <app/Fuse.Animations.IMixerHandle__Fuse_Transform.h>
#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Fuse.Animations.MasterBase__bool.h>
#include <app/Fuse.Animations.MasterBase__float.h>
#include <app/Fuse.Animations.MasterBase__float4.h>
#include <app/Fuse.Animations.MasterBase__Fuse_Transform.h>
#include <app/Fuse.Animations.MasterProperty__bool.h>
#include <app/Fuse.Animations.MasterProperty__float.h>
#include <app/Fuse.Animations.MasterProperty__float4.h>
#include <app/Fuse.Animations.MasterPropertyGet.h>
#include <app/Fuse.Animations.MasterTransform.h>
#include <app/Fuse.Animations.MixerBase.h>
#include <app/Fuse.Animations.MixerHandle__bool.h>
#include <app/Fuse.Animations.MixerHandle__float.h>
#include <app/Fuse.Animations.MixerHandle__float4.h>
#include <app/Fuse.Animations.MixerHandle__Fuse_Transform.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.Properties.h>
#include <app/Fuse.PropertyHandle.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Collections.Dictionary__object__object.h>
#include <app/Uno.UX.Property__bool.h>
#include <app/Uno.UX.Property__float.h>
#include <app/Uno.UX.Property__float4.h>

namespace app {
namespace Fuse {
namespace Animations {

MixerBase__uType* MixerBase__typeof()
{
    static MixerBase__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (MixerBase__uType*)::uAllocClassType(sizeof(MixerBase__uType), "Fuse.Animations.MixerBase", ::uObject__typeof(), 1, 2);
        type->__interface_0.__fp_RegisterTransform = (::uObject*(*)(void*, ::app::Fuse::Node*, int, int))MixerBase__RegisterTransform;
        type->__interface_0.__fp_Register__float4 = (::uObject*(*)(void*, ::app::Uno::UX::Property__float4*, int))MixerBase__Register__float4;
        type->__interface_0.__fp_Register__float = (::uObject*(*)(void*, ::app::Uno::UX::Property__float*, int))MixerBase__Register__float;
        type->__interface_0.__fp_Register__bool = (::uObject*(*)(void*, ::app::Uno::UX::Property__bool*, int))MixerBase__Register__bool;

        type->Implements[0] = ::app::Fuse::Animations::IMixer__typeof();

        type->InterfaceOffsets[0] = offsetof(MixerBase__uType, __interface_0);

        type->StrongRefOffsets[0] = offsetof(MixerBase, Masters);
        type->StrongRefOffsets[1] = offsetof(MixerBase, _propHandle);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "Masters";
        type->StrongRefNames[1] = "_propHandle";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::uObject* MixerBase__RegisterTransform(MixerBase* __this, ::app::Fuse::Node* element, int mode, int priority)
{
    ::uObject* master;

    if (!::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(element)->Properties())->TryGet(__this->_propHandle, &master))
    {
        master = (::uObject*)__this->CreateMasterTransform(element, __this);
        ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(element)->Properties())->Set(__this->_propHandle, master);
    }

    ::app::Fuse::Animations::MasterBase__Fuse_Transform* masterT = ::uCast< ::app::Fuse::Animations::MasterBase__Fuse_Transform*>(master, ::app::Fuse::Animations::MasterBase__Fuse_Transform__typeof());
    return (::uObject*)::app::Fuse::Animations::MixerHandle__Fuse_Transform__New_1(NULL, masterT, mode, priority);
}

void MixerBase__Unused(MixerBase* __this, ::uObject* mb)
{
    ::uObject* prop = ::uAs< ::uObject*>(mb, ::app::Fuse::Animations::MasterPropertyGet__typeof());

    if (prop != NULL)
    {
        ::uPtr< ::app::Uno::Collections::Dictionary__object__object*>(__this->Masters)->Remove(::app::Fuse::Animations::MasterPropertyGet::GetPropertyObject(::uPtr< ::uObject*>(prop)));
    }

    ::app::Fuse::Animations::MasterTransform* trans = ::uAs< ::app::Fuse::Animations::MasterTransform*>(mb, ::app::Fuse::Animations::MasterTransform__typeof());

    if (trans != NULL)
    {
        ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(::uPtr< ::app::Fuse::Animations::MasterTransform*>(trans)->Node)->Properties())->Clear(__this->_propHandle);
    }
}

::uObject* MixerBase__Register__float4(MixerBase* __this, ::app::Uno::UX::Property__float4* property, int mode)
{
    ::uObject* master;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__object__object*>(__this->Masters)->TryGetValue((::uObject*)property, &master))
    {
        master = ::uCast< ::uObject*>((::uObject*)__this->CreateMaster__float4(property, __this), ::uObject__typeof());
        ::uPtr< ::app::Uno::Collections::Dictionary__object__object*>(__this->Masters)->Add((::uObject*)property, master);
    }

    ::app::Fuse::Animations::MasterBase__float4* masterT = ::uCast< ::app::Fuse::Animations::MasterBase__float4*>(master, ::app::Fuse::Animations::MasterBase__float4__typeof());
    return (::uObject*)::app::Fuse::Animations::MixerHandle__float4__New_1(NULL, masterT, mode, 0);
}

::uObject* MixerBase__Register__float(MixerBase* __this, ::app::Uno::UX::Property__float* property, int mode)
{
    ::uObject* master;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__object__object*>(__this->Masters)->TryGetValue((::uObject*)property, &master))
    {
        master = ::uCast< ::uObject*>((::uObject*)__this->CreateMaster__float(property, __this), ::uObject__typeof());
        ::uPtr< ::app::Uno::Collections::Dictionary__object__object*>(__this->Masters)->Add((::uObject*)property, master);
    }

    ::app::Fuse::Animations::MasterBase__float* masterT = ::uCast< ::app::Fuse::Animations::MasterBase__float*>(master, ::app::Fuse::Animations::MasterBase__float__typeof());
    return (::uObject*)::app::Fuse::Animations::MixerHandle__float__New_1(NULL, masterT, mode, 0);
}

::uObject* MixerBase__Register__bool(MixerBase* __this, ::app::Uno::UX::Property__bool* property, int mode)
{
    ::uObject* master;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__object__object*>(__this->Masters)->TryGetValue((::uObject*)property, &master))
    {
        master = ::uCast< ::uObject*>((::uObject*)__this->CreateMaster__bool(property, __this), ::uObject__typeof());
        ::uPtr< ::app::Uno::Collections::Dictionary__object__object*>(__this->Masters)->Add((::uObject*)property, master);
    }

    ::app::Fuse::Animations::MasterBase__bool* masterT = ::uCast< ::app::Fuse::Animations::MasterBase__bool*>(master, ::app::Fuse::Animations::MasterBase__bool__typeof());
    return (::uObject*)::app::Fuse::Animations::MixerHandle__bool__New_1(NULL, masterT, mode, 0);
}

void MixerBase___ObjInit(MixerBase* __this)
{
    __this->Masters = ::app::Uno::Collections::Dictionary__object__object__New_1(NULL);
    __this->_propHandle = ::app::Fuse::Properties__CreateHandle(NULL);
}

}}}
