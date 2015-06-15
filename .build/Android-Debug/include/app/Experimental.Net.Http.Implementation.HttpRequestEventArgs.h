// This file was generated based on 'C:\ProgramData\Uno\Packages\Experimental.Net.Http\0.1.0\Implementation\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_EXPERIMENTAL_NET_HTTP_IMPLEMENTATION_HTTP_REQUEST_EVENT_ARGS_H__
#define __APP_EXPERIMENTAL_NET_HTTP_IMPLEMENTATION_HTTP_REQUEST_EVENT_ARGS_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>

namespace app {
namespace Experimental {
namespace Net {
namespace Http {
namespace Implementation {

struct HttpRequestEventArgs;

struct HttpRequestEventArgs__uType : ::uValueType
{
};

HttpRequestEventArgs__uType* HttpRequestEventArgs__typeof();

void HttpRequestEventArgs___ObjInit(HttpRequestEventArgs* __this, void* handle);
HttpRequestEventArgs HttpRequestEventArgs__New_1(::uStatic* __this, void* handle);

struct HttpRequestEventArgs
{
    void* Handle;

    void _ObjInit(void* handle) { HttpRequestEventArgs___ObjInit(this, handle); }
};

}}}}}


#endif
