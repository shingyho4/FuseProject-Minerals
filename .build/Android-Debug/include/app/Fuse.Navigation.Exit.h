// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Navigation\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_NAVIGATION_EXIT_H__
#define __APP_FUSE_NAVIGATION_EXIT_H__

#include <app/Fuse.Navigation.EnterExitTrigger.h>
#include <Uno/Uno.h>

namespace app {
namespace Fuse {
namespace Navigation {

struct Exit;

struct Exit__uType : ::app::Fuse::Navigation::EnterExitTrigger__uType
{
};

Exit__uType* Exit__typeof();

void Exit___ObjInit_4(Exit* __this);
Exit* Exit__New_1(::uStatic* __this);

struct Exit : ::app::Fuse::Navigation::EnterExitTrigger
{
    void _ObjInit_4() { Exit___ObjInit_4(this); }
};

}}}


#endif
