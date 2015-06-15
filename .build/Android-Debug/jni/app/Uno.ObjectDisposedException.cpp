// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Exceptions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.ObjectDisposedException.h>
#include <app/Uno.String.h>

namespace app {
namespace Uno {

ObjectDisposedException__uType* ObjectDisposedException__typeof()
{
    static ObjectDisposedException__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (ObjectDisposedException__uType*)::uAllocClassType(sizeof(ObjectDisposedException__uType), "Uno.ObjectDisposedException", ::app::Uno::Exception__typeof());
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void ObjectDisposedException___ObjInit_2(ObjectDisposedException* __this, ::uString* objectName)
{
    ::app::Uno::Exception___ObjInit(__this, ::app::Uno::String__op_Addition(NULL, ::uGetConstString("Attempt to access disposed object: "), objectName));
}

ObjectDisposedException* ObjectDisposedException__New_3(::uStatic* __this, ::uString* objectName)
{
    ObjectDisposedException* inst = (::app::Uno::ObjectDisposedException*)::uAllocObject(sizeof(::app::Uno::ObjectDisposedException), ::app::Uno::ObjectDisposedException__typeof());
    inst->_ObjInit_2(objectName);
    return inst;
}

}}
