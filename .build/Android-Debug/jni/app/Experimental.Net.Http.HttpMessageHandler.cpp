// This file was generated based on 'C:\ProgramData\Uno\Packages\Experimental.Net.Http\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Experimental.Net.Http.HttpMessageHandler.h>
#include <app/Experimental.Net.Http.HttpMessageHandlerRequest.h>
#include <app/Experimental.Net.Http.Implementation.HttpClientHandle.h>
#include <app/Experimental.Net.Http.Implementation.HttpClientImpl.h>
#include <app/Experimental.Net.Http.Implementation.HttpRequestCallbacks.h>
#include <app/Experimental.Net.Http.Implementation.HttpRequestHandle.h>
#include <app/Uno.Action__Experimental_Net_Http_Implementation_HttpRequestEve-8f8aec91.h>
#include <app/Uno.Action__Experimental_Net_Http_Implementation_HttpRequestEve-e5f93632.h>
#include <app/Uno.Action__Experimental_Net_Http_Implementation_HttpRequestEventArgs.h>
#include <app/Uno.Collections.List__Experimental_Net_Http_HttpMessageHandlerRequest.h>
#include <app/Uno.Collections.List1_Enumerator__Experimental_Net_Http_HttpMes-7d547fbf.h>
#include <app/Uno.EventArgs.h>
#include <app/Uno.EventHandler__Uno_Platform2_TimerEventArgs.h>
#include <app/Uno.Platform2.Display.h>
#include <app/Uno.String.h>

namespace app {
namespace Experimental {
namespace Net {
namespace Http {

HttpMessageHandler__uType* HttpMessageHandler__typeof()
{
    static HttpMessageHandler__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (HttpMessageHandler__uType*)::uAllocClassType(sizeof(HttpMessageHandler__uType), "Experimental.Net.Http.HttpMessageHandler", ::uObject__typeof(), 1, 1);
        type->__interface_0.__fp_Dispose = (void(*)(void*))HttpMessageHandler__Dispose;

        type->Implements[0] = ::app::Uno::IDisposable__typeof();

        type->InterfaceOffsets[0] = offsetof(HttpMessageHandler__uType, __interface_0);

        type->StrongRefOffsets[0] = offsetof(HttpMessageHandler, _pendingRequests);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_pendingRequests";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void HttpMessageHandler__SubscribeToEvents(HttpMessageHandler* __this)
{
    {
        ::uPtr< ::app::Uno::Platform2::Display*>(::app::Uno::Platform2::Display__get_MainDisplay(NULL))->add_Tick(::uNewDelegateNonVirt(::app::Uno::EventHandler__Uno_Platform2_TimerEventArgs__typeof(), (const void*)::app::Experimental::Net::Http::HttpMessageHandler__Update, __this));
    }

    ::app::Experimental::Net::Http::Implementation::HttpRequestCallbacks__add_Aborted(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__Experimental_Net_Http_Implementation_HttpRequestEventArgs__typeof(), (const void*)::app::Experimental::Net::Http::HttpMessageHandler__OnAbortedCallback, __this));
    ::app::Experimental::Net::Http::Implementation::HttpRequestCallbacks__add_Error(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__Experimental_Net_Http_Implementation_HttpRequestEventArgs__string__typeof(), (const void*)::app::Experimental::Net::Http::HttpMessageHandler__OnErrorCallback, __this));
    ::app::Experimental::Net::Http::Implementation::HttpRequestCallbacks__add_Timeout(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__Experimental_Net_Http_Implementation_HttpRequestEventArgs__typeof(), (const void*)::app::Experimental::Net::Http::HttpMessageHandler__OnTimeoutCallback, __this));
    ::app::Experimental::Net::Http::Implementation::HttpRequestCallbacks__add_Done(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__Experimental_Net_Http_Implementation_HttpRequestEventArgs__typeof(), (const void*)::app::Experimental::Net::Http::HttpMessageHandler__OnDoneCallback, __this));
    ::app::Experimental::Net::Http::Implementation::HttpRequestCallbacks__add_StateChanged(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__Experimental_Net_Http_Implementation_HttpRequestEventArgs__typeof(), (const void*)::app::Experimental::Net::Http::HttpMessageHandler__OnStateChangedCallback, __this));
    ::app::Experimental::Net::Http::Implementation::HttpRequestCallbacks__add_Progress(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__Experimental_Net_Http_Implementation_HttpRequestEventArgs__int__int__bool__typeof(), (const void*)::app::Experimental::Net::Http::HttpMessageHandler__OnProgressCallback, __this));
}

