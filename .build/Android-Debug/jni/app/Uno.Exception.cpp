// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Exceptions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Exception.h>
#include <app/Uno.String.h>

namespace app {
namespace Uno {

Exception__uType* Exception__typeof()
{
    static Exception__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Exception__uType*)::uAllocClassType(sizeof(Exception__uType), "Uno.Exception", ::uObject__typeof(), 0, 1);
        type->__fp_ToString = (::uString*(*)(::uObject*))Exception__ToString;

        type->StrongRefOffsets[0] = offsetof(Exception, _message);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_message";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::uString* Exception__get_Message(Exception* __this)
{
    return __this->_message;
}

::uString* Exception__ToString(Exception* __this)
{
    return __this->_message;
}

void Exception___ObjInit(Exception* __this, ::uString* message)
{
    __this->_message = message;
}

Exception* Exception__New_1(::uStatic* __this, ::uString* message)
{
    Exception* inst = (::app::Uno::Exception*)::uAllocObject(sizeof(::app::Uno::Exception), ::app::Uno::Exception__typeof());
    inst->_ObjInit(message);
    return inst;
}

void Exception___ObjInit_1(Exception* __this)
{
    __this->_message = ::uGetConstString("");
}

Exception* Exception__New_2(::uStatic* __this)
{
    Exception* inst = (::app::Uno::Exception*)::uAllocObject(sizeof(::app::Uno::Exception), ::app::Uno::Exception__typeof());
    inst->_ObjInit_1();
    return inst;
}

}}
