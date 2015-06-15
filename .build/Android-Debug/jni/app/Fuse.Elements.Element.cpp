// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.App.h>
#include <app/Fuse.DrawContext.h>
#include <app/Fuse.Effects.Effect.h>
#include <app/Fuse.Elements.AlignmentHelpers.h>
#include <app/Fuse.Elements.Cache.h>
#include <app/Fuse.Elements.Element.h>
#include <app/Fuse.Elements.PlacedArgs.h>
#include <app/Fuse.Elements.PlacedHandler.h>
#include <app/Fuse.Elements.RequestBringIntoViewArgs.h>
#include <app/Fuse.Elements.RequestBringIntoViewHandler.h>
#include <app/Fuse.Elements.SpeedHelpers.h>
#include <app/Fuse.FastMatrix.h>
#include <app/Fuse.Font.h>
#include <app/Fuse.Fonts.h>
#include <app/Fuse.FramebufferPool.h>
#include <app/Fuse.HitTestContext.h>
#include <app/Fuse.ICamera.h>
#include <app/Fuse.IWindow.h>
#include <app/Fuse.OrthographicCamera.h>
#include <app/Fuse.Profiling.h>
#include <app/Fuse.Properties.h>
#include <app/Fuse.PropertyHandle.h>
#include <app/Fuse.ResizedArgs.h>
#include <app/Fuse.ResizedHandler.h>
#include <app/Fuse.UpdateManager.h>
#include <app/Fuse.ViewContext.h>
#include <app/Uno.Action.h>
#include <app/Uno.Action__Fuse_Effects_Effect.h>
#include <app/Uno.Collections.ICollection__Fuse_Effects_Effect.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Effects_Effect.h>
#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Effects_Effect.h>
#include <app/Uno.Collections.IList__Fuse_Effects_Effect.h>
#include <app/Uno.Collections.ObservableList__Fuse_Effects_Effect.h>
#include <app/Uno.Delegate.h>
#include <app/Uno.Diagnostics.Clock.h>
#include <app/Uno.Diagnostics.Debug.h>
#include <app/Uno.Double.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Float4x4.h>
#include <app/Uno.Graphics.Framebuffer.h>
#include <app/Uno.Graphics.RenderTarget.h>
#include <app/Uno.Graphics.Texture2D.h>
#include <app/Uno.Int2.h>
#include <app/Uno.Math.h>
#include <app/Uno.Object.h>
#include <app/Uno.String.h>
#include <app/Uno.Vector.h>

namespace app {
namespace Fuse {
namespace Elements {

::uStaticStrong< ::app::Fuse::PropertyHandle*> Element___minWidthHandle;
::uStaticStrong< ::app::Fuse::PropertyHandle*> Element___minHeightHandle;
::uStaticStrong< ::app::Fuse::PropertyHandle*> Element___maxWidthHandle;
::uStaticStrong< ::app::Fuse::PropertyHandle*> Element___maxHeightHandle;
bool Element___performingLayout;

Element__uType* Element__typeof()
{
    static Element__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Element__uType*)::uAllocClassType(sizeof(Element__uType), "Fuse.Elements.Element", ::app::Fuse::Node__typeof(), 6, 8);
        type->__fp_get_IsRedrawCheap = Element__get_IsRedrawCheap;
        type->__fp_get_IsVisible = (bool(*)(::app::Fuse::Node*))Element__get_IsVisible;
        type->__fp_get_SubNodeCount = (int(*)(::app::Fuse::Node*))Element__get_SubNodeCount;
        type->__fp_get_SubElementCount = Element__get_SubElementCount;
        type->__fp_get_DrawNextFrame = (bool(*)(::app::Fuse::Node*))Element__get_DrawNextFrame;
        type->__fp_CalcRenderBounds = Element__CalcRenderBounds;
        type->__fp_Draw = (void(*)(::app::Fuse::Node*, ::app::Fuse::DrawContext*))Element__Draw;
        type->__fp_OnIsEnabledChanged = (void(*)(::app::Fuse::Node*))Element__OnIsEnabledChanged;
        type->__fp_OnHitTest = (void(*)(::app::Fuse::Node*, ::app::Fuse::HitTestContext*))Element__OnHitTest;
        type->__fp_OnHitTestLocalVisual = Element__OnHitTestLocalVisual;
        type->__fp_OnHitTestChildren = Element__OnHitTestChildren;
        type->__fp_GetContentSize = Element__GetContentSize;
        type->__fp_OnPlaced = Element__OnPlaced;
        type->__fp_OnResized = Element__OnResized;
        type->__fp_ArrangePaddingBox = Element__ArrangePaddingBox;
        type->__fp_OnRooted = (void(*)(::app::Fuse::Node*))Element__OnRooted;
        type->__fp_OnUnrooted = (void(*)(::app::Fuse::Node*))Element__OnUnrooted;
        type->__fp_OnAdded = (void(*)(::app::Fuse::Node*, ::uObject*))Element__OnAdded;
        type->__fp_OnRemoved = (void(*)(::app::Fuse::Node*, ::uObject*))Element__OnRemoved;
        type->__fp_GetSubNode = (::app::Fuse::Node*(*)(::app::Fuse::Node*, int))Element__GetSubNode;
        type->__fp_GetSubElement = Element__GetSubElement;
        type->__fp_ParentToLocal = (::app::Uno::Float2(*)(::app::Fuse::Node*, ::app::Uno::Float2))Element__ParentToLocal;
        type->__fp_OnResetStyle = (void(*)(::app::Fuse::Node*))Element__OnResetStyle;
        type->__fp_OnTextColorChanged = Element__OnTextColorChanged;
        type->__fp_OnFontChanged = Element__OnFontChanged;
        type->__fp_OnFontSizeChanged = Element__OnFontSizeChanged;
        type->__fp_OnTextAlignmentChanged = Element__OnTextAlignmentChanged;
        type->__fp_PrependTransformOrigin = (void(*)(::app::Fuse::Node*, ::app::Fuse::FastMatrix*))Element__PrependTransformOrigin;
        type->__fp_PrependInverseTransformOrigin = (void(*)(::app::Fuse::Node*, ::app::Fuse::FastMatrix*))Element__PrependInverseTransformOrigin;
        type->__fp_PrependImplicitTransform = (void(*)(::app::Fuse::Node*, ::app::Fuse::FastMatrix*))Element__PrependImplicitTransform;
        type->__fp_InvalidateLocalTransform = (void(*)(::app::Fuse::Node*))Element__InvalidateLocalTransform;

        type->__interface_2.__fp_Show = (void(*)(void*))Element__Fuse_Triggers_Actions_IShow_Show;
        type->__interface_4.__fp_Collapse = (void(*)(void*))Element__Fuse_Triggers_Actions_ICollapse_Collapse;
        type->__interface_3.__fp_Hide = (void(*)(void*))Element__Fuse_Triggers_Actions_IHide_Hide;
        type->__interface_5.__fp_get_ActualSize = (::app::Uno::Float3(*)(void*))Element__Fuse_IActualSize_get_ActualSize;
        type->__interface_5.__fp_add_Resized = (void(*)(void*, ::uDelegate*))Element__add_Resized;
        type->__interface_5.__fp_remove_Resized = (void(*)(void*, ::uDelegate*))Element__remove_Resized;

        type->Implements[0] = ::app::Fuse::INodeParent__typeof();
        type->Implements[1] = ::app::Fuse::IResourceParent__typeof();
        type->Implements[2] = ::app::Fuse::Triggers::Actions::IShow__typeof();
        type->Implements[3] = ::app::Fuse::Triggers::Actions::IHide__typeof();
        type->Implements[4] = ::app::Fuse::Triggers::Actions::ICollapse__typeof();
        type->Implements[5] = ::app::Fuse::IActualSize__typeof();

        type->InterfaceOffsets[0] = offsetof(Element__uType, __interface_0);
        type->InterfaceOffsets[1] = offsetof(Element__uType, __interface_1);
        type->InterfaceOffsets[2] = offsetof(Element__uType, __interface_2);
        type->InterfaceOffsets[3] = offsetof(Element__uType, __interface_3);
        type->InterfaceOffsets[4] = offsetof(Element__uType, __interface_4);
        type->InterfaceOffsets[5] = offsetof(Element__uType, __interface_5);

        type->StrongRefOffsets[0] = offsetof(Element, _effects);
        type->StrongRefOffsets[1] = offsetof(Element, _cache);
        type->StrongRefOffsets[2] = offsetof(Element, _gmsCache);
        type->StrongRefOffsets[3] = offsetof(Element, _parentElement);
        type->StrongRefOffsets[4] = offsetof(Element, _font);
        type->StrongRefOffsets[5] = offsetof(Element, Placed);
        type->StrongRefOffsets[6] = offsetof(Element, RequestBringIntoView);
        type->StrongRefOffsets[7] = offsetof(Element, Resized);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_effects";
        type->StrongRefNames[1] = "_cache";
        type->StrongRefNames[2] = "_gmsCache";
        type->StrongRefNames[3] = "_parentElement";
        type->StrongRefNames[4] = "_font";
        type->StrongRefNames[5] = "Placed";
        type->StrongRefNames[6] = "RequestBringIntoView";
        type->StrongRefNames[7] = "Resized";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Uno::Rect Element__get_RenderBoundsWithEffects(Element* __this)
{
    ::app::Uno::Rect r = __this->RenderBounds();

    if (__this->HasActiveEffects())
    {
        for (int i = 0; i < ::app::Uno::Collections::ICollection__Fuse_Effects_Effect::Count(::uPtr< ::uObject*>(__this->Effects())); i++)
        {
            if (::uPtr< ::app::Fuse::Effects::Effect*>(::app::Uno::Collections::IList__Fuse_Effects_Effect::Item(::uPtr< ::uObject*>(__this->Effects()), i))->ExtendsRenderBounds() && ::uPtr< ::app::Fuse::Effects::Effect*>(::app::Uno::Collections::IList__Fuse_Effects_Effect::Item(::uPtr< ::uObject*>(__this->Effects()), i))->Active())
            {
                r = ::app::Uno::Rect__Union(NULL, r, ::uPtr< ::app::Fuse::Effects::Effect*>(::app::Uno::Collections::IList__Fuse_Effects_Effect::Item(::uPtr< ::uObject*>(__this->Effects()), i))->RenderBounds());
            }
        }
    }

    return r;
}

bool Element__get_NeedsClipping(Element* __this)
{
    return __this->ClipToBounds();
}

::app::Uno::Rect Element__get_RenderBounds(Element* __this)
{
    if (__this->_renderBoundsCacheVersion != __this->_renderBoundsVersion)
    {
        __this->_renderBounds = __this->CalcRenderBounds();

        if (__this->ClipToBounds())
        {
            __this->_renderBounds = ::app::Uno::Rect__Intersect(NULL, __this->_renderBounds, __this->Bounds());
        }

        __this->_renderBoundsCacheVersion = __this->_renderBoundsVersion;
    }

    return __this->_renderBounds;
}

::app::Uno::Rect Element__get_Bounds(Element* __this)
{
    ::app::Uno::Float2 a = __this->ActualSize();
    return ::app::Uno::Rect__New_1(NULL, 0.0f, 0.0f, a.X, a.Y);
}

bool Element__get_IsRedrawCheap(Element* __this)
{
    return true;
}

int Element__get_CachingMode(Element* __this)
{
    return __this->_cachingMode;
}

void Element__set_CachingMode(Element* __this, int value)
{
    if (__this->_cachingMode != value)
    {
        __this->_cachingMode = value;
        __this->InvalidateVisual(6);
    }
}

::uObject* Element__get_Effects(Element* __this)
{
    if (__this->_effects == NULL)
    {
        __this->_effects = ::app::Uno::Collections::ObservableList__Fuse_Effects_Effect__New_1(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Effects_Effect__typeof(), (const void*)::app::Fuse::Elements::Element__OnEffectAdded, __this), ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Effects_Effect__typeof(), (const void*)::app::Fuse::Elements::Element__OnEffectRemoved, __this));
    }

