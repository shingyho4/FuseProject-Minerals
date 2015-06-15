// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Bool.h>
#include <app/Uno.Collections.List__char.h>

namespace app {
namespace Uno {
namespace Collections {

List__char__uType* List__char__typeof()
{
    static List__char__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (List__char__uType*)::uAllocClassType(sizeof(List__char__uType), "Uno.Collections.List<char>", ::uObject__typeof(), 0, 1);
        type->StrongRefOffsets[0] = offsetof(List__char, _data);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_data";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::uArray* List__char__ToArray(List__char* __this)
{
    ::uArray* t = ::uNewArray(::app::Uno::Char__typeof(), __this->_used);

    for (int i = 0; i < __this->_used; i++)
    {
        t->Item< ::uChar>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::uChar>(i);
    }

    return t;
}

void List__char__EnsureCapacity(List__char* __this)
{
    if (__this->_data == NULL)
    {
        __this->_data = ::uNewArray(::app::Uno::Char__typeof(), 2);
    }
    else if ((__this->_used + 1) == ::uPtr< ::uArray*>(__this->_data)->Length())
    {
        ::uArray* newData = ::uNewArray(::app::Uno::Char__typeof(), ::uPtr< ::uArray*>(__this->_data)->Length() * 2);

        for (int i = 0; i < __this->_used; i++)
        {
            newData->Item< ::uChar>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::uChar>(i);
        }

        __this->_data = newData;
    }
}

void List__char__Add(List__char* __this, ::uChar item)
{
    __this->EnsureCapacity();
    ::uPtr< ::uArray*>(__this->_data)->Item< ::uChar>(__this->_used++) = item;
    __this->_version++;
}

void List__char___ObjInit_1(List__char* __this, int capacity)
{
    __this->_data = ::uNewArray(::app::Uno::Char__typeof(), capacity);
    __this->_used = 0;
}

List__char* List__char__New_2(::uStatic* __this, int capacity)
{
    List__char* inst = (::app::Uno::Collections::List__char*)::uAllocObject(sizeof(::app::Uno::Collections::List__char), ::app::Uno::Collections::List__char__typeof());
    inst->_ObjInit_1(capacity);
    return inst;
}

}}}
