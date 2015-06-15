// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.App.h>
#include <app/Fuse.Input.Event__Fuse_Input_FocusGainedHandler__Fuse_Input_Foc-7957175e.h>
#include <app/Fuse.Input.Event__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs.h>
#include <app/Fuse.Input.Event__Fuse_Input_InputEventHandler__Fuse_Input_Inpu-b68a4a8c.h>
#include <app/Fuse.Input.Focus.h>
#include <app/Fuse.Input.FocusDelegator.h>
#include <app/Fuse.Input.FocusGained.h>
#include <app/Fuse.Input.FocusGainedArgs.h>
#include <app/Fuse.Input.FocusLost.h>
#include <app/Fuse.Input.FocusLostArgs.h>
#include <app/Fuse.Input.FocusPredictStrategy.h>
#include <app/Fuse.Input.InputEvent.h>
#include <app/Fuse.Input.InputEventArgs.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.Properties.h>
#include <app/Fuse.PropertyHandle.h>
#include <app/Uno.Application.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Delegate.h>
#include <app/Uno.EventArgs.h>
#include <app/Uno.EventHandler.h>
#include <app/Uno.Int.h>
#include <app/Uno.Object.h>

namespace app {
namespace Fuse {
namespace Input {

::uStaticStrong< ::app::Fuse::Input::FocusGained*> Focus___gained;
::uStaticStrong< ::app::Fuse::Input::FocusLost*> Focus___lost;
::uStaticStrong< ::app::Fuse::Input::InputEvent*> Focus___isFoucsableChanged;
::uStaticStrong< ::app::Fuse::Node*> Focus___focusedObject;
::uStaticStrong< ::app::Fuse::Node*> Focus___lastFocusedNode;
::uStaticStrong< ::app::Fuse::PropertyHandle*> Focus___focusDelegatorHandle;
::uStaticStrong< ::app::Fuse::PropertyHandle*> Focus___isFocusableHandle;

Focus__uType* Focus__typeof()
{
    static Focus__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Focus__uType*)::uAllocClassType(sizeof(Focus__uType), "Fuse.Input.Focus");
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Fuse::Input::Event__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs* Focus__get_Gained(::uStatic* __this)
{
    return (::app::Fuse::Input::Event__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs*)Focus___gained;
}

::app::Fuse::Input::Event__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs* Focus__get_Lost(::uStatic* __this)
{
    return (::app::Fuse::Input::Event__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs*)Focus___lost;
}

::app::Fuse::Input::Event__Fuse_Input_InputEventHandler__Fuse_Input_InputEventArgs* Focus__get_IsFocusableChanged(::uStatic* __this)
{
    return (::app::Fuse::Input::Event__Fuse_Input_InputEventHandler__Fuse_Input_InputEventArgs*)Focus___isFoucsableChanged;
}

::app::Fuse::Node* Focus__get_FocusedNode(::uStatic* __this)
{
    return Focus___focusedObject;
}

::uDelegate* Focus__GetDelegator(::uStatic* __this, ::app::Fuse::Node* n)
{
    ::uObject* res;

    if (::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->TryGet(Focus___focusDelegatorHandle, &res))
    {
        return ::uCast< ::uDelegate*>(res, ::app::Fuse::Input::FocusDelegator__typeof());
    }

    return NULL;
}

void Focus__OnWindowGotFocus(::uStatic* __this, ::uObject* sender, ::app::Uno::EventArgs* args)
{
    Focus__ChangeFocusedNode(NULL, Focus___lastFocusedNode);
}

void Focus__OnWindowLostFocus(::uStatic* __this, ::uObject* sender, ::app::Uno::EventArgs* args)
{
    Focus__ChangeFocusedNode(NULL, NULL);
}

void Focus__Move(::uStatic* __this, int direction)
{
    ::app::Fuse::Node* predictedFocus = Focus__Predict(NULL, direction);

    if (predictedFocus == NULL)
    {
        return;
    }

    Focus__ChangeFocusedNode(NULL, predictedFocus);
}

void Focus__Release(::uStatic* __this)
{
    Focus__ChangeFocusedNode(NULL, NULL);
}

void Focus__GiveTo(::uStatic* __this, ::app::Fuse::Node* n)
{
    Focus__ChangeFocusedNode(NULL, n);
}

bool Focus__IsWithin(::uStatic* __this, ::app::Fuse::Node* n)
{
    ::app::Fuse::Node* k = Focus__get_FocusedNode(NULL);

    while (k != NULL)
    {
        if (k == n)
        {
            return true;
        }

        k = ::uPtr< ::app::Fuse::Node*>(k)->ParentNode();
    }

    return false;
}

::app::Fuse::Node* Focus__FindRoot(::uStatic* __this)
{
    ::app::Fuse::App* app = ::uAs< ::app::Fuse::App*>(::app::Uno::Application__get_Current(NULL), ::app::Fuse::App__typeof());

    if (app != NULL)
    {
        return ::uPtr< ::app::Fuse::App*>(app)->RootNode();
    }

    return NULL;
}

::app::Fuse::Node* Focus__Predict(::uStatic* __this, int direction)
{
    ::app::Fuse::Node* node = ::app::Fuse::Input::FocusPredictStrategy__Predict(NULL, Focus___focusedObject, direction);

    if (node == NULL)
    {
        ::app::Fuse::Node* root = Focus__FindRoot(NULL);

        if (root != NULL)
        {
            node = ::app::Fuse::Input::FocusPredictStrategy__Predict(NULL, root, direction);

            if ((node == NULL) && Focus__CanSetFocus(NULL, root))
            {
                node = root;
            }
        }
    }

    return node;
}

void Focus__ChangeFocusedNode(::uStatic* __this, ::app::Fuse::Node* node)
{
    if (!Focus__CanSetFocus(NULL, node))
    {
        node = Focus__FindRoot(NULL);
    }

    if (node == Focus___focusedObject)
    {
        return;
    }

    if (Focus___focusedObject != NULL)
    {
        ::uPtr< ::app::Fuse::Input::Event__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs*>(Focus__get_Lost(NULL))->RaiseWithBubble(::app::Fuse::Input::FocusLostArgs__New_3(NULL, Focus___focusedObject), 0);
    }

    Focus___lastFocusedNode = Focus___focusedObject;

    if (node != NULL)
    {
        ::uDelegate* delegator = Focus__GetDelegator(NULL, node);

        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)delegator, NULL))
        {
            node = ::uPtr< ::uDelegate*>(delegator)->Invoke< ::app::Fuse::Node*>();
        }
    }

