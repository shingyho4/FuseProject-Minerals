// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Platform\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_PLATFORM_POINTER_EVENT_ARGS_H__
#define __APP_UNO_PLATFORM_POINTER_EVENT_ARGS_H__

#include <app/Uno.EventArgs.h>
#include <app/Uno.Float2.h>
#include <Uno/Uno.h>

namespace app {
namespace Uno {
namespace Platform {

struct PointerEventArgs;

struct PointerEventArgs__uType : ::app::Uno::EventArgs__uType
{
};

PointerEventArgs__uType* PointerEventArgs__typeof();

bool PointerEventArgs__get_Handled(PointerEventArgs* __this);
void PointerEventArgs__set_Handled(PointerEventArgs* __this, bool value);
int PointerEventArgs__get_PointerType(PointerEventArgs* __this);
void PointerEventArgs__set_PointerType(PointerEventArgs* __this, int value);
bool PointerEventArgs__get_IsPrimary(PointerEventArgs* __this);
void PointerEventArgs__set_IsPrimary(PointerEventArgs* __this, bool value);
::app::Uno::Float2 PointerEventArgs__get_Position(PointerEventArgs* __this);
void PointerEventArgs__set_Position(PointerEventArgs* __this, ::app::Uno::Float2 value);
int PointerEventArgs__get_FingerId(PointerEventArgs* __this);
void PointerEventArgs__set_FingerId(PointerEventArgs* __this, int value);
int PointerEventArgs__get_MouseButton(PointerEventArgs* __this);
void PointerEventArgs__set_MouseButton(PointerEventArgs* __this, int value);
::app::Uno::Float2 PointerEventArgs__get_WheelDelta(PointerEventArgs* __this);
void PointerEventArgs__set_WheelDelta(PointerEventArgs* __this, ::app::Uno::Float2 value);
int PointerEventArgs__get_WheelDeltaMode(PointerEventArgs* __this);
void PointerEventArgs__set_WheelDeltaMode(PointerEventArgs* __this, int value);
int PointerEventArgs__get_Modifiers(PointerEventArgs* __this);
void PointerEventArgs__set_Modifiers(PointerEventArgs* __this, int value);
void PointerEventArgs___ObjInit_1(PointerEventArgs* __this, int type, int modifiers, bool primary, ::app::Uno::Float2 position, int fingerId, int mouseButton, ::app::Uno::Float2 wheelDelta, int wheelDeltaMode);
PointerEventArgs* PointerEventArgs__New_2(::uStatic* __this, int type, int modifiers, bool primary, ::app::Uno::Float2 position, int fingerId, int mouseButton, ::app::Uno::Float2 wheelDelta, int wheelDeltaMode);

struct PointerEventArgs : ::app::Uno::EventArgs
{
    bool _Handled;
    int _PointerType;
    bool _IsPrimary;
    ::app::Uno::Float2 _Position;
    int _FingerId;
    int _MouseButton;
    ::app::Uno::Float2 _WheelDelta;
    int _WheelDeltaMode;
    int _Modifiers;

    void _ObjInit_1(int type, int modifiers, bool primary, ::app::Uno::Float2 position, int fingerId, int mouseButton, ::app::Uno::Float2 wheelDelta, int wheelDeltaMode);
    bool Handled() { return PointerEventArgs__get_Handled(this); }
    void Handled(bool value) { PointerEventArgs__set_Handled(this, value); }
    int PointerType() { return PointerEventArgs__get_PointerType(this); }
    void PointerType(int value) { PointerEventArgs__set_PointerType(this, value); }
    bool IsPrimary() { return PointerEventArgs__get_IsPrimary(this); }
    void IsPrimary(bool value) { PointerEventArgs__set_IsPrimary(this, value); }
    ::app::Uno::Float2 Position();
    void Position(::app::Uno::Float2 value);
    int FingerId() { return PointerEventArgs__get_FingerId(this); }
    void FingerId(int value) { PointerEventArgs__set_FingerId(this, value); }
    int MouseButton() { return PointerEventArgs__get_MouseButton(this); }
    void MouseButton(int value) { PointerEventArgs__set_MouseButton(this, value); }
    ::app::Uno::Float2 WheelDelta();
    void WheelDelta(::app::Uno::Float2 value);
    int WheelDeltaMode() { return PointerEventArgs__get_WheelDeltaMode(this); }
    void WheelDeltaMode(int value) { PointerEventArgs__set_WheelDeltaMode(this, value); }
    int Modifiers() { return PointerEventArgs__get_Modifiers(this); }
    void Modifiers(int value) { PointerEventArgs__set_Modifiers(this, value); }
};

}}}

#include <app/Uno.Bool.h>
#include <app/Uno.Int.h>

namespace app {
namespace Uno {
namespace Platform {

inline void PointerEventArgs::_ObjInit_1(int type, int modifiers, bool primary, ::app::Uno::Float2 position, int fingerId, int mouseButton, ::app::Uno::Float2 wheelDelta, int wheelDeltaMode) { PointerEventArgs___ObjInit_1(this, type, modifiers, primary, position, fingerId, mouseButton, wheelDelta, wheelDeltaMode); }
inline ::app::Uno::Float2 PointerEventArgs::Position() { return PointerEventArgs__get_Position(this); }
inline void PointerEventArgs::Position(::app::Uno::Float2 value) { PointerEventArgs__set_Position(this, value); }
inline ::app::Uno::Float2 PointerEventArgs::WheelDelta() { return PointerEventArgs__get_WheelDelta(this); }
inline void PointerEventArgs::WheelDelta(::app::Uno::Float2 value) { PointerEventArgs__set_WheelDelta(this, value); }

}}}


#endif
