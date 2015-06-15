// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Input.Pointer_PELHolder.h>
#include <app/Fuse.Node.h>
#include <app/Uno.Int.h>

namespace app {
namespace Fuse {
namespace Input {

Pointer_PELHolder__uType* Pointer_PELHolder__typeof()
{
    static Pointer_PELHolder__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Pointer_PELHolder__uType*)::uAllocClassType(sizeof(Pointer_PELHolder__uType), "Fuse.Input.Pointer.PELHolder", ::uObject__typeof(), 0, 1);
        type->StrongRefOffsets[0] = offsetof(Pointer_PELHolder, Node);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "Node";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void Pointer_PELHolder___ObjInit(Pointer_PELHolder* __this)
{
}

Pointer_PELHolder* Pointer_PELHolder__New_1(::uStatic* __this)
{
    Pointer_PELHolder* inst = (::app::Fuse::Input::Pointer_PELHolder*)::uAllocObject(sizeof(::app::Fuse::Input::Pointer_PELHolder), ::app::Fuse::Input::Pointer_PELHolder__typeof());
    inst->_ObjInit();
    return inst;
}

}}}
