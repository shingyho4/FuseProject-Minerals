// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Navigation\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_NAVIGATION_GO_BACK_H__
#define __APP_FUSE_NAVIGATION_GO_BACK_H__

#include <app/Fuse.Navigation.NavigationTriggerAction.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Navigation {

struct GoBack;

struct GoBack__uType : ::app::Fuse::Navigation::NavigationTriggerAction__uType
{
};

GoBack__uType* GoBack__typeof();

void GoBack__Perform_1(GoBack* __this, ::uObject* ctx, ::app::Fuse::Node* n);

struct GoBack : ::app::Fuse::Navigation::NavigationTriggerAction
{
};

}}}


#endif
