// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_INPUT_KEY_RELEASED_H__
#define __APP_FUSE_INPUT_KEY_RELEASED_H__

#include <app/Fuse.Input.Event__Fuse_Input_KeyReleasedHandler__Fuse_Input_Key-d36d77b2.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Input { struct KeyReleasedArgs; } } }

namespace app {
namespace Fuse {
namespace Input {

struct KeyReleased;

struct KeyReleased__uType : ::app::Fuse::Input::Event__Fuse_Input_KeyReleasedHandler__Fuse_Input_KeyReleasedArgs__uType
{
};

KeyReleased__uType* KeyReleased__typeof();

void KeyReleased__Invoke(KeyReleased* __this, ::uDelegate* handler, ::uObject* sender, ::app::Fuse::Input::KeyReleasedArgs* args);
void KeyReleased___ObjInit_1(KeyReleased* __this);
KeyReleased* KeyReleased__New_1(::uStatic* __this);

struct KeyReleased : ::app::Fuse::Input::Event__Fuse_Input_KeyReleasedHandler__Fuse_Input_KeyReleasedArgs
{
    void _ObjInit_1() { KeyReleased___ObjInit_1(this); }
};

}}}


#endif
