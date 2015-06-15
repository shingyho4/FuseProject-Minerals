// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Input.PointerEventData.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Int.h>

namespace app {
namespace Fuse {
namespace Input {

PointerEventData__uType* PointerEventData__typeof()
{
    static PointerEventData__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (PointerEventData__uType*)::uAllocClassType(sizeof(PointerEventData__uType), "Fuse.Input.PointerEventData", ::uObject__typeof());
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void PointerEventData___ObjInit(PointerEventData* __this)
{
}

PointerEventData* PointerEventData__New_1(::uStatic* __this)
{
    PointerEventData* inst = (::app::Fuse::Input::PointerEventData*)::uAllocObject(sizeof(::app::Fuse::Input::PointerEventData), ::app::Fuse::Input::PointerEventData__typeof());
    inst->_ObjInit();
    return inst;
}

}}}
