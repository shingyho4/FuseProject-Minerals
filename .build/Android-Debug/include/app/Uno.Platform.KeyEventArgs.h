// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Platform\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_PLATFORM_KEY_EVENT_ARGS_H__
#define __APP_UNO_PLATFORM_KEY_EVENT_ARGS_H__

#include <app/Uno.EventArgs.h>
#include <Uno/Uno.h>

namespace app {
namespace Uno {
namespace Platform {

struct KeyEventArgs;

struct KeyEventArgs__uType : ::app::Uno::EventArgs__uType
{
};

KeyEventArgs__uType* KeyEventArgs__typeof();

bool KeyEventArgs__get_Handled(KeyEventArgs* __this);
void KeyEventArgs__set_Handled(KeyEventArgs* __this, bool value);
int KeyEventArgs__get_Key(KeyEventArgs* __this);
void KeyEventArgs__set_Key(KeyEventArgs* __this, int value);
int KeyEventArgs__get_Modifiers(KeyEventArgs* __this);
void KeyEventArgs__set_Modifiers(KeyEventArgs* __this, int value);
bool KeyEventArgs__get_IsMetaKeyPressed(KeyEventArgs* __this);
bool KeyEventArgs__get_IsControlKeyPressed(KeyEventArgs* __this);
bool KeyEventArgs__get_IsShiftKeyPressed(KeyEventArgs* __this);
bool KeyEventArgs__get_IsAltKeyPressed(KeyEventArgs* __this);
void KeyEventArgs___ObjInit_1(KeyEventArgs* __this, int key, int modifiers);
KeyEventArgs* KeyEventArgs__New_2(::uStatic* __this, int key, int modifiers);

struct KeyEventArgs : ::app::Uno::EventArgs
{
    bool _Handled;
    int _Key;
    int _Modifiers;

    void _ObjInit_1(int key, int modifiers) { KeyEventArgs___ObjInit_1(this, key, modifiers); }
    bool Handled() { return KeyEventArgs__get_Handled(this); }
    void Handled(bool value) { KeyEventArgs__set_Handled(this, value); }
    int Key() { return KeyEventArgs__get_Key(this); }
    void Key(int value) { KeyEventArgs__set_Key(this, value); }
    int Modifiers() { return KeyEventArgs__get_Modifiers(this); }
    void Modifiers(int value) { KeyEventArgs__set_Modifiers(this, value); }
    bool IsMetaKeyPressed() { return KeyEventArgs__get_IsMetaKeyPressed(this); }
    bool IsControlKeyPressed() { return KeyEventArgs__get_IsControlKeyPressed(this); }
    bool IsShiftKeyPressed() { return KeyEventArgs__get_IsShiftKeyPressed(this); }
    bool IsAltKeyPressed() { return KeyEventArgs__get_IsAltKeyPressed(this); }
};

}}}

#include <app/Uno.Bool.h>

namespace app {
namespace Uno {
namespace Platform {

}}}


#endif
