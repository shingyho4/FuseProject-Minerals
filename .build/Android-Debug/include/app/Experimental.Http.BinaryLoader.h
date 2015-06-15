// This file was generated based on 'C:\ProgramData\Uno\Packages\Experimental.Http\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_EXPERIMENTAL_HTTP_BINARY_LOADER_H__
#define __APP_EXPERIMENTAL_HTTP_BINARY_LOADER_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Experimental { namespace Http { struct HttpResponseHeader; } } }
namespace app { namespace Experimental { namespace Net { namespace Http { struct HttpMessageHandler; } } } }
namespace app { namespace Experimental { namespace Net { namespace Http { struct HttpMessageHandlerRequest; } } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary__string__string; } } }

namespace app {
namespace Experimental {
namespace Http {

struct BinaryLoader;

extern ::uStaticStrong< ::app::Experimental::Net::Http::HttpMessageHandler*> BinaryLoader___handler;

struct BinaryLoader__uType : ::uClassType
{
};

BinaryLoader__uType* BinaryLoader__typeof();

void BinaryLoader__Initiate(BinaryLoader* __this);
void BinaryLoader__MakeRequest(BinaryLoader* __this);
void BinaryLoader__OnLoaded(BinaryLoader* __this, ::app::Experimental::Net::Http::HttpMessageHandlerRequest* resp);
::app::Uno::Collections::Dictionary__string__string* BinaryLoader__ExtractHeaders(BinaryLoader* __this, ::uString* headers);
::uString* BinaryLoader__ConstructRecordId(::uStatic* __this, ::uString* method, ::uString* uri);
void BinaryLoader__OnBufferLoaded(BinaryLoader* __this, ::uArray* data);
void BinaryLoader__OnError(BinaryLoader* __this, ::app::Experimental::Net::Http::HttpMessageHandlerRequest* msg, ::uString* reason);
void BinaryLoader__OnCacheReady(BinaryLoader* __this, ::uObject* record);
bool BinaryLoader__LoadCache(BinaryLoader* __this, ::uObject* record);
bool BinaryLoader__IsExpired(BinaryLoader* __this, ::uObject* record);
void BinaryLoader___ObjInit(BinaryLoader* __this);
BinaryLoader* BinaryLoader__New_1(::uStatic* __this);

struct BinaryLoader : ::uObject
{
    ::uStrong< ::uDelegate*> Callback;
    ::uStrong< ::uDelegate*> ErrorCallback;
    ::uStrong< ::uObject*> Cache;
    ::uStrong< ::uString*> Uri;
    ::uStrong< ::uString*> Method;
    ::uStrong< ::app::Experimental::Http::HttpResponseHeader*> _header;
    ::uStrong< ::uObject*> _cacheRecord;

    void Initiate() { BinaryLoader__Initiate(this); }
    void MakeRequest() { BinaryLoader__MakeRequest(this); }
    void OnLoaded(::app::Experimental::Net::Http::HttpMessageHandlerRequest* resp) { BinaryLoader__OnLoaded(this, resp); }
    ::app::Uno::Collections::Dictionary__string__string* ExtractHeaders(::uString* headers) { return BinaryLoader__ExtractHeaders(this, headers); }
    void OnBufferLoaded(::uArray* data) { BinaryLoader__OnBufferLoaded(this, data); }
    void OnError(::app::Experimental::Net::Http::HttpMessageHandlerRequest* msg, ::uString* reason) { BinaryLoader__OnError(this, msg, reason); }
    void OnCacheReady(::uObject* record) { BinaryLoader__OnCacheReady(this, record); }
    bool LoadCache(::uObject* record) { return BinaryLoader__LoadCache(this, record); }
    bool IsExpired(::uObject* record) { return BinaryLoader__IsExpired(this, record); }
    void _ObjInit() { BinaryLoader___ObjInit(this); }
};

}}}

#include <app/Uno.Bool.h>

namespace app {
namespace Experimental {
namespace Http {

}}}


#endif
