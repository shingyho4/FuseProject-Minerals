// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ELEMENTS_ELEMENT_H__
#define __APP_FUSE_ELEMENTS_ELEMENT_H__

#include <app/Fuse.Elements.Element_GMSCacheItem.h>
#include <app/Fuse.IActualSize.h>
#include <app/Fuse.INodeParent.h>
#include <app/Fuse.IResourceParent.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.Triggers.Actions.ICollapse.h>
#include <app/Fuse.Triggers.Actions.IHide.h>
#include <app/Fuse.Triggers.Actions.IShow.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Float4.h>
#include <app/Uno.Rect.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Effects { struct Effect; } } }
namespace app { namespace Fuse { namespace Elements { struct Cache; } } }
namespace app { namespace Fuse { struct DrawContext; } }
namespace app { namespace Fuse { struct FastMatrix; } }
namespace app { namespace Fuse { struct Font; } }
namespace app { namespace Fuse { struct HitTestContext; } }
namespace app { namespace Fuse { struct PropertyHandle; } }
namespace app { namespace Uno { namespace Collections { struct ObservableList__Fuse_Effects_Effect; } } }
namespace app { namespace Uno { namespace Graphics { struct Framebuffer; } } }
namespace app { namespace Uno { struct Float3; } }
namespace app { namespace Uno { struct Recti; } }

