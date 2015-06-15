// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Animations.AverageMasterProperty__float.h>
#include <app/Fuse.Animations.MasterBase__float.h>
#include <app/Fuse.Animations.MasterBase1_GFWResult__float.h>
#include <app/Fuse.Animations.MixerBase.h>
#include <app/Fuse.Animations.MixerHandle__float.h>
#include <app/Fuse.Internal.Blender__float.h>
#include <app/Fuse.Internal.BlenderMap.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Collections.List__Fuse_Animations_MixerHandle_float_.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Animations_MixerHandle_float_.h>
#include <app/Uno.Float.h>
#include <app/Uno.Int.h>
#include <app/Uno.UX.Property__float.h>

namespace app {
namespace Fuse {
namespace Animations {

AverageMasterProperty__float__uType* AverageMasterProperty__float__typeof()
{
    static AverageMasterProperty__float__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (AverageMasterProperty__float__uType*)::uAllocClassType(sizeof(AverageMasterProperty__float__uType), "Fuse.Animations.AverageMasterProperty<float>", ::app::Fuse::Animations::MasterProperty__float__typeof(), 2, 1);
        type->__fp_OnActive = (void(*)(::app::Fuse::Animations::MasterBase__float*))AverageMasterProperty__float__OnActive;
        type->__fp_OnComplete = (void(*)(::app::Fuse::Animations::MasterBase__float*))AverageMasterProperty__float__OnComplete;

        type->Implements[0] = ::app::Fuse::Animations::IMixerMaster__typeof();
        type->Implements[1] = ::app::Fuse::Animations::MasterPropertyGet__typeof();

        type->InterfaceOffsets[0] = offsetof(AverageMasterProperty__float__uType, __interface_0);
        type->InterfaceOffsets[1] = offsetof(AverageMasterProperty__float__uType, __interface_1);

        type->StrongRefOffsets[0] = offsetof(AverageMasterProperty__float, blender);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "blender";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void AverageMasterProperty__float__OnActive(AverageMasterProperty__float* __this)
{
    if (__this->blender == NULL)
    {
        __this->blender = ::app::Fuse::Internal::BlenderMap__Get__float(NULL);
    }
}

void AverageMasterProperty__float__OnComplete(AverageMasterProperty__float* __this)
{
    ::app::Fuse::Animations::MasterBase1_GFWResult__float weight = __this->GetFullWeight();
    float nv = ::uPtr< ::app::Fuse::Internal::Blender__float*>(__this->blender)->Weight(__this->RestValue(), weight.Rest / weight.Full);

    for (::app::Uno::Collections::List1_Enumerator__Fuse_Animations_MixerHandle_float_ enum_123 = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_float_*>(__this->Handles)->GetEnumerator(); enum_123.MoveNext(); )
    {
        ::app::Fuse::Animations::MixerHandle__float* v = enum_123.Current();

        if (!::uPtr< ::app::Fuse::Animations::MixerHandle__float*>(v)->HasValue())
        {
            continue;
        }

        if (::uPtr< ::app::Fuse::Animations::MixerHandle__float*>(v)->MixOp() == 1)
        {
            nv = ::uPtr< ::app::Fuse::Internal::Blender__float*>(__this->blender)->Add(nv, ::uPtr< ::app::Fuse::Internal::Blender__float*>(__this->blender)->Weight(::uPtr< ::app::Fuse::Animations::MixerHandle__float*>(v)->Value, ::uPtr< ::app::Fuse::Animations::MixerHandle__float*>(v)->Strength / weight.Full));
        }
        else
        {
            nv = ::uPtr< ::app::Fuse::Internal::Blender__float*>(__this->blender)->Add(nv, ::uPtr< ::app::Fuse::Internal::Blender__float*>(__this->blender)->Weight(v->Value, v->Strength));
        }
    }

    ::uPtr< ::app::Uno::UX::Property__float*>(__this->Property)->Set(nv);
}

void AverageMasterProperty__float___ObjInit_2(AverageMasterProperty__float* __this, ::app::Uno::UX::Property__float* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    ::app::Fuse::Animations::MasterProperty__float___ObjInit_1(__this, property, mixerBase);
}

AverageMasterProperty__float* AverageMasterProperty__float__New_1(::uStatic* __this, ::app::Uno::UX::Property__float* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    AverageMasterProperty__float* inst = (::app::Fuse::Animations::AverageMasterProperty__float*)::uAllocObject(sizeof(::app::Fuse::Animations::AverageMasterProperty__float), ::app::Fuse::Animations::AverageMasterProperty__float__typeof());
    inst->_ObjInit_2(property, mixerBase);
    return inst;
}

}}}
