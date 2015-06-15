// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Animations.AverageMasterProperty__bool.h>
#include <app/Fuse.Animations.MasterBase__bool.h>
#include <app/Fuse.Animations.MasterBase1_GFWResult__bool.h>
#include <app/Fuse.Animations.MixerBase.h>
#include <app/Fuse.Animations.MixerHandle__bool.h>
#include <app/Fuse.Internal.Blender__bool.h>
#include <app/Fuse.Internal.BlenderMap.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Collections.List__Fuse_Animations_MixerHandle_bool_.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Animations_MixerHandle_bool_.h>
#include <app/Uno.Float.h>
#include <app/Uno.Int.h>
#include <app/Uno.UX.Property__bool.h>

namespace app {
namespace Fuse {
namespace Animations {

AverageMasterProperty__bool__uType* AverageMasterProperty__bool__typeof()
{
    static AverageMasterProperty__bool__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (AverageMasterProperty__bool__uType*)::uAllocClassType(sizeof(AverageMasterProperty__bool__uType), "Fuse.Animations.AverageMasterProperty<bool>", ::app::Fuse::Animations::MasterProperty__bool__typeof(), 2, 1);
        type->__fp_OnActive = (void(*)(::app::Fuse::Animations::MasterBase__bool*))AverageMasterProperty__bool__OnActive;
        type->__fp_OnComplete = (void(*)(::app::Fuse::Animations::MasterBase__bool*))AverageMasterProperty__bool__OnComplete;

        type->Implements[0] = ::app::Fuse::Animations::IMixerMaster__typeof();
        type->Implements[1] = ::app::Fuse::Animations::MasterPropertyGet__typeof();

        type->InterfaceOffsets[0] = offsetof(AverageMasterProperty__bool__uType, __interface_0);
        type->InterfaceOffsets[1] = offsetof(AverageMasterProperty__bool__uType, __interface_1);

        type->StrongRefOffsets[0] = offsetof(AverageMasterProperty__bool, blender);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "blender";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void AverageMasterProperty__bool__OnActive(AverageMasterProperty__bool* __this)
{
    if (__this->blender == NULL)
    {
        __this->blender = ::app::Fuse::Internal::BlenderMap__Get__bool(NULL);
    }
}

void AverageMasterProperty__bool__OnComplete(AverageMasterProperty__bool* __this)
{
    ::app::Fuse::Animations::MasterBase1_GFWResult__bool weight = __this->GetFullWeight();
    bool nv = ::uPtr< ::app::Fuse::Internal::Blender__bool*>(__this->blender)->Weight(__this->RestValue(), weight.Rest / weight.Full);

    for (::app::Uno::Collections::List1_Enumerator__Fuse_Animations_MixerHandle_bool_ enum_123 = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_bool_*>(__this->Handles)->GetEnumerator(); enum_123.MoveNext(); )
    {
        ::app::Fuse::Animations::MixerHandle__bool* v = enum_123.Current();

        if (!::uPtr< ::app::Fuse::Animations::MixerHandle__bool*>(v)->HasValue())
        {
            continue;
        }

        if (::uPtr< ::app::Fuse::Animations::MixerHandle__bool*>(v)->MixOp() == 1)
        {
            nv = ::uPtr< ::app::Fuse::Internal::Blender__bool*>(__this->blender)->Add(nv, ::uPtr< ::app::Fuse::Internal::Blender__bool*>(__this->blender)->Weight(::uPtr< ::app::Fuse::Animations::MixerHandle__bool*>(v)->Value, ::uPtr< ::app::Fuse::Animations::MixerHandle__bool*>(v)->Strength / weight.Full));
        }
        else
        {
            nv = ::uPtr< ::app::Fuse::Internal::Blender__bool*>(__this->blender)->Add(nv, ::uPtr< ::app::Fuse::Internal::Blender__bool*>(__this->blender)->Weight(v->Value, v->Strength));
        }
    }

    ::uPtr< ::app::Uno::UX::Property__bool*>(__this->Property)->Set(nv);
}

void AverageMasterProperty__bool___ObjInit_2(AverageMasterProperty__bool* __this, ::app::Uno::UX::Property__bool* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    ::app::Fuse::Animations::MasterProperty__bool___ObjInit_1(__this, property, mixerBase);
}

AverageMasterProperty__bool* AverageMasterProperty__bool__New_1(::uStatic* __this, ::app::Uno::UX::Property__bool* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    AverageMasterProperty__bool* inst = (::app::Fuse::Animations::AverageMasterProperty__bool*)::uAllocObject(sizeof(::app::Fuse::Animations::AverageMasterProperty__bool), ::app::Fuse::Animations::AverageMasterProperty__bool__typeof());
    inst->_ObjInit_2(property, mixerBase);
    return inst;
}

}}}
