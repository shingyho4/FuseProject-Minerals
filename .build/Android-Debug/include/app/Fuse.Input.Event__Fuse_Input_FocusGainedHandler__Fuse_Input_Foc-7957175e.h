// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_INPUT_EVENT__FUSE_INPUT_FOCUS_GAINED_HANDLER__FUSE_INPUT_FOC_7957175E_H__
#define __APP_FUSE_INPUT_EVENT__FUSE_INPUT_FOCUS_GAINED_HANDLER__FUSE_INPUT_FOC_7957175E_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Input { struct FocusGainedArgs; } } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Fuse { struct PropertyHandle; } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Input_FocusGainedHandler; } } }

namespace app {
namespace Fuse {
namespace Input {

struct Event__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs;

struct Event__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs__uType : ::uClassType
{
    void(*__fp_Invoke)(Event__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs*, ::uDelegate*, ::uObject*, ::app::Fuse::Input::FocusGainedArgs*);
};

Event__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs__uType* Event__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs__typeof();

void Event__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs__AddHandler(Event__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs* __this, ::app::Fuse::Node* node, ::uDelegate* handler);
void Event__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs__RemoveHandler(Event__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs* __this, ::app::Fuse::Node* node, ::uDelegate* handler);
void Event__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs__InvokeGlobalHandlers(Event__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs* __this, ::app::Fuse::Node* node, ::app::Fuse::Input::FocusGainedArgs* args);
void Event__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs__RaiseWithBubble(Event__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs* __this, ::app::Fuse::Input::FocusGainedArgs* args, int type);
void Event__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs__Raise(Event__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs* __this, ::app::Fuse::Input::FocusGainedArgs* args, int type, bool bubble);
void Event__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs__OnRaise(Event__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs* __this, ::uObject* target, ::uArray* args);
void Event__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs__OnRaiseEnabled(Event__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs* __this, ::uObject* target, ::uArray* args);
void Event__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs___ObjInit(Event__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs* __this);

struct Event__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs : ::uObject
{
    ::uStrong< ::app::Fuse::PropertyHandle*> _handle;
    ::uStrong< ::app::Uno::Collections::List__Fuse_Input_FocusGainedHandler*> _globalHandlers;

    void AddHandler(::app::Fuse::Node* node, ::uDelegate* handler) { Event__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs__AddHandler(this, node, handler); }
    void RemoveHandler(::app::Fuse::Node* node, ::uDelegate* handler) { Event__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs__RemoveHandler(this, node, handler); }
    void InvokeGlobalHandlers(::app::Fuse::Node* node, ::app::Fuse::Input::FocusGainedArgs* args) { Event__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs__InvokeGlobalHandlers(this, node, args); }
    void RaiseWithBubble(::app::Fuse::Input::FocusGainedArgs* args, int type) { Event__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs__RaiseWithBubble(this, args, type); }
    void Raise(::app::Fuse::Input::FocusGainedArgs* args, int type, bool bubble) { Event__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs__Raise(this, args, type, bubble); }
    void OnRaise(::uObject* target, ::uArray* args) { Event__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs__OnRaise(this, target, args); }
    void OnRaiseEnabled(::uObject* target, ::uArray* args) { Event__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs__OnRaiseEnabled(this, target, args); }
    void Invoke(::uDelegate* handler, ::uObject* sender, ::app::Fuse::Input::FocusGainedArgs* args) { (((Event__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs__uType*)this->__obj_type)->__fp_Invoke)(this, handler, sender, args); }
    void _ObjInit() { Event__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs___ObjInit(this); }
};

}}}

#include <app/Uno.Bool.h>

namespace app {
namespace Fuse {
namespace Input {

}}}


#endif
