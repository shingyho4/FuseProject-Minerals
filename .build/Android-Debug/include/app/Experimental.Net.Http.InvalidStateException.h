// This file was generated based on 'C:\ProgramData\Uno\Packages\Experimental.Net.Http\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_EXPERIMENTAL_NET_HTTP_INVALID_STATE_EXCEPTION_H__
#define __APP_EXPERIMENTAL_NET_HTTP_INVALID_STATE_EXCEPTION_H__

#include <app/Uno.Exception.h>
#include <Uno/Uno.h>

namespace app {
namespace Experimental {
namespace Net {
namespace Http {

struct InvalidStateException;

struct InvalidStateException__uType : ::app::Uno::Exception__uType
{
};

InvalidStateException__uType* InvalidStateException__typeof();

void InvalidStateException___ObjInit_2(InvalidStateException* __this);
InvalidStateException* InvalidStateException__New_3(::uStatic* __this);
void InvalidStateException___ObjInit_3(InvalidStateException* __this, ::uString* message);
InvalidStateException* InvalidStateException__New_4(::uStatic* __this, ::uString* message);

struct InvalidStateException : ::app::Uno::Exception
{
    void _ObjInit_2() { InvalidStateException___ObjInit_2(this); }
    void _ObjInit_3(::uString* message) { InvalidStateException___ObjInit_3(this, message); }
};

}}}}


#endif
