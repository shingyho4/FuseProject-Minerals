// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Behavior.h>
#include <app/Fuse.Controls.ScrollViewer.h>
#include <app/Fuse.Elements.Element.h>
#include <app/Fuse.Gestures.KeepFocusInView.h>
#include <app/Fuse.Gestures.Scroller.h>
#include <app/Fuse.IWindow.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.Transform.h>
#include <app/Fuse.Translation.h>
#include <app/Uno.Collections.ICollection__Fuse_Behavior.h>
#include <app/Uno.Collections.ICollection__Fuse_Transform.h>
#include <app/Uno.Collections.IList__Fuse_Behavior.h>
#include <app/Uno.Collections.IList__Fuse_Transform.h>
#include <app/Uno.Delegate.h>
#include <app/Uno.EventArgs.h>
#include <app/Uno.EventHandler.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float3.h>
#include <app/Uno.Float4.h>
#include <app/Uno.Float4x4.h>
#include <app/Uno.Int.h>
#include <app/Uno.Math.h>
#include <app/Uno.Object.h>
#include <app/Uno.Vector.h>

namespace app {
namespace Fuse {
namespace Controls {

ScrollViewer__uType* ScrollViewer__typeof()
{
    static ScrollViewer__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (ScrollViewer__uType*)::uAllocClassType(sizeof(ScrollViewer__uType), "Fuse.Controls.ScrollViewer", ::app::Fuse::Controls::Control__typeof(), 8, 4);
        type->__fp_ArrangePaddingBox = (void(*)(::app::Fuse::Elements::Element*, ::app::Uno::Float2))ScrollViewer__ArrangePaddingBox;
        type->__fp_GetContentSize = (::app::Uno::Float2(*)(::app::Fuse::Elements::Element*, ::app::Uno::Float2, int))ScrollViewer__GetContentSize;
        type->__fp_OnApplyStyle = (void(*)(::app::Fuse::Node*, ::uObject*))ScrollViewer__OnApplyStyle;

        type->__interface_7.__fp_GetNodeScrollPosition = (::app::Uno::Float2(*)(void*, ::app::Fuse::Node*))ScrollViewer__GetNodeScrollPosition;
        type->__interface_7.__fp_Goto = (void(*)(void*, ::app::Uno::Float2))ScrollViewer__Goto;
        type->__interface_7.__fp_get_ScrollPosition = (::app::Uno::Float2(*)(void*))ScrollViewer__get_ScrollPosition;
        type->__interface_7.__fp_set_ScrollPosition = (void(*)(void*, ::app::Uno::Float2))ScrollViewer__set_ScrollPosition;
        type->__interface_7.__fp_get_AllowedScrollDirections = (int(*)(void*))ScrollViewer__get_AllowedScrollDirections;
        type->__interface_7.__fp_set_AllowedScrollDirections = (void(*)(void*, int))ScrollViewer__set_AllowedScrollDirections;
        type->__interface_7.__fp_get_MaxScroll = (::app::Uno::Float2(*)(void*))ScrollViewer__get_MaxScroll;
        type->__interface_7.__fp_get_MinScroll = (::app::Uno::Float2(*)(void*))ScrollViewer__get_MinScroll;
        type->__interface_7.__fp_add_RequestBringIntoView = (void(*)(void*, ::uDelegate*))::app::Fuse::Elements::Element__add_RequestBringIntoView;
        type->__interface_7.__fp_remove_RequestBringIntoView = (void(*)(void*, ::uDelegate*))::app::Fuse::Elements::Element__remove_RequestBringIntoView;

        type->Implements[0] = ::app::Fuse::INodeParent__typeof();
        type->Implements[1] = ::app::Fuse::IResourceParent__typeof();
        type->Implements[2] = ::app::Fuse::Triggers::Actions::IShow__typeof();
        type->Implements[3] = ::app::Fuse::Triggers::Actions::IHide__typeof();
        type->Implements[4] = ::app::Fuse::Triggers::Actions::ICollapse__typeof();
        type->Implements[5] = ::app::Fuse::IActualSize__typeof();
        type->Implements[6] = ::app::Fuse::Controls::Internal::ICollectionParent__typeof();
        type->Implements[7] = ::app::Fuse::Gestures::IScrollable__typeof();

        type->InterfaceOffsets[0] = offsetof(ScrollViewer__uType, __interface_0);
        type->InterfaceOffsets[1] = offsetof(ScrollViewer__uType, __interface_1);
        type->InterfaceOffsets[2] = offsetof(ScrollViewer__uType, __interface_2);
        type->InterfaceOffsets[3] = offsetof(ScrollViewer__uType, __interface_3);
        type->InterfaceOffsets[4] = offsetof(ScrollViewer__uType, __interface_4);
        type->InterfaceOffsets[5] = offsetof(ScrollViewer__uType, __interface_5);
        type->InterfaceOffsets[6] = offsetof(ScrollViewer__uType, __interface_6);
        type->InterfaceOffsets[7] = offsetof(ScrollViewer__uType, __interface_7);

        type->StrongRefOffsets[0] = offsetof(ScrollViewer, _scroller);
        type->StrongRefOffsets[1] = offsetof(ScrollViewer, _keepFocusInView);
        type->StrongRefOffsets[2] = offsetof(ScrollViewer, _scrollTranslation);
        type->StrongRefOffsets[3] = offsetof(ScrollViewer, ScrollPositionChanged);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_scroller";
        type->StrongRefNames[1] = "_keepFocusInView";
        type->StrongRefNames[2] = "_scrollTranslation";
        type->StrongRefNames[3] = "ScrollPositionChanged";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Fuse::Elements::Element* ScrollViewer__get_Content(ScrollViewer* __this)
{
    return __this->VisualTree();
}

void ScrollViewer__set_Content(ScrollViewer* __this, ::app::Fuse::Elements::Element* value)
{
    __this->OnContentChanged(__this->VisualTree(), value);
    __this->VisualTree(value);
}

int ScrollViewer__get_AllowedScrollDirections(ScrollViewer* __this)
{
    return __this->allowedScrollDirections;
}

void ScrollViewer__set_AllowedScrollDirections(ScrollViewer* __this, int value)
{
    if (value != __this->allowedScrollDirections)
    {
        __this->allowedScrollDirections = value;
        __this->InvalidateLayout();
    }
}

::app::Uno::Float2 ScrollViewer__get_ScrollPosition(ScrollViewer* __this)
{
    return __this->scrollPos;
}

void ScrollViewer__set_ScrollPosition(ScrollViewer* __this, ::app::Uno::Float2 value)
{
    if (!((__this->AllowedScrollDirections() & 3) == 3))
    {
        value.X = 0.0f;
    }

    if (!((__this->AllowedScrollDirections() & 12) == 12))
    {
        value.Y = 0.0f;
    }

    if (__this->SnapToPixels())
    {
        value = __this->Snap(value);
    }

    if (::app::Uno::Vector__LengthSquared(NULL, ::app::Uno::Float2__op_Subtraction(NULL, value, __this->scrollPos)) > 1e-05f)
    {
        __this->scrollPos = value;
        ::uPtr< ::app::Fuse::Translation*>(__this->_scrollTranslation)->Vector(::app::Uno::Float3__New_3(NULL, ::app::Uno::Float2__op_UnaryNegation(NULL, __this->scrollPos), 0.0f));
        __this->OnScrollPositionChanged();
    }
}

bool ScrollViewer__get_AutoAdjustScrollRange(ScrollViewer* __this)
{
    return __this->_autoAdjustScrollRange;
}

void ScrollViewer__set_AutoAdjustScrollRange(ScrollViewer* __this, bool value)
{
    __this->_autoAdjustScrollRange = value;
}

::app::Uno::Float2 ScrollViewer__get_MaxScroll(ScrollViewer* __this)
{
    ::app::Uno::Float4 ind_128 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_129 = ::app::Uno::Float4();

    if (__this->Content() == NULL)
    {
        return ::app::Uno::Float2__New_1(NULL, 0.0f);
    }

    ::uObject* w = __this->Window();
    float keyboardCompensation = (((w != NULL) && ::app::Fuse::IWindow::IsOnscreenKeyboardVisible(::uPtr< ::uObject*>(w))) && __this->AutoAdjustScrollRange()) ? ::app::Fuse::IWindow::OnscreenKeyboardSize(::uPtr< ::uObject*>(w)).Y : 0.0f;
    return __this->ConstrainExtent(::app::Uno::Math__Max_3(NULL, ::app::Uno::Float2__op_Addition(NULL, ::app::Uno::Float2__op_Subtraction(NULL, ::app::Uno::Float2__op_Addition(NULL, ::app::Uno::Float2__op_Addition(NULL, ::app::Uno::Float2__op_Addition(NULL, __this->_cacheContentMarginSize, ::uPtr< ::app::Fuse::Elements::Element*>(__this->Content())->ActualPosition()), (ind_128 = __this->Padding(), ::app::Uno::Float2__New_2(NULL, ind_128.X, ind_128.Y))), (ind_129 = __this->Padding(), ::app::Uno::Float2__New_2(NULL, ind_129.Z, ind_129.W))), __this->ActualSize()), ::app::Uno::Float2__New_2(NULL, 0.0f, keyboardCompensation)), ::app::Uno::Float2__New_1(NULL, 0.0f)));
}

::app::Uno::Float2 ScrollViewer__get_MinScroll(ScrollViewer* __this)
{
    ::app::Uno::Float4 ind_130 = ::app::Uno::Float4();

    if (__this->Content() == NULL)
    {
        return ::app::Uno::Float2__New_1(NULL, 0.0f);
    }

    return __this->ConstrainExtent(::app::Uno::Math__Min_3(NULL, ::app::Uno::Float2__New_1(NULL, 0.0f), ::app::Uno::Float2__op_Subtraction(NULL, ::uPtr< ::app::Fuse::Elements::Element*>(__this->Content())->ActualPosition(), (ind_130 = __this->Padding(), ::app::Uno::Float2__New_2(NULL, ind_130.X, ind_130.Y)))));
}

void ScrollViewer__OnContentChanged(ScrollViewer* __this, ::app::Fuse::Elements::Element* oldContent, ::app::Fuse::Elements::Element* newContent)
{
    if (oldContent != NULL)
    {
        ::app::Uno::Collections::ICollection__Fuse_Transform::Remove(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Elements::Element*>(oldContent)->Transforms()), (::app::Fuse::Transform*)__this->_scrollTranslation);
    }

    if (newContent != NULL)
    {
        ::app::Uno::Collections::ICollection__Fuse_Transform::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Elements::Element*>(newContent)->Transforms()), (::app::Fuse::Transform*)__this->_scrollTranslation);
    }
}

void ScrollViewer__UpdateBehaviors(ScrollViewer* __this)
{
    bool needScroller = (__this->_behavior & 1) == 1;

    if (needScroller && (__this->_scroller == NULL))
    {
        __this->_scroller = ::app::Fuse::Gestures::Scroller__New_1(NULL);
        ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(__this->Behaviors()), (::app::Fuse::Behavior*)__this->_scroller);
    }

