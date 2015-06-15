// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_INPUT_INPUT_EVENT_ARGS_H__
#define __APP_FUSE_INPUT_INPUT_EVENT_ARGS_H__

#include <app/Uno.EventArgs.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Input {

struct InputEventArgs;

struct InputEventArgs__uType : ::app::Uno::EventArgs__uType
{
};

InputEventArgs__uType* InputEventArgs__typeof();

bool InputEventArgs__get_IsHandled(InputEventArgs* __this);
void InputEventArgs__set_IsHandled(InputEventArgs* __this, bool value);
::app::Fuse::Node* InputEventArgs__get_Node(InputEventArgs* __this);
void InputEventArgs__set_Node(InputEventArgs* __this, ::app::Fuse::Node* value);
void InputEventArgs___ObjInit_1(InputEventArgs* __this, ::app::Fuse::Node* node);
InputEventArgs* InputEventArgs__New_2(::uStatic* __this, ::app::Fuse::Node* node);

struct InputEventArgs : ::app::Uno::EventArgs
{
    bool _IsHandled;
    ::uStrong< ::app::Fuse::Node*> _Node;

    void _ObjInit_1(::app::Fuse::Node* node) { InputEventArgs___ObjInit_1(this, node); }
    bool IsHandled() { return InputEventArgs__get_IsHandled(this); }
    void IsHandled(bool value) { InputEventArgs__set_IsHandled(this, value); }
    ::app::Fuse::Node* Node() { return InputEventArgs__get_Node(this); }
    void Node(::app::Fuse::Node* value) { InputEventArgs__set_Node(this, value); }
};

}}}

#include <app/Uno.Bool.h>

namespace app {
namespace Fuse {
namespace Input {

}}}


#endif
