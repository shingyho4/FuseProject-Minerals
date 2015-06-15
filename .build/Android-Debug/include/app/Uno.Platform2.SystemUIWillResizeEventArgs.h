// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Platform2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_PLATFORM2_SYSTEM_U_I_WILL_RESIZE_EVENT_ARGS_H__
#define __APP_UNO_PLATFORM2_SYSTEM_U_I_WILL_RESIZE_EVENT_ARGS_H__

#include <app/Uno.EventArgs.h>
#include <app/Uno.Rect.h>
#include <Uno/Uno.h>

namespace app {
namespace Uno {
namespace Platform2 {

struct SystemUIWillResizeEventArgs;

struct SystemUIWillResizeEventArgs__uType : ::app::Uno::EventArgs__uType
{
};

SystemUIWillResizeEventArgs__uType* SystemUIWillResizeEventArgs__typeof();

int SystemUIWillResizeEventArgs__get_ID(SystemUIWillResizeEventArgs* __this);
void SystemUIWillResizeEventArgs__set_ID(SystemUIWillResizeEventArgs* __this, int value);
int SystemUIWillResizeEventArgs__get_ResizeReason(SystemUIWillResizeEventArgs* __this);
void SystemUIWillResizeEventArgs__set_ResizeReason(SystemUIWillResizeEventArgs* __this, int value);
::app::Uno::Rect SystemUIWillResizeEventArgs__get_StartFrame(SystemUIWillResizeEventArgs* __this);
void SystemUIWillResizeEventArgs__set_StartFrame(SystemUIWillResizeEventArgs* __this, ::app::Uno::Rect value);
::app::Uno::Rect SystemUIWillResizeEventArgs__get_EndFrame(SystemUIWillResizeEventArgs* __this);
void SystemUIWillResizeEventArgs__set_EndFrame(SystemUIWillResizeEventArgs* __this, ::app::Uno::Rect value);
bool SystemUIWillResizeEventArgs__get_IsAnimated(SystemUIWillResizeEventArgs* __this);
void SystemUIWillResizeEventArgs__set_IsAnimated(SystemUIWillResizeEventArgs* __this, bool value);
double SystemUIWillResizeEventArgs__get_AnimationDuration(SystemUIWillResizeEventArgs* __this);
void SystemUIWillResizeEventArgs__set_AnimationDuration(SystemUIWillResizeEventArgs* __this, double value);
int SystemUIWillResizeEventArgs__get_AnimationCurve(SystemUIWillResizeEventArgs* __this);
void SystemUIWillResizeEventArgs__set_AnimationCurve(SystemUIWillResizeEventArgs* __this, int value);
void SystemUIWillResizeEventArgs___ObjInit_1(SystemUIWillResizeEventArgs* __this, int id, int resizeReason, ::app::Uno::Rect endFrame, ::app::Uno::Rect startFrame, double animationDuration, int animationCurve);
SystemUIWillResizeEventArgs* SystemUIWillResizeEventArgs__New_2(::uStatic* __this, int id, int resizeReason, ::app::Uno::Rect endFrame, ::app::Uno::Rect startFrame, double animationDuration, int animationCurve);

struct SystemUIWillResizeEventArgs : ::app::Uno::EventArgs
{
    int _ID;
    int _ResizeReason;
    ::app::Uno::Rect _StartFrame;
    ::app::Uno::Rect _EndFrame;
    bool _IsAnimated;
    double _AnimationDuration;
    int _AnimationCurve;

    void _ObjInit_1(int id, int resizeReason, ::app::Uno::Rect endFrame, ::app::Uno::Rect startFrame, double animationDuration, int animationCurve);
    int ID() { return SystemUIWillResizeEventArgs__get_ID(this); }
    void ID(int value) { SystemUIWillResizeEventArgs__set_ID(this, value); }
    int ResizeReason() { return SystemUIWillResizeEventArgs__get_ResizeReason(this); }
    void ResizeReason(int value) { SystemUIWillResizeEventArgs__set_ResizeReason(this, value); }
    ::app::Uno::Rect StartFrame();
    void StartFrame(::app::Uno::Rect value);
    ::app::Uno::Rect EndFrame();
    void EndFrame(::app::Uno::Rect value);
    bool IsAnimated() { return SystemUIWillResizeEventArgs__get_IsAnimated(this); }
    void IsAnimated(bool value) { SystemUIWillResizeEventArgs__set_IsAnimated(this, value); }
    double AnimationDuration() { return SystemUIWillResizeEventArgs__get_AnimationDuration(this); }
    void AnimationDuration(double value) { SystemUIWillResizeEventArgs__set_AnimationDuration(this, value); }
    int AnimationCurve() { return SystemUIWillResizeEventArgs__get_AnimationCurve(this); }
    void AnimationCurve(int value) { SystemUIWillResizeEventArgs__set_AnimationCurve(this, value); }
};

}}}

#include <app/Uno.Bool.h>
#include <app/Uno.Double.h>
#include <app/Uno.Int.h>

namespace app {
namespace Uno {
namespace Platform2 {

inline void SystemUIWillResizeEventArgs::_ObjInit_1(int id, int resizeReason, ::app::Uno::Rect endFrame, ::app::Uno::Rect startFrame, double animationDuration, int animationCurve) { SystemUIWillResizeEventArgs___ObjInit_1(this, id, resizeReason, endFrame, startFrame, animationDuration, animationCurve); }
inline ::app::Uno::Rect SystemUIWillResizeEventArgs::StartFrame() { return SystemUIWillResizeEventArgs__get_StartFrame(this); }
inline void SystemUIWillResizeEventArgs::StartFrame(::app::Uno::Rect value) { SystemUIWillResizeEventArgs__set_StartFrame(this, value); }
inline ::app::Uno::Rect SystemUIWillResizeEventArgs::EndFrame() { return SystemUIWillResizeEventArgs__get_EndFrame(this); }
inline void SystemUIWillResizeEventArgs::EndFrame(::app::Uno::Rect value) { SystemUIWillResizeEventArgs__set_EndFrame(this, value); }

}}}


#endif
