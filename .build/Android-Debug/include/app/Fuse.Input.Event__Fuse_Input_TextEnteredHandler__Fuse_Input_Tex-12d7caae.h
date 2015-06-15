// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_INPUT_EVENT__FUSE_INPUT_TEXT_ENTERED_HANDLER__FUSE_INPUT_TEX_12D7CAAE_H__
#define __APP_FUSE_INPUT_EVENT__FUSE_INPUT_TEXT_ENTERED_HANDLER__FUSE_INPUT_TEX_12D7CAAE_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Input { struct TextEnteredArgs; } } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Fuse { struct PropertyHandle; } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Input_TextEnteredHandler; } } }

namespace app {
namespace Fuse {
namespace Input {

struct Event__Fuse_Input_TextEnteredHandler__Fuse_Input_TextEnteredArgs;

struct Event__Fuse_Input_TextEnteredHandler__Fuse_Input_TextEnteredArgs__uType : ::uClassType
{
    void(*__fp_Invoke)(Event__Fuse_Input_TextEnteredHandler__Fuse_Input_TextEnteredArgs*, ::uDelegate*, ::uObject*, ::app::Fuse::Input::TextEnteredArgs*);
};

Event__Fuse_Input_TextEnteredHandler__Fuse_Input_TextEnteredArgs__uType* Event__Fuse_Input_TextEnteredHandler__Fuse_Input_TextEnteredArgs__typeof();

void Event__Fuse_Input_TextEnteredHandler__Fuse_Input_TextEnteredArgs__InvokeGlobalHandlers(Event__Fuse_Input_TextEnteredHandler__Fuse_Input_TextEnteredArgs* __this, ::app::Fuse::Node* node, ::app::Fuse::Input::TextEnteredArgs* args);
void Event__Fuse_Input_TextEnteredHandler__Fuse_Input_TextEnteredArgs__RaiseWithBubble(Event__Fuse_Input_TextEnteredHandler__Fuse_Input_TextEnteredArgs* __this, ::app::Fuse::Input::TextEnteredArgs* args, int type);
void Event__Fuse_Input_TextEnteredHandler__Fuse_Input_TextEnteredArgs__Raise(Event__Fuse_Input_TextEnteredHandler__Fuse_Input_TextEnteredArgs* __this, ::app::Fuse::Input::TextEnteredArgs* args, int type, bool bubble);
void Event__Fuse_Input_TextEnteredHandler__Fuse_Input_TextEnteredArgs__OnRaise(Event__Fuse_Input_TextEnteredHandler__Fuse_Input_TextEnteredArgs* __this, ::uObject* target, ::uArray* args);
void Event__Fuse_Input_TextEnteredHandler__Fuse_Input_TextEnteredArgs__OnRaiseEnabled(Event__Fuse_Input_TextEnteredHandler__Fuse_Input_TextEnteredArgs* __this, ::uObject* target, ::uArray* args);
void Event__Fuse_Input_TextEnteredHandler__Fuse_Input_TextEnteredArgs___ObjInit(Event__Fuse_Input_TextEnteredHandler__Fuse_Input_TextEnteredArgs* __this);

struct Event__Fuse_Input_TextEnteredHandler__Fuse_Input_TextEnteredArgs : ::uObject
{
    ::uStrong< ::app::Fuse::PropertyHandle*> _handle;
    ::uStrong< ::app::Uno::Collections::List__Fuse_Input_TextEnteredHandler*> _globalHandlers;

    void InvokeGlobalHandlers(::app::Fuse::Node* node, ::app::Fuse::Input::TextEnteredArgs* args) { Event__Fuse_Input_TextEnteredHandler__Fuse_Input_TextEnteredArgs__InvokeGlobalHandlers(this, node, args); }
    void RaiseWithBubble(::app::Fuse::Input::TextEnteredArgs* args, int type) { Event__Fuse_Input_TextEnteredHandler__Fuse_Input_TextEnteredArgs__RaiseWithBubble(this, args, type); }
    void Raise(::app::Fuse::Input::TextEnteredArgs* args, int type, bool bubble) { Event__Fuse_Input_TextEnteredHandler__Fuse_Input_TextEnteredArgs__Raise(this, args, type, bubble); }
    void OnRaise(::uObject* target, ::uArray* args) { Event__Fuse_Input_TextEnteredHandler__Fuse_Input_TextEnteredArgs__OnRaise(this, target, args); }
    void OnRaiseEnabled(::uObject* target, ::uArray* args) { Event__Fuse_Input_TextEnteredHandler__Fuse_Input_TextEnteredArgs__OnRaiseEnabled(this, target, args); }
    void Invoke(::uDelegate* handler, ::uObject* sender, ::app::Fuse::Input::TextEnteredArgs* args) { (((Event__Fuse_Input_TextEnteredHandler__Fuse_Input_TextEnteredArgs__uType*)this->__obj_type)->__fp_Invoke)(this, handler, sender, args); }
    void _ObjInit() { Event__Fuse_Input_TextEnteredHandler__Fuse_Input_TextEnteredArgs___ObjInit(this); }
};

}}}

#include <app/Uno.Bool.h>

namespace app {
namespace Fuse {
namespace Input {

}}}


#endif