    if (!needScroller && (__this->_scroller != NULL))
    {
        ::app::Uno::Collections::ICollection__Fuse_Behavior::Remove(::uPtr< ::uObject*>(__this->Behaviors()), (::app::Fuse::Behavior*)__this->_scroller);
        __this->_scroller = NULL;
    }

    bool needKeep = (__this->_behavior & 2) == 2;

    if (needKeep && (__this->_keepFocusInView == NULL))
    {
        __this->_keepFocusInView = ::app::Fuse::Gestures::KeepFocusInView__New_2(NULL);
        ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(__this->Behaviors()), (::app::Fuse::Behavior*)__this->_keepFocusInView);
    }

    if (!needKeep && (__this->_keepFocusInView != NULL))
    {
        ::app::Uno::Collections::ICollection__Fuse_Behavior::Remove(::uPtr< ::uObject*>(__this->Behaviors()), (::app::Fuse::Behavior*)__this->_keepFocusInView);
        __this->_keepFocusInView = NULL;
    }
}

::app::Uno::Float2 ScrollViewer__GetNodeScrollPosition(ScrollViewer* __this, ::app::Fuse::Node* n)
{
    if ((n == NULL) || (__this->Content() == NULL))
    {
        return ::app::Uno::Float2__New_1(NULL, 0.0f);
    }

    ::app::Uno::Float4x4 trans = ::uPtr< ::app::Fuse::Node*>(n)->GetTransformTo((::app::Fuse::Node*)__this->Content());
    ::app::Uno::Float4 local = ::app::Uno::Vector__Transform_5(NULL, ::app::Uno::Float3__New_1(NULL, 0.0f), trans);
    ::app::Fuse::Elements::Element* elm = ::uAs< ::app::Fuse::Elements::Element*>(n, ::app::Fuse::Elements::Element__typeof());

    if (elm == NULL)
    {
        return ::app::Uno::Float2__New_2(NULL, local.X, local.Y);
    }

    return ::app::Uno::Float2__op_Subtraction(NULL, ::app::Uno::Float2__op_Addition(NULL, ::app::Uno::Float2__New_2(NULL, local.X, local.Y), ::app::Uno::Float2__op_Division_1(NULL, ::uPtr< ::app::Fuse::Elements::Element*>(elm)->ActualSize(), 2.0f)), ::app::Uno::Float2__op_Division_1(NULL, __this->ActualSize(), 2.0f));
}

