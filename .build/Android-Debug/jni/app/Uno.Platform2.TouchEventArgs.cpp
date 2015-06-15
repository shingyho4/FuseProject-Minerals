// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Platform2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Platform2.TouchEventArgs.h>

namespace app {
namespace Uno {
namespace Platform2 {

TouchEventArgs__uType* TouchEventArgs__typeof()
{
    static TouchEventArgs__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (TouchEventArgs__uType*)::uAllocClassType(sizeof(TouchEventArgs__uType), "Uno.Platform2.TouchEventArgs", ::uObject__typeof());
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

double TouchEventArgs__get_Timestamp(TouchEventArgs* __this)
{
    return __this->_Timestamp;
}

void TouchEventArgs__set_Timestamp(TouchEventArgs* __this, double value)
{
    __this->_Timestamp = value;
}

::app::Uno::Float2 TouchEventArgs__get_Position(TouchEventArgs* __this)
{
    return __this->_Position;
}

void TouchEventArgs__set_Position(TouchEventArgs* __this, ::app::Uno::Float2 value)
{
    __this->_Position = value;
}

bool TouchEventArgs__get_IsPrimary(TouchEventArgs* __this)
{
    return __this->_IsPrimary;
}

void TouchEventArgs__set_IsPrimary(TouchEventArgs* __this, bool value)
{
    __this->_IsPrimary = value;
}

::uUInt TouchEventArgs__get_TapCount(TouchEventArgs* __this)
{
    return __this->_TapCount;
}

void TouchEventArgs__set_TapCount(TouchEventArgs* __this, ::uUInt value)
{
    __this->_TapCount = value;
}

int TouchEventArgs__get_PointerID(TouchEventArgs* __this)
{
    return __this->_PointerID;
}

void TouchEventArgs__set_PointerID(TouchEventArgs* __this, int value)
{
    __this->_PointerID = value;
}

void TouchEventArgs___ObjInit(TouchEventArgs* __this, double timestamp, ::app::Uno::Float2 position, bool isPrimary, ::uUInt tapCount)
{
    __this->_ObjInit_1(timestamp, position, isPrimary, tapCount, 0);
}

TouchEventArgs* TouchEventArgs__New_1(::uStatic* __this, double timestamp, ::app::Uno::Float2 position, bool isPrimary, ::uUInt tapCount)
{
    TouchEventArgs* inst = (::app::Uno::Platform2::TouchEventArgs*)::uAllocObject(sizeof(::app::Uno::Platform2::TouchEventArgs), ::app::Uno::Platform2::TouchEventArgs__typeof());
    inst->_ObjInit(timestamp, position, isPrimary, tapCount);
    return inst;
}

void TouchEventArgs___ObjInit_1(TouchEventArgs* __this, double timestamp, ::app::Uno::Float2 position, bool isPrimary, ::uUInt tapCount, int pointerID)
{
    __this->Timestamp(timestamp);
    __this->Position(position);
    __this->IsPrimary(isPrimary);
    __this->TapCount(tapCount);
    __this->PointerID(pointerID);
}

TouchEventArgs* TouchEventArgs__New_2(::uStatic* __this, double timestamp, ::app::Uno::Float2 position, bool isPrimary, ::uUInt tapCount, int pointerID)
{
    TouchEventArgs* inst = (::app::Uno::Platform2::TouchEventArgs*)::uAllocObject(sizeof(::app::Uno::Platform2::TouchEventArgs), ::app::Uno::Platform2::TouchEventArgs__typeof());
    inst->_ObjInit_1(timestamp, position, isPrimary, tapCount, pointerID);
    return inst;
}

}}}
