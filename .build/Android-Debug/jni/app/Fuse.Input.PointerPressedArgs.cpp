// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Input.PointerEventData.h>
#include <app/Fuse.Input.PointerPressedArgs.h>
#include <app/Fuse.Node.h>

namespace app {
namespace Fuse {
namespace Input {

PointerPressedArgs__uType* PointerPressedArgs__typeof()
{
    static PointerPressedArgs__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (PointerPressedArgs__uType*)::uAllocClassType(sizeof(PointerPressedArgs__uType), "Fuse.Input.PointerPressedArgs", ::app::Fuse::Input::PointerEventArgs__typeof());
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void PointerPressedArgs___ObjInit_3(PointerPressedArgs* __this, ::app::Fuse::Input::PointerEventData* data, ::app::Fuse::Node* node)
{
    ::app::Fuse::Input::PointerEventArgs___ObjInit_2(__this, data, node);
}

PointerPressedArgs* PointerPressedArgs__New_3(::uStatic* __this, ::app::Fuse::Input::PointerEventData* data, ::app::Fuse::Node* node)
{
    PointerPressedArgs* inst = (::app::Fuse::Input::PointerPressedArgs*)::uAllocObject(sizeof(::app::Fuse::Input::PointerPressedArgs), ::app::Fuse::Input::PointerPressedArgs__typeof());
    inst->_ObjInit_3(data, node);
    return inst;
}

}}}
