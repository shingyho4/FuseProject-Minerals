// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.EventArgs.h>

namespace app {
namespace Uno {

::uStaticStrong< EventArgs*> EventArgs__Empty;

EventArgs__uType* EventArgs__typeof()
{
    static EventArgs__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (EventArgs__uType*)::uAllocClassType(sizeof(EventArgs__uType), "Uno.EventArgs", ::uObject__typeof());
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void EventArgs___TypeInit(::uStatic* __this)
{
    EventArgs__Empty = EventArgs__New_1(NULL);
}

void EventArgs___ObjInit(EventArgs* __this)
{
}

EventArgs* EventArgs__New_1(::uStatic* __this)
{
    EventArgs* inst = (::app::Uno::EventArgs*)::uAllocObject(sizeof(::app::Uno::EventArgs), ::app::Uno::EventArgs__typeof());
    inst->_ObjInit();
    return inst;
}

}}