    return (::uObject*)__this->_effects;
}

bool Element__get_HasEffects(Element* __this)
{
    return (__this->_effects != NULL) && (::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Effects_Effect*>(__this->_effects)->Count() > 0);
}

bool Element__get_HasActiveEffects(Element* __this)
{
    if (__this->HasEffects())
    {
        for (::uObject* enum_123 = ::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Effects_Effect*>(__this->_effects)->GetEnumerator(); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_123)); )
        {
            ::app::Fuse::Effects::Effect* e = ::app::Uno::Collections::IEnumerator__Fuse_Effects_Effect::Current(::uPtr< ::uObject*>(enum_123));

            if (::uPtr< ::app::Fuse::Effects::Effect*>(e)->Active())
            {
                return true;
            }
        }
    }

    return false;
}

bool Element__get_HasCompositionEffect(Element* __this)
{
    return __this->_compositionEffects > 0;
}

::app::Fuse::Elements::Cache* Element__get_Cache(Element* __this)
{
    ::app::Fuse::Elements::Cache* ind_140 = __this->_cache;
    return (ind_140 != NULL) ? ind_140 : (__this->_cache = ::app::Fuse::Elements::Cache__New_1(NULL, __this));
}

int Element__get_HitTestMode(Element* __this)
{
    return __this->_hitTestMode;
}

void Element__set_HitTestMode(Element* __this, int value)
{
    __this->_hitTestMode = value;
}

float Element__get_HitTestOpacityThreshold(Element* __this)
{
    return __this->_hitTestOpacityThreshold;
}

void Element__set_HitTestOpacityThreshold(Element* __this, float value)
{
    __this->_hitTestOpacityThreshold = value;
}

float Element__get_Width(Element* __this)
{
    return __this->_width;
}

void Element__set_Width(Element* __this, float value)
{
    if (__this->HasNoValue(0) || (__this->_width != value))
    {
        __this->_width = value;
        __this->GiveLocalValue(0);
        __this->OnWidthChanged();
    }
}

bool Element__get_HasWidth(Element* __this)
{
    return __this->HasValue(0);
}

int Element__get_WidthUnit(Element* __this)
{
    return __this->_WidthUnit;
}

void Element__set_WidthUnit(Element* __this, int value)
{
    __this->_WidthUnit = value;
}

float Element__get_Height(Element* __this)
{
    return __this->_height;
}

void Element__set_Height(Element* __this, float value)
{
    if (__this->HasNoValue(1) || (__this->_height != value))
    {
        __this->_height = value;
        __this->GiveLocalValue(1);
        __this->OnHeightChanged();
    }
}

bool Element__get_HasHeight(Element* __this)
{
    return __this->HasValue(1);
}

int Element__get_HeightUnit(Element* __this)
{
    return __this->_HeightUnit;
}

void Element__set_HeightUnit(Element* __this, int value)
{
    __this->_HeightUnit = value;
}

float Element__get_MinWidth(Element* __this)
{
    return __this->HasNoValue(2) ? 0.0f : ::uUnbox< float>(::uPtr< ::app::Fuse::Properties*>(__this->Properties())->Get(Element___minWidthHandle));
}

void Element__set_MinWidth(Element* __this, float value)
{
    if (__this->HasNoValue(2) || (::uUnbox< float>(::uPtr< ::app::Fuse::Properties*>(__this->Properties())->Get(Element___minWidthHandle)) != value))
    {
        ::uPtr< ::app::Fuse::Properties*>(__this->Properties())->Set(Element___minWidthHandle, ::uBox(::app::Uno::Float__typeof(), value));
        __this->GiveLocalValue(2);
        __this->OnMinWidthChanged();
    }
}

bool Element__get_HasMinWidth(Element* __this)
{
    return __this->HasValue(2);
}

int Element__get_MinWidthUnit(Element* __this)
{
    return __this->_MinWidthUnit;
}

void Element__set_MinWidthUnit(Element* __this, int value)
{
    __this->_MinWidthUnit = value;
}

float Element__get_MinHeight(Element* __this)
{
    return __this->HasNoValue(3) ? 0.0f : ::uUnbox< float>(::uPtr< ::app::Fuse::Properties*>(__this->Properties())->Get(Element___minHeightHandle));
}

void Element__set_MinHeight(Element* __this, float value)
{
    if (__this->HasNoValue(3) || (::uUnbox< float>(::uPtr< ::app::Fuse::Properties*>(__this->Properties())->Get(Element___minHeightHandle)) != value))
    {
        ::uPtr< ::app::Fuse::Properties*>(__this->Properties())->Set(Element___minHeightHandle, ::uBox(::app::Uno::Float__typeof(), value));
        __this->GiveLocalValue(3);
        __this->OnMinHeightChanged();
    }
}

bool Element__get_HasMinHeight(Element* __this)
{
    return __this->HasValue(3);
}

int Element__get_MinHeightUnit(Element* __this)
{
    return __this->_MinHeightUnit;
}

void Element__set_MinHeightUnit(Element* __this, int value)
{
    __this->_MinHeightUnit = value;
}

float Element__get_MaxWidth(Element* __this)
{
    return __this->HasNoValue(4) ? 0.0f : ::uUnbox< float>(::uPtr< ::app::Fuse::Properties*>(__this->Properties())->Get(Element___maxWidthHandle));
}

void Element__set_MaxWidth(Element* __this, float value)
{
    if (__this->HasNoValue(4) || (::uUnbox< float>(::uPtr< ::app::Fuse::Properties*>(__this->Properties())->Get(Element___maxWidthHandle)) != value))
    {
        ::uPtr< ::app::Fuse::Properties*>(__this->Properties())->Set(Element___maxWidthHandle, ::uBox(::app::Uno::Float__typeof(), value));
        __this->GiveLocalValue(4);
        __this->OnMaxWidthChanged();
    }
}

bool Element__get_HasMaxWidth(Element* __this)
{
    return __this->HasValue(4);
}

int Element__get_MaxWidthUnit(Element* __this)
{
    return __this->_MaxWidthUnit;
}

void Element__set_MaxWidthUnit(Element* __this, int value)
{
    __this->_MaxWidthUnit = value;
}

float Element__get_MaxHeight(Element* __this)
{
    return __this->HasNoValue(5) ? 0.0f : ::uUnbox< float>(::uPtr< ::app::Fuse::Properties*>(__this->Properties())->Get(Element___maxHeightHandle));
}

void Element__set_MaxHeight(Element* __this, float value)
{
    if (__this->HasNoValue(5) || (::uUnbox< float>(::uPtr< ::app::Fuse::Properties*>(__this->Properties())->Get(Element___maxHeightHandle)) != value))
    {
        ::uPtr< ::app::Fuse::Properties*>(__this->Properties())->Set(Element___maxHeightHandle, ::uBox(::app::Uno::Float__typeof(), value));
        __this->GiveLocalValue(5);
        __this->OnMaxHeightChanged();
    }
}

bool Element__get_HasMaxHeight(Element* __this)
{
    return __this->HasValue(5);
}

int Element__get_MaxHeightUnit(Element* __this)
{
    return __this->_MaxHeightUnit;
}

void Element__set_MaxHeightUnit(Element* __this, int value)
{
    __this->_MaxHeightUnit = value;
}

int Element__get_Alignment(Element* __this)
{
    return (__this->_layoutBackingBits >> 0) & 15;
}

void Element__set_Alignment(Element* __this, int value)
{
    if (__this->HasNoValue(6) || (__this->Alignment() != value))
    {
        __this->SetLayoutValue(15, 0, value);

        if (value != __this->Alignment())
        {
            U_THROW(::app::Uno::Exception__New_2(NULL));
        }

        __this->GiveLocalValue(6);
        __this->OnAlignChanged();
    }
}

bool Element__get_HasAlignment(Element* __this)
{
    return __this->HasValue(6);
}

int Element__get_Visibility(Element* __this)
{
    return (__this->_layoutBackingBits >> 4) & 3;
}

void Element__set_Visibility(Element* __this, int value)
{
    if (__this->HasNoValue(7) || (__this->Visibility() != value))
    {
        __this->SetLayoutValue(3, 4, value);
        __this->GiveLocalValue(7);
        __this->OnVisibilityChanged();
    }
}

::app::Uno::Float4 Element__get_Margin(Element* __this)
{
    return __this->_margin;
}

void Element__set_Margin(Element* __this, ::app::Uno::Float4 value)
{
    if (__this->HasNoValue(8) || !::app::Fuse::Elements::SpeedHelpers__FastEquals(NULL, __this->_margin, value))
    {
        __this->_margin = value;
        __this->GiveLocalValue(8);
        __this->OnMarginChanged();
    }
}

::app::Uno::Float4 Element__get_Padding(Element* __this)
{
    return __this->_padding;
}

void Element__set_Padding(Element* __this, ::app::Uno::Float4 value)
{
    if (__this->HasNoValue(9) || !::app::Fuse::Elements::SpeedHelpers__FastEquals(NULL, __this->_padding, value))
    {
        __this->_padding = value;
        __this->GiveLocalValue(9);
        __this->OnPaddingChanged();
    }
}

::app::Uno::Float2 Element__get_Offset(Element* __this)
{
    return __this->_offset;
}

void Element__set_Offset(Element* __this, ::app::Uno::Float2 value)
{
    if (__this->HasNoValue(12) || !::app::Fuse::Elements::SpeedHelpers__FastEquals_1(NULL, __this->_offset, value))
    {
        __this->_offset = value;
        __this->GiveLocalValue(12);
        __this->OnOffsetChanged();
    }
}

bool Element__get_HasOffset(Element* __this)
{
    return __this->HasValue(12);
}

int Element__get_OffsetUnit(Element* __this)
{
    return __this->_OffsetUnit;
}

void Element__set_OffsetUnit(Element* __this, int value)
{
    __this->_OffsetUnit = value;
}

::app::Uno::Float2 Element__get_Anchor(Element* __this)
{
    return __this->_anchor;
}

void Element__set_Anchor(Element* __this, ::app::Uno::Float2 value)
{
    if (__this->HasNoValue(13) || !::app::Fuse::Elements::SpeedHelpers__FastEquals_1(NULL, __this->_anchor, value))
    {
        __this->_anchor = value;
        __this->GiveLocalValue(13);
        __this->OnAnchorChanged();
    }
}

bool Element__get_HasAnchor(Element* __this)
{
    return __this->HasValue(13);
}

int Element__get_AnchorUnit(Element* __this)
{
    return __this->_AnchorUnit;
}

void Element__set_AnchorUnit(Element* __this, int value)
{
    __this->_AnchorUnit = value;
}

bool Element__get_DefaultSnapToPixels(Element* __this)
{
    return true;
}

bool Element__get_SnapToPixelStore(Element* __this)
{
    return ((__this->_layoutBackingBits >> 6) & 1) != 0;
}

void Element__set_SnapToPixelStore(Element* __this, bool value)
{
    if (value)
    {
        __this->_layoutBackingBits = __this->_layoutBackingBits | 64;
    }
    else
    {
        __this->_layoutBackingBits = __this->_layoutBackingBits & -65;
    }
}

bool Element__get_SnapToPixels(Element* __this)
{
    return __this->HasNoValue(10) ? __this->DefaultSnapToPixels() : __this->SnapToPixelStore();
}

