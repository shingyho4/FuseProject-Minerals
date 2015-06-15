// This file was generated based on 'C:\ProgramData\Uno\Packages\Experimental.Net.Http\0.1.0\Implementation\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Experimental.Net.Http.Implementation.HttpRequestHandle.h>
#include <app/Experimental.Net.Http.Implementation.HttpRequestImpl.h>
#include <app/Uno.Byte.h>
#include <app/Uno.Int.h>
#include <app/Uno.String.h>
#include <Uno/XliInterop.h>
#include <XliHttpClient.h>

namespace app {
namespace Experimental {
namespace Net {
namespace Http {
namespace Implementation {

HttpRequestImpl__uType* HttpRequestImpl__typeof()
{
    static HttpRequestImpl__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (HttpRequestImpl__uType*)::uAllocClassType(sizeof(HttpRequestImpl__uType), "Experimental.Net.Http.Implementation.HttpRequestImpl");
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void HttpRequestImpl__Dispose(::uStatic* __this, void* __handle)
{
    ((Xli::HttpRequest*)__handle)->Release();
}

void HttpRequestImpl__SetHeader(::uStatic* __this, void* __handle, ::uString* __name, ::uString* __value)
{
    ((Xli::HttpRequest*)__handle)->SetHeader(::uStringToXliString(__name), ::uStringToXliString(__value));
}

void HttpRequestImpl__SetResponseType(::uStatic* __this, void* __handle, int __responseType)
{
}

int HttpRequestImpl__GetState(::uStatic* __this, void* __handle)
{
    return ((Xli::HttpRequest*)__handle)->GetState();
}

void HttpRequestImpl__SendAsync_2(::uStatic* __this, void* __handle)
{
    ((Xli::HttpRequest*)__handle)->SendAsync();
}

int HttpRequestImpl__GetResponseStatus(::uStatic* __this, void* __handle)
{
    return ((Xli::HttpRequest*)__handle)->GetResponseStatus();
}

::uString* HttpRequestImpl__GetResponseHeaders(::uStatic* __this, void* __handle)
{
    Xli::HttpRequest* req = (Xli::HttpRequest*)__handle;
    Xli::String result = "";
    bool first = true;
    for (int it = req->ResponseHeadersBegin(); it != req->ResponseHeadersEnd(); it = req->ResponseHeadersNext(it))
    {
        if (!first) result += "\n";
        first = false;                        
        result += req->GetResponseHeaderKey(it);
        result += ":";
        result += req->GetResponseHeaderValue(it);
    }
    
    return ::uStringFromXliString(result);
}

::uArray* HttpRequestImpl__GetResponseContentByteArray(::uStatic* __this, void* __handle)
{
    Xli::DataAccessor* body = ((Xli::HttpRequest*)__handle)->GetResponseBody();
    return ::uNewArray(::app::Uno::Byte__typeof(), (int)body->GetSizeInBytes(), body->GetPtr());
}

}}}}}
