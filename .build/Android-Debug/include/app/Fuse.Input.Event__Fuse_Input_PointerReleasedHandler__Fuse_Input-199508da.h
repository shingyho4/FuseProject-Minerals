// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_INPUT_EVENT__FUSE_INPUT_POINTER_RELEASED_HANDLER__FUSE_INPUT_199508DA_H__
#define __APP_FUSE_INPUT_EVENT__FUSE_INPUT_POINTER_RELEASED_HANDLER__FUSE_INPUT_199508DA_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Input { struct PointerReleasedArgs; } } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Fuse { struct PropertyHandle; } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Input_PointerReleasedHandler; } } }

namespace app {
namespace Fuse {
namespace Input {

struct Event__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs;

struct Event__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs__uType : ::uClassType
{
    void(*__fp_Invoke)(Event__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs*, ::uDelegate*, ::uObject*, ::app::Fuse::Input::PointerReleasedArgs*);
};

Event__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs__uType* Event__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs__typeof();

void Event__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs__AddHandler(Event__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs* __this, ::app::Fuse::Node* node, ::uDelegate* handler);
void Event__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs__RemoveHandler(Event__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs* __this, ::app::Fuse::Node* node, ::uDelegate* handler);
void Event__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs__InvokeGlobalHandlers(Event__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs* __this, ::app::Fuse::Node* node, ::app::Fuse::Input::PointerReleasedArgs* args);
void Event__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs__RaiseWithBubble(Event__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs* __this, ::app::Fuse::Input::PointerReleasedArgs* args, int type);
void Event__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs__Raise(Event__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs* __this, ::app::Fuse::Input::PointerReleasedArgs* args, int type, bool bubble);
void Event__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs__OnRaise(Event__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs* __this, ::uObject* target, ::uArray* args);
void Event__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs__OnRaiseEnabled(Event__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs* __this, ::uObject* target, ::uArray* args);
void Event__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs___ObjInit(Event__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs* __this);

struct Event__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs : ::uObject
{
    ::uStrong< ::app::Fuse::PropertyHandle*> _handle;
    ::uStrong< ::app::Uno::Collections::List__Fuse_Input_PointerReleasedHandler*> _globalHandlers;

    void AddHandler(::app::Fuse::Node* node, ::uDelegate* handler) { Event__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs__AddHandler(this, node, handler); }
    void RemoveHandler(::app::Fuse::Node* node, ::uDelegate* handler) { Event__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs__RemoveHandler(this, node, handler); }
    void InvokeGlobalHandlers(::app::Fuse::Node* node, ::app::Fuse::Input::PointerReleasedArgs* args) { Event__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs__InvokeGlobalHandlers(this, node, args); }
    void RaiseWithBubble(::app::Fuse::Input::PointerReleasedArgs* args, int type) { Event__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs__RaiseWithBubble(this, args, type); }
    void Raise(::app::Fuse::Input::PointerReleasedArgs* args, int type, bool bubble) { Event__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs__Raise(this, args, type, bubble); }
    void OnRaise(::uObject* target, ::uArray* args) { Event__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs__OnRaise(this, target, args); }
    void OnRaiseEnabled(::uObject* target, ::uArray* args) { Event__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs__OnRaiseEnabled(this, target, args); }
    void Invoke(::uDelegate* handler, ::uObject* sender, ::app::Fuse::Input::PointerReleasedArgs* args) { (((Event__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs__uType*)this->__obj_type)->__fp_Invoke)(this, handler, sender, args); }
    void _ObjInit() { Event__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs___ObjInit(this); }
};

}}}

#include <app/Uno.Bool.h>

namespace app {
namespace Fuse {
namespace Input {

}}}


#endif
