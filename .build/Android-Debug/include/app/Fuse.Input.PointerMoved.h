// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_INPUT_POINTER_MOVED_H__
#define __APP_FUSE_INPUT_POINTER_MOVED_H__

#include <app/Fuse.Input.Event__Fuse_Input_PointerMovedHandler__Fuse_Input_Po-5d8e7dec.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Input { struct PointerMovedArgs; } } }

namespace app {
namespace Fuse {
namespace Input {

struct PointerMoved;

struct PointerMoved__uType : ::app::Fuse::Input::Event__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs__uType
{
};

PointerMoved__uType* PointerMoved__typeof();

void PointerMoved__Invoke(PointerMoved* __this, ::uDelegate* handler, ::uObject* sender, ::app::Fuse::Input::PointerMovedArgs* args);
void PointerMoved___ObjInit_1(PointerMoved* __this);
PointerMoved* PointerMoved__New_1(::uStatic* __this);

struct PointerMoved : ::app::Fuse::Input::Event__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs
{
    void _ObjInit_1() { PointerMoved___ObjInit_1(this); }
};

}}}


#endif
