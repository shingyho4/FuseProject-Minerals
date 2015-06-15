// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_INPUT_EVENT__FUSE_INPUT_INPUT_EVENT_HANDLER__FUSE_INPUT_INPU_B68A4A8C_H__
#define __APP_FUSE_INPUT_EVENT__FUSE_INPUT_INPUT_EVENT_HANDLER__FUSE_INPUT_INPU_B68A4A8C_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Input { struct InputEventArgs; } } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Fuse { struct PropertyHandle; } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Input_InputEventHandler; } } }

namespace app {
namespace Fuse {
namespace Input {

struct Event__Fuse_Input_InputEventHandler__Fuse_Input_InputEventArgs;

struct Event__Fuse_Input_InputEventHandler__Fuse_Input_InputEventArgs__uType : ::uClassType
{
    void(*__fp_Invoke)(Event__Fuse_Input_InputEventHandler__Fuse_Input_InputEventArgs*, ::uDelegate*, ::uObject*, ::app::Fuse::Input::InputEventArgs*);
};

Event__Fuse_Input_InputEventHandler__Fuse_Input_InputEventArgs__uType* Event__Fuse_Input_InputEventHandler__Fuse_Input_InputEventArgs__typeof();

void Event__Fuse_Input_InputEventHandler__Fuse_Input_InputEventArgs__InvokeGlobalHandlers(Event__Fuse_Input_InputEventHandler__Fuse_Input_InputEventArgs* __this, ::app::Fuse::Node* node, ::app::Fuse::Input::InputEventArgs* args);
void Event__Fuse_Input_InputEventHandler__Fuse_Input_InputEventArgs__RaiseWithoutBubble(Event__Fuse_Input_InputEventHandler__Fuse_Input_InputEventArgs* __this, ::app::Fuse::Input::InputEventArgs* args, int type);
void Event__Fuse_Input_InputEventHandler__Fuse_Input_InputEventArgs__Raise(Event__Fuse_Input_InputEventHandler__Fuse_Input_InputEventArgs* __this, ::app::Fuse::Input::InputEventArgs* args, int type, bool bubble);
void Event__Fuse_Input_InputEventHandler__Fuse_Input_InputEventArgs__OnRaise(Event__Fuse_Input_InputEventHandler__Fuse_Input_InputEventArgs* __this, ::uObject* target, ::uArray* args);
void Event__Fuse_Input_InputEventHandler__Fuse_Input_InputEventArgs__OnRaiseEnabled(Event__Fuse_Input_InputEventHandler__Fuse_Input_InputEventArgs* __this, ::uObject* target, ::uArray* args);
void Event__Fuse_Input_InputEventHandler__Fuse_Input_InputEventArgs___ObjInit(Event__Fuse_Input_InputEventHandler__Fuse_Input_InputEventArgs* __this);

struct Event__Fuse_Input_InputEventHandler__Fuse_Input_InputEventArgs : ::uObject
{
    ::uStrong< ::app::Fuse::PropertyHandle*> _handle;
    ::uStrong< ::app::Uno::Collections::List__Fuse_Input_InputEventHandler*> _globalHandlers;

    void InvokeGlobalHandlers(::app::Fuse::Node* node, ::app::Fuse::Input::InputEventArgs* args) { Event__Fuse_Input_InputEventHandler__Fuse_Input_InputEventArgs__InvokeGlobalHandlers(this, node, args); }
    void RaiseWithoutBubble(::app::Fuse::Input::InputEventArgs* args, int type) { Event__Fuse_Input_InputEventHandler__Fuse_Input_InputEventArgs__RaiseWithoutBubble(this, args, type); }
    void Raise(::app::Fuse::Input::InputEventArgs* args, int type, bool bubble) { Event__Fuse_Input_InputEventHandler__Fuse_Input_InputEventArgs__Raise(this, args, type, bubble); }
    void OnRaise(::uObject* target, ::uArray* args) { Event__Fuse_Input_InputEventHandler__Fuse_Input_InputEventArgs__OnRaise(this, target, args); }
    void OnRaiseEnabled(::uObject* target, ::uArray* args) { Event__Fuse_Input_InputEventHandler__Fuse_Input_InputEventArgs__OnRaiseEnabled(this, target, args); }
    void Invoke(::uDelegate* handler, ::uObject* sender, ::app::Fuse::Input::InputEventArgs* args) { (((Event__Fuse_Input_InputEventHandler__Fuse_Input_InputEventArgs__uType*)this->__obj_type)->__fp_Invoke)(this, handler, sender, args); }
    void _ObjInit() { Event__Fuse_Input_InputEventHandler__Fuse_Input_InputEventArgs___ObjInit(this); }
};

}}}

#include <app/Uno.Bool.h>

namespace app {
namespace Fuse {
namespace Input {

}}}


#endif