void Element__set_SnapToPixels(Element* __this, bool value)
{
    if (__this->HasNoValue(10) || (__this->SnapToPixelStore() != value))
    {
        __this->SnapToPixelStore(value);
        __this->GiveLocalValue(10);
        __this->OnSnapToPixelsChanged();
    }
}

bool Element__get_DefaultClipToBounds(Element* __this)
{
    return false;
}

bool Element__get_ClipToBoundsStore(Element* __this)
{
    return ((__this->_layoutBackingBits >> 7) & 1) != 0;
}

void Element__set_ClipToBoundsStore(Element* __this, bool value)
{
    if (value)
    {
        __this->_layoutBackingBits = __this->_layoutBackingBits | 128;
    }
    else
    {
        __this->_layoutBackingBits = __this->_layoutBackingBits & -129;
    }
}

bool Element__get_ClipToBounds(Element* __this)
{
    return __this->HasNoValue(11) ? __this->DefaultClipToBounds() : __this->ClipToBoundsStore();
}

void Element__set_ClipToBounds(Element* __this, bool value)
{
    if (__this->HasNoValue(11) || (__this->ClipToBoundsStore() != value))
    {
        __this->ClipToBoundsStore(value);
        __this->GiveLocalValue(11);
        __this->OnClipToBoundsChanged();
    }
}

::app::Uno::Float2 Element__get_AbsoluteLayoutPosition(Element* __this)
{
    ::app::Uno::Float2 p = __this->ActualPosition();

    if (__this->ParentElement() != NULL)
    {
        p = ::app::Uno::Float2__op_Addition(NULL, p, ::uPtr< ::app::Fuse::Elements::Element*>(__this->ParentElement())->AbsoluteLayoutPosition());
    }

    return p;
}

::app::Uno::Float2 Element__get_ActualPosition(Element* __this)
{
    if (__this->_haveActualPositionCache)
    {
        return __this->_actualPositionCache;
    }

    if (!__this->SnapToPixels())
    {
        return __this->_actualPosition;
    }

    ::app::Uno::Float2 parentP = ::app::Uno::Float2__New_1(NULL, 0.0f);

    if (__this->ParentElement() != NULL)
    {
        parentP = ::uPtr< ::app::Fuse::Elements::Element*>(__this->ParentElement())->AbsoluteLayoutPosition();
    }

    ::app::Uno::Float2 p = ::app::Uno::Float2__op_Addition(NULL, parentP, __this->_actualPosition);
    p = __this->Snap(p);
    p = ::app::Uno::Float2__op_Subtraction(NULL, p, parentP);
    __this->_actualPositionCache = p;
    __this->_haveActualPositionCache = true;
    return p;
}

::app::Uno::Float2 Element__get_ActualSize(Element* __this)
{
    if (__this->SnapToPixels())
    {
        return __this->Snap(__this->_actualSize);
    }

    return __this->_actualSize;
}

::app::Uno::Float3 Element__Fuse_IActualSize_get_ActualSize(Element* __this)
{
    return ::app::Uno::Float3__New_3(NULL, __this->ActualSize(), 0.0f);
}

bool Element__get_AutoKeyboardCompensation(Element* __this)
{
    return __this->_autoKeyboardCompensation;
}

void Element__set_AutoKeyboardCompensation(Element* __this, bool value)
{
    if (__this->_autoKeyboardCompensation != value)
    {
        __this->_autoKeyboardCompensation = value;
        ::uObject* w = __this->Window();

        if ((w != NULL) && ::app::Fuse::IWindow::IsOnscreenKeyboardVisible(::uPtr< ::uObject*>(w)))
        {
            __this->InvalidateLayout();
        }
    }
}

int Element__get_EffectiveHorizontalAlignment(Element* __this)
{
    int raw = ::app::Fuse::Elements::AlignmentHelpers__GetHorizontalAlign(NULL, __this->Alignment());

    if (raw == 1)
    {
        return 0;
    }

    if (raw == 3)
    {
        return 2;
    }

    if (raw == 2)
    {
        return 1;
    }

    if (__this->HasOffset())
    {
        return 0;
    }

    return 1;
}

int Element__get_EffectiveVerticalAlignment(Element* __this)
{
    int raw = ::app::Fuse::Elements::AlignmentHelpers__GetVerticalAlign(NULL, __this->Alignment());

    if (raw == 4)
    {
        return 0;
    }

    if (raw == 12)
    {
        return 2;
    }

    if (raw == 8)
    {
        return 1;
    }

    if (__this->HasOffset())
    {
        return 0;
    }

    return 1;
}

float Element__get_AbsoluteZoom(Element* __this)
{
    ::uObject* w = __this->Window();

    if (w == NULL)
    {
        return 1.0f;
    }

    return ::app::Fuse::IWindow::PPIZoomMultiplier(::uPtr< ::uObject*>(w));
}

bool Element__get_AddedByStyle(Element* __this)
{
    return __this->_AddedByStyle;
}

void Element__set_AddedByStyle(Element* __this, bool value)
{
    __this->_AddedByStyle = value;
}

Element* Element__get_ParentElement(Element* __this)
{
    return __this->_parentElement;
}

bool Element__get_IsVisible(Element* __this)
{
    return __this->Visibility() == 0;
}

int Element__get_SubNodeCount(Element* __this)
{
    return __this->SubElementCount();
}

int Element__get_SubElementCount(Element* __this)
{
    return 0;
}

float Element__get_Opacity(Element* __this)
{
    return __this->_opacity;
}

void Element__set_Opacity(Element* __this, float value)
{
    if (__this->_opacity != value)
    {
        __this->_opacity = value;
        __this->GiveLocalValue_1(0);
        __this->OnOpacityChanged();
    }
}

int Element__get_DepthTestMode(Element* __this)
{
    return __this->_depthTest;
}

void Element__set_DepthTestMode(Element* __this, int value)
{
    if (value != __this->_depthTest)
    {
        __this->_depthTest = value;
        __this->GiveLocalValue_1(5);
        __this->OnDepthTestModeChanged();
    }
}

bool Element__get_HasDepthTestMode(Element* __this)
{
    return __this->HasValue_1(5);
}

::app::Uno::Float4 Element__get_TextColor(Element* __this)
{
    return !__this->HasNoValue_1(1) ? __this->_textColor : ((__this->ParentElement() != NULL) ? ::uPtr< ::app::Fuse::Elements::Element*>(__this->ParentElement())->TextColor() : ::app::Uno::Float4__New_2(NULL, 0.0f, 0.0f, 0.0f, 1.0f));
}

void Element__set_TextColor(Element* __this, ::app::Uno::Float4 value)
{
    if (__this->HasNoValue_1(1) || !::app::Fuse::Elements::SpeedHelpers__FastEquals(NULL, __this->_textColor, value))
    {
        __this->_textColor = value;
        __this->GiveLocalValue_1(1);
        __this->OnTextColorChanged();
    }
}

::app::Fuse::Font* Element__get_Font(Element* __this)
{
    return !__this->HasNoValue_1(2) ? __this->_font : ((__this->ParentElement() != NULL) ? ::uPtr< ::app::Fuse::Elements::Element*>(__this->ParentElement())->Font() : ::app::Fuse::Fonts__get_Fallback(NULL));
}

void Element__set_Font(Element* __this, ::app::Fuse::Font* value)
{
    if (__this->HasNoValue_1(2) || (__this->_font != value))
    {
        __this->_font = value;
        __this->GiveLocalValue_1(2);
        __this->OnFontChanged();
    }
}

float Element__get_FontSize(Element* __this)
{
    return !__this->HasNoValue_1(3) ? __this->_fontSize : ((__this->ParentElement() != NULL) ? ::uPtr< ::app::Fuse::Elements::Element*>(__this->ParentElement())->FontSize() : 16.0f);
}

void Element__set_FontSize(Element* __this, float value)
{
    if (__this->HasNoValue_1(3) || (__this->_fontSize != value))
    {
        __this->_fontSize = value;
        __this->GiveLocalValue_1(3);
        __this->OnFontSizeChanged();
    }
}

int Element__get_TextAlignment(Element* __this)
{
    return !__this->HasNoValue_1(4) ? __this->_textAlignment : ((__this->ParentElement() != NULL) ? ::uPtr< ::app::Fuse::Elements::Element*>(__this->ParentElement())->TextAlignment() : 0);
}

void Element__set_TextAlignment(Element* __this, int value)
{
    if (__this->HasNoValue_1(4) || (__this->_textAlignment != value))
    {
        __this->_textAlignment = value;
        __this->GiveLocalValue_1(4);
        __this->OnTextAlignmentChanged();
    }
}

int Element__get_TransformOrigin(Element* __this)
{
    return __this->_transformOrigin;
}

void Element__set_TransformOrigin(Element* __this, int value)
{
    if (__this->_transformOrigin != value)
    {
        __this->_transformOrigin = value;
        __this->InvalidateLocalTransform();
    }
}

bool Element__get_DrawNextFrame(Element* __this)
{
    return __this->_visualDirty || __this->_layoutDirty;
}

bool Element__get_IsVisualInvalid(Element* __this)
{
    return __this->_visualDirty;
}

void Element__Fuse_Triggers_Actions_IShow_Show(Element* __this)
{
    __this->Visibility(0);
}

void Element__Fuse_Triggers_Actions_ICollapse_Collapse(Element* __this)
{
    __this->Visibility(1);
}

void Element__Fuse_Triggers_Actions_IHide_Hide(Element* __this)
{
    __this->Visibility(2);
}

::app::Uno::Rect Element__CalcRenderBounds(Element* __this)
{
    return __this->Bounds();
}

::app::Uno::Recti Element__GetViewportInvertPixelRect(Element* __this, ::app::Fuse::DrawContext* dc, ::app::Uno::Rect localRegion)
{
    ::app::Uno::Float4x4 transformMatrix = ::uPtr< ::app::Fuse::DrawContext*>(dc)->GetLocalToClipTransform((::app::Fuse::Node*)__this);
    ::app::Uno::Rect esr = ::app::Uno::Rect__Transform(NULL, localRegion, transformMatrix);
    ::app::Uno::Float2 low = ::app::Uno::Math__Floor_2(NULL, ::app::Uno::Float2__op_Multiply_1(NULL, ::app::Uno::Float2__op_Division_1(NULL, ::app::Uno::Float2__op_Addition_1(NULL, ::app::Uno::Math__Min_3(NULL, esr.Minimum(), esr.Maximum()), 1.0f), 2.0f), ::app::Uno::Float2__op_Implicit(NULL, dc->ViewportSize())));
    ::app::Uno::Float2 high = ::app::Uno::Math__Ceil_2(NULL, ::app::Uno::Float2__op_Multiply_1(NULL, ::app::Uno::Float2__op_Division_1(NULL, ::app::Uno::Float2__op_Addition_1(NULL, ::app::Uno::Math__Max_3(NULL, esr.Minimum(), esr.Maximum()), 1.0f), 2.0f), ::app::Uno::Float2__op_Implicit(NULL, dc->ViewportSize())));
    ::app::Uno::Recti r = ::app::Uno::Recti__New_1(NULL, (int)low.X, (int)((float)dc->ViewportSize().Y - high.Y), (int)high.X, (int)((float)dc->ViewportSize().Y - low.Y));
    return r;
}

::app::Uno::Recti Element__GetVisibleViewportInvertPixelRect(Element* __this, ::app::Fuse::DrawContext* dc, ::app::Uno::Rect localRegion)
{
    return ::app::Uno::Recti__Intersect(NULL, ::uPtr< ::app::Fuse::DrawContext*>(dc)->Scissor(), __this->GetViewportInvertPixelRect(dc, localRegion));
}

