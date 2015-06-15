// This file was generated based on 'C:\ProgramData\Uno\Packages\Experimental.Http\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_EXPERIMENTAL_HTTP_HTTP_LOADER_H__
#define __APP_EXPERIMENTAL_HTTP_HTTP_LOADER_H__

#include <Uno/Uno.h>

namespace app {
namespace Experimental {
namespace Http {

extern ::uStaticStrong< ::uObject*> HttpLoader___cache;
extern int HttpLoader___maxAge;

struct HttpLoader__uType : ::uClassType
{
};

HttpLoader__uType* HttpLoader__typeof();

int HttpLoader__get_CacheMaxAge(::uStatic* __this);
void HttpLoader__set_CacheMaxAge(::uStatic* __this, int value);
void HttpLoader__Discard(::uStatic* __this, ::uString* requestUri);
void HttpLoader__LoadBinary(::uStatic* __this, ::uString* requestUri, ::uDelegate* callback, ::uDelegate* error);
void HttpLoader___TypeInit(::uStatic* __this);

}}}


#endif
