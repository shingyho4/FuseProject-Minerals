// This file was generated based on 'C:\ProgramData\Uno\Packages\Experimental.Net.Http\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Experimental.Net.Http.InvalidResponseTypeException.h>
#include <app/Uno.String.h>

namespace app {
namespace Experimental {
namespace Net {
namespace Http {

InvalidResponseTypeException__uType* InvalidResponseTypeException__typeof()
{
    static InvalidResponseTypeException__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (InvalidResponseTypeException__uType*)::uAllocClassType(sizeof(InvalidResponseTypeException__uType), "Experimental.Net.Http.InvalidResponseTypeException", ::app::Uno::Exception__typeof());
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void InvalidResponseTypeException___ObjInit_2(InvalidResponseTypeException* __this)
{
    ::app::Uno::Exception___ObjInit(__this, ::uGetConstString("Response type is invalid."));
}

InvalidResponseTypeException* InvalidResponseTypeException__New_3(::uStatic* __this)
{
    InvalidResponseTypeException* inst = (::app::Experimental::Net::Http::InvalidResponseTypeException*)::uAllocObject(sizeof(::app::Experimental::Net::Http::InvalidResponseTypeException), ::app::Experimental::Net::Http::InvalidResponseTypeException__typeof());
    inst->_ObjInit_2();
    return inst;
}

}}}}
