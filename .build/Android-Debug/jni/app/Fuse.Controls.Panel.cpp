// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Controls.Internal.ChildCollection.h>
#include <app/Fuse.Controls.Panel.h>
#include <app/Fuse.DrawContext.h>
#include <app/Fuse.Elements.Element.h>
#include <app/Fuse.HitTestContext.h>
#include <app/Fuse.Layouts.Layout.h>
#include <app/Fuse.Layouts.Layouts.h>
#include <app/Fuse.Node.h>
#include <app/Uno.Action.h>
#include <app/Uno.Action__Fuse_Node.h>
#include <app/Uno.Collections.ICollection__Fuse_Elements_Element.h>
#include <app/Uno.Collections.IList__Fuse_Elements_Element.h>
#include <app/Uno.Delegate.h>
#include <app/Uno.EventHandler__Fuse_Elements_Element.h>
#include <app/Uno.Float4.h>
#include <app/Uno.Object.h>

namespace app {
namespace Fuse {
namespace Controls {

Panel__uType* Panel__typeof()
{
    static Panel__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Panel__uType*)::uAllocClassType(sizeof(Panel__uType), "Fuse.Controls.Panel", ::app::Fuse::Controls::Control__typeof(), 9, 7);
        type->__fp_get_IsRedrawCheap = (bool(*)(::app::Fuse::Elements::Element*))Panel__get_IsRedrawCheap;
        type->__fp_get_SubElementCount = (int(*)(::app::Fuse::Elements::Element*))Panel__get_SubElementCount;
        type->__fp_OnResized = (void(*)(::app::Fuse::Elements::Element*, ::app::Uno::Float2))Panel__OnResized;
        type->__fp_OnResetStyle = (void(*)(::app::Fuse::Node*))Panel__OnResetStyle;
        type->__fp_OnRooted = (void(*)(::app::Fuse::Node*))Panel__OnRooted;
        type->__fp_OnUnrooted = (void(*)(::app::Fuse::Node*))Panel__OnUnrooted;
        type->__fp_GetContentSize = (::app::Uno::Float2(*)(::app::Fuse::Elements::Element*, ::app::Uno::Float2, int))Panel__GetContentSize;
        type->__fp_ArrangePaddingBox = (void(*)(::app::Fuse::Elements::Element*, ::app::Uno::Float2))Panel__ArrangePaddingBox;
        type->__fp_CalcRenderBounds_1 = (::app::Uno::Rect(*)(::app::Fuse::Controls::Control*, ::app::Uno::Rect))Panel__CalcRenderBounds_1;
        type->__fp_OnDrawControl = (void(*)(::app::Fuse::Controls::Control*, ::app::Fuse::DrawContext*))Panel__OnDrawControl;
        type->__fp_OnCollectionChildAdded = (void(*)(::app::Fuse::Controls::Control*, ::uObject*, ::app::Fuse::Elements::Element*))Panel__OnCollectionChildAdded;
        type->__fp_OnCollectionChildRemoved = (void(*)(::app::Fuse::Controls::Control*, ::uObject*, ::app::Fuse::Elements::Element*))Panel__OnCollectionChildRemoved;
        type->__fp_OnHitTestControlChildren = (void(*)(::app::Fuse::Controls::Control*, ::app::Fuse::HitTestContext*))Panel__OnHitTestControlChildren;
        type->__fp_GetSubElement = (::app::Fuse::Elements::Element*(*)(::app::Fuse::Elements::Element*, int))Panel__GetSubElement;

