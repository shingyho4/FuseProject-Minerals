// This file was generated based on 'C:\ProgramData\Uno\Packages\Experimental.Net.Http\0.1.0\Implementation\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Experimental.Net.Http.Implementation.HttpClientHandle.h>
#include <app/Experimental.Net.Http.Implementation.HttpClientImpl.h>
#include <app/Experimental.Net.Http.Implementation.HttpRequestHandle.h>
#include <app/Uno.String.h>
#include <Uno/XliHttpEventHandler.h>
#include <Uno/XliInterop.h>
#include <XliHttpClient.h>

namespace app {
namespace Experimental {
namespace Net {
namespace Http {
namespace Implementation {

HttpClientImpl__uType* HttpClientImpl__typeof()
{
    static HttpClientImpl__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (HttpClientImpl__uType*)::uAllocClassType(sizeof(HttpClientImpl__uType), "Experimental.Net.Http.Implementation.HttpClientImpl");
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void* HttpClientImpl__Create(::uStatic* __this)
{
    Xli::HttpClient* r = Xli::HttpClient::Create();
    r->SetEventHandler(new uXliHttpEventHandler()); // FIXME: Mem leak
    return r;
}

void HttpClientImpl__Dispose(::uStatic* __this, void* __handle)
{
    ((Xli::HttpClient*)__handle)->Release();
}

void HttpClientImpl__Update(::uStatic* __this, void* __handle)
{
    ((Xli::HttpClient*)__handle)->Update();
}

void* HttpClientImpl__CreateRequest(::uStatic* __this, void* __handle, ::uString* __method, ::uString* __url)
{
    return ((Xli::HttpClient*)__handle)->CreateRequest(::uStringToXliString(__method), ::uStringToXliString(__url));
}

}}}}}
