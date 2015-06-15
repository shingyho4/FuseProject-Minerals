// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Animations.MasterBase__Fuse_Transform.h>
#include <app/Fuse.Animations.Mixer.h>
#include <app/Fuse.Animations.MixerBase.h>
#include <app/Fuse.Animations.MixerHandle__Fuse_Transform.h>
#include <app/Uno.Collections.List__Fuse_Animations_MixerHandle_Fuse_Transform_.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Animations_MixerHandle_F-a7a26afe.h>
#include <app/Uno.Float.h>
#include <app/Uno.Int.h>
#include <app/Uno.Math.h>

namespace app {
namespace Fuse {
namespace Animations {

MasterBase__Fuse_Transform__uType* MasterBase__Fuse_Transform__typeof()
{
    static MasterBase__Fuse_Transform__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (MasterBase__Fuse_Transform__uType*)::uAllocClassType(sizeof(MasterBase__Fuse_Transform__uType), "Fuse.Animations.MasterBase<Fuse.Transform>", ::uObject__typeof(), 1, 2);
        type->__fp_Finalize = (void(*)(::uObject*))MasterBase__Fuse_Transform__Finalize;
        type->__fp_get_PostLayout = MasterBase__Fuse_Transform__get_PostLayout;
        type->__fp_OnActive = MasterBase__Fuse_Transform__OnActive;

        type->__interface_0.__fp_Complete = (void(*)(void*))MasterBase__Fuse_Transform__Complete;

        type->Implements[0] = ::app::Fuse::Animations::IMixerMaster__typeof();

        type->InterfaceOffsets[0] = offsetof(MasterBase__Fuse_Transform__uType, __interface_0);

        type->StrongRefOffsets[0] = offsetof(MasterBase__Fuse_Transform, _mixerBase);
        type->StrongRefOffsets[1] = offsetof(MasterBase__Fuse_Transform, Handles);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_mixerBase";
        type->StrongRefNames[1] = "Handles";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void MasterBase__Fuse_Transform__Finalize(MasterBase__Fuse_Transform* __this)
{
}

bool MasterBase__Fuse_Transform__get_PostLayout(MasterBase__Fuse_Transform* __this)
{
    return false;
}

void MasterBase__Fuse_Transform__Register(MasterBase__Fuse_Transform* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Transform* handle)
{
    if (__this->_inactive)
    {
        return;
    }

    int at = 0;

    for (; (at < ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Transform_*>(__this->Handles)->Count()) && (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Transform*>(handle)->Priority() <= ::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Transform*>(::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Transform_*>(__this->Handles)->Item(at))->Priority()); ++at)
        ;
    ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Transform_*>(__this->Handles)->Insert(at, handle);

    if (!__this->masterAdded)
    {
        __this->masterAdded = true;
        ::app::Fuse::Animations::Mixer__AddMaster(NULL, (::uObject*)__this, __this->PostLayout());
        __this->OnActive();
    }
}

void MasterBase__Fuse_Transform__Unregister(MasterBase__Fuse_Transform* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Transform* handle)
{
    ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Transform_*>(__this->Handles)->Remove(handle);
}

void MasterBase__Fuse_Transform__OnActive(MasterBase__Fuse_Transform* __this)
{
}

void MasterBase__Fuse_Transform__Complete(MasterBase__Fuse_Transform* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Transform_*>(__this->Handles)->Count() == 0)
    {
        if (__this->masterAdded)
        {
            ::app::Fuse::Animations::Mixer__RemoveMaster(NULL, (::uObject*)__this, __this->PostLayout());
            __this->masterAdded = false;
            __this->OnInactive();
        }

        if (__this->_mixerBase != NULL)
        {
            ::uPtr< ::app::Fuse::Animations::MixerBase*>(__this->_mixerBase)->Unused((::uObject*)__this);
        }

        __this->_inactive = true;
        return;
    }

    if (__this->DirtyValue)
    {
        __this->OnComplete();
        __this->DirtyValue = false;
    }
}

::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Transform MasterBase__Fuse_Transform__GetFullWeight(MasterBase__Fuse_Transform* __this)
{
    ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Transform collection_124 = ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Transform();
    float fullWeight = 0.0f;

    for (::app::Uno::Collections::List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Transform_ enum_123 = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Transform_*>(__this->Handles)->GetEnumerator(); enum_123.MoveNext(); )
    {
        ::app::Fuse::Animations::MixerHandle__Fuse_Transform* v = enum_123.Current();

        if (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Transform*>(v)->MixOp() == 1)
        {
            fullWeight = fullWeight + (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Transform*>(v)->HasValue() ? ::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Transform*>(v)->Strength : 0.0f);
        }
    }

    float restWeight = 1.0f - ::app::Uno::Math__Min_1(NULL, fullWeight, 1.0f);
    fullWeight = ::app::Uno::Math__Max_1(NULL, 1.0f, fullWeight);
    collection_124 = ::uDefault< ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Transform>();
    collection_124.Rest = restWeight;
    collection_124.Full = fullWeight;
    return collection_124;
}

void MasterBase__Fuse_Transform___ObjInit(MasterBase__Fuse_Transform* __this, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    __this->Handles = ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Transform___New_1(NULL);
    __this->_mixerBase = mixerBase;
}

}}}
