// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CONTROLS_EDGE_NAVIGATOR_H__
#define __APP_FUSE_CONTROLS_EDGE_NAVIGATOR_H__

#include <app/Fuse.Controls.Internal.ICollectionParent.h>
#include <app/Fuse.Controls.Panel.h>
#include <app/Fuse.IActualSize.h>
#include <app/Fuse.INodeParent.h>
#include <app/Fuse.IResourceParent.h>
#include <app/Fuse.Navigation.INavigationPanel.h>
#include <app/Fuse.Triggers.Actions.ICollapse.h>
#include <app/Fuse.Triggers.Actions.IHide.h>
#include <app/Fuse.Triggers.Actions.IShow.h>
#include <app/Fuse.Triggers.IAddRemoveChild.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Elements { struct Element; } } }
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Fuse {
namespace Controls {

struct EdgeNavigator;

extern ::uStaticStrong< ::uObject*> EdgeNavigator___tplMain;

struct EdgeNavigator__uType : ::app::Fuse::Controls::Panel__uType
{
};

EdgeNavigator__uType* EdgeNavigator__typeof();

void EdgeNavigator__OnApplyStyle(EdgeNavigator* __this, ::uObject* o);
void EdgeNavigator__SetupEdge(EdgeNavigator* __this, ::app::Fuse::Elements::Element* elm, ::app::Uno::Float2 rel, int align);
void EdgeNavigator__SetupMain(EdgeNavigator* __this, ::app::Fuse::Elements::Element* elm);
void EdgeNavigator___TypeInit_3(::uStatic* __this);

struct EdgeNavigator : ::app::Fuse::Controls::Panel
{
    void SetupEdge(::app::Fuse::Elements::Element* elm, ::app::Uno::Float2 rel, int align);
    void SetupMain(::app::Fuse::Elements::Element* elm) { EdgeNavigator__SetupMain(this, elm); }
};

}}}

#include <app/Uno.Float2.h>

namespace app {
namespace Fuse {
namespace Controls {

inline void EdgeNavigator::SetupEdge(::app::Fuse::Elements::Element* elm, ::app::Uno::Float2 rel, int align) { EdgeNavigator__SetupEdge(this, elm, rel, align); }

}}}


#endif
