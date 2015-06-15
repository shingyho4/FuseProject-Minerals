// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Collections.List__Uno_UX_Resource.h>
#include <app/Uno.Generic.h>
#include <app/Uno.IndexOutOfRangeException.h>
#include <app/Uno.UX.Resource.h>

namespace app {
namespace Uno {
namespace Collections {

List__Uno_UX_Resource__uType* List__Uno_UX_Resource__typeof()
{
    static List__Uno_UX_Resource__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (List__Uno_UX_Resource__uType*)::uAllocClassType(sizeof(List__Uno_UX_Resource__uType), "Uno.Collections.List<Uno.UX.Resource>", ::uObject__typeof(), 2, 1);
        type->__interface_0.__fp_RemoveAt = (void(*)(void*, int))List__Uno_UX_Resource__RemoveAt;
        type->__interface_0.__fp_get_Item = (::app::Uno::UX::Resource*(*)(void*, int))List__Uno_UX_Resource__get_Item;
        type->__interface_1.__fp_Add = (void(*)(void*, ::app::Uno::UX::Resource*))List__Uno_UX_Resource__Add;
        type->__interface_1.__fp_get_Count = (int(*)(void*))List__Uno_UX_Resource__get_Count;

        type->Implements[0] = ::app::Uno::Collections::IList__Uno_UX_Resource__typeof();
        type->Implements[1] = ::app::Uno::Collections::ICollection__Uno_UX_Resource__typeof();

        type->InterfaceOffsets[0] = offsetof(List__Uno_UX_Resource__uType, __interface_0);
        type->InterfaceOffsets[1] = offsetof(List__Uno_UX_Resource__uType, __interface_1);

        type->StrongRefOffsets[0] = offsetof(List__Uno_UX_Resource, _data);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_data";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

int List__Uno_UX_Resource__get_Count(List__Uno_UX_Resource* __this)
{
    return __this->_used;
}

::app::Uno::UX::Resource* List__Uno_UX_Resource__get_Item(List__Uno_UX_Resource* __this, int index)
{
    __this->BoundsCheck(index);
    return ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Uno::UX::Resource*>(index);
}

void List__Uno_UX_Resource__set_Item(List__Uno_UX_Resource* __this, int index, ::app::Uno::UX::Resource* value)
{
    __this->BoundsCheck(index);
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Uno::UX::Resource*>(index) = value;
    __this->_version++;
}

void List__Uno_UX_Resource__BoundsCheck(List__Uno_UX_Resource* __this, int index)
{
    if ((index < 0) || (index >= __this->Count()))
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }
}

void List__Uno_UX_Resource__EnsureCapacity(List__Uno_UX_Resource* __this)
{
    if (__this->_data == NULL)
    {
        __this->_data = ::uNewArray(::app::Uno::UX::Resource__typeof(), 2);
    }
    else if ((__this->_used + 1) == ::uPtr< ::uArray*>(__this->_data)->Length())
    {
        ::uArray* newData = ::uNewArray(::app::Uno::UX::Resource__typeof(), ::uPtr< ::uArray*>(__this->_data)->Length() * 2);

        for (int i = 0; i < __this->_used; i++)
        {
            newData->ItemStrong< ::app::Uno::UX::Resource*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Uno::UX::Resource*>(i);
        }

        __this->_data = newData;
    }
}

void List__Uno_UX_Resource__Add(List__Uno_UX_Resource* __this, ::app::Uno::UX::Resource* item)
{
    __this->EnsureCapacity();
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Uno::UX::Resource*>(__this->_used++) = item;
    __this->_version++;
}

bool List__Uno_UX_Resource__Remove(List__Uno_UX_Resource* __this, ::app::Uno::UX::Resource* item)
{
    for (int i = 0; i < __this->_used; i++)
    {
        if (::app::Uno::Generic__Equals__Uno_UX_Resource(NULL, ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Uno::UX::Resource*>(i), item))
        {
            __this->RemoveAt(i);
            return true;
        }
    }

    return false;
}

void List__Uno_UX_Resource__RemoveAt(List__Uno_UX_Resource* __this, int index)
{
    __this->BoundsCheck(index);

    for (int i = index; i < (__this->_used - 1); i++)
    {
        ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Uno::UX::Resource*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Uno::UX::Resource*>(i + 1);
    }

    __this->_used = __this->_used - 1;
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Uno::UX::Resource*>(__this->_used) = NULL;
    __this->_version++;
}

void List__Uno_UX_Resource___ObjInit(List__Uno_UX_Resource* __this)
{
    __this->_data = NULL;
    __this->_used = 0;
}

List__Uno_UX_Resource* List__Uno_UX_Resource__New_1(::uStatic* __this)
{
    List__Uno_UX_Resource* inst = (::app::Uno::Collections::List__Uno_UX_Resource*)::uAllocObject(sizeof(::app::Uno::Collections::List__Uno_UX_Resource), ::app::Uno::Collections::List__Uno_UX_Resource__typeof());
    inst->_ObjInit();
    return inst;
}

}}}
