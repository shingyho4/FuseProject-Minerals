// This file was generated based on 'D:\Shing\work\OCIO\FuseProject\MyMineral\.cache\GeneratedCode\MainView.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP___MAIN_VIEW_TEMPLATE1_H__
#define __APP___MAIN_VIEW_TEMPLATE1_H__

#include <app/Uno.UX.ITemplate.h>
#include <app/Uno.UX.Template__NavButton.h>
#include <Uno/Uno.h>
namespace app { struct MainView; }
namespace app { struct MainView_Fuse_Drawing_SolidColor_float4_Color_Property; }
namespace app { struct NavButton; }

namespace app {

struct MainView_Template1;

struct MainView_Template1__uType : ::app::Uno::UX::Template__NavButton__uType
{
};

MainView_Template1__uType* MainView_Template1__typeof();

void MainView_Template1__OnApply(MainView_Template1* __this, ::app::NavButton* self);
void MainView_Template1___ObjInit_1(MainView_Template1* __this, ::app::MainView* parent);
MainView_Template1* MainView_Template1__New_1(::uStatic* __this, ::app::MainView* parent);

struct MainView_Template1 : ::app::Uno::UX::Template__NavButton
{
    ::uStrong< ::app::MainView*> __parent;
    ::uStrong< ::app::MainView_Fuse_Drawing_SolidColor_float4_Color_Property*> _buttonColor_Color_inst;

    void _ObjInit_1(::app::MainView* parent) { MainView_Template1___ObjInit_1(this, parent); }
};

}


#endif
