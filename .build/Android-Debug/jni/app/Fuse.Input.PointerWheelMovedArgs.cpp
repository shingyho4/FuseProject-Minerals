// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Input.PointerEventData.h>
#include <app/Fuse.Input.PointerWheelMovedArgs.h>
#include <app/Fuse.Node.h>

namespace app {
namespace Fuse {
namespace Input {

PointerWheelMovedArgs__uType* PointerWheelMovedArgs__typeof()
{
    static PointerWheelMovedArgs__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (PointerWheelMovedArgs__uType*)::uAllocClassType(sizeof(PointerWheelMovedArgs__uType), "Fuse.Input.PointerWheelMovedArgs", ::app::Fuse::Input::PointerEventArgs__typeof());
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void PointerWheelMovedArgs___ObjInit_3(PointerWheelMovedArgs* __this, ::app::Fuse::Input::PointerEventData* data, ::app::Fuse::Node* node)
{
    ::app::Fuse::Input::PointerEventArgs___ObjInit_2(__this, data, node);
}

PointerWheelMovedArgs* PointerWheelMovedArgs__New_3(::uStatic* __this, ::app::Fuse::Input::PointerEventData* data, ::app::Fuse::Node* node)
{
    PointerWheelMovedArgs* inst = (::app::Fuse::Input::PointerWheelMovedArgs*)::uAllocObject(sizeof(::app::Fuse::Input::PointerWheelMovedArgs), ::app::Fuse::Input::PointerWheelMovedArgs__typeof());
    inst->_ObjInit_3(data, node);
    return inst;
}

}}}
