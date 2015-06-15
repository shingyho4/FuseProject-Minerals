// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_OPEN_ANIMATOR_STATE_H__
#define __APP_FUSE_ANIMATIONS_OPEN_ANIMATOR_STATE_H__

#include <app/Fuse.Animations.AnimatorState.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Animations { struct CreateStateParams; } } }
namespace app { namespace Fuse { namespace Animations { struct OpenAnimator; } } }
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Animations {

struct OpenAnimatorState;

struct OpenAnimatorState__uType : ::app::Fuse::Animations::AnimatorState__uType
{
    bool(*__fp_Seek)(OpenAnimatorState*, bool, float, float, int);
};

OpenAnimatorState__uType* OpenAnimatorState__typeof();

bool OpenAnimatorState__SeekProgress(OpenAnimatorState* __this, double progress, double interval, int dir, double strength);
bool OpenAnimatorState__SeekTime(OpenAnimatorState* __this, double nominal, double interval, int dir, double strength);
void OpenAnimatorState___ObjInit_1(OpenAnimatorState* __this, ::app::Fuse::Animations::OpenAnimator* animator, ::app::Fuse::Animations::CreateStateParams* p, ::app::Fuse::Node* useNode);

struct OpenAnimatorState : ::app::Fuse::Animations::AnimatorState
{
    ::uStrong< ::app::Fuse::Animations::OpenAnimator*> Animator;
    bool _seekDone;

    bool Seek(bool on, float interval, float strength, int dir) { return (((OpenAnimatorState__uType*)this->__obj_type)->__fp_Seek)(this, on, interval, strength, dir); }
    void _ObjInit_1(::app::Fuse::Animations::OpenAnimator* animator, ::app::Fuse::Animations::CreateStateParams* p, ::app::Fuse::Node* useNode) { OpenAnimatorState___ObjInit_1(this, animator, p, useNode); }
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
