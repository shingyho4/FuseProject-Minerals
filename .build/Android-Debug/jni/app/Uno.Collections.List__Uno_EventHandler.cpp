// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Collections.List__Uno_EventHandler.h>
#include <app/Uno.EventHandler.h>
#include <app/Uno.Generic.h>
#include <app/Uno.IndexOutOfRangeException.h>

namespace app {
namespace Uno {
namespace Collections {

List__Uno_EventHandler__uType* List__Uno_EventHandler__typeof()
{
    static List__Uno_EventHandler__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (List__Uno_EventHandler__uType*)::uAllocClassType(sizeof(List__Uno_EventHandler__uType), "Uno.Collections.List<Uno.EventHandler>", ::uObject__typeof(), 0, 1);
        type->StrongRefOffsets[0] = offsetof(List__Uno_EventHandler, _data);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_data";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

int List__Uno_EventHandler__get_Count(List__Uno_EventHandler* __this)
{
    return __this->_used;
}

::uArray* List__Uno_EventHandler__ToArray(List__Uno_EventHandler* __this)
{
    ::uArray* t = ::uNewArray(::app::Uno::EventHandler__typeof(), __this->_used);

    for (int i = 0; i < __this->_used; i++)
    {
        t->ItemStrong< ::uDelegate*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::uDelegate*>(i);
    }

    return t;
}

void List__Uno_EventHandler__BoundsCheck(List__Uno_EventHandler* __this, int index)
{
    if ((index < 0) || (index >= __this->Count()))
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }
}

void List__Uno_EventHandler__EnsureCapacity(List__Uno_EventHandler* __this)
{
    if (__this->_data == NULL)
    {
        __this->_data = ::uNewArray(::app::Uno::EventHandler__typeof(), 2);
    }
    else if ((__this->_used + 1) == ::uPtr< ::uArray*>(__this->_data)->Length())
    {
        ::uArray* newData = ::uNewArray(::app::Uno::EventHandler__typeof(), ::uPtr< ::uArray*>(__this->_data)->Length() * 2);

        for (int i = 0; i < __this->_used; i++)
        {
            newData->ItemStrong< ::uDelegate*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::uDelegate*>(i);
        }

        __this->_data = newData;
    }
}

void List__Uno_EventHandler__Add(List__Uno_EventHandler* __this, ::uDelegate* item)
{
    __this->EnsureCapacity();
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::uDelegate*>(__this->_used++) = item;
    __this->_version++;
}

bool List__Uno_EventHandler__Remove(List__Uno_EventHandler* __this, ::uDelegate* item)
{
    for (int i = 0; i < __this->_used; i++)
    {
        if (::app::Uno::Generic__Equals__Uno_EventHandler(NULL, ::uPtr< ::uArray*>(__this->_data)->Item< ::uDelegate*>(i), item))
        {
            __this->RemoveAt(i);
            return true;
        }
    }

    return false;
}

void List__Uno_EventHandler__RemoveAt(List__Uno_EventHandler* __this, int index)
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

void List__Uno_EventHandler___ObjInit(List__Uno_EventHandler* __this)
{
    __this->_data = NULL;
    __this->_used = 0;
}

List__Uno_EventHandler* List__Uno_EventHandler__New_1(::uStatic* __this)
{
    List__Uno_EventHandler* inst = (::app::Uno::Collections::List__Uno_EventHandler*)::uAllocObject(sizeof(::app::Uno::Collections::List__Uno_EventHandler), ::app::Uno::Collections::List__Uno_EventHandler__typeof());
    inst->_ObjInit();
    return inst;
}

}}}
