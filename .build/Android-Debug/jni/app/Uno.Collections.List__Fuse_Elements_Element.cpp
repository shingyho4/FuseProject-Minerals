// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Elements.Element.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Elements_Element.h>
#include <app/Uno.Collections.List__Fuse_Elements_Element.h>
#include <app/Uno.Generic.h>
#include <app/Uno.IndexOutOfRangeException.h>

namespace app {
namespace Uno {
namespace Collections {

List__Fuse_Elements_Element__uType* List__Fuse_Elements_Element__typeof()
{
    static List__Fuse_Elements_Element__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (List__Fuse_Elements_Element__uType*)::uAllocClassType(sizeof(List__Fuse_Elements_Element__uType), "Uno.Collections.List<Fuse.Elements.Element>", ::uObject__typeof(), 3, 1);
        type->__interface_0.__fp_Insert = (void(*)(void*, int, ::app::Fuse::Elements::Element*))List__Fuse_Elements_Element__Insert;
        type->__interface_0.__fp_RemoveAt = (void(*)(void*, int))List__Fuse_Elements_Element__RemoveAt;
        type->__interface_0.__fp_get_Item = (::app::Fuse::Elements::Element*(*)(void*, int))List__Fuse_Elements_Element__get_Item;
        type->__interface_1.__fp_Clear = (void(*)(void*))List__Fuse_Elements_Element__Clear;
        type->__interface_1.__fp_Add = (void(*)(void*, ::app::Fuse::Elements::Element*))List__Fuse_Elements_Element__Add;
        type->__interface_1.__fp_Remove = (bool(*)(void*, ::app::Fuse::Elements::Element*))List__Fuse_Elements_Element__Remove;
        type->__interface_1.__fp_Contains = (bool(*)(void*, ::app::Fuse::Elements::Element*))List__Fuse_Elements_Element__Contains;
        type->__interface_1.__fp_get_Count = (int(*)(void*))List__Fuse_Elements_Element__get_Count;
        type->__interface_2.__fp_GetEnumerator = (::uObject*(*)(void*))List__Fuse_Elements_Element__GetEnumerator_boxed;

        type->Implements[0] = ::app::Uno::Collections::IList__Fuse_Elements_Element__typeof();
        type->Implements[1] = ::app::Uno::Collections::ICollection__Fuse_Elements_Element__typeof();
        type->Implements[2] = ::app::Uno::Collections::IEnumerable__Fuse_Elements_Element__typeof();

        type->InterfaceOffsets[0] = offsetof(List__Fuse_Elements_Element__uType, __interface_0);
        type->InterfaceOffsets[1] = offsetof(List__Fuse_Elements_Element__uType, __interface_1);
        type->InterfaceOffsets[2] = offsetof(List__Fuse_Elements_Element__uType, __interface_2);

        type->StrongRefOffsets[0] = offsetof(List__Fuse_Elements_Element, _data);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_data";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

int List__Fuse_Elements_Element__get_Count(List__Fuse_Elements_Element* __this)
{
    return __this->_used;
}

::app::Fuse::Elements::Element* List__Fuse_Elements_Element__get_Item(List__Fuse_Elements_Element* __this, int index)
{
    __this->BoundsCheck(index);
    return ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Elements::Element*>(index);
}

void List__Fuse_Elements_Element__set_Item(List__Fuse_Elements_Element* __this, int index, ::app::Fuse::Elements::Element* value)
{
    __this->BoundsCheck(index);
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Elements::Element*>(index) = value;
    __this->_version++;
}

::app::Uno::Collections::List1_Enumerator__Fuse_Elements_Element List__Fuse_Elements_Element__GetEnumerator(List__Fuse_Elements_Element* __this)
{
    return ::app::Uno::Collections::List1_Enumerator__Fuse_Elements_Element__New_1(NULL, __this);
}

void List__Fuse_Elements_Element__BoundsCheck(List__Fuse_Elements_Element* __this, int index)
{
    if ((index < 0) || (index >= __this->Count()))
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }
}

void List__Fuse_Elements_Element__EnsureCapacity(List__Fuse_Elements_Element* __this)
{
    if (__this->_data == NULL)
    {
        __this->_data = ::uNewArray(::app::Fuse::Elements::Element__typeof(), 2);
    }
    else if ((__this->_used + 1) == ::uPtr< ::uArray*>(__this->_data)->Length())
    {
        ::uArray* newData = ::uNewArray(::app::Fuse::Elements::Element__typeof(), ::uPtr< ::uArray*>(__this->_data)->Length() * 2);

        for (int i = 0; i < __this->_used; i++)
        {
            newData->ItemStrong< ::app::Fuse::Elements::Element*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Elements::Element*>(i);
        }

        __this->_data = newData;
    }
}

void List__Fuse_Elements_Element__Add(List__Fuse_Elements_Element* __this, ::app::Fuse::Elements::Element* item)
{
    __this->EnsureCapacity();
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Elements::Element*>(__this->_used++) = item;
    __this->_version++;
}

void List__Fuse_Elements_Element__Insert(List__Fuse_Elements_Element* __this, int index, ::app::Fuse::Elements::Element* item)
{
    if ((index < 0) || (index > __this->_used))
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }

