// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_INPUT_KEY_EVENT_ARGS_H__
#define __APP_FUSE_INPUT_KEY_EVENT_ARGS_H__

#include <app/Fuse.Input.InputEventArgs.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Input {

struct KeyEventArgs;

struct KeyEventArgs__uType : ::app::Fuse::Input::InputEventArgs__uType
{
};

KeyEventArgs__uType* KeyEventArgs__typeof();

int KeyEventArgs__get_Key(KeyEventArgs* __this);
void KeyEventArgs__set_Key(KeyEventArgs* __this, int value);
bool KeyEventArgs__get_IsMetaKeyPressed(KeyEventArgs* __this);
void KeyEventArgs__set_IsMetaKeyPressed(KeyEventArgs* __this, bool value);
bool KeyEventArgs__get_IsControlKeyPressed(KeyEventArgs* __this);
void KeyEventArgs__set_IsControlKeyPressed(KeyEventArgs* __this, bool value);
bool KeyEventArgs__get_IsShiftKeyPressed(KeyEventArgs* __this);
void KeyEventArgs__set_IsShiftKeyPressed(KeyEventArgs* __this, bool value);
bool KeyEventArgs__get_IsAltKeyPressed(KeyEventArgs* __this);
void KeyEventArgs__set_IsAltKeyPressed(KeyEventArgs* __this, bool value);
void KeyEventArgs___ObjInit_2(KeyEventArgs* __this, int key, ::app::Fuse::Node* node);

struct KeyEventArgs : ::app::Fuse::Input::InputEventArgs
{
    int _Key;
    bool _IsMetaKeyPressed;
    bool _IsControlKeyPressed;
    bool _IsShiftKeyPressed;
    bool _IsAltKeyPressed;

    void _ObjInit_2(int key, ::app::Fuse::Node* node) { KeyEventArgs___ObjInit_2(this, key, node); }
    int Key() { return KeyEventArgs__get_Key(this); }
    void Key(int value) { KeyEventArgs__set_Key(this, value); }
    bool IsMetaKeyPressed() { return KeyEventArgs__get_IsMetaKeyPressed(this); }
    void IsMetaKeyPressed(bool value) { KeyEventArgs__set_IsMetaKeyPressed(this, value); }
    bool IsControlKeyPressed() { return KeyEventArgs__get_IsControlKeyPressed(this); }
    void IsControlKeyPressed(bool value) { KeyEventArgs__set_IsControlKeyPressed(this, value); }
    bool IsShiftKeyPressed() { return KeyEventArgs__get_IsShiftKeyPressed(this); }
    void IsShiftKeyPressed(bool value) { KeyEventArgs__set_IsShiftKeyPressed(this, value); }
    bool IsAltKeyPressed() { return KeyEventArgs__get_IsAltKeyPressed(this); }
    void IsAltKeyPressed(bool value) { KeyEventArgs__set_IsAltKeyPressed(this, value); }
};

}}}

#include <app/Uno.Bool.h>

namespace app {
namespace Fuse {
namespace Input {

}}}


#endif
