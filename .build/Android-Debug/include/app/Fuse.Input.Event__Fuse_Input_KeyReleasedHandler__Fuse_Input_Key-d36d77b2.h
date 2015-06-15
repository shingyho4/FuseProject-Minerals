// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_INPUT_EVENT__FUSE_INPUT_KEY_RELEASED_HANDLER__FUSE_INPUT_KEY_D36D77B2_H__
#define __APP_FUSE_INPUT_EVENT__FUSE_INPUT_KEY_RELEASED_HANDLER__FUSE_INPUT_KEY_D36D77B2_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Input { struct KeyReleasedArgs; } } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Fuse { struct PropertyHandle; } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Input_KeyReleasedHandler; } } }

namespace app {
namespace Fuse {
namespace Input {

struct Event__Fuse_Input_KeyReleasedHandler__Fuse_Input_KeyReleasedArgs;

struct Event__Fuse_Input_KeyReleasedHandler__Fuse_Input_KeyReleasedArgs__uType : ::uClassType
{
    void(*__fp_Invoke)(Event__Fuse_Input_KeyReleasedHandler__Fuse_Input_KeyReleasedArgs*, ::uDelegate*, ::uObject*, ::app::Fuse::Input::KeyReleasedArgs*);
};

Event__Fuse_Input_KeyReleasedHandler__Fuse_Input_KeyReleasedArgs__uType* Event__Fuse_Input_KeyReleasedHandler__Fuse_Input_KeyReleasedArgs__typeof();

void Event__Fuse_Input_KeyReleasedHandler__Fuse_Input_KeyReleasedArgs__InvokeGlobalHandlers(Event__Fuse_Input_KeyReleasedHandler__Fuse_Input_KeyReleasedArgs* __this, ::app::Fuse::Node* node, ::app::Fuse::Input::KeyReleasedArgs* args);
void Event__Fuse_Input_KeyReleasedHandler__Fuse_Input_KeyReleasedArgs__RaiseWithBubble(Event__Fuse_Input_KeyReleasedHandler__Fuse_Input_KeyReleasedArgs* __this, ::app::Fuse::Input::KeyReleasedArgs* args, int type);
void Event__Fuse_Input_KeyReleasedHandler__Fuse_Input_KeyReleasedArgs__Raise(Event__Fuse_Input_KeyReleasedHandler__Fuse_Input_KeyReleasedArgs* __this, ::app::Fuse::Input::KeyReleasedArgs* args, int type, bool bubble);
void Event__Fuse_Input_KeyReleasedHandler__Fuse_Input_KeyReleasedArgs__OnRaise(Event__Fuse_Input_KeyReleasedHandler__Fuse_Input_KeyReleasedArgs* __this, ::uObject* target, ::uArray* args);
void Event__Fuse_Input_KeyReleasedHandler__Fuse_Input_KeyReleasedArgs__OnRaiseEnabled(Event__Fuse_Input_KeyReleasedHandler__Fuse_Input_KeyReleasedArgs* __this, ::uObject* target, ::uArray* args);
void Event__Fuse_Input_KeyReleasedHandler__Fuse_Input_KeyReleasedArgs___ObjInit(Event__Fuse_Input_KeyReleasedHandler__Fuse_Input_KeyReleasedArgs* __this);

struct Event__Fuse_Input_KeyReleasedHandler__Fuse_Input_KeyReleasedArgs : ::uObject
{
    ::uStrong< ::app::Fuse::PropertyHandle*> _handle;
    ::uStrong< ::app::Uno::Collections::List__Fuse_Input_KeyReleasedHandler*> _globalHandlers;

    void InvokeGlobalHandlers(::app::Fuse::Node* node, ::app::Fuse::Input::KeyReleasedArgs* args) { Event__Fuse_Input_KeyReleasedHandler__Fuse_Input_KeyReleasedArgs__InvokeGlobalHandlers(this, node, args); }
    void RaiseWithBubble(::app::Fuse::Input::KeyReleasedArgs* args, int type) { Event__Fuse_Input_KeyReleasedHandler__Fuse_Input_KeyReleasedArgs__RaiseWithBubble(this, args, type); }
    void Raise(::app::Fuse::Input::KeyReleasedArgs* args, int type, bool bubble) { Event__Fuse_Input_KeyReleasedHandler__Fuse_Input_KeyReleasedArgs__Raise(this, args, type, bubble); }
    void OnRaise(::uObject* target, ::uArray* args) { Event__Fuse_Input_KeyReleasedHandler__Fuse_Input_KeyReleasedArgs__OnRaise(this, target, args); }
    void OnRaiseEnabled(::uObject* target, ::uArray* args) { Event__Fuse_Input_KeyReleasedHandler__Fuse_Input_KeyReleasedArgs__OnRaiseEnabled(this, target, args); }
    void Invoke(::uDelegate* handler, ::uObject* sender, ::app::Fuse::Input::KeyReleasedArgs* args) { (((Event__Fuse_Input_KeyReleasedHandler__Fuse_Input_KeyReleasedArgs__uType*)this->__obj_type)->__fp_Invoke)(this, handler, sender, args); }
    void _ObjInit() { Event__Fuse_Input_KeyReleasedHandler__Fuse_Input_KeyReleasedArgs___ObjInit(this); }
};

}}}

#include <app/Uno.Bool.h>

namespace app {
namespace Fuse {
namespace Input {

}}}


#endif
