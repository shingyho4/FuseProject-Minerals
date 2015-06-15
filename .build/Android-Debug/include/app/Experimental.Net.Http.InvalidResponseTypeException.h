// This file was generated based on 'C:\ProgramData\Uno\Packages\Experimental.Net.Http\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_EXPERIMENTAL_NET_HTTP_INVALID_RESPONSE_TYPE_EXCEPTION_H__
#define __APP_EXPERIMENTAL_NET_HTTP_INVALID_RESPONSE_TYPE_EXCEPTION_H__

#include <app/Uno.Exception.h>
#include <Uno/Uno.h>

namespace app {
namespace Experimental {
namespace Net {
namespace Http {

struct InvalidResponseTypeException;

struct InvalidResponseTypeException__uType : ::app::Uno::Exception__uType
{
};

InvalidResponseTypeException__uType* InvalidResponseTypeException__typeof();

void InvalidResponseTypeException___ObjInit_2(InvalidResponseTypeException* __this);
InvalidResponseTypeException* InvalidResponseTypeException__New_3(::uStatic* __this);

struct InvalidResponseTypeException : ::app::Uno::Exception
{
    void _ObjInit_2() { InvalidResponseTypeException___ObjInit_2(this); }
};

}}}}


#endif
