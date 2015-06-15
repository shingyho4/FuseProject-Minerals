// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Bool.h>
#include <app/Uno.Collections.List__Uno_Runtime_Implementation_Internal_Forma-a0649357.h>
#include <app/Uno.Int.h>
#include <app/Uno.Runtime.Implementation.Internal.FormatStringToken.h>

namespace app {
namespace Uno {
namespace Collections {

List__Uno_Runtime_Implementation_Internal_FormatStringToken__uType* List__Uno_Runtime_Implementation_Internal_FormatStringToken__typeof()
{
    static List__Uno_Runtime_Implementation_Internal_FormatStringToken__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (List__Uno_Runtime_Implementation_Internal_FormatStringToken__uType*)::uAllocClassType(sizeof(List__Uno_Runtime_Implementation_Internal_FormatStringToken__uType), "Uno.Collections.List<Uno.Runtime.Implementation.Internal.FormatStringToken>", ::uObject__typeof(), 0, 1);
        type->StrongRefOffsets[0] = offsetof(List__Uno_Runtime_Implementation_Internal_FormatStringToken, _data);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_data";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Uno::Collections::List1_Enumerator__Uno_Runtime_Implementation_Internal_FormatStringToken List__Uno_Runtime_Implementation_Internal_FormatStringToken__GetEnumerator(List__Uno_Runtime_Implementation_Internal_FormatStringToken* __this)
{
    return ::app::Uno::Collections::List1_Enumerator__Uno_Runtime_Implementation_Internal_FormatStringToken__New_1(NULL, __this);
}

void List__Uno_Runtime_Implementation_Internal_FormatStringToken__EnsureCapacity(List__Uno_Runtime_Implementation_Internal_FormatStringToken* __this)
{
    if (__this->_data == NULL)
    {
        __this->_data = ::uNewArray(::app::Uno::Runtime::Implementation::Internal::FormatStringToken__typeof(), 2);
    }
    else if ((__this->_used + 1) == ::uPtr< ::uArray*>(__this->_data)->Length())
    {
        ::uArray* newData = ::uNewArray(::app::Uno::Runtime::Implementation::Internal::FormatStringToken__typeof(), ::uPtr< ::uArray*>(__this->_data)->Length() * 2);

        for (int i = 0; i < __this->_used; i++)
        {
            newData->ItemStrong< ::app::Uno::Runtime::Implementation::Internal::FormatStringToken*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Uno::Runtime::Implementation::Internal::FormatStringToken*>(i);
        }

        __this->_data = newData;
    }
}

void List__Uno_Runtime_Implementation_Internal_FormatStringToken__Add(List__Uno_Runtime_Implementation_Internal_FormatStringToken* __this, ::app::Uno::Runtime::Implementation::Internal::FormatStringToken* item)
{
    __this->EnsureCapacity();
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Uno::Runtime::Implementation::Internal::FormatStringToken*>(__this->_used++) = item;
    __this->_version++;
}

void List__Uno_Runtime_Implementation_Internal_FormatStringToken___ObjInit(List__Uno_Runtime_Implementation_Internal_FormatStringToken* __this)
{
    __this->_data = NULL;
    __this->_used = 0;
}

List__Uno_Runtime_Implementation_Internal_FormatStringToken* List__Uno_Runtime_Implementation_Internal_FormatStringToken__New_1(::uStatic* __this)
{
    List__Uno_Runtime_Implementation_Internal_FormatStringToken* inst = (::app::Uno::Collections::List__Uno_Runtime_Implementation_Internal_FormatStringToken*)::uAllocObject(sizeof(::app::Uno::Collections::List__Uno_Runtime_Implementation_Internal_FormatStringToken), ::app::Uno::Collections::List__Uno_Runtime_Implementation_Internal_FormatStringToken__typeof());
    inst->_ObjInit();
    return inst;
}

}}}
