// This file was generated based on 'D:\Shing\work\OCIO\FuseProject\MyMineral\MainView.ux.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP___MAIN_VIEW_H__
#define __APP___MAIN_VIEW_H__

#include <app/Fuse.App.h>
#include <app/Fuse.IResourceParent.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Controls { struct StackPanel; } } }

namespace app {

struct MainView;

struct MainView__uType : ::app::Fuse::App__uType
{
};

MainView__uType* MainView__typeof();

void MainView__InitializeUX(MainView* __this);
void MainView___InitTypes(::uStatic* __this);
void MainView___ObjInit_2(MainView* __this);
MainView* MainView__New_2(::uStatic* __this);

struct MainView : ::app::Fuse::App
{
    ::uStrong< ::app::Fuse::Controls::StackPanel*> PhotoCol1;
    ::uStrong< ::app::Fuse::Controls::StackPanel*> PhotoCol2;

    void InitializeUX() { MainView__InitializeUX(this); }
    void _ObjInit_2() { MainView___ObjInit_2(this); }
};

}


#endif
