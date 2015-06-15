// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Animations.AverageMasterProperty__float4.h>
#include <app/Fuse.Animations.MasterBase__float4.h>
#include <app/Fuse.Animations.MasterBase1_GFWResult__float4.h>
#include <app/Fuse.Animations.MixerBase.h>
#include <app/Fuse.Animations.MixerHandle__float4.h>
#include <app/Fuse.Internal.Blender__float4.h>
#include <app/Fuse.Internal.BlenderMap.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Collections.List__Fuse_Animations_MixerHandle_float4_.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Animations_MixerHandle_float4_.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float4.h>
#include <app/Uno.Int.h>
#include <app/Uno.UX.Property__float4.h>

namespace app {
namespace Fuse {
namespace Animations {

AverageMasterProperty__float4__uType* AverageMasterProperty__float4__typeof()
{
    static AverageMasterProperty__float4__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (AverageMasterProperty__float4__uType*)::uAllocClassType(sizeof(AverageMasterProperty__float4__uType), "Fuse.Animations.AverageMasterProperty<float4>", ::app::Fuse::Animations::MasterProperty__float4__typeof(), 2, 1);
        type->__fp_OnActive = (void(*)(::app::Fuse::Animations::MasterBase__float4*))AverageMasterProperty__float4__OnActive;
        type->__fp_OnComplete = (void(*)(::app::Fuse::Animations::MasterBase__float4*))AverageMasterProperty__float4__OnComplete;

        type->Implements[0] = ::app::Fuse::Animations::IMixerMaster__typeof();
        type->Implements[1] = ::app::Fuse::Animations::MasterPropertyGet__typeof();

        type->InterfaceOffsets[0] = offsetof(AverageMasterProperty__float4__uType, __interface_0);
        type->InterfaceOffsets[1] = offsetof(AverageMasterProperty__float4__uType, __interface_1);

        type->StrongRefOffsets[0] = offsetof(AverageMasterProperty__float4, blender);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "blender";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void AverageMasterProperty__float4__OnActive(AverageMasterProperty__float4* __this)
{
    if (__this->blender == NULL)
    {
        __this->blender = ::app::Fuse::Internal::BlenderMap__Get__float4(NULL);
    }
}

void AverageMasterProperty__float4__OnComplete(AverageMasterProperty__float4* __this)
{
    ::app::Fuse::Animations::MasterBase1_GFWResult__float4 weight = __this->GetFullWeight();
    ::app::Uno::Float4 nv = ::uPtr< ::app::Fuse::Internal::Blender__float4*>(__this->blender)->Weight(__this->RestValue(), weight.Rest / weight.Full);

    for (::app::Uno::Collections::List1_Enumerator__Fuse_Animations_MixerHandle_float4_ enum_123 = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_float4_*>(__this->Handles)->GetEnumerator(); enum_123.MoveNext(); )
    {
        ::app::Fuse::Animations::MixerHandle__float4* v = enum_123.Current();

        if (!::uPtr< ::app::Fuse::Animations::MixerHandle__float4*>(v)->HasValue())
        {
            continue;
        }

        if (::uPtr< ::app::Fuse::Animations::MixerHandle__float4*>(v)->MixOp() == 1)
        {
            nv = ::uPtr< ::app::Fuse::Internal::Blender__float4*>(__this->blender)->Add(nv, ::uPtr< ::app::Fuse::Internal::Blender__float4*>(__this->blender)->Weight(::uPtr< ::app::Fuse::Animations::MixerHandle__float4*>(v)->Value, ::uPtr< ::app::Fuse::Animations::MixerHandle__float4*>(v)->Strength / weight.Full));
        }
        else
        {
            nv = ::uPtr< ::app::Fuse::Internal::Blender__float4*>(__this->blender)->Add(nv, ::uPtr< ::app::Fuse::Internal::Blender__float4*>(__this->blender)->Weight(v->Value, v->Strength));
        }
    }

    ::uPtr< ::app::Uno::UX::Property__float4*>(__this->Property)->Set(nv);
}

void AverageMasterProperty__float4___ObjInit_2(AverageMasterProperty__float4* __this, ::app::Uno::UX::Property__float4* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    ::app::Fuse::Animations::MasterProperty__float4___ObjInit_1(__this, property, mixerBase);
}

AverageMasterProperty__float4* AverageMasterProperty__float4__New_1(::uStatic* __this, ::app::Uno::UX::Property__float4* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    AverageMasterProperty__float4* inst = (::app::Fuse::Animations::AverageMasterProperty__float4*)::uAllocObject(sizeof(::app::Fuse::Animations::AverageMasterProperty__float4), ::app::Fuse::Animations::AverageMasterProperty__float4__typeof());
    inst->_ObjInit_2(property, mixerBase);
    return inst;
}

}}}
