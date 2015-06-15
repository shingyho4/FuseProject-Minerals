// This file was generated based on 'C:\ProgramData\Uno\Packages\Experimental.Net.Http\0.1.0\Implementation\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_EXPERIMENTAL_NET_HTTP_IMPLEMENTATION_HTTP_REQUEST_IMPL_H__
#define __APP_EXPERIMENTAL_NET_HTTP_IMPLEMENTATION_HTTP_REQUEST_IMPL_H__

#include <Uno/Uno.h>

namespace app {
namespace Experimental {
namespace Net {
namespace Http {
namespace Implementation {

struct HttpRequestImpl__uType : ::uClassType
{
};

HttpRequestImpl__uType* HttpRequestImpl__typeof();

void HttpRequestImpl__Dispose(::uStatic* __this, void* __handle);
void HttpRequestImpl__SetHeader(::uStatic* __this, void* __handle, ::uString* __name, ::uString* __value);
void HttpRequestImpl__SetResponseType(::uStatic* __this, void* __handle, int __responseType);
int HttpRequestImpl__GetState(::uStatic* __this, void* __handle);
void HttpRequestImpl__SendAsync_2(::uStatic* __this, void* __handle);
int HttpRequestImpl__GetResponseStatus(::uStatic* __this, void* __handle);
::uString* HttpRequestImpl__GetResponseHeaders(::uStatic* __this, void* __handle);
::uArray* HttpRequestImpl__GetResponseContentByteArray(::uStatic* __this, void* __handle);

}}}}}


#endif
