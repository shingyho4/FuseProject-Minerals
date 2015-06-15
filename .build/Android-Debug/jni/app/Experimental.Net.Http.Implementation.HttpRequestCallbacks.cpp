// This file was generated based on 'C:\ProgramData\Uno\Packages\Experimental.Net.Http\0.1.0\Implementation\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Experimental.Net.Http.Implementation.HttpRequestCallbacks.h>
#include <app/Experimental.Net.Http.Implementation.HttpRequestEventArgs.h>
#include <app/Experimental.Net.Http.Implementation.HttpRequestHandle.h>
#include <app/Uno.Action__Experimental_Net_Http_Implementation_HttpRequestEve-8f8aec91.h>
#include <app/Uno.Action__Experimental_Net_Http_Implementation_HttpRequestEve-e5f93632.h>
#include <app/Uno.Action__Experimental_Net_Http_Implementation_HttpRequestEventArgs.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Delegate.h>
#include <app/Uno.Int.h>
#include <app/Uno.String.h>

namespace app {
namespace Experimental {
namespace Net {
namespace Http {
namespace Implementation {

::uStaticStrong< ::uDelegate*> HttpRequestCallbacks__Aborted;
::uStaticStrong< ::uDelegate*> HttpRequestCallbacks__Error;
::uStaticStrong< ::uDelegate*> HttpRequestCallbacks__Timeout;
::uStaticStrong< ::uDelegate*> HttpRequestCallbacks__Done;
::uStaticStrong< ::uDelegate*> HttpRequestCallbacks__StateChanged;
::uStaticStrong< ::uDelegate*> HttpRequestCallbacks__Progress;

HttpRequestCallbacks__uType* HttpRequestCallbacks__typeof()
{
    static HttpRequestCallbacks__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (HttpRequestCallbacks__uType*)::uAllocClassType(sizeof(HttpRequestCallbacks__uType), "Experimental.Net.Http.Implementation.HttpRequestCallbacks");
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void HttpRequestCallbacks__OnAborted(::uStatic* __this, void* handle)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)HttpRequestCallbacks__Aborted, NULL))
    {
        ::uPtr< ::uDelegate*>(HttpRequestCallbacks__Aborted)->InvokeVoid< ::app::Experimental::Net::Http::Implementation::HttpRequestEventArgs>(::app::Experimental::Net::Http::Implementation::HttpRequestEventArgs__New_1(NULL, handle));
    }
}

void HttpRequestCallbacks__OnError(::uStatic* __this, void* handle, ::uString* platformspesificErrorMessage)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)HttpRequestCallbacks__Error, NULL))
    {
        ::uPtr< ::uDelegate*>(HttpRequestCallbacks__Error)->InvokeVoid< ::app::Experimental::Net::Http::Implementation::HttpRequestEventArgs, ::uString*>(::app::Experimental::Net::Http::Implementation::HttpRequestEventArgs__New_1(NULL, handle), platformspesificErrorMessage);
    }
}

void HttpRequestCallbacks__OnTimeout(::uStatic* __this, void* handle)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)HttpRequestCallbacks__Timeout, NULL))
    {
        ::uPtr< ::uDelegate*>(HttpRequestCallbacks__Timeout)->InvokeVoid< ::app::Experimental::Net::Http::Implementation::HttpRequestEventArgs>(::app::Experimental::Net::Http::Implementation::HttpRequestEventArgs__New_1(NULL, handle));
    }
}

void HttpRequestCallbacks__OnDone(::uStatic* __this, void* handle)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)HttpRequestCallbacks__Done, NULL))
    {
        ::uPtr< ::uDelegate*>(HttpRequestCallbacks__Done)->InvokeVoid< ::app::Experimental::Net::Http::Implementation::HttpRequestEventArgs>(::app::Experimental::Net::Http::Implementation::HttpRequestEventArgs__New_1(NULL, handle));
    }
}

void HttpRequestCallbacks__OnStateChanged(::uStatic* __this, void* handle)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)HttpRequestCallbacks__StateChanged, NULL))
    {
        ::uPtr< ::uDelegate*>(HttpRequestCallbacks__StateChanged)->InvokeVoid< ::app::Experimental::Net::Http::Implementation::HttpRequestEventArgs>(::app::Experimental::Net::Http::Implementation::HttpRequestEventArgs__New_1(NULL, handle));
    }
}

