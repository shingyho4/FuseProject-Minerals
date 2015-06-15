// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Controls.Control.h>
#include <app/Fuse.Controls.Internal.ChildCollection.h>
#include <app/Fuse.DrawContext.h>
#include <app/Fuse.Drawing.Brush.h>
#include <app/Fuse.Drawing.DynamicBrush.h>
#include <app/Fuse.HitTestContext.h>
#include <app/Fuse.Internal.Drawing.SolidRectangle.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.Properties.h>
#include <app/Fuse.PropertyHandle.h>
#include <app/Uno.Action.h>
#include <app/Uno.Collections.ICollection__Fuse_Elements_Element.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Elements_Element.h>
#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Elements_Element.h>
#include <app/Uno.Collections.IList__Fuse_Elements_Element.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float4.h>
#include <app/Uno.Object.h>

namespace app {
namespace Fuse {
namespace Controls {

::uStaticStrong< ::app::Fuse::PropertyHandle*> Control___overlaysProperty;

Control__uType* Control__typeof()
{
    static Control__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Control__uType*)::uAllocClassType(sizeof(Control__uType), "Fuse.Controls.Control", ::app::Fuse::Elements::Element__typeof(), 7, 3);
        type->__fp_get_IsRedrawCheap = (bool(*)(::app::Fuse::Elements::Element*))Control__get_IsRedrawCheap;
        type->__fp_get_SubElementCount = (int(*)(::app::Fuse::Elements::Element*))Control__get_SubElementCount;
        type->__fp_OnCollectionChildAdded = Control__OnCollectionChildAdded;
        type->__fp_OnCollectionChildRemoved = Control__OnCollectionChildRemoved;
        type->__fp_OnResetStyle = (void(*)(::app::Fuse::Node*))Control__OnResetStyle;
        type->__fp_CalcRenderBounds = (::app::Uno::Rect(*)(::app::Fuse::Elements::Element*))Control__CalcRenderBounds;
        type->__fp_CalcRenderBounds_1 = Control__CalcRenderBounds_1;
        type->__fp_OnDraw = (void(*)(::app::Fuse::Elements::Element*, ::app::Fuse::DrawContext*))Control__OnDraw;
        type->__fp_OnDrawControl = Control__OnDrawControl;
        type->__fp_GetContentSize = (::app::Uno::Float2(*)(::app::Fuse::Elements::Element*, ::app::Uno::Float2, int))Control__GetContentSize;
        type->__fp_ArrangePaddingBox = (void(*)(::app::Fuse::Elements::Element*, ::app::Uno::Float2))Control__ArrangePaddingBox;
        type->__fp_OnHitTestLocalVisual = (void(*)(::app::Fuse::Elements::Element*, ::app::Fuse::HitTestContext*))Control__OnHitTestLocalVisual;
        type->__fp_OnHitTestChildren = (void(*)(::app::Fuse::Elements::Element*, ::app::Fuse::HitTestContext*))Control__OnHitTestChildren;
        type->__fp_OnHitTestControlChildren = Control__OnHitTestControlChildren;
        type->__fp_GetSubElement = (::app::Fuse::Elements::Element*(*)(::app::Fuse::Elements::Element*, int))Control__GetSubElement;

        type->__interface_6.__fp_OnCollectionChildAdded = (void(*)(void*, ::uObject*, ::app::Fuse::Elements::Element*))Control__OnCollectionChildAdded;
        type->__interface_6.__fp_OnCollectionChildRemoved = (void(*)(void*, ::uObject*, ::app::Fuse::Elements::Element*))Control__OnCollectionChildRemoved;
        type->__interface_0.__fp_WindowToLocal = (::app::Uno::Float2(*)(void*, ::app::Uno::Float2))::app::Fuse::Node__WindowToLocal;
        type->__interface_0.__fp_get_IsRooted = (bool(*)(void*))::app::Fuse::Node__get_IsRooted;
        type->__interface_0.__fp_get_Window = (::uObject*(*)(void*))::app::Fuse::Node__get_Window;
        type->__interface_1.__fp_ApplyStyle = (void(*)(void*, ::uObject*))::app::Fuse::Node__ApplyStyle_1;
        type->__interface_1.__fp_GetResource = (::uObject*(*)(void*, ::uString*, ::uDelegate*))::app::Fuse::Node__GetResource;

