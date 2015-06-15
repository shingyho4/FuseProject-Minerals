// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_CHAR_PUNCTUATION_CHECKER_PUNCTUATION_RANGE_H__
#define __APP_UNO_CHAR_PUNCTUATION_CHECKER_PUNCTUATION_RANGE_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>

namespace app {
namespace Uno {

struct CharPunctuationChecker_PunctuationRange;

struct CharPunctuationChecker_PunctuationRange__uType : ::uClassType
{
};

CharPunctuationChecker_PunctuationRange__uType* CharPunctuationChecker_PunctuationRange__typeof();

::uChar CharPunctuationChecker_PunctuationRange__get_Start(CharPunctuationChecker_PunctuationRange* __this);
void CharPunctuationChecker_PunctuationRange__set_Start(CharPunctuationChecker_PunctuationRange* __this, ::uChar value);
::uChar CharPunctuationChecker_PunctuationRange__get_End(CharPunctuationChecker_PunctuationRange* __this);
void CharPunctuationChecker_PunctuationRange__set_End(CharPunctuationChecker_PunctuationRange* __this, ::uChar value);
void CharPunctuationChecker_PunctuationRange___ObjInit(CharPunctuationChecker_PunctuationRange* __this, ::uChar start, ::uChar end);
CharPunctuationChecker_PunctuationRange* CharPunctuationChecker_PunctuationRange__New_1(::uStatic* __this, ::uChar start, ::uChar end);

struct CharPunctuationChecker_PunctuationRange : ::uObject
{
    ::uChar _Start;
    ::uChar _End;

    void _ObjInit(::uChar start, ::uChar end) { CharPunctuationChecker_PunctuationRange___ObjInit(this, start, end); }
    ::uChar Start() { return CharPunctuationChecker_PunctuationRange__get_Start(this); }
    void Start(::uChar value) { CharPunctuationChecker_PunctuationRange__set_Start(this, value); }
    ::uChar End() { return CharPunctuationChecker_PunctuationRange__get_End(this); }
    void End(::uChar value) { CharPunctuationChecker_PunctuationRange__set_End(this, value); }
};

}}

#include <app/Uno.Char.h>

namespace app {
namespace Uno {

}}


#endif
