// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Input.InputEvent.h>
#include <app/Fuse.Input.InputEventArgs.h>
#include <app/Fuse.Input.InputEventHandler.h>
#include <app/Uno.Object.h>

namespace app {
namespace Fuse {
namespace Input {

InputEvent__uType* InputEvent__typeof()
{
    static InputEvent__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (InputEvent__uType*)::uAllocClassType(sizeof(InputEvent__uType), "Fuse.Input.InputEvent", ::app::Fuse::Input::Event__Fuse_Input_InputEventHandler__Fuse_Input_InputEventArgs__typeof());
        type->__fp_Invoke = (void(*)(::app::Fuse::Input::Event__Fuse_Input_InputEventHandler__Fuse_Input_InputEventArgs*, ::uDelegate*, ::uObject*, ::app::Fuse::Input::InputEventArgs*))InputEvent__Invoke;
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void InputEvent__Invoke(InputEvent* __this, ::uDelegate* handler, ::uObject* sender, ::app::Fuse::Input::InputEventArgs* args)
{
    ::uPtr< ::uDelegate*>(handler)->InvokeVoid< ::uObject*, ::app::Fuse::Input::InputEventArgs*>(sender, args);
}

void InputEvent___ObjInit_1(InputEvent* __this)
{
    ::app::Fuse::Input::Event__Fuse_Input_InputEventHandler__Fuse_Input_InputEventArgs___ObjInit(__this);
}

InputEvent* InputEvent__New_1(::uStatic* __this)
{
    InputEvent* inst = (::app::Fuse::Input::InputEvent*)::uAllocObject(sizeof(::app::Fuse::Input::InputEvent), ::app::Fuse::Input::InputEvent__typeof());
    inst->_ObjInit_1();
    return inst;
}

}}}