        type->Implements[0] = ::app::Fuse::INodeParent__typeof();
        type->Implements[1] = ::app::Fuse::IResourceParent__typeof();
        type->Implements[2] = ::app::Fuse::Triggers::Actions::IShow__typeof();
        type->Implements[3] = ::app::Fuse::Triggers::Actions::IHide__typeof();
        type->Implements[4] = ::app::Fuse::Triggers::Actions::ICollapse__typeof();
        type->Implements[5] = ::app::Fuse::IActualSize__typeof();
        type->Implements[6] = ::app::Fuse::Controls::Internal::ICollectionParent__typeof();

        type->InterfaceOffsets[0] = offsetof(Control__uType, __interface_0);
        type->InterfaceOffsets[1] = offsetof(Control__uType, __interface_1);
        type->InterfaceOffsets[2] = offsetof(Control__uType, __interface_2);
        type->InterfaceOffsets[3] = offsetof(Control__uType, __interface_3);
        type->InterfaceOffsets[4] = offsetof(Control__uType, __interface_4);
        type->InterfaceOffsets[5] = offsetof(Control__uType, __interface_5);
        type->InterfaceOffsets[6] = offsetof(Control__uType, __interface_6);

        type->StrongRefOffsets[0] = offsetof(Control, _background);
        type->StrongRefOffsets[1] = offsetof(Control, _appearance);
        type->StrongRefOffsets[2] = offsetof(Control, _visualTree);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_background";
        type->StrongRefNames[1] = "_appearance";
        type->StrongRefNames[2] = "_visualTree";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Fuse::Drawing::Brush* Control__get_Background(Control* __this)
{
    return __this->_background;
}

void Control__set_Background(Control* __this, ::app::Fuse::Drawing::Brush* value)
{
    if (__this->_background != value)
    {
        if (::uIs(__this->_background, ::app::Fuse::Drawing::DynamicBrush__typeof()))
        {
            ::uPtr< ::app::Fuse::Drawing::DynamicBrush*>(::uCast< ::app::Fuse::Drawing::DynamicBrush*>(__this->_background, ::app::Fuse::Drawing::DynamicBrush__typeof()))->remove_ShadingChanged(::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)::app::Fuse::Controls::Control__OnShadingChanged, __this));
        }

        __this->_background = value;

        if (::uIs(__this->_background, ::app::Fuse::Drawing::DynamicBrush__typeof()))
        {
            ::uPtr< ::app::Fuse::Drawing::DynamicBrush*>(::uCast< ::app::Fuse::Drawing::DynamicBrush*>(__this->_background, ::app::Fuse::Drawing::DynamicBrush__typeof()))->add_ShadingChanged(::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)::app::Fuse::Controls::Control__OnShadingChanged, __this));
        }

        __this->InvalidateVisual(15);
    }
}

bool Control__get_HasOverlays(Control* __this)
{
    return (__this->_controlPropertyBits & 0) == 0;
}

::uObject* Control__get_Overlays(Control* __this)
{
    return (::uObject*)__this->InternalOverlays();
}

::app::Fuse::Controls::Internal::ChildCollection* Control__get_InternalOverlays(Control* __this)
{
    ::uObject* v;

    if (::uPtr< ::app::Fuse::Properties*>(__this->Properties())->TryGet(Control___overlaysProperty, &v))
    {
        return ::uCast< ::app::Fuse::Controls::Internal::ChildCollection*>(v, ::app::Fuse::Controls::Internal::ChildCollection__typeof());
    }

    ::app::Fuse::Controls::Internal::ChildCollection* cc = ::app::Fuse::Controls::Internal::ChildCollection__New_1(NULL, (::uObject*)__this);
    ::uPtr< ::app::Fuse::Properties*>(__this->Properties())->Set(Control___overlaysProperty, (::uObject*)cc);
    return cc;
}

