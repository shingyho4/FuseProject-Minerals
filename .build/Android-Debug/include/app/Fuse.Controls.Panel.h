// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CONTROLS_PANEL_H__
#define __APP_FUSE_CONTROLS_PANEL_H__

#include <app/Fuse.Controls.Control.h>
#include <app/Fuse.Controls.Internal.ICollectionParent.h>
#include <app/Fuse.IActualSize.h>
#include <app/Fuse.INodeParent.h>
#include <app/Fuse.IResourceParent.h>
#include <app/Fuse.Navigation.INavigationPanel.h>
#include <app/Fuse.Triggers.Actions.ICollapse.h>
#include <app/Fuse.Triggers.Actions.IHide.h>
#include <app/Fuse.Triggers.Actions.IShow.h>
#include <app/Fuse.Triggers.IAddRemoveChild.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Controls { namespace Internal { struct ChildCollection; } } } }
namespace app { namespace Fuse { namespace Elements { struct Element; } } }
namespace app { namespace Fuse { namespace Layouts { struct Layout; } } }
namespace app { namespace Fuse { struct DrawContext; } }
namespace app { namespace Fuse { struct HitTestContext; } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Uno { struct Float2; } }
namespace app { namespace Uno { struct Rect; } }

namespace app {
namespace Fuse {
namespace Controls {

struct Panel;

struct Panel__uType : ::app::Fuse::Controls::Control__uType
{
    ::app::Fuse::Navigation::INavigationPanel __interface_7;
    ::app::Fuse::Triggers::IAddRemoveChild __interface_8;
};

Panel__uType* Panel__typeof();

int Panel__Fuse_Navigation_INavigationPanel_get_ChildCount(Panel* __this);
::app::Fuse::Layouts::Layout* Panel__get_Layout(Panel* __this);
void Panel__set_Layout(Panel* __this, ::app::Fuse::Layouts::Layout* value);
bool Panel__get_HasChildren(Panel* __this);
bool Panel__get_IsRedrawCheap(Panel* __this);
::uObject* Panel__get_Children(Panel* __this);
int Panel__get_SubElementCount(Panel* __this);
void Panel__OnResized(Panel* __this, ::app::Uno::Float2 s);
bool Panel__Fuse_Navigation_INavigationPanel_ContainsChild(Panel* __this, ::app::Fuse::Node* n);
void Panel__Fuse_Navigation_INavigationPanel_AddChildAt(Panel* __this, int index, ::app::Fuse::Node* n);
void Panel__Fuse_Navigation_INavigationPanel_RemoveChildAt(Panel* __this, int index);
::app::Fuse::Node* Panel__Fuse_Navigation_INavigationPanel_GetChild(Panel* __this, int index);
void Panel__OnResetStyle(Panel* __this);
void Panel__AddStyleChild(Panel* __this, ::app::Fuse::Elements::Element* child);
void Panel__OnRooted(Panel* __this);
void Panel__OnUnrooted(Panel* __this);
::app::Uno::Float2 Panel__GetContentSize(Panel* __this, ::app::Uno::Float2 fillSize, int fillSet);
void Panel__ArrangePaddingBox(Panel* __this, ::app::Uno::Float2 size);
::app::Uno::Rect Panel__CalcRenderBounds_1(Panel* __this, ::app::Uno::Rect baseRect);
void Panel__OnDrawControl(Panel* __this, ::app::Fuse::DrawContext* dc);
void Panel__OnCollectionChildAdded(Panel* __this, ::uObject* where, ::app::Fuse::Elements::Element* elm);
void Panel__OnCollectionChildRemoved(Panel* __this, ::uObject* where, ::app::Fuse::Elements::Element* elm);
void Panel__OnChildAdded(Panel* __this, ::app::Fuse::Elements::Element* elm);
void Panel__OnChildRemoved(Panel* __this, ::app::Fuse::Elements::Element* elm);
void Panel__OnHitTestControlChildren(Panel* __this, ::app::Fuse::HitTestContext* htc);
::app::Fuse::Elements::Element* Panel__GetSubElement(Panel* __this, int index);
void Panel__Fuse_Triggers_IAddRemoveChild_AddChild(Panel* __this, ::app::Fuse::Node* n);
void Panel__Fuse_Triggers_IAddRemoveChild_RemoveChild(Panel* __this, ::app::Fuse::Node* n);
void Panel___ObjInit_3(Panel* __this);
Panel* Panel__New_1(::uStatic* __this);
void Panel__Fuse_Navigation_INavigationPanel_add_ChildAdded(Panel* __this, ::uDelegate* value);
void Panel__Fuse_Navigation_INavigationPanel_remove_ChildAdded(Panel* __this, ::uDelegate* value);
void Panel__Fuse_Navigation_INavigationPanel_add_ChildRemoved(Panel* __this, ::uDelegate* value);
void Panel__Fuse_Navigation_INavigationPanel_remove_ChildRemoved(Panel* __this, ::uDelegate* value);
void Panel__Fuse_Navigation_INavigationPanel_add_Resized(Panel* __this, ::uDelegate* value);
void Panel__Fuse_Navigation_INavigationPanel_remove_Resized(Panel* __this, ::uDelegate* value);

struct Panel : ::app::Fuse::Controls::Control
{
    ::uStrong< ::uDelegate*> _childAdded;
    ::uStrong< ::uDelegate*> _childRemoved;
    ::uStrong< ::uDelegate*> _resized;
    ::uStrong< ::app::Fuse::Layouts::Layout*> _layout;
    ::uStrong< ::app::Fuse::Controls::Internal::ChildCollection*> _children;
    ::uStrong< ::uDelegate*> ChildAdded;
    ::uStrong< ::uDelegate*> ChildRemoved;

    void AddStyleChild(::app::Fuse::Elements::Element* child) { Panel__AddStyleChild(this, child); }
    void OnChildAdded(::app::Fuse::Elements::Element* elm) { Panel__OnChildAdded(this, elm); }
    void OnChildRemoved(::app::Fuse::Elements::Element* elm) { Panel__OnChildRemoved(this, elm); }
    void _ObjInit_3() { Panel___ObjInit_3(this); }
    ::app::Fuse::Layouts::Layout* Layout() { return Panel__get_Layout(this); }
    void Layout(::app::Fuse::Layouts::Layout* value) { Panel__set_Layout(this, value); }
    bool HasChildren() { return Panel__get_HasChildren(this); }
    ::uObject* Children() { return Panel__get_Children(this); }
};

}}}

#include <app/Uno.Bool.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Int.h>
#include <app/Uno.Rect.h>

namespace app {
namespace Fuse {
namespace Controls {

}}}


#endif
