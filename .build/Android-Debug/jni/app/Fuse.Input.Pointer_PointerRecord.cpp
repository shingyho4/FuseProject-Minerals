// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Input.Pointer_PointerRecord.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Diagnostics.Clock.h>
#include <app/Uno.Double.h>
#include <app/Uno.Float.h>

namespace app {
namespace Fuse {
namespace Input {

Pointer_PointerRecord__uType* Pointer_PointerRecord__typeof()
{
    static Pointer_PointerRecord__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Pointer_PointerRecord__uType*)::uAllocClassType(sizeof(Pointer_PointerRecord__uType), "Fuse.Input.Pointer.PointerRecord", ::uObject__typeof());
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void Pointer_PointerRecord___ObjInit(Pointer_PointerRecord* __this)
{
    __this->TimeAppeared = ::app::Uno::Diagnostics::Clock__GetSeconds(NULL);
}

Pointer_PointerRecord* Pointer_PointerRecord__New_1(::uStatic* __this)
{
    Pointer_PointerRecord* inst = (::app::Fuse::Input::Pointer_PointerRecord*)::uAllocObject(sizeof(::app::Fuse::Input::Pointer_PointerRecord), ::app::Fuse::Input::Pointer_PointerRecord__typeof());
    inst->_ObjInit();
    return inst;
}

}}}