        type->__interface_7.__fp_ContainsChild = (bool(*)(void*, ::app::Fuse::Node*))Panel__Fuse_Navigation_INavigationPanel_ContainsChild;
        type->__interface_7.__fp_AddChildAt = (void(*)(void*, int, ::app::Fuse::Node*))Panel__Fuse_Navigation_INavigationPanel_AddChildAt;
        type->__interface_7.__fp_RemoveChildAt = (void(*)(void*, int))Panel__Fuse_Navigation_INavigationPanel_RemoveChildAt;
        type->__interface_7.__fp_GetChild = (::app::Fuse::Node*(*)(void*, int))Panel__Fuse_Navigation_INavigationPanel_GetChild;
        type->__interface_8.__fp_AddChild = (void(*)(void*, ::app::Fuse::Node*))Panel__Fuse_Triggers_IAddRemoveChild_AddChild;
        type->__interface_8.__fp_RemoveChild = (void(*)(void*, ::app::Fuse::Node*))Panel__Fuse_Triggers_IAddRemoveChild_RemoveChild;
        type->__interface_7.__fp_get_ChildCount = (int(*)(void*))Panel__Fuse_Navigation_INavigationPanel_get_ChildCount;
        type->__interface_7.__fp_add_ChildAdded = (void(*)(void*, ::uDelegate*))Panel__Fuse_Navigation_INavigationPanel_add_ChildAdded;
        type->__interface_7.__fp_remove_ChildAdded = (void(*)(void*, ::uDelegate*))Panel__Fuse_Navigation_INavigationPanel_remove_ChildAdded;
        type->__interface_7.__fp_add_ChildRemoved = (void(*)(void*, ::uDelegate*))Panel__Fuse_Navigation_INavigationPanel_add_ChildRemoved;
        type->__interface_7.__fp_remove_ChildRemoved = (void(*)(void*, ::uDelegate*))Panel__Fuse_Navigation_INavigationPanel_remove_ChildRemoved;
        type->__interface_7.__fp_add_Resized = (void(*)(void*, ::uDelegate*))Panel__Fuse_Navigation_INavigationPanel_add_Resized;
        type->__interface_7.__fp_remove_Resized = (void(*)(void*, ::uDelegate*))Panel__Fuse_Navigation_INavigationPanel_remove_Resized;
        type->__interface_6.__fp_OnCollectionChildAdded = (void(*)(void*, ::uObject*, ::app::Fuse::Elements::Element*))Panel__OnCollectionChildAdded;
        type->__interface_6.__fp_OnCollectionChildRemoved = (void(*)(void*, ::uObject*, ::app::Fuse::Elements::Element*))Panel__OnCollectionChildRemoved;
        type->__interface_7.__fp_get_ActualSize = (::app::Uno::Float2(*)(void*))::app::Fuse::Elements::Element__get_ActualSize;
        type->__interface_7.__fp_get_HasChildren = (bool(*)(void*))Panel__get_HasChildren;
        type->__interface_7.__fp_add_Update = (void(*)(void*, ::uDelegate*))::app::Fuse::Node__add_Update;
        type->__interface_7.__fp_remove_Update = (void(*)(void*, ::uDelegate*))::app::Fuse::Node__remove_Update;
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
        type->Implements[7] = ::app::Fuse::Navigation::INavigationPanel__typeof();
        type->Implements[8] = ::app::Fuse::Triggers::IAddRemoveChild__typeof();

        type->InterfaceOffsets[0] = offsetof(Panel__uType, __interface_0);
        type->InterfaceOffsets[1] = offsetof(Panel__uType, __interface_1);
        type->InterfaceOffsets[2] = offsetof(Panel__uType, __interface_2);
        type->InterfaceOffsets[3] = offsetof(Panel__uType, __interface_3);
        type->InterfaceOffsets[4] = offsetof(Panel__uType, __interface_4);
        type->InterfaceOffsets[5] = offsetof(Panel__uType, __interface_5);
        type->InterfaceOffsets[6] = offsetof(Panel__uType, __interface_6);
        type->InterfaceOffsets[7] = offsetof(Panel__uType, __interface_7);
        type->InterfaceOffsets[8] = offsetof(Panel__uType, __interface_8);

