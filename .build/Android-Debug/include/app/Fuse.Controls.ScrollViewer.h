// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CONTROLS_SCROLL_VIEWER_H__
#define __APP_FUSE_CONTROLS_SCROLL_VIEWER_H__

#include <app/Fuse.Controls.Control.h>
#include <app/Fuse.Controls.Internal.ICollectionParent.h>
#include <app/Fuse.Gestures.IScrollable.h>
#include <app/Fuse.IActualSize.h>
#include <app/Fuse.INodeParent.h>
#include <app/Fuse.IResourceParent.h>
#include <app/Fuse.Triggers.Actions.ICollapse.h>
#include <app/Fuse.Triggers.Actions.IHide.h>
#include <app/Fuse.Triggers.Actions.IShow.h>
#include <app/Uno.Float2.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Elements { struct Element; } } }
namespace app { namespace Fuse { namespace Gestures { struct KeepFocusInView; } } }
namespace app { namespace Fuse { namespace Gestures { struct Scroller; } } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Fuse { struct Translation; } }

namespace app {
namespace Fuse {
namespace Controls {

struct ScrollViewer;

struct ScrollViewer__uType : ::app::Fuse::Controls::Control__uType
{
    ::app::Fuse::Gestures::IScrollable __interface_7;
};

ScrollViewer__uType* ScrollViewer__typeof();

::app::Fuse::Elements::Element* ScrollViewer__get_Content(ScrollViewer* __this);
void ScrollViewer__set_Content(ScrollViewer* __this, ::app::Fuse::Elements::Element* value);
int ScrollViewer__get_AllowedScrollDirections(ScrollViewer* __this);
void ScrollViewer__set_AllowedScrollDirections(ScrollViewer* __this, int value);
::app::Uno::Float2 ScrollViewer__get_ScrollPosition(ScrollViewer* __this);
void ScrollViewer__set_ScrollPosition(ScrollViewer* __this, ::app::Uno::Float2 value);
bool ScrollViewer__get_AutoAdjustScrollRange(ScrollViewer* __this);
void ScrollViewer__set_AutoAdjustScrollRange(ScrollViewer* __this, bool value);
::app::Uno::Float2 ScrollViewer__get_MaxScroll(ScrollViewer* __this);
::app::Uno::Float2 ScrollViewer__get_MinScroll(ScrollViewer* __this);
void ScrollViewer__OnContentChanged(ScrollViewer* __this, ::app::Fuse::Elements::Element* oldContent, ::app::Fuse::Elements::Element* newContent);
void ScrollViewer__UpdateBehaviors(ScrollViewer* __this);
::app::Uno::Float2 ScrollViewer__GetNodeScrollPosition(ScrollViewer* __this, ::app::Fuse::Node* n);
void ScrollViewer__Goto(ScrollViewer* __this, ::app::Uno::Float2 position);
void ScrollViewer__OnScrollPositionChanged(ScrollViewer* __this);
::app::Uno::Float2 ScrollViewer__ConstrainExtent(ScrollViewer* __this, ::app::Uno::Float2 t);
void ScrollViewer__ArrangePaddingBox(ScrollViewer* __this, ::app::Uno::Float2 size);
::app::Uno::Float2 ScrollViewer__GetContentSize(ScrollViewer* __this, ::app::Uno::Float2 fillSize, int fillSet);
void ScrollViewer__OnApplyStyle(ScrollViewer* __this, ::uObject* target);
void ScrollViewer___ObjInit_3(ScrollViewer* __this);
ScrollViewer* ScrollViewer__New_1(::uStatic* __this);

struct ScrollViewer : ::app::Fuse::Controls::Control
{
    int _behavior;
    ::uStrong< ::app::Fuse::Gestures::Scroller*> _scroller;
    ::uStrong< ::app::Fuse::Gestures::KeepFocusInView*> _keepFocusInView;
    int allowedScrollDirections;
    ::uStrong< ::app::Fuse::Translation*> _scrollTranslation;
    ::app::Uno::Float2 scrollPos;
    bool _autoAdjustScrollRange;
    ::app::Uno::Float2 _cacheContentMarginSize;
    ::uStrong< ::uDelegate*> ScrollPositionChanged;

    void OnContentChanged(::app::Fuse::Elements::Element* oldContent, ::app::Fuse::Elements::Element* newContent) { ScrollViewer__OnContentChanged(this, oldContent, newContent); }
    void UpdateBehaviors() { ScrollViewer__UpdateBehaviors(this); }
    ::app::Uno::Float2 GetNodeScrollPosition(::app::Fuse::Node* n);
    void Goto(::app::Uno::Float2 position);
    void OnScrollPositionChanged() { ScrollViewer__OnScrollPositionChanged(this); }
    ::app::Uno::Float2 ConstrainExtent(::app::Uno::Float2 t);
    void _ObjInit_3() { ScrollViewer___ObjInit_3(this); }
    ::app::Fuse::Elements::Element* Content() { return ScrollViewer__get_Content(this); }
    void Content(::app::Fuse::Elements::Element* value) { ScrollViewer__set_Content(this, value); }
    int AllowedScrollDirections() { return ScrollViewer__get_AllowedScrollDirections(this); }
    void AllowedScrollDirections(int value) { ScrollViewer__set_AllowedScrollDirections(this, value); }
    ::app::Uno::Float2 ScrollPosition();
    void ScrollPosition(::app::Uno::Float2 value);
    bool AutoAdjustScrollRange() { return ScrollViewer__get_AutoAdjustScrollRange(this); }
    void AutoAdjustScrollRange(bool value) { ScrollViewer__set_AutoAdjustScrollRange(this, value); }
    ::app::Uno::Float2 MaxScroll();
    ::app::Uno::Float2 MinScroll();
};

}}}

#include <app/Uno.Bool.h>

namespace app {
namespace Fuse {
namespace Controls {

inline ::app::Uno::Float2 ScrollViewer::GetNodeScrollPosition(::app::Fuse::Node* n) { return ScrollViewer__GetNodeScrollPosition(this, n); }
inline void ScrollViewer::Goto(::app::Uno::Float2 position) { ScrollViewer__Goto(this, position); }
inline ::app::Uno::Float2 ScrollViewer::ConstrainExtent(::app::Uno::Float2 t) { return ScrollViewer__ConstrainExtent(this, t); }
inline ::app::Uno::Float2 ScrollViewer::ScrollPosition() { return ScrollViewer__get_ScrollPosition(this); }
inline void ScrollViewer::ScrollPosition(::app::Uno::Float2 value) { ScrollViewer__set_ScrollPosition(this, value); }
inline ::app::Uno::Float2 ScrollViewer::MaxScroll() { return ScrollViewer__get_MaxScroll(this); }
inline ::app::Uno::Float2 ScrollViewer::MinScroll() { return ScrollViewer__get_MinScroll(this); }

}}}


#endif
