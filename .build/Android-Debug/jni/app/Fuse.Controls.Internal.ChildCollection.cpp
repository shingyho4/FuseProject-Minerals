// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.1.0\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Controls.Internal.ChildCollection.h>
#include <app/Fuse.Controls.Internal.ICollectionParent.h>
#include <app/Fuse.DrawContext.h>
#include <app/Fuse.Elements.Element.h>
#include <app/Fuse.HitTestContext.h>
#include <app/Fuse.INodeParent.h>
#include <app/Fuse.Node.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Elements_Element.h>
#include <app/Uno.Collections.List__Fuse_Elements_Element.h>

namespace app {
namespace Fuse {
namespace Controls {
namespace Internal {

ChildCollection__uType* ChildCollection__typeof()
{
    static ChildCollection__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (ChildCollection__uType*)::uAllocClassType(sizeof(ChildCollection__uType), "Fuse.Controls.Internal.ChildCollection", ::uObject__typeof(), 3, 3);
        type->__interface_0.__fp_Insert = (void(*)(void*, int, ::app::Fuse::Elements::Element*))ChildCollection__Insert;
        type->__interface_0.__fp_RemoveAt = (void(*)(void*, int))ChildCollection__RemoveAt;
        type->__interface_0.__fp_get_Item = (::app::Fuse::Elements::Element*(*)(void*, int))ChildCollection__get_Item;
        type->__interface_1.__fp_Clear = (void(*)(void*))ChildCollection__Clear;
        type->__interface_1.__fp_Add = (void(*)(void*, ::app::Fuse::Elements::Element*))ChildCollection__Add;
        type->__interface_1.__fp_Remove = (bool(*)(void*, ::app::Fuse::Elements::Element*))ChildCollection__Remove;
        type->__interface_1.__fp_Contains = (bool(*)(void*, ::app::Fuse::Elements::Element*))ChildCollection__Contains;
        type->__interface_1.__fp_get_Count = (int(*)(void*))ChildCollection__get_Count;
        type->__interface_2.__fp_GetEnumerator = (::uObject*(*)(void*))ChildCollection__GetEnumerator;

        type->Implements[0] = ::app::Uno::Collections::IList__Fuse_Elements_Element__typeof();
        type->Implements[1] = ::app::Uno::Collections::ICollection__Fuse_Elements_Element__typeof();
        type->Implements[2] = ::app::Uno::Collections::IEnumerable__Fuse_Elements_Element__typeof();

        type->InterfaceOffsets[0] = offsetof(ChildCollection__uType, __interface_0);
        type->InterfaceOffsets[1] = offsetof(ChildCollection__uType, __interface_1);
        type->InterfaceOffsets[2] = offsetof(ChildCollection__uType, __interface_2);

        type->StrongRefOffsets[0] = offsetof(ChildCollection, _children);
        type->StrongRefOffsets[1] = offsetof(ChildCollection, _zOrder);
        type->StrongRefOffsets[2] = offsetof(ChildCollection, _owner);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_children";
        type->StrongRefNames[1] = "_zOrder";
        type->StrongRefNames[2] = "_owner";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::uObject* ChildCollection__get_Children(ChildCollection* __this)
{
    if (__this->_children == NULL)
    {
        __this->_children = (::uObject*)::app::Uno::Collections::List__Fuse_Elements_Element__New_1(NULL);
    }

    return __this->_children;
}

int ChildCollection__get_Count(ChildCollection* __this)
{
    return ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Count(::uPtr< ::uObject*>(__this->Children()));
}

::app::Fuse::Elements::Element* ChildCollection__get_Item(ChildCollection* __this, int index)
{
    return ::app::Uno::Collections::IList__Fuse_Elements_Element::Item(::uPtr< ::uObject*>(__this->Children()), index);
}

bool ChildCollection__get_HasZOrder(ChildCollection* __this)
{
    return __this->_zOrder != NULL;
}

::uObject* ChildCollection__GetEnumerator(ChildCollection* __this)
{
    return ::app::Uno::Collections::IEnumerable__Fuse_Elements_Element::GetEnumerator(::uPtr< ::uObject*>(__this->Children()));
}

void ChildCollection__Clear(ChildCollection* __this)
{
    for (int i = ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Count(::uPtr< ::uObject*>(__this->Children())); (i--) > 0; )
    {
        ::app::Fuse::Elements::Element* child = ::app::Uno::Collections::IList__Fuse_Elements_Element::Item(::uPtr< ::uObject*>(__this->Children()), i);
        ::app::Uno::Collections::IList__Fuse_Elements_Element::RemoveAt(::uPtr< ::uObject*>(__this->Children()), i);

        if (__this->_zOrder != NULL)
        {
            ::uPtr< ::app::Uno::Collections::List__Fuse_Elements_Element*>(__this->_zOrder)->RemoveAt(i);
        }

        __this->RemoveChild(child);
    }
}

void ChildCollection__Add(ChildCollection* __this, ::app::Fuse::Elements::Element* item)
{
    ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Add(::uPtr< ::uObject*>(__this->Children()), item);

    if (__this->_zOrder != NULL)
    {
        ::uPtr< ::app::Uno::Collections::List__Fuse_Elements_Element*>(__this->_zOrder)->Add(item);
    }

    __this->AddChild(item);
}

bool ChildCollection__Remove(ChildCollection* __this, ::app::Fuse::Elements::Element* item)
{
    bool wasRemoved = ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Remove(::uPtr< ::uObject*>(__this->Children()), item);

    if (wasRemoved)
    {
        if (__this->_zOrder != NULL)
        {
            ::uPtr< ::app::Uno::Collections::List__Fuse_Elements_Element*>(__this->_zOrder)->Remove(item);
        }

        __this->RemoveChild(item);
    }

    return wasRemoved;
}

void ChildCollection__AddChild(ChildCollection* __this, ::app::Fuse::Elements::Element* child)
{
    ::uPtr< ::app::Fuse::Elements::Element*>(child)->OnAdded((::uObject*)__this->_owner);
    ::app::Fuse::Controls::Internal::ICollectionParent::OnCollectionChildAdded(::uPtr< ::uObject*>(__this->_owner), (::uObject*)__this, child);
}

void ChildCollection__RemoveChild(ChildCollection* __this, ::app::Fuse::Elements::Element* child)
{
    ::app::Fuse::Controls::Internal::ICollectionParent::OnCollectionChildRemoved(::uPtr< ::uObject*>(__this->_owner), (::uObject*)__this, child);
    ::uPtr< ::app::Fuse::Elements::Element*>(child)->OnRemoved((::uObject*)__this->_owner);
}

bool ChildCollection__Contains(ChildCollection* __this, ::app::Fuse::Elements::Element* item)
{
    return ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Contains(::uPtr< ::uObject*>(__this->Children()), item);
}

void ChildCollection__Insert(ChildCollection* __this, int index, ::app::Fuse::Elements::Element* item)
{
    ::app::Uno::Collections::IList__Fuse_Elements_Element::Insert(::uPtr< ::uObject*>(__this->Children()), index, item);

    if (__this->_zOrder != NULL)
    {
        ::uPtr< ::app::Uno::Collections::List__Fuse_Elements_Element*>(__this->_zOrder)->Insert(0, item);
    }

    __this->AddChild(item);
}

void ChildCollection__RemoveAt(ChildCollection* __this, int index)
{
    ::app::Fuse::Elements::Element* child = ::app::Uno::Collections::IList__Fuse_Elements_Element::Item(::uPtr< ::uObject*>(__this->Children()), index);

    if (__this->_zOrder != NULL)
    {
        ::uPtr< ::app::Uno::Collections::List__Fuse_Elements_Element*>(__this->_zOrder)->Remove(child);
    }

    ::app::Uno::Collections::IList__Fuse_Elements_Element::RemoveAt(::uPtr< ::uObject*>(__this->Children()), index);
    __this->RemoveChild(child);
}

::app::Fuse::Elements::Element* ChildCollection__GetZOrderChild(ChildCollection* __this, int index)
{
    if (__this->_zOrder != NULL)
    {
        return ::uPtr< ::app::Uno::Collections::List__Fuse_Elements_Element*>(__this->_zOrder)->Item(index);
    }

    return ::app::Uno::Collections::IList__Fuse_Elements_Element::Item(::uPtr< ::uObject*>(__this->Children()), index);
}

void ChildCollection__RemoveStyleChildren(ChildCollection* __this)
{
    for (int i = 0; i < ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Count(::uPtr< ::uObject*>(__this->Children())); i++)
    {
        if (::uPtr< ::app::Fuse::Elements::Element*>(::app::Uno::Collections::IList__Fuse_Elements_Element::Item(::uPtr< ::uObject*>(__this->Children()), i))->AddedByStyle())
        {
            ::app::Uno::Collections::IList__Fuse_Elements_Element::RemoveAt(::uPtr< ::uObject*>(__this->Children()), i--);
        }
    }
}

void ChildCollection__Draw(ChildCollection* __this, ::app::Fuse::DrawContext* dc)
{
    if (__this->HasZOrder())
    {
        for (int i = 0; i < ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Count(::uPtr< ::uObject*>(__this->Children())); ++i)
        {
            ::uPtr< ::app::Fuse::Elements::Element*>(__this->GetZOrderChild(i))->Draw(dc);
        }
    }
    else
    {
        for (int i = ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Count(::uPtr< ::uObject*>(__this->Children())) - 1; i >= 0; --i)
        {
            ::uPtr< ::app::Fuse::Elements::Element*>(::app::Uno::Collections::IList__Fuse_Elements_Element::Item(::uPtr< ::uObject*>(__this->Children()), i))->Draw(dc);
        }
    }
}

::app::Uno::Rect ChildCollection__CalcRenderBounds(ChildCollection* __this, ::app::Uno::Rect baseRect)
{
    for (int i = 0; i < ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Count(::uPtr< ::uObject*>(__this->Children())); i++)
    {
        baseRect = ::app::Uno::Rect__Union(NULL, baseRect, ::uPtr< ::app::Fuse::Elements::Element*>(::app::Uno::Collections::IList__Fuse_Elements_Element::Item(::uPtr< ::uObject*>(__this->Children()), i))->CalcRenderBoundsInParentSpace());
    }

    return baseRect;
}

void ChildCollection__HitTest(ChildCollection* __this, ::app::Fuse::HitTestContext* htc)
{
    if (__this->HasZOrder())
    {
        for (int i = ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Count(::uPtr< ::uObject*>(__this->Children())) - 1; i >= 0; --i)
        {
            ::uPtr< ::app::Fuse::Elements::Element*>(__this->GetZOrderChild(i))->HitTest(htc);
        }
    }
    else
    {
        for (int i = 0; i < ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Count(::uPtr< ::uObject*>(__this->Children())); ++i)
        {
            ::uPtr< ::app::Fuse::Elements::Element*>(::app::Uno::Collections::IList__Fuse_Elements_Element::Item(::uPtr< ::uObject*>(__this->Children()), i))->HitTest(htc);
        }
    }
}

void ChildCollection___ObjInit(ChildCollection* __this, ::uObject* owner)
{
    __this->_owner = owner;
}

ChildCollection* ChildCollection__New_1(::uStatic* __this, ::uObject* owner)
{
    ChildCollection* inst = (::app::Fuse::Controls::Internal::ChildCollection*)::uAllocObject(sizeof(::app::Fuse::Controls::Internal::ChildCollection), ::app::Fuse::Controls::Internal::ChildCollection__typeof());
    inst->_ObjInit(owner);
    return inst;
}

}}}}
