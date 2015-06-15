// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_INPUT_EVENT__FUSE_INPUT_POINTER_WHEEL_MOVED_HANDLER__FUSE_INP_684E3858_H__
#define __APP_FUSE_INPUT_EVENT__FUSE_INPUT_POINTER_WHEEL_MOVED_HANDLER__FUSE_INP_684E3858_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Input { struct PointerWheelMovedArgs; } } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Fuse { struct PropertyHandle; } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Input_PointerWheelMovedHandler; } } }

namespace app {
namespace Fuse {
namespace Input {

struct Event__Fuse_Input_PointerWheelMovedHandler__Fuse_Input_PointerWheelMovedArgs;

struct Event__Fuse_Input_PointerWheelMovedHandler__Fuse_Input_PointerWheelMovedArgs__uType : ::uClassType
{
    void(*__fp_Invoke)(Event__Fuse_Input_PointerWheelMovedHandler__Fuse_Input_PointerWheelMovedArgs*, ::uDelegate*, ::uObject*, ::app::Fuse::Input::PointerWheelMovedArgs*);
};

Event__Fuse_Input_PointerWheelMovedHandler__Fuse_Input_PointerWheelMovedArgs__uType* Event__Fuse_Input_PointerWheelMovedHandler__Fuse_Input_PointerWheelMovedArgs__typeof();

void Event__Fuse_Input_PointerWheelMovedHandler__Fuse_Input_PointerWheelMovedArgs__InvokeGlobalHandlers(Event__Fuse_Input_PointerWheelMovedHandler__Fuse_Input_PointerWheelMovedArgs* __this, ::app::Fuse::Node* node, ::app::Fuse::Input::PointerWheelMovedArgs* args);
void Event__Fuse_Input_PointerWheelMovedHandler__Fuse_Input_PointerWheelMovedArgs__RaiseWithBubble(Event__Fuse_Input_PointerWheelMovedHandler__Fuse_Input_PointerWheelMovedArgs* __this, ::app::Fuse::Input::PointerWheelMovedArgs* args, int type);
void Event__Fuse_Input_PointerWheelMovedHandler__Fuse_Input_PointerWheelMovedArgs__Raise(Event__Fuse_Input_PointerWheelMovedHandler__Fuse_Input_PointerWheelMovedArgs* __this, ::app::Fuse::Input::PointerWheelMovedArgs* args, int type, bool bubble);
void Event__Fuse_Input_PointerWheelMovedHandler__Fuse_Input_PointerWheelMovedArgs__OnRaise(Event__Fuse_Input_PointerWheelMovedHandler__Fuse_Input_PointerWheelMovedArgs* __this, ::uObject* target, ::uArray* args);
void Event__Fuse_Input_PointerWheelMovedHandler__Fuse_Input_PointerWheelMovedArgs__OnRaiseEnabled(Event__Fuse_Input_PointerWheelMovedHandler__Fuse_Input_PointerWheelMovedArgs* __this, ::uObject* target, ::uArray* args);
void Event__Fuse_Input_PointerWheelMovedHandler__Fuse_Input_PointerWheelMovedArgs___ObjInit(Event__Fuse_Input_PointerWheelMovedHandler__Fuse_Input_PointerWheelMovedArgs* __this);

struct Event__Fuse_Input_PointerWheelMovedHandler__Fuse_Input_PointerWheelMovedArgs : ::uObject
{
    ::uStrong< ::app::Fuse::PropertyHandle*> _handle;
    ::uStrong< ::app::Uno::Collections::List__Fuse_Input_PointerWheelMovedHandler*> _globalHandlers;

    void InvokeGlobalHandlers(::app::Fuse::Node* node, ::app::Fuse::Input::PointerWheelMovedArgs* args) { Event__Fuse_Input_PointerWheelMovedHandler__Fuse_Input_PointerWheelMovedArgs__InvokeGlobalHandlers(this, node, args); }
    void RaiseWithBubble(::app::Fuse::Input::PointerWheelMovedArgs* args, int type) { Event__Fuse_Input_PointerWheelMovedHandler__Fuse_Input_PointerWheelMovedArgs__RaiseWithBubble(this, args, type); }
    void Raise(::app::Fuse::Input::PointerWheelMovedArgs* args, int type, bool bubble) { Event__Fuse_Input_PointerWheelMovedHandler__Fuse_Input_PointerWheelMovedArgs__Raise(this, args, type, bubble); }
    void OnRaise(::uObject* target, ::uArray* args) { Event__Fuse_Input_PointerWheelMovedHandler__Fuse_Input_PointerWheelMovedArgs__OnRaise(this, target, args); }
    void OnRaiseEnabled(::uObject* target, ::uArray* args) { Event__Fuse_Input_PointerWheelMovedHandler__Fuse_Input_PointerWheelMovedArgs__OnRaiseEnabled(this, target, args); }
    void Invoke(::uDelegate* handler, ::uObject* sender, ::app::Fuse::Input::PointerWheelMovedArgs* args) { (((Event__Fuse_Input_PointerWheelMovedHandler__Fuse_Input_PointerWheelMovedArgs__uType*)this->__obj_type)->__fp_Invoke)(this, handler, sender, args); }
    void _ObjInit() { Event__Fuse_Input_PointerWheelMovedHandler__Fuse_Input_PointerWheelMovedArgs___ObjInit(this); }
};

}}}

#include <app/Uno.Bool.h>

namespace app {
namespace Fuse {
namespace Input {

}}}


#endif
