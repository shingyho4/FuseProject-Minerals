// This file was generated based on 'C:\ProgramData\Uno\Packages\Experimental.Http\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_EXPERIMENTAL_CACHE_PROXY_STREAM_H__
#define __APP_EXPERIMENTAL_CACHE_PROXY_STREAM_H__

#include <app/Uno.IDisposable.h>
#include <app/Uno.IO.Stream.h>
#include <Uno/Uno.h>

namespace app {
namespace Experimental {
namespace Cache {

struct ProxyStream;

struct ProxyStream__uType : ::app::Uno::IO::Stream__uType
{
};

ProxyStream__uType* ProxyStream__typeof();

::uLong ProxyStream__get_Length(ProxyStream* __this);
::uLong ProxyStream__get_Position(ProxyStream* __this);
void ProxyStream__set_Position(ProxyStream* __this, ::uLong value);
int ProxyStream__Read(ProxyStream* __this, ::uArray* dst, int byteOffset, int byteCount);
void ProxyStream__Write(ProxyStream* __this, ::uArray* src, int byteOffset, int byteCount);
void ProxyStream__Dispose(ProxyStream* __this, bool disposing);
void ProxyStream__Close(ProxyStream* __this);

struct ProxyStream : ::app::Uno::IO::Stream
{
    ::uStrong< ::app::Uno::IO::Stream*> Backing;
};

}}}

#include <app/Uno.Bool.h>
#include <app/Uno.Int.h>
#include <app/Uno.Long.h>

namespace app {
namespace Experimental {
namespace Cache {

}}}


#endif