namespace app {
namespace Fuse {
namespace Elements {

struct Element;

extern ::uStaticStrong< ::app::Fuse::PropertyHandle*> Element___minWidthHandle;
extern ::uStaticStrong< ::app::Fuse::PropertyHandle*> Element___minHeightHandle;
extern ::uStaticStrong< ::app::Fuse::PropertyHandle*> Element___maxWidthHandle;
extern ::uStaticStrong< ::app::Fuse::PropertyHandle*> Element___maxHeightHandle;
extern bool Element___performingLayout;

struct Element__uType : ::app::Fuse::Node__uType
{
    ::app::Fuse::Triggers::Actions::IShow __interface_2;
    ::app::Fuse::Triggers::Actions::IHide __interface_3;
    ::app::Fuse::Triggers::Actions::ICollapse __interface_4;
    ::app::Fuse::IActualSize __interface_5;
    ::app::Uno::Rect(*__fp_CalcRenderBounds)(Element*);
    void(*__fp_OnDraw)(Element*, ::app::Fuse::DrawContext*);
    void(*__fp_OnHitTestLocalVisual)(Element*, ::app::Fuse::HitTestContext*);
    void(*__fp_OnHitTestChildren)(Element*, ::app::Fuse::HitTestContext*);
    ::app::Uno::Float2(*__fp_GetContentSize)(Element*, ::app::Uno::Float2, int);
    void(*__fp_OnPlaced)(Element*, ::app::Uno::Float2);
    void(*__fp_OnResized)(Element*, ::app::Uno::Float2);
    void(*__fp_ArrangePaddingBox)(Element*, ::app::Uno::Float2);
    Element*(*__fp_GetSubElement)(Element*, int);
    void(*__fp_OnTextColorChanged)(Element*);
    void(*__fp_OnFontChanged)(Element*);
    void(*__fp_OnFontSizeChanged)(Element*);
    void(*__fp_OnTextAlignmentChanged)(Element*);
    bool(*__fp_get_IsRedrawCheap)(Element*);
    int(*__fp_get_SubElementCount)(Element*);
};

Element__uType* Element__typeof();

::app::Uno::Rect Element__get_RenderBoundsWithEffects(Element* __this);
bool Element__get_NeedsClipping(Element* __this);
::app::Uno::Rect Element__get_RenderBounds(Element* __this);
::app::Uno::Rect Element__get_Bounds(Element* __this);
bool Element__get_IsRedrawCheap(Element* __this);
int Element__get_CachingMode(Element* __this);
void Element__set_CachingMode(Element* __this, int value);
::uObject* Element__get_Effects(Element* __this);
bool Element__get_HasEffects(Element* __this);
bool Element__get_HasActiveEffects(Element* __this);
bool Element__get_HasCompositionEffect(Element* __this);
::app::Fuse::Elements::Cache* Element__get_Cache(Element* __this);
int Element__get_HitTestMode(Element* __this);
void Element__set_HitTestMode(Element* __this, int value);
float Element__get_HitTestOpacityThreshold(Element* __this);
void Element__set_HitTestOpacityThreshold(Element* __this, float value);
float Element__get_Width(Element* __this);
void Element__set_Width(Element* __this, float value);
bool Element__get_HasWidth(Element* __this);
int Element__get_WidthUnit(Element* __this);
void Element__set_WidthUnit(Element* __this, int value);
float Element__get_Height(Element* __this);
void Element__set_Height(Element* __this, float value);
bool Element__get_HasHeight(Element* __this);
int Element__get_HeightUnit(Element* __this);
void Element__set_HeightUnit(Element* __this, int value);
float Element__get_MinWidth(Element* __this);
void Element__set_MinWidth(Element* __this, float value);
bool Element__get_HasMinWidth(Element* __this);
int Element__get_MinWidthUnit(Element* __this);
void Element__set_MinWidthUnit(Element* __this, int value);
float Element__get_MinHeight(Element* __this);
void Element__set_MinHeight(Element* __this, float value);
bool Element__get_HasMinHeight(Element* __this);
int Element__get_MinHeightUnit(Element* __this);
void Element__set_MinHeightUnit(Element* __this, int value);
float Element__get_MaxWidth(Element* __this);
void Element__set_MaxWidth(Element* __this, float value);
bool Element__get_HasMaxWidth(Element* __this);
int Element__get_MaxWidthUnit(Element* __this);
void Element__set_MaxWidthUnit(Element* __this, int value);
float Element__get_MaxHeight(Element* __this);
void Element__set_MaxHeight(Element* __this, float value);
bool Element__get_HasMaxHeight(Element* __this);
int Element__get_MaxHeightUnit(Element* __this);
void Element__set_MaxHeightUnit(Element* __this, int value);
int Element__get_Alignment(Element* __this);
void Element__set_Alignment(Element* __this, int value);
bool Element__get_HasAlignment(Element* __this);
int Element__get_Visibility(Element* __this);
void Element__set_Visibility(Element* __this, int value);
::app::Uno::Float4 Element__get_Margin(Element* __this);
void Element__set_Margin(Element* __this, ::app::Uno::Float4 value);
::app::Uno::Float4 Element__get_Padding(Element* __this);
void Element__set_Padding(Element* __this, ::app::Uno::Float4 value);
::app::Uno::Float2 Element__get_Offset(Element* __this);
void Element__set_Offset(Element* __this, ::app::Uno::Float2 value);
bool Element__get_HasOffset(Element* __this);
int Element__get_OffsetUnit(Element* __this);
void Element__set_OffsetUnit(Element* __this, int value);
::app::Uno::Float2 Element__get_Anchor(Element* __this);
void Element__set_Anchor(Element* __this, ::app::Uno::Float2 value);
bool Element__get_HasAnchor(Element* __this);
int Element__get_AnchorUnit(Element* __this);
void Element__set_AnchorUnit(Element* __this, int value);
bool Element__get_DefaultSnapToPixels(Element* __this);
bool Element__get_SnapToPixelStore(Element* __this);
void Element__set_SnapToPixelStore(Element* __this, bool value);
bool Element__get_SnapToPixels(Element* __this);
void Element__set_SnapToPixels(Element* __this, bool value);
bool Element__get_DefaultClipToBounds(Element* __this);
bool Element__get_ClipToBoundsStore(Element* __this);
void Element__set_ClipToBoundsStore(Element* __this, bool value);
bool Element__get_ClipToBounds(Element* __this);
void Element__set_ClipToBounds(Element* __this, bool value);
::app::Uno::Float2 Element__get_AbsoluteLayoutPosition(Element* __this);
::app::Uno::Float2 Element__get_ActualPosition(Element* __this);
::app::Uno::Float2 Element__get_ActualSize(Element* __this);
::app::Uno::Float3 Element__Fuse_IActualSize_get_ActualSize(Element* __this);
bool Element__get_AutoKeyboardCompensation(Element* __this);
void Element__set_AutoKeyboardCompensation(Element* __this, bool value);
int Element__get_EffectiveHorizontalAlignment(Element* __this);
int Element__get_EffectiveVerticalAlignment(Element* __this);
float Element__get_AbsoluteZoom(Element* __this);
bool Element__get_AddedByStyle(Element* __this);
void Element__set_AddedByStyle(Element* __this, bool value);
Element* Element__get_ParentElement(Element* __this);
bool Element__get_IsVisible(Element* __this);
int Element__get_SubNodeCount(Element* __this);
int Element__get_SubElementCount(Element* __this);
float Element__get_Opacity(Element* __this);
void Element__set_Opacity(Element* __this, float value);
int Element__get_DepthTestMode(Element* __this);
void Element__set_DepthTestMode(Element* __this, int value);
bool Element__get_HasDepthTestMode(Element* __this);
::app::Uno::Float4 Element__get_TextColor(Element* __this);
void Element__set_TextColor(Element* __this, ::app::Uno::Float4 value);
::app::Fuse::Font* Element__get_Font(Element* __this);
void Element__set_Font(Element* __this, ::app::Fuse::Font* value);
float Element__get_FontSize(Element* __this);
void Element__set_FontSize(Element* __this, float value);
int Element__get_TextAlignment(Element* __this);
void Element__set_TextAlignment(Element* __this, int value);
int Element__get_TransformOrigin(Element* __this);
void Element__set_TransformOrigin(Element* __this, int value);
bool Element__get_DrawNextFrame(Element* __this);
bool Element__get_IsVisualInvalid(Element* __this);
void Element__Fuse_Triggers_Actions_IShow_Show(Element* __this);
void Element__Fuse_Triggers_Actions_ICollapse_Collapse(Element* __this);
void Element__Fuse_Triggers_Actions_IHide_Hide(Element* __this);
::app::Uno::Rect Element__CalcRenderBounds(Element* __this);
::app::Uno::Recti Element__GetViewportInvertPixelRect(Element* __this, ::app::Fuse::DrawContext* dc, ::app::Uno::Rect localRegion);
::app::Uno::Recti Element__GetVisibleViewportInvertPixelRect(Element* __this, ::app::Fuse::DrawContext* dc, ::app::Uno::Rect localRegion);
::app::Uno::Graphics::Framebuffer* Element__CaptureRegion(Element* __this, ::app::Fuse::DrawContext* dc, ::app::Uno::Rect region, ::app::Uno::Float2 padding);
void Element__Draw(Element* __this, ::app::Fuse::DrawContext* dc);
void Element__LocalDraw(Element* __this, ::app::Fuse::DrawContext* dc);
void Element__AddStyleEffect(Element* __this, ::app::Fuse::Effects::Effect* e);
void Element__OnEffectAdded(Element* __this, ::app::Fuse::Effects::Effect* e);
void Element__OnEffectRemoved(Element* __this, ::app::Fuse::Effects::Effect* e);
void Element__OnEffectRenderingChanged(Element* __this, ::app::Fuse::Effects::Effect* e);
void Element__Composit(Element* __this, ::app::Fuse::DrawContext* dc);
void Element__CompositEffects(Element* __this, ::app::Fuse::DrawContext* dc);
void Element__OnIsEnabledChanged(Element* __this);
bool Element__IsPointInside(Element* __this, ::app::Uno::Float2 localPoint);
void Element__OnHitTest(Element* __this, ::app::Fuse::HitTestContext* htc);
void Element__OnHitTestLocalVisual(Element* __this, ::app::Fuse::HitTestContext* htc);
void Element__OnHitTestChildren(Element* __this, ::app::Fuse::HitTestContext* htc);
bool Element__HasNoValue(Element* __this, int ep);
bool Element__HasValue(Element* __this, int ep);
bool Element__HasStyleValue(Element* __this, int ep);
void Element__GiveLocalValue(Element* __this, int ep);
void Element__GiveStyleValue(Element* __this, int ep);
void Element__ClearValue(Element* __this, int ep);
void Element__OnWidthChanged(Element* __this);
void Element__ResetWidth(Element* __this);
void Element__SetStyleWidth(Element* __this, float val);
void Element__OnHeightChanged(Element* __this);
void Element__ResetHeight(Element* __this);
void Element__SetStyleHeight(Element* __this, float val);
void Element__OnMinWidthChanged(Element* __this);
void Element__ResetMinWidth(Element* __this);
void Element__SetStyleMinWidth(Element* __this, float val);
void Element__SetStyleMinWidth_1(Element* __this, float val, int unit);
void Element__OnMinHeightChanged(Element* __this);
void Element__ResetMinHeight(Element* __this);
void Element__SetStyleMinHeight(Element* __this, float val);
void Element__SetStyleMinHeight_1(Element* __this, float val, int unit);
void Element__OnMaxWidthChanged(Element* __this);
void Element__ResetMaxWidth(Element* __this);
void Element__SetStyleMaxWidth_1(Element* __this, float val, int unit);
void Element__OnMaxHeightChanged(Element* __this);
void Element__ResetMaxHeight(Element* __this);
void Element__SetStyleMaxHeight_1(Element* __this, float val, int unit);
void Element__SetLayoutValue(Element* __this, int mask, int bit, int val);
void Element__OnAlignChanged(Element* __this);
void Element__ResetAlignment(Element* __this);
void Element__SetStyleAlignment(Element* __this, int val);
void Element__OnVisibilityChanged(Element* __this);
void Element__ResetVisibility(Element* __this);
void Element__OnMarginChanged(Element* __this);
void Element__ResetMargin(Element* __this);
void Element__SetStyleMargin(Element* __this, ::app::Uno::Float4 margin);
void Element__OnPaddingChanged(Element* __this);
void Element__ResetPadding(Element* __this);
void Element__SetStylePadding(Element* __this, ::app::Uno::Float4 padding);
void Element__OnOffsetChanged(Element* __this);
void Element__OnAnchorChanged(Element* __this);
void Element__OnSnapToPixelsChanged(Element* __this);
void Element__ResetSnapToPixels(Element* __this);
void Element__OnClipToBoundsChanged(Element* __this);
void Element__ResetClipToBounds(Element* __this);
void Element__OnBringIntoView(Element* __this, Element* elm);
void Element__BringIntoView(Element* __this);
void Element__PerformLayout(Element* __this);
void Element__PerformLayout_1(Element* __this, ::app::Uno::Float2 clientSize);
float Element__UnitSize(Element* __this, float scalar, int unit, float fill, bool secondary, bool* known);
float Element__SimpleToAnchor(Element* __this, int align);
void Element__EffectiveAnchor(Element* __this, int halign, int valign, ::app::Uno::Float2* anchor, int* unit);
::app::Uno::Float2 Element__ApplyFixedPaddingBox(Element* __this, ::app::Uno::Float2 sz, ::app::Uno::Float2 fillSize, int* fillSet, bool* fixedSize);
::app::Uno::Float2 Element__ConstrainMinMax(Element* __this, ::app::Uno::Float2 sz, ::app::Uno::Float2 fillSize, int fillSet);
::app::Uno::Float2 Element__LimitPaddingBoxSize(Element* __this, ::app::Uno::Float2 sz, ::app::Uno::Float2 fillSize, int fillSet);
void Element__GMSReset(Element* __this);
::app::Uno::Float2 Element__GetMarginSize(Element* __this, ::app::Uno::Float2 fillSize, int fillSet);
::app::Uno::Float2 Element__GetPaddingSize(Element* __this, ::app::Uno::Float2 padFill, int fillSet);
::app::Uno::Float2 Element__CalcMarginSize(Element* __this, ::app::Uno::Float2 fillSize, int fillSet);
::app::Uno::Float2 Element__GetContentSize(Element* __this, ::app::Uno::Float2 fillSize, int fillSet);
::app::Uno::Float2 Element__ArrangeMarginBox(Element* __this, ::app::Uno::Float2 position, ::app::Uno::Float2 availableSize, int availSet);
void Element__OnPlaced(Element* __this, ::app::Uno::Float2 oldPosition);
void Element__OnResized(Element* __this, ::app::Uno::Float2 oldSize);
void Element__PerformPlacement(Element* __this, ::app::Uno::Float2 position, ::app::Uno::Float2 size);
void Element__ArrangePaddingBox(Element* __this, ::app::Uno::Float2 avsize);
::app::Uno::Float2 Element__Snap(Element* __this, ::app::Uno::Float2 p);
::app::Uno::Float2 Element__SnapUp(Element* __this, ::app::Uno::Float2 p);
void Element__OnRooted(Element* __this);
void Element__RemovePerformLayout(Element* __this);
void Element__OnUnrooted(Element* __this);
void Element__OnAdded(Element* __this, ::uObject* parent);
void Element__OnRemoved(Element* __this, ::uObject* parent);
::app::Fuse::Node* Element__GetSubNode(Element* __this, int index);
Element* Element__GetSubElement(Element* __this, int index);
::app::Uno::Float2 Element__ParentToLocal(Element* __this, ::app::Uno::Float2 parentPoint);
::app::Fuse::FastMatrix* Element__GetLocalTransformInternal(Element* __this);
::app::Uno::Rect Element__CalcRenderBoundsInParentSpace(Element* __this);
void Element__OnResetStyle(Element* __this);
bool Element__HasNoValue_1(Element* __this, int ep);
bool Element__HasValue_1(Element* __this, int ep);
bool Element__HasStyleValue_1(Element* __this, int ep);
void Element__GiveLocalValue_1(Element* __this, int ep);
void Element__GiveStyleValue_1(Element* __this, int ep);
void Element__ClearValue_1(Element* __this, int ep);
void Element__OnOpacityChanged(Element* __this);
void Element__ResetOpacity(Element* __this);
void Element__OnDepthTestModeChanged(Element* __this);
void Element__OnTextColorChanged(Element* __this);
void Element__ResetTextColor(Element* __this);
void Element__SetStyleTextColor(Element* __this, ::app::Uno::Float4 color);
void Element__OnFontChanged(Element* __this);
void Element__ResetFont(Element* __this);
void Element__SetStyleFont(Element* __this, ::app::Fuse::Font* f);
void Element__OnFontSizeChanged(Element* __this);
void Element__ResetFontSize(Element* __this);
void Element__SetStyleFontSize(Element* __this, float fontSize);
void Element__OnTextAlignmentChanged(Element* __this);
void Element__ResetTextAlignment(Element* __this);
void Element__SetStyleTextAlignment(Element* __this, int ta);
void Element__PrependTransformOrigin(Element* __this, ::app::Fuse::FastMatrix* m);
void Element__PrependInverseTransformOrigin(Element* __this, ::app::Fuse::FastMatrix* m);
void Element__PrependImplicitTransform(Element* __this, ::app::Fuse::FastMatrix* m);
void Element__InvalidateLocalTransform(Element* __this);
void Element__InvalidateVisual(Element* __this, int reason);
void Element__InvalidateVisualComposition(Element* __this, int reason);
void Element__InvalidateLayout(Element* __this);
void Element__InvalidateRenderBounds(Element* __this);
void Element___TypeInit_1(::uStatic* __this);
void Element___ObjInit_1(Element* __this);
void Element__add_Placed(Element* __this, ::uDelegate* value);
void Element__remove_Placed(Element* __this, ::uDelegate* value);
void Element__add_RequestBringIntoView(Element* __this, ::uDelegate* value);
void Element__remove_RequestBringIntoView(Element* __this, ::uDelegate* value);
void Element__add_Resized(Element* __this, ::uDelegate* value);
void Element__remove_Resized(Element* __this, ::uDelegate* value);

struct Element : ::app::Fuse::Node
{
    ::app::Uno::Rect _renderBounds;
    int _renderBoundsCacheVersion;
    int _cachingMode;
    ::uStrong< ::app::Uno::Collections::ObservableList__Fuse_Effects_Effect*> _effects;
    int _compositionEffects;
    ::uStrong< ::app::Fuse::Elements::Cache*> _cache;
    int _hitTestMode;
    float _hitTestOpacityThreshold;
    int _layoutPropertyBits;
    float _width;
    float _height;
    int _layoutBackingBits;
    ::app::Uno::Float4 _margin;
    ::app::Uno::Float4 _padding;
    ::app::Uno::Float2 _offset;
    ::app::Uno::Float2 _anchor;
    ::app::Uno::Float2 _actualPosition;
    ::app::Uno::Float2 _actualPositionCache;
    bool _haveActualPositionCache;
    ::app::Uno::Float2 _actualSize;
    bool _cachedIsKeyboardVisible;
    ::app::Uno::Float2 _cachedRenderTargetSize;
    bool _autoKeyboardCompensation;
    int _gmsCount;
    int _gmsAt;
    ::uStrong< ::uArray*> _gmsCache;
    ::app::Uno::Float2 _positionCache;
    ::app::Uno::Float2 _arrangeSizeCache;
    ::app::Uno::Float2 _marginCache;
    int _arrangeAvailSetCache;
    ::app::Uno::Float2 _actualAnchor;
    bool _placedBefore;
    bool _sizedBefore;
    ::uStrong< Element*> _parentElement;
    bool _isAddedAsPreUpdate;
    int _stylingPropertyBits;
    float _opacity;
    int _depthTest;
    ::app::Uno::Float4 _textColor;
    ::uStrong< ::app::Fuse::Font*> _font;
    float _fontSize;
    int _textAlignment;
    int _transformOrigin;
    bool _layoutDirty;
    bool _visualDirty;
    int _renderBoundsVersion;
    ::uStrong< ::uDelegate*> Placed;
    ::uStrong< ::uDelegate*> RequestBringIntoView;
    ::uStrong< ::uDelegate*> Resized;
    int _WidthUnit;
    int _HeightUnit;
    int _MinWidthUnit;
    int _MinHeightUnit;
    int _MaxWidthUnit;
    int _MaxHeightUnit;
    int _OffsetUnit;
    int _AnchorUnit;
    bool _AddedByStyle;