void HttpMessageHandler__UnsubscribeFromEvents(HttpMessageHandler* __this)
{
    {
        ::uPtr< ::app::Uno::Platform2::Display*>(::app::Uno::Platform2::Display__get_MainDisplay(NULL))->remove_Tick(::uNewDelegateNonVirt(::app::Uno::EventHandler__Uno_Platform2_TimerEventArgs__typeof(), (const void*)::app::Experimental::Net::Http::HttpMessageHandler__Update, __this));
    }

    ::app::Experimental::Net::Http::Implementation::HttpRequestCallbacks__remove_Aborted(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__Experimental_Net_Http_Implementation_HttpRequestEventArgs__typeof(), (const void*)::app::Experimental::Net::Http::HttpMessageHandler__OnAbortedCallback, __this));
    ::app::Experimental::Net::Http::Implementation::HttpRequestCallbacks__remove_Error(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__Experimental_Net_Http_Implementation_HttpRequestEventArgs__string__typeof(), (const void*)::app::Experimental::Net::Http::HttpMessageHandler__OnErrorCallback, __this));
    ::app::Experimental::Net::Http::Implementation::HttpRequestCallbacks__remove_Timeout(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__Experimental_Net_Http_Implementation_HttpRequestEventArgs__typeof(), (const void*)::app::Experimental::Net::Http::HttpMessageHandler__OnTimeoutCallback, __this));
    ::app::Experimental::Net::Http::Implementation::HttpRequestCallbacks__remove_Done(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__Experimental_Net_Http_Implementation_HttpRequestEventArgs__typeof(), (const void*)::app::Experimental::Net::Http::HttpMessageHandler__OnDoneCallback, __this));
    ::app::Experimental::Net::Http::Implementation::HttpRequestCallbacks__remove_StateChanged(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__Experimental_Net_Http_Implementation_HttpRequestEventArgs__typeof(), (const void*)::app::Experimental::Net::Http::HttpMessageHandler__OnStateChangedCallback, __this));
    ::app::Experimental::Net::Http::Implementation::HttpRequestCallbacks__remove_Progress(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__Experimental_Net_Http_Implementation_HttpRequestEventArgs__int__int__bool__typeof(), (const void*)::app::Experimental::Net::Http::HttpMessageHandler__OnProgressCallback, __this));
}

void HttpMessageHandler__OnAbortedCallback(HttpMessageHandler* __this, ::app::Experimental::Net::Http::Implementation::HttpRequestEventArgs eventArgs)
{
    ::app::Experimental::Net::Http::HttpMessageHandlerRequest* pendingRequest = __this->TryGetCorrespondingRequest(eventArgs.Handle);

    if (pendingRequest != NULL)
    {
        ::uPtr< ::app::Experimental::Net::Http::HttpMessageHandlerRequest*>(pendingRequest)->OnAborted();
        ::uPtr< ::app::Uno::Collections::List__Experimental_Net_Http_HttpMessageHandlerRequest*>(__this->_pendingRequests)->Remove(pendingRequest);
    }
}

void HttpMessageHandler__OnErrorCallback(HttpMessageHandler* __this, ::app::Experimental::Net::Http::Implementation::HttpRequestEventArgs eventArgs, ::uString* platformspesificErrorMessage)
{
    ::app::Experimental::Net::Http::HttpMessageHandlerRequest* pendingRequest = __this->TryGetCorrespondingRequest(eventArgs.Handle);

    if (pendingRequest != NULL)
    {
        ::uPtr< ::app::Experimental::Net::Http::HttpMessageHandlerRequest*>(pendingRequest)->OnError(platformspesificErrorMessage);
        ::uPtr< ::app::Uno::Collections::List__Experimental_Net_Http_HttpMessageHandlerRequest*>(__this->_pendingRequests)->Remove(pendingRequest);
    }
}

void HttpMessageHandler__OnTimeoutCallback(HttpMessageHandler* __this, ::app::Experimental::Net::Http::Implementation::HttpRequestEventArgs eventArgs)
{
    ::app::Experimental::Net::Http::HttpMessageHandlerRequest* pendingRequest = __this->TryGetCorrespondingRequest(eventArgs.Handle);

    if (pendingRequest != NULL)
    {
        ::uPtr< ::app::Experimental::Net::Http::HttpMessageHandlerRequest*>(pendingRequest)->OnTimeout();
        ::uPtr< ::app::Uno::Collections::List__Experimental_Net_Http_HttpMessageHandlerRequest*>(__this->_pendingRequests)->Remove(pendingRequest);
    }
}

void HttpMessageHandler__OnDoneCallback(HttpMessageHandler* __this, ::app::Experimental::Net::Http::Implementation::HttpRequestEventArgs eventArgs)
{
    ::app::Experimental::Net::Http::HttpMessageHandlerRequest* pendingRequest = __this->TryGetCorrespondingRequest(eventArgs.Handle);

    if (pendingRequest != NULL)
    {
        ::uPtr< ::app::Experimental::Net::Http::HttpMessageHandlerRequest*>(pendingRequest)->OnDone();
        ::uPtr< ::app::Uno::Collections::List__Experimental_Net_Http_HttpMessageHandlerRequest*>(__this->_pendingRequests)->Remove(pendingRequest);
    }
}

