// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Animations.DiscreteMasterProperty__float4.h>
#include <app/Fuse.Animations.MasterBase__float4.h>
#include <app/Fuse.Animations.MixerBase.h>
#include <app/Fuse.Animations.MixerHandle__float4.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Collections.List__Fuse_Animations_MixerHandle_float4_.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Animations_MixerHandle_float4_.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float4.h>
#include <app/Uno.UX.Property__float4.h>

namespace app {
namespace Fuse {
namespace Animations {

DiscreteMasterProperty__float4__uType* DiscreteMasterProperty__float4__typeof()
{
    static DiscreteMasterProperty__float4__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (DiscreteMasterProperty__float4__uType*)::uAllocClassType(sizeof(DiscreteMasterProperty__float4__uType), "Fuse.Animations.DiscreteMasterProperty<float4>", ::app::Fuse::Animations::MasterProperty__float4__typeof(), 2);
        type->__fp_OnComplete = (void(*)(::app::Fuse::Animations::MasterBase__float4*))DiscreteMasterProperty__float4__OnComplete;

        type->Implements[0] = ::app::Fuse::Animations::IMixerMaster__typeof();
        type->Implements[1] = ::app::Fuse::Animations::MasterPropertyGet__typeof();

        type->InterfaceOffsets[0] = offsetof(DiscreteMasterProperty__float4__uType, __interface_0);
        type->InterfaceOffsets[1] = offsetof(DiscreteMasterProperty__float4__uType, __interface_1);
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void DiscreteMasterProperty__float4__OnComplete(DiscreteMasterProperty__float4* __this)
{
    ::app::Uno::Float4 nv = __this->RestValue();
    float str = 0.5f;

    for (::app::Uno::Collections::List1_Enumerator__Fuse_Animations_MixerHandle_float4_ enum_123 = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_float4_*>(__this->Handles)->GetEnumerator(); enum_123.MoveNext(); )
    {
        ::app::Fuse::Animations::MixerHandle__float4* v = enum_123.Current();

        if (::uPtr< ::app::Fuse::Animations::MixerHandle__float4*>(v)->HasValue() && (::uPtr< ::app::Fuse::Animations::MixerHandle__float4*>(v)->Strength > str))
        {
            nv = ::uPtr< ::app::Fuse::Animations::MixerHandle__float4*>(v)->Value;
            str = v->Strength;
        }
    }

    ::uPtr< ::app::Uno::UX::Property__float4*>(__this->Property)->Set(nv);
}

void DiscreteMasterProperty__float4___ObjInit_2(DiscreteMasterProperty__float4* __this, ::app::Uno::UX::Property__float4* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    ::app::Fuse::Animations::MasterProperty__float4___ObjInit_1(__this, property, mixerBase);
}

DiscreteMasterProperty__float4* DiscreteMasterProperty__float4__New_1(::uStatic* __this, ::app::Uno::UX::Property__float4* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    DiscreteMasterProperty__float4* inst = (::app::Fuse::Animations::DiscreteMasterProperty__float4*)::uAllocObject(sizeof(::app::Fuse::Animations::DiscreteMasterProperty__float4), ::app::Fuse::Animations::DiscreteMasterProperty__float4__typeof());
    inst->_ObjInit_2(property, mixerBase);
    return inst;
}

}}}