        type->StrongRefOffsets[0] = offsetof(Panel, _childAdded);
        type->StrongRefOffsets[1] = offsetof(Panel, _childRemoved);
        type->StrongRefOffsets[2] = offsetof(Panel, _resized);
        type->StrongRefOffsets[3] = offsetof(Panel, _layout);
        type->StrongRefOffsets[4] = offsetof(Panel, _children);
        type->StrongRefOffsets[5] = offsetof(Panel, ChildAdded);
        type->StrongRefOffsets[6] = offsetof(Panel, ChildRemoved);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_childAdded";
        type->StrongRefNames[1] = "_childRemoved";
        type->StrongRefNames[2] = "_resized";
        type->StrongRefNames[3] = "_layout";
        type->StrongRefNames[4] = "_children";
        type->StrongRefNames[5] = "ChildAdded";
        type->StrongRefNames[6] = "ChildRemoved";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

int Panel__Fuse_Navigation_INavigationPanel_get_ChildCount(Panel* __this)
{
    return ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Count(::uPtr< ::uObject*>(__this->Children()));
}

::app::Fuse::Layouts::Layout* Panel__get_Layout(Panel* __this)
{
    ::app::Fuse::Layouts::Layout* ind_123 = __this->_layout;
    return (ind_123 != NULL) ? ind_123 : ::app::Fuse::Layouts::Layouts__Default;
}

void Panel__set_Layout(Panel* __this, ::app::Fuse::Layouts::Layout* value)
{
    if (__this->IsRooted() && (__this->_layout != NULL))
    {
        ::uPtr< ::app::Fuse::Layouts::Layout*>(__this->_layout)->RemoveSubscriber((::app::Fuse::Elements::Element*)__this);
    }

    __this->_layout = value;

    if (__this->IsRooted() && (__this->_layout != NULL))
    {
        ::uPtr< ::app::Fuse::Layouts::Layout*>(__this->_layout)->AddSubscriber((::app::Fuse::Elements::Element*)__this);
        __this->InvalidateLayout();
    }
}

bool Panel__get_HasChildren(Panel* __this)
{
    return (__this->_children != NULL) && (::uPtr< ::app::Fuse::Controls::Internal::ChildCollection*>(__this->_children)->Count() > 0);
}

bool Panel__get_IsRedrawCheap(Panel* __this)
{
    return __this->HasChildren() && (::app::Uno::Collections::ICollection__Fuse_Elements_Element::Count(::uPtr< ::uObject*>(__this->Children())) < 2);
}

::uObject* Panel__get_Children(Panel* __this)
{
    ::app::Fuse::Controls::Internal::ChildCollection* ind_124;
    return (::uObject*)(ind_124 = __this->_children, ((ind_124 != NULL) ? ind_124 : (__this->_children = ::app::Fuse::Controls::Internal::ChildCollection__New_1(NULL, (::uObject*)__this))));
}

int Panel__get_SubElementCount(Panel* __this)
{
    return ::app::Fuse::Controls::Control__get_SubElementCount(__this) + (__this->HasChildren() ? ::uPtr< ::app::Fuse::Controls::Internal::ChildCollection*>(__this->_children)->Count() : 0);
}

void Panel__OnResized(Panel* __this, ::app::Uno::Float2 s)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_resized, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->_resized)->InvokeVoid();
    }

    ::app::Fuse::Elements::Element__OnResized(__this, s);
}

bool Panel__Fuse_Navigation_INavigationPanel_ContainsChild(Panel* __this, ::app::Fuse::Node* n)
{
    return ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Contains(::uPtr< ::uObject*>(__this->Children()), ::uAs< ::app::Fuse::Elements::Element*>(n, ::app::Fuse::Elements::Element__typeof()));
}

void Panel__Fuse_Navigation_INavigationPanel_AddChildAt(Panel* __this, int index, ::app::Fuse::Node* n)
{
    ::app::Uno::Collections::IList__Fuse_Elements_Element::Insert(::uPtr< ::uObject*>(__this->Children()), index, ::uAs< ::app::Fuse::Elements::Element*>(n, ::app::Fuse::Elements::Element__typeof()));
}

void Panel__Fuse_Navigation_INavigationPanel_RemoveChildAt(Panel* __this, int index)
{
    ::app::Uno::Collections::IList__Fuse_Elements_Element::RemoveAt(::uPtr< ::uObject*>(__this->Children()), index);
}

::app::Fuse::Node* Panel__Fuse_Navigation_INavigationPanel_GetChild(Panel* __this, int index)
{
    return (::app::Fuse::Node*)::app::Uno::Collections::IList__Fuse_Elements_Element::Item(::uPtr< ::uObject*>(__this->Children()), index);
}

