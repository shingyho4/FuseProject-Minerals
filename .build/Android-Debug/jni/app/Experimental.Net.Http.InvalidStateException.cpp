// This file was generated based on 'C:\ProgramData\Uno\Packages\Experimental.Net.Http\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Experimental.Net.Http.InvalidStateException.h>
#include <app/Uno.String.h>

namespace app {
namespace Experimental {
namespace Net {
namespace Http {

InvalidStateException__uType* InvalidStateException__typeof()
{
    static InvalidStateException__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (InvalidStateException__uType*)::uAllocClassType(sizeof(InvalidStateException__uType), "Experimental.Net.Http.InvalidStateException", ::app::Uno::Exception__typeof());
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void InvalidStateException___ObjInit_2(InvalidStateException* __this)
{
    ::app::Uno::Exception___ObjInit(__this, ::uGetConstString("The object is in an invalid state."));
}

InvalidStateException* InvalidStateException__New_3(::uStatic* __this)
{
    InvalidStateException* inst = (::app::Experimental::Net::Http::InvalidStateException*)::uAllocObject(sizeof(::app::Experimental::Net::Http::InvalidStateException), ::app::Experimental::Net::Http::InvalidStateException__typeof());
    inst->_ObjInit_2();
    return inst;
}

void InvalidStateException___ObjInit_3(InvalidStateException* __this, ::uString* message)
{
    ::app::Uno::Exception___ObjInit(__this, message);
}

InvalidStateException* InvalidStateException__New_4(::uStatic* __this, ::uString* message)
{
    InvalidStateException* inst = (::app::Experimental::Net::Http::InvalidStateException*)::uAllocObject(sizeof(::app::Experimental::Net::Http::InvalidStateException), ::app::Experimental::Net::Http::InvalidStateException__typeof());
    inst->_ObjInit_3(message);
    return inst;
}

}}}}
