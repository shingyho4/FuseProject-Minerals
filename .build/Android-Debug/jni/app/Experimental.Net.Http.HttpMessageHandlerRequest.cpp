// This file was generated based on 'C:\ProgramData\Uno\Packages\Experimental.Net.Http\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Experimental.Net.Http.HttpMessageHandlerRequest.h>
#include <app/Experimental.Net.Http.Implementation.HttpClientHandle.h>
#include <app/Experimental.Net.Http.Implementation.HttpClientImpl.h>
#include <app/Experimental.Net.Http.Implementation.HttpRequestHandle.h>
#include <app/Experimental.Net.Http.Implementation.HttpRequestImpl.h>
#include <app/Experimental.Net.Http.InvalidResponseTypeException.h>
#include <app/Experimental.Net.Http.InvalidStateException.h>
#include <app/Experimental.Net.Http.ObjectDisposedException.h>
#include <app/Uno.Action__Experimental_Net_Http_HttpMessageHandlerRequest.h>
#include <app/Uno.Action__Experimental_Net_Http_HttpMessageHandlerRequest__in-ee30d5aa.h>
#include <app/Uno.Action__Experimental_Net_Http_HttpMessageHandlerRequest__string.h>
#include <app/Uno.ArgumentNullException.h>
#include <app/Uno.Byte.h>
#include <app/Uno.Delegate.h>
#include <app/Uno.Exception.h>
#include <app/Uno.NotSupportedException.h>
#include <app/Uno.String.h>

namespace app {
namespace Experimental {
namespace Net {
namespace Http {

HttpMessageHandlerRequest__uType* HttpMessageHandlerRequest__typeof()
{
    static HttpMessageHandlerRequest__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (HttpMessageHandlerRequest__uType*)::uAllocClassType(sizeof(HttpMessageHandlerRequest__uType), "Experimental.Net.Http.HttpMessageHandlerRequest", ::uObject__typeof(), 1, 9);
        type->__interface_0.__fp_Dispose = (void(*)(void*))HttpMessageHandlerRequest__Dispose;

        type->Implements[0] = ::app::Uno::IDisposable__typeof();

        type->InterfaceOffsets[0] = offsetof(HttpMessageHandlerRequest__uType, __interface_0);

        type->StrongRefOffsets[0] = offsetof(HttpMessageHandlerRequest, _method);
        type->StrongRefOffsets[1] = offsetof(HttpMessageHandlerRequest, _url);
        type->StrongRefOffsets[2] = offsetof(HttpMessageHandlerRequest, _optionalPayloadCache);
        type->StrongRefOffsets[3] = offsetof(HttpMessageHandlerRequest, Error);
        type->StrongRefOffsets[4] = offsetof(HttpMessageHandlerRequest, Done);
        type->StrongRefOffsets[5] = offsetof(HttpMessageHandlerRequest, Aborted);
        type->StrongRefOffsets[6] = offsetof(HttpMessageHandlerRequest, Timeout);
        type->StrongRefOffsets[7] = offsetof(HttpMessageHandlerRequest, StateChanged);
        type->StrongRefOffsets[8] = offsetof(HttpMessageHandlerRequest, Progress);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_method";
        type->StrongRefNames[1] = "_url";
        type->StrongRefNames[2] = "_optionalPayloadCache";
        type->StrongRefNames[3] = "Error";
        type->StrongRefNames[4] = "Done";
        type->StrongRefNames[5] = "Aborted";
        type->StrongRefNames[6] = "Timeout";
        type->StrongRefNames[7] = "StateChanged";
        type->StrongRefNames[8] = "Progress";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void* HttpMessageHandlerRequest__get_Handle(HttpMessageHandlerRequest* __this)
{
    return __this->_requestHandle;
}

int HttpMessageHandlerRequest__get_State(HttpMessageHandlerRequest* __this)
{
    return __this->_state;
}

void HttpMessageHandlerRequest__OnAborted(HttpMessageHandlerRequest* __this)
{
    __this->_state = 0;
    __this->_isAborted = true;
    __this->_isErrored = true;

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->Aborted, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->Aborted)->InvokeVoid< HttpMessageHandlerRequest*>(__this);
    }
}

void HttpMessageHandlerRequest__OnError(HttpMessageHandlerRequest* __this, ::uString* platformspesificErrorMessage)
{
    __this->_isErrored = true;

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->Error, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->Error)->InvokeVoid< HttpMessageHandlerRequest*, ::uString*>(__this, platformspesificErrorMessage);
    }
}

void HttpMessageHandlerRequest__OnTimeout(HttpMessageHandlerRequest* __this)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->Timeout, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->Timeout)->InvokeVoid< HttpMessageHandlerRequest*>(__this);
    }
}

