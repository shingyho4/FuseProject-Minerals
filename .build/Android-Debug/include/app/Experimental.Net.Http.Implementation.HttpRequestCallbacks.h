// This file was generated based on 'C:\ProgramData\Uno\Packages\Experimental.Net.Http\0.1.0\Implementation\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_EXPERIMENTAL_NET_HTTP_IMPLEMENTATION_HTTP_REQUEST_CALLBACKS_H__
#define __APP_EXPERIMENTAL_NET_HTTP_IMPLEMENTATION_HTTP_REQUEST_CALLBACKS_H__

#include <Uno/Uno.h>

namespace app {
namespace Experimental {
namespace Net {
namespace Http {
namespace Implementation {

extern ::uStaticStrong< ::uDelegate*> HttpRequestCallbacks__Aborted;
extern ::uStaticStrong< ::uDelegate*> HttpRequestCallbacks__Error;
extern ::uStaticStrong< ::uDelegate*> HttpRequestCallbacks__Timeout;
extern ::uStaticStrong< ::uDelegate*> HttpRequestCallbacks__Done;
extern ::uStaticStrong< ::uDelegate*> HttpRequestCallbacks__StateChanged;
extern ::uStaticStrong< ::uDelegate*> HttpRequestCallbacks__Progress;

struct HttpRequestCallbacks__uType : ::uClassType
{
};

HttpRequestCallbacks__uType* HttpRequestCallbacks__typeof();

void HttpRequestCallbacks__OnAborted(::uStatic* __this, void* handle);
void HttpRequestCallbacks__OnError(::uStatic* __this, void* handle, ::uString* platformspesificErrorMessage);
void HttpRequestCallbacks__OnTimeout(::uStatic* __this, void* handle);
void HttpRequestCallbacks__OnDone(::uStatic* __this, void* handle);
void HttpRequestCallbacks__OnStateChanged(::uStatic* __this, void* handle);
void HttpRequestCallbacks__OnProgress(::uStatic* __this, void* handle, int current, int total, bool hasTotal);
void HttpRequestCallbacks__ClearState(::uStatic* __this);
void HttpRequestCallbacks__add_Aborted(::uStatic* __this, ::uDelegate* value);
void HttpRequestCallbacks__remove_Aborted(::uStatic* __this, ::uDelegate* value);
void HttpRequestCallbacks__add_Error(::uStatic* __this, ::uDelegate* value);
void HttpRequestCallbacks__remove_Error(::uStatic* __this, ::uDelegate* value);
void HttpRequestCallbacks__add_Timeout(::uStatic* __this, ::uDelegate* value);
void HttpRequestCallbacks__remove_Timeout(::uStatic* __this, ::uDelegate* value);
void HttpRequestCallbacks__add_Done(::uStatic* __this, ::uDelegate* value);
void HttpRequestCallbacks__remove_Done(::uStatic* __this, ::uDelegate* value);
void HttpRequestCallbacks__add_StateChanged(::uStatic* __this, ::uDelegate* value);
void HttpRequestCallbacks__remove_StateChanged(::uStatic* __this, ::uDelegate* value);
void HttpRequestCallbacks__add_Progress(::uStatic* __this, ::uDelegate* value);
void HttpRequestCallbacks__remove_Progress(::uStatic* __this, ::uDelegate* value);

}}}}}


#endif