::app::Uno::Graphics::Framebuffer* Element__CaptureRegion(Element* __this, ::app::Fuse::DrawContext* dc, ::app::Uno::Rect region, ::app::Uno::Float2 padding)
{
    ::app::Uno::Float2 sz = ::app::Uno::Float2__op_Addition(NULL, region.Size(), ::app::Uno::Float2__op_Multiply(NULL, padding, 2.0f));
    ::app::Uno::Float2 pixelSize = ::app::Uno::Math__Ceil_2(NULL, ::app::Uno::Float2__op_Multiply(NULL, sz, __this->AbsoluteZoom()));
    ::app::Uno::Int2 fsz = ::app::Uno::Int2__New_2(NULL, (int)pixelSize.X, (int)pixelSize.Y);

    if ((fsz.X > ::app::Uno::Graphics::Texture2D__get_MaxSize(NULL)) || (fsz.Y > ::app::Uno::Graphics::Texture2D__get_MaxSize(NULL)))
    {
        ::app::Uno::Diagnostics::Debug__Log(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("CaptureRegion bigger than maximum texture size, dropping rendering (size: "), ::uBox(::app::Uno::Int2__typeof(), fsz)), ::uGetConstString(", max-size: ")), ::uBox< int>(::app::Uno::Int__typeof(), ::app::Uno::Graphics::Texture2D__get_MaxSize(NULL))), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Elements\\0.1.0\\$.uno"), 145);
        return NULL;
    }

    ::app::Uno::Graphics::Framebuffer* fb = ::app::Fuse::FramebufferPool__Lock(NULL, fsz, 3, false);
    ::app::Fuse::OrthographicCamera* cc = ::app::Fuse::OrthographicCamera__New_1(NULL, ::app::Uno::Float2__New_2(NULL, -padding.X - region.Left, -padding.Y - region.Top), sz, __this->WorldTransformInverse());
    ::uObject* oldCam = ::uPtr< ::app::Fuse::DrawContext*>(dc)->PushCamera((::uObject*)cc);
    dc->PushRenderTarget(fb);
    dc->Clear(::app::Uno::Float4__New_1(NULL, 0.0f), 1.0f);
    ::app::Uno::Recti oldScissor = dc->PushScissor(::app::Uno::Recti__New_1(NULL, 0, 0, fsz.X, fsz.Y));
    __this->LocalDraw(dc);
    dc->PopScissor(oldScissor);
    dc->PopRenderTarget();
    dc->PopCamera(oldCam);
    return fb;
}

void Element__Draw(Element* __this, ::app::Fuse::DrawContext* dc)
{
    if (__this->Visibility() != 0)
    {
        return;
    }

    double t = ::app::Uno::Diagnostics::Clock__GetSeconds(NULL);
    ::app::Fuse::Profiling__BeginDrawNode(NULL, (::uObject*)__this);
    ::app::Uno::Recti visibleRect = __this->GetVisibleViewportInvertPixelRect(dc, __this->Bounds());

    if (!::app::Uno::Recti__New_2(NULL, ::app::Uno::Int2__New_1(NULL, 0), ::uPtr< ::app::Fuse::DrawContext*>(dc)->ViewportSize()).Intersects(visibleRect))
    {
        ::app::Fuse::Profiling__EndDrawNode(NULL, ::app::Uno::Diagnostics::Clock__GetSeconds(NULL) - t);
        return;
    }

    if (__this->NeedsClipping())
    {
        ::app::Uno::Recti oldScissor = ::uPtr< ::app::Fuse::DrawContext*>(dc)->PushScissor(visibleRect);
        __this->Composit(dc);
        dc->PopScissor(oldScissor);
    }
    else
    {
        __this->Composit(dc);
    }

    __this->_visualDirty = false;
    ::app::Fuse::Profiling__EndDrawNode(NULL, ::app::Uno::Diagnostics::Clock__GetSeconds(NULL) - t);
}

void Element__LocalDraw(Element* __this, ::app::Fuse::DrawContext* dc)
{
    int old = 0;

    if (__this->HasDepthTestMode())
    {
        old = ::uPtr< ::app::Fuse::DrawContext*>(dc)->PushDepthTest(__this->DepthTestMode());
    }

    __this->OnDraw(dc);

    if (__this->HasDepthTestMode())
    {
        dc->PopDepthTest(old);
    }
}

void Element__AddStyleEffect(Element* __this, ::app::Fuse::Effects::Effect* e)
{
    ::uPtr< ::app::Fuse::Effects::Effect*>(e)->AddedByStyle = true;
    ::app::Uno::Collections::ICollection__Fuse_Effects_Effect::Add(::uPtr< ::uObject*>(__this->Effects()), e);
}

void Element__OnEffectAdded(Element* __this, ::app::Fuse::Effects::Effect* e)
{
    if (::uPtr< ::app::Fuse::Effects::Effect*>(e)->Type() == 1)
    {
        __this->_compositionEffects++;
    }

    ::uPtr< ::app::Fuse::Effects::Effect*>(e)->Added(__this);
    e->add_RenderingChanged(::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Effects_Effect__typeof(), (const void*)::app::Fuse::Elements::Element__OnEffectRenderingChanged, __this));
    __this->InvalidateVisual(8);
}

void Element__OnEffectRemoved(Element* __this, ::app::Fuse::Effects::Effect* e)
{
    if (::uPtr< ::app::Fuse::Effects::Effect*>(e)->Type() == 1)
    {
        __this->_compositionEffects--;
    }

    ::uPtr< ::app::Fuse::Effects::Effect*>(e)->Removed(__this);
    e->remove_RenderingChanged(::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Effects_Effect__typeof(), (const void*)::app::Fuse::Elements::Element__OnEffectRenderingChanged, __this));
    __this->InvalidateVisual(8);
    e->AddedByStyle = false;
}

void Element__OnEffectRenderingChanged(Element* __this, ::app::Fuse::Effects::Effect* e)
{
    __this->InvalidateVisual(10);
}

void Element__Composit(Element* __this, ::app::Fuse::DrawContext* dc)
{
    if (((__this->Opacity() <= 0.0f) || (__this->RenderBoundsWithEffects().Size().X < 1.0f)) || (__this->RenderBoundsWithEffects().Size().Y < 1.0f))
    {
        return;
    }

    if (__this->Opacity() >= 1.0f)
    {
        ::uPtr< ::app::Fuse::Elements::Cache*>(__this->Cache())->DrawHeuristically(dc);
        return;
    }

    ::uPtr< ::app::Fuse::Elements::Cache*>(__this->Cache())->PinAndValidate(dc);
    ::uPtr< ::app::Fuse::Elements::Cache*>(__this->Cache())->Blit(dc, __this->Opacity());
    ::uPtr< ::app::Fuse::Elements::Cache*>(__this->Cache())->Unpin();
}

void Element__CompositEffects(Element* __this, ::app::Fuse::DrawContext* dc)
{
    bool hasActiveEffects = __this->HasActiveEffects();

    if (hasActiveEffects)
    {
        for (::uObject* enum_124 = ::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Effects_Effect*>(__this->_effects)->GetEnumerator(); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_124)); )
        {
            ::app::Fuse::Effects::Effect* e = ::app::Uno::Collections::IEnumerator__Fuse_Effects_Effect::Current(::uPtr< ::uObject*>(enum_124));

            if ((::uPtr< ::app::Fuse::Effects::Effect*>(e)->Type() == 0) && ::uPtr< ::app::Fuse::Effects::Effect*>(e)->Active())
            {
                ::uPtr< ::app::Fuse::Effects::Effect*>(e)->Render(dc);
            }
        }
    }

    if (__this->HasCompositionEffect())
    {
        for (::uObject* enum_125 = ::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Effects_Effect*>(__this->_effects)->GetEnumerator(); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_125)); )
        {
            ::app::Fuse::Effects::Effect* e = ::app::Uno::Collections::IEnumerator__Fuse_Effects_Effect::Current(::uPtr< ::uObject*>(enum_125));

            if ((::uPtr< ::app::Fuse::Effects::Effect*>(e)->Type() == 1) && ::uPtr< ::app::Fuse::Effects::Effect*>(e)->Active())
            {
                ::uPtr< ::app::Fuse::Effects::Effect*>(e)->Render(dc);
            }
        }
    }
    else
    {
        __this->LocalDraw(dc);
    }

    if (hasActiveEffects)
    {
        for (::uObject* enum_126 = ::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Effects_Effect*>(__this->_effects)->GetEnumerator(); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_126)); )
        {
            ::app::Fuse::Effects::Effect* e = ::app::Uno::Collections::IEnumerator__Fuse_Effects_Effect::Current(::uPtr< ::uObject*>(enum_126));

            if ((::uPtr< ::app::Fuse::Effects::Effect*>(e)->Type() == 2) && ::uPtr< ::app::Fuse::Effects::Effect*>(e)->Active())
            {
                ::uPtr< ::app::Fuse::Effects::Effect*>(e)->Render(dc);
            }
        }
    }
}

void Element__OnIsEnabledChanged(Element* __this)
{
    ::app::Fuse::Node__OnIsEnabledChanged(__this);
    __this->InvalidateVisual(4);
}

bool Element__IsPointInside(Element* __this, ::app::Uno::Float2 localPoint)
{
    return !((((localPoint.X < 0.0f) || (localPoint.Y < 0.0f)) || (localPoint.X > __this->ActualSize().X)) || (localPoint.Y > __this->ActualSize().Y));
}

void Element__OnHitTest(Element* __this, ::app::Fuse::HitTestContext* htc)
{
    if ((__this->Visibility() != 0) || (__this->Opacity() <= __this->HitTestOpacityThreshold()))
    {
        return;
    }

    if (!__this->RenderBounds().Contains_1(::uPtr< ::app::Fuse::HitTestContext*>(htc)->LocalPoint()))
    {
        return;
    }

    if ((__this->HitTestMode() & 4) == 4)
    {
        __this->OnHitTestChildren(htc);
    }

    if ((__this->HitTestMode() & 1) == 1)
    {
        __this->OnHitTestLocalVisual(htc);
    }

    if ((__this->HitTestMode() & 2) == 2)
    {
        if (__this->IsPointInside(::uPtr< ::app::Fuse::HitTestContext*>(htc)->LocalPoint()))
        {
            ::uPtr< ::app::Fuse::HitTestContext*>(htc)->Hit((::app::Fuse::Node*)__this);
        }
    }
}

void Element__OnHitTestLocalVisual(Element* __this, ::app::Fuse::HitTestContext* htc)
{
}

void Element__OnHitTestChildren(Element* __this, ::app::Fuse::HitTestContext* htc)
{
}

bool Element__HasNoValue(Element* __this, int ep)
{
    return (__this->_layoutPropertyBits & (3 << (ep * 2))) == 0;
}

bool Element__HasValue(Element* __this, int ep)
{
    return (__this->_layoutPropertyBits & (3 << (ep * 2))) != 0;
}

bool Element__HasStyleValue(Element* __this, int ep)
{
    return ((__this->_layoutPropertyBits >> (ep * 2)) & 3) == 1;
}

void Element__GiveLocalValue(Element* __this, int ep)
{
    __this->_layoutPropertyBits = __this->_layoutPropertyBits & ~(3 << (ep * 2));
    __this->_layoutPropertyBits = __this->_layoutPropertyBits | (2 << (ep * 2));
}

void Element__GiveStyleValue(Element* __this, int ep)
{
    __this->_layoutPropertyBits = __this->_layoutPropertyBits & ~(3 << (ep * 2));
    __this->_layoutPropertyBits = __this->_layoutPropertyBits | (1 << (ep * 2));
}

