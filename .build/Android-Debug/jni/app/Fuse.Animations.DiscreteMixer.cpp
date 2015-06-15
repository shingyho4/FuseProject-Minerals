// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Animations.DiscreteMasterProperty__bool.h>
#include <app/Fuse.Animations.DiscreteMasterProperty__float.h>
#include <app/Fuse.Animations.DiscreteMasterProperty__float4.h>
#include <app/Fuse.Animations.DiscreteMasterTransform.h>
#include <app/Fuse.Animations.DiscreteMixer.h>
#include <app/Fuse.Animations.MasterBase__Fuse_Transform.h>
#include <app/Fuse.Animations.MasterProperty__bool.h>
#include <app/Fuse.Animations.MasterProperty__float.h>
#include <app/Fuse.Animations.MasterProperty__float4.h>
#include <app/Fuse.Node.h>
#include <app/Uno.UX.Property__bool.h>
#include <app/Uno.UX.Property__float.h>
#include <app/Uno.UX.Property__float4.h>

namespace app {
namespace Fuse {
namespace Animations {

DiscreteMixer__uType* DiscreteMixer__typeof()
{
    static DiscreteMixer__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (DiscreteMixer__uType*)::uAllocClassType(sizeof(DiscreteMixer__uType), "Fuse.Animations.DiscreteMixer", ::app::Fuse::Animations::MixerBase__typeof(), 1);
        type->__fp_CreateMasterTransform = (::app::Fuse::Animations::MasterBase__Fuse_Transform*(*)(::app::Fuse::Animations::MixerBase*, ::app::Fuse::Node*, ::app::Fuse::Animations::MixerBase*))DiscreteMixer__CreateMasterTransform;
        type->__fp_CreateMaster__float4 = (::app::Fuse::Animations::MasterProperty__float4*(*)(::app::Fuse::Animations::MixerBase*, ::app::Uno::UX::Property__float4*, ::app::Fuse::Animations::MixerBase*))DiscreteMixer__CreateMaster__float4;
        type->__fp_CreateMaster__float = (::app::Fuse::Animations::MasterProperty__float*(*)(::app::Fuse::Animations::MixerBase*, ::app::Uno::UX::Property__float*, ::app::Fuse::Animations::MixerBase*))DiscreteMixer__CreateMaster__float;
        type->__fp_CreateMaster__bool = (::app::Fuse::Animations::MasterProperty__bool*(*)(::app::Fuse::Animations::MixerBase*, ::app::Uno::UX::Property__bool*, ::app::Fuse::Animations::MixerBase*))DiscreteMixer__CreateMaster__bool;

        type->Implements[0] = ::app::Fuse::Animations::IMixer__typeof();

        type->InterfaceOffsets[0] = offsetof(DiscreteMixer__uType, __interface_0);
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Fuse::Animations::MasterBase__Fuse_Transform* DiscreteMixer__CreateMasterTransform(DiscreteMixer* __this, ::app::Fuse::Node* element, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    return (::app::Fuse::Animations::MasterBase__Fuse_Transform*)::app::Fuse::Animations::DiscreteMasterTransform__New_1(NULL, element, mixerBase);
}

::app::Fuse::Animations::MasterProperty__float4* DiscreteMixer__CreateMaster__float4(DiscreteMixer* __this, ::app::Uno::UX::Property__float4* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    return (::app::Fuse::Animations::MasterProperty__float4*)::app::Fuse::Animations::DiscreteMasterProperty__float4__New_1(NULL, property, mixerBase);
}

::app::Fuse::Animations::MasterProperty__float* DiscreteMixer__CreateMaster__float(DiscreteMixer* __this, ::app::Uno::UX::Property__float* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    return (::app::Fuse::Animations::MasterProperty__float*)::app::Fuse::Animations::DiscreteMasterProperty__float__New_1(NULL, property, mixerBase);
}

::app::Fuse::Animations::MasterProperty__bool* DiscreteMixer__CreateMaster__bool(DiscreteMixer* __this, ::app::Uno::UX::Property__bool* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    return (::app::Fuse::Animations::MasterProperty__bool*)::app::Fuse::Animations::DiscreteMasterProperty__bool__New_1(NULL, property, mixerBase);
}

void DiscreteMixer___ObjInit_1(DiscreteMixer* __this)
{
    ::app::Fuse::Animations::MixerBase___ObjInit(__this);
}

DiscreteMixer* DiscreteMixer__New_1(::uStatic* __this)
{
    DiscreteMixer* inst = (::app::Fuse::Animations::DiscreteMixer*)::uAllocObject(sizeof(::app::Fuse::Animations::DiscreteMixer), ::app::Fuse::Animations::DiscreteMixer__typeof());
    inst->_ObjInit_1();
    return inst;
}

}}}
