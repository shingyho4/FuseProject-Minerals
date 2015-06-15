// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Navigation\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Navigation.ITitleNode.h>
#include <app/Fuse.Navigation.NavigatedArgs.h>
#include <app/Fuse.Navigation.NavigatedHandler.h>
#include <app/Fuse.Navigation.Navigation.h>
#include <app/Fuse.Navigation.NavigationArgs.h>
#include <app/Fuse.Navigation.NavigationHandler.h>
#include <app/Fuse.Navigation.NavigationStateArgs.h>
#include <app/Fuse.Navigation.NavigationStateHandler.h>
#include <app/Fuse.Navigation.TitleChangedArgs.h>
#include <app/Fuse.Navigation.TitleChangedHandler.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.Properties.h>
#include <app/Fuse.PropertyHandle.h>
#include <app/Uno.Action__object__object__.h>
#include <app/Uno.Collections.ICollection__Fuse_Behavior.h>
#include <app/Uno.Collections.IList__Fuse_Behavior.h>
#include <app/Uno.Delegate.h>
#include <app/Uno.Double.h>
#include <app/Uno.Int.h>
#include <app/Uno.Object.h>

namespace app {
namespace Fuse {
namespace Navigation {

::uStaticStrong< ::app::Fuse::PropertyHandle*> Navigation___navigationHandler;
::uStaticStrong< ::app::Fuse::PropertyHandle*> Navigation___navigationStateHandler;
::uStaticStrong< ::app::Fuse::PropertyHandle*> Navigation___navigationProgress;

Navigation__uType* Navigation__typeof()
{
    static Navigation__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Navigation__uType*)::uAllocClassType(sizeof(Navigation__uType), "Fuse.Navigation.Navigation", ::app::Fuse::Behavior__typeof(), 1, 2);
        type->__fp_get_CanGoBack = Navigation__get_CanGoBack;
        type->__fp_get_CanGoForward = Navigation__get_CanGoForward;
        type->__fp_Toggle = Navigation__Toggle;
        type->__fp_GoForward = Navigation__GoForward;
        type->__fp_GoBack = Navigation__GoBack;

        type->__interface_0.__fp_GoForward = (void(*)(void*))Navigation__GoForward;
        type->__interface_0.__fp_GoBack = (void(*)(void*))Navigation__GoBack;
        type->__interface_0.__fp_Toggle = (void(*)(void*, ::app::Fuse::Node*))Navigation__Toggle;
        type->__interface_0.__fp_get_CanGoBack = (bool(*)(void*))Navigation__get_CanGoBack;
        type->__interface_0.__fp_get_CanGoForward = (bool(*)(void*))Navigation__get_CanGoForward;
        type->__interface_0.__fp_add_Navigated = (void(*)(void*, ::uDelegate*))Navigation__add_Navigated;
        type->__interface_0.__fp_remove_Navigated = (void(*)(void*, ::uDelegate*))Navigation__remove_Navigated;

        type->Implements[0] = ::app::Fuse::Navigation::INavigationContext__typeof();

        type->InterfaceOffsets[0] = offsetof(Navigation__uType, __interface_0);

