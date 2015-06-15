// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Navigation\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_NAVIGATION_ENTER_EXIT_TRIGGER_H__
#define __APP_FUSE_NAVIGATION_ENTER_EXIT_TRIGGER_H__

#include <app/Fuse.Navigation.NavigationTrigger.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Navigation { struct NavigationArgs; } } }

namespace app {
namespace Fuse {
namespace Navigation {

struct EnterExitTrigger;

struct EnterExitTrigger__uType : ::app::Fuse::Navigation::NavigationTrigger__uType
{
};

EnterExitTrigger__uType* EnterExitTrigger__typeof();

void EnterExitTrigger__ForceUpdate(EnterExitTrigger* __this);
bool EnterExitTrigger__IsMatch(EnterExitTrigger* __this, double progress);
void EnterExitTrigger__OnNavigationStateChanged(EnterExitTrigger* __this, ::uObject* sender, ::app::Fuse::Navigation::NavigationArgs* state);
void EnterExitTrigger___ObjInit_3(EnterExitTrigger* __this);

struct EnterExitTrigger : ::app::Fuse::Navigation::NavigationTrigger
{
    bool PositiveProgress;
    bool NegativeProgress;

    bool IsMatch(double progress) { return EnterExitTrigger__IsMatch(this, progress); }
    void _ObjInit_3() { EnterExitTrigger___ObjInit_3(this); }
};

}}}

#include <app/Uno.Bool.h>
#include <app/Uno.Double.h>

namespace app {
namespace Fuse {
namespace Navigation {

}}}


#endif
