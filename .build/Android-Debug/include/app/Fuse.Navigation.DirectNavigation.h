// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Navigation\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_NAVIGATION_DIRECT_NAVIGATION_H__
#define __APP_FUSE_NAVIGATION_DIRECT_NAVIGATION_H__

#include <app/Fuse.Navigation.INavigationContext.h>
#include <app/Fuse.Navigation.Navigation.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Fuse { struct PropertyHandle; } }

namespace app {
namespace Fuse {
namespace Navigation {

struct DirectNavigation;

extern ::uStaticStrong< ::app::Fuse::PropertyHandle*> DirectNavigation___indexProperty;

struct DirectNavigation__uType : ::app::Fuse::Navigation::Navigation__uType
{
};

DirectNavigation__uType* DirectNavigation__typeof();

void DirectNavigation__OnRooted(DirectNavigation* __this, ::app::Fuse::Node* node);
void DirectNavigation__OnUnrooted(DirectNavigation* __this, ::app::Fuse::Node* node);
void DirectNavigation__OnChildAdded(DirectNavigation* __this, ::app::Fuse::Node* child);
void DirectNavigation__OnChildRemoved(DirectNavigation* __this, ::app::Fuse::Node* child);
void DirectNavigation__Goto(DirectNavigation* __this, ::app::Fuse::Node* node);
void DirectNavigation__TransitionTo(DirectNavigation* __this, ::app::Fuse::Node* node, bool bypass);
void DirectNavigation__UpdateState(DirectNavigation* __this, bool bypass);
int DirectNavigation__GetIndex(::uStatic* __this, ::app::Fuse::Node* elm);
void DirectNavigation__SetIndex(::uStatic* __this, ::app::Fuse::Node* elm, int index);
void DirectNavigation__ResetIndex(::uStatic* __this, ::app::Fuse::Node* elm);
void DirectNavigation___TypeInit_1(::uStatic* __this);

struct DirectNavigation : ::app::Fuse::Navigation::Navigation
{
    ::uStrong< ::uObject*> _panel;
    ::uStrong< ::app::Fuse::Node*> _active;

    void OnChildAdded(::app::Fuse::Node* child) { DirectNavigation__OnChildAdded(this, child); }
    void OnChildRemoved(::app::Fuse::Node* child) { DirectNavigation__OnChildRemoved(this, child); }
    void TransitionTo(::app::Fuse::Node* node, bool bypass) { DirectNavigation__TransitionTo(this, node, bypass); }
    void UpdateState(bool bypass) { DirectNavigation__UpdateState(this, bypass); }
};

}}}

#include <app/Uno.Bool.h>

namespace app {
namespace Fuse {
namespace Navigation {

}}}


#endif
