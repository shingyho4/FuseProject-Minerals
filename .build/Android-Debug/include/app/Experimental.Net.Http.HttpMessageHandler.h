// This file was generated based on 'C:\ProgramData\Uno\Packages\Experimental.Net.Http\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_EXPERIMENTAL_NET_HTTP_HTTP_MESSAGE_HANDLER_H__
#define __APP_EXPERIMENTAL_NET_HTTP_HTTP_MESSAGE_HANDLER_H__

#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Experimental { namespace Net { namespace Http { namespace Implementation { struct HttpRequestEventArgs; } } } } }
namespace app { namespace Experimental { namespace Net { namespace Http { struct HttpMessageHandlerRequest; } } } }
namespace app { namespace Uno { namespace Collections { struct List__Experimental_Net_Http_HttpMessageHandlerRequest; } } }
namespace app { namespace Uno { struct EventArgs; } }

namespace app {
namespace Experimental {
namespace Net {
namespace Http {

struct HttpMessageHandler;

struct HttpMessageHandler__uType : ::uClassType
{
    ::app::Uno::IDisposable __interface_0;
};

HttpMessageHandler__uType* HttpMessageHandler__typeof();

void HttpMessageHandler__SubscribeToEvents(HttpMessageHandler* __this);
void HttpMessageHandler__UnsubscribeFromEvents(HttpMessageHandler* __this);
void HttpMessageHandler__OnAbortedCallback(HttpMessageHandler* __this, ::app::Experimental::Net::Http::Implementation::HttpRequestEventArgs eventArgs);
void HttpMessageHandler__OnErrorCallback(HttpMessageHandler* __this, ::app::Experimental::Net::Http::Implementation::HttpRequestEventArgs eventArgs, ::uString* platformspesificErrorMessage);
void HttpMessageHandler__OnTimeoutCallback(HttpMessageHandler* __this, ::app::Experimental::Net::Http::Implementation::HttpRequestEventArgs eventArgs);
void HttpMessageHandler__OnDoneCallback(HttpMessageHandler* __this, ::app::Experimental::Net::Http::Implementation::HttpRequestEventArgs eventArgs);
void HttpMessageHandler__OnStateChangedCallback(HttpMessageHandler* __this, ::app::Experimental::Net::Http::Implementation::HttpRequestEventArgs eventArgs);
void HttpMessageHandler__OnProgressCallback(HttpMessageHandler* __this, ::app::Experimental::Net::Http::Implementation::HttpRequestEventArgs eventArgs, int current, int total, bool hasTotal);
::app::Experimental::Net::Http::HttpMessageHandlerRequest* HttpMessageHandler__TryGetCorrespondingRequest(HttpMessageHandler* __this, void* handle);
::app::Experimental::Net::Http::HttpMessageHandlerRequest* HttpMessageHandler__CreateRequest(HttpMessageHandler* __this, ::uString* method, ::uString* url);
void HttpMessageHandler__Update(HttpMessageHandler* __this, ::uObject* sender, ::app::Uno::EventArgs* args);
void HttpMessageHandler__Dispose(HttpMessageHandler* __this);
void HttpMessageHandler___TypeInit(::uStatic* __this);
void HttpMessageHandler___ObjInit(HttpMessageHandler* __this);
HttpMessageHandler* HttpMessageHandler__New_1(::uStatic* __this);

struct HttpMessageHandler : ::uObject
{
    bool _isDisposed;
    ::uStrong< ::app::Uno::Collections::List__Experimental_Net_Http_HttpMessageHandlerRequest*> _pendingRequests;
    void* _clientHandle;

    void SubscribeToEvents() { HttpMessageHandler__SubscribeToEvents(this); }
    void UnsubscribeFromEvents() { HttpMessageHandler__UnsubscribeFromEvents(this); }
    void OnAbortedCallback(::app::Experimental::Net::Http::Implementation::HttpRequestEventArgs eventArgs);
    void OnErrorCallback(::app::Experimental::Net::Http::Implementation::HttpRequestEventArgs eventArgs, ::uString* platformspesificErrorMessage);
    void OnTimeoutCallback(::app::Experimental::Net::Http::Implementation::HttpRequestEventArgs eventArgs);
    void OnDoneCallback(::app::Experimental::Net::Http::Implementation::HttpRequestEventArgs eventArgs);
    void OnStateChangedCallback(::app::Experimental::Net::Http::Implementation::HttpRequestEventArgs eventArgs);
    void OnProgressCallback(::app::Experimental::Net::Http::Implementation::HttpRequestEventArgs eventArgs, int current, int total, bool hasTotal);
    ::app::Experimental::Net::Http::HttpMessageHandlerRequest* TryGetCorrespondingRequest(void* handle) { return HttpMessageHandler__TryGetCorrespondingRequest(this, handle); }
    ::app::Experimental::Net::Http::HttpMessageHandlerRequest* CreateRequest(::uString* method, ::uString* url) { return HttpMessageHandler__CreateRequest(this, method, url); }
    void Update(::uObject* sender, ::app::Uno::EventArgs* args) { HttpMessageHandler__Update(this, sender, args); }
    void Dispose() { HttpMessageHandler__Dispose(this); }
    void _ObjInit() { HttpMessageHandler___ObjInit(this); }
};

}}}}

#include <app/Experimental.Net.Http.Implementation.HttpRequestEventArgs.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Int.h>

namespace app {
namespace Experimental {
namespace Net {
namespace Http {

inline void HttpMessageHandler::OnAbortedCallback(::app::Experimental::Net::Http::Implementation::HttpRequestEventArgs eventArgs) { HttpMessageHandler__OnAbortedCallback(this, eventArgs); }
inline void HttpMessageHandler::OnErrorCallback(::app::Experimental::Net::Http::Implementation::HttpRequestEventArgs eventArgs, ::uString* platformspesificErrorMessage) { HttpMessageHandler__OnErrorCallback(this, eventArgs, platformspesificErrorMessage); }
inline void HttpMessageHandler::OnTimeoutCallback(::app::Experimental::Net::Http::Implementation::HttpRequestEventArgs eventArgs) { HttpMessageHandler__OnTimeoutCallback(this, eventArgs); }
inline void HttpMessageHandler::OnDoneCallback(::app::Experimental::Net::Http::Implementation::HttpRequestEventArgs eventArgs) { HttpMessageHandler__OnDoneCallback(this, eventArgs); }
inline void HttpMessageHandler::OnStateChangedCallback(::app::Experimental::Net::Http::Implementation::HttpRequestEventArgs eventArgs) { HttpMessageHandler__OnStateChangedCallback(this, eventArgs); }
inline void HttpMessageHandler::OnProgressCallback(::app::Experimental::Net::Http::Implementation::HttpRequestEventArgs eventArgs, int current, int total, bool hasTotal) { HttpMessageHandler__OnProgressCallback(this, eventArgs, current, total, hasTotal); }

}}}}


#endif
