// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_PROGRESS_ANIMATOR_STATE_H__
#define __APP_FUSE_ANIMATIONS_PROGRESS_ANIMATOR_STATE_H__

#include <app/Fuse.Animations.AnimatorState.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Animations { struct CreateStateParams; } } }
namespace app { namespace Fuse { namespace Animations { struct ProgressAnimator; } } }
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Animations {

struct ProgressAnimatorState;

struct ProgressAnimatorState__uType : ::app::Fuse::Animations::AnimatorState__uType
{
    void(*__fp_Seek)(ProgressAnimatorState*, float, float);
};

ProgressAnimatorState__uType* ProgressAnimatorState__typeof();

bool ProgressAnimatorState__SeekProgress(ProgressAnimatorState* __this, double progress, double interval, int dir, double strength);
bool ProgressAnimatorState__SeekTime(ProgressAnimatorState* __this, double elapsed, double interval, int dir, double strength);
void ProgressAnimatorState___ObjInit_1(ProgressAnimatorState* __this, ::app::Fuse::Animations::ProgressAnimator* animator, ::app::Fuse::Animations::CreateStateParams* p, ::app::Fuse::Node* useNode);

struct ProgressAnimatorState : ::app::Fuse::Animations::AnimatorState
{
    ::uStrong< ::app::Fuse::Animations::ProgressAnimator*> Animator;

    void Seek(float progress, float strength) { (((ProgressAnimatorState__uType*)this->__obj_type)->__fp_Seek)(this, progress, strength); }
    void _ObjInit_1(::app::Fuse::Animations::ProgressAnimator* animator, ::app::Fuse::Animations::CreateStateParams* p, ::app::Fuse::Node* useNode) { ProgressAnimatorState___ObjInit_1(this, animator, p, useNode); }
};

}}}

#include <app/Uno.Bool.h>
#include <app/Uno.Double.h>
#include <app/Uno.Float.h>

namespace app {
namespace Fuse {
namespace Animations {

}}}


#endif
