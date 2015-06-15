// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_TRANSFORM_ANIMATOR__FUSE_TRANSLATION_H__
#define __APP_FUSE_ANIMATIONS_TRANSFORM_ANIMATOR__FUSE_TRANSLATION_H__

#include <app/Fuse.Animations.ProgressAnimator.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Animations { struct AnimatorState; } } }
namespace app { namespace Fuse { namespace Animations { struct CreateStateParams; } } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Fuse { struct Translation; } }

namespace app {
namespace Fuse {
namespace Animations {

struct TransformAnimator__Fuse_Translation;

struct TransformAnimator__Fuse_Translation__uType : ::app::Fuse::Animations::ProgressAnimator__uType
{
    void(*__fp_Update)(TransformAnimator__Fuse_Translation*, ::app::Fuse::Node*, ::app::Fuse::Translation*);
};

TransformAnimator__Fuse_Translation__uType* TransformAnimator__Fuse_Translation__typeof();

::app::Fuse::Node* TransformAnimator__Fuse_Translation__get_Target(TransformAnimator__Fuse_Translation* __this);
void TransformAnimator__Fuse_Translation__set_Target(TransformAnimator__Fuse_Translation* __this, ::app::Fuse::Node* value);
int TransformAnimator__Fuse_Translation__get_Priority(TransformAnimator__Fuse_Translation* __this);
void TransformAnimator__Fuse_Translation__set_Priority(TransformAnimator__Fuse_Translation* __this, int value);
::app::Fuse::Animations::AnimatorState* TransformAnimator__Fuse_Translation__CreateState(TransformAnimator__Fuse_Translation* __this, ::app::Fuse::Animations::CreateStateParams* p);
void TransformAnimator__Fuse_Translation___ObjInit_2(TransformAnimator__Fuse_Translation* __this);

struct TransformAnimator__Fuse_Translation : ::app::Fuse::Animations::ProgressAnimator
{
    ::uStrong< ::app::Fuse::Node*> _Target;
    int _Priority;

    void Update(::app::Fuse::Node* elm, ::app::Fuse::Translation* transform) { (((TransformAnimator__Fuse_Translation__uType*)this->__obj_type)->__fp_Update)(this, elm, transform); }
    void _ObjInit_2() { TransformAnimator__Fuse_Translation___ObjInit_2(this); }
    ::app::Fuse::Node* Target() { return TransformAnimator__Fuse_Translation__get_Target(this); }
    void Target(::app::Fuse::Node* value) { TransformAnimator__Fuse_Translation__set_Target(this, value); }
    int Priority() { return TransformAnimator__Fuse_Translation__get_Priority(this); }
    void Priority(int value) { TransformAnimator__Fuse_Translation__set_Priority(this, value); }
};

}}}

#include <app/Uno.Int.h>

namespace app {
namespace Fuse {
namespace Animations {

}}}


#endif
