// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Gestures\0.1.0\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_GESTURES_SWIPE_GESTURE_HELPER_H__
#define __APP_FUSE_GESTURES_SWIPE_GESTURE_HELPER_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Gestures { struct DegreeSpan; } } }
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Fuse {
namespace Gestures {

struct SwipeGestureHelper;

struct SwipeGestureHelper__uType : ::uClassType
{
};

SwipeGestureHelper__uType* SwipeGestureHelper__typeof();

bool SwipeGestureHelper__IsWithinBounds(SwipeGestureHelper* __this, ::app::Uno::Float2 vector);
void SwipeGestureHelper___ObjInit(SwipeGestureHelper* __this, float lengthThreshold, ::uArray* spans);
SwipeGestureHelper* SwipeGestureHelper__New_1(::uStatic* __this, float lengthThreshold, ::uArray* spans);

struct SwipeGestureHelper : ::uObject
{
    ::uStrong< ::uArray*> _spans;
    float _lengthThreshold;

    bool IsWithinBounds(::app::Uno::Float2 vector);
    void _ObjInit(float lengthThreshold, ::uArray* spans) { SwipeGestureHelper___ObjInit(this, lengthThreshold, spans); }
};

}}}

#include <app/Uno.Bool.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float2.h>

namespace app {
namespace Fuse {
namespace Gestures {

inline bool SwipeGestureHelper::IsWithinBounds(::app::Uno::Float2 vector) { return SwipeGestureHelper__IsWithinBounds(this, vector); }

}}}


#endif
