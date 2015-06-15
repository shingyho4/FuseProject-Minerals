// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_INPUT_POINTER_LEFT_H__
#define __APP_FUSE_INPUT_POINTER_LEFT_H__

#include <app/Fuse.Input.Event__Fuse_Input_PointerLeftHandler__Fuse_Input_Poi-d793c7d6.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Input { struct PointerLeftArgs; } } }

namespace app {
namespace Fuse {
namespace Input {

struct PointerLeft;

struct PointerLeft__uType : ::app::Fuse::Input::Event__Fuse_Input_PointerLeftHandler__Fuse_Input_PointerLeftArgs__uType
{
};

PointerLeft__uType* PointerLeft__typeof();

void PointerLeft__Invoke(PointerLeft* __this, ::uDelegate* handler, ::uObject* sender, ::app::Fuse::Input::PointerLeftArgs* args);
void PointerLeft___ObjInit_1(PointerLeft* __this);
PointerLeft* PointerLeft__New_1(::uStatic* __this);

struct PointerLeft : ::app::Fuse::Input::Event__Fuse_Input_PointerLeftHandler__Fuse_Input_PointerLeftArgs
{
    void _ObjInit_1() { PointerLeft___ObjInit_1(this); }
};

}}}


#endif
