// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CONTROLS_MULTI_LAYOUT_PANEL_H__
#define __APP_FUSE_CONTROLS_MULTI_LAYOUT_PANEL_H__

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

namespace app {
namespace Fuse {
namespace Controls {

struct MultiLayoutPanel;

struct MultiLayoutPanel__uType : ::app::Fuse::Controls::Panel__uType
{
};

MultiLayoutPanel__uType* MultiLayoutPanel__typeof();

void MultiLayoutPanel__ChangeLayout(MultiLayoutPanel* __this, ::app::Fuse::Elements::Element* layoutRoot);

struct MultiLayoutPanel : ::app::Fuse::Controls::Panel
{
    void ChangeLayout(::app::Fuse::Elements::Element* layoutRoot) { MultiLayoutPanel__ChangeLayout(this, layoutRoot); }
};

}}}


#endif
