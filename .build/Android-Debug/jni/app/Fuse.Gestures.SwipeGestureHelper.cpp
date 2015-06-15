// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Gestures\0.1.0\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Gestures.DegreeSpan.h>
#include <app/Fuse.Gestures.SwipeGestureHelper.h>
#include <app/Uno.Int.h>
#include <app/Uno.Math.h>
#include <app/Uno.Vector.h>

namespace app {
namespace Fuse {
namespace Gestures {

SwipeGestureHelper__uType* SwipeGestureHelper__typeof()
{
    static SwipeGestureHelper__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (SwipeGestureHelper__uType*)::uAllocClassType(sizeof(SwipeGestureHelper__uType), "Fuse.Gestures.SwipeGestureHelper", ::uObject__typeof(), 0, 1);
        type->StrongRefOffsets[0] = offsetof(SwipeGestureHelper, _spans);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_spans";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

bool SwipeGestureHelper__IsWithinBounds(SwipeGestureHelper* __this, ::app::Uno::Float2 vector)
{
    float length = ::app::Uno::Vector__Length(NULL, vector);

    if (length < __this->_lengthThreshold)
    {
        return false;
    }

    float angle = ::app::Uno::Math__RadiansToDegrees_1(NULL, ::app::Uno::Math__Atan2_1(NULL, vector.X, vector.Y));

    for (int i = 0; i < ::uPtr< ::uArray*>(__this->_spans)->Length(); i++)
    {
        if (::uPtr< ::app::Fuse::Gestures::DegreeSpan*>(::uPtr< ::uArray*>(__this->_spans)->Item< ::app::Fuse::Gestures::DegreeSpan*>(i))->IsWithinBounds(angle))
        {
            return true;
        }
    }

    return false;
}

void SwipeGestureHelper___ObjInit(SwipeGestureHelper* __this, float lengthThreshold, ::uArray* spans)
{
    __this->_spans = spans;
    __this->_lengthThreshold = lengthThreshold;
}

SwipeGestureHelper* SwipeGestureHelper__New_1(::uStatic* __this, float lengthThreshold, ::uArray* spans)
{
    SwipeGestureHelper* inst = (::app::Fuse::Gestures::SwipeGestureHelper*)::uAllocObject(sizeof(::app::Fuse::Gestures::SwipeGestureHelper), ::app::Fuse::Gestures::SwipeGestureHelper__typeof());
    inst->_ObjInit(lengthThreshold, spans);
    return inst;
}

}}}