bool Control__get_IsRedrawCheap(Control* __this)
{
    bool res = true;

    if (__this->Appearance() != NULL)
    {
        res = res && ::uPtr< ::app::Fuse::Elements::Element*>(__this->Appearance())->IsRedrawCheap();
    }

    if (__this->VisualTree() != NULL)
    {
        res = res && ::uPtr< ::app::Fuse::Elements::Element*>(__this->VisualTree())->IsRedrawCheap();
    }

    return res;
}

::app::Fuse::Elements::Element* Control__get_Appearance(Control* __this)
{
    return __this->_appearance;
}

void Control__set_Appearance(Control* __this, ::app::Fuse::Elements::Element* value)
{
    if ((__this->_appearanceState == 0) || (__this->_appearance != value))
    {
        __this->_appearanceState = 2;
        __this->SetAppearanceInternal(value);
    }
}

::app::Fuse::Elements::Element* Control__get_VisualTree(Control* __this)
{
    return __this->_visualTree;
}

void Control__set_VisualTree(Control* __this, ::app::Fuse::Elements::Element* value)
{
    if (__this->_visualTree != value)
    {
        if ((__this->_visualTree != NULL) && (::uPtr< ::app::Fuse::Elements::Element*>(__this->_visualTree)->Parent() == __this))
        {
            ::uPtr< ::app::Fuse::Elements::Element*>(__this->_visualTree)->OnRemoved((::uObject*)__this);
        }

        __this->SetVisualTree(value);
    }
}

bool Control__get_IsVisualTreeHitable(Control* __this)
{
    return true;
}

int Control__get_SubElementCount(Control* __this)
{
    int c = 0;

    if (__this->Appearance() != NULL)
    {
        c++;
    }

    if (__this->VisualTree() != NULL)
    {
        c++;
    }

    if (__this->HasOverlays())
    {
        c = c + ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Count(::uPtr< ::uObject*>(__this->Overlays()));
    }

    return c;
}

void Control__OnShadingChanged(Control* __this)
{
    __this->InvalidateVisual(15);
}

void Control__DrawBackground(Control* __this, ::app::Fuse::DrawContext* dc)
{
    if ((__this->Background() != NULL) && !::uPtr< ::app::Fuse::Drawing::Brush*>(__this->Background())->IsCompletelyTransparent())
    {
        ::uPtr< ::app::Fuse::Internal::Drawing::SolidRectangle*>(::app::Fuse::Internal::Drawing::SolidRectangle__Impl)->DrawElement(dc, (::app::Fuse::Elements::Element*)__this, __this->Background());
    }
}

void Control__OnCollectionChildAdded(Control* __this, ::uObject* where, ::app::Fuse::Elements::Element* elm)
{
    __this->InvalidateLayout();
}

void Control__OnCollectionChildRemoved(Control* __this, ::uObject* where, ::app::Fuse::Elements::Element* elm)
{
    __this->InvalidateLayout();
}

void Control__OnResetStyle(Control* __this)
{
    if (__this->_appearanceState == 1)
    {
        __this->ResetAppearance();
    }

    if (__this->HasOverlays())
    {
        ::uPtr< ::app::Fuse::Controls::Internal::ChildCollection*>(__this->InternalOverlays())->RemoveStyleChildren();
    }

    ::app::Fuse::Elements::Element__OnResetStyle(__this);
}

void Control__SetAppearanceInternal(Control* __this, ::app::Fuse::Elements::Element* elm)
{
    if (__this->_appearance != NULL)
    {
        ::uPtr< ::app::Fuse::Elements::Element*>(__this->_appearance)->OnRemoved((::uObject*)__this);
    }

    __this->_appearance = elm;

    if (__this->_appearance != NULL)
    {
        ::uPtr< ::app::Fuse::Elements::Element*>(__this->_appearance)->OnAdded((::uObject*)__this);
    }

    __this->OnAppearanceChanged();
}

