// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Input.PointerEventData.h>
#include <app/Fuse.Input.PointerLeftArgs.h>
#include <app/Fuse.Node.h>

namespace app {
namespace Fuse {
namespace Input {

PointerLeftArgs__uType* PointerLeftArgs__typeof()
{
    static PointerLeftArgs__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (PointerLeftArgs__uType*)::uAllocClassType(sizeof(PointerLeftArgs__uType), "Fuse.Input.PointerLeftArgs", ::app::Fuse::Input::PointerEventArgs__typeof());
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void PointerLeftArgs___ObjInit_3(PointerLeftArgs* __this, ::app::Fuse::Input::PointerEventData* data, ::app::Fuse::Node* node)
{
    ::app::Fuse::Input::PointerEventArgs___ObjInit_2(__this, data, node);
}

PointerLeftArgs* PointerLeftArgs__New_3(::uStatic* __this, ::app::Fuse::Input::PointerEventData* data, ::app::Fuse::Node* node)
{
    PointerLeftArgs* inst = (::app::Fuse::Input::PointerLeftArgs*)::uAllocObject(sizeof(::app::Fuse::Input::PointerLeftArgs), ::app::Fuse::Input::PointerLeftArgs__typeof());
    inst->_ObjInit_3(data, node);
    return inst;
}

}}}
