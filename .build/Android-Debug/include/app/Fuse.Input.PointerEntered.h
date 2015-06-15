// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_INPUT_POINTER_ENTERED_H__
#define __APP_FUSE_INPUT_POINTER_ENTERED_H__

#include <app/Fuse.Input.Event__Fuse_Input_PointerEnteredHandler__Fuse_Input_-205a664c.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Input { struct PointerEnteredArgs; } } }

namespace app {
namespace Fuse {
namespace Input {

struct PointerEntered;

struct PointerEntered__uType : ::app::Fuse::Input::Event__Fuse_Input_PointerEnteredHandler__Fuse_Input_PointerEnteredArgs__uType
{
};

PointerEntered__uType* PointerEntered__typeof();

void PointerEntered__Invoke(PointerEntered* __this, ::uDelegate* handler, ::uObject* sender, ::app::Fuse::Input::PointerEnteredArgs* args);
void PointerEntered___ObjInit_1(PointerEntered* __this);
PointerEntered* PointerEntered__New_1(::uStatic* __this);

struct PointerEntered : ::app::Fuse::Input::Event__Fuse_Input_PointerEnteredHandler__Fuse_Input_PointerEnteredArgs
{
    void _ObjInit_1() { PointerEntered___ObjInit_1(this); }
};

}}}


#endif