    ::app::Uno::Rect CalcRenderBounds();
    ::app::Uno::Recti GetViewportInvertPixelRect(::app::Fuse::DrawContext* dc, ::app::Uno::Rect localRegion);
    ::app::Uno::Recti GetVisibleViewportInvertPixelRect(::app::Fuse::DrawContext* dc, ::app::Uno::Rect localRegion);
    ::app::Uno::Graphics::Framebuffer* CaptureRegion(::app::Fuse::DrawContext* dc, ::app::Uno::Rect region, ::app::Uno::Float2 padding);
    void LocalDraw(::app::Fuse::DrawContext* dc) { Element__LocalDraw(this, dc); }
    void OnDraw(::app::Fuse::DrawContext* dc) { (((Element__uType*)this->__obj_type)->__fp_OnDraw)(this, dc); }
    void AddStyleEffect(::app::Fuse::Effects::Effect* e) { Element__AddStyleEffect(this, e); }
    void OnEffectAdded(::app::Fuse::Effects::Effect* e) { Element__OnEffectAdded(this, e); }
    void OnEffectRemoved(::app::Fuse::Effects::Effect* e) { Element__OnEffectRemoved(this, e); }
    void OnEffectRenderingChanged(::app::Fuse::Effects::Effect* e) { Element__OnEffectRenderingChanged(this, e); }
    void Composit(::app::Fuse::DrawContext* dc) { Element__Composit(this, dc); }
    void CompositEffects(::app::Fuse::DrawContext* dc) { Element__CompositEffects(this, dc); }
    bool IsPointInside(::app::Uno::Float2 localPoint);
    void OnHitTestLocalVisual(::app::Fuse::HitTestContext* htc) { (((Element__uType*)this->__obj_type)->__fp_OnHitTestLocalVisual)(this, htc); }
    void OnHitTestChildren(::app::Fuse::HitTestContext* htc) { (((Element__uType*)this->__obj_type)->__fp_OnHitTestChildren)(this, htc); }
    bool HasNoValue(int ep) { return Element__HasNoValue(this, ep); }
    bool HasValue(int ep) { return Element__HasValue(this, ep); }
    bool HasStyleValue(int ep) { return Element__HasStyleValue(this, ep); }
    void GiveLocalValue(int ep) { Element__GiveLocalValue(this, ep); }
    void GiveStyleValue(int ep) { Element__GiveStyleValue(this, ep); }
    void ClearValue(int ep) { Element__ClearValue(this, ep); }
    void OnWidthChanged() { Element__OnWidthChanged(this); }
    void ResetWidth() { Element__ResetWidth(this); }
    void SetStyleWidth(float val) { Element__SetStyleWidth(this, val); }
    void OnHeightChanged() { Element__OnHeightChanged(this); }
    void ResetHeight() { Element__ResetHeight(this); }
    void SetStyleHeight(float val) { Element__SetStyleHeight(this, val); }
    void OnMinWidthChanged() { Element__OnMinWidthChanged(this); }
    void ResetMinWidth() { Element__ResetMinWidth(this); }
    void SetStyleMinWidth(float val) { Element__SetStyleMinWidth(this, val); }
    void SetStyleMinWidth_1(float val, int unit) { Element__SetStyleMinWidth_1(this, val, unit); }
    void OnMinHeightChanged() { Element__OnMinHeightChanged(this); }
    void ResetMinHeight() { Element__ResetMinHeight(this); }
    void SetStyleMinHeight(float val) { Element__SetStyleMinHeight(this, val); }
    void SetStyleMinHeight_1(float val, int unit) { Element__SetStyleMinHeight_1(this, val, unit); }
    void OnMaxWidthChanged() { Element__OnMaxWidthChanged(this); }
    void ResetMaxWidth() { Element__ResetMaxWidth(this); }
    void SetStyleMaxWidth_1(float val, int unit) { Element__SetStyleMaxWidth_1(this, val, unit); }
    void OnMaxHeightChanged() { Element__OnMaxHeightChanged(this); }
    void ResetMaxHeight() { Element__ResetMaxHeight(this); }
    void SetStyleMaxHeight_1(float val, int unit) { Element__SetStyleMaxHeight_1(this, val, unit); }
    void SetLayoutValue(int mask, int bit, int val) { Element__SetLayoutValue(this, mask, bit, val); }
    void OnAlignChanged() { Element__OnAlignChanged(this); }
    void ResetAlignment() { Element__ResetAlignment(this); }
    void SetStyleAlignment(int val) { Element__SetStyleAlignment(this, val); }
    void OnVisibilityChanged() { Element__OnVisibilityChanged(this); }
    void ResetVisibility() { Element__ResetVisibility(this); }
    void OnMarginChanged() { Element__OnMarginChanged(this); }
    void ResetMargin() { Element__ResetMargin(this); }
    void SetStyleMargin(::app::Uno::Float4 margin);
    void OnPaddingChanged() { Element__OnPaddingChanged(this); }
    void ResetPadding() { Element__ResetPadding(this); }
    void SetStylePadding(::app::Uno::Float4 padding);
    void OnOffsetChanged() { Element__OnOffsetChanged(this); }
    void OnAnchorChanged() { Element__OnAnchorChanged(this); }
    void OnSnapToPixelsChanged() { Element__OnSnapToPixelsChanged(this); }
    void ResetSnapToPixels() { Element__ResetSnapToPixels(this); }
    void OnClipToBoundsChanged() { Element__OnClipToBoundsChanged(this); }
    void ResetClipToBounds() { Element__ResetClipToBounds(this); }
    void OnBringIntoView(Element* elm) { Element__OnBringIntoView(this, elm); }
    void BringIntoView() { Element__BringIntoView(this); }
    void PerformLayout() { Element__PerformLayout(this); }
    void PerformLayout_1(::app::Uno::Float2 clientSize);
    float UnitSize(float scalar, int unit, float fill, bool secondary, bool* known) { return Element__UnitSize(this, scalar, unit, fill, secondary, known); }
    float SimpleToAnchor(int align) { return Element__SimpleToAnchor(this, align); }
    void EffectiveAnchor(int halign, int valign, ::app::Uno::Float2* anchor, int* unit) { Element__EffectiveAnchor(this, halign, valign, anchor, unit); }
    ::app::Uno::Float2 ApplyFixedPaddingBox(::app::Uno::Float2 sz, ::app::Uno::Float2 fillSize, int* fillSet, bool* fixedSize);
    ::app::Uno::Float2 ConstrainMinMax(::app::Uno::Float2 sz, ::app::Uno::Float2 fillSize, int fillSet);
    ::app::Uno::Float2 LimitPaddingBoxSize(::app::Uno::Float2 sz, ::app::Uno::Float2 fillSize, int fillSet);
    void GMSReset() { Element__GMSReset(this); }
    ::app::Uno::Float2 GetMarginSize(::app::Uno::Float2 fillSize, int fillSet);
    ::app::Uno::Float2 GetPaddingSize(::app::Uno::Float2 padFill, int fillSet);
    ::app::Uno::Float2 CalcMarginSize(::app::Uno::Float2 fillSize, int fillSet);
    ::app::Uno::Float2 GetContentSize(::app::Uno::Float2 fillSize, int fillSet);
    ::app::Uno::Float2 ArrangeMarginBox(::app::Uno::Float2 position, ::app::Uno::Float2 availableSize, int availSet);
    void OnPlaced(::app::Uno::Float2 oldPosition);
    void OnResized(::app::Uno::Float2 oldSize);
    void PerformPlacement(::app::Uno::Float2 position, ::app::Uno::Float2 size);
    void ArrangePaddingBox(::app::Uno::Float2 avsize);
    ::app::Uno::Float2 Snap(::app::Uno::Float2 p);
    ::app::Uno::Float2 SnapUp(::app::Uno::Float2 p);
    void RemovePerformLayout() { Element__RemovePerformLayout(this); }
    Element* GetSubElement(int index) { return (((Element__uType*)this->__obj_type)->__fp_GetSubElement)(this, index); }
    ::app::Fuse::FastMatrix* GetLocalTransformInternal() { return Element__GetLocalTransformInternal(this); }
    ::app::Uno::Rect CalcRenderBoundsInParentSpace();
    bool HasNoValue_1(int ep) { return Element__HasNoValue_1(this, ep); }
    bool HasValue_1(int ep) { return Element__HasValue_1(this, ep); }
    bool HasStyleValue_1(int ep) { return Element__HasStyleValue_1(this, ep); }
    void GiveLocalValue_1(int ep) { Element__GiveLocalValue_1(this, ep); }
    void GiveStyleValue_1(int ep) { Element__GiveStyleValue_1(this, ep); }
    void ClearValue_1(int ep) { Element__ClearValue_1(this, ep); }
    void OnOpacityChanged() { Element__OnOpacityChanged(this); }
    void ResetOpacity() { Element__ResetOpacity(this); }
    void OnDepthTestModeChanged() { Element__OnDepthTestModeChanged(this); }
    void OnTextColorChanged() { (((Element__uType*)this->__obj_type)->__fp_OnTextColorChanged)(this); }
    void ResetTextColor() { Element__ResetTextColor(this); }
    void SetStyleTextColor(::app::Uno::Float4 color);
    void OnFontChanged() { (((Element__uType*)this->__obj_type)->__fp_OnFontChanged)(this); }
    void ResetFont() { Element__ResetFont(this); }
    void SetStyleFont(::app::Fuse::Font* f) { Element__SetStyleFont(this, f); }
    void OnFontSizeChanged() { (((Element__uType*)this->__obj_type)->__fp_OnFontSizeChanged)(this); }
    void ResetFontSize() { Element__ResetFontSize(this); }
    void SetStyleFontSize(float fontSize) { Element__SetStyleFontSize(this, fontSize); }
    void OnTextAlignmentChanged() { (((Element__uType*)this->__obj_type)->__fp_OnTextAlignmentChanged)(this); }
    void ResetTextAlignment() { Element__ResetTextAlignment(this); }
    void SetStyleTextAlignment(int ta) { Element__SetStyleTextAlignment(this, ta); }
    void InvalidateVisual(int reason) { Element__InvalidateVisual(this, reason); }
    void InvalidateVisualComposition(int reason) { Element__InvalidateVisualComposition(this, reason); }
    void InvalidateLayout() { Element__InvalidateLayout(this); }
    void InvalidateRenderBounds() { Element__InvalidateRenderBounds(this); }
    void _ObjInit_1() { Element___ObjInit_1(this); }
    void add_Placed(::uDelegate* value) { Element__add_Placed(this, value); }
    void remove_Placed(::uDelegate* value) { Element__remove_Placed(this, value); }
    void add_RequestBringIntoView(::uDelegate* value) { Element__add_RequestBringIntoView(this, value); }
    void remove_RequestBringIntoView(::uDelegate* value) { Element__remove_RequestBringIntoView(this, value); }
    void add_Resized(::uDelegate* value) { Element__add_Resized(this, value); }
    void remove_Resized(::uDelegate* value) { Element__remove_Resized(this, value); }
    ::app::Uno::Rect RenderBoundsWithEffects();
    bool NeedsClipping() { return Element__get_NeedsClipping(this); }
    ::app::Uno::Rect RenderBounds();
    ::app::Uno::Rect Bounds();
    bool IsRedrawCheap() { return (((Element__uType*)this->__obj_type)->__fp_get_IsRedrawCheap)(this); }
    int CachingMode() { return Element__get_CachingMode(this); }
    void CachingMode(int value) { Element__set_CachingMode(this, value); }
    ::uObject* Effects() { return Element__get_Effects(this); }
    bool HasEffects() { return Element__get_HasEffects(this); }
    bool HasActiveEffects() { return Element__get_HasActiveEffects(this); }
    bool HasCompositionEffect() { return Element__get_HasCompositionEffect(this); }
    ::app::Fuse::Elements::Cache* Cache() { return Element__get_Cache(this); }
    int HitTestMode() { return Element__get_HitTestMode(this); }
    void HitTestMode(int value) { Element__set_HitTestMode(this, value); }
    float HitTestOpacityThreshold() { return Element__get_HitTestOpacityThreshold(this); }
    void HitTestOpacityThreshold(float value) { Element__set_HitTestOpacityThreshold(this, value); }
    float Width() { return Element__get_Width(this); }
    void Width(float value) { Element__set_Width(this, value); }
    bool HasWidth() { return Element__get_HasWidth(this); }
    int WidthUnit() { return Element__get_WidthUnit(this); }
    void WidthUnit(int value) { Element__set_WidthUnit(this, value); }
    float Height() { return Element__get_Height(this); }
    void Height(float value) { Element__set_Height(this, value); }
    bool HasHeight() { return Element__get_HasHeight(this); }
    int HeightUnit() { return Element__get_HeightUnit(this); }
    void HeightUnit(int value) { Element__set_HeightUnit(this, value); }
    float MinWidth() { return Element__get_MinWidth(this); }
    void MinWidth(float value) { Element__set_MinWidth(this, value); }
    bool HasMinWidth() { return Element__get_HasMinWidth(this); }
    int MinWidthUnit() { return Element__get_MinWidthUnit(this); }
    void MinWidthUnit(int value) { Element__set_MinWidthUnit(this, value); }
    float MinHeight() { return Element__get_MinHeight(this); }
    void MinHeight(float value) { Element__set_MinHeight(this, value); }
    bool HasMinHeight() { return Element__get_HasMinHeight(this); }
    int MinHeightUnit() { return Element__get_MinHeightUnit(this); }
    void MinHeightUnit(int value) { Element__set_MinHeightUnit(this, value); }
    float MaxWidth() { return Element__get_MaxWidth(this); }
    void MaxWidth(float value) { Element__set_MaxWidth(this, value); }
    bool HasMaxWidth() { return Element__get_HasMaxWidth(this); }
    int MaxWidthUnit() { return Element__get_MaxWidthUnit(this); }
    void MaxWidthUnit(int value) { Element__set_MaxWidthUnit(this, value); }
    float MaxHeight() { return Element__get_MaxHeight(this); }
    void MaxHeight(float value) { Element__set_MaxHeight(this, value); }
    bool HasMaxHeight() { return Element__get_HasMaxHeight(this); }
    int MaxHeightUnit() { return Element__get_MaxHeightUnit(this); }
    void MaxHeightUnit(int value) { Element__set_MaxHeightUnit(this, value); }
    int Alignment() { return Element__get_Alignment(this); }
    void Alignment(int value) { Element__set_Alignment(this, value); }
    bool HasAlignment() { return Element__get_HasAlignment(this); }
    int Visibility() { return Element__get_Visibility(this); }
    void Visibility(int value) { Element__set_Visibility(this, value); }
    ::app::Uno::Float4 Margin();
    void Margin(::app::Uno::Float4 value);
    ::app::Uno::Float4 Padding();
    void Padding(::app::Uno::Float4 value);
    ::app::Uno::Float2 Offset();
    void Offset(::app::Uno::Float2 value);
    bool HasOffset() { return Element__get_HasOffset(this); }
    int OffsetUnit() { return Element__get_OffsetUnit(this); }
    void OffsetUnit(int value) { Element__set_OffsetUnit(this, value); }
    ::app::Uno::Float2 Anchor();
    void Anchor(::app::Uno::Float2 value);
    bool HasAnchor() { return Element__get_HasAnchor(this); }
    int AnchorUnit() { return Element__get_AnchorUnit(this); }
    void AnchorUnit(int value) { Element__set_AnchorUnit(this, value); }
    bool DefaultSnapToPixels() { return Element__get_DefaultSnapToPixels(this); }
    bool SnapToPixelStore() { return Element__get_SnapToPixelStore(this); }
    void SnapToPixelStore(bool value) { Element__set_SnapToPixelStore(this, value); }
    bool SnapToPixels() { return Element__get_SnapToPixels(this); }
    void SnapToPixels(bool value) { Element__set_SnapToPixels(this, value); }
    bool DefaultClipToBounds() { return Element__get_DefaultClipToBounds(this); }
    bool ClipToBoundsStore() { return Element__get_ClipToBoundsStore(this); }
    void ClipToBoundsStore(bool value) { Element__set_ClipToBoundsStore(this, value); }
    bool ClipToBounds() { return Element__get_ClipToBounds(this); }
    void ClipToBounds(bool value) { Element__set_ClipToBounds(this, value); }
    ::app::Uno::Float2 AbsoluteLayoutPosition();
    ::app::Uno::Float2 ActualPosition();
    ::app::Uno::Float2 ActualSize();
    bool AutoKeyboardCompensation() { return Element__get_AutoKeyboardCompensation(this); }
    void AutoKeyboardCompensation(bool value) { Element__set_AutoKeyboardCompensation(this, value); }
    int EffectiveHorizontalAlignment() { return Element__get_EffectiveHorizontalAlignment(this); }
    int EffectiveVerticalAlignment() { return Element__get_EffectiveVerticalAlignment(this); }
    float AbsoluteZoom() { return Element__get_AbsoluteZoom(this); }
    bool AddedByStyle() { return Element__get_AddedByStyle(this); }
    void AddedByStyle(bool value) { Element__set_AddedByStyle(this, value); }
    Element* ParentElement() { return Element__get_ParentElement(this); }
    int SubElementCount() { return (((Element__uType*)this->__obj_type)->__fp_get_SubElementCount)(this); }
    float Opacity() { return Element__get_Opacity(this); }
    void Opacity(float value) { Element__set_Opacity(this, value); }
    int DepthTestMode() { return Element__get_DepthTestMode(this); }
    void DepthTestMode(int value) { Element__set_DepthTestMode(this, value); }
    bool HasDepthTestMode() { return Element__get_HasDepthTestMode(this); }
    ::app::Uno::Float4 TextColor();
    void TextColor(::app::Uno::Float4 value);
    ::app::Fuse::Font* Font() { return Element__get_Font(this); }
    void Font(::app::Fuse::Font* value) { Element__set_Font(this, value); }
    float FontSize() { return Element__get_FontSize(this); }
    void FontSize(float value) { Element__set_FontSize(this, value); }
    int TextAlignment() { return Element__get_TextAlignment(this); }
    void TextAlignment(int value) { Element__set_TextAlignment(this, value); }
    int TransformOrigin() { return Element__get_TransformOrigin(this); }
    void TransformOrigin(int value) { Element__set_TransformOrigin(this, value); }
    bool IsVisualInvalid() { return Element__get_IsVisualInvalid(this); }
};

}}}