void Panel__OnResetStyle(Panel* __this)
{
    if (__this->HasChildren())
    {
        ::uPtr< ::app::Fuse::Controls::Internal::ChildCollection*>(__this->_children)->RemoveStyleChildren();
    }

    ::app::Fuse::Controls::Control__OnResetStyle(__this);
}

void Panel__AddStyleChild(Panel* __this, ::app::Fuse::Elements::Element* child)
{
    ::uPtr< ::app::Fuse::Elements::Element*>(child)->AddedByStyle(true);
    ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Add(::uPtr< ::uObject*>(__this->Children()), child);
}

void Panel__OnRooted(Panel* __this)
{
    if (__this->_layout != NULL)
    {
        ::uPtr< ::app::Fuse::Layouts::Layout*>(__this->_layout)->AddSubscriber((::app::Fuse::Elements::Element*)__this);
    }

    ::app::Fuse::Elements::Element__OnRooted(__this);
}

void Panel__OnUnrooted(Panel* __this)
{
    if (__this->_layout != NULL)
    {
        ::uPtr< ::app::Fuse::Layouts::Layout*>(__this->_layout)->RemoveSubscriber((::app::Fuse::Elements::Element*)__this);
    }

    ::app::Fuse::Elements::Element__OnUnrooted(__this);
}

::app::Uno::Float2 Panel__GetContentSize(Panel* __this, ::app::Uno::Float2 fillSize, int fillSet)
{
    if (__this->HasChildren())
    {
        return ::uPtr< ::app::Fuse::Layouts::Layout*>(__this->Layout())->GetContentSize((::uObject*)__this->_children, fillSize, fillSet);
    }

    return ::app::Fuse::Controls::Control__GetContentSize(__this, fillSize, fillSet);
}

void Panel__ArrangePaddingBox(Panel* __this, ::app::Uno::Float2 size)
{
    if (__this->HasChildren())
    {
        ::uPtr< ::app::Fuse::Layouts::Layout*>(__this->Layout())->ArrangePaddingBox((::uObject*)__this->_children, __this->Padding(), size);
    }

    ::app::Fuse::Controls::Control__ArrangePaddingBox(__this, size);
}

::app::Uno::Rect Panel__CalcRenderBounds_1(Panel* __this, ::app::Uno::Rect baseRect)
{
    ::app::Uno::Rect r = ::app::Fuse::Controls::Control__CalcRenderBounds_1(__this, baseRect);

    if (__this->HasChildren())
    {
        r = ::uPtr< ::app::Fuse::Controls::Internal::ChildCollection*>(__this->_children)->CalcRenderBounds(r);
    }

    return r;
}

void Panel__OnDrawControl(Panel* __this, ::app::Fuse::DrawContext* dc)
{
    ::app::Fuse::Controls::Control__OnDrawControl(__this, dc);

    if (__this->HasChildren())
    {
        ::uPtr< ::app::Fuse::Controls::Internal::ChildCollection*>(__this->_children)->Draw(dc);
    }
}

void Panel__OnCollectionChildAdded(Panel* __this, ::uObject* where, ::app::Fuse::Elements::Element* elm)
{
    ::app::Fuse::Controls::Control__OnCollectionChildAdded(__this, where, elm);

    if (where != __this->_children)
    {
        return;
    }

    __this->OnChildAdded(elm);

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_childAdded, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->_childAdded)->InvokeVoid< ::app::Fuse::Node*>((::app::Fuse::Node*)elm);
    }

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->ChildAdded, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->ChildAdded)->InvokeVoid< ::uObject*, ::app::Fuse::Elements::Element*>((::uObject*)__this, elm);
    }
}

void Panel__OnCollectionChildRemoved(Panel* __this, ::uObject* where, ::app::Fuse::Elements::Element* elm)
{
    ::app::Fuse::Controls::Control__OnCollectionChildRemoved(__this, where, elm);

    if (where != __this->_children)
    {
        return;
    }

    __this->OnChildRemoved(elm);

    if (where != __this->_children)
    {
        return;
    }

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_childRemoved, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->_childRemoved)->InvokeVoid< ::app::Fuse::Node*>((::app::Fuse::Node*)elm);
    }

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->ChildRemoved, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->ChildRemoved)->InvokeVoid< ::uObject*, ::app::Fuse::Elements::Element*>((::uObject*)__this, elm);
    }
}

