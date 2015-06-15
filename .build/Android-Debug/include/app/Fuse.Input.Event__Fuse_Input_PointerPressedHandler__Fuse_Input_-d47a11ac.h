// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_INPUT_EVENT__FUSE_INPUT_POINTER_PRESSED_HANDLER__FUSE_INPUT__D47A11AC_H__
#define __APP_FUSE_INPUT_EVENT__FUSE_INPUT_POINTER_PRESSED_HANDLER__FUSE_INPUT__D47A11AC_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Input { struct PointerPressedArgs; } } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Fuse { struct PropertyHandle; } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Input_PointerPressedHandler; } } }

namespace app {
namespace Fuse {
namespace Input {

struct Event__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs;

struct Event__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs__uType : ::uClassType
{
    void(*__fp_Invoke)(Event__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs*, ::uDelegate*, ::uObject*, ::app::Fuse::Input::PointerPressedArgs*);
};

Event__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs__uType* Event__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs__typeof();

void Event__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs__AddHandler(Event__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs* __this, ::app::Fuse::Node* node, ::uDelegate* handler);
void Event__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs__RemoveHandler(Event__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs* __this, ::app::Fuse::Node* node, ::uDelegate* handler);
void Event__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs__InvokeGlobalHandlers(Event__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs* __this, ::app::Fuse::Node* node, ::app::Fuse::Input::PointerPressedArgs* args);
void Event__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs__RaiseWithBubble(Event__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs* __this, ::app::Fuse::Input::PointerPressedArgs* args, int type);
void Event__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs__Raise(Event__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs* __this, ::app::Fuse::Input::PointerPressedArgs* args, int type, bool bubble);
void Event__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs__OnRaise(Event__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs* __this, ::uObject* target, ::uArray* args);
void Event__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs__OnRaiseEnabled(Event__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs* __this, ::uObject* target, ::uArray* args);
void Event__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs___ObjInit(Event__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs* __this);

struct Event__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs : ::uObject
{
    ::uStrong< ::app::Fuse::PropertyHandle*> _handle;
    ::uStrong< ::app::Uno::Collections::List__Fuse_Input_PointerPressedHandler*> _globalHandlers;

    void AddHandler(::app::Fuse::Node* node, ::uDelegate* handler) { Event__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs__AddHandler(this, node, handler); }
    void RemoveHandler(::app::Fuse::Node* node, ::uDelegate* handler) { Event__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs__RemoveHandler(this, node, handler); }
    void InvokeGlobalHandlers(::app::Fuse::Node* node, ::app::Fuse::Input::PointerPressedArgs* args) { Event__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs__InvokeGlobalHandlers(this, node, args); }
    void RaiseWithBubble(::app::Fuse::Input::PointerPressedArgs* args, int type) { Event__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs__RaiseWithBubble(this, args, type); }
    void Raise(::app::Fuse::Input::PointerPressedArgs* args, int type, bool bubble) { Event__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs__Raise(this, args, type, bubble); }
    void OnRaise(::uObject* target, ::uArray* args) { Event__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs__OnRaise(this, target, args); }
    void OnRaiseEnabled(::uObject* target, ::uArray* args) { Event__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs__OnRaiseEnabled(this, target, args); }
    void Invoke(::uDelegate* handler, ::uObject* sender, ::app::Fuse::Input::PointerPressedArgs* args) { (((Event__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs__uType*)this->__obj_type)->__fp_Invoke)(this, handler, sender, args); }
    void _ObjInit() { Event__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs___ObjInit(this); }
};

}}}

#include <app/Uno.Bool.h>

namespace app {
namespace Fuse {
namespace Input {

}}}


#endif