void HttpMessageHandler__OnStateChangedCallback(HttpMessageHandler* __this, ::app::Experimental::Net::Http::Implementation::HttpRequestEventArgs eventArgs)
{
    ::app::Experimental::Net::Http::HttpMessageHandlerRequest* pendingRequest = __this->TryGetCorrespondingRequest(eventArgs.Handle);

    if (pendingRequest != NULL)
    {
        ::uPtr< ::app::Experimental::Net::Http::HttpMessageHandlerRequest*>(pendingRequest)->OnStateChanged();
    }
}

void HttpMessageHandler__OnProgressCallback(HttpMessageHandler* __this, ::app::Experimental::Net::Http::Implementation::HttpRequestEventArgs eventArgs, int current, int total, bool hasTotal)
{
    ::app::Experimental::Net::Http::HttpMessageHandlerRequest* pendingRequest = __this->TryGetCorrespondingRequest(eventArgs.Handle);

    if (pendingRequest != NULL)
    {
        ::uPtr< ::app::Experimental::Net::Http::HttpMessageHandlerRequest*>(pendingRequest)->OnProgress(current, total, hasTotal);
    }
}

::app::Experimental::Net::Http::HttpMessageHandlerRequest* HttpMessageHandler__TryGetCorrespondingRequest(HttpMessageHandler* __this, void* handle)
{
    for (int i = 0; i < ::uPtr< ::app::Uno::Collections::List__Experimental_Net_Http_HttpMessageHandlerRequest*>(__this->_pendingRequests)->Count(); i++)
    {
        if (::uPtr< ::app::Experimental::Net::Http::HttpMessageHandlerRequest*>(::uPtr< ::app::Uno::Collections::List__Experimental_Net_Http_HttpMessageHandlerRequest*>(__this->_pendingRequests)->Item(i))->Handle() == handle)
        {
            return ::uPtr< ::app::Uno::Collections::List__Experimental_Net_Http_HttpMessageHandlerRequest*>(__this->_pendingRequests)->Item(i);
        }
    }

    return NULL;
}

::app::Experimental::Net::Http::HttpMessageHandlerRequest* HttpMessageHandler__CreateRequest(HttpMessageHandler* __this, ::uString* method, ::uString* url)
{
    ::app::Experimental::Net::Http::HttpMessageHandlerRequest* httpMessageHandlerRequest = ::app::Experimental::Net::Http::HttpMessageHandlerRequest__New_1(NULL, __this->_clientHandle, method, url);
    ::uPtr< ::app::Uno::Collections::List__Experimental_Net_Http_HttpMessageHandlerRequest*>(__this->_pendingRequests)->Add(httpMessageHandlerRequest);
    return httpMessageHandlerRequest;
}

void HttpMessageHandler__Update(HttpMessageHandler* __this, ::uObject* sender, ::app::Uno::EventArgs* args)
{
    ::app::Experimental::Net::Http::Implementation::HttpClientImpl__Update(NULL, __this->_clientHandle);
}

void HttpMessageHandler__Dispose(HttpMessageHandler* __this)
{
    for (::app::Uno::Collections::List1_Enumerator__Experimental_Net_Http_HttpMessageHandlerRequest enum_123 = ::uPtr< ::app::Uno::Collections::List__Experimental_Net_Http_HttpMessageHandlerRequest*>(__this->_pendingRequests)->GetEnumerator(); enum_123.MoveNext(); )
    {
        ::app::Experimental::Net::Http::HttpMessageHandlerRequest* request = enum_123.Current();
        ::uPtr< ::app::Experimental::Net::Http::HttpMessageHandlerRequest*>(request)->Dispose();
    }

    ::app::Experimental::Net::Http::Implementation::HttpClientImpl__Dispose(NULL, __this->_clientHandle);
    __this->UnsubscribeFromEvents();
    __this->_isDisposed = true;
}

void HttpMessageHandler___TypeInit(::uStatic* __this)
{
    ::app::Experimental::Net::Http::Implementation::HttpRequestCallbacks__ClearState(NULL);
}

void HttpMessageHandler___ObjInit(HttpMessageHandler* __this)
{
    __this->_pendingRequests = ::app::Uno::Collections::List__Experimental_Net_Http_HttpMessageHandlerRequest__New_1(NULL);
    __this->_clientHandle = ::app::Experimental::Net::Http::Implementation::HttpClientImpl__Create(NULL);
    __this->SubscribeToEvents();
}

HttpMessageHandler* HttpMessageHandler__New_1(::uStatic* __this)
{
    HttpMessageHandler* inst = (::app::Experimental::Net::Http::HttpMessageHandler*)::uAllocObject(sizeof(::app::Experimental::Net::Http::HttpMessageHandler), ::app::Experimental::Net::Http::HttpMessageHandler__typeof());
    inst->_ObjInit();
    return inst;
}

}}}}
