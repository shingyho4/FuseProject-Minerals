// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_INPUT_EVENT__FUSE_INPUT_POINTER_MOVED_HANDLER__FUSE_INPUT_PO_5D8E7DEC_H__
#define __APP_FUSE_INPUT_EVENT__FUSE_INPUT_POINTER_MOVED_HANDLER__FUSE_INPUT_PO_5D8E7DEC_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Input { struct PointerMovedArgs; } } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Fuse { struct PropertyHandle; } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Input_PointerMovedHandler; } } }

namespace app {
namespace Fuse {
namespace Input {

struct Event__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs;

struct Event__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs__uType : ::uClassType
{
    void(*__fp_Invoke)(Event__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs*, ::uDelegate*, ::uObject*, ::app::Fuse::Input::PointerMovedArgs*);
};

Event__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs__uType* Event__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs__typeof();

void Event__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs__AddHandler(Event__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs* __this, ::app::Fuse::Node* node, ::uDelegate* handler);
void Event__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs__RemoveHandler(Event__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs* __this, ::app::Fuse::Node* node, ::uDelegate* handler);
void Event__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs__InvokeGlobalHandlers(Event__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs* __this, ::app::Fuse::Node* node, ::app::Fuse::Input::PointerMovedArgs* args);
void Event__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs__RaiseWithBubble(Event__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs* __this, ::app::Fuse::Input::PointerMovedArgs* args, int type);
void Event__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs__Raise(Event__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs* __this, ::app::Fuse::Input::PointerMovedArgs* args, int type, bool bubble);
void Event__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs__OnRaise(Event__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs* __this, ::uObject* target, ::uArray* args);
void Event__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs__OnRaiseEnabled(Event__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs* __this, ::uObject* target, ::uArray* args);
void Event__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs___ObjInit(Event__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs* __this);

struct Event__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs : ::uObject
{
    ::uStrong< ::app::Fuse::PropertyHandle*> _handle;
    ::uStrong< ::app::Uno::Collections::List__Fuse_Input_PointerMovedHandler*> _globalHandlers;

    void AddHandler(::app::Fuse::Node* node, ::uDelegate* handler) { Event__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs__AddHandler(this, node, handler); }
    void RemoveHandler(::app::Fuse::Node* node, ::uDelegate* handler) { Event__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs__RemoveHandler(this, node, handler); }
    void InvokeGlobalHandlers(::app::Fuse::Node* node, ::app::Fuse::Input::PointerMovedArgs* args) { Event__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs__InvokeGlobalHandlers(this, node, args); }
    void RaiseWithBubble(::app::Fuse::Input::PointerMovedArgs* args, int type) { Event__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs__RaiseWithBubble(this, args, type); }
    void Raise(::app::Fuse::Input::PointerMovedArgs* args, int type, bool bubble) { Event__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs__Raise(this, args, type, bubble); }
    void OnRaise(::uObject* target, ::uArray* args) { Event__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs__OnRaise(this, target, args); }
    void OnRaiseEnabled(::uObject* target, ::uArray* args) { Event__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs__OnRaiseEnabled(this, target, args); }
    void Invoke(::uDelegate* handler, ::uObject* sender, ::app::Fuse::Input::PointerMovedArgs* args) { (((Event__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs__uType*)this->__obj_type)->__fp_Invoke)(this, handler, sender, args); }
    void _ObjInit() { Event__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs___ObjInit(this); }
};

}}}

#include <app/Uno.Bool.h>

namespace app {
namespace Fuse {
namespace Input {

}}}


#endif