void Control__OnAppearanceChanged(Control* __this)
{
    __this->InvalidateLayout();
}

void Control__ResetAppearance(Control* __this)
{
    if (__this->_appearanceState != 0)
    {
        __this->_appearanceState = 0;
        __this->SetAppearanceInternal(NULL);
    }
}

void Control__SetStyleAppearance(Control* __this, ::app::Fuse::Elements::Element* appearance)
{
    if (__this->_appearanceState == 0)
    {
        __this->SetAppearanceInternal(appearance);
        __this->_appearanceState = 1;
    }
}

void Control__SetVisualTree(Control* __this, ::app::Fuse::Elements::Element* newVisualTree)
{
    __this->_visualTree = newVisualTree;

    if ((__this->_visualTree != NULL) && (::uPtr< ::app::Fuse::Elements::Element*>(__this->_visualTree)->Parent() != __this))
    {
        ::uPtr< ::app::Fuse::Elements::Element*>(__this->_visualTree)->OnAdded((::uObject*)__this);
    }

    __this->OnVisualTreeChanged();
}

void Control__OnVisualTreeChanged(Control* __this)
{
    __this->InvalidateLayout();
}

::app::Uno::Rect Control__CalcRenderBounds(Control* __this)
{
    return __this->CalcRenderBounds_1(::app::Fuse::Elements::Element__CalcRenderBounds(__this));
}

::app::Uno::Rect Control__CalcRenderBounds_1(Control* __this, ::app::Uno::Rect baseRect)
{
    if (__this->Appearance() != NULL)
    {
        baseRect = ::app::Uno::Rect__Union(NULL, baseRect, ::uPtr< ::app::Fuse::Elements::Element*>(__this->Appearance())->CalcRenderBoundsInParentSpace());
    }

    if (__this->VisualTree() != NULL)
    {
        baseRect = ::app::Uno::Rect__Union(NULL, baseRect, ::uPtr< ::app::Fuse::Elements::Element*>(__this->VisualTree())->CalcRenderBoundsInParentSpace());
    }

    if (__this->HasOverlays())
    {
        baseRect = ::uPtr< ::app::Fuse::Controls::Internal::ChildCollection*>(__this->InternalOverlays())->CalcRenderBounds(baseRect);
    }

    return baseRect;
}

void Control__OnDraw(Control* __this, ::app::Fuse::DrawContext* dc)
{
    __this->DrawBackground(dc);

    if (__this->Appearance() != NULL)
    {
        ::uPtr< ::app::Fuse::Elements::Element*>(__this->Appearance())->Draw(dc);
    }

    if (__this->VisualTree() != NULL)
    {
        ::uPtr< ::app::Fuse::Elements::Element*>(__this->VisualTree())->Draw(dc);
    }

    __this->OnDrawControl(dc);

    if (__this->HasOverlays())
    {
        ::uPtr< ::app::Fuse::Controls::Internal::ChildCollection*>(__this->InternalOverlays())->Draw(dc);
    }
}

void Control__OnDrawControl(Control* __this, ::app::Fuse::DrawContext* dc)
{
}

::app::Uno::Float2 Control__GetContentSize(Control* __this, ::app::Uno::Float2 fillSize, int fillSet)
{
    if (__this->VisualTree() != NULL)
    {
        return ::uPtr< ::app::Fuse::Elements::Element*>(__this->VisualTree())->GetMarginSize(fillSize, fillSet);
    }
    else
    {
        return ::app::Fuse::Elements::Element__GetContentSize(__this, fillSize, fillSet);
    }
}

