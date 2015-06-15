// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_INPUT_INPUT_EVENT_H__
#define __APP_FUSE_INPUT_INPUT_EVENT_H__

#include <app/Fuse.Input.Event__Fuse_Input_InputEventHandler__Fuse_Input_Inpu-b68a4a8c.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Input { struct InputEventArgs; } } }

namespace app {
namespace Fuse {
namespace Input {

struct InputEvent;

struct InputEvent__uType : ::app::Fuse::Input::Event__Fuse_Input_InputEventHandler__Fuse_Input_InputEventArgs__uType
{
};

InputEvent__uType* InputEvent__typeof();

void InputEvent__Invoke(InputEvent* __this, ::uDelegate* handler, ::uObject* sender, ::app::Fuse::Input::InputEventArgs* args);
void InputEvent___ObjInit_1(InputEvent* __this);
InputEvent* InputEvent__New_1(::uStatic* __this);

struct InputEvent : ::app::Fuse::Input::Event__Fuse_Input_InputEventHandler__Fuse_Input_InputEventArgs
{
    void _ObjInit_1() { InputEvent___ObjInit_1(this); }
};

}}}


#endif
