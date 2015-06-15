// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_ANIMATOR_STATE_H__
#define __APP_FUSE_ANIMATIONS_ANIMATOR_STATE_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Animations { struct CreateStateParams; } } }
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Animations {

struct AnimatorState;

struct AnimatorState__uType : ::uClassType
{
    bool(*__fp_SeekProgress)(AnimatorState*, double, double, int, double);
    bool(*__fp_SeekTime)(AnimatorState*, double, double, int, double);
    void(*__fp_Disable)(AnimatorState*);
};

AnimatorState__uType* AnimatorState__typeof();

void AnimatorState__Disable(AnimatorState* __this);
void AnimatorState___ObjInit(AnimatorState* __this, ::app::Fuse::Animations::CreateStateParams* p, ::app::Fuse::Node* useNode);

struct AnimatorState : ::uObject
{
    int Variant;
    ::uStrong< ::app::Fuse::Node*> Node;
    double TotalDuration;

    bool SeekProgress(double progress, double interval, int dir, double strength) { return (((AnimatorState__uType*)this->__obj_type)->__fp_SeekProgress)(this, progress, interval, dir, strength); }
    bool SeekTime(double nominal, double interval, int dir, double strength) { return (((AnimatorState__uType*)this->__obj_type)->__fp_SeekTime)(this, nominal, interval, dir, strength); }
    void Disable() { (((AnimatorState__uType*)this->__obj_type)->__fp_Disable)(this); }
    void _ObjInit(::app::Fuse::Animations::CreateStateParams* p, ::app::Fuse::Node* useNode) { AnimatorState___ObjInit(this, p, useNode); }
};

}}}

#include <app/Uno.Bool.h>
#include <app/Uno.Double.h>

namespace app {
namespace Fuse {
namespace Animations {

}}}


#endif
