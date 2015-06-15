// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CONTROLS_STACK_PANEL_H__
#define __APP_FUSE_CONTROLS_STACK_PANEL_H__

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
namespace app { namespace Fuse { namespace Layouts { struct StackLayout; } } }

namespace app {
namespace Fuse {
namespace Controls {

struct StackPanel;

struct StackPanel__uType : ::app::Fuse::Controls::Panel__uType
{
};

StackPanel__uType* StackPanel__typeof();

void StackPanel___ObjInit_4(StackPanel* __this);
StackPanel* StackPanel__New_2(::uStatic* __this);

struct StackPanel : ::app::Fuse::Controls::Panel
{
    ::uStrong< ::app::Fuse::Layouts::StackLayout*> _stackLayout;

    void _ObjInit_4() { StackPanel___ObjInit_4(this); }
};

}}}


#endif
