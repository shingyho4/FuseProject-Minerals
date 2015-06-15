// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Platform2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_PLATFORM2_DISPLAY_H__
#define __APP_UNO_PLATFORM2_DISPLAY_H__

#include <app/Uno.Object.h>
#include <app/Uno.Rect.h>
#include <Uno/Platform2.h>
#include <Uno/Uno.h>
namespace app { namespace Uno { namespace Platform2 { struct TimerEventArgs; } } }

namespace app {
namespace Uno {
namespace Platform2 {

struct Display;

struct Display__uType : ::uClassType
{
};

Display__uType* Display__typeof();

void Display__Finalize(Display* __this);
Display* Display__get_MainDisplay(::uStatic* __this);
float Display__get_Density(Display* __this);
void Display__set_Density(Display* __this, float value);
::app::Uno::Rect Display__get_Frame(Display* __this);
void Display__set_Frame(Display* __this, ::app::Uno::Rect value);
::uUInt Display__get_FramesPerSecond(Display* __this);
void Display__set_FramesPerSecond(Display* __this, ::uUInt value);
void Display__Initialize(Display* __this);
void Display__Destroy(Display* __this);
Display* Display__GetMainDisplay(::uStatic* __this);
void Display__OnFrameChanged(Display* __this);
void Display__SetFramesPerSecond(Display* __this, ::uUInt __value);
void Display__OnTick(Display* __this, ::app::Uno::Platform2::TimerEventArgs* args);
void Display__EnableTickNotifications(Display* __this);
void Display__DisableTickNotifications(Display* __this);
void Display___ObjInit(Display* __this);
Display* Display__New_1(::uStatic* __this);
void Display__add_FrameChanged(Display* __this, ::uDelegate* value);
void Display__add__tick(Display* __this, ::uDelegate* value);
void Display__remove__tick(Display* __this, ::uDelegate* value);
void Display__add_Tick(Display* __this, ::uDelegate* value);
void Display__remove_Tick(Display* __this, ::uDelegate* value);

struct Display : ::uObject
{
    uPlatform2::Display _private;
    ::app::Uno::Rect _frame;
    ::uUInt _framesPerSecond;
    ::uStrong< ::uDelegate*> FrameChanged;
    ::uStrong< ::uDelegate*> _tick;
    float _Density;

    void Initialize() { Display__Initialize(this); }
    void Destroy() { Display__Destroy(this); }
    void OnFrameChanged() { Display__OnFrameChanged(this); }
    void SetFramesPerSecond(::uUInt __value) { Display__SetFramesPerSecond(this, __value); }
    void OnTick(::app::Uno::Platform2::TimerEventArgs* args) { Display__OnTick(this, args); }
    void EnableTickNotifications() { Display__EnableTickNotifications(this); }
    void DisableTickNotifications() { Display__DisableTickNotifications(this); }
    void _ObjInit() { Display___ObjInit(this); }
    void add_FrameChanged(::uDelegate* value) { Display__add_FrameChanged(this, value); }
    void add__tick(::uDelegate* value) { Display__add__tick(this, value); }
    void remove__tick(::uDelegate* value) { Display__remove__tick(this, value); }
    void add_Tick(::uDelegate* value) { Display__add_Tick(this, value); }
    void remove_Tick(::uDelegate* value) { Display__remove_Tick(this, value); }
    float Density() { return Display__get_Density(this); }
    void Density(float value) { Display__set_Density(this, value); }
    ::app::Uno::Rect Frame();
    void Frame(::app::Uno::Rect value);
    ::uUInt FramesPerSecond() { return Display__get_FramesPerSecond(this); }
    void FramesPerSecond(::uUInt value) { Display__set_FramesPerSecond(this, value); }
};

}}}

#include <app/Uno.Float.h>
#include <app/Uno.UInt.h>

namespace app {
namespace Uno {
namespace Platform2 {

inline ::app::Uno::Rect Display::Frame() { return Display__get_Frame(this); }
inline void Display::Frame(::app::Uno::Rect value) { Display__set_Frame(this, value); }

}}}


#endif