void Element__ClearValue(Element* __this, int ep)
{
    __this->_layoutPropertyBits = __this->_layoutPropertyBits & ~(3 << (ep * 2));
}

void Element__OnWidthChanged(Element* __this)
{
    __this->InvalidateLayout();
}

void Element__ResetWidth(Element* __this)
{
    if (!__this->HasNoValue(0))
    {
        __this->_width = 0.0f;
        __this->WidthUnit(0);
        __this->ClearValue(0);
        __this->OnWidthChanged();
    }
}

void Element__SetStyleWidth(Element* __this, float val)
{
    if (__this->HasNoValue(0))
    {
        __this->_width = val;
        __this->GiveStyleValue(0);
        __this->OnWidthChanged();
    }
}

void Element__OnHeightChanged(Element* __this)
{
    __this->InvalidateLayout();
}

void Element__ResetHeight(Element* __this)
{
    if (!__this->HasNoValue(1))
    {
        __this->_height = 0.0f;
        __this->HeightUnit(0);
        __this->ClearValue(1);
        __this->OnHeightChanged();
    }
}

void Element__SetStyleHeight(Element* __this, float val)
{
    if (__this->HasNoValue(1))
    {
        __this->_height = val;
        __this->GiveStyleValue(1);
        __this->OnHeightChanged();
    }
}

void Element__OnMinWidthChanged(Element* __this)
{
    __this->InvalidateLayout();
}

void Element__ResetMinWidth(Element* __this)
{
    if (!__this->HasNoValue(2))
    {
        __this->MinWidthUnit(0);
        ::uPtr< ::app::Fuse::Properties*>(__this->Properties())->Clear(Element___minWidthHandle);
        __this->ClearValue(2);
        __this->OnMinWidthChanged();
    }
}

void Element__SetStyleMinWidth(Element* __this, float val)
{
    if (__this->HasNoValue(2))
    {
        ::uPtr< ::app::Fuse::Properties*>(__this->Properties())->Set(Element___minWidthHandle, ::uBox(::app::Uno::Float__typeof(), val));
        __this->GiveStyleValue(2);
        __this->OnMinWidthChanged();
    }
}

void Element__SetStyleMinWidth_1(Element* __this, float val, int unit)
{
    if (__this->HasNoValue(2))
    {
        __this->MinWidthUnit(unit);
        ::uPtr< ::app::Fuse::Properties*>(__this->Properties())->Set(Element___minWidthHandle, ::uBox(::app::Uno::Float__typeof(), val));
        __this->GiveStyleValue(2);
        __this->OnMinWidthChanged();
    }
}

void Element__OnMinHeightChanged(Element* __this)
{
    __this->InvalidateLayout();
}

void Element__ResetMinHeight(Element* __this)
{
    if (!__this->HasNoValue(3))
    {
        __this->MinHeightUnit(0);
        ::uPtr< ::app::Fuse::Properties*>(__this->Properties())->Clear(Element___minHeightHandle);
        __this->ClearValue(3);
        __this->OnMinHeightChanged();
    }
}

void Element__SetStyleMinHeight(Element* __this, float val)
{
    if (__this->HasNoValue(3))
    {
        ::uPtr< ::app::Fuse::Properties*>(__this->Properties())->Set(Element___minHeightHandle, ::uBox(::app::Uno::Float__typeof(), val));
        __this->GiveStyleValue(3);
        __this->OnMinHeightChanged();
    }
}

void Element__SetStyleMinHeight_1(Element* __this, float val, int unit)
{
    if (__this->HasNoValue(3))
    {
        __this->MinHeightUnit(unit);
        ::uPtr< ::app::Fuse::Properties*>(__this->Properties())->Set(Element___minHeightHandle, ::uBox(::app::Uno::Float__typeof(), val));
        __this->GiveStyleValue(3);
        __this->OnMinHeightChanged();
    }
}

void Element__OnMaxWidthChanged(Element* __this)
{
    __this->InvalidateLayout();
}

void Element__ResetMaxWidth(Element* __this)
{
    if (!__this->HasNoValue(4))
    {
        __this->MaxWidthUnit(0);
        ::uPtr< ::app::Fuse::Properties*>(__this->Properties())->Clear(Element___maxWidthHandle);
        __this->ClearValue(4);
        __this->OnMaxWidthChanged();
    }
}

void Element__SetStyleMaxWidth_1(Element* __this, float val, int unit)
{
    if (__this->HasNoValue(4))
    {
        __this->MaxWidthUnit(unit);
        ::uPtr< ::app::Fuse::Properties*>(__this->Properties())->Set(Element___maxWidthHandle, ::uBox(::app::Uno::Float__typeof(), val));
        __this->GiveStyleValue(4);
        __this->OnMaxWidthChanged();
    }
}

void Element__OnMaxHeightChanged(Element* __this)
{
    __this->InvalidateLayout();
}

void Element__ResetMaxHeight(Element* __this)
{
    if (!__this->HasNoValue(5))
    {
        __this->MaxHeightUnit(0);
        ::uPtr< ::app::Fuse::Properties*>(__this->Properties())->Clear(Element___maxHeightHandle);
        __this->ClearValue(5);
        __this->OnMaxHeightChanged();
    }
}

void Element__SetStyleMaxHeight_1(Element* __this, float val, int unit)
{
    if (__this->HasNoValue(5))
    {
        __this->MaxHeightUnit(unit);
        ::uPtr< ::app::Fuse::Properties*>(__this->Properties())->Set(Element___maxHeightHandle, ::uBox(::app::Uno::Float__typeof(), val));
        __this->GiveStyleValue(5);
        __this->OnMaxHeightChanged();
    }
}

void Element__SetLayoutValue(Element* __this, int mask, int bit, int val)
{
    __this->_layoutBackingBits = (__this->_layoutBackingBits & ~(mask << bit)) | (val << bit);
}

void Element__OnAlignChanged(Element* __this)
{
    __this->InvalidateLayout();
}

void Element__ResetAlignment(Element* __this)
{
    if (!__this->HasNoValue(6))
    {
        __this->SetLayoutValue(15, 0, 0);
        __this->ClearValue(6);
        __this->OnAlignChanged();
    }
}

void Element__SetStyleAlignment(Element* __this, int val)
{
    if (__this->HasNoValue(6))
    {
        __this->SetLayoutValue(15, 0, val);
        __this->GiveStyleValue(6);
        __this->OnAlignChanged();
    }
}

void Element__OnVisibilityChanged(Element* __this)
{
    __this->InvalidateLayout();
    __this->InvalidateVisual(5);
}

void Element__ResetVisibility(Element* __this)
{
    if (!__this->HasNoValue(7))
    {
        __this->SetLayoutValue(3, 4, 0);
        __this->ClearValue(7);
        __this->OnVisibilityChanged();
    }
}

void Element__OnMarginChanged(Element* __this)
{
    __this->InvalidateLayout();
}

void Element__ResetMargin(Element* __this)
{
    if (!__this->HasNoValue(8))
    {
        __this->_margin = ::app::Uno::Float4__New_1(NULL, 0.0f);
        __this->ClearValue(8);
        __this->OnMarginChanged();
    }
}

void Element__SetStyleMargin(Element* __this, ::app::Uno::Float4 margin)
{
    if (__this->HasNoValue(8))
    {
        __this->_margin = margin;
        __this->GiveStyleValue(8);
        __this->OnMarginChanged();
    }
}

void Element__OnPaddingChanged(Element* __this)
{
    __this->InvalidateLayout();
}

void Element__ResetPadding(Element* __this)
{
    if (!__this->HasNoValue(9))
    {
        __this->_padding = ::app::Uno::Float4__New_1(NULL, 0.0f);
        __this->ClearValue(9);
        __this->OnPaddingChanged();
    }
}

void Element__SetStylePadding(Element* __this, ::app::Uno::Float4 padding)
{
    if (__this->HasNoValue(9))
    {
        __this->_padding = padding;
        __this->GiveStyleValue(9);
        __this->OnPaddingChanged();
    }
}

void Element__OnOffsetChanged(Element* __this)
{
    __this->InvalidateLayout();
}

void Element__OnAnchorChanged(Element* __this)
{
    __this->InvalidateLayout();
}

void Element__OnSnapToPixelsChanged(Element* __this)
{
    __this->InvalidateLayout();
}

void Element__ResetSnapToPixels(Element* __this)
{
    if (!__this->HasNoValue(10))
    {
        __this->SnapToPixelStore(false);
        __this->ClearValue(10);
        __this->OnSnapToPixelsChanged();
    }
}

void Element__OnClipToBoundsChanged(Element* __this)
{
    __this->InvalidateVisual(7);
}

void Element__ResetClipToBounds(Element* __this)
{
    if (!__this->HasNoValue(11))
    {
        __this->ClipToBoundsStore(false);
        __this->ClearValue(11);
        __this->OnClipToBoundsChanged();
    }
}

void Element__OnBringIntoView(Element* __this, Element* elm)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->RequestBringIntoView, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->RequestBringIntoView)->InvokeVoid< ::uObject*, ::app::Fuse::Elements::RequestBringIntoViewArgs*>((::uObject*)__this, ::app::Fuse::Elements::RequestBringIntoViewArgs__New_2(NULL, elm));
    }

    if (__this->ParentElement() != NULL)
    {
        ::uPtr< ::app::Fuse::Elements::Element*>(__this->ParentElement())->OnBringIntoView(elm);
    }
}

void Element__BringIntoView(Element* __this)
{
    __this->OnBringIntoView(__this);
}

void Element__PerformLayout(Element* __this)
{
    ::uObject* ind_130 = __this->Window();
    ::uObject* w = (ind_130 != NULL) ? ind_130 : ::app::Fuse::App__get_CurrentWindow(NULL);
    __this->PerformLayout_1(::app::Fuse::IWindow::Size(::uPtr< ::uObject*>(w)));
}

void Element__PerformLayout_1(Element* __this, ::app::Uno::Float2 clientSize)
{
    ::uObject* w = __this->Window();
    bool keyboardVisible = (w == NULL) ? false : ::app::Fuse::IWindow::IsOnscreenKeyboardVisible(::uPtr< ::uObject*>(w));

    if (((__this->_cachedRenderTargetSize.X != clientSize.X) || (__this->_cachedRenderTargetSize.Y != clientSize.Y)) || (__this->_cachedIsKeyboardVisible != keyboardVisible))
    {
        __this->_cachedRenderTargetSize = clientSize;
        __this->_cachedIsKeyboardVisible = keyboardVisible;
        __this->InvalidateLayout();
    }

    if (__this->_layoutDirty)
    {
        Element___performingLayout = true;
        ::app::Uno::Float2 availableSize = clientSize;
        ::app::Uno::Float2 offset = ::app::Uno::Float2__New_1(NULL, 0.0f);
        __this->ArrangeMarginBox(offset, availableSize, 3);
        Element___performingLayout = false;
    }
}

float Element__UnitSize(Element* __this, float scalar, int unit, float fill, bool secondary, bool* known)
{
    *known = true;

    if (unit == 0)
    {
        return scalar;
    }

    if (unit == 2)
    {
        return scalar / __this->AbsoluteZoom();
    }

    if (secondary)
    {
        return (scalar * fill) / 100.0f;
    }

    *known = false;
    return 0.0f;
}

float Element__SimpleToAnchor(Element* __this, int align)
{
    if (align == 0)
    {
        return 0.0f;
    }

    if (align == 2)
    {
        return 100.0f;
    }

    return 50.0f;
}

