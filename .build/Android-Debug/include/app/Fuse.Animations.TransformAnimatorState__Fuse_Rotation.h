// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_TRANSFORM_ANIMATOR_STATE__FUSE_ROTATION_H__
#define __APP_FUSE_ANIMATIONS_TRANSFORM_ANIMATOR_STATE__FUSE_ROTATION_H__

#include <app/Fuse.Animations.ProgressAnimatorState.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Animations { struct CreateStateParams; } } }
namespace app { namespace Fuse { namespace Animations { struct TransformAnimator__Fuse_Rotation; } } }
namespace app { namespace Fuse { struct Rotation; } }
namespace app { namespace Fuse { struct Transform; } }

namespace app {
namespace Fuse {
namespace Animations {

struct TransformAnimatorState__Fuse_Rotation;

struct TransformAnimatorState__Fuse_Rotation__uType : ::app::Fuse::Animations::ProgressAnimatorState__uType
{
};

TransformAnimatorState__Fuse_Rotation__uType* TransformAnimatorState__Fuse_Rotation__typeof();

void TransformAnimatorState__Fuse_Rotation__Disable(TransformAnimatorState__Fuse_Rotation* __this);
void TransformAnimatorState__Fuse_Rotation__Seek(TransformAnimatorState__Fuse_Rotation* __this, float progress, float strength);
void TransformAnimatorState__Fuse_Rotation__OnMatrixChanged(TransformAnimatorState__Fuse_Rotation* __this, ::app::Fuse::Transform* ignore);
void TransformAnimatorState__Fuse_Rotation___ObjInit_2(TransformAnimatorState__Fuse_Rotation* __this, ::app::Fuse::Animations::TransformAnimator__Fuse_Rotation* animator, ::app::Fuse::Animations::CreateStateParams* p);
TransformAnimatorState__Fuse_Rotation* TransformAnimatorState__Fuse_Rotation__New_1(::uStatic* __this, ::app::Fuse::Animations::TransformAnimator__Fuse_Rotation* animator, ::app::Fuse::Animations::CreateStateParams* p);

struct TransformAnimatorState__Fuse_Rotation : ::app::Fuse::Animations::ProgressAnimatorState
{
    ::uStrong< ::app::Fuse::Animations::TransformAnimator__Fuse_Rotation*> Animator_1;
    ::uStrong< ::uObject*> mixHandle;
    ::uStrong< ::app::Fuse::Rotation*> transform;
    ::uStrong< ::uDelegate*> _matAct;
    float _lastStrength;
    bool _inSeek;

    void OnMatrixChanged(::app::Fuse::Transform* ignore) { TransformAnimatorState__Fuse_Rotation__OnMatrixChanged(this, ignore); }
    void _ObjInit_2(::app::Fuse::Animations::TransformAnimator__Fuse_Rotation* animator, ::app::Fuse::Animations::CreateStateParams* p) { TransformAnimatorState__Fuse_Rotation___ObjInit_2(this, animator, p); }
};

}}}

#include <app/Uno.Float.h>

namespace app {
namespace Fuse {
namespace Animations {

}}}


#endif
