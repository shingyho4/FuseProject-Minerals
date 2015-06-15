// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_INPUT_POINTER_PRESSED_H__
#define __APP_FUSE_INPUT_POINTER_PRESSED_H__

#include <app/Fuse.Input.Event__Fuse_Input_PointerPressedHandler__Fuse_Input_-d47a11ac.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Input { struct PointerPressedArgs; } } }

namespace app {
namespace Fuse {
namespace Input {

struct PointerPressed;

struct PointerPressed__uType : ::app::Fuse::Input::Event__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs__uType
{
};

PointerPressed__uType* PointerPressed__typeof();

void PointerPressed__Invoke(PointerPressed* __this, ::uDelegate* handler, ::uObject* sender, ::app::Fuse::Input::PointerPressedArgs* args);
void PointerPressed___ObjInit_1(PointerPressed* __this);
PointerPressed* PointerPressed__New_1(::uStatic* __this);

struct PointerPressed : ::app::Fuse::Input::Event__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs
{
    void _ObjInit_1() { PointerPressed___ObjInit_1(this); }
};

}}}


#endif
