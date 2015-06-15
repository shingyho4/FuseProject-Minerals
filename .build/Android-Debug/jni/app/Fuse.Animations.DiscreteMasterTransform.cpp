// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Animations.DiscreteMasterTransform.h>
#include <app/Fuse.Animations.FastMatrixTransform.h>
#include <app/Fuse.Animations.MasterBase__Fuse_Transform.h>
#include <app/Fuse.Animations.MixerBase.h>
#include <app/Fuse.Animations.MixerHandle__Fuse_Transform.h>
#include <app/Fuse.FastMatrix.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.Transform.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Collections.List__Fuse_Animations_MixerHandle_Fuse_Transform_.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Animations_MixerHandle_F-a7a26afe.h>
#include <app/Uno.Float.h>

namespace app {
namespace Fuse {
namespace Animations {

DiscreteMasterTransform__uType* DiscreteMasterTransform__typeof()
{
    static DiscreteMasterTransform__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (DiscreteMasterTransform__uType*)::uAllocClassType(sizeof(DiscreteMasterTransform__uType), "Fuse.Animations.DiscreteMasterTransform", ::app::Fuse::Animations::MasterTransform__typeof(), 1);
        type->__fp_OnComplete = (void(*)(::app::Fuse::Animations::MasterBase__Fuse_Transform*))DiscreteMasterTransform__OnComplete;

        type->Implements[0] = ::app::Fuse::Animations::IMixerMaster__typeof();

        type->InterfaceOffsets[0] = offsetof(DiscreteMasterTransform__uType, __interface_0);
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void DiscreteMasterTransform__OnComplete(DiscreteMasterTransform* __this)
{
    ::uPtr< ::app::Fuse::FastMatrix*>(::uPtr< ::app::Fuse::Animations::FastMatrixTransform*>(__this->FMT)->Matrix)->ResetIdentity();
    float str = 0.5f;
    ::app::Fuse::Transform* value = NULL;

    for (::app::Uno::Collections::List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Transform_ enum_123 = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Transform_*>(__this->Handles)->GetEnumerator(); enum_123.MoveNext(); )
    {
        ::app::Fuse::Animations::MixerHandle__Fuse_Transform* v = enum_123.Current();

        if (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Transform*>(v)->HasValue() && (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Transform*>(v)->Strength > str))
        {
            value = ::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Transform*>(v)->Value;
            str = v->Strength;
        }
    }

    if (value != NULL)
    {
        ::uPtr< ::app::Fuse::Transform*>(value)->AppendTo(::uPtr< ::app::Fuse::Animations::FastMatrixTransform*>(__this->FMT)->Matrix, 1.0f);
    }

    ::uPtr< ::app::Fuse::Animations::FastMatrixTransform*>(__this->FMT)->Changed();
}

void DiscreteMasterTransform___ObjInit_2(DiscreteMasterTransform* __this, ::app::Fuse::Node* node, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    ::app::Fuse::Animations::MasterTransform___ObjInit_1(__this, node, mixerBase);
}

DiscreteMasterTransform* DiscreteMasterTransform__New_1(::uStatic* __this, ::app::Fuse::Node* node, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    DiscreteMasterTransform* inst = (::app::Fuse::Animations::DiscreteMasterTransform*)::uAllocObject(sizeof(::app::Fuse::Animations::DiscreteMasterTransform), ::app::Fuse::Animations::DiscreteMasterTransform__typeof());
    inst->_ObjInit_2(node, mixerBase);
    return inst;
}

}}}
