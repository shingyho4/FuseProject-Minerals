// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Input.PointerEventData.h>
#include <app/Fuse.Input.PointerReleasedArgs.h>
#include <app/Fuse.Node.h>

namespace app {
namespace Fuse {
namespace Input {

PointerReleasedArgs__uType* PointerReleasedArgs__typeof()
{
    static PointerReleasedArgs__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (PointerReleasedArgs__uType*)::uAllocClassType(sizeof(PointerReleasedArgs__uType), "Fuse.Input.PointerReleasedArgs", ::app::Fuse::Input::PointerEventArgs__typeof());
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void PointerReleasedArgs___ObjInit_3(PointerReleasedArgs* __this, ::app::Fuse::Input::PointerEventData* data, ::app::Fuse::Node* node)
{
    ::app::Fuse::Input::PointerEventArgs___ObjInit_2(__this, data, node);
}

PointerReleasedArgs* PointerReleasedArgs__New_3(::uStatic* __this, ::app::Fuse::Input::PointerEventData* data, ::app::Fuse::Node* node)
{
    PointerReleasedArgs* inst = (::app::Fuse::Input::PointerReleasedArgs*)::uAllocObject(sizeof(::app::Fuse::Input::PointerReleasedArgs), ::app::Fuse::Input::PointerReleasedArgs__typeof());
    inst->_ObjInit_3(data, node);
    return inst;
}

}}}
