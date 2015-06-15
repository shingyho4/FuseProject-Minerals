// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Animations.DiscreteMasterProperty__bool.h>
#include <app/Fuse.Animations.MasterBase__bool.h>
#include <app/Fuse.Animations.MixerBase.h>
#include <app/Fuse.Animations.MixerHandle__bool.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Collections.List__Fuse_Animations_MixerHandle_bool_.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Animations_MixerHandle_bool_.h>
#include <app/Uno.Float.h>
#include <app/Uno.UX.Property__bool.h>

namespace app {
namespace Fuse {
namespace Animations {

DiscreteMasterProperty__bool__uType* DiscreteMasterProperty__bool__typeof()
{
    static DiscreteMasterProperty__bool__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (DiscreteMasterProperty__bool__uType*)::uAllocClassType(sizeof(DiscreteMasterProperty__bool__uType), "Fuse.Animations.DiscreteMasterProperty<bool>", ::app::Fuse::Animations::MasterProperty__bool__typeof(), 2);
        type->__fp_OnComplete = (void(*)(::app::Fuse::Animations::MasterBase__bool*))DiscreteMasterProperty__bool__OnComplete;

        type->Implements[0] = ::app::Fuse::Animations::IMixerMaster__typeof();
        type->Implements[1] = ::app::Fuse::Animations::MasterPropertyGet__typeof();

        type->InterfaceOffsets[0] = offsetof(DiscreteMasterProperty__bool__uType, __interface_0);
        type->InterfaceOffsets[1] = offsetof(DiscreteMasterProperty__bool__uType, __interface_1);
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void DiscreteMasterProperty__bool__OnComplete(DiscreteMasterProperty__bool* __this)
{
    bool nv = __this->RestValue();
    float str = 0.5f;

    for (::app::Uno::Collections::List1_Enumerator__Fuse_Animations_MixerHandle_bool_ enum_123 = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_bool_*>(__this->Handles)->GetEnumerator(); enum_123.MoveNext(); )
    {
        ::app::Fuse::Animations::MixerHandle__bool* v = enum_123.Current();

        if (::uPtr< ::app::Fuse::Animations::MixerHandle__bool*>(v)->HasValue() && (::uPtr< ::app::Fuse::Animations::MixerHandle__bool*>(v)->Strength > str))
        {
            nv = ::uPtr< ::app::Fuse::Animations::MixerHandle__bool*>(v)->Value;
            str = v->Strength;
        }
    }

    ::uPtr< ::app::Uno::UX::Property__bool*>(__this->Property)->Set(nv);
}

void DiscreteMasterProperty__bool___ObjInit_2(DiscreteMasterProperty__bool* __this, ::app::Uno::UX::Property__bool* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    ::app::Fuse::Animations::MasterProperty__bool___ObjInit_1(__this, property, mixerBase);
}

DiscreteMasterProperty__bool* DiscreteMasterProperty__bool__New_1(::uStatic* __this, ::app::Uno::UX::Property__bool* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    DiscreteMasterProperty__bool* inst = (::app::Fuse::Animations::DiscreteMasterProperty__bool*)::uAllocObject(sizeof(::app::Fuse::Animations::DiscreteMasterProperty__bool), ::app::Fuse::Animations::DiscreteMasterProperty__bool__typeof());
    inst->_ObjInit_2(property, mixerBase);
    return inst;
}

}}}
