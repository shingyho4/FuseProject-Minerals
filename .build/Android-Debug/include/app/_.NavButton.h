// This file was generated based on 'D:\Shing\work\OCIO\FuseProject\MyMineral\.cache\GeneratedCode\MainView.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP___NAV_BUTTON_H__
#define __APP___NAV_BUTTON_H__

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

namespace app {

struct NavButton;

struct NavButton__uType : ::app::Fuse::Controls::Panel__uType
{
};

NavButton__uType* NavButton__typeof();

void NavButton__InitializeUX(NavButton* __this);
void NavButton___ObjInit_4(NavButton* __this);
NavButton* NavButton__New_2(::uStatic* __this);

struct NavButton : ::app::Fuse::Controls::Panel
{
    void InitializeUX() { NavButton__InitializeUX(this); }
    void _ObjInit_4() { NavButton___ObjInit_4(this); }
};

}


#endif
