// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Navigation\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_NAVIGATION_NAVIGATION_TRIGGER_ACTION_H__
#define __APP_FUSE_NAVIGATION_NAVIGATION_TRIGGER_ACTION_H__

#include <app/Fuse.Triggers.Actions.TriggerAction.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Navigation {

struct NavigationTriggerAction;

struct NavigationTriggerAction__uType : ::app::Fuse::Triggers::Actions::TriggerAction__uType
{
    void(*__fp_Perform_1)(NavigationTriggerAction*, ::uObject*, ::app::Fuse::Node*);
};

NavigationTriggerAction__uType* NavigationTriggerAction__typeof();

::uObject* NavigationTriggerAction__get_Context(NavigationTriggerAction* __this);
void NavigationTriggerAction__set_Context(NavigationTriggerAction* __this, ::uObject* value);
void NavigationTriggerAction__Perform(NavigationTriggerAction* __this, ::app::Fuse::Node* n);

struct NavigationTriggerAction : ::app::Fuse::Triggers::Actions::TriggerAction
{
    ::uStrong< ::uObject*> _context;

    void Perform_1(::uObject* ctx, ::app::Fuse::Node* n) { (((NavigationTriggerAction__uType*)this->__obj_type)->__fp_Perform_1)(this, ctx, n); }
    ::uObject* Context() { return NavigationTriggerAction__get_Context(this); }
    void Context(::uObject* value) { NavigationTriggerAction__set_Context(this, value); }
};

}}}


#endif
