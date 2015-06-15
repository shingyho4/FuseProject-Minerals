// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Input.CustomPointerEventArgs.h>
#include <app/Fuse.Input.PointerEventData.h>
#include <app/Fuse.Node.h>

namespace app {
namespace Fuse {
namespace Input {

CustomPointerEventArgs__uType* CustomPointerEventArgs__typeof()
{
    static CustomPointerEventArgs__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (CustomPointerEventArgs__uType*)::uAllocClassType(sizeof(CustomPointerEventArgs__uType), "Fuse.Input.CustomPointerEventArgs", ::app::Fuse::Input::PointerEventArgs__typeof());
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void CustomPointerEventArgs___ObjInit_3(CustomPointerEventArgs* __this, ::app::Fuse::Input::PointerEventArgs* args, ::app::Fuse::Node* node)
{
    ::app::Fuse::Input::PointerEventArgs___ObjInit_2(__this, ::uPtr< ::app::Fuse::Input::PointerEventArgs*>(args)->Data(), node);
}

}}}
