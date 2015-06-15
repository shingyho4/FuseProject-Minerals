// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_STRING_H__
#define __APP_UNO_STRING_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>

namespace app {
namespace Uno {

extern ::uStaticStrong< ::uString*> String__Empty;

struct String__uType : ::uClassType
{
};

String__uType* String__typeof();

int String__GetHashCode(::uString* __this);
::uString* String__ToString(::uString* __this);
::uString* String__ToLower(::uString* __this);
::uString* String__ToUpper(::uString* __this);
bool String__Equals(::uString* __this, ::uObject* __other);
bool String__Equals_3(::uStatic* __this, ::uString* left, ::uString* right);
::uString* String__Concat(::uStatic* __this, ::uString* a, ::uString* b);
::uString* String__Concat_1(::uStatic* __this, ::uObject* a, ::uObject* b);
::uString* String__Substring(::uString* __this, int start, int len);
::uString* String__Substring_1(::uString* __this, int start);
int String__IndexOf(::uString* __this, ::uChar c, int startIndex);
::uArray* String__ToCharArray(::uString* __this, int start, int length);
::uArray* String__ToCharArray_1(::uString* __this);
::uArray* String__Split(::uString* __this, ::uArray* splitChars);
::uString* String__Join(::uStatic* __this, ::uString* separator, ::uArray* value);
bool String__IsNullOrEmpty(::uStatic* __this, ::uString* s);
::uString* String__Trim(::uString* __this);
::uString* String__Trim_1(::uString* __this, ::uArray* trimChars);
int String__IndexOfFirstNotInSet(::uString* __this, ::uArray* charSet);
int String__IndexOfLastNotInSet(::uString* __this, ::uArray* charSet);
bool String__InSet(::uString* __this, ::uChar c, ::uArray* charSet);
int String__IndexOfFirstNotWhiteSpace(::uString* __this);
int String__IndexOfLastNotWhiteSpace(::uString* __this);
::uString* String__Insert(::uString* __this, int pos, ::uString* str);
int String__IndexOf_1(::uString* __this, ::uString* str, int startIndex);
bool String__MatchesAt(::uString* __this, ::uString* str, int pos);
::uString* String__Format(::uStatic* __this, ::uString* str, ::uArray* objs);
void String___TypeInit(::uStatic* __this);
::uString* String__op_Addition(::uStatic* __this, ::uString* a, ::uString* b);
bool String__op_Equality(::uStatic* __this, ::uString* left, ::uString* right);
::uString* String__op_Addition_1(::uStatic* __this, ::uString* a, ::uObject* b);
bool String__op_Inequality(::uStatic* __this, ::uString* left, ::uString* right);
::uString* String__op_Addition_2(::uStatic* __this, ::uObject* a, ::uString* b);

struct String
{
    static ::uString* ToLower(::uString* __this) { return String__ToLower(__this); }
    static ::uString* ToUpper(::uString* __this) { return String__ToUpper(__this); }
    static ::uString* Substring(::uString* __this, int start, int len) { return String__Substring(__this, start, len); }
    static ::uString* Substring_1(::uString* __this, int start) { return String__Substring_1(__this, start); }
    static int IndexOf(::uString* __this, ::uChar c, int startIndex) { return String__IndexOf(__this, c, startIndex); }
    static ::uArray* ToCharArray(::uString* __this, int start, int length) { return String__ToCharArray(__this, start, length); }
    static ::uArray* ToCharArray_1(::uString* __this) { return String__ToCharArray_1(__this); }
    static ::uArray* Split(::uString* __this, ::uArray* splitChars) { return String__Split(__this, splitChars); }
    static ::uString* Trim(::uString* __this) { return String__Trim(__this); }
    static ::uString* Trim_1(::uString* __this, ::uArray* trimChars) { return String__Trim_1(__this, trimChars); }
    static int IndexOfFirstNotInSet(::uString* __this, ::uArray* charSet) { return String__IndexOfFirstNotInSet(__this, charSet); }
    static int IndexOfLastNotInSet(::uString* __this, ::uArray* charSet) { return String__IndexOfLastNotInSet(__this, charSet); }
    static bool InSet(::uString* __this, ::uChar c, ::uArray* charSet) { return String__InSet(__this, c, charSet); }
    static int IndexOfFirstNotWhiteSpace(::uString* __this) { return String__IndexOfFirstNotWhiteSpace(__this); }
    static int IndexOfLastNotWhiteSpace(::uString* __this) { return String__IndexOfLastNotWhiteSpace(__this); }
    static ::uString* Insert(::uString* __this, int pos, ::uString* str) { return String__Insert(__this, pos, str); }
    static int IndexOf_1(::uString* __this, ::uString* str, int startIndex) { return String__IndexOf_1(__this, str, startIndex); }
    static bool MatchesAt(::uString* __this, ::uString* str, int pos) { return String__MatchesAt(__this, str, pos); }
};

}}

#include <app/Uno.Bool.h>
#include <app/Uno.Char.h>
#include <app/Uno.Int.h>

namespace app {
namespace Uno {

}}


#endif