void Control__ArrangePaddingBox(Control* __this, ::app::Uno::Float2 size)
{
    if (__this->Appearance() != NULL)
    {
        ::uPtr< ::app::Fuse::Elements::Element*>(__this->Appearance())->ArrangeMarginBox(::app::Uno::Float2__New_1(NULL, 0.0f), size, 3);
    }

    __this->ArrangeVisualTree(size);

    if (__this->HasOverlays())
    {
        for (::uObject* enum_123 = ::app::Uno::Collections::IEnumerable__Fuse_Elements_Element::GetEnumerator(::uPtr< ::uObject*>(__this->Overlays())); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_123)); )
        {
            ::app::Fuse::Elements::Element* overlay = ::app::Uno::Collections::IEnumerator__Fuse_Elements_Element::Current(::uPtr< ::uObject*>(enum_123));
            ::uPtr< ::app::Fuse::Elements::Element*>(overlay)->ArrangeMarginBox(::app::Uno::Float2__New_1(NULL, 0.0f), size, 3);
        }
    }
}

void Control__ArrangeVisualTree(Control* __this, ::app::Uno::Float2 size)
{
    ::app::Uno::Float4 ind_124 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_125 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_126 = ::app::Uno::Float4();

    if (__this->VisualTree() != NULL)
    {
        ::uPtr< ::app::Fuse::Elements::Element*>(__this->VisualTree())->ArrangeMarginBox((ind_124 = __this->Padding(), ::app::Uno::Float2__New_2(NULL, ind_124.X, ind_124.Y)), ::app::Uno::Float2__op_Subtraction(NULL, ::app::Uno::Float2__op_Subtraction(NULL, size, (ind_125 = __this->Padding(), ::app::Uno::Float2__New_2(NULL, ind_125.X, ind_125.Y))), (ind_126 = __this->Padding(), ::app::Uno::Float2__New_2(NULL, ind_126.Z, ind_126.W))), 3);
    }
}

void Control__OnHitTestLocalVisual(Control* __this, ::app::Fuse::HitTestContext* htc)
{
    if (__this->IsVisualTreeHitable())
    {
        if (__this->VisualTree() != NULL)
        {
            ::uPtr< ::app::Fuse::Elements::Element*>(__this->VisualTree())->HitTest(htc);
        }
    }

    if (__this->Appearance() != NULL)
    {
        ::uPtr< ::app::Fuse::Elements::Element*>(__this->Appearance())->HitTest(htc);
    }

    ::app::Fuse::Elements::Element__OnHitTestLocalVisual(__this, htc);
}

void Control__OnHitTestChildren(Control* __this, ::app::Fuse::HitTestContext* htc)
{
    if (__this->HasOverlays())
    {
        ::uPtr< ::app::Fuse::Controls::Internal::ChildCollection*>(__this->InternalOverlays())->HitTest(htc);
    }

    __this->OnHitTestControlChildren(htc);
    ::app::Fuse::Elements::Element__OnHitTestChildren(__this, htc);
}

void Control__OnHitTestControlChildren(Control* __this, ::app::Fuse::HitTestContext* htc)
{
}

::app::Fuse::Elements::Element* Control__GetSubElement(Control* __this, int index)
{
    if (__this->Appearance() != NULL)
    {
        if (index == 0)
        {
            return __this->Appearance();
        }
    }
    else
    {
        index++;
    }

    if (__this->VisualTree() != NULL)
    {
        if (index == 1)
        {
            return __this->VisualTree();
        }
    }
    else
    {
        index++;
    }

    if (((index >= 2) && __this->HasOverlays()) && ((index - 2) < ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Count(::uPtr< ::uObject*>(__this->Overlays()))))
    {
        return ::app::Uno::Collections::IList__Fuse_Elements_Element::Item(::uPtr< ::uObject*>(__this->Overlays()), index - 2);
    }

    U_THROW(::app::Uno::Exception__New_2(NULL));
}

void Control___TypeInit_2(::uStatic* __this)
{
    Control___overlaysProperty = ::app::Fuse::Properties__CreateHandle(NULL);
}

void Control___ObjInit_2(Control* __this)
{
    ::app::Fuse::Elements::Element___ObjInit_1(__this);
}

}}}