    Focus___focusedObject = node;

    if (Focus___focusedObject != NULL)
    {
        ::uPtr< ::app::Fuse::Input::Event__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs*>(Focus__get_Gained(NULL))->RaiseWithBubble(::app::Fuse::Input::FocusGainedArgs__New_3(NULL, Focus___focusedObject), 0);
    }
}

bool Focus__CanSetFocus(::uStatic* __this, ::app::Fuse::Node* node)
{
    return (node == NULL) || ((::uPtr< ::app::Fuse::Node*>(node)->IsRooted() && ::uPtr< ::app::Fuse::Node*>(node)->IsEnabled()) && Focus__IsFocusable(NULL, node));
}

bool Focus__IsFocusable(::uStatic* __this, ::app::Fuse::Node* n)
{
    ::uObject* res;
    return ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->TryGet(Focus___isFocusableHandle, &res);
}

void Focus__SetIsFocusable(::uStatic* __this, ::app::Fuse::Node* n, bool focusable)
{
    bool oldValue = Focus__IsFocusable(NULL, n);

    if (focusable != oldValue)
    {
        if (focusable)
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(Focus___isFocusableHandle, ::uBox(::app::Uno::Bool__typeof(), true));
            n->add_Removed(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)::app::Fuse::Input::Focus__OnNodeRemoved));
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Clear(Focus___isFocusableHandle);
            n->remove_Removed(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)::app::Fuse::Input::Focus__OnNodeRemoved));
        }

        ::uPtr< ::app::Fuse::Input::Event__Fuse_Input_InputEventHandler__Fuse_Input_InputEventArgs*>(Focus__get_IsFocusableChanged(NULL))->RaiseWithoutBubble(::app::Fuse::Input::InputEventArgs__New_2(NULL, n), 0);
    }
}

void Focus__OnNodeRemoved(::uStatic* __this, ::uObject* sender, ::app::Uno::EventArgs* args)
{
    Focus__Move(NULL, 1);
}

void Focus___TypeInit(::uStatic* __this)
{
    Focus___gained = ::app::Fuse::Input::FocusGained__New_1(NULL);
    Focus___lost = ::app::Fuse::Input::FocusLost__New_1(NULL);
    Focus___isFoucsableChanged = ::app::Fuse::Input::InputEvent__New_1(NULL);
    Focus___focusDelegatorHandle = ::app::Fuse::Properties__CreateHandle(NULL);
    Focus___isFocusableHandle = ::app::Fuse::Properties__CreateHandle(NULL);
}

}}}