void Element__EffectiveAnchor(Element* __this, int halign, int valign, ::app::Uno::Float2* anchor, int* unit)
{
    if (__this->HasAnchor())
    {
        *anchor = __this->Anchor();
        *unit = __this->AnchorUnit();
        return;
    }

    (*anchor).X = __this->SimpleToAnchor(halign);
    (*anchor).Y = __this->SimpleToAnchor(valign);
    *unit = 1;
}

::app::Uno::Float2 Element__ApplyFixedPaddingBox(Element* __this, ::app::Uno::Float2 sz, ::app::Uno::Float2 fillSize, int* fillSet, bool* fixedSize)
{
    int origFillSet = *fillSet;
    bool known = false;

    if (__this->HasWidth())
    {
        sz.X = __this->UnitSize(__this->Width(), __this->WidthUnit(), fillSize.X, (*fillSet & 1) == 1, &known);
    }
    else if ((((*fillSet & 1) == 1) && (::app::Fuse::Elements::AlignmentHelpers__GetHorizontalAlign(NULL, __this->Alignment()) == 0)) && !__this->HasOffset())
    {
        sz.X = fillSize.X;
        known = true;
    }

    if (known)
    {
        *fillSet = *fillSet | 1;
    }
    else
    {
        *fillSet = *fillSet & -2;
    }

    *fixedSize = known;
    known = false;

    if (__this->HasHeight())
    {
        sz.Y = __this->UnitSize(__this->Height(), __this->HeightUnit(), fillSize.Y, (*fillSet & 2) == 2, &known);
    }
    else if ((((*fillSet & 2) == 2) && (::app::Fuse::Elements::AlignmentHelpers__GetVerticalAlign(NULL, __this->Alignment()) == 0)) && !__this->HasOffset())
    {
        sz.Y = fillSize.Y;
        known = true;
    }

    if (known)
    {
        *fillSet = *fillSet | 2;
    }
    else
    {
        *fillSet = *fillSet & -3;
    }

    *fixedSize = *fixedSize && known;
    sz = __this->ConstrainMinMax(sz, fillSize, origFillSet);
    return sz;
}

::app::Uno::Float2 Element__ConstrainMinMax(Element* __this, ::app::Uno::Float2 sz, ::app::Uno::Float2 fillSize, int fillSet)
{
    bool known = bool();
    float limit = float();
    int unit;

    if (__this->HasValue(4))
    {
        limit = __this->MaxWidth();
        unit = __this->MaxWidthUnit();
    }
    else
    {
        limit = 100.0f;
        unit = 1;
    }

    float mx = __this->UnitSize(limit, unit, fillSize.X, (fillSet & 1) == 1, &known);

    if (known)
    {
        sz.X = ::app::Uno::Math__Min_1(NULL, mx, sz.X);
    }

    if (__this->HasValue(5))
    {
        limit = __this->MaxHeight();
        unit = __this->MaxHeightUnit();
    }
    else
    {
        limit = 100.0f;
        unit = 1;
    }

    float my = __this->UnitSize(limit, unit, fillSize.Y, (fillSet & 2) == 2, &known);

    if (known)
    {
        sz.Y = ::app::Uno::Math__Min_1(NULL, my, sz.Y);
    }

    if (__this->HasValue(2))
    {
        float mn = __this->UnitSize(__this->MinWidth(), __this->MinWidthUnit(), fillSize.X, (fillSet & 1) == 1, &known);

        if (known)
        {
            sz.X = ::app::Uno::Math__Max_1(NULL, mn, sz.X);
        }
    }

    if (__this->HasValue(3))
    {
        float mn = __this->UnitSize(__this->MinHeight(), __this->MinHeightUnit(), fillSize.Y, (fillSet & 2) == 2, &known);
        sz.Y = ::app::Uno::Math__Max_1(NULL, __this->MinHeight(), sz.Y);
    }

    return sz;
}

::app::Uno::Float2 Element__LimitPaddingBoxSize(Element* __this, ::app::Uno::Float2 sz, ::app::Uno::Float2 fillSize, int fillSet)
{
    bool fixedSize = bool();
    sz = __this->ApplyFixedPaddingBox(sz, fillSize, &fillSet, &fixedSize);

    if (__this->SnapToPixels())
    {
        sz = __this->SnapUp(sz);
    }

    return sz;
}

void Element__GMSReset(Element* __this)
{
    __this->_gmsCount = 0;
    __this->_gmsAt = 0;
}

::app::Uno::Float2 Element__GetMarginSize(Element* __this, ::app::Uno::Float2 fillSize, int fillSet)
{
    ::app::Fuse::Elements::Element_GMSCacheItem collection_127 = ::app::Fuse::Elements::Element_GMSCacheItem();

    for (int i = 0; i < __this->_gmsCount; ++i)
    {
        ::app::Fuse::Elements::Element_GMSCacheItem g = ::uPtr< ::uArray*>(__this->_gmsCache)->Item< ::app::Fuse::Elements::Element_GMSCacheItem>(i);

        if ((fillSet == g.fillSet) && ::app::Uno::Float2__op_Equality(NULL, fillSize, g.fillSize))
        {
            return g.result;
        }
    }

    ::app::Uno::Float2 sz = __this->CalcMarginSize(fillSize, fillSet);
    int n = (__this->_gmsAt++) % 2;
    __this->_gmsCount = ::app::Uno::Math__Min_8(NULL, 2, __this->_gmsCount + 1);
    ::uPtr< ::uArray*>(__this->_gmsCache)->Item< ::app::Fuse::Elements::Element_GMSCacheItem>(n) = (collection_127 = ::uDefault< ::app::Fuse::Elements::Element_GMSCacheItem>(), collection_127.fillSize = fillSize, collection_127.fillSet = fillSet, collection_127.result = sz, collection_127);
    return sz;
}

::app::Uno::Float2 Element__GetPaddingSize(Element* __this, ::app::Uno::Float2 padFill, int fillSet)
{
    ::app::Uno::Float4 ind_131 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_132 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_133 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_134 = ::app::Uno::Float4();

    if (__this->HasValue(9))
    {
        padFill = ::app::Uno::Float2__op_Subtraction(NULL, padFill, ::app::Uno::Float2__op_Addition(NULL, (ind_131 = __this->Padding(), ::app::Uno::Float2__New_2(NULL, ind_131.X, ind_131.Y)), (ind_132 = __this->Padding(), ::app::Uno::Float2__New_2(NULL, ind_132.Z, ind_132.W))));
    }

    ::app::Uno::Float2 sz = __this->GetContentSize(padFill, fillSet);

    if (__this->HasValue(9))
    {
        sz = ::app::Uno::Float2__op_Addition(NULL, sz, ::app::Uno::Float2__op_Addition(NULL, (ind_133 = __this->Padding(), ::app::Uno::Float2__New_2(NULL, ind_133.X, ind_133.Y)), (ind_134 = __this->Padding(), ::app::Uno::Float2__New_2(NULL, ind_134.Z, ind_134.W))));
    }

    return sz;
}

::app::Uno::Float2 Element__CalcMarginSize(Element* __this, ::app::Uno::Float2 fillSize, int fillSet)
{
    ::app::Uno::Float4 ind_135 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_136 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_137 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_138 = ::app::Uno::Float4();

    if (__this->HasValue(8))
    {
        fillSize = ::app::Uno::Float2__op_Subtraction(NULL, fillSize, ::app::Uno::Float2__op_Addition(NULL, (ind_135 = __this->Margin(), ::app::Uno::Float2__New_2(NULL, ind_135.X, ind_135.Y)), (ind_136 = __this->Margin(), ::app::Uno::Float2__New_2(NULL, ind_136.Z, ind_136.W))));
    }

    ::uObject* wnd = __this->Window();

    if ((wnd != NULL) && __this->AutoKeyboardCompensation())
    {
        fillSize = ::app::Uno::Float2__op_Subtraction(NULL, fillSize, ::app::Uno::Float2__New_2(NULL, 0.0f, ::app::Fuse::IWindow::OnscreenKeyboardSize(::uPtr< ::uObject*>(wnd)).Y / __this->AbsoluteZoom()));
    }

    if (__this->Visibility() == 1)
    {
        return ::app::Uno::Float2__New_1(NULL, 0.0f);
    }

    bool childFixedSize = bool();
    int childFillSet = fillSet;
    ::app::Uno::Float2 childPadFill = __this->ApplyFixedPaddingBox(fillSize, fillSize, &childFillSet, &childFixedSize);
    ::app::Uno::Float2 sz = ::app::Uno::Float2();

    if (!childFixedSize)
    {
        sz = __this->GetPaddingSize(childPadFill, childFillSet);
    }
    else
    {
        sz = childPadFill;
    }

    ::app::Uno::Float2 lsz = __this->LimitPaddingBoxSize(sz, fillSize, fillSet);
    int nfs = childFillSet;
    bool needResize = false;

    if ((lsz.X < sz.X) && !((childFillSet & 1) == 1))
    {
        nfs = nfs | 1;
        needResize = true;
    }

    if ((lsz.Y < sz.Y) && !((childFillSet & 2) == 2))
    {
        nfs = nfs | 2;
        needResize = true;
    }

    if (needResize)
    {
        sz = __this->GetPaddingSize(lsz, nfs);
        sz = __this->LimitPaddingBoxSize(sz, fillSize, fillSet);
    }
    else
    {
        sz = lsz;
    }

    if (__this->HasValue(8))
    {
        sz = ::app::Uno::Float2__op_Addition(NULL, sz, ::app::Uno::Float2__op_Addition(NULL, (ind_137 = __this->Margin(), ::app::Uno::Float2__New_2(NULL, ind_137.X, ind_137.Y)), (ind_138 = __this->Margin(), ::app::Uno::Float2__New_2(NULL, ind_138.Z, ind_138.W))));
    }

    if ((wnd != NULL) && __this->AutoKeyboardCompensation())
    {
        sz = ::app::Uno::Float2__op_Addition(NULL, sz, ::app::Uno::Float2__New_2(NULL, 0.0f, ::app::Fuse::IWindow::OnscreenKeyboardSize(wnd).Y / __this->AbsoluteZoom()));
    }

    return sz;
}

::app::Uno::Float2 Element__GetContentSize(Element* __this, ::app::Uno::Float2 fillSize, int fillSet)
{
    return ::app::Uno::Float2__New_1(NULL, 0.0f);
}

