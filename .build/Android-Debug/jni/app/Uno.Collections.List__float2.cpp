// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Bool.h>
#include <app/Uno.Collections.IEnumerator__float2.h>
#include <app/Uno.Collections.List__float2.h>
#include <app/Uno.IndexOutOfRangeException.h>

namespace app {
namespace Uno {
namespace Collections {

List__float2__uType* List__float2__typeof()
{
    static List__float2__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (List__float2__uType*)::uAllocClassType(sizeof(List__float2__uType), "Uno.Collections.List<float2>", ::uObject__typeof(), 1, 1);
        type->__interface_0.__fp_GetEnumerator = (::uObject*(*)(void*))List__float2__GetEnumerator_boxed;

        type->Implements[0] = ::app::Uno::Collections::IEnumerable__float2__typeof();

        type->InterfaceOffsets[0] = offsetof(List__float2__uType, __interface_0);

        type->StrongRefOffsets[0] = offsetof(List__float2, _data);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_data";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

int List__float2__get_Count(List__float2* __this)
{
    return __this->_used;
}

::app::Uno::Float2 List__float2__get_Item(List__float2* __this, int index)
{
    __this->BoundsCheck(index);
    return ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Uno::Float2>(index);
}

void List__float2__set_Item(List__float2* __this, int index, ::app::Uno::Float2 value)
{
    __this->BoundsCheck(index);
    ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Uno::Float2>(index) = value;
    __this->_version++;
}

::app::Uno::Collections::List1_Enumerator__float2 List__float2__GetEnumerator(List__float2* __this)
{
    return ::app::Uno::Collections::List1_Enumerator__float2__New_1(NULL, __this);
}

void List__float2__BoundsCheck(List__float2* __this, int index)
{
    if ((index < 0) || (index >= __this->Count()))
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }
}

void List__float2__EnsureCapacity(List__float2* __this)
{
    if (__this->_data == NULL)
    {
        __this->_data = ::uNewArray(::app::Uno::Float2__typeof(), 2);
    }
    else if ((__this->_used + 1) == ::uPtr< ::uArray*>(__this->_data)->Length())
    {
        ::uArray* newData = ::uNewArray(::app::Uno::Float2__typeof(), ::uPtr< ::uArray*>(__this->_data)->Length() * 2);

        for (int i = 0; i < __this->_used; i++)
        {
            newData->Item< ::app::Uno::Float2>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Uno::Float2>(i);
        }

        __this->_data = newData;
    }
}

void List__float2__Add(List__float2* __this, ::app::Uno::Float2 item)
{
    __this->EnsureCapacity();
    ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Uno::Float2>(__this->_used++) = item;
    __this->_version++;
}

void List__float2___ObjInit(List__float2* __this)
{
    __this->_data = NULL;
    __this->_used = 0;
}

List__float2* List__float2__New_1(::uStatic* __this)
{
    List__float2* inst = (::app::Uno::Collections::List__float2*)::uAllocObject(sizeof(::app::Uno::Collections::List__float2), ::app::Uno::Collections::List__float2__typeof());
    inst->_ObjInit();
    return inst;
}

::uObject* List__float2__GetEnumerator_boxed(List__float2* __this)
{
    return ::uBox(::app::Uno::Collections::List1_Enumerator__float2__typeof(), __this->GetEnumerator());
}

}}}
