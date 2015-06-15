// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Input.InputEventArgs.h>
#include <app/Fuse.Node.h>

namespace app {
namespace Fuse {
namespace Input {

InputEventArgs__uType* InputEventArgs__typeof()
{
    static InputEventArgs__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (InputEventArgs__uType*)::uAllocClassType(sizeof(InputEventArgs__uType), "Fuse.Input.InputEventArgs", ::app::Uno::EventArgs__typeof(), 0, 1);
        type->StrongRefOffsets[0] = offsetof(InputEventArgs, _Node);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_Node";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

bool InputEventArgs__get_IsHandled(InputEventArgs* __this)
{
    return __this->_IsHandled;
}

void InputEventArgs__set_IsHandled(InputEventArgs* __this, bool value)
{
    __this->_IsHandled = value;
}

::app::Fuse::Node* InputEventArgs__get_Node(InputEventArgs* __this)
{
    return __this->_Node;
}

void InputEventArgs__set_Node(InputEventArgs* __this, ::app::Fuse::Node* value)
{
    __this->_Node = value;
}

void InputEventArgs___ObjInit_1(InputEventArgs* __this, ::app::Fuse::Node* node)
{
    ::app::Uno::EventArgs___ObjInit(__this);
    __this->Node(node);
}

InputEventArgs* InputEventArgs__New_2(::uStatic* __this, ::app::Fuse::Node* node)
{
    InputEventArgs* inst = (::app::Fuse::Input::InputEventArgs*)::uAllocObject(sizeof(::app::Fuse::Input::InputEventArgs), ::app::Fuse::Input::InputEventArgs__typeof());
    inst->_ObjInit_1(node);
    return inst;
}

}}}