::app::Uno::Float2 Element__ArrangeMarginBox(Element* __this, ::app::Uno::Float2 position, ::app::Uno::Float2 availableSize, int availSet)
{
    if (((((!__this->_layoutDirty && (position.X == __this->_positionCache.X)) && (position.Y == __this->_positionCache.Y)) && (availableSize.X == __this->_arrangeSizeCache.X)) && (availableSize.Y == __this->_arrangeSizeCache.Y)) && (availSet == __this->_arrangeAvailSetCache))
    {
        return __this->_marginCache;
    }

    ::app::Uno::Float4 margin = __this->Margin();
    ::app::Uno::Float2 avSize = ::app::Uno::Math__Max_3(NULL, ::app::Uno::Float2__New_1(NULL, 0.0f), availableSize);
    ::app::Uno::Float2 marginBox = __this->GetMarginSize(avSize, availSet);
    ::app::Uno::Float2 paddingBox = ::app::Uno::Float2__op_Subtraction(NULL, ::app::Uno::Float2__op_Subtraction(NULL, marginBox, ::app::Uno::Float2__New_2(NULL, margin.X, margin.Y)), ::app::Uno::Float2__New_2(NULL, margin.Z, margin.W));
    avSize = ::app::Uno::Float2__op_Subtraction(NULL, avSize, ::app::Uno::Float2__op_Addition(NULL, ::app::Uno::Float2__New_2(NULL, margin.X, margin.Y), ::app::Uno::Float2__New_2(NULL, margin.Z, margin.W)));
    avSize = ::app::Uno::Math__Max_3(NULL, ::app::Uno::Float2__New_1(NULL, 0.0f), avSize);
    paddingBox = ::app::Uno::Math__Max_3(NULL, ::app::Uno::Float2__New_1(NULL, 0.0f), paddingBox);
    ::app::Uno::Float2 s = ::app::Uno::Float2__New_1(NULL, 0.0f);

    if (__this->Visibility() != 1)
    {
        __this->ArrangePaddingBox(paddingBox);
        s = paddingBox;
    }

    ::app::Uno::Float2 p = position;
    int halign = __this->EffectiveHorizontalAlignment();

    if (!((availSet & 1) == 1))
    {
        halign = 0;
    }

    int valign = __this->EffectiveVerticalAlignment();

    if (!((availSet & 2) == 2))
    {
        valign = 0;
    }

    p.X = p.X + margin.X;

    switch (halign)
    {
        case 0:
        {
            break;
        }
        case 1:
        {
            p.X = p.X + (avSize.X * 0.5f);
            break;
        }
        case 2:
        {
            p.X = p.X + avSize.X;
            break;
        }
    }

    p.Y = p.Y + margin.Y;

    if ((availSet & 2) == 2)
    {
        switch (valign)
        {
            case 0:
            {
                break;
            }
            case 1:
            {
                p.Y = p.Y + (avSize.Y * 0.5f);
                break;
            }
            case 2:
            {
                p.Y = p.Y + avSize.Y;
                break;
            }
        }
    }

    bool ignore = bool();

    if (__this->HasOffset())
    {
        ::app::Uno::Float2 offset = __this->Offset();
        ::app::Uno::Float2 o = ::app::Uno::Float2__New_2(NULL, __this->UnitSize(offset.X, __this->OffsetUnit(), avSize.X, (availSet & 1) == 1, &ignore), __this->UnitSize(offset.Y, __this->OffsetUnit(), avSize.Y, (availSet & 2) == 2, &ignore));
        p = ::app::Uno::Float2__op_Addition(NULL, p, o);
    }

    ::app::Uno::Float2 anchor = ::app::Uno::Float2();
    int anchorUnit;
    __this->EffectiveAnchor(halign, valign, &anchor, &anchorUnit);
    __this->_actualAnchor = ::app::Uno::Float2__New_2(NULL, __this->UnitSize(anchor.X, anchorUnit, s.X, true, &ignore), __this->UnitSize(anchor.Y, anchorUnit, s.Y, true, &ignore));
    p = ::app::Uno::Float2__op_Subtraction(NULL, p, __this->_actualAnchor);
    __this->PerformPlacement(p, s);
    __this->_layoutDirty = false;
    __this->_marginCache = marginBox;
    __this->_positionCache = position;
    __this->_arrangeSizeCache = availableSize;
    __this->_arrangeAvailSetCache = availSet;
    __this->_haveActualPositionCache = false;
    return marginBox;
}

void Element__OnPlaced(Element* __this, ::app::Uno::Float2 oldPosition)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->Placed, NULL))
    {
        ::app::Fuse::Elements::PlacedArgs* args = ::app::Fuse::Elements::PlacedArgs__New_2(NULL, __this->_placedBefore, oldPosition, __this->_actualPosition);
        ::uPtr< ::uDelegate*>(__this->Placed)->InvokeVoid< ::uObject*, ::app::Fuse::Elements::PlacedArgs*>((::uObject*)__this, args);
    }

    __this->_placedBefore = true;
    __this->InvalidateVisualComposition(2);
    __this->InvalidateLocalTransform();
}

void Element__OnResized(Element* __this, ::app::Uno::Float2 oldSize)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->Resized, NULL))
    {
        ::app::Fuse::ResizedArgs* args = ::app::Fuse::ResizedArgs__New_2(NULL, __this->_sizedBefore, __this->_actualSize, oldSize);
        ::uPtr< ::uDelegate*>(__this->Resized)->InvokeVoid< ::uObject*, ::app::Fuse::ResizedArgs*>((::uObject*)__this, args);
    }

    __this->_sizedBefore = true;
    __this->InvalidateVisual(14);
    __this->InvalidateRenderBounds();
}

void Element__PerformPlacement(Element* __this, ::app::Uno::Float2 position, ::app::Uno::Float2 size)
{
    ::app::Uno::Float2 s = ::app::Uno::Math__Max_3(NULL, size, ::app::Uno::Float2__New_1(NULL, 0.0f));

    if ((!__this->_sizedBefore || (__this->_actualSize.X != s.X)) || (__this->_actualSize.Y != s.Y))
    {
        ::app::Uno::Float2 oldSize = __this->_actualSize;
        __this->_actualSize = s;
        __this->OnResized(oldSize);
    }

    if ((!__this->_placedBefore || (__this->_actualPosition.X != position.X)) || (__this->_actualPosition.Y != position.Y))
    {
        ::app::Uno::Float2 oldPosition = __this->_actualPosition;
        __this->_actualPosition = position;
        __this->OnPlaced(oldPosition);
    }

    __this->InvalidateRenderBounds();
}

void Element__ArrangePaddingBox(Element* __this, ::app::Uno::Float2 avsize)
{
}

::app::Uno::Float2 Element__Snap(Element* __this, ::app::Uno::Float2 p)
{
    ::app::Uno::Float2 s = ::app::Uno::Float2__op_Division_1(NULL, ::app::Uno::Math__Round_2(NULL, ::app::Uno::Float2__op_Multiply(NULL, p, __this->AbsoluteZoom())), __this->AbsoluteZoom());
    return s;
}

::app::Uno::Float2 Element__SnapUp(Element* __this, ::app::Uno::Float2 p)
{
    ::app::Uno::Float2 s = ::app::Uno::Float2__op_Division_1(NULL, ::app::Uno::Math__Ceil_2(NULL, ::app::Uno::Float2__op_Multiply(NULL, p, __this->AbsoluteZoom())), __this->AbsoluteZoom());
    return s;
}

void Element__OnRooted(Element* __this)
{
    if (__this->ParentElement() == NULL)
    {
        ::app::Fuse::UpdateManager__AddAction(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)::app::Fuse::Elements::Element__PerformLayout, __this), 2);
        __this->_isAddedAsPreUpdate = true;
    }

    if (__this->HasEffects())
    {
        for (::uObject* enum_128 = ::app::Uno::Collections::IEnumerable__Fuse_Effects_Effect::GetEnumerator(::uPtr< ::uObject*>(__this->Effects())); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_128)); )
        {
            ::app::Fuse::Effects::Effect* e = ::app::Uno::Collections::IEnumerator__Fuse_Effects_Effect::Current(::uPtr< ::uObject*>(enum_128));
            ::uPtr< ::app::Fuse::Effects::Effect*>(e)->Rooted();
        }
    }

    __this->InvalidateVisualComposition(0);
    ::app::Fuse::Node__OnRooted(__this);
}

void Element__RemovePerformLayout(Element* __this)
{
    if (__this->_isAddedAsPreUpdate)
    {
        ::app::Fuse::UpdateManager__RemoveAction(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)::app::Fuse::Elements::Element__PerformLayout, __this), 2);
        __this->_isAddedAsPreUpdate = false;
    }
}

void Element__OnUnrooted(Element* __this)
{
    __this->InvalidateVisualComposition(1);
    __this->RemovePerformLayout();

    if (__this->HasEffects())
    {
        for (::uObject* enum_129 = ::app::Uno::Collections::IEnumerable__Fuse_Effects_Effect::GetEnumerator(::uPtr< ::uObject*>(__this->Effects())); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_129)); )
        {
            ::app::Fuse::Effects::Effect* e = ::app::Uno::Collections::IEnumerator__Fuse_Effects_Effect::Current(::uPtr< ::uObject*>(enum_129));
            ::uPtr< ::app::Fuse::Effects::Effect*>(e)->Unrooted();
        }
    }

    ::app::Fuse::Node__OnUnrooted(__this);
}

void Element__OnAdded(Element* __this, ::uObject* parent)
{
    __this->_parentElement = ::uAs< Element*>(parent, Element__typeof());
    ::app::Fuse::Node__OnAdded(__this, parent);
    __this->InvalidateLocalTransform();
    __this->InvalidateLayout();
}

void Element__OnRemoved(Element* __this, ::uObject* parent)
{
    ::app::Fuse::Node__OnRemoved(__this, parent);
    __this->_parentElement = NULL;
}

::app::Fuse::Node* Element__GetSubNode(Element* __this, int index)
{
    return (::app::Fuse::Node*)__this->GetSubElement(index);
}

Element* Element__GetSubElement(Element* __this, int index)
{
    U_THROW(::app::Uno::Exception__New_2(NULL));
}

::app::Uno::Float2 Element__ParentToLocal(Element* __this, ::app::Uno::Float2 parentPoint)
{
    return ::app::Uno::Vector__TransformCoordinate_1(NULL, parentPoint, __this->LocalTransformInverse());
}

::app::Fuse::FastMatrix* Element__GetLocalTransformInternal(Element* __this)
{
    return __this->LocalTransformInternal();
}

::app::Uno::Rect Element__CalcRenderBoundsInParentSpace(Element* __this)
{
    ::app::Uno::Float4 ind_139 = ::app::Uno::Float4();
    ::app::Uno::Rect childRect = __this->RenderBoundsWithEffects();
    ::app::Fuse::FastMatrix* fastMatrix = __this->GetLocalTransformInternal();
    ::app::Uno::Rect childRectInParentSpace = ::app::Uno::Rect();

    if (::uPtr< ::app::Fuse::FastMatrix*>(fastMatrix)->_hasNonTranslation)
    {
        childRectInParentSpace = ::app::Uno::Rect__Transform(NULL, childRect, __this->LocalTransform());
    }
    else
    {
        childRectInParentSpace = ::app::Uno::Rect__Translate(NULL, childRect, (ind_139 = __this->LocalTransform().Item(3), ::app::Uno::Float2__New_2(NULL, ind_139.X, ind_139.Y)));
    }

    return childRectInParentSpace;
}

void Element__OnResetStyle(Element* __this)
{
    if (__this->HasStyleValue_1(0))
    {
        __this->ResetOpacity();
    }

    if (__this->HasStyleValue_1(1))
    {
        __this->ResetTextColor();
    }

    if (__this->HasStyleValue_1(2))
    {
        __this->ResetFont();
    }

    if (__this->HasStyleValue_1(3))
    {
        __this->ResetFontSize();
    }

    if (__this->HasStyleValue_1(4))
    {
        __this->ResetTextAlignment();
    }

    if (__this->HasStyleValue(0))
    {
        __this->ResetWidth();
    }

    if (__this->HasStyleValue(1))
    {
        __this->ResetHeight();
    }

    if (__this->HasStyleValue(2))
    {
        __this->ResetMinWidth();
    }

    if (__this->HasStyleValue(3))
    {
        __this->ResetMinHeight();
    }

    if (__this->HasStyleValue(4))
    {
        __this->ResetMaxWidth();
    }

    if (__this->HasStyleValue(5))
    {
        __this->ResetMaxHeight();
    }

    if (__this->HasStyleValue(6))
    {
        __this->ResetAlignment();
    }

    if (__this->HasStyleValue(7))
    {
        __this->ResetVisibility();
    }

    if (__this->HasStyleValue(8))
    {
        __this->ResetMargin();
    }

    if (__this->HasStyleValue(9))
    {
        __this->ResetPadding();
    }

    if (__this->HasStyleValue(10))
    {
        __this->ResetSnapToPixels();
    }

    if (__this->HasStyleValue(11))
    {
        __this->ResetClipToBounds();
    }

    if (__this->_effects != NULL)
    {
        for (int i = 0; i < ::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Effects_Effect*>(__this->_effects)->Count(); i++)
        {
            if (::uPtr< ::app::Fuse::Effects::Effect*>(::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Effects_Effect*>(__this->_effects)->Item(i))->AddedByStyle)
            {
                ::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Effects_Effect*>(__this->_effects)->RemoveAt(i--);
            }
        }
    }

    ::app::Fuse::Node__OnResetStyle(__this);
}

