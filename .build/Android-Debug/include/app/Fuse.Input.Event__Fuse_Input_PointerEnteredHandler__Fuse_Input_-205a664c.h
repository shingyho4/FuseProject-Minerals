// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_INPUT_EVENT__FUSE_INPUT_POINTER_ENTERED_HANDLER__FUSE_INPUT__205A664C_H__
#define __APP_FUSE_INPUT_EVENT__FUSE_INPUT_POINTER_ENTERED_HANDLER__FUSE_INPUT__205A664C_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Input { struct PointerEnteredArgs; } } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Fuse { struct PropertyHandle; } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Input_PointerEnteredHandler; } } }

namespace app {
namespace Fuse {
namespace Input {

struct Event__Fuse_Input_PointerEnteredHandler__Fuse_Input_PointerEnteredArgs;

struct Event__Fuse_Input_PointerEnteredHandler__Fuse_Input_PointerEnteredArgs__uType : ::uClassType
{
    void(*__fp_Invoke)(Event__Fuse_Input_PointerEnteredHandler__Fuse_Input_PointerEnteredArgs*, ::uDelegate*, ::uObject*, ::app::Fuse::Input::PointerEnteredArgs*);
};

Event__Fuse_Input_PointerEnteredHandler__Fuse_Input_PointerEnteredArgs__uType* Event__Fuse_Input_PointerEnteredHandler__Fuse_Input_PointerEnteredArgs__typeof();

void Event__Fuse_Input_PointerEnteredHandler__Fuse_Input_PointerEnteredArgs__InvokeGlobalHandlers(Event__Fuse_Input_PointerEnteredHandler__Fuse_Input_PointerEnteredArgs* __this, ::app::Fuse::Node* node, ::app::Fuse::Input::PointerEnteredArgs* args);
void Event__Fuse_Input_PointerEnteredHandler__Fuse_Input_PointerEnteredArgs__RaiseWithoutBubble(Event__Fuse_Input_PointerEnteredHandler__Fuse_Input_PointerEnteredArgs* __this, ::app::Fuse::Input::PointerEnteredArgs* args, int type);
void Event__Fuse_Input_PointerEnteredHandler__Fuse_Input_PointerEnteredArgs__Raise(Event__Fuse_Input_PointerEnteredHandler__Fuse_Input_PointerEnteredArgs* __this, ::app::Fuse::Input::PointerEnteredArgs* args, int type, bool bubble);
void Event__Fuse_Input_PointerEnteredHandler__Fuse_Input_PointerEnteredArgs__OnRaise(Event__Fuse_Input_PointerEnteredHandler__Fuse_Input_PointerEnteredArgs* __this, ::uObject* target, ::uArray* args);
void Event__Fuse_Input_PointerEnteredHandler__Fuse_Input_PointerEnteredArgs__OnRaiseEnabled(Event__Fuse_Input_PointerEnteredHandler__Fuse_Input_PointerEnteredArgs* __this, ::uObject* target, ::uArray* args);
void Event__Fuse_Input_PointerEnteredHandler__Fuse_Input_PointerEnteredArgs___ObjInit(Event__Fuse_Input_PointerEnteredHandler__Fuse_Input_PointerEnteredArgs* __this);

struct Event__Fuse_Input_PointerEnteredHandler__Fuse_Input_PointerEnteredArgs : ::uObject
{
    ::uStrong< ::app::Fuse::PropertyHandle*> _handle;
    ::uStrong< ::app::Uno::Collections::List__Fuse_Input_PointerEnteredHandler*> _globalHandlers;

    void InvokeGlobalHandlers(::app::Fuse::Node* node, ::app::Fuse::Input::PointerEnteredArgs* args) { Event__Fuse_Input_PointerEnteredHandler__Fuse_Input_PointerEnteredArgs__InvokeGlobalHandlers(this, node, args); }
    void RaiseWithoutBubble(::app::Fuse::Input::PointerEnteredArgs* args, int type) { Event__Fuse_Input_PointerEnteredHandler__Fuse_Input_PointerEnteredArgs__RaiseWithoutBubble(this, args, type); }
    void Raise(::app::Fuse::Input::PointerEnteredArgs* args, int type, bool bubble) { Event__Fuse_Input_PointerEnteredHandler__Fuse_Input_PointerEnteredArgs__Raise(this, args, type, bubble); }
    void OnRaise(::uObject* target, ::uArray* args) { Event__Fuse_Input_PointerEnteredHandler__Fuse_Input_PointerEnteredArgs__OnRaise(this, target, args); }
    void OnRaiseEnabled(::uObject* target, ::uArray* args) { Event__Fuse_Input_PointerEnteredHandler__Fuse_Input_PointerEnteredArgs__OnRaiseEnabled(this, target, args); }
    void Invoke(::uDelegate* handler, ::uObject* sender, ::app::Fuse::Input::PointerEnteredArgs* args) { (((Event__Fuse_Input_PointerEnteredHandler__Fuse_Input_PointerEnteredArgs__uType*)this->__obj_type)->__fp_Invoke)(this, handler, sender, args); }
    void _ObjInit() { Event__Fuse_Input_PointerEnteredHandler__Fuse_Input_PointerEnteredArgs___ObjInit(this); }
};

}}}

#include <app/Uno.Bool.h>

namespace app {
namespace Fuse {
namespace Input {

}}}


#endif
