// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Navigation\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_NAVIGATION_EDGE_NAVIGATION_H__
#define __APP_FUSE_NAVIGATION_EDGE_NAVIGATION_H__

#include <app/Fuse.Navigation.INavigationContext.h>
#include <app/Fuse.Navigation.Navigation.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Elements { struct Element; } } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Fuse { struct PropertyHandle; } }
namespace app { namespace Uno { namespace Collections { struct Dictionary__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper; } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Node; } } }

namespace app {
namespace Fuse {
namespace Navigation {

struct EdgeNavigation;

extern ::uStaticStrong< ::app::Fuse::PropertyHandle*> EdgeNavigation___edgeHandle;

struct EdgeNavigation__uType : ::app::Fuse::Navigation::Navigation__uType
{
};

EdgeNavigation__uType* EdgeNavigation__typeof();

::app::Fuse::Node* EdgeNavigation__get_Active(EdgeNavigation* __this);
void EdgeNavigation__set_Active(EdgeNavigation* __this, ::app::Fuse::Node* value);
int EdgeNavigation__GetEdge(::uStatic* __this, ::app::Fuse::Elements::Element* elm);
void EdgeNavigation__Goto(EdgeNavigation* __this, ::app::Fuse::Node* element);
void EdgeNavigation__Toggle(EdgeNavigation* __this, ::app::Fuse::Node* page);
void EdgeNavigation__OnRooted(EdgeNavigation* __this, ::app::Fuse::Node* node);
void EdgeNavigation__OnUnrooted(EdgeNavigation* __this, ::app::Fuse::Node* node);
void EdgeNavigation__OnChildAdded(EdgeNavigation* __this, ::app::Fuse::Node* child);
void EdgeNavigation__OnChildRemoved(EdgeNavigation* __this, ::app::Fuse::Node* child);
void EdgeNavigation__ClearChildren(EdgeNavigation* __this);
void EdgeNavigation__CheckChildren(EdgeNavigation* __this);
void EdgeNavigation__OnProgressChanged(EdgeNavigation* __this, ::uObject* s, double progress);
void EdgeNavigation___TypeInit_1(::uStatic* __this);

struct EdgeNavigation : ::app::Fuse::Navigation::Navigation
{
    ::uStrong< ::app::Fuse::Node*> _active;
    ::uStrong< ::uObject*> _panel;
    ::uStrong< ::app::Fuse::Elements::Element*> _element;
    ::uStrong< ::app::Uno::Collections::Dictionary__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper*> _swipers;
    ::uStrong< ::app::Uno::Collections::List__Fuse_Node*> _mains;

    void OnChildAdded(::app::Fuse::Node* child) { EdgeNavigation__OnChildAdded(this, child); }
    void OnChildRemoved(::app::Fuse::Node* child) { EdgeNavigation__OnChildRemoved(this, child); }
    void ClearChildren() { EdgeNavigation__ClearChildren(this); }
    void CheckChildren() { EdgeNavigation__CheckChildren(this); }
    void OnProgressChanged(::uObject* s, double progress) { EdgeNavigation__OnProgressChanged(this, s, progress); }
    ::app::Fuse::Node* Active() { return EdgeNavigation__get_Active(this); }
    void Active(::app::Fuse::Node* value) { EdgeNavigation__set_Active(this, value); }
};

}}}

#include <app/Uno.Double.h>

namespace app {
namespace Fuse {
namespace Navigation {

}}}


#endif
