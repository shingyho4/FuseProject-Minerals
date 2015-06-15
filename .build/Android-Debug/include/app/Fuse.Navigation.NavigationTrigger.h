// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Navigation\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_NAVIGATION_NAVIGATION_TRIGGER_H__
#define __APP_FUSE_NAVIGATION_NAVIGATION_TRIGGER_H__

#include <app/Fuse.Triggers.Trigger.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Navigation { struct NavigationArgs; } } }
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Navigation {

struct NavigationTrigger;

struct NavigationTrigger__uType : ::app::Fuse::Triggers::Trigger__uType
{
    void(*__fp_ForceUpdate)(NavigationTrigger*);
    void(*__fp_OnNavigationStateChanged)(NavigationTrigger*, ::uObject*, ::app::Fuse::Navigation::NavigationArgs*);
};

NavigationTrigger__uType* NavigationTrigger__typeof();

::app::Fuse::Node* NavigationTrigger__get_PageContext(NavigationTrigger* __this);
void NavigationTrigger__OnRooted(NavigationTrigger* __this, ::app::Fuse::Node* elm);
void NavigationTrigger__OnUnrooted(NavigationTrigger* __this, ::app::Fuse::Node* elm);
void NavigationTrigger___ObjInit_2(NavigationTrigger* __this);

struct NavigationTrigger : ::app::Fuse::Triggers::Trigger
{
    void ForceUpdate() { (((NavigationTrigger__uType*)this->__obj_type)->__fp_ForceUpdate)(this); }
    void OnNavigationStateChanged(::uObject* sender, ::app::Fuse::Navigation::NavigationArgs* state) { (((NavigationTrigger__uType*)this->__obj_type)->__fp_OnNavigationStateChanged)(this, sender, state); }
    void _ObjInit_2() { NavigationTrigger___ObjInit_2(this); }
    ::app::Fuse::Node* PageContext() { return NavigationTrigger__get_PageContext(this); }
};

}}}


#endif