    __this->EnsureCapacity();

    for (int i = __this->_used; i >= index; i--)
    {
        ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Elements::Element*>(i + 1) = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Elements::Element*>(i);
    }

    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Elements::Element*>(index) = item;
    __this->_version++;
    __this->_used++;
}

bool List__Fuse_Elements_Element__Remove(List__Fuse_Elements_Element* __this, ::app::Fuse::Elements::Element* item)
{
    for (int i = 0; i < __this->_used; i++)
    {
        if (::app::Uno::Generic__Equals__Fuse_Elements_Element(NULL, ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Elements::Element*>(i), item))
        {
            __this->RemoveAt(i);
            return true;
        }
    }

    return false;
}

void List__Fuse_Elements_Element__RemoveAt(List__Fuse_Elements_Element* __this, int index)
{
    __this->BoundsCheck(index);

    for (int i = index; i < (__this->_used - 1); i++)
    {
        ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Elements::Element*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Elements::Element*>(i + 1);
    }

    __this->_used = __this->_used - 1;
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Elements::Element*>(__this->_used) = NULL;
    __this->_version++;
}

void List__Fuse_Elements_Element__Clear(List__Fuse_Elements_Element* __this)
{
    __this->_data = NULL;
    __this->_used = 0;
    __this->_version++;
}

bool List__Fuse_Elements_Element__Contains(List__Fuse_Elements_Element* __this, ::app::Fuse::Elements::Element* item)
{
    for (int i = 0; i < __this->_used; i++)
    {
        if (::app::Uno::Generic__Equals__Fuse_Elements_Element(NULL, ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Elements::Element*>(i), item))
        {
            return true;
        }
    }

    return false;
}

void List__Fuse_Elements_Element___ObjInit(List__Fuse_Elements_Element* __this)
{
    __this->_data = NULL;
    __this->_used = 0;
}

List__Fuse_Elements_Element* List__Fuse_Elements_Element__New_1(::uStatic* __this)
{
    List__Fuse_Elements_Element* inst = (::app::Uno::Collections::List__Fuse_Elements_Element*)::uAllocObject(sizeof(::app::Uno::Collections::List__Fuse_Elements_Element), ::app::Uno::Collections::List__Fuse_Elements_Element__typeof());
    inst->_ObjInit();
    return inst;
}

::uObject* List__Fuse_Elements_Element__GetEnumerator_boxed(List__Fuse_Elements_Element* __this)
{
    return ::uBox(::app::Uno::Collections::List1_Enumerator__Fuse_Elements_Element__typeof(), __this->GetEnumerator());
}

}}}
