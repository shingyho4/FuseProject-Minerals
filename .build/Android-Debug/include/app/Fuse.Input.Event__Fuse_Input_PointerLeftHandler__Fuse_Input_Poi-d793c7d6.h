// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_INPUT_EVENT__FUSE_INPUT_POINTER_LEFT_HANDLER__FUSE_INPUT_POI_D793C7D6_H__
#define __APP_FUSE_INPUT_EVENT__FUSE_INPUT_POINTER_LEFT_HANDLER__FUSE_INPUT_POI_D793C7D6_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Input { struct PointerLeftArgs; } } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Fuse { struct PropertyHandle; } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Input_PointerLeftHandler; } } }

namespace app {
namespace Fuse {
namespace Input {

struct Event__Fuse_Input_PointerLeftHandler__Fuse_Input_PointerLeftArgs;

struct Event__Fuse_Input_PointerLeftHandler__Fuse_Input_PointerLeftArgs__uType : ::uClassType
{
    void(*__fp_Invoke)(Event__Fuse_Input_PointerLeftHandler__Fuse_Input_PointerLeftArgs*, ::uDelegate*, ::uObject*, ::app::Fuse::Input::PointerLeftArgs*);
};

Event__Fuse_Input_PointerLeftHandler__Fuse_Input_PointerLeftArgs__uType* Event__Fuse_Input_PointerLeftHandler__Fuse_Input_PointerLeftArgs__typeof();

void Event__Fuse_Input_PointerLeftHandler__Fuse_Input_PointerLeftArgs__InvokeGlobalHandlers(Event__Fuse_Input_PointerLeftHandler__Fuse_Input_PointerLeftArgs* __this, ::app::Fuse::Node* node, ::app::Fuse::Input::PointerLeftArgs* args);
void Event__Fuse_Input_PointerLeftHandler__Fuse_Input_PointerLeftArgs__RaiseWithoutBubble(Event__Fuse_Input_PointerLeftHandler__Fuse_Input_PointerLeftArgs* __this, ::app::Fuse::Input::PointerLeftArgs* args, int type);
void Event__Fuse_Input_PointerLeftHandler__Fuse_Input_PointerLeftArgs__Raise(Event__Fuse_Input_PointerLeftHandler__Fuse_Input_PointerLeftArgs* __this, ::app::Fuse::Input::PointerLeftArgs* args, int type, bool bubble);
void Event__Fuse_Input_PointerLeftHandler__Fuse_Input_PointerLeftArgs__OnRaise(Event__Fuse_Input_PointerLeftHandler__Fuse_Input_PointerLeftArgs* __this, ::uObject* target, ::uArray* args);
void Event__Fuse_Input_PointerLeftHandler__Fuse_Input_PointerLeftArgs__OnRaiseEnabled(Event__Fuse_Input_PointerLeftHandler__Fuse_Input_PointerLeftArgs* __this, ::uObject* target, ::uArray* args);
void Event__Fuse_Input_PointerLeftHandler__Fuse_Input_PointerLeftArgs___ObjInit(Event__Fuse_Input_PointerLeftHandler__Fuse_Input_PointerLeftArgs* __this);

struct Event__Fuse_Input_PointerLeftHandler__Fuse_Input_PointerLeftArgs : ::uObject
{
    ::uStrong< ::app::Fuse::PropertyHandle*> _handle;
    ::uStrong< ::app::Uno::Collections::List__Fuse_Input_PointerLeftHandler*> _globalHandlers;

    void InvokeGlobalHandlers(::app::Fuse::Node* node, ::app::Fuse::Input::PointerLeftArgs* args) { Event__Fuse_Input_PointerLeftHandler__Fuse_Input_PointerLeftArgs__InvokeGlobalHandlers(this, node, args); }
    void RaiseWithoutBubble(::app::Fuse::Input::PointerLeftArgs* args, int type) { Event__Fuse_Input_PointerLeftHandler__Fuse_Input_PointerLeftArgs__RaiseWithoutBubble(this, args, type); }
    void Raise(::app::Fuse::Input::PointerLeftArgs* args, int type, bool bubble) { Event__Fuse_Input_PointerLeftHandler__Fuse_Input_PointerLeftArgs__Raise(this, args, type, bubble); }
    void OnRaise(::uObject* target, ::uArray* args) { Event__Fuse_Input_PointerLeftHandler__Fuse_Input_PointerLeftArgs__OnRaise(this, target, args); }
    void OnRaiseEnabled(::uObject* target, ::uArray* args) { Event__Fuse_Input_PointerLeftHandler__Fuse_Input_PointerLeftArgs__OnRaiseEnabled(this, target, args); }
    void Invoke(::uDelegate* handler, ::uObject* sender, ::app::Fuse::Input::PointerLeftArgs* args) { (((Event__Fuse_Input_PointerLeftHandler__Fuse_Input_PointerLeftArgs__uType*)this->__obj_type)->__fp_Invoke)(this, handler, sender, args); }
    void _ObjInit() { Event__Fuse_Input_PointerLeftHandler__Fuse_Input_PointerLeftArgs___ObjInit(this); }
};

}}}

#include <app/Uno.Bool.h>

namespace app {
namespace Fuse {
namespace Input {

}}}


#endif