bool Element__HasNoValue_1(Element* __this, int ep)
{
    return (__this->_stylingPropertyBits & (3 << (ep * 2))) == 0;
}

bool Element__HasValue_1(Element* __this, int ep)
{
    return (__this->_stylingPropertyBits & (3 << (ep * 2))) != 0;
}

bool Element__HasStyleValue_1(Element* __this, int ep)
{
    return (__this->_stylingPropertyBits & (1 << (ep * 2))) != 0;
}

void Element__GiveLocalValue_1(Element* __this, int ep)
{
    __this->_stylingPropertyBits = __this->_stylingPropertyBits | (2 << (ep * 2));
}

void Element__GiveStyleValue_1(Element* __this, int ep)
{
    __this->_stylingPropertyBits = __this->_stylingPropertyBits | (1 << (ep * 2));
}

void Element__ClearValue_1(Element* __this, int ep)
{
    __this->_stylingPropertyBits = __this->_stylingPropertyBits & ~(3 << (ep * 2));
}

void Element__OnOpacityChanged(Element* __this)
{
    __this->InvalidateVisualComposition(3);
}

void Element__ResetOpacity(Element* __this)
{
    if (!__this->HasNoValue_1(0))
    {
        __this->_opacity = 1.0f;
        __this->OnOpacityChanged();
    }
}

void Element__OnDepthTestModeChanged(Element* __this)
{
    __this->InvalidateVisualComposition(17);
}

void Element__OnTextColorChanged(Element* __this)
{
    for (int i = 0; i < __this->SubElementCount(); i++)
    {
        Element* e = __this->GetSubElement(i);

        if (!::uPtr< ::app::Fuse::Elements::Element*>(e)->HasValue_1(1))
        {
            ::uPtr< ::app::Fuse::Elements::Element*>(e)->OnTextColorChanged();
        }
    }
}

void Element__ResetTextColor(Element* __this)
{
    if (!__this->HasNoValue_1(1))
    {
        __this->_textColor = ::app::Uno::Float4__New_1(NULL, 0.0f);
        __this->ClearValue_1(1);
        __this->OnTextColorChanged();
    }
}

void Element__SetStyleTextColor(Element* __this, ::app::Uno::Float4 color)
{
    if (__this->HasNoValue_1(1))
    {
        __this->_textColor = color;
        __this->GiveStyleValue_1(1);
        __this->OnTextColorChanged();
    }
}

void Element__OnFontChanged(Element* __this)
{
    for (int i = 0; i < __this->SubElementCount(); i++)
    {
        Element* e = __this->GetSubElement(i);

        if (!::uPtr< ::app::Fuse::Elements::Element*>(e)->HasValue_1(2))
        {
            ::uPtr< ::app::Fuse::Elements::Element*>(e)->OnFontChanged();
        }
    }
}

void Element__ResetFont(Element* __this)
{
    if (!__this->HasNoValue_1(2))
    {
        __this->_font = NULL;
        __this->ClearValue_1(2);
        __this->OnFontChanged();
    }
}

void Element__SetStyleFont(Element* __this, ::app::Fuse::Font* f)
{
    if (__this->HasNoValue_1(2))
    {
        __this->_font = f;
        __this->GiveStyleValue_1(2);
        __this->OnFontChanged();
    }
}

void Element__OnFontSizeChanged(Element* __this)
{
    for (int i = 0; i < __this->SubElementCount(); i++)
    {
        Element* e = __this->GetSubElement(i);

        if (!::uPtr< ::app::Fuse::Elements::Element*>(e)->HasValue_1(3))
        {
            ::uPtr< ::app::Fuse::Elements::Element*>(e)->OnFontSizeChanged();
        }
    }
}

void Element__ResetFontSize(Element* __this)
{
    if (!__this->HasNoValue_1(3))
    {
        __this->ClearValue_1(3);
        __this->OnFontSizeChanged();
    }
}

void Element__SetStyleFontSize(Element* __this, float fontSize)
{
    if (__this->HasNoValue_1(3))
    {
        __this->_fontSize = fontSize;
        __this->GiveStyleValue_1(3);
        __this->OnFontSizeChanged();
    }
}

void Element__OnTextAlignmentChanged(Element* __this)
{
    for (int i = 0; i < __this->SubElementCount(); i++)
    {
        Element* e = __this->GetSubElement(i);

        if (!::uPtr< ::app::Fuse::Elements::Element*>(e)->HasValue_1(4))
        {
            ::uPtr< ::app::Fuse::Elements::Element*>(e)->OnTextAlignmentChanged();
        }
    }
}

void Element__ResetTextAlignment(Element* __this)
{
    if (!__this->HasNoValue_1(4))
    {
        __this->_textAlignment = 0;
        __this->ClearValue_1(4);
        __this->OnTextAlignmentChanged();
    }
}

void Element__SetStyleTextAlignment(Element* __this, int ta)
{
    if (__this->HasNoValue_1(4))
    {
        __this->_textAlignment = ta;
        __this->GiveStyleValue_1(4);
        __this->OnTextAlignmentChanged();
    }
}

void Element__PrependTransformOrigin(Element* __this, ::app::Fuse::FastMatrix* m)
{
    if (__this->TransformOrigin() == 0)
    {
        ::app::Uno::Float2 b = __this->Bounds().Center();
        ::uPtr< ::app::Fuse::FastMatrix*>(m)->PrependTranslation(b.X, b.Y, 0.0f);
    }
    else if (__this->TransformOrigin() == 2)
    {
        ::uPtr< ::app::Fuse::FastMatrix*>(m)->PrependTranslation(__this->_actualAnchor.X, __this->_actualAnchor.Y, 0.0f);
    }
}

void Element__PrependInverseTransformOrigin(Element* __this, ::app::Fuse::FastMatrix* m)
{
    if (__this->TransformOrigin() == 0)
    {
        ::app::Uno::Float2 b = __this->Bounds().Center();
        ::uPtr< ::app::Fuse::FastMatrix*>(m)->PrependTranslation(-b.X, -b.Y, 0.0f);
    }
    else if (__this->TransformOrigin() == 2)
    {
        ::uPtr< ::app::Fuse::FastMatrix*>(m)->PrependTranslation(-__this->_actualAnchor.X, -__this->_actualAnchor.Y, 0.0f);
    }
}

void Element__PrependImplicitTransform(Element* __this, ::app::Fuse::FastMatrix* m)
{
    ::app::Uno::Float2 actualPosition = __this->ActualPosition();

    if ((actualPosition.X != 0.0f) || (actualPosition.Y != 0.0f))
    {
        ::uPtr< ::app::Fuse::FastMatrix*>(m)->PrependTranslation(actualPosition.X, actualPosition.Y, 0.0f);
    }
}

void Element__InvalidateLocalTransform(Element* __this)
{
    __this->InvalidateVisualComposition(2);

    if (__this->ParentElement() != NULL)
    {
        ::uPtr< ::app::Fuse::Elements::Element*>(__this->ParentElement())->InvalidateRenderBounds();
    }

    ::app::Fuse::Node__InvalidateLocalTransform(__this);
}

void Element__InvalidateVisual(Element* __this, int reason)
{
    Element* p = __this;

    while (p != NULL)
    {
        if (::uPtr< ::app::Fuse::Elements::Element*>(p)->Cache() != NULL)
        {
            ::uPtr< ::app::Fuse::Elements::Cache*>(::uPtr< ::app::Fuse::Elements::Element*>(p)->Cache())->Invalidate();
        }

        p->_visualDirty = true;
        p = ::uPtr< ::app::Fuse::Elements::Element*>(p)->ParentElement();
    }
}

void Element__InvalidateVisualComposition(Element* __this, int reason)
{
    if (__this->ParentElement() != NULL)
    {
        ::uPtr< ::app::Fuse::Elements::Element*>(__this->ParentElement())->InvalidateVisual(reason);
    }
    else
    {
        __this->InvalidateVisual(reason);
    }
}

void Element__InvalidateLayout(Element* __this)
{
    if (Element___performingLayout)
    {
        U_THROW(::app::Uno::Exception__New_1(NULL, ::uGetConstString("Layout was invalidated while performing layout")));
    }

    Element* p = __this;

    while (p != NULL)
    {
        ::uPtr< ::app::Fuse::Elements::Element*>(p)->_layoutDirty = true;
        p->GMSReset();
        p = ::uPtr< ::app::Fuse::Elements::Element*>(p)->ParentElement();
    }
}

void Element__InvalidateRenderBounds(Element* __this)
{
    Element* p = __this;

    while (p != NULL)
    {
        ::uPtr< ::app::Fuse::Elements::Element*>(p)->_renderBoundsVersion++;

        if (p->ClipToBounds())
        {
            return;
        }

        p = ::uPtr< ::app::Fuse::Elements::Element*>(p)->ParentElement();
    }
}

void Element___TypeInit_1(::uStatic* __this)
{
    Element___minWidthHandle = ::app::Fuse::Properties__CreateHandle(NULL);
    Element___minHeightHandle = ::app::Fuse::Properties__CreateHandle(NULL);
    Element___maxWidthHandle = ::app::Fuse::Properties__CreateHandle(NULL);
    Element___maxHeightHandle = ::app::Fuse::Properties__CreateHandle(NULL);
}

void Element___ObjInit_1(Element* __this)
{
    __this->_hitTestMode = 5;
    __this->_gmsCache = ::uNewArray(::app::Fuse::Elements::Element_GMSCacheItem__typeof(), 2);
    __this->_opacity = 1.0f;
    __this->_layoutDirty = true;
    __this->_visualDirty = true;
    ::app::Fuse::Node___ObjInit(__this);
}

void Element__add_Placed(Element* __this, ::uDelegate* value)
{
    __this->Placed = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->Placed, (::uDelegate*)value), ::app::Fuse::Elements::PlacedHandler__typeof());
}

void Element__remove_Placed(Element* __this, ::uDelegate* value)
{
    __this->Placed = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->Placed, (::uDelegate*)value), ::app::Fuse::Elements::PlacedHandler__typeof());
}

void Element__add_RequestBringIntoView(Element* __this, ::uDelegate* value)
{
    __this->RequestBringIntoView = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->RequestBringIntoView, (::uDelegate*)value), ::app::Fuse::Elements::RequestBringIntoViewHandler__typeof());
}

void Element__remove_RequestBringIntoView(Element* __this, ::uDelegate* value)
{
    __this->RequestBringIntoView = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->RequestBringIntoView, (::uDelegate*)value), ::app::Fuse::Elements::RequestBringIntoViewHandler__typeof());
}

void Element__add_Resized(Element* __this, ::uDelegate* value)
{
    __this->Resized = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->Resized, (::uDelegate*)value), ::app::Fuse::ResizedHandler__typeof());
}

void Element__remove_Resized(Element* __this, ::uDelegate* value)
{
    __this->Resized = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->Resized, (::uDelegate*)value), ::app::Fuse::ResizedHandler__typeof());
}

}}}
