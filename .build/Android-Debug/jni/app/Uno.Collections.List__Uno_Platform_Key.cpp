// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Bool.h>
#include <app/Uno.Collections.List__Uno_Platform_Key.h>
#include <app/Uno.IndexOutOfRangeException.h>

namespace app {
namespace Uno {
namespace Collections {

List__Uno_Platform_Key__uType* List__Uno_Platform_Key__typeof()
{
    static List__Uno_Platform_Key__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (List__Uno_Platform_Key__uType*)::uAllocClassType(sizeof(List__Uno_Platform_Key__uType), "Uno.Collections.List<Uno.Platform.Key>", ::uObject__typeof(), 0, 1);
        type->StrongRefOffsets[0] = offsetof(List__Uno_Platform_Key, _data);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_data";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

int List__Uno_Platform_Key__get_Count(List__Uno_Platform_Key* __this)
{
    return __this->_used;
}

int List__Uno_Platform_Key__get_Item(List__Uno_Platform_Key* __this, int index)
{
    __this->BoundsCheck(index);
    return ::uPtr< ::uArray*>(__this->_data)->Item< int>(index);
}

void List__Uno_Platform_Key__set_Item(List__Uno_Platform_Key* __this, int index, int value)
{
    __this->BoundsCheck(index);
    ::uPtr< ::uArray*>(__this->_data)->Item< int>(index) = value;
    __this->_version++;
}

void List__Uno_Platform_Key__BoundsCheck(List__Uno_Platform_Key* __this, int index)
{
    if ((index < 0) || (index >= __this->Count()))
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }
}

void List__Uno_Platform_Key__EnsureCapacity(List__Uno_Platform_Key* __this)
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

void List__Uno_Platform_Key__Add(List__Uno_Platform_Key* __this, int item)
{
    __this->EnsureCapacity();
    ::uPtr< ::uArray*>(__this->_data)->Item< int>(__this->_used++) = item;
    __this->_version++;
}

void List__Uno_Platform_Key__RemoveAt(List__Uno_Platform_Key* __this, int index)
{
    __this->BoundsCheck(index);

    for (int i = index; i < (__this->_used - 1); i++)
    {
        ::uPtr< ::uArray*>(__this->_data)->Item< int>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< int>(i + 1);
    }

    __this->_used = __this->_used - 1;
    ::uPtr< ::uArray*>(__this->_data)->Item< int>(__this->_used) = 0;
    __this->_version++;
}

void List__Uno_Platform_Key___ObjInit(List__Uno_Platform_Key* __this)
{
    __this->_data = NULL;
    __this->_used = 0;
}

List__Uno_Platform_Key* List__Uno_Platform_Key__New_1(::uStatic* __this)
{
    List__Uno_Platform_Key* inst = (::app::Uno::Collections::List__Uno_Platform_Key*)::uAllocObject(sizeof(::app::Uno::Collections::List__Uno_Platform_Key), ::app::Uno::Collections::List__Uno_Platform_Key__typeof());
    inst->_ObjInit();
    return inst;
}

}}}
