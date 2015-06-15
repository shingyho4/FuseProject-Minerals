#ifndef __UNO_XLI_HTTP_EVENT_HANDLER_H__
#define __UNO_XLI_HTTP_EVENT_HANDLER_H__

#include <XliHttpClient.h>
#include <app/Experimental.Net.Http.Implementation.HttpRequestCallbacks.h>
#include <Uno/XliInterop.h>

class uXliHttpEventHandler: public Xli::HttpEventHandler
{
public:
    virtual void OnRequestStateChanged(Xli::HttpRequest* request) 
    {
        uAutoReleasePool pool;
        ::app::Experimental::Net::Http::Implementation::HttpRequestCallbacks__OnStateChanged(NULL, request);
        if (request->GetState() == Xli::HttpRequestStateDone)        
            ::app::Experimental::Net::Http::Implementation::HttpRequestCallbacks__OnDone(NULL, request);
    }

    virtual void OnRequestProgress(Xli::HttpRequest* request, int position, int total, bool totalKnown) 
    {
        uAutoReleasePool pool;
        ::app::Experimental::Net::Http::Implementation::HttpRequestCallbacks__OnProgress(NULL, request, position, total, totalKnown);
    }

    virtual void OnRequestAborted(Xli::HttpRequest* request) 
    {
        uAutoReleasePool pool;
        ::app::Experimental::Net::Http::Implementation::HttpRequestCallbacks__OnAborted(NULL, request);
    }

    virtual void OnRequestTimeout(Xli::HttpRequest* request) 
    {
        uAutoReleasePool pool;
        ::app::Experimental::Net::Http::Implementation::HttpRequestCallbacks__OnTimeout(NULL, request);
    }

    virtual void OnRequestError(Xli::HttpRequest* request, Xli::String message) 
    {
        uAutoReleasePool pool;
        ::app::Experimental::Net::Http::Implementation::HttpRequestCallbacks__OnError(NULL, request, ::uStringFromXliString(message));
    }
};


#endif