void HttpMessageHandlerRequest__OnDone(HttpMessageHandlerRequest* __this)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->Done, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->Done)->InvokeVoid< HttpMessageHandlerRequest*>(__this);
    }
}

void HttpMessageHandlerRequest__OnProgress(HttpMessageHandlerRequest* __this, int current, int total, bool hasTotal)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->Progress, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->Progress)->InvokeVoid< HttpMessageHandlerRequest*, int, int, bool>(__this, current, total, hasTotal);
    }
}

void HttpMessageHandlerRequest__OnStateChanged(HttpMessageHandlerRequest* __this)
{
    if (__this->_isAborted)
    {
        return;
    }

    __this->_state = __this->GetState();

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->StateChanged, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->StateChanged)->InvokeVoid< HttpMessageHandlerRequest*>(__this);
    }
}

int HttpMessageHandlerRequest__GetState(HttpMessageHandlerRequest* __this)
{
    __this->CheckDisposed();
    return __this->_state = ::app::Experimental::Net::Http::Implementation::HttpRequestImpl__GetState(NULL, __this->_requestHandle);
}

void HttpMessageHandlerRequest__SetHeader(HttpMessageHandlerRequest* __this, ::uString* name, ::uString* value)
{
    __this->CheckDisposed();

    if (__this->State() != 1)
    {
        U_THROW(::app::Experimental::Net::Http::InvalidStateException__New_3(NULL));
    }

    if (__this->_isSent)
    {
        U_THROW(::app::Experimental::Net::Http::InvalidStateException__New_3(NULL));
    }

    if (::app::Uno::String__op_Equality(NULL, ::app::Uno::String::ToLower(::uPtr< ::uString*>(name)), ::uGetConstString("content-type")))
    {
        U_THROW(::app::Uno::Exception__New_1(NULL, ::uGetConstString("Restricted header, use SetContentType method instead")));
    }

    ::app::Experimental::Net::Http::Implementation::HttpRequestImpl__SetHeader(NULL, __this->_requestHandle, name, value);
}

void HttpMessageHandlerRequest__SetResponseType(HttpMessageHandlerRequest* __this, int responseType)
{
    __this->CheckDisposed();

    if (__this->State() >= 4)
    {
        U_THROW(::app::Experimental::Net::Http::InvalidStateException__New_3(NULL));
    }

    __this->_responseType = responseType;

    if (responseType != -1)
    {
        ::app::Experimental::Net::Http::Implementation::HttpRequestImpl__SetResponseType(NULL, __this->_requestHandle, responseType);
    }
}

void HttpMessageHandlerRequest__SendAsync_2(HttpMessageHandlerRequest* __this)
{
    __this->CheckDisposed();

    if (__this->State() != 1)
    {
        U_THROW(::app::Experimental::Net::Http::InvalidStateException__New_3(NULL));
    }

    if (__this->_isSent)
    {
        U_THROW(::app::Experimental::Net::Http::InvalidStateException__New_4(NULL, ::uGetConstString("Message already sent")));
    }

    ::app::Experimental::Net::Http::Implementation::HttpRequestImpl__SendAsync_2(NULL, __this->_requestHandle);
    __this->_isSent = true;
}

int HttpMessageHandlerRequest__GetResponseStatus(HttpMessageHandlerRequest* __this)
{
    __this->CheckDisposed();

    if (__this->State() < 3)
    {
        return 0;
    }

    if (__this->_isErrored)
    {
        return 0;
    }

    return ::app::Experimental::Net::Http::Implementation::HttpRequestImpl__GetResponseStatus(NULL, __this->_requestHandle);
}

::uString* HttpMessageHandlerRequest__GetResponseHeaders(HttpMessageHandlerRequest* __this)
{
    __this->CheckDisposed();

    if (__this->_isErrored)
    {
        return ::uGetConstString("");
    }

    if (__this->State() < 3)
    {
        return ::uGetConstString("");
    }

    return ::app::Experimental::Net::Http::Implementation::HttpRequestImpl__GetResponseHeaders(NULL, __this->_requestHandle);
}

