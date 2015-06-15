// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Input.FocusGainedArgs.h>
#include <app/Fuse.Node.h>

namespace app {
namespace Fuse {
namespace Input {

FocusGainedArgs__uType* FocusGainedArgs__typeof()
{
    static FocusGainedArgs__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (FocusGainedArgs__uType*)::uAllocClassType(sizeof(FocusGainedArgs__uType), "Fuse.Input.FocusGainedArgs", ::app::Fuse::Input::InputEventArgs__typeof());
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void FocusGainedArgs___ObjInit_2(FocusGainedArgs* __this, ::app::Fuse::Node* node)
{
    ::app::Fuse::Input::InputEventArgs___ObjInit_1(__this, node);
}

FocusGainedArgs* FocusGainedArgs__New_3(::uStatic* __this, ::app::Fuse::Node* node)
{
    FocusGainedArgs* inst = (::app::Fuse::Input::FocusGainedArgs*)::uAllocObject(sizeof(::app::Fuse::Input::FocusGainedArgs), ::app::Fuse::Input::FocusGainedArgs__typeof());
    inst->_ObjInit_2(node);
    return inst;
}

}}}
