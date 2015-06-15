// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CONTROLS_CONTROL_H__
#define __APP_FUSE_CONTROLS_CONTROL_H__

#include <app/Fuse.Controls.Internal.ICollectionParent.h>
#include <app/Fuse.Elements.Element.h>
#include <app/Fuse.IActualSize.h>
#include <app/Fuse.INodeParent.h>
#include <app/Fuse.IResourceParent.h>
#include <app/Fuse.Triggers.Actions.ICollapse.h>
#include <app/Fuse.Triggers.Actions.IHide.h>
#include <app/Fuse.Triggers.Actions.IShow.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Controls { namespace Internal { struct ChildCollection; } } } }
namespace app { namespace Fuse { namespace Drawing { struct Brush; } } }
namespace app { namespace Fuse { struct DrawContext; } }
namespace app { namespace Fuse { struct HitTestContext; } }
namespace app { namespace Fuse { struct PropertyHandle; } }
namespace app { namespace Uno { struct Float2; } }
namespace app { namespace Uno { struct Rect; } }

namespace app {
namespace Fuse {
namespace Controls {

struct Control;

extern ::uStaticStrong< ::app::Fuse::PropertyHandle*> Control___overlaysProperty;

struct Control__uType : ::app::Fuse::Elements::Element__uType
{
    ::app::Fuse::Controls::Internal::ICollectionParent __interface_6;
    void(*__fp_OnCollectionChildAdded)(Control*, ::uObject*, ::app::Fuse::Elements::Element*);
    void(*__fp_OnCollectionChildRemoved)(Control*, ::uObject*, ::app::Fuse::Elements::Element*);
    ::app::Uno::Rect(*__fp_CalcRenderBounds_1)(Control*, ::app::Uno::Rect);
    void(*__fp_OnDrawControl)(Control*, ::app::Fuse::DrawContext*);
    void(*__fp_OnHitTestControlChildren)(Control*, ::app::Fuse::HitTestContext*);
};

Control__uType* Control__typeof();

::app::Fuse::Drawing::Brush* Control__get_Background(Control* __this);
void Control__set_Background(Control* __this, ::app::Fuse::Drawing::Brush* value);
bool Control__get_HasOverlays(Control* __this);
::uObject* Control__get_Overlays(Control* __this);
::app::Fuse::Controls::Internal::ChildCollection* Control__get_InternalOverlays(Control* __this);
bool Control__get_IsRedrawCheap(Control* __this);
::app::Fuse::Elements::Element* Control__get_Appearance(Control* __this);
void Control__set_Appearance(Control* __this, ::app::Fuse::Elements::Element* value);
::app::Fuse::Elements::Element* Control__get_VisualTree(Control* __this);
void Control__set_VisualTree(Control* __this, ::app::Fuse::Elements::Element* value);
bool Control__get_IsVisualTreeHitable(Control* __this);
int Control__get_SubElementCount(Control* __this);
void Control__OnShadingChanged(Control* __this);
void Control__DrawBackground(Control* __this, ::app::Fuse::DrawContext* dc);
void Control__OnCollectionChildAdded(Control* __this, ::uObject* where, ::app::Fuse::Elements::Element* elm);
void Control__OnCollectionChildRemoved(Control* __this, ::uObject* where, ::app::Fuse::Elements::Element* elm);
void Control__OnResetStyle(Control* __this);
void Control__SetAppearanceInternal(Control* __this, ::app::Fuse::Elements::Element* elm);
void Control__OnAppearanceChanged(Control* __this);
void Control__ResetAppearance(Control* __this);
void Control__SetStyleAppearance(Control* __this, ::app::Fuse::Elements::Element* appearance);
void Control__SetVisualTree(Control* __this, ::app::Fuse::Elements::Element* newVisualTree);
void Control__OnVisualTreeChanged(Control* __this);
::app::Uno::Rect Control__CalcRenderBounds(Control* __this);
::app::Uno::Rect Control__CalcRenderBounds_1(Control* __this, ::app::Uno::Rect baseRect);
void Control__OnDraw(Control* __this, ::app::Fuse::DrawContext* dc);
void Control__OnDrawControl(Control* __this, ::app::Fuse::DrawContext* dc);
::app::Uno::Float2 Control__GetContentSize(Control* __this, ::app::Uno::Float2 fillSize, int fillSet);
void Control__ArrangePaddingBox(Control* __this, ::app::Uno::Float2 size);
void Control__ArrangeVisualTree(Control* __this, ::app::Uno::Float2 size);
void Control__OnHitTestLocalVisual(Control* __this, ::app::Fuse::HitTestContext* htc);
void Control__OnHitTestChildren(Control* __this, ::app::Fuse::HitTestContext* htc);
void Control__OnHitTestControlChildren(Control* __this, ::app::Fuse::HitTestContext* htc);
::app::Fuse::Elements::Element* Control__GetSubElement(Control* __this, int index);
void Control___TypeInit_2(::uStatic* __this);
void Control___ObjInit_2(Control* __this);

struct Control : ::app::Fuse::Elements::Element
{
    ::uStrong< ::app::Fuse::Drawing::Brush*> _background;
    int _controlPropertyBits;
    ::uStrong< ::app::Fuse::Elements::Element*> _appearance;
    int _appearanceState;
    ::uStrong< ::app::Fuse::Elements::Element*> _visualTree;

