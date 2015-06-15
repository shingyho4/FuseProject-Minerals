// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_INPUT_EVENT__FUSE_INPUT_FOCUS_LOST_HANDLER__FUSE_INPUT_FOCUS_LOST_ARGS_H__
#define __APP_FUSE_INPUT_EVENT__FUSE_INPUT_FOCUS_LOST_HANDLER__FUSE_INPUT_FOCUS_LOST_ARGS_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Input { struct FocusLostArgs; } } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Fuse { struct PropertyHandle; } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Input_FocusLostHandler; } } }

namespace app {
namespace Fuse {
namespace Input {

struct Event__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs;

struct Event__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs__uType : ::uClassType
{
    void(*__fp_Invoke)(Event__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs*, ::uDelegate*, ::uObject*, ::app::Fuse::Input::FocusLostArgs*);
};

Event__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs__uType* Event__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs__typeof();

void Event__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs__AddHandler(Event__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs* __this, ::app::Fuse::Node* node, ::uDelegate* handler);
void Event__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs__RemoveHandler(Event__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs* __this, ::app::Fuse::Node* node, ::uDelegate* handler);
void Event__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs__InvokeGlobalHandlers(Event__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs* __this, ::app::Fuse::Node* node, ::app::Fuse::Input::FocusLostArgs* args);
void Event__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs__RaiseWithBubble(Event__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs* __this, ::app::Fuse::Input::FocusLostArgs* args, int type);
void Event__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs__Raise(Event__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs* __this, ::app::Fuse::Input::FocusLostArgs* args, int type, bool bubble);
void Event__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs__OnRaise(Event__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs* __this, ::uObject* target, ::uArray* args);
void Event__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs__OnRaiseEnabled(Event__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs* __this, ::uObject* target, ::uArray* args);
void Event__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs___ObjInit(Event__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs* __this);

struct Event__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs : ::uObject
{
    ::uStrong< ::app::Fuse::PropertyHandle*> _handle;
    ::uStrong< ::app::Uno::Collections::List__Fuse_Input_FocusLostHandler*> _globalHandlers;

    void AddHandler(::app::Fuse::Node* node, ::uDelegate* handler) { Event__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs__AddHandler(this, node, handler); }
    void RemoveHandler(::app::Fuse::Node* node, ::uDelegate* handler) { Event__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs__RemoveHandler(this, node, handler); }
    void InvokeGlobalHandlers(::app::Fuse::Node* node, ::app::Fuse::Input::FocusLostArgs* args) { Event__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs__InvokeGlobalHandlers(this, node, args); }
    void RaiseWithBubble(::app::Fuse::Input::FocusLostArgs* args, int type) { Event__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs__RaiseWithBubble(this, args, type); }
    void Raise(::app::Fuse::Input::FocusLostArgs* args, int type, bool bubble) { Event__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs__Raise(this, args, type, bubble); }
    void OnRaise(::uObject* target, ::uArray* args) { Event__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs__OnRaise(this, target, args); }
    void OnRaiseEnabled(::uObject* target, ::uArray* args) { Event__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs__OnRaiseEnabled(this, target, args); }
    void Invoke(::uDelegate* handler, ::uObject* sender, ::app::Fuse::Input::FocusLostArgs* args) { (((Event__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs__uType*)this->__obj_type)->__fp_Invoke)(this, handler, sender, args); }
    void _ObjInit() { Event__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs___ObjInit(this); }
};

}}}

#include <app/Uno.Bool.h>

namespace app {
namespace Fuse {
namespace Input {

}}}


#endif
