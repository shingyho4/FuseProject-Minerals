// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Input.FocusLostArgs.h>
#include <app/Fuse.Node.h>

namespace app {
namespace Fuse {
namespace Input {

FocusLostArgs__uType* FocusLostArgs__typeof()
{
    static FocusLostArgs__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (FocusLostArgs__uType*)::uAllocClassType(sizeof(FocusLostArgs__uType), "Fuse.Input.FocusLostArgs", ::app::Fuse::Input::InputEventArgs__typeof());
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void FocusLostArgs___ObjInit_2(FocusLostArgs* __this, ::app::Fuse::Node* node)
{
    ::app::Fuse::Input::InputEventArgs___ObjInit_1(__this, node);
}

FocusLostArgs* FocusLostArgs__New_3(::uStatic* __this, ::app::Fuse::Node* node)
{
    FocusLostArgs* inst = (::app::Fuse::Input::FocusLostArgs*)::uAllocObject(sizeof(::app::Fuse::Input::FocusLostArgs), ::app::Fuse::Input::FocusLostArgs__typeof());
    inst->_ObjInit_2(node);
    return inst;
}

}}}
