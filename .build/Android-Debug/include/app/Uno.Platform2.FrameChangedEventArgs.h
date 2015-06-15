// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Platform2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_PLATFORM2_FRAME_CHANGED_EVENT_ARGS_H__
#define __APP_UNO_PLATFORM2_FRAME_CHANGED_EVENT_ARGS_H__

#include <app/Uno.EventArgs.h>
#include <app/Uno.Rect.h>
#include <Uno/Uno.h>

namespace app {
namespace Uno {
namespace Platform2 {

struct FrameChangedEventArgs;

struct FrameChangedEventArgs__uType : ::app::Uno::EventArgs__uType
{
};

FrameChangedEventArgs__uType* FrameChangedEventArgs__typeof();

::app::Uno::Rect FrameChangedEventArgs__get_NewFrame(FrameChangedEventArgs* __this);
void FrameChangedEventArgs__set_NewFrame(FrameChangedEventArgs* __this, ::app::Uno::Rect value);
void FrameChangedEventArgs___ObjInit_1(FrameChangedEventArgs* __this, ::app::Uno::Rect newFrame);
FrameChangedEventArgs* FrameChangedEventArgs__New_2(::uStatic* __this, ::app::Uno::Rect newFrame);

struct FrameChangedEventArgs : ::app::Uno::EventArgs
{
    ::app::Uno::Rect _NewFrame;

    void _ObjInit_1(::app::Uno::Rect newFrame) { FrameChangedEventArgs___ObjInit_1(this, newFrame); }
    ::app::Uno::Rect NewFrame() { return FrameChangedEventArgs__get_NewFrame(this); }
    void NewFrame(::app::Uno::Rect value) { FrameChangedEventArgs__set_NewFrame(this, value); }
};

}}}


#endif
