// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_INPUT_KEY_PRESSED_H__
#define __APP_FUSE_INPUT_KEY_PRESSED_H__

#include <app/Fuse.Input.Event__Fuse_Input_KeyPressedHandler__Fuse_Input_KeyP-8b3d082c.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Input { struct KeyPressedArgs; } } }

namespace app {
namespace Fuse {
namespace Input {

struct KeyPressed;

struct KeyPressed__uType : ::app::Fuse::Input::Event__Fuse_Input_KeyPressedHandler__Fuse_Input_KeyPressedArgs__uType
{
};

KeyPressed__uType* KeyPressed__typeof();

void KeyPressed__Invoke(KeyPressed* __this, ::uDelegate* handler, ::uObject* sender, ::app::Fuse::Input::KeyPressedArgs* args);
void KeyPressed___ObjInit_1(KeyPressed* __this);
KeyPressed* KeyPressed__New_1(::uStatic* __this);

struct KeyPressed : ::app::Fuse::Input::Event__Fuse_Input_KeyPressedHandler__Fuse_Input_KeyPressedArgs
{
    void _ObjInit_1() { KeyPressed___ObjInit_1(this); }
};

}}}


#endif
