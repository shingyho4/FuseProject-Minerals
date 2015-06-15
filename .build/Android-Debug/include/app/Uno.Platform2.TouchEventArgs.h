// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Platform2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_PLATFORM2_TOUCH_EVENT_ARGS_H__
#define __APP_UNO_PLATFORM2_TOUCH_EVENT_ARGS_H__

#include <app/Uno.Float2.h>
#include <app/Uno.Object.h>
#include <Uno/Uno.h>

namespace app {
namespace Uno {
namespace Platform2 {

struct TouchEventArgs;

struct TouchEventArgs__uType : ::uClassType
{
};

TouchEventArgs__uType* TouchEventArgs__typeof();

double TouchEventArgs__get_Timestamp(TouchEventArgs* __this);
void TouchEventArgs__set_Timestamp(TouchEventArgs* __this, double value);
::app::Uno::Float2 TouchEventArgs__get_Position(TouchEventArgs* __this);
void TouchEventArgs__set_Position(TouchEventArgs* __this, ::app::Uno::Float2 value);
bool TouchEventArgs__get_IsPrimary(TouchEventArgs* __this);
void TouchEventArgs__set_IsPrimary(TouchEventArgs* __this, bool value);
::uUInt TouchEventArgs__get_TapCount(TouchEventArgs* __this);
void TouchEventArgs__set_TapCount(TouchEventArgs* __this, ::uUInt value);
int TouchEventArgs__get_PointerID(TouchEventArgs* __this);
void TouchEventArgs__set_PointerID(TouchEventArgs* __this, int value);
void TouchEventArgs___ObjInit(TouchEventArgs* __this, double timestamp, ::app::Uno::Float2 position, bool isPrimary, ::uUInt tapCount);
TouchEventArgs* TouchEventArgs__New_1(::uStatic* __this, double timestamp, ::app::Uno::Float2 position, bool isPrimary, ::uUInt tapCount);
void TouchEventArgs___ObjInit_1(TouchEventArgs* __this, double timestamp, ::app::Uno::Float2 position, bool isPrimary, ::uUInt tapCount, int pointerID);
TouchEventArgs* TouchEventArgs__New_2(::uStatic* __this, double timestamp, ::app::Uno::Float2 position, bool isPrimary, ::uUInt tapCount, int pointerID);

struct TouchEventArgs : ::uObject
{
    double _Timestamp;
    ::app::Uno::Float2 _Position;
    bool _IsPrimary;
    ::uUInt _TapCount;
    int _PointerID;

    void _ObjInit(double timestamp, ::app::Uno::Float2 position, bool isPrimary, ::uUInt tapCount);
    void _ObjInit_1(double timestamp, ::app::Uno::Float2 position, bool isPrimary, ::uUInt tapCount, int pointerID);
    double Timestamp() { return TouchEventArgs__get_Timestamp(this); }
    void Timestamp(double value) { TouchEventArgs__set_Timestamp(this, value); }
    ::app::Uno::Float2 Position();
    void Position(::app::Uno::Float2 value);
    bool IsPrimary() { return TouchEventArgs__get_IsPrimary(this); }
    void IsPrimary(bool value) { TouchEventArgs__set_IsPrimary(this, value); }
    ::uUInt TapCount() { return TouchEventArgs__get_TapCount(this); }
    void TapCount(::uUInt value) { TouchEventArgs__set_TapCount(this, value); }
    int PointerID() { return TouchEventArgs__get_PointerID(this); }
    void PointerID(int value) { TouchEventArgs__set_PointerID(this, value); }
};

}}}

#include <app/Uno.Bool.h>
#include <app/Uno.Double.h>
#include <app/Uno.Int.h>
#include <app/Uno.UInt.h>

namespace app {
namespace Uno {
namespace Platform2 {

inline void TouchEventArgs::_ObjInit(double timestamp, ::app::Uno::Float2 position, bool isPrimary, ::uUInt tapCount) { TouchEventArgs___ObjInit(this, timestamp, position, isPrimary, tapCount); }
inline void TouchEventArgs::_ObjInit_1(double timestamp, ::app::Uno::Float2 position, bool isPrimary, ::uUInt tapCount, int pointerID) { TouchEventArgs___ObjInit_1(this, timestamp, position, isPrimary, tapCount, pointerID); }
inline ::app::Uno::Float2 TouchEventArgs::Position() { return TouchEventArgs__get_Position(this); }
inline void TouchEventArgs::Position(::app::Uno::Float2 value) { TouchEventArgs__set_Position(this, value); }

}}}


#endif
