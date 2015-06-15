// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Animations.AnimatorState.h>
#include <app/Fuse.Animations.CreateStateParams.h>
#include <app/Fuse.Node.h>
#include <app/Uno.Int.h>

namespace app {
namespace Fuse {
namespace Animations {

AnimatorState__uType* AnimatorState__typeof()
{
    static AnimatorState__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (AnimatorState__uType*)::uAllocClassType(sizeof(AnimatorState__uType), "Fuse.Animations.AnimatorState", ::uObject__typeof(), 0, 1);
        type->__fp_Disable = AnimatorState__Disable;

        type->StrongRefOffsets[0] = offsetof(AnimatorState, Node);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "Node";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void AnimatorState__Disable(AnimatorState* __this)
{
}

void AnimatorState___ObjInit(AnimatorState* __this, ::app::Fuse::Animations::CreateStateParams* p, ::app::Fuse::Node* useNode)
{
    __this->Variant = ::uPtr< ::app::Fuse::Animations::CreateStateParams*>(p)->Variant;
    __this->Node = (useNode != NULL) ? useNode : p->Attached;
    __this->TotalDuration = p->TotalDuration;
}

}}}
