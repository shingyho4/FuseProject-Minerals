// This file was generated based on 'C:\ProgramData\Uno\Packages\Experimental.Net.Http\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Experimental.Net.Http.ObjectDisposedException.h>
#include <app/Uno.Bool.h>
#include <app/Uno.String.h>

namespace app {
namespace Experimental {
namespace Net {
namespace Http {

ObjectDisposedException__uType* ObjectDisposedException__typeof()
{
    static ObjectDisposedException__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (ObjectDisposedException__uType*)::uAllocClassType(sizeof(ObjectDisposedException__uType), "Experimental.Net.Http.ObjectDisposedException", ::app::Uno::Exception__typeof());
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void ObjectDisposedException___ObjInit_3(ObjectDisposedException* __this, ::uString* objectname)
{
    ::app::Uno::Exception___ObjInit(__this, (::app::Uno::String__op_Inequality(NULL, ::app::Uno::String__op_Addition(NULL, ::uGetConstString("Cannot access a disposed object."), objectname), NULL) && ::app::Uno::String__op_Inequality(NULL, objectname, ::uGetConstString(""))) ? ::app::Uno::String__op_Addition(NULL, ::uGetConstString("Object name: "), objectname) : ::uGetConstString(""));
}

ObjectDisposedException* ObjectDisposedException__New_4(::uStatic* __this, ::uString* objectname)
{
    ObjectDisposedException* inst = (::app::Experimental::Net::Http::ObjectDisposedException*)::uAllocObject(sizeof(::app::Experimental::Net::Http::ObjectDisposedException), ::app::Experimental::Net::Http::ObjectDisposedException__typeof());
    inst->_ObjInit_3(objectname);
    return inst;
}

}}}}
