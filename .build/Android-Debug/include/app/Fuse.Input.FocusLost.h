// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_INPUT_FOCUS_LOST_H__
#define __APP_FUSE_INPUT_FOCUS_LOST_H__

#include <app/Fuse.Input.Event__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Input { struct FocusLostArgs; } } }

namespace app {
namespace Fuse {
namespace Input {

struct FocusLost;

struct FocusLost__uType : ::app::Fuse::Input::Event__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs__uType
{
};

FocusLost__uType* FocusLost__typeof();

void FocusLost__Invoke(FocusLost* __this, ::uDelegate* handler, ::uObject* sender, ::app::Fuse::Input::FocusLostArgs* args);
void FocusLost___ObjInit_1(FocusLost* __this);
FocusLost* FocusLost__New_1(::uStatic* __this);

struct FocusLost : ::app::Fuse::Input::Event__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs
{
    void _ObjInit_1() { FocusLost___ObjInit_1(this); }
};

}}}


#endif
