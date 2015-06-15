// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Platform2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_PLATFORM2_DEFAULT_SETUP_H__
#define __APP_UNO_PLATFORM2_DEFAULT_SETUP_H__

#include <Uno/Uno.h>
namespace app { namespace Uno { namespace Platform { struct KeyEventArgs; } } }
namespace app { namespace Uno { namespace Platform2 { struct GraphicsView; } } }
namespace app { namespace Uno { namespace Platform2 { struct TimerEventArgs; } } }
namespace app { namespace Uno { namespace Platform2 { struct TouchEventArgs; } } }
namespace app { namespace Uno { struct EventArgs; } }

namespace app {
namespace Uno {
namespace Platform2 {

extern bool DefaultSetup___forceDrawNextFrame;
extern ::uStaticStrong< ::app::Uno::Platform2::GraphicsView*> DefaultSetup___RootView;

struct DefaultSetup__uType : ::uClassType
{
};

DefaultSetup__uType* DefaultSetup__typeof();

::app::Uno::Platform2::GraphicsView* DefaultSetup__get_RootView(::uStatic* __this);
void DefaultSetup__set_RootView(::uStatic* __this, ::app::Uno::Platform2::GraphicsView* value);
void DefaultSetup__OnStarted(::uStatic* __this, int state);
void DefaultSetup__OnTerminating(::uStatic* __this, int state);
void DefaultSetup__OnEnterForeground(::uStatic* __this, int state);
void DefaultSetup__OnEnterInteractive(::uStatic* __this, int state);
void DefaultSetup__OnExitInteractive(::uStatic* __this, int state);
void DefaultSetup__OnEnterBackground(::uStatic* __this, int state);
void DefaultSetup__OnViewHandleReady(::uStatic* __this, ::uObject* sender, ::app::Uno::EventArgs* args);
void DefaultSetup__OnDisplayFrameChanged(::uStatic* __this, ::uObject* sender, ::app::Uno::EventArgs* args);
void DefaultSetup__OnViewFrameChanged(::uStatic* __this, ::uObject* sender, ::app::Uno::EventArgs* args);
void DefaultSetup__OnUpdate(::uStatic* __this, ::uObject* sender, ::app::Uno::Platform2::TimerEventArgs* args);
void DefaultSetup__OnDraw(::uStatic* __this, ::uObject* sender, ::app::Uno::Platform2::TimerEventArgs* args);
void DefaultSetup__OnTouchDown(::uStatic* __this, ::uObject* sender, ::app::Uno::Platform2::TouchEventArgs* args);
void DefaultSetup__OnTouchMove(::uStatic* __this, ::uObject* sender, ::app::Uno::Platform2::TouchEventArgs* args);
void DefaultSetup__OnTouchUp(::uStatic* __this, ::uObject* sender, ::app::Uno::Platform2::TouchEventArgs* args);
void DefaultSetup__OnKeyDown(::uStatic* __this, ::uObject* sender, ::app::Uno::Platform::KeyEventArgs* args);
void DefaultSetup__OnKeyUp(::uStatic* __this, ::uObject* sender, ::app::Uno::Platform::KeyEventArgs* args);
void DefaultSetup___TypeInit(::uStatic* __this);

}}}


#endif