::uArray* HttpMessageHandlerRequest__GetResponseContentByteArray(HttpMessageHandlerRequest* __this)
{
    __this->CheckDisposed();

    if (__this->State() < 4)
    {
        return ::uNewArray(::app::Uno::Byte__typeof(), 0);
    }

    if (__this->_isErrored)
    {
        return ::uNewArray(::app::Uno::Byte__typeof(), 0);
    }

    if (__this->_responseType != 1)
    {
        U_THROW(::app::Experimental::Net::Http::InvalidResponseTypeException__New_3(NULL));
    }

    ::uArray* ind_124 = ::app::Experimental::Net::Http::Implementation::HttpRequestImpl__GetResponseContentByteArray(NULL, __this->_requestHandle);
    return (ind_124 != NULL) ? ind_124 : ::uNewArray(::app::Uno::Byte__typeof(), 0);
}

void HttpMessageHandlerRequest__CheckDisposed(HttpMessageHandlerRequest* __this)
{
    if (__this->_isDisposed)
    {
        U_THROW(::app::Experimental::Net::Http::ObjectDisposedException__New_4(NULL, ::uGetConstString("HttpMessageHandlerRequest")));
    }
}

void HttpMessageHandlerRequest__Dispose(HttpMessageHandlerRequest* __this)
{
    ::app::Experimental::Net::Http::Implementation::HttpRequestImpl__Dispose(NULL, __this->_requestHandle);
    __this->_optionalPayloadCache = NULL;
    __this->_isDisposed = true;
}

void HttpMessageHandlerRequest___ObjInit(HttpMessageHandlerRequest* __this, void* clientHandle, ::uString* method, ::uString* url)
{
    __this->_responseType = -1;

    if (clientHandle == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("clientHandle")));
    }

    if (::app::Uno::String__op_Equality(NULL, method, NULL))
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("method")));
    }

    if (::app::Uno::String__op_Equality(NULL, url, NULL))
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("url")));
    }

    __this->_method = ::app::Uno::String::ToUpper(::uPtr< ::uString*>(method));

    if (((((::app::Uno::String__op_Inequality(NULL, __this->_method, ::uGetConstString("DELETE")) && ::app::Uno::String__op_Inequality(NULL, __this->_method, ::uGetConstString("GET"))) && ::app::Uno::String__op_Inequality(NULL, __this->_method, ::uGetConstString("HEAD"))) && ::app::Uno::String__op_Inequality(NULL, __this->_method, ::uGetConstString("POST"))) && ::app::Uno::String__op_Inequality(NULL, __this->_method, ::uGetConstString("PUT"))) && ::app::Uno::String__op_Inequality(NULL, __this->_method, ::uGetConstString("OPTIONS")))
    {
        U_THROW(::app::Uno::NotSupportedException__New_4(NULL, ::uGetConstString("HTTP method not supported.")));
    }

    __this->_url = url;
    __this->_requestHandle = ::app::Experimental::Net::Http::Implementation::HttpClientImpl__CreateRequest(NULL, clientHandle, __this->_method, __this->_url);
    __this->_state = __this->GetState();
}

HttpMessageHandlerRequest* HttpMessageHandlerRequest__New_1(::uStatic* __this, void* clientHandle, ::uString* method, ::uString* url)
{
    HttpMessageHandlerRequest* inst = (::app::Experimental::Net::Http::HttpMessageHandlerRequest*)::uAllocObject(sizeof(::app::Experimental::Net::Http::HttpMessageHandlerRequest), ::app::Experimental::Net::Http::HttpMessageHandlerRequest__typeof());
    inst->_ObjInit(clientHandle, method, url);
    return inst;
}

void HttpMessageHandlerRequest__add_Error(HttpMessageHandlerRequest* __this, ::uDelegate* value)
{
    __this->Error = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->Error, (::uDelegate*)value), ::app::Uno::Action__Experimental_Net_Http_HttpMessageHandlerRequest__string__typeof());
}

void HttpMessageHandlerRequest__add_Done(HttpMessageHandlerRequest* __this, ::uDelegate* value)
{
    __this->Done = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->Done, (::uDelegate*)value), ::app::Uno::Action__Experimental_Net_Http_HttpMessageHandlerRequest__typeof());
}

}}}}
