// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Action.h>
#include <app/Uno.Collections.List__Uno_Action.h>
#include <app/Uno.Generic.h>
#include <app/Uno.IndexOutOfRangeException.h>

namespace app {
namespace Uno {
namespace Collections {

List__Uno_Action__uType* List__Uno_Action__typeof()
{
    static List__Uno_Action__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (List__Uno_Action__uType*)::uAllocClassType(sizeof(List__Uno_Action__uType), "Uno.Collections.List<Uno.Action>", ::uObject__typeof(), 0, 1);
        type->StrongRefOffsets[0] = offsetof(List__Uno_Action, _data);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_data";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

int List__Uno_Action__get_Count(List__Uno_Action* __this)
{
    return __this->_used;
}

::app::Uno::Collections::List1_Enumerator__Uno_Action List__Uno_Action__GetEnumerator(List__Uno_Action* __this)
{
    return ::app::Uno::Collections::List1_Enumerator__Uno_Action__New_1(NULL, __this);
}

void List__Uno_Action__BoundsCheck(List__Uno_Action* __this, int index)
{
    if ((index < 0) || (index >= __this->Count()))
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }
}

void List__Uno_Action__EnsureCapacity(List__Uno_Action* __this)
{
    if (__this->_data == NULL)
    {
        __this->_data = ::uNewArray(::app::Uno::Action__typeof(), 2);
    }
    else if ((__this->_used + 1) == ::uPtr< ::uArray*>(__this->_data)->Length())
    {
        ::uArray* newData = ::uNewArray(::app::Uno::Action__typeof(), ::uPtr< ::uArray*>(__this->_data)->Length() * 2);

        for (int i = 0; i < __this->_used; i++)
        {
            newData->ItemStrong< ::uDelegate*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::uDelegate*>(i);
        }

        __this->_data = newData;
    }
}

void List__Uno_Action__Add(List__Uno_Action* __this, ::uDelegate* item)
{
    __this->EnsureCapacity();
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::uDelegate*>(__this->_used++) = item;
    __this->_version++;
}

bool List__Uno_Action__Remove(List__Uno_Action* __this, ::uDelegate* item)
{
    for (int i = 0; i < __this->_used; i++)
    {
        if (::app::Uno::Generic__Equals__Uno_Action(NULL, ::uPtr< ::uArray*>(__this->_data)->Item< ::uDelegate*>(i), item))
        {
            __this->RemoveAt(i);
            return true;
        }
    }

    return false;
}

void List__Uno_Action__RemoveAt(List__Uno_Action* __this, int index)
{
    __this->BoundsCheck(index);

    for (int i = index; i < (__this->_used - 1); i++)
    {
        ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::uDelegate*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::uDelegate*>(i + 1);
    }

    __this->_used = __this->_used - 1;
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::uDelegate*>(__this->_used) = NULL;
    __this->_version++;
}

void List__Uno_Action___ObjInit(List__Uno_Action* __this)
{
    __this->_data = NULL;
    __this->_used = 0;
}

List__Uno_Action* List__Uno_Action__New_1(::uStatic* __this)
{
    List__Uno_Action* inst = (::app::Uno::Collections::List__Uno_Action*)::uAllocObject(sizeof(::app::Uno::Collections::List__Uno_Action), ::app::Uno::Collections::List__Uno_Action__typeof());
    inst->_ObjInit();
    return inst;
}

}}}
