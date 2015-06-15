// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Platform2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_PLATFORM2_GRAPHICS_VIEW_H__
#define __APP_UNO_PLATFORM2_GRAPHICS_VIEW_H__

#include <app/Uno.Platform2.View.h>
#include <Uno/Platform2.h>
#include <Uno/Uno.h>
namespace app { namespace Uno { namespace Platform2 { struct TimerEventArgs; } } }

namespace app {
namespace Uno {
namespace Platform2 {

struct GraphicsView;

struct GraphicsView__uType : ::app::Uno::Platform2::View__uType
{
};

GraphicsView__uType* GraphicsView__typeof();

void GraphicsView__Finalize(GraphicsView* __this);
bool GraphicsView__get_IsRendering(GraphicsView* __this);
void GraphicsView__set_IsRendering(GraphicsView* __this, bool value);
void GraphicsView__Initialize(GraphicsView* __this);
void GraphicsView__Destroy(GraphicsView* __this);
void GraphicsView__ResumeRendering(GraphicsView* __this);
void GraphicsView__PauseRendering(GraphicsView* __this);
void GraphicsView__SetIsRendering(GraphicsView* __this, bool __rendering);
void GraphicsView__OnWillResumeRendering(GraphicsView* __this);
void GraphicsView__OnDidPauseRendering(GraphicsView* __this);
void GraphicsView__OnIsRenderingChanged(GraphicsView* __this);
void GraphicsView__SubscribeToDisplayTick(GraphicsView* __this);
void GraphicsView__UnsubscribeFromDisplayTick(GraphicsView* __this);
void GraphicsView__AboutToShow(GraphicsView* __this);
void GraphicsView__AboutToHide(GraphicsView* __this);
void GraphicsView__OnFrameChanged(GraphicsView* __this);
void GraphicsView___FrameDidChange(GraphicsView* __this);
void GraphicsView__OnUpdate(GraphicsView* __this, ::uObject* sender, ::app::Uno::Platform2::TimerEventArgs* args);
void GraphicsView__OnDraw(GraphicsView* __this, ::uObject* sender, ::app::Uno::Platform2::TimerEventArgs* args);
void GraphicsView__AboutToDrawFrame(GraphicsView* __this);
void GraphicsView__DidDrawFrame(GraphicsView* __this);
void GraphicsView___ObjInit_1(GraphicsView* __this);
GraphicsView* GraphicsView__New_2(::uStatic* __this);
void GraphicsView__add_Draw(GraphicsView* __this, ::uDelegate* value);
void GraphicsView__remove_Draw(GraphicsView* __this, ::uDelegate* value);
void GraphicsView__add_Update(GraphicsView* __this, ::uDelegate* value);

struct GraphicsView : ::app::Uno::Platform2::View
{
    uPlatform2::GraphicsView _private_1;
    bool _isRendering;
    bool _willResumeRenderingTriggered;
    ::uStrong< ::uDelegate*> Draw;
    ::uStrong< ::uDelegate*> Update;
    ::uStrong< ::uDelegate*> WillResumeRendering;
    ::uStrong< ::uDelegate*> DidPauseRendering;
    ::uStrong< ::uDelegate*> IsRenderingChanged;

    void Initialize() { GraphicsView__Initialize(this); }
    void Destroy() { GraphicsView__Destroy(this); }
    void ResumeRendering() { GraphicsView__ResumeRendering(this); }
    void PauseRendering() { GraphicsView__PauseRendering(this); }
    void SetIsRendering(bool __rendering) { GraphicsView__SetIsRendering(this, __rendering); }
    void OnWillResumeRendering() { GraphicsView__OnWillResumeRendering(this); }
    void OnDidPauseRendering() { GraphicsView__OnDidPauseRendering(this); }
    void OnIsRenderingChanged() { GraphicsView__OnIsRenderingChanged(this); }
    void SubscribeToDisplayTick() { GraphicsView__SubscribeToDisplayTick(this); }
    void UnsubscribeFromDisplayTick() { GraphicsView__UnsubscribeFromDisplayTick(this); }
    void _FrameDidChange() { GraphicsView___FrameDidChange(this); }
    void OnUpdate(::uObject* sender, ::app::Uno::Platform2::TimerEventArgs* args) { GraphicsView__OnUpdate(this, sender, args); }
    void OnDraw(::uObject* sender, ::app::Uno::Platform2::TimerEventArgs* args) { GraphicsView__OnDraw(this, sender, args); }
    void AboutToDrawFrame() { GraphicsView__AboutToDrawFrame(this); }
    void DidDrawFrame() { GraphicsView__DidDrawFrame(this); }
    void _ObjInit_1() { GraphicsView___ObjInit_1(this); }
    void add_Draw(::uDelegate* value) { GraphicsView__add_Draw(this, value); }
    void remove_Draw(::uDelegate* value) { GraphicsView__remove_Draw(this, value); }
    void add_Update(::uDelegate* value) { GraphicsView__add_Update(this, value); }
    bool IsRendering() { return GraphicsView__get_IsRendering(this); }
    void IsRendering(bool value) { GraphicsView__set_IsRendering(this, value); }
};

}}}

#include <app/Uno.Bool.h>

namespace app {
namespace Uno {
namespace Platform2 {

}}}


#endif
