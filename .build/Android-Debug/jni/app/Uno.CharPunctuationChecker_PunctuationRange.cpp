// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.CharPunctuationChecker_PunctuationRange.h>

namespace app {
namespace Uno {

CharPunctuationChecker_PunctuationRange__uType* CharPunctuationChecker_PunctuationRange__typeof()
{
    static CharPunctuationChecker_PunctuationRange__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (CharPunctuationChecker_PunctuationRange__uType*)::uAllocClassType(sizeof(CharPunctuationChecker_PunctuationRange__uType), "Uno.CharPunctuationChecker.PunctuationRange", ::uObject__typeof());
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::uChar CharPunctuationChecker_PunctuationRange__get_Start(CharPunctuationChecker_PunctuationRange* __this)
{
    return __this->_Start;
}

void CharPunctuationChecker_PunctuationRange__set_Start(CharPunctuationChecker_PunctuationRange* __this, ::uChar value)
{
    __this->_Start = value;
}

::uChar CharPunctuationChecker_PunctuationRange__get_End(CharPunctuationChecker_PunctuationRange* __this)
{
    return __this->_End;
}

void CharPunctuationChecker_PunctuationRange__set_End(CharPunctuationChecker_PunctuationRange* __this, ::uChar value)
{
    __this->_End = value;
}

void CharPunctuationChecker_PunctuationRange___ObjInit(CharPunctuationChecker_PunctuationRange* __this, ::uChar start, ::uChar end)
{
    __this->Start(start);
    __this->End(end);
}

CharPunctuationChecker_PunctuationRange* CharPunctuationChecker_PunctuationRange__New_1(::uStatic* __this, ::uChar start, ::uChar end)
{
    CharPunctuationChecker_PunctuationRange* inst = (::app::Uno::CharPunctuationChecker_PunctuationRange*)::uAllocObject(sizeof(::app::Uno::CharPunctuationChecker_PunctuationRange), ::app::Uno::CharPunctuationChecker_PunctuationRange__typeof());
    inst->_ObjInit(start, end);
    return inst;
}

}}
