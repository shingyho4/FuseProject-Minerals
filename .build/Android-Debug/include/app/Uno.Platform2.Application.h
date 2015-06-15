// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Platform2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_PLATFORM2_APPLICATION_H__
#define __APP_UNO_PLATFORM2_APPLICATION_H__

#include <Uno/Platform2.h>
#include <Uno/Uno.h>

namespace app {
namespace Uno {
namespace Platform2 {

extern ::uStaticStrong< ::uDelegate*> Application__Started;
extern ::uStaticStrong< ::uDelegate*> Application__EnteringForeground;
extern ::uStaticStrong< ::uDelegate*> Application__EnteringInteractive;
extern ::uStaticStrong< ::uDelegate*> Application__ExitedInteractive;
extern ::uStaticStrong< ::uDelegate*> Application__EnteringBackground;
extern ::uStaticStrong< ::uDelegate*> Application__Terminating;
extern ::uStaticStrong< ::uDelegate*> Application__ReceivedLowMemoryWarning;
extern ::uStaticStrong< ::uDelegate*> Application__KeyDown;
extern ::uStaticStrong< ::uDelegate*> Application__KeyUp;
extern int Application___State;

struct Application__uType : ::uClassType
{
};

Application__uType* Application__typeof();

int Application__get_State(::uStatic* __this);
void Application__set_State(::uStatic* __this, int value);
uPlatform2::ViewNativeHandle Application__get_RootView(::uStatic* __this);
void Application__set_RootView(::uStatic* __this, uPlatform2::ViewNativeHandle value);
void Application__DidStart(::uStatic* __this);
void Application__DidEnterForeground(::uStatic* __this);
void Application__DidEnterInteractive(::uStatic* __this);
void Application__DidExitInteractive(::uStatic* __this);
void Application__DidEnterBackground(::uStatic* __this);
void Application__WillTerminate(::uStatic* __this);
void Application__Start(::uStatic* __this);
void Application___Start(::uStatic* __this);
void Application__EnterForeground(::uStatic* __this);
void Application__EnterInteractive(::uStatic* __this);
void Application__ExitInteractive(::uStatic* __this);
void Application__EnterBackground(::uStatic* __this);
void Application__Terminate(::uStatic* __this);
void Application__OnReceivedLowMemoryWarning(::uStatic* __this);
uPlatform2::ViewNativeHandle Application__GetRootView(::uStatic* __this);
void Application__SetRootView(::uStatic* __this, uPlatform2::ViewNativeHandle __viewHandle);
bool Application__OnKeyDown(::uStatic* __this, int key, int modifiers);
bool Application__OnKeyUp(::uStatic* __this, int key, int modifiers);
void Application__add_Started(::uStatic* __this, ::uDelegate* value);
void Application__remove_Started(::uStatic* __this, ::uDelegate* value);
void Application__add_EnteringForeground(::uStatic* __this, ::uDelegate* value);
void Application__remove_EnteringForeground(::uStatic* __this, ::uDelegate* value);
void Application__add_EnteringInteractive(::uStatic* __this, ::uDelegate* value);
void Application__remove_EnteringInteractive(::uStatic* __this, ::uDelegate* value);
void Application__add_ExitedInteractive(::uStatic* __this, ::uDelegate* value);
void Application__remove_ExitedInteractive(::uStatic* __this, ::uDelegate* value);
void Application__add_EnteringBackground(::uStatic* __this, ::uDelegate* value);
void Application__remove_EnteringBackground(::uStatic* __this, ::uDelegate* value);
void Application__add_Terminating(::uStatic* __this, ::uDelegate* value);
void Application__remove_Terminating(::uStatic* __this, ::uDelegate* value);
void Application__add_KeyDown(::uStatic* __this, ::uDelegate* value);
void Application__remove_KeyDown(::uStatic* __this, ::uDelegate* value);
void Application__add_KeyUp(::uStatic* __this, ::uDelegate* value);
void Application__remove_KeyUp(::uStatic* __this, ::uDelegate* value);

}}}


#endif
