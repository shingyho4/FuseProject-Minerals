// This file was generated based on 'D:\Shing\work\OCIO\FuseProject\MyMineral\.cache\GeneratedCode\MainView.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP___MAIN_VIEW_TEMPLATE3_H__
#define __APP___MAIN_VIEW_TEMPLATE3_H__

#include <app/Uno.UX.ITemplate.h>
#include <app/Uno.UX.Template__Fuse_Controls_Image.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Controls { struct Image; } } }
namespace app { struct MainView; }

namespace app {

struct MainView_Template3;

struct MainView_Template3__uType : ::app::Uno::UX::Template__Fuse_Controls_Image__uType
{
};

MainView_Template3__uType* MainView_Template3__typeof();

void MainView_Template3__OnApply(MainView_Template3* __this, ::app::Fuse::Controls::Image* self);
void MainView_Template3___ObjInit_1(MainView_Template3* __this, ::app::MainView* parent);
MainView_Template3* MainView_Template3__New_1(::uStatic* __this, ::app::MainView* parent);

struct MainView_Template3 : ::app::Uno::UX::Template__Fuse_Controls_Image
{
    ::uStrong< ::app::MainView*> __parent;

    void _ObjInit_1(::app::MainView* parent) { MainView_Template3___ObjInit_1(this, parent); }
};

}


#endif
