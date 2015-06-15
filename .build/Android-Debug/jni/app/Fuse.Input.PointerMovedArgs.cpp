// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Input.PointerEventData.h>
#include <app/Fuse.Input.PointerMovedArgs.h>
#include <app/Fuse.Node.h>

namespace app {
namespace Fuse {
namespace Input {

PointerMovedArgs__uType* PointerMovedArgs__typeof()
{
    static PointerMovedArgs__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (PointerMovedArgs__uType*)::uAllocClassType(sizeof(PointerMovedArgs__uType), "Fuse.Input.PointerMovedArgs", ::app::Fuse::Input::PointerEventArgs__typeof());
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void PointerMovedArgs___ObjInit_3(PointerMovedArgs* __this, ::app::Fuse::Input::PointerEventData* data, ::app::Fuse::Node* node)
{
    ::app::Fuse::Input::PointerEventArgs___ObjInit_2(__this, data, node);
}

PointerMovedArgs* PointerMovedArgs__New_3(::uStatic* __this, ::app::Fuse::Input::PointerEventData* data, ::app::Fuse::Node* node)
{
    PointerMovedArgs* inst = (::app::Fuse::Input::PointerMovedArgs*)::uAllocObject(sizeof(::app::Fuse::Input::PointerMovedArgs), ::app::Fuse::Input::PointerMovedArgs__typeof());
    inst->_ObjInit_3(data, node);
    return inst;
}

}}}
