// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Animations.AverageMasterProperty__bool.h>
#include <app/Fuse.Animations.AverageMasterProperty__float.h>
#include <app/Fuse.Animations.AverageMasterProperty__float4.h>
#include <app/Fuse.Animations.AverageMasterTransform.h>
#include <app/Fuse.Animations.AverageMixer.h>
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

AverageMixer__uType* AverageMixer__typeof()
{
    static AverageMixer__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (AverageMixer__uType*)::uAllocClassType(sizeof(AverageMixer__uType), "Fuse.Animations.AverageMixer", ::app::Fuse::Animations::MixerBase__typeof(), 1);
        type->__fp_CreateMasterTransform = (::app::Fuse::Animations::MasterBase__Fuse_Transform*(*)(::app::Fuse::Animations::MixerBase*, ::app::Fuse::Node*, ::app::Fuse::Animations::MixerBase*))AverageMixer__CreateMasterTransform;
        type->__fp_CreateMaster__float4 = (::app::Fuse::Animations::MasterProperty__float4*(*)(::app::Fuse::Animations::MixerBase*, ::app::Uno::UX::Property__float4*, ::app::Fuse::Animations::MixerBase*))AverageMixer__CreateMaster__float4;
        type->__fp_CreateMaster__float = (::app::Fuse::Animations::MasterProperty__float*(*)(::app::Fuse::Animations::MixerBase*, ::app::Uno::UX::Property__float*, ::app::Fuse::Animations::MixerBase*))AverageMixer__CreateMaster__float;
        type->__fp_CreateMaster__bool = (::app::Fuse::Animations::MasterProperty__bool*(*)(::app::Fuse::Animations::MixerBase*, ::app::Uno::UX::Property__bool*, ::app::Fuse::Animations::MixerBase*))AverageMixer__CreateMaster__bool;

        type->Implements[0] = ::app::Fuse::Animations::IMixer__typeof();

        type->InterfaceOffsets[0] = offsetof(AverageMixer__uType, __interface_0);
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Fuse::Animations::MasterBase__Fuse_Transform* AverageMixer__CreateMasterTransform(AverageMixer* __this, ::app::Fuse::Node* element, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    return (::app::Fuse::Animations::MasterBase__Fuse_Transform*)::app::Fuse::Animations::AverageMasterTransform__New_1(NULL, element, mixerBase);
}

::app::Fuse::Animations::MasterProperty__float4* AverageMixer__CreateMaster__float4(AverageMixer* __this, ::app::Uno::UX::Property__float4* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    return (::app::Fuse::Animations::MasterProperty__float4*)::app::Fuse::Animations::AverageMasterProperty__float4__New_1(NULL, property, mixerBase);
}

::app::Fuse::Animations::MasterProperty__float* AverageMixer__CreateMaster__float(AverageMixer* __this, ::app::Uno::UX::Property__float* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    return (::app::Fuse::Animations::MasterProperty__float*)::app::Fuse::Animations::AverageMasterProperty__float__New_1(NULL, property, mixerBase);
}

::app::Fuse::Animations::MasterProperty__bool* AverageMixer__CreateMaster__bool(AverageMixer* __this, ::app::Uno::UX::Property__bool* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    return (::app::Fuse::Animations::MasterProperty__bool*)::app::Fuse::Animations::AverageMasterProperty__bool__New_1(NULL, property, mixerBase);
}

void AverageMixer___ObjInit_1(AverageMixer* __this)
{
    ::app::Fuse::Animations::MixerBase___ObjInit(__this);
}

AverageMixer* AverageMixer__New_1(::uStatic* __this)
{
    AverageMixer* inst = (::app::Fuse::Animations::AverageMixer*)::uAllocObject(sizeof(::app::Fuse::Animations::AverageMixer), ::app::Fuse::Animations::AverageMixer__typeof());
    inst->_ObjInit_1();
    return inst;
}

}}}
