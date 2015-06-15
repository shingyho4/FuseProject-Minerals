// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_INPUT_FOCUS_GAINED_H__
#define __APP_FUSE_INPUT_FOCUS_GAINED_H__

#include <app/Fuse.Input.Event__Fuse_Input_FocusGainedHandler__Fuse_Input_Foc-7957175e.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Input { struct FocusGainedArgs; } } }

namespace app {
namespace Fuse {
namespace Input {

struct FocusGained;

struct FocusGained__uType : ::app::Fuse::Input::Event__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs__uType
{
};

FocusGained__uType* FocusGained__typeof();

void FocusGained__Invoke(FocusGained* __this, ::uDelegate* handler, ::uObject* sender, ::app::Fuse::Input::FocusGainedArgs* args);
void FocusGained___ObjInit_1(FocusGained* __this);
FocusGained* FocusGained__New_1(::uStatic* __this);

struct FocusGained : ::app::Fuse::Input::Event__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs
{
    void _ObjInit_1() { FocusGained___ObjInit_1(this); }
};

}}}


#endif
