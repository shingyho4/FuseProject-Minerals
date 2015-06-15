// This file was generated based on 'C:\ProgramData\Uno\Packages\Experimental.Http\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Experimental.Cache.ICache.h>
#include <app/Experimental.Http.BinaryLoader.h>
#include <app/Experimental.Http.HttpLoader.h>
#include <app/Uno.Action__Experimental_Http_HttpResponseHeader__Uno_Buffer.h>
#include <app/Uno.Action__string.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Delegate.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Int.h>
#include <app/Uno.String.h>

namespace app {
namespace Experimental {
namespace Http {

::uStaticStrong< ::uObject*> HttpLoader___cache;
int HttpLoader___maxAge;

HttpLoader__uType* HttpLoader__typeof()
{
    static HttpLoader__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (HttpLoader__uType*)::uAllocClassType(sizeof(HttpLoader__uType), "Experimental.Http.HttpLoader");
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

int HttpLoader__get_CacheMaxAge(::uStatic* __this)
{
    return HttpLoader___maxAge;
}

void HttpLoader__set_CacheMaxAge(::uStatic* __this, int value)
{
    HttpLoader___maxAge = value;
}

void HttpLoader__Discard(::uStatic* __this, ::uString* requestUri)
{
    if (HttpLoader___cache != NULL)
    {
        ::app::Experimental::Cache::ICache::DeleteRecord(::uPtr< ::uObject*>(HttpLoader___cache), ::app::Experimental::Http::BinaryLoader__ConstructRecordId(NULL, ::uGetConstString("GET"), requestUri));
    }
}

void HttpLoader__LoadBinary(::uStatic* __this, ::uString* requestUri, ::uDelegate* callback, ::uDelegate* error)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)callback, NULL))
    {
        U_THROW(::app::Uno::Exception__New_1(NULL, ::uGetConstString("LoadBinary requires callback action")));
    }

    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)error, NULL))
    {
        U_THROW(::app::Uno::Exception__New_1(NULL, ::uGetConstString("LoadBinary requires error action")));
    }

    ::app::Experimental::Http::BinaryLoader* bl = ::app::Experimental::Http::BinaryLoader__New_1(NULL);
    ::uPtr< ::app::Experimental::Http::BinaryLoader*>(bl)->Uri = requestUri;
    bl->Method = ::uGetConstString("GET");
    bl->Callback = callback;
    bl->ErrorCallback = error;
    bl->Cache = HttpLoader___cache;
    bl->Initiate();
}

void HttpLoader___TypeInit(::uStatic* __this)
{
    HttpLoader___maxAge = 86400;
}

}}}