void Panel__OnChildAdded(Panel* __this, ::app::Fuse::Elements::Element* elm)
{
    __this->InvalidateLayout();
}

void Panel__OnChildRemoved(Panel* __this, ::app::Fuse::Elements::Element* elm)
{
    __this->InvalidateLayout();
}

void Panel__OnHitTestControlChildren(Panel* __this, ::app::Fuse::HitTestContext* htc)
{
    if (__this->HasChildren())
    {
        ::uPtr< ::app::Fuse::Controls::Internal::ChildCollection*>(__this->_children)->HitTest(htc);
    }

    ::app::Fuse::Controls::Control__OnHitTestControlChildren(__this, htc);
}

::app::Fuse::Elements::Element* Panel__GetSubElement(Panel* __this, int index)
{
    if (index < ::app::Fuse::Controls::Control__get_SubElementCount(__this))
    {
        return ::app::Fuse::Controls::Control__GetSubElement(__this, index);
    }

    return ::uPtr< ::app::Fuse::Controls::Internal::ChildCollection*>(__this->_children)->Item(index - ::app::Fuse::Controls::Control__get_SubElementCount(__this));
}

void Panel__Fuse_Triggers_IAddRemoveChild_AddChild(Panel* __this, ::app::Fuse::Node* n)
{
    ::app::Fuse::Elements::Element* e = ::uAs< ::app::Fuse::Elements::Element*>(n, ::app::Fuse::Elements::Element__typeof());

    if (e != NULL)
    {
        ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Add(::uPtr< ::uObject*>(__this->Children()), e);
    }
}

void Panel__Fuse_Triggers_IAddRemoveChild_RemoveChild(Panel* __this, ::app::Fuse::Node* n)
{
    ::app::Fuse::Elements::Element* e = ::uAs< ::app::Fuse::Elements::Element*>(n, ::app::Fuse::Elements::Element__typeof());

    if (e != NULL)
    {
        ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Remove(::uPtr< ::uObject*>(__this->Children()), e);
    }
}

void Panel___ObjInit_3(Panel* __this)
{
    ::app::Fuse::Controls::Control___ObjInit_2(__this);
}

Panel* Panel__New_1(::uStatic* __this)
{
    Panel* inst = (::app::Fuse::Controls::Panel*)::uAllocObject(sizeof(::app::Fuse::Controls::Panel), ::app::Fuse::Controls::Panel__typeof());
    inst->_ObjInit_3();
    return inst;
}

void Panel__Fuse_Navigation_INavigationPanel_add_ChildAdded(Panel* __this, ::uDelegate* value)
{
    __this->_childAdded = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->_childAdded, (::uDelegate*)value), ::app::Uno::Action__Fuse_Node__typeof());
}

void Panel__Fuse_Navigation_INavigationPanel_remove_ChildAdded(Panel* __this, ::uDelegate* value)
{
    __this->_childAdded = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->_childAdded, (::uDelegate*)value), ::app::Uno::Action__Fuse_Node__typeof());
}

void Panel__Fuse_Navigation_INavigationPanel_add_ChildRemoved(Panel* __this, ::uDelegate* value)
{
    __this->_childRemoved = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->_childRemoved, (::uDelegate*)value), ::app::Uno::Action__Fuse_Node__typeof());
}

void Panel__Fuse_Navigation_INavigationPanel_remove_ChildRemoved(Panel* __this, ::uDelegate* value)
{
    __this->_childRemoved = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->_childRemoved, (::uDelegate*)value), ::app::Uno::Action__Fuse_Node__typeof());
}

void Panel__Fuse_Navigation_INavigationPanel_add_Resized(Panel* __this, ::uDelegate* value)
{
    __this->_resized = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->_resized, (::uDelegate*)value), ::app::Uno::Action__typeof());
}

void Panel__Fuse_Navigation_INavigationPanel_remove_Resized(Panel* __this, ::uDelegate* value)
{
    __this->_resized = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->_resized, (::uDelegate*)value), ::app::Uno::Action__typeof());
}

}}}
