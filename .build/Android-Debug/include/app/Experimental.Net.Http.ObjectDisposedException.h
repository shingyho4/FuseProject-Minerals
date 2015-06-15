// This file was generated based on 'C:\ProgramData\Uno\Packages\Experimental.Net.Http\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_EXPERIMENTAL_NET_HTTP_OBJECT_DISPOSED_EXCEPTION_H__
#define __APP_EXPERIMENTAL_NET_HTTP_OBJECT_DISPOSED_EXCEPTION_H__

#include <app/Uno.Exception.h>
#include <Uno/Uno.h>

namespace app {
namespace Experimental {
namespace Net {
namespace Http {

struct ObjectDisposedException;

struct ObjectDisposedException__uType : ::app::Uno::Exception__uType
{
};

ObjectDisposedException__uType* ObjectDisposedException__typeof();

void ObjectDisposedException___ObjInit_3(ObjectDisposedException* __this, ::uString* objectname);
ObjectDisposedException* ObjectDisposedException__New_4(::uStatic* __this, ::uString* objectname);

struct ObjectDisposedException : ::app::Uno::Exception
{
    void _ObjInit_3(::uString* objectname) { ObjectDisposedException___ObjInit_3(this, objectname); }
};

}}}}


#endif