void ScrollViewer__Goto(ScrollViewer* __this, ::app::Uno::Float2 position)
{
    if (__this->_scroller == NULL)
    {
        return;
    }

    ::uPtr< ::app::Fuse::Gestures::Scroller*>(__this->_scroller)->Goto(position);
}

void ScrollViewer__OnScrollPositionChanged(ScrollViewer* __this)
{
    ::uDelegate* handler = __this->ScrollPositionChanged;

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)handler, NULL))
    {
        ::uPtr< ::uDelegate*>(handler)->InvokeVoid< ::uObject*, ::app::Uno::EventArgs*>((::uObject*)__this, ::app::Uno::EventArgs__Empty);
    }
}

::app::Uno::Float2 ScrollViewer__ConstrainExtent(ScrollViewer* __this, ::app::Uno::Float2 t)
{
    if (__this->AllowedScrollDirections() == 3)
    {
        t.Y = 0.0f;
    }
    else if (__this->AllowedScrollDirections() == 12)
    {
        t.X = 0.0f;
    }

    return t;
}

void ScrollViewer__ArrangePaddingBox(ScrollViewer* __this, ::app::Uno::Float2 size)
{
    ::app::Uno::Float4 ind_123 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_124 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_125 = ::app::Uno::Float4();
    ::app::Fuse::Controls::Control__ArrangePaddingBox(__this, size);

    if (__this->Content() == NULL)
    {
        __this->_cacheContentMarginSize = ::app::Uno::Float2__New_1(NULL, 0.0f);
    }
    else
    {
        size = ::app::Uno::Float2__op_Subtraction(NULL, size, ::app::Uno::Float2__op_Addition(NULL, (ind_123 = __this->Padding(), ::app::Uno::Float2__New_2(NULL, ind_123.X, ind_123.Y)), (ind_124 = __this->Padding(), ::app::Uno::Float2__New_2(NULL, ind_124.Z, ind_124.W))));
        __this->_cacheContentMarginSize = ::uPtr< ::app::Fuse::Elements::Element*>(__this->Content())->ArrangeMarginBox((ind_125 = __this->Padding(), ::app::Uno::Float2__New_2(NULL, ind_125.X, ind_125.Y)), size, 3);
    }

    __this->OnScrollPositionChanged();
}