void HttpRequestCallbacks__OnProgress(::uStatic* __this, void* handle, int current, int total, bool hasTotal)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)HttpRequestCallbacks__Progress, NULL))
    {
        ::uPtr< ::uDelegate*>(HttpRequestCallbacks__Progress)->InvokeVoid< ::app::Experimental::Net::Http::Implementation::HttpRequestEventArgs, int, int, bool>(::app::Experimental::Net::Http::Implementation::HttpRequestEventArgs__New_1(NULL, handle), current, total, hasTotal);
    }
}

void HttpRequestCallbacks__ClearState(::uStatic* __this)
{
}

void HttpRequestCallbacks__add_Aborted(::uStatic* __this, ::uDelegate* value)
{
    HttpRequestCallbacks__Aborted = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)HttpRequestCallbacks__Aborted, (::uDelegate*)value), ::app::Uno::Action__Experimental_Net_Http_Implementation_HttpRequestEventArgs__typeof());
}

void HttpRequestCallbacks__remove_Aborted(::uStatic* __this, ::uDelegate* value)
{
    HttpRequestCallbacks__Aborted = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)HttpRequestCallbacks__Aborted, (::uDelegate*)value), ::app::Uno::Action__Experimental_Net_Http_Implementation_HttpRequestEventArgs__typeof());
}

void HttpRequestCallbacks__add_Error(::uStatic* __this, ::uDelegate* value)
{
    HttpRequestCallbacks__Error = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)HttpRequestCallbacks__Error, (::uDelegate*)value), ::app::Uno::Action__Experimental_Net_Http_Implementation_HttpRequestEventArgs__string__typeof());
}

void HttpRequestCallbacks__remove_Error(::uStatic* __this, ::uDelegate* value)
{
    HttpRequestCallbacks__Error = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)HttpRequestCallbacks__Error, (::uDelegate*)value), ::app::Uno::Action__Experimental_Net_Http_Implementation_HttpRequestEventArgs__string__typeof());
}

void HttpRequestCallbacks__add_Timeout(::uStatic* __this, ::uDelegate* value)
{
    HttpRequestCallbacks__Timeout = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)HttpRequestCallbacks__Timeout, (::uDelegate*)value), ::app::Uno::Action__Experimental_Net_Http_Implementation_HttpRequestEventArgs__typeof());
}

void HttpRequestCallbacks__remove_Timeout(::uStatic* __this, ::uDelegate* value)
{
    HttpRequestCallbacks__Timeout = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)HttpRequestCallbacks__Timeout, (::uDelegate*)value), ::app::Uno::Action__Experimental_Net_Http_Implementation_HttpRequestEventArgs__typeof());
}

void HttpRequestCallbacks__add_Done(::uStatic* __this, ::uDelegate* value)
{
    HttpRequestCallbacks__Done = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)HttpRequestCallbacks__Done, (::uDelegate*)value), ::app::Uno::Action__Experimental_Net_Http_Implementation_HttpRequestEventArgs__typeof());
}

void HttpRequestCallbacks__remove_Done(::uStatic* __this, ::uDelegate* value)
{
    HttpRequestCallbacks__Done = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)HttpRequestCallbacks__Done, (::uDelegate*)value), ::app::Uno::Action__Experimental_Net_Http_Implementation_HttpRequestEventArgs__typeof());
}

void HttpRequestCallbacks__add_StateChanged(::uStatic* __this, ::uDelegate* value)
{
    HttpRequestCallbacks__StateChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)HttpRequestCallbacks__StateChanged, (::uDelegate*)value), ::app::Uno::Action__Experimental_Net_Http_Implementation_HttpRequestEventArgs__typeof());
}

void HttpRequestCallbacks__remove_StateChanged(::uStatic* __this, ::uDelegate* value)
{
    HttpRequestCallbacks__StateChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)HttpRequestCallbacks__StateChanged, (::uDelegate*)value), ::app::Uno::Action__Experimental_Net_Http_Implementation_HttpRequestEventArgs__typeof());
}

void HttpRequestCallbacks__add_Progress(::uStatic* __this, ::uDelegate* value)
{
    HttpRequestCallbacks__Progress = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)HttpRequestCallbacks__Progress, (::uDelegate*)value), ::app::Uno::Action__Experimental_Net_Http_Implementation_HttpRequestEventArgs__int__int__bool__typeof());
}

void HttpRequestCallbacks__remove_Progress(::uStatic* __this, ::uDelegate* value)
{
    HttpRequestCallbacks__Progress = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)HttpRequestCallbacks__Progress, (::uDelegate*)value), ::app::Uno::Action__Experimental_Net_Http_Implementation_HttpRequestEventArgs__int__int__bool__typeof());
}

}}}}}
