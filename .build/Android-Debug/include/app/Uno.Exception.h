// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Exceptions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_EXCEPTION_H__
#define __APP_UNO_EXCEPTION_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>

namespace app {
namespace Uno {

struct Exception;

struct Exception__uType : ::uClassType
{
};

Exception__uType* Exception__typeof();

::uString* Exception__get_Message(Exception* __this);
::uString* Exception__ToString(Exception* __this);
void Exception___ObjInit(Exception* __this, ::uString* message);
Exception* Exception__New_1(::uStatic* __this, ::uString* message);
void Exception___ObjInit_1(Exception* __this);
Exception* Exception__New_2(::uStatic* __this);

struct Exception : ::uObject
{
    ::uStrong< ::uString*> _message;

    void _ObjInit(::uString* message) { Exception___ObjInit(this, message); }
    void _ObjInit_1() { Exception___ObjInit_1(this); }
    ::uString* Message() { return Exception__get_Message(this); }
};

}}


#endif