#include <app/Uno.Bool.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float3.h>
#include <app/Uno.Int.h>
#include <app/Uno.Recti.h>

namespace app {
namespace Fuse {
namespace Elements {

inline ::app::Uno::Rect Element::CalcRenderBounds() { return (((Element__uType*)this->__obj_type)->__fp_CalcRenderBounds)(this); }
inline ::app::Uno::Recti Element::GetViewportInvertPixelRect(::app::Fuse::DrawContext* dc, ::app::Uno::Rect localRegion) { return Element__GetViewportInvertPixelRect(this, dc, localRegion); }
inline ::app::Uno::Recti Element::GetVisibleViewportInvertPixelRect(::app::Fuse::DrawContext* dc, ::app::Uno::Rect localRegion) { return Element__GetVisibleViewportInvertPixelRect(this, dc, localRegion); }
inline ::app::Uno::Graphics::Framebuffer* Element::CaptureRegion(::app::Fuse::DrawContext* dc, ::app::Uno::Rect region, ::app::Uno::Float2 padding) { return Element__CaptureRegion(this, dc, region, padding); }
inline bool Element::IsPointInside(::app::Uno::Float2 localPoint) { return Element__IsPointInside(this, localPoint); }
inline void Element::SetStyleMargin(::app::Uno::Float4 margin) { Element__SetStyleMargin(this, margin); }
inline void Element::SetStylePadding(::app::Uno::Float4 padding) { Element__SetStylePadding(this, padding); }
inline void Element::PerformLayout_1(::app::Uno::Float2 clientSize) { Element__PerformLayout_1(this, clientSize); }
inline ::app::Uno::Float2 Element::ApplyFixedPaddingBox(::app::Uno::Float2 sz, ::app::Uno::Float2 fillSize, int* fillSet, bool* fixedSize) { return Element__ApplyFixedPaddingBox(this, sz, fillSize, fillSet, fixedSize); }
inline ::app::Uno::Float2 Element::ConstrainMinMax(::app::Uno::Float2 sz, ::app::Uno::Float2 fillSize, int fillSet) { return Element__ConstrainMinMax(this, sz, fillSize, fillSet); }
inline ::app::Uno::Float2 Element::LimitPaddingBoxSize(::app::Uno::Float2 sz, ::app::Uno::Float2 fillSize, int fillSet) { return Element__LimitPaddingBoxSize(this, sz, fillSize, fillSet); }
inline ::app::Uno::Float2 Element::GetMarginSize(::app::Uno::Float2 fillSize, int fillSet) { return Element__GetMarginSize(this, fillSize, fillSet); }
inline ::app::Uno::Float2 Element::GetPaddingSize(::app::Uno::Float2 padFill, int fillSet) { return Element__GetPaddingSize(this, padFill, fillSet); }
inline ::app::Uno::Float2 Element::CalcMarginSize(::app::Uno::Float2 fillSize, int fillSet) { return Element__CalcMarginSize(this, fillSize, fillSet); }
inline ::app::Uno::Float2 Element::GetContentSize(::app::Uno::Float2 fillSize, int fillSet) { return (((Element__uType*)this->__obj_type)->__fp_GetContentSize)(this, fillSize, fillSet); }
inline ::app::Uno::Float2 Element::ArrangeMarginBox(::app::Uno::Float2 position, ::app::Uno::Float2 availableSize, int availSet) { return Element__ArrangeMarginBox(this, position, availableSize, availSet); }
inline void Element::OnPlaced(::app::Uno::Float2 oldPosition) { (((Element__uType*)this->__obj_type)->__fp_OnPlaced)(this, oldPosition); }
inline void Element::OnResized(::app::Uno::Float2 oldSize) { (((Element__uType*)this->__obj_type)->__fp_OnResized)(this, oldSize); }
inline void Element::PerformPlacement(::app::Uno::Float2 position, ::app::Uno::Float2 size) { Element__PerformPlacement(this, position, size); }
inline void Element::ArrangePaddingBox(::app::Uno::Float2 avsize) { (((Element__uType*)this->__obj_type)->__fp_ArrangePaddingBox)(this, avsize); }
inline ::app::Uno::Float2 Element::Snap(::app::Uno::Float2 p) { return Element__Snap(this, p); }
inline ::app::Uno::Float2 Element::SnapUp(::app::Uno::Float2 p) { return Element__SnapUp(this, p); }
inline ::app::Uno::Rect Element::CalcRenderBoundsInParentSpace() { return Element__CalcRenderBoundsInParentSpace(this); }
inline void Element::SetStyleTextColor(::app::Uno::Float4 color) { Element__SetStyleTextColor(this, color); }
inline ::app::Uno::Rect Element::RenderBoundsWithEffects() { return Element__get_RenderBoundsWithEffects(this); }
inline ::app::Uno::Rect Element::RenderBounds() { return Element__get_RenderBounds(this); }
inline ::app::Uno::Rect Element::Bounds() { return Element__get_Bounds(this); }
inline ::app::Uno::Float4 Element::Margin() { return Element__get_Margin(this); }
inline void Element::Margin(::app::Uno::Float4 value) { Element__set_Margin(this, value); }
inline ::app::Uno::Float4 Element::Padding() { return Element__get_Padding(this); }
inline void Element::Padding(::app::Uno::Float4 value) { Element__set_Padding(this, value); }
inline ::app::Uno::Float2 Element::Offset() { return Element__get_Offset(this); }
inline void Element::Offset(::app::Uno::Float2 value) { Element__set_Offset(this, value); }
inline ::app::Uno::Float2 Element::Anchor() { return Element__get_Anchor(this); }
inline void Element::Anchor(::app::Uno::Float2 value) { Element__set_Anchor(this, value); }
inline ::app::Uno::Float2 Element::AbsoluteLayoutPosition() { return Element__get_AbsoluteLayoutPosition(this); }
inline ::app::Uno::Float2 Element::ActualPosition() { return Element__get_ActualPosition(this); }
inline ::app::Uno::Float2 Element::ActualSize() { return Element__get_ActualSize(this); }
inline ::app::Uno::Float4 Element::TextColor() { return Element__get_TextColor(this); }
inline void Element::TextColor(::app::Uno::Float4 value) { Element__set_TextColor(this, value); }

}}}


#endif
