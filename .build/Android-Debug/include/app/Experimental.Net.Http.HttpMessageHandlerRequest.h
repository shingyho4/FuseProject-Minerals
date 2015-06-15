// This file was generated based on 'C:\ProgramData\Uno\Packages\Experimental.Net.Http\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_EXPERIMENTAL_NET_HTTP_HTTP_MESSAGE_HANDLER_REQUEST_H__
#define __APP_EXPERIMENTAL_NET_HTTP_HTTP_MESSAGE_HANDLER_REQUEST_H__

#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno/Uno.h>

namespace app {
namespace Experimental {
namespace Net {
namespace Http {

struct HttpMessageHandlerRequest;

struct HttpMessageHandlerRequest__uType : ::uClassType
{
    ::app::Uno::IDisposable __interface_0;
};

HttpMessageHandlerRequest__uType* HttpMessageHandlerRequest__typeof();

void* HttpMessageHandlerRequest__get_Handle(HttpMessageHandlerRequest* __this);
int HttpMessageHandlerRequest__get_State(HttpMessageHandlerRequest* __this);
void HttpMessageHandlerRequest__OnAborted(HttpMessageHandlerRequest* __this);
void HttpMessageHandlerRequest__OnError(HttpMessageHandlerRequest* __this, ::uString* platformspesificErrorMessage);
void HttpMessageHandlerRequest__OnTimeout(HttpMessageHandlerRequest* __this);
void HttpMessageHandlerRequest__OnDone(HttpMessageHandlerRequest* __this);
void HttpMessageHandlerRequest__OnProgress(HttpMessageHandlerRequest* __this, int current, int total, bool hasTotal);
void HttpMessageHandlerRequest__OnStateChanged(HttpMessageHandlerRequest* __this);
int HttpMessageHandlerRequest__GetState(HttpMessageHandlerRequest* __this);
void HttpMessageHandlerRequest__SetHeader(HttpMessageHandlerRequest* __this, ::uString* name, ::uString* value);
void HttpMessageHandlerRequest__SetResponseType(HttpMessageHandlerRequest* __this, int responseType);
void HttpMessageHandlerRequest__SendAsync_2(HttpMessageHandlerRequest* __this);
int HttpMessageHandlerRequest__GetResponseStatus(HttpMessageHandlerRequest* __this);
::uString* HttpMessageHandlerRequest__GetResponseHeaders(HttpMessageHandlerRequest* __this);
::uArray* HttpMessageHandlerRequest__GetResponseContentByteArray(HttpMessageHandlerRequest* __this);
void HttpMessageHandlerRequest__CheckDisposed(HttpMessageHandlerRequest* __this);
void HttpMessageHandlerRequest__Dispose(HttpMessageHandlerRequest* __this);
void HttpMessageHandlerRequest___ObjInit(HttpMessageHandlerRequest* __this, void* clientHandle, ::uString* method, ::uString* url);
HttpMessageHandlerRequest* HttpMessageHandlerRequest__New_1(::uStatic* __this, void* clientHandle, ::uString* method, ::uString* url);
void HttpMessageHandlerRequest__add_Error(HttpMessageHandlerRequest* __this, ::uDelegate* value);
void HttpMessageHandlerRequest__add_Done(HttpMessageHandlerRequest* __this, ::uDelegate* value);

struct HttpMessageHandlerRequest : ::uObject
{
    bool _isDisposed;
    bool _isAborted;
    bool _isErrored;
    bool _isSent;
    void* _requestHandle;
    int _state;
    int _responseType;
    ::uStrong< ::uString*> _method;
    ::uStrong< ::uString*> _url;
    ::uStrong< ::uArray*> _optionalPayloadCache;
    ::uStrong< ::uDelegate*> Error;
    ::uStrong< ::uDelegate*> Done;
    ::uStrong< ::uDelegate*> Aborted;
    ::uStrong< ::uDelegate*> Timeout;
    ::uStrong< ::uDelegate*> StateChanged;
    ::uStrong< ::uDelegate*> Progress;

    void OnAborted() { HttpMessageHandlerRequest__OnAborted(this); }
    void OnError(::uString* platformspesificErrorMessage) { HttpMessageHandlerRequest__OnError(this, platformspesificErrorMessage); }
    void OnTimeout() { HttpMessageHandlerRequest__OnTimeout(this); }
    void OnDone() { HttpMessageHandlerRequest__OnDone(this); }
    void OnProgress(int current, int total, bool hasTotal) { HttpMessageHandlerRequest__OnProgress(this, current, total, hasTotal); }
    void OnStateChanged() { HttpMessageHandlerRequest__OnStateChanged(this); }
    int GetState() { return HttpMessageHandlerRequest__GetState(this); }
    void SetHeader(::uString* name, ::uString* value) { HttpMessageHandlerRequest__SetHeader(this, name, value); }
    void SetResponseType(int responseType) { HttpMessageHandlerRequest__SetResponseType(this, responseType); }
    void SendAsync_2() { HttpMessageHandlerRequest__SendAsync_2(this); }
    int GetResponseStatus() { return HttpMessageHandlerRequest__GetResponseStatus(this); }
    ::uString* GetResponseHeaders() { return HttpMessageHandlerRequest__GetResponseHeaders(this); }
    ::uArray* GetResponseContentByteArray() { return HttpMessageHandlerRequest__GetResponseContentByteArray(this); }
    void CheckDisposed() { HttpMessageHandlerRequest__CheckDisposed(this); }
    void Dispose() { HttpMessageHandlerRequest__Dispose(this); }
    void _ObjInit(void* clientHandle, ::uString* method, ::uString* url) { HttpMessageHandlerRequest___ObjInit(this, clientHandle, method, url); }
    void add_Error(::uDelegate* value) { HttpMessageHandlerRequest__add_Error(this, value); }
    void add_Done(::uDelegate* value) { HttpMessageHandlerRequest__add_Done(this, value); }
    void* Handle() { return HttpMessageHandlerRequest__get_Handle(this); }
    int State() { return HttpMessageHandlerRequest__get_State(this); }
};

}}}}

#include <app/Uno.Bool.h>
#include <app/Uno.Int.h>

namespace app {
namespace Experimental {
namespace Net {
namespace Http {

}}}}


#endif
