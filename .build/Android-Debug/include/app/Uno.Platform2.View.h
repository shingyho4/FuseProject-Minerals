// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Platform2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_PLATFORM2_VIEW_H__
#define __APP_UNO_PLATFORM2_VIEW_H__

#include <app/Uno.Object.h>
#include <app/Uno.Rect.h>
#include <Uno/Platform2.h>
#include <Uno/Uno.h>
namespace app { namespace Uno { namespace Platform2 { struct TouchEventArgs; } } }
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Uno {
namespace Platform2 {

struct View;

struct View__uType : ::uClassType
{
    void(*__fp_ResetStateOnHandleChanged)(View*);
    void(*__fp_AboutToShow)(View*);
    void(*__fp_AboutToHide)(View*);
    void(*__fp_OnFrameChanged)(View*);
};

View__uType* View__typeof();

void View__Finalize(View* __this);
uPlatform2::ViewNativeHandle View__get_Handle(View* __this);
void View__set_Handle(View* __this, uPlatform2::ViewNativeHandle value);
bool View__get_IsVisible(View* __this);
void View__set_IsVisible(View* __this, bool value);
bool View__get_IsEnabled(View* __this);
void View__set_IsEnabled(View* __this, bool value);
::app::Uno::Rect View__get_Frame(View* __this);
void View__set_Frame(View* __this, ::app::Uno::Rect value);
void View__ResetStateOnHandleChanged(View* __this);
void View__OnHandleChanged(View* __this);
void View__OnHandleReady(View* __this);
uPlatform2::ViewNativeHandle View__AttachHandle(View* __this, uPlatform2::ViewNativeHandle __handle);
void View__DetachHandle(View* __this, uPlatform2::ViewNativeHandle __handle);
void View__SetIsVisible(View* __this, bool __visible);
void View__AboutToShow(View* __this);
void View__AboutToHide(View* __this);
void View__OnWillShow(View* __this);
void View__OnWillHide(View* __this);
void View__OnIsVisibleChanged(View* __this);
void View__OnIsEnabledChanged(View* __this);
void View__SetIsEnabled(View* __this, bool __isEnabled);
void View__OnFrameChanged(View* __this);
void View__SetFrame(View* __this, ::app::Uno::Rect __frame);
::app::Uno::Float2 View__GetContentSize(View* __this, ::app::Uno::Float2 fillSize, int flags);
::app::Uno::Float2 View___GetContentSize(View* __this, ::app::Uno::Float2 __fillSize, int __flags);
void View__OnTouchDown(View* __this, ::app::Uno::Platform2::TouchEventArgs* args);
void View__OnTouchMove(View* __this, ::app::Uno::Platform2::TouchEventArgs* args);
void View__OnTouchUp(View* __this, ::app::Uno::Platform2::TouchEventArgs* args);
void View__OnTouchCancel(View* __this, ::app::Uno::Platform2::TouchEventArgs* args);
void View___ObjInit(View* __this);
void View__add_HandleReady(View* __this, ::uDelegate* value);
void View__remove_HandleReady(View* __this, ::uDelegate* value);
void View__add_FrameChanged(View* __this, ::uDelegate* value);
void View__add_TouchDown(View* __this, ::uDelegate* value);
void View__add_TouchMove(View* __this, ::uDelegate* value);
void View__add_TouchUp(View* __this, ::uDelegate* value);
void View__add__handleReady(View* __this, ::uDelegate* value);
void View__remove__handleReady(View* __this, ::uDelegate* value);

struct View : ::uObject
{
    uPlatform2::View _private;
    uPlatform2::ViewNativeHandle _handle;
    bool _isVisible;
    bool _willShowTriggered;
    bool _isEnabled;
    bool _isFocusable;
    ::app::Uno::Rect _frame;
    ::uStrong< ::uDelegate*> FrameChanged;
    ::uStrong< ::uDelegate*> TouchDown;
    ::uStrong< ::uDelegate*> TouchMove;
    ::uStrong< ::uDelegate*> TouchUp;
    ::uStrong< ::uDelegate*> HandleChanged;
    ::uStrong< ::uDelegate*> _handleReady;
    ::uStrong< ::uDelegate*> WillShow;
    ::uStrong< ::uDelegate*> WillHide;
    ::uStrong< ::uDelegate*> IsVisibleChanged;
    ::uStrong< ::uDelegate*> IsEnabledChanged;
    ::uStrong< ::uDelegate*> TouchCancel;

    void ResetStateOnHandleChanged() { (((View__uType*)this->__obj_type)->__fp_ResetStateOnHandleChanged)(this); }
    void OnHandleChanged() { View__OnHandleChanged(this); }
    void OnHandleReady() { View__OnHandleReady(this); }
    uPlatform2::ViewNativeHandle AttachHandle(uPlatform2::ViewNativeHandle __handle) { return View__AttachHandle(this, __handle); }
    void DetachHandle(uPlatform2::ViewNativeHandle __handle) { View__DetachHandle(this, __handle); }
    void SetIsVisible(bool __visible) { View__SetIsVisible(this, __visible); }
    void AboutToShow() { (((View__uType*)this->__obj_type)->__fp_AboutToShow)(this); }
    void AboutToHide() { (((View__uType*)this->__obj_type)->__fp_AboutToHide)(this); }
    void OnWillShow() { View__OnWillShow(this); }
    void OnWillHide() { View__OnWillHide(this); }
    void OnIsVisibleChanged() { View__OnIsVisibleChanged(this); }
    void OnIsEnabledChanged() { View__OnIsEnabledChanged(this); }
    void SetIsEnabled(bool __isEnabled) { View__SetIsEnabled(this, __isEnabled); }
    void OnFrameChanged() { (((View__uType*)this->__obj_type)->__fp_OnFrameChanged)(this); }
    void SetFrame(::app::Uno::Rect __frame);
    ::app::Uno::Float2 GetContentSize(::app::Uno::Float2 fillSize, int flags);
    ::app::Uno::Float2 _GetContentSize(::app::Uno::Float2 __fillSize, int __flags);
    void OnTouchDown(::app::Uno::Platform2::TouchEventArgs* args) { View__OnTouchDown(this, args); }
    void OnTouchMove(::app::Uno::Platform2::TouchEventArgs* args) { View__OnTouchMove(this, args); }
    void OnTouchUp(::app::Uno::Platform2::TouchEventArgs* args) { View__OnTouchUp(this, args); }
    void OnTouchCancel(::app::Uno::Platform2::TouchEventArgs* args) { View__OnTouchCancel(this, args); }
    void _ObjInit() { View___ObjInit(this); }
    void add_HandleReady(::uDelegate* value) { View__add_HandleReady(this, value); }
    void remove_HandleReady(::uDelegate* value) { View__remove_HandleReady(this, value); }
    void add_FrameChanged(::uDelegate* value) { View__add_FrameChanged(this, value); }
    void add_TouchDown(::uDelegate* value) { View__add_TouchDown(this, value); }
    void add_TouchMove(::uDelegate* value) { View__add_TouchMove(this, value); }
    void add_TouchUp(::uDelegate* value) { View__add_TouchUp(this, value); }
    void add__handleReady(::uDelegate* value) { View__add__handleReady(this, value); }
    void remove__handleReady(::uDelegate* value) { View__remove__handleReady(this, value); }
    uPlatform2::ViewNativeHandle Handle() { return View__get_Handle(this); }
    void Handle(uPlatform2::ViewNativeHandle value) { View__set_Handle(this, value); }
    bool IsVisible() { return View__get_IsVisible(this); }
    void IsVisible(bool value) { View__set_IsVisible(this, value); }
    bool IsEnabled() { return View__get_IsEnabled(this); }
    void IsEnabled(bool value) { View__set_IsEnabled(this, value); }
    ::app::Uno::Rect Frame();
    void Frame(::app::Uno::Rect value);
};

}}}

#include <app/Uno.Bool.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Platform2.ViewNativeHandle.h>

namespace app {
namespace Uno {
namespace Platform2 {

inline void View::SetFrame(::app::Uno::Rect __frame) { View__SetFrame(this, __frame); }
inline ::app::Uno::Float2 View::GetContentSize(::app::Uno::Float2 fillSize, int flags) { return View__GetContentSize(this, fillSize, flags); }
inline ::app::Uno::Float2 View::_GetContentSize(::app::Uno::Float2 __fillSize, int __flags) { return View___GetContentSize(this, __fillSize, __flags); }
inline ::app::Uno::Rect View::Frame() { return View__get_Frame(this); }
inline void View::Frame(::app::Uno::Rect value) { View__set_Frame(this, value); }

}}}


#endif
