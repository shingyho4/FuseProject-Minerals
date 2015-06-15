// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Animations.FastMatrixTransform.h>
#include <app/Fuse.Animations.MasterTransform.h>
#include <app/Fuse.Animations.MixerBase.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.Transform.h>
#include <app/Fuse.Translation.h>
#include <app/Uno.Collections.ICollection__Fuse_Transform.h>
#include <app/Uno.Collections.IList__Fuse_Transform.h>

namespace app {
namespace Fuse {
namespace Animations {

::uStaticStrong< ::app::Fuse::Transform*> MasterTransform__identity;

MasterTransform__uType* MasterTransform__typeof()
{
    static MasterTransform__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (MasterTransform__uType*)::uAllocClassType(sizeof(MasterTransform__uType), "Fuse.Animations.MasterTransform", ::app::Fuse::Animations::MasterBase__Fuse_Transform__typeof(), 1, 2);
        type->__fp_get_PostLayout = (bool(*)(::app::Fuse::Animations::MasterBase__Fuse_Transform*))MasterTransform__get_PostLayout;
        type->__fp_OnActive = (void(*)(::app::Fuse::Animations::MasterBase__Fuse_Transform*))MasterTransform__OnActive;
        type->__fp_OnInactive = (void(*)(::app::Fuse::Animations::MasterBase__Fuse_Transform*))MasterTransform__OnInactive;

        type->Implements[0] = ::app::Fuse::Animations::IMixerMaster__typeof();

        type->InterfaceOffsets[0] = offsetof(MasterTransform__uType, __interface_0);

        type->StrongRefOffsets[0] = offsetof(MasterTransform, Node);
        type->StrongRefOffsets[1] = offsetof(MasterTransform, FMT);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "Node";
        type->StrongRefNames[1] = "FMT";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

bool MasterTransform__get_PostLayout(MasterTransform* __this)
{
    return true;
}

void MasterTransform__OnActive(MasterTransform* __this)
{
    __this->FMT = ::app::Fuse::Animations::FastMatrixTransform__New_1(NULL);
    ::app::Uno::Collections::ICollection__Fuse_Transform::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Node*>(__this->Node)->Transforms()), (::app::Fuse::Transform*)__this->FMT);
}

void MasterTransform__OnInactive(MasterTransform* __this)
{
    ::app::Uno::Collections::ICollection__Fuse_Transform::Remove(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Node*>(__this->Node)->Transforms()), (::app::Fuse::Transform*)__this->FMT);
    __this->FMT = NULL;
}

void MasterTransform___TypeInit(::uStatic* __this)
{
    MasterTransform__identity = (::app::Fuse::Transform*)::app::Fuse::Translation__New_1(NULL);
}

void MasterTransform___ObjInit_1(MasterTransform* __this, ::app::Fuse::Node* node, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    ::app::Fuse::Animations::MasterBase__Fuse_Transform___ObjInit(__this, mixerBase);
    __this->Node = node;
}

}}}
