// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_TRANSFORM_ANIMATOR__FUSE_SCALING_H__
#define __APP_FUSE_ANIMATIONS_TRANSFORM_ANIMATOR__FUSE_SCALING_H__

#include <app/Fuse.Animations.ProgressAnimator.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Animations { struct AnimatorState; } } }
namespace app { namespace Fuse { namespace Animations { struct CreateStateParams; } } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Fuse { struct Scaling; } }

namespace app {
namespace Fuse {
namespace Animations {

struct TransformAnimator__Fuse_Scaling;

struct TransformAnimator__Fuse_Scaling__uType : ::app::Fuse::Animations::ProgressAnimator__uType
{
    void(*__fp_Update)(TransformAnimator__Fuse_Scaling*, ::app::Fuse::Node*, ::app::Fuse::Scaling*);
};

TransformAnimator__Fuse_Scaling__uType* TransformAnimator__Fuse_Scaling__typeof();

::app::Fuse::Node* TransformAnimator__Fuse_Scaling__get_Target(TransformAnimator__Fuse_Scaling* __this);
void TransformAnimator__Fuse_Scaling__set_Target(TransformAnimator__Fuse_Scaling* __this, ::app::Fuse::Node* value);
int TransformAnimator__Fuse_Scaling__get_Priority(TransformAnimator__Fuse_Scaling* __this);
void TransformAnimator__Fuse_Scaling__set_Priority(TransformAnimator__Fuse_Scaling* __this, int value);
::app::Fuse::Animations::AnimatorState* TransformAnimator__Fuse_Scaling__CreateState(TransformAnimator__Fuse_Scaling* __this, ::app::Fuse::Animations::CreateStateParams* p);

struct TransformAnimator__Fuse_Scaling : ::app::Fuse::Animations::ProgressAnimator
{
    ::uStrong< ::app::Fuse::Node*> _Target;
    int _Priority;

    void Update(::app::Fuse::Node* elm, ::app::Fuse::Scaling* transform) { (((TransformAnimator__Fuse_Scaling__uType*)this->__obj_type)->__fp_Update)(this, elm, transform); }
    ::app::Fuse::Node* Target() { return TransformAnimator__Fuse_Scaling__get_Target(this); }
    void Target(::app::Fuse::Node* value) { TransformAnimator__Fuse_Scaling__set_Target(this, value); }
    int Priority() { return TransformAnimator__Fuse_Scaling__get_Priority(this); }
    void Priority(int value) { TransformAnimator__Fuse_Scaling__set_Priority(this, value); }
};

}}}

#include <app/Uno.Int.h>

namespace app {
namespace Fuse {
namespace Animations {

}}}


#endif
