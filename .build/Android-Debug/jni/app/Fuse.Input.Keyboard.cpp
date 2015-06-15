// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Input.Event__Fuse_Input_KeyPressedHandler__Fuse_Input_KeyP-8b3d082c.h>
#include <app/Fuse.Input.Event__Fuse_Input_KeyReleasedHandler__Fuse_Input_Key-d36d77b2.h>
#include <app/Fuse.Input.Focus.h>
#include <app/Fuse.Input.InputEventArgs.h>
#include <app/Fuse.Input.Keyboard.h>
#include <app/Fuse.Input.KeyPressed.h>
#include <app/Fuse.Input.KeyPressedArgs.h>
#include <app/Fuse.Input.KeyReleased.h>
#include <app/Fuse.Input.KeyReleasedArgs.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.Properties.h>
#include <app/Fuse.PropertyHandle.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Collections.List__Uno_Platform_Key.h>
#include <app/Uno.Int.h>

namespace app {
namespace Fuse {
namespace Input {

::uStaticStrong< ::app::Fuse::Input::KeyPressed*> Keyboard___keyPressed;
::uStaticStrong< ::app::Fuse::Input::KeyReleased*> Keyboard___keyReleased;
::uStaticStrong< ::app::Uno::Collections::List__Uno_Platform_Key*> Keyboard___keysDown;
::uStaticStrong< ::app::Fuse::PropertyHandle*> Keyboard___keyboardHandle;

Keyboard__uType* Keyboard__typeof()
{
    static Keyboard__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Keyboard__uType*)::uAllocClassType(sizeof(Keyboard__uType), "Fuse.Input.Keyboard");
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Fuse::Input::Event__Fuse_Input_KeyPressedHandler__Fuse_Input_KeyPressedArgs* Keyboard__get_KeyPressed(::uStatic* __this)
{
    return (::app::Fuse::Input::Event__Fuse_Input_KeyPressedHandler__Fuse_Input_KeyPressedArgs*)Keyboard___keyPressed;
}

::app::Fuse::Input::Event__Fuse_Input_KeyReleasedHandler__Fuse_Input_KeyReleasedArgs* Keyboard__get_KeyReleased(::uStatic* __this)
{
    return (::app::Fuse::Input::Event__Fuse_Input_KeyReleasedHandler__Fuse_Input_KeyReleasedArgs*)Keyboard___keyReleased;
}

bool Keyboard__RaiseKeyPressed(::uStatic* __this, int key, bool isMetaKeyPressed, bool isControlKeyPressed, bool isShiftKeyPressed, bool isAltKeyPressed)
{
    ::uPtr< ::app::Uno::Collections::List__Uno_Platform_Key*>(Keyboard___keysDown)->Add(key);
    ::app::Fuse::Input::KeyPressedArgs* args = ::app::Fuse::Input::KeyPressedArgs__New_3(NULL, key, isMetaKeyPressed, isControlKeyPressed, isShiftKeyPressed, isAltKeyPressed, ::app::Fuse::Input::Focus__get_FocusedNode(NULL));
    ::uPtr< ::app::Fuse::Input::Event__Fuse_Input_KeyPressedHandler__Fuse_Input_KeyPressedArgs*>(Keyboard__get_KeyPressed(NULL))->RaiseWithBubble(args, 0);
    return ::uPtr< ::app::Fuse::Input::KeyPressedArgs*>(args)->IsHandled();
}

bool Keyboard__RaiseKeyReleased(::uStatic* __this, int key, bool isMetaKeyPressed, bool isControlKeyPressed, bool isShiftKeyPressed, bool isAltKeyPressed)
{
    for (int i = 0; i < ::uPtr< ::app::Uno::Collections::List__Uno_Platform_Key*>(Keyboard___keysDown)->Count(); i++)
    {
        if (::uPtr< ::app::Uno::Collections::List__Uno_Platform_Key*>(Keyboard___keysDown)->Item(i) == key)
        {
            ::uPtr< ::app::Uno::Collections::List__Uno_Platform_Key*>(Keyboard___keysDown)->RemoveAt(i--);
        }
    }

    ::app::Fuse::Input::KeyReleasedArgs* args = ::app::Fuse::Input::KeyReleasedArgs__New_3(NULL, key, isMetaKeyPressed, isControlKeyPressed, isShiftKeyPressed, isAltKeyPressed, ::app::Fuse::Input::Focus__get_FocusedNode(NULL));
    ::uPtr< ::app::Fuse::Input::Event__Fuse_Input_KeyReleasedHandler__Fuse_Input_KeyReleasedArgs*>(Keyboard__get_KeyReleased(NULL))->RaiseWithBubble(args, 0);
    return ::uPtr< ::app::Fuse::Input::KeyReleasedArgs*>(args)->IsHandled();
}

void Keyboard___TypeInit(::uStatic* __this)
{
    Keyboard___keyPressed = ::app::Fuse::Input::KeyPressed__New_1(NULL);
    Keyboard___keyReleased = ::app::Fuse::Input::KeyReleased__New_1(NULL);
    Keyboard___keysDown = ::app::Uno::Collections::List__Uno_Platform_Key__New_1(NULL);
    Keyboard___keyboardHandle = ::app::Fuse::Properties__CreateHandle(NULL);
}

}}}
