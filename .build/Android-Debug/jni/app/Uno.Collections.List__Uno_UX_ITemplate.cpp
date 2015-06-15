// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Bool.h>
#include <app/Uno.Collections.List__Uno_UX_ITemplate.h>
#include <app/Uno.IndexOutOfRangeException.h>
#include <app/Uno.UX.ITemplate.h>

namespace app {
namespace Uno {
namespace Collections {

List__Uno_UX_ITemplate__uType* List__Uno_UX_ITemplate__typeof()
{
    static List__Uno_UX_ITemplate__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (List__Uno_UX_ITemplate__uType*)::uAllocClassType(sizeof(List__Uno_UX_ITemplate__uType), "Uno.Collections.List<Uno.UX.ITemplate>", ::uObject__typeof(), 2, 1);
        type->__interface_0.__fp_get_Item = (::uObject*(*)(void*, int))List__Uno_UX_ITemplate__get_Item;
        type->__interface_1.__fp_Add = (void(*)(void*, ::uObject*))List__Uno_UX_ITemplate__Add;
        type->__interface_1.__fp_get_Count = (int(*)(void*))List__Uno_UX_ITemplate__get_Count;

        type->Implements[0] = ::app::Uno::Collections::IList__Uno_UX_ITemplate__typeof();
        type->Implements[1] = ::app::Uno::Collections::ICollection__Uno_UX_ITemplate__typeof();

        type->InterfaceOffsets[0] = offsetof(List__Uno_UX_ITemplate__uType, __interface_0);
        type->InterfaceOffsets[1] = offsetof(List__Uno_UX_ITemplate__uType, __interface_1);

        type->StrongRefOffsets[0] = offsetof(List__Uno_UX_ITemplate, _data);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_data";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

int List__Uno_UX_ITemplate__get_Count(List__Uno_UX_ITemplate* __this)
{
    return __this->_used;
}

::uObject* List__Uno_UX_ITemplate__get_Item(List__Uno_UX_ITemplate* __this, int index)
{
    __this->BoundsCheck(index);
    return ::uPtr< ::uArray*>(__this->_data)->Item< ::uObject*>(index);
}

void List__Uno_UX_ITemplate__set_Item(List__Uno_UX_ITemplate* __this, int index, ::uObject* value)
{
    __this->BoundsCheck(index);
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::uObject*>(index) = value;
    __this->_version++;
}

void List__Uno_UX_ITemplate__BoundsCheck(List__Uno_UX_ITemplate* __this, int index)
{
    if ((index < 0) || (index >= __this->Count()))
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }
}

void List__Uno_UX_ITemplate__EnsureCapacity(List__Uno_UX_ITemplate* __this)
{
    if (__this->_data == NULL)
    {
        __this->_data = ::uNewArray(::app::Uno::UX::ITemplate__typeof(), 2);
    }
    else if ((__this->_used + 1) == ::uPtr< ::uArray*>(__this->_data)->Length())
    {
        ::uArray* newData = ::uNewArray(::app::Uno::UX::ITemplate__typeof(), ::uPtr< ::uArray*>(__this->_data)->Length() * 2);

        for (int i = 0; i < __this->_used; i++)
        {
            newData->ItemStrong< ::uObject*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::uObject*>(i);
        }

        __this->_data = newData;
    }
}

void List__Uno_UX_ITemplate__Add(List__Uno_UX_ITemplate* __this, ::uObject* item)
{
    __this->EnsureCapacity();
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::uObject*>(__this->_used++) = item;
    __this->_version++;
}

void List__Uno_UX_ITemplate___ObjInit(List__Uno_UX_ITemplate* __this)
{
    __this->_data = NULL;
    __this->_used = 0;
}

List__Uno_UX_ITemplate* List__Uno_UX_ITemplate__New_1(::uStatic* __this)
{
    List__Uno_UX_ITemplate* inst = (::app::Uno::Collections::List__Uno_UX_ITemplate*)::uAllocObject(sizeof(::app::Uno::Collections::List__Uno_UX_ITemplate), ::app::Uno::Collections::List__Uno_UX_ITemplate__typeof());
    inst->_ObjInit();
    return inst;
}

}}}
