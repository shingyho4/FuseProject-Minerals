// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Navigation\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_NAVIGATION_NAVIGATE_TO_H__
#define __APP_FUSE_NAVIGATION_NAVIGATE_TO_H__

#include <app/Fuse.Navigation.NavigationTriggerAction.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Navigation {

struct NavigateTo;

struct NavigateTo__uType : ::app::Fuse::Navigation::NavigationTriggerAction__uType
{
};

NavigateTo__uType* NavigateTo__typeof();

::app::Fuse::Node* NavigateTo__get_Target(NavigateTo* __this);
void NavigateTo__set_Target(NavigateTo* __this, ::app::Fuse::Node* value);
void NavigateTo__Perform_1(NavigateTo* __this, ::uObject* ctx, ::app::Fuse::Node* n);

struct NavigateTo : ::app::Fuse::Navigation::NavigationTriggerAction
{
    ::uStrong< ::app::Fuse::Node*> _Target;

    ::app::Fuse::Node* Target() { return NavigateTo__get_Target(this); }
    void Target(::app::Fuse::Node* value) { NavigateTo__set_Target(this, value); }
};

}}}


#endif
