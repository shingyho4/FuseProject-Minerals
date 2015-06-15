// This file was generated based on 'C:\ProgramData\Uno\Packages\Experimental.Net.Http\0.1.0\Implementation\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Experimental.Net.Http.Implementation.HttpRequestEventArgs.h>
#include <app/Experimental.Net.Http.Implementation.HttpRequestHandle.h>

namespace app {
namespace Experimental {
namespace Net {
namespace Http {
namespace Implementation {

HttpRequestEventArgs__uType* HttpRequestEventArgs__typeof()
{
    static HttpRequestEventArgs__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (HttpRequestEventArgs__uType*)::uAllocValueType(sizeof(HttpRequestEventArgs__uType), "Experimental.Net.Http.Implementation.HttpRequestEventArgs", sizeof(HttpRequestEventArgs));
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void HttpRequestEventArgs___ObjInit(HttpRequestEventArgs* __this, void* handle)
{
    __this->Handle = handle;
}

HttpRequestEventArgs HttpRequestEventArgs__New_1(::uStatic* __this, void* handle)
{
    HttpRequestEventArgs inst = ::uDefault< HttpRequestEventArgs>();
    inst._ObjInit(handle);
    return inst;
}

}}}}}
