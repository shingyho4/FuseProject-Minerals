// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Bool.h>
#include <app/Uno.Collections.List__int.h>
#include <app/Uno.IndexOutOfRangeException.h>

namespace app {
namespace Uno {
namespace Collections {

List__int__uType* List__int__typeof()
{
    static List__int__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (List__int__uType*)::uAllocClassType(sizeof(List__int__uType), "Uno.Collections.List<int>", ::uObject__typeof(), 0, 1);
        type->StrongRefOffsets[0] = offsetof(List__int, _data);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_data";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

int List__int__get_Count(List__int* __this)
{
    return __this->_used;
}

int List__int__get_Item(List__int* __this, int index)
{
    __this->BoundsCheck(index);
    return ::uPtr< ::uArray*>(__this->_data)->Item< int>(index);
}

void List__int__set_Item(List__int* __this, int index, int value)
{
    __this->BoundsCheck(index);
    ::uPtr< ::uArray*>(__this->_data)->Item< int>(index) = value;
    __this->_version++;
}

::app::Uno::Collections::List1_Enumerator__int List__int__GetEnumerator(List__int* __this)
{
    return ::app::Uno::Collections::List1_Enumerator__int__New_1(NULL, __this);
}

void List__int__BoundsCheck(List__int* __this, int index)
{
    if ((index < 0) || (index >= __this->Count()))
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }
}

void List__int__EnsureCapacity(List__int* __this)
{
    if (__this->_data == NULL)
    {
        __this->_data = ::uNewArray(::app::Uno::Int__typeof(), 2);
    }
    else if ((__this->_used + 1) == ::uPtr< ::uArray*>(__this->_data)->Length())
    {
        ::uArray* newData = ::uNewArray(::app::Uno::Int__typeof(), ::uPtr< ::uArray*>(__this->_data)->Length() * 2);

        for (int i = 0; i < __this->_used; i++)
        {
            newData->Item< int>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< int>(i);
        }

        __this->_data = newData;
    }
}

void List__int__Add(List__int* __this, int item)
{
    __this->EnsureCapacity();
    ::uPtr< ::uArray*>(__this->_data)->Item< int>(__this->_used++) = item;
    __this->_version++;
}

void List__int__Clear(List__int* __this)
{
    __this->_data = NULL;
    __this->_used = 0;
    __this->_version++;
}

void List__int___ObjInit(List__int* __this)
{
    __this->_data = NULL;
    __this->_used = 0;
}

List__int* List__int__New_1(::uStatic* __this)
{
    List__int* inst = (::app::Uno::Collections::List__int*)::uAllocObject(sizeof(::app::Uno::Collections::List__int), ::app::Uno::Collections::List__int__typeof());
    inst->_ObjInit();
    return inst;
}

void List__int___ObjInit_1(List__int* __this, int capacity)
{
    __this->_data = ::uNewArray(::app::Uno::Int__typeof(), capacity);
    __this->_used = 0;
}

List__int* List__int__New_2(::uStatic* __this, int capacity)
{
    List__int* inst = (::app::Uno::Collections::List__int*)::uAllocObject(sizeof(::app::Uno::Collections::List__int), ::app::Uno::Collections::List__int__typeof());
    inst->_ObjInit_1(capacity);
    return inst;
}

}}}
