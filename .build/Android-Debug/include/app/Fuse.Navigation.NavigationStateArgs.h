// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Navigation\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_NAVIGATION_NAVIGATION_STATE_ARGS_H__
#define __APP_FUSE_NAVIGATION_NAVIGATION_STATE_ARGS_H__

#include <app/Uno.EventArgs.h>
#include <Uno/Uno.h>

namespace app {
namespace Fuse {
namespace Navigation {

struct NavigationStateArgs;

struct NavigationStateArgs__uType : ::app::Uno::EventArgs__uType
{
};

NavigationStateArgs__uType* NavigationStateArgs__typeof();

int NavigationStateArgs__get_State(NavigationStateArgs* __this);
void NavigationStateArgs__set_State(NavigationStateArgs* __this, int value);
void NavigationStateArgs___ObjInit_1(NavigationStateArgs* __this);
NavigationStateArgs* NavigationStateArgs__New_2(::uStatic* __this);

struct NavigationStateArgs : ::app::Uno::EventArgs
{
    int _State;

    void _ObjInit_1() { NavigationStateArgs___ObjInit_1(this); }
    int State() { return NavigationStateArgs__get_State(this); }
    void State(int value) { NavigationStateArgs__set_State(this, value); }
};

}}}


#endif