        type->StrongRefOffsets[0] = offsetof(Navigation, TitleChanged);
        type->StrongRefOffsets[1] = offsetof(Navigation, Navigated);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "TitleChanged";
        type->StrongRefNames[1] = "Navigated";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

bool Navigation__get_CanGoBack(Navigation* __this)
{
    return false;
}

bool Navigation__get_CanGoForward(Navigation* __this)
{
    return false;
}

void Navigation__AddHandler(::uStatic* __this, ::app::Fuse::Node* node, ::uDelegate* handler)
{
    ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(node)->Properties())->AddToList(Navigation___navigationHandler, (::uObject*)handler);
}

void Navigation__RemoveHandler(::uStatic* __this, ::app::Fuse::Node* node, ::uDelegate* handler)
{
    ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(node)->Properties())->RemoveFromList(Navigation___navigationHandler, (::uObject*)handler);
}

void Navigation__NotifyNavigation(::uStatic* __this, ::app::Fuse::Node* n, ::app::Fuse::Navigation::NavigationArgs* state)
{
    ::uArray* array_123;

    if (n == NULL)
    {
        return;
    }

    Navigation__SetProgress(NULL, n, ::uPtr< ::app::Fuse::Navigation::NavigationArgs*>(state)->Progress());
    ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->ForeachInList_1(Navigation___navigationHandler, ::uNewDelegateNonVirt(::app::Uno::Action__object__object____typeof(), (const void*)::app::Fuse::Navigation::Navigation__Invoke), (array_123 = ::uNewArray(::uObject__typeof(), 2), ::uPtr< ::uArray*>(array_123)->ItemStrong< ::uObject*>(0) = (::uObject*)n, ::uPtr< ::uArray*>(array_123)->ItemStrong< ::uObject*>(1) = (::uObject*)state, array_123));
}

void Navigation__Invoke(::uStatic* __this, ::uObject* handler, ::uArray* state)
{
    ::uDelegate* h = ::uCast< ::uDelegate*>(handler, ::app::Fuse::Navigation::NavigationHandler__typeof());
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>(::uPtr< ::uArray*>(state)->Item< ::uObject*>(0), ::app::Fuse::Node__typeof());
    ::app::Fuse::Navigation::NavigationArgs* s = ::uCast< ::app::Fuse::Navigation::NavigationArgs*>(state->Item< ::uObject*>(1), ::app::Fuse::Navigation::NavigationArgs__typeof());
    ::uPtr< ::uDelegate*>(h)->InvokeVoid< ::uObject*, ::app::Fuse::Navigation::NavigationArgs*>((::uObject*)n, s);
}

void Navigation__NotifyNavigationState(::uStatic* __this, ::app::Fuse::Node* n, ::app::Fuse::Navigation::NavigationStateArgs* state)
{
    ::uArray* array_124;
    ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->ForeachInList_1(Navigation___navigationStateHandler, ::uNewDelegateNonVirt(::app::Uno::Action__object__object____typeof(), (const void*)::app::Fuse::Navigation::Navigation__InvokeState), (array_124 = ::uNewArray(::uObject__typeof(), 2), ::uPtr< ::uArray*>(array_124)->ItemStrong< ::uObject*>(0) = (::uObject*)n, ::uPtr< ::uArray*>(array_124)->ItemStrong< ::uObject*>(1) = (::uObject*)state, array_124));
}

void Navigation__InvokeState(::uStatic* __this, ::uObject* handler, ::uArray* state)
{
    ::uDelegate* h = ::uCast< ::uDelegate*>(handler, ::app::Fuse::Navigation::NavigationStateHandler__typeof());
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>(::uPtr< ::uArray*>(state)->Item< ::uObject*>(0), ::app::Fuse::Node__typeof());
    ::app::Fuse::Navigation::NavigationStateArgs* s = ::uCast< ::app::Fuse::Navigation::NavigationStateArgs*>(state->Item< ::uObject*>(1), ::app::Fuse::Navigation::NavigationStateArgs__typeof());
    ::uPtr< ::uDelegate*>(h)->InvokeVoid< ::uObject*, ::app::Fuse::Navigation::NavigationStateArgs*>((::uObject*)n, s);
}

void Navigation__SetProgress(::uStatic* __this, ::app::Fuse::Node* n, double progress)
{
    ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(Navigation___navigationProgress, ::uBox(::app::Uno::Double__typeof(), progress));
}

double Navigation__GetProgress(::uStatic* __this, ::app::Fuse::Node* n)
{
    ::uObject* res;

    if (::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->TryGet(Navigation___navigationProgress, &res))
    {
        return ::uUnbox< double>(res);
    }
    else
    {
        return 0.0;
    }
}

void Navigation__Toggle(Navigation* __this, ::app::Fuse::Node* page)
{
}

Navigation* Navigation__GetNavigation(::uStatic* __this, ::app::Fuse::Node* node)
{
    for (int i = 0; i < ::app::Uno::Collections::ICollection__Fuse_Behavior::Count(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Node*>(node)->Behaviors())); i++)
    {
        if (::uIs(::app::Uno::Collections::IList__Fuse_Behavior::Item(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Node*>(node)->Behaviors()), i), Navigation__typeof()))
        {
            return ::uCast< Navigation*>(::app::Uno::Collections::IList__Fuse_Behavior::Item(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Node*>(node)->Behaviors()), i), Navigation__typeof());
        }
    }

    return NULL;
}

Navigation* Navigation__TryFind(::uStatic* __this, ::app::Fuse::Node* node)
{
    while (node != NULL)
    {
        Navigation* n = Navigation__GetNavigation(NULL, node);

        if (n != NULL)
        {
            return n;
        }

        node = ::uPtr< ::app::Fuse::Node*>(node)->ParentNode();
    }

    return NULL;
}

::app::Fuse::Node* Navigation__TryFindPage(::uStatic* __this, ::app::Fuse::Node* node)
{
    ::app::Fuse::Node* prev = node;

    while (node != NULL)
    {
        Navigation* n = Navigation__GetNavigation(NULL, node);

        if (n != NULL)
        {
            return prev;
        }

        prev = node;
        node = ::uPtr< ::app::Fuse::Node*>(node)->ParentNode();
    }

    return NULL;
}

void Navigation__OnTitleChanged(Navigation* __this, ::app::Fuse::Node* newElement)
{
    ::uDelegate* handler = __this->TitleChanged;

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)handler, NULL))
    {
        ::uPtr< ::uDelegate*>(handler)->InvokeVoid< ::uObject*, ::app::Fuse::Navigation::TitleChangedArgs*>((::uObject*)__this, ::app::Fuse::Navigation::TitleChangedArgs__New_2(NULL, ::uAs< ::uObject*>(newElement, ::app::Fuse::Navigation::ITitleNode__typeof())));
    }
}

void Navigation__OnNavigated(Navigation* __this, ::app::Fuse::Node* newElement)
{
    ::uDelegate* handler = __this->Navigated;

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)handler, NULL))
    {
        ::uPtr< ::uDelegate*>(handler)->InvokeVoid< ::uObject*, ::app::Fuse::Navigation::NavigatedArgs*>((::uObject*)__this, ::app::Fuse::Navigation::NavigatedArgs__New_2(NULL, newElement));
    }
}

void Navigation__GoForward(Navigation* __this)
{
}

void Navigation__GoBack(Navigation* __this)
{
}

void Navigation___TypeInit(::uStatic* __this)
{
    Navigation___navigationHandler = ::app::Fuse::Properties__CreateHandle(NULL);
    Navigation___navigationStateHandler = ::app::Fuse::Properties__CreateHandle(NULL);
    Navigation___navigationProgress = ::app::Fuse::Properties__CreateHandle(NULL);
}

void Navigation__add_Navigated(Navigation* __this, ::uDelegate* value)
{
    __this->Navigated = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->Navigated, (::uDelegate*)value), ::app::Fuse::Navigation::NavigatedHandler__typeof());
}

void Navigation__remove_Navigated(Navigation* __this, ::uDelegate* value)
{
    __this->Navigated = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->Navigated, (::uDelegate*)value), ::app::Fuse::Navigation::NavigatedHandler__typeof());
}

}}}
