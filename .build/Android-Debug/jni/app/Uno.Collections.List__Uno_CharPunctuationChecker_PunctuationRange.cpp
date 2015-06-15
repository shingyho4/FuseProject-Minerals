// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Bool.h>
#include <app/Uno.CharPunctuationChecker_PunctuationRange.h>
#include <app/Uno.Collections.List__Uno_CharPunctuationChecker_PunctuationRange.h>
#include <app/Uno.Int.h>

namespace app {
namespace Uno {
namespace Collections {

List__Uno_CharPunctuationChecker_PunctuationRange__uType* List__Uno_CharPunctuationChecker_PunctuationRange__typeof()
{
    static List__Uno_CharPunctuationChecker_PunctuationRange__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (List__Uno_CharPunctuationChecker_PunctuationRange__uType*)::uAllocClassType(sizeof(List__Uno_CharPunctuationChecker_PunctuationRange__uType), "Uno.Collections.List<Uno.CharPunctuationChecker_PunctuationRange>", ::uObject__typeof(), 0, 1);
        type->StrongRefOffsets[0] = offsetof(List__Uno_CharPunctuationChecker_PunctuationRange, _data);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_data";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void List__Uno_CharPunctuationChecker_PunctuationRange__EnsureCapacity(List__Uno_CharPunctuationChecker_PunctuationRange* __this)
{
    if (__this->_data == NULL)
    {
        __this->_data = ::uNewArray(::app::Uno::CharPunctuationChecker_PunctuationRange__typeof(), 2);
    }
    else if ((__this->_used + 1) == ::uPtr< ::uArray*>(__this->_data)->Length())
    {
        ::uArray* newData = ::uNewArray(::app::Uno::CharPunctuationChecker_PunctuationRange__typeof(), ::uPtr< ::uArray*>(__this->_data)->Length() * 2);

        for (int i = 0; i < __this->_used; i++)
        {
            newData->ItemStrong< ::app::Uno::CharPunctuationChecker_PunctuationRange*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Uno::CharPunctuationChecker_PunctuationRange*>(i);
        }

        __this->_data = newData;
    }
}

void List__Uno_CharPunctuationChecker_PunctuationRange__Add(List__Uno_CharPunctuationChecker_PunctuationRange* __this, ::app::Uno::CharPunctuationChecker_PunctuationRange* item)
{
    __this->EnsureCapacity();
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Uno::CharPunctuationChecker_PunctuationRange*>(__this->_used++) = item;
    __this->_version++;
}

void List__Uno_CharPunctuationChecker_PunctuationRange___ObjInit(List__Uno_CharPunctuationChecker_PunctuationRange* __this)
{
    __this->_data = NULL;
    __this->_used = 0;
}

List__Uno_CharPunctuationChecker_PunctuationRange* List__Uno_CharPunctuationChecker_PunctuationRange__New_1(::uStatic* __this)
{
    List__Uno_CharPunctuationChecker_PunctuationRange* inst = (::app::Uno::Collections::List__Uno_CharPunctuationChecker_PunctuationRange*)::uAllocObject(sizeof(::app::Uno::Collections::List__Uno_CharPunctuationChecker_PunctuationRange), ::app::Uno::Collections::List__Uno_CharPunctuationChecker_PunctuationRange__typeof());
    inst->_ObjInit();
    return inst;
}

}}}