    void OnShadingChanged() { Control__OnShadingChanged(this); }
    void DrawBackground(::app::Fuse::DrawContext* dc) { Control__DrawBackground(this, dc); }
    void OnCollectionChildAdded(::uObject* where, ::app::Fuse::Elements::Element* elm) { (((Control__uType*)this->__obj_type)->__fp_OnCollectionChildAdded)(this, where, elm); }
    void OnCollectionChildRemoved(::uObject* where, ::app::Fuse::Elements::Element* elm) { (((Control__uType*)this->__obj_type)->__fp_OnCollectionChildRemoved)(this, where, elm); }
    void SetAppearanceInternal(::app::Fuse::Elements::Element* elm) { Control__SetAppearanceInternal(this, elm); }
    void OnAppearanceChanged() { Control__OnAppearanceChanged(this); }
    void ResetAppearance() { Control__ResetAppearance(this); }
    void SetStyleAppearance(::app::Fuse::Elements::Element* appearance) { Control__SetStyleAppearance(this, appearance); }
    void SetVisualTree(::app::Fuse::Elements::Element* newVisualTree) { Control__SetVisualTree(this, newVisualTree); }
    void OnVisualTreeChanged() { Control__OnVisualTreeChanged(this); }
    ::app::Uno::Rect CalcRenderBounds_1(::app::Uno::Rect baseRect);
    void OnDrawControl(::app::Fuse::DrawContext* dc) { (((Control__uType*)this->__obj_type)->__fp_OnDrawControl)(this, dc); }
    void ArrangeVisualTree(::app::Uno::Float2 size);
    void OnHitTestControlChildren(::app::Fuse::HitTestContext* htc) { (((Control__uType*)this->__obj_type)->__fp_OnHitTestControlChildren)(this, htc); }
    void _ObjInit_2() { Control___ObjInit_2(this); }
    ::app::Fuse::Drawing::Brush* Background() { return Control__get_Background(this); }
    void Background(::app::Fuse::Drawing::Brush* value) { Control__set_Background(this, value); }
    bool HasOverlays() { return Control__get_HasOverlays(this); }
    ::uObject* Overlays() { return Control__get_Overlays(this); }
    ::app::Fuse::Controls::Internal::ChildCollection* InternalOverlays() { return Control__get_InternalOverlays(this); }
    ::app::Fuse::Elements::Element* Appearance() { return Control__get_Appearance(this); }
    void Appearance(::app::Fuse::Elements::Element* value) { Control__set_Appearance(this, value); }
    ::app::Fuse::Elements::Element* VisualTree() { return Control__get_VisualTree(this); }
    void VisualTree(::app::Fuse::Elements::Element* value) { Control__set_VisualTree(this, value); }
    bool IsVisualTreeHitable() { return Control__get_IsVisualTreeHitable(this); }
};

}}}

#include <app/Uno.Bool.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Int.h>
#include <app/Uno.Rect.h>

namespace app {
namespace Fuse {
namespace Controls {

inline ::app::Uno::Rect Control::CalcRenderBounds_1(::app::Uno::Rect baseRect) { return (((Control__uType*)this->__obj_type)->__fp_CalcRenderBounds_1)(this, baseRect); }
inline void Control::ArrangeVisualTree(::app::Uno::Float2 size) { Control__ArrangeVisualTree(this, size); }

}}}


#endif
