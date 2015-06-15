// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Navigation\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_NAVIGATION_CAN_GO_BACK_H__
#define __APP_FUSE_NAVIGATION_CAN_GO_BACK_H__

#include <app/Fuse.Triggers.ElementTrigger.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Elements { struct Element; } } }
namespace app { namespace Fuse { namespace Navigation { struct NavigatedArgs; } } }

namespace app {
namespace Fuse {
namespace Navigation {

struct CanGoBack;

struct CanGoBack__uType : ::app::Fuse::Triggers::ElementTrigger__uType
{
};

CanGoBack__uType* CanGoBack__typeof();

::uObject* CanGoBack__get_Context(CanGoBack* __this);
void CanGoBack__set_Context(CanGoBack* __this, ::uObject* value);
void CanGoBack__OnRooted_1(CanGoBack* __this, ::app::Fuse::Elements::Element* elm);
void CanGoBack__OnUnrooted_1(CanGoBack* __this, ::app::Fuse::Elements::Element* elm);
void CanGoBack__OnNavigated(CanGoBack* __this, ::uObject* sender, ::app::Fuse::Navigation::NavigatedArgs* args);

struct CanGoBack : ::app::Fuse::Triggers::ElementTrigger
{
    ::uStrong< ::uObject*> _context;

    void OnNavigated(::uObject* sender, ::app::Fuse::Navigation::NavigatedArgs* args) { CanGoBack__OnNavigated(this, sender, args); }
    ::uObject* Context() { return CanGoBack__get_Context(this); }
    void Context(::uObject* value) { CanGoBack__set_Context(this, value); }
};

}}}


#endif
