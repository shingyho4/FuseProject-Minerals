// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Input.Event__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs.h>
#include <app/Fuse.Input.FocusLostArgs.h>
#include <app/Fuse.Input.FocusLostHandler.h>
#include <app/Fuse.Input.InputEventArgs.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.Properties.h>
#include <app/Fuse.PropertyHandle.h>
#include <app/Uno.Action__object__object__.h>
#include <app/Uno.Collections.List__Fuse_Input_FocusLostHandler.h>
#include <app/Uno.Diagnostics.Debug.h>
#include <app/Uno.Int.h>
#include <app/Uno.String.h>

namespace app {
namespace Fuse {
namespace Input {

Event__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs__uType* Event__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs__typeof()
{
    static Event__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Event__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs__uType*)::uAllocClassType(sizeof(Event__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs__uType), "Fuse.Input.Event<Fuse.Input.FocusLostHandler,Fuse.Input.FocusLostArgs>", ::uObject__typeof(), 0, 2);
        type->StrongRefOffsets[0] = offsetof(Event__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs, _handle);
        type->StrongRefOffsets[1] = offsetof(Event__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs, _globalHandlers);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_handle";
        type->StrongRefNames[1] = "_globalHandlers";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void Event__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs__AddHandler(Event__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs* __this, ::app::Fuse::Node* node, ::uDelegate* handler)
{
    ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(node)->Properties())->AddToList(__this->_handle, (::uObject*)handler);
}

void Event__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs__RemoveHandler(Event__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs* __this, ::app::Fuse::Node* node, ::uDelegate* handler)
{
    ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(node)->Properties())->RemoveFromList(__this->_handle, (::uObject*)handler);
}

void Event__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs__InvokeGlobalHandlers(Event__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs* __this, ::app::Fuse::Node* node, ::app::Fuse::Input::FocusLostArgs* args)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Input_FocusLostHandler*>(__this->_globalHandlers)->Count() > 0)
    {
        for (int i = 0; i < ::uPtr< ::app::Uno::Collections::List__Fuse_Input_FocusLostHandler*>(__this->_globalHandlers)->Count(); i++)
        {
            __this->Invoke(::uPtr< ::app::Uno::Collections::List__Fuse_Input_FocusLostHandler*>(__this->_globalHandlers)->Item(i), (::uObject*)node, args);
        }
    }
}

void Event__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs__RaiseWithBubble(Event__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs* __this, ::app::Fuse::Input::FocusLostArgs* args, int type)
{
    __this->Raise(args, type, true);
}

void Event__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs__Raise(Event__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs* __this, ::app::Fuse::Input::FocusLostArgs* args, int type, bool bubble)
{
    ::uArray* array_123;
    ::app::Fuse::Node* node = ::uPtr< ::app::Fuse::Input::InputEventArgs*>((::app::Fuse::Input::InputEventArgs*)args)->Node();
    __this->InvokeGlobalHandlers(node, args);
    ::uDelegate* handler = NULL;

    switch (type)
    {
        case 0:
        {
            handler = ::uNewDelegateNonVirt(::app::Uno::Action__object__object____typeof(), (const void*)::app::Fuse::Input::Event__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs__OnRaise, __this);
            break;
        }
        case 2:
        {
            handler = ::uNewDelegateNonVirt(::app::Uno::Action__object__object____typeof(), (const void*)::app::Fuse::Input::Event__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs__OnRaise, __this);
            break;
        }
        case 1:
        {
            handler = ::uNewDelegateNonVirt(::app::Uno::Action__object__object____typeof(), (const void*)::app::Fuse::Input::Event__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs__OnRaiseEnabled, __this);
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

void Event__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs__OnRaise(Event__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs* __this, ::uObject* target, ::uArray* args)
{
    ::uDelegate* handler = ::uCast< ::uDelegate*>(target, ::app::Fuse::Input::FocusLostHandler__typeof());
    ::app::Fuse::Node* node = ::uCast< ::app::Fuse::Node*>(::uPtr< ::uArray*>(args)->Item< ::uObject*>(0), ::app::Fuse::Node__typeof());
    ::app::Fuse::Input::FocusLostArgs* eventArgs = ::uCast< ::app::Fuse::Input::FocusLostArgs*>(args->Item< ::uObject*>(1), ::app::Fuse::Input::FocusLostArgs__typeof());
    __this->Invoke(handler, (::uObject*)node, eventArgs);
}

void Event__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs__OnRaiseEnabled(Event__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs* __this, ::uObject* target, ::uArray* args)
{
    ::uDelegate* handler = ::uCast< ::uDelegate*>(target, ::app::Fuse::Input::FocusLostHandler__typeof());
    ::app::Fuse::Node* node = ::uCast< ::app::Fuse::Node*>(::uPtr< ::uArray*>(args)->Item< ::uObject*>(0), ::app::Fuse::Node__typeof());
    ::app::Fuse::Input::FocusLostArgs* eventArgs = ::uCast< ::app::Fuse::Input::FocusLostArgs*>(args->Item< ::uObject*>(1), ::app::Fuse::Input::FocusLostArgs__typeof());

    if (::uPtr< ::app::Fuse::Node*>(node)->IsEnabled())
    {
        __this->Invoke(handler, (::uObject*)node, eventArgs);
    }
}

void Event__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs___ObjInit(Event__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs* __this)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    __this->_globalHandlers = ::app::Uno::Collections::List__Fuse_Input_FocusLostHandler__New_1(NULL);
}

}}}
