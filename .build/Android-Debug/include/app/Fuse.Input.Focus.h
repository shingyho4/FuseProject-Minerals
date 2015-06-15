// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_INPUT_FOCUS_H__
#define __APP_FUSE_INPUT_FOCUS_H__

#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Input { struct Event__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs; } } }
namespace app { namespace Fuse { namespace Input { struct Event__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs; } } }
namespace app { namespace Fuse { namespace Input { struct Event__Fuse_Input_InputEventHandler__Fuse_Input_InputEventArgs; } } }
namespace app { namespace Fuse { namespace Input { struct FocusGained; } } }
namespace app { namespace Fuse { namespace Input { struct FocusLost; } } }
namespace app { namespace Fuse { namespace Input { struct InputEvent; } } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Fuse { struct PropertyHandle; } }
namespace app { namespace Uno { struct EventArgs; } }

namespace app {
namespace Fuse {
namespace Input {

extern ::uStaticStrong< ::app::Fuse::Input::FocusGained*> Focus___gained;
extern ::uStaticStrong< ::app::Fuse::Input::FocusLost*> Focus___lost;
extern ::uStaticStrong< ::app::Fuse::Input::InputEvent*> Focus___isFoucsableChanged;
extern ::uStaticStrong< ::app::Fuse::Node*> Focus___focusedObject;
extern ::uStaticStrong< ::app::Fuse::Node*> Focus___lastFocusedNode;
extern ::uStaticStrong< ::app::Fuse::PropertyHandle*> Focus___focusDelegatorHandle;
extern ::uStaticStrong< ::app::Fuse::PropertyHandle*> Focus___isFocusableHandle;

struct Focus__uType : ::uClassType
{
};

Focus__uType* Focus__typeof();

::app::Fuse::Input::Event__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs* Focus__get_Gained(::uStatic* __this);
::app::Fuse::Input::Event__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs* Focus__get_Lost(::uStatic* __this);
::app::Fuse::Input::Event__Fuse_Input_InputEventHandler__Fuse_Input_InputEventArgs* Focus__get_IsFocusableChanged(::uStatic* __this);
::app::Fuse::Node* Focus__get_FocusedNode(::uStatic* __this);
::uDelegate* Focus__GetDelegator(::uStatic* __this, ::app::Fuse::Node* n);
void Focus__OnWindowGotFocus(::uStatic* __this, ::uObject* sender, ::app::Uno::EventArgs* args);
void Focus__OnWindowLostFocus(::uStatic* __this, ::uObject* sender, ::app::Uno::EventArgs* args);
void Focus__Move(::uStatic* __this, int direction);
void Focus__Release(::uStatic* __this);
void Focus__GiveTo(::uStatic* __this, ::app::Fuse::Node* n);
bool Focus__IsWithin(::uStatic* __this, ::app::Fuse::Node* n);
::app::Fuse::Node* Focus__FindRoot(::uStatic* __this);
::app::Fuse::Node* Focus__Predict(::uStatic* __this, int direction);
void Focus__ChangeFocusedNode(::uStatic* __this, ::app::Fuse::Node* node);
bool Focus__CanSetFocus(::uStatic* __this, ::app::Fuse::Node* node);
bool Focus__IsFocusable(::uStatic* __this, ::app::Fuse::Node* n);
void Focus__SetIsFocusable(::uStatic* __this, ::app::Fuse::Node* n, bool focusable);
void Focus__OnNodeRemoved(::uStatic* __this, ::uObject* sender, ::app::Uno::EventArgs* args);
void Focus___TypeInit(::uStatic* __this);

}}}


#endif
