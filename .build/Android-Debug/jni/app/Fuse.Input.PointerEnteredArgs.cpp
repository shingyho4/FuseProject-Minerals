// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Input.PointerEnteredArgs.h>
#include <app/Fuse.Input.PointerEventData.h>
#include <app/Fuse.Node.h>

namespace app {
namespace Fuse {
namespace Input {

PointerEnteredArgs__uType* PointerEnteredArgs__typeof()
{
    static PointerEnteredArgs__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (PointerEnteredArgs__uType*)::uAllocClassType(sizeof(PointerEnteredArgs__uType), "Fuse.Input.PointerEnteredArgs", ::app::Fuse::Input::PointerEventArgs__typeof());
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void PointerEnteredArgs___ObjInit_3(PointerEnteredArgs* __this, ::app::Fuse::Input::PointerEventData* data, ::app::Fuse::Node* node)
{
    ::app::Fuse::Input::PointerEventArgs___ObjInit_2(__this, data, node);
}

PointerEnteredArgs* PointerEnteredArgs__New_3(::uStatic* __this, ::app::Fuse::Input::PointerEventData* data, ::app::Fuse::Node* node)
{
    PointerEnteredArgs* inst = (::app::Fuse::Input::PointerEnteredArgs*)::uAllocObject(sizeof(::app::Fuse::Input::PointerEnteredArgs), ::app::Fuse::Input::PointerEnteredArgs__typeof());
    inst->_ObjInit_3(data, node);
    return inst;
}

}}}
