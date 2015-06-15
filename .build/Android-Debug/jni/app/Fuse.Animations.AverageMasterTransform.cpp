// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Animations.AverageMasterTransform.h>
#include <app/Fuse.Animations.FastMatrixTransform.h>
#include <app/Fuse.Animations.MasterBase__Fuse_Transform.h>
#include <app/Fuse.Animations.MasterBase1_GFWResult__Fuse_Transform.h>
#include <app/Fuse.Animations.MixerBase.h>
#include <app/Fuse.Animations.MixerHandle__Fuse_Transform.h>
#include <app/Fuse.FastMatrix.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.Transform.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Collections.List__Fuse_Animations_MixerHandle_Fuse_Transform_.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Animations_MixerHandle_F-a7a26afe.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float4x4.h>
#include <app/Uno.Int.h>
#include <app/Uno.Object.h>

namespace app {
namespace Fuse {
namespace Animations {

AverageMasterTransform__uType* AverageMasterTransform__typeof()
{
    static AverageMasterTransform__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (AverageMasterTransform__uType*)::uAllocClassType(sizeof(AverageMasterTransform__uType), "Fuse.Animations.AverageMasterTransform", ::app::Fuse::Animations::MasterTransform__typeof(), 1);
        type->__fp_OnComplete = (void(*)(::app::Fuse::Animations::MasterBase__Fuse_Transform*))AverageMasterTransform__OnComplete;

        type->Implements[0] = ::app::Fuse::Animations::IMixerMaster__typeof();

        type->InterfaceOffsets[0] = offsetof(AverageMasterTransform__uType, __interface_0);
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void AverageMasterTransform__OnComplete(AverageMasterTransform* __this)
{
    ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Transform weight = __this->GetFullWeight();
    ::app::Fuse::FastMatrix* nv = ::app::Fuse::FastMatrix__Identity(NULL);

    for (::app::Uno::Collections::List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Transform_ enum_123 = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Transform_*>(__this->Handles)->GetEnumerator(); enum_123.MoveNext(); )
    {
        ::app::Fuse::Animations::MixerHandle__Fuse_Transform* v = enum_123.Current();

        if (!::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Transform*>(v)->HasValue())
        {
            continue;
        }

        if (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Transform*>(v)->MixOp() == 1)
        {
            ::uPtr< ::app::Fuse::Transform*>(::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Transform*>(v)->Value)->AppendTo(nv, ::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Transform*>(v)->Strength / weight.Full);
        }
        else
        {
            ::uPtr< ::app::Fuse::Transform*>(v->Value)->AppendTo(nv, v->Strength);
        }
    }

    if (!::uPtr< ::app::Fuse::FastMatrix*>(nv)->Matrix().Equals(::uBox(::app::Uno::Float4x4__typeof(), ::uPtr< ::app::Fuse::FastMatrix*>(::uPtr< ::app::Fuse::Animations::FastMatrixTransform*>(__this->FMT)->Matrix)->Matrix())))
    {
        ::uPtr< ::app::Fuse::Animations::FastMatrixTransform*>(__this->FMT)->Matrix = nv;
        ::uPtr< ::app::Fuse::Animations::FastMatrixTransform*>(__this->FMT)->Changed();
    }
}

void AverageMasterTransform___ObjInit_2(AverageMasterTransform* __this, ::app::Fuse::Node* node, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    ::app::Fuse::Animations::MasterTransform___ObjInit_1(__this, node, mixerBase);
}

AverageMasterTransform* AverageMasterTransform__New_1(::uStatic* __this, ::app::Fuse::Node* node, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    AverageMasterTransform* inst = (::app::Fuse::Animations::AverageMasterTransform*)::uAllocObject(sizeof(::app::Fuse::Animations::AverageMasterTransform), ::app::Fuse::Animations::AverageMasterTransform__typeof());
    inst->_ObjInit_2(node, mixerBase);
    return inst;
}

}}}
