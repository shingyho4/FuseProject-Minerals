// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_INPUT_EVENT__FUSE_INPUT_KEY_PRESSED_HANDLER__FUSE_INPUT_KEY_P_8B3D082C_H__
#define __APP_FUSE_INPUT_EVENT__FUSE_INPUT_KEY_PRESSED_HANDLER__FUSE_INPUT_KEY_P_8B3D082C_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Input { struct KeyPressedArgs; } } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Fuse { struct PropertyHandle; } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Input_KeyPressedHandler; } } }

namespace app {
namespace Fuse {
namespace Input {

struct Event__Fuse_Input_KeyPressedHandler__Fuse_Input_KeyPressedArgs;

struct Event__Fuse_Input_KeyPressedHandler__Fuse_Input_KeyPressedArgs__uType : ::uClassType
{
    void(*__fp_Invoke)(Event__Fuse_Input_KeyPressedHandler__Fuse_Input_KeyPressedArgs*, ::uDelegate*, ::uObject*, ::app::Fuse::Input::KeyPressedArgs*);
};

Event__Fuse_Input_KeyPressedHandler__Fuse_Input_KeyPressedArgs__uType* Event__Fuse_Input_KeyPressedHandler__Fuse_Input_KeyPressedArgs__typeof();

void Event__Fuse_Input_KeyPressedHandler__Fuse_Input_KeyPressedArgs__InvokeGlobalHandlers(Event__Fuse_Input_KeyPressedHandler__Fuse_Input_KeyPressedArgs* __this, ::app::Fuse::Node* node, ::app::Fuse::Input::KeyPressedArgs* args);
void Event__Fuse_Input_KeyPressedHandler__Fuse_Input_KeyPressedArgs__RaiseWithBubble(Event__Fuse_Input_KeyPressedHandler__Fuse_Input_KeyPressedArgs* __this, ::app::Fuse::Input::KeyPressedArgs* args, int type);
void Event__Fuse_Input_KeyPressedHandler__Fuse_Input_KeyPressedArgs__Raise(Event__Fuse_Input_KeyPressedHandler__Fuse_Input_KeyPressedArgs* __this, ::app::Fuse::Input::KeyPressedArgs* args, int type, bool bubble);
void Event__Fuse_Input_KeyPressedHandler__Fuse_Input_KeyPressedArgs__OnRaise(Event__Fuse_Input_KeyPressedHandler__Fuse_Input_KeyPressedArgs* __this, ::uObject* target, ::uArray* args);
void Event__Fuse_Input_KeyPressedHandler__Fuse_Input_KeyPressedArgs__OnRaiseEnabled(Event__Fuse_Input_KeyPressedHandler__Fuse_Input_KeyPressedArgs* __this, ::uObject* target, ::uArray* args);
void Event__Fuse_Input_KeyPressedHandler__Fuse_Input_KeyPressedArgs___ObjInit(Event__Fuse_Input_KeyPressedHandler__Fuse_Input_KeyPressedArgs* __this);

struct Event__Fuse_Input_KeyPressedHandler__Fuse_Input_KeyPressedArgs : ::uObject
{
    ::uStrong< ::app::Fuse::PropertyHandle*> _handle;
    ::uStrong< ::app::Uno::Collections::List__Fuse_Input_KeyPressedHandler*> _globalHandlers;

    void InvokeGlobalHandlers(::app::Fuse::Node* node, ::app::Fuse::Input::KeyPressedArgs* args) { Event__Fuse_Input_KeyPressedHandler__Fuse_Input_KeyPressedArgs__InvokeGlobalHandlers(this, node, args); }
    void RaiseWithBubble(::app::Fuse::Input::KeyPressedArgs* args, int type) { Event__Fuse_Input_KeyPressedHandler__Fuse_Input_KeyPressedArgs__RaiseWithBubble(this, args, type); }
    void Raise(::app::Fuse::Input::KeyPressedArgs* args, int type, bool bubble) { Event__Fuse_Input_KeyPressedHandler__Fuse_Input_KeyPressedArgs__Raise(this, args, type, bubble); }
    void OnRaise(::uObject* target, ::uArray* args) { Event__Fuse_Input_KeyPressedHandler__Fuse_Input_KeyPressedArgs__OnRaise(this, target, args); }
    void OnRaiseEnabled(::uObject* target, ::uArray* args) { Event__Fuse_Input_KeyPressedHandler__Fuse_Input_KeyPressedArgs__OnRaiseEnabled(this, target, args); }
    void Invoke(::uDelegate* handler, ::uObject* sender, ::app::Fuse::Input::KeyPressedArgs* args) { (((Event__Fuse_Input_KeyPressedHandler__Fuse_Input_KeyPressedArgs__uType*)this->__obj_type)->__fp_Invoke)(this, handler, sender, args); }
    void _ObjInit() { Event__Fuse_Input_KeyPressedHandler__Fuse_Input_KeyPressedArgs___ObjInit(this); }
};

}}}

#include <app/Uno.Bool.h>

namespace app {
namespace Fuse {
namespace Input {

}}}


#endif
