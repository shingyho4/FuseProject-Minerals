// This file was generated based on 'C:\ProgramData\Uno\Packages\Experimental.Net.Http\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Experimental.Net.Http.HttpMethodStringConverter.h>
#include <app/Uno.Int.h>
#include <app/Uno.String.h>

namespace app {
namespace Experimental {
namespace Net {
namespace Http {

::uStaticStrong< ::uArray*> HttpMethodStringConverter__StringMethods;

HttpMethodStringConverter__uType* HttpMethodStringConverter__typeof()
{
    static HttpMethodStringConverter__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (HttpMethodStringConverter__uType*)::uAllocClassType(sizeof(HttpMethodStringConverter__uType), "Experimental.Net.Http.HttpMethodStringConverter");
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void HttpMethodStringConverter___TypeInit(::uStatic* __this)
{
    ::uArray* array_123;
    HttpMethodStringConverter__StringMethods = (array_123 = ::uNewArray(::app::Uno::String__typeof(), 9), ::uPtr< ::uArray*>(array_123)->ItemStrong< ::uString*>(0) = ::uGetConstString("GET"), ::uPtr< ::uArray*>(array_123)->ItemStrong< ::uString*>(1) = ::uGetConstString("POST"), ::uPtr< ::uArray*>(array_123)->ItemStrong< ::uString*>(2) = ::uGetConstString("PUT"), ::uPtr< ::uArray*>(array_123)->ItemStrong< ::uString*>(3) = ::uGetConstString("DELETE"), ::uPtr< ::uArray*>(array_123)->ItemStrong< ::uString*>(4) = ::uGetConstString("OPTIONS"), ::uPtr< ::uArray*>(array_123)->ItemStrong< ::uString*>(5) = ::uGetConstString("HEAD"), ::uPtr< ::uArray*>(array_123)->ItemStrong< ::uString*>(6) = ::uGetConstString("TRACE"), ::uPtr< ::uArray*>(array_123)->ItemStrong< ::uString*>(7) = ::uGetConstString("CONNECT"), ::uPtr< ::uArray*>(array_123)->ItemStrong< ::uString*>(8) = ::uGetConstString("PATCH"), array_123);
}

}}}}