::app::Uno::Float2 ScrollViewer__GetContentSize(ScrollViewer* __this, ::app::Uno::Float2 fillSize, int fillSet)
{
    ::app::Uno::Float4 ind_126 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_127 = ::app::Uno::Float4();

    if (__this->Content() != NULL)
    {
        fillSize = ::app::Uno::Float2__op_Subtraction(NULL, fillSize, ::app::Uno::Float2__op_Addition(NULL, (ind_126 = __this->Padding(), ::app::Uno::Float2__New_2(NULL, ind_126.X, ind_126.Y)), (ind_127 = __this->Padding(), ::app::Uno::Float2__New_2(NULL, ind_127.Z, ind_127.W))));
        ::app::Uno::Float2 r = ::uPtr< ::app::Fuse::Elements::Element*>(__this->Content())->GetMarginSize(fillSize, fillSet);
        return r;
    }

    return ::app::Uno::Float2__New_1(NULL, 0.0f);
}

void ScrollViewer__OnApplyStyle(ScrollViewer* __this, ::uObject* target)
{
    ::app::Fuse::Node__OnApplyStyle(__this, target);
    ::app::Fuse::Elements::Element* elm = __this->Content();

    if (target != elm)
    {
        return;
    }

    int align = 0;
    bool setWidth = false;
    bool setHeight = false;

    if (__this->AllowedScrollDirections() == 15)
    {
        align = 5;
        setWidth = true;
        setHeight = true;
    }
    else if (__this->AllowedScrollDirections() == 3)
    {
        align = 1;
        setWidth = true;
    }
    else if (__this->AllowedScrollDirections() == 12)
    {
        align = 4;
        setHeight = true;
    }

    if (!::uPtr< ::app::Fuse::Elements::Element*>(elm)->HasMaxWidth() && setWidth)
    {
        ::uPtr< ::app::Fuse::Elements::Element*>(elm)->SetStyleMaxWidth_1(FLT_INF, 1);
    }

    if (!elm->HasMaxHeight() && setHeight)
    {
        elm->SetStyleMaxHeight_1(FLT_INF, 1);
    }

    if (elm->HasAlignment())
    {
        return;
    }

    bool setAlign = false;

    if ((setWidth && !elm->HasWidth()) && !elm->HasMinWidth())
    {
        ::uPtr< ::app::Fuse::Elements::Element*>(elm)->SetStyleMinWidth_1(100.0f, 1);
        setAlign = true;
    }

    if ((setHeight && !elm->HasHeight()) && !elm->HasMinHeight())
    {
        ::uPtr< ::app::Fuse::Elements::Element*>(elm)->SetStyleMinHeight_1(100.0f, 1);
        setAlign = true;
    }

    if (setAlign)
    {
        elm->SetStyleAlignment(align);
    }
}

void ScrollViewer___ObjInit_3(ScrollViewer* __this)
{
    __this->_behavior = 3;
    __this->allowedScrollDirections = 12;
    __this->_scrollTranslation = ::app::Fuse::Translation__New_1(NULL);
    ::app::Fuse::Controls::Control___ObjInit_2(__this);
    __this->ClipToBounds(true);
    __this->HitTestMode(3);
    __this->UpdateBehaviors();
}

ScrollViewer* ScrollViewer__New_1(::uStatic* __this)
{
    ScrollViewer* inst = (::app::Fuse::Controls::ScrollViewer*)::uAllocObject(sizeof(::app::Fuse::Controls::ScrollViewer), ::app::Fuse::Controls::ScrollViewer__typeof());
    inst->_ObjInit_3();
    return inst;
}

}}}
