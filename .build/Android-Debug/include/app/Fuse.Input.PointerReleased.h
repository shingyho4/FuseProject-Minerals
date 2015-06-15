// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_INPUT_POINTER_RELEASED_H__
#define __APP_FUSE_INPUT_POINTER_RELEASED_H__

#include <app/Fuse.Input.Event__Fuse_Input_PointerReleasedHandler__Fuse_Input-199508da.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Input { struct PointerReleasedArgs; } } }

namespace app {
namespace Fuse {
namespace Input {

struct PointerReleased;

struct PointerReleased__uType : ::app::Fuse::Input::Event__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs__uType
{
};

PointerReleased__uType* PointerReleased__typeof();

void PointerReleased__Invoke(PointerReleased* __this, ::uDelegate* handler, ::uObject* sender, ::app::Fuse::Input::PointerReleasedArgs* args);
void PointerReleased___ObjInit_1(PointerReleased* __this);
PointerReleased* PointerReleased__New_1(::uStatic* __this);

struct PointerReleased : ::app::Fuse::Input::Event__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs
{
    void _ObjInit_1() { PointerReleased___ObjInit_1(this); }
};

}}}


#endif
