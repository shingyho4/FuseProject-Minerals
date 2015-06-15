// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Input.Event__Fuse_Input_InputEventHandler__Fuse_Input_Inpu-b68a4a8c.h>
#include <app/Fuse.Input.InputEventArgs.h>
#include <app/Fuse.Input.InputEventHandler.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.Properties.h>
#include <app/Fuse.PropertyHandle.h>
#include <app/Uno.Action__object__object__.h>
#include <app/Uno.Collections.List__Fuse_Input_InputEventHandler.h>
#include <app/Uno.Diagnostics.Debug.h>
#include <app/Uno.Int.h>
#include <app/Uno.String.h>

namespace app {
namespace Fuse {
namespace Input {

Event__Fuse_Input_InputEventHandler__Fuse_Input_InputEventArgs__uType* Event__Fuse_Input_InputEventHandler__Fuse_Input_InputEventArgs__typeof()
{
    static Event__Fuse_Input_InputEventHandler__Fuse_Input_InputEventArgs__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Event__Fuse_Input_InputEventHandler__Fuse_Input_InputEventArgs__uType*)::uAllocClassType(sizeof(Event__Fuse_Input_InputEventHandler__Fuse_Input_InputEventArgs__uType), "Fuse.Input.Event<Fuse.Input.InputEventHandler,Fuse.Input.InputEventArgs>", ::uObject__typeof(), 0, 2);
        type->StrongRefOffsets[0] = offsetof(Event__Fuse_Input_InputEventHandler__Fuse_Input_InputEventArgs, _handle);
        type->StrongRefOffsets[1] = offsetof(Event__Fuse_Input_InputEventHandler__Fuse_Input_InputEventArgs, _globalHandlers);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_handle";
        type->StrongRefNames[1] = "_globalHandlers";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void Event__Fuse_Input_InputEventHandler__Fuse_Input_InputEventArgs__InvokeGlobalHandlers(Event__Fuse_Input_InputEventHandler__Fuse_Input_InputEventArgs* __this, ::app::Fuse::Node* node, ::app::Fuse::Input::InputEventArgs* args)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Input_InputEventHandler*>(__this->_globalHandlers)->Count() > 0)
    {
        for (int i = 0; i < ::uPtr< ::app::Uno::Collections::List__Fuse_Input_InputEventHandler*>(__this->_globalHandlers)->Count(); i++)
        {
            __this->Invoke(::uPtr< ::app::Uno::Collections::List__Fuse_Input_InputEventHandler*>(__this->_globalHandlers)->Item(i), (::uObject*)node, args);
        }
    }
}

void Event__Fuse_Input_InputEventHandler__Fuse_Input_InputEventArgs__RaiseWithoutBubble(Event__Fuse_Input_InputEventHandler__Fuse_Input_InputEventArgs* __this, ::app::Fuse::Input::InputEventArgs* args, int type)
{
    __this->Raise(args, type, false);
}

void Event__Fuse_Input_InputEventHandler__Fuse_Input_InputEventArgs__Raise(Event__Fuse_Input_InputEventHandler__Fuse_Input_InputEventArgs* __this, ::app::Fuse::Input::InputEventArgs* args, int type, bool bubble)
{
    ::uArray* array_123;
    ::app::Fuse::Node* node = ::uPtr< ::app::Fuse::Input::InputEventArgs*>(args)->Node();
    __this->InvokeGlobalHandlers(node, args);
    ::uDelegate* handler = NULL;

    switch (type)
    {
        case 0:
        {
            handler = ::uNewDelegateNonVirt(::app::Uno::Action__object__object____typeof(), (const void*)::app::Fuse::Input::Event__Fuse_Input_InputEventHandler__Fuse_Input_InputEventArgs__OnRaise, __this);
            break;
        }
        case 2:
        {
            handler = ::uNewDelegateNonVirt(::app::Uno::Action__object__object____typeof(), (const void*)::app::Fuse::Input::Event__Fuse_Input_InputEventHandler__Fuse_Input_InputEventArgs__OnRaise, __this);
            break;
        }
        case 1:
        {
            handler = ::uNewDelegateNonVirt(::app::Uno::Action__object__object____typeof(), (const void*)::app::Fuse::Input::Event__Fuse_Input_InputEventHandler__Fuse_Input_InputEventArgs__OnRaiseEnabled, __this);
            break;
        }
        default:
        {
            ::app::Uno::Diagnostics::Debug__Log(NULL, ::uGetConstString("Invalid RaiseType for event"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\FuseCore\\0.1.0\\Input\\$.uno"), 104);
            return;
        }
    }

    while (node != NULL)
    {
        ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(node)->Properties())->ForeachInList_1(__this->_handle, handler, (array_123 = ::uNewArray(::uObject__typeof(), 2), ::uPtr< ::uArray*>(array_123)->ItemStrong< ::uObject*>(0) = (::uObject*)node, ::uPtr< ::uArray*>(array_123)->ItemStrong< ::uObject*>(1) = (::uObject*)args, array_123));

        if (!bubble)
        {
            break;
        }

        node = ::uPtr< ::app::Fuse::Node*>(node)->ParentNode();
    }
}

void Event__Fuse_Input_InputEventHandler__Fuse_Input_InputEventArgs__OnRaise(Event__Fuse_Input_InputEventHandler__Fuse_Input_InputEventArgs* __this, ::uObject* target, ::uArray* args)
{
    ::uDelegate* handler = ::uCast< ::uDelegate*>(target, ::app::Fuse::Input::InputEventHandler__typeof());
    ::app::Fuse::Node* node = ::uCast< ::app::Fuse::Node*>(::uPtr< ::uArray*>(args)->Item< ::uObject*>(0), ::app::Fuse::Node__typeof());
    ::app::Fuse::Input::InputEventArgs* eventArgs = ::uCast< ::app::Fuse::Input::InputEventArgs*>(args->Item< ::uObject*>(1), ::app::Fuse::Input::InputEventArgs__typeof());
    __this->Invoke(handler, (::uObject*)node, eventArgs);
}

void Event__Fuse_Input_InputEventHandler__Fuse_Input_InputEventArgs__OnRaiseEnabled(Event__Fuse_Input_InputEventHandler__Fuse_Input_InputEventArgs* __this, ::uObject* target, ::uArray* args)
{
    ::uDelegate* handler = ::uCast< ::uDelegate*>(target, ::app::Fuse::Input::InputEventHandler__typeof());
    ::app::Fuse::Node* node = ::uCast< ::app::Fuse::Node*>(::uPtr< ::uArray*>(args)->Item< ::uObject*>(0), ::app::Fuse::Node__typeof());
    ::app::Fuse::Input::InputEventArgs* eventArgs = ::uCast< ::app::Fuse::Input::InputEventArgs*>(args->Item< ::uObject*>(1), ::app::Fuse::Input::InputEventArgs__typeof());

    if (::uPtr< ::app::Fuse::Node*>(node)->IsEnabled())
    {
        __this->Invoke(handler, (::uObject*)node, eventArgs);
    }
}

void Event__Fuse_Input_InputEventHandler__Fuse_Input_InputEventArgs___ObjInit(Event__Fuse_Input_InputEventHandler__Fuse_Input_InputEventArgs* __this)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    __this->_globalHandlers = ::app::Uno::Collections::List__Fuse_Input_InputEventHandler__New_1(NULL);
}

}}}
