// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Navigation\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_NAVIGATION_NAVIGATION_H__
#define __APP_FUSE_NAVIGATION_NAVIGATION_H__

#include <app/Fuse.Behavior.h>
#include <app/Fuse.Navigation.INavigationContext.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Navigation { struct NavigationArgs; } } }
namespace app { namespace Fuse { namespace Navigation { struct NavigationStateArgs; } } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Fuse { struct PropertyHandle; } }

namespace app {
namespace Fuse {
namespace Navigation {

struct Navigation;

extern ::uStaticStrong< ::app::Fuse::PropertyHandle*> Navigation___navigationHandler;
extern ::uStaticStrong< ::app::Fuse::PropertyHandle*> Navigation___navigationStateHandler;
extern ::uStaticStrong< ::app::Fuse::PropertyHandle*> Navigation___navigationProgress;

struct Navigation__uType : ::app::Fuse::Behavior__uType
{
    ::app::Fuse::Navigation::INavigationContext __interface_0;
    void(*__fp_Goto)(Navigation*, ::app::Fuse::Node*);
    void(*__fp_Toggle)(Navigation*, ::app::Fuse::Node*);
    void(*__fp_GoForward)(Navigation*);
    void(*__fp_GoBack)(Navigation*);
    bool(*__fp_get_CanGoBack)(Navigation*);
    bool(*__fp_get_CanGoForward)(Navigation*);
};

Navigation__uType* Navigation__typeof();

bool Navigation__get_CanGoBack(Navigation* __this);
bool Navigation__get_CanGoForward(Navigation* __this);
void Navigation__AddHandler(::uStatic* __this, ::app::Fuse::Node* node, ::uDelegate* handler);
void Navigation__RemoveHandler(::uStatic* __this, ::app::Fuse::Node* node, ::uDelegate* handler);
void Navigation__NotifyNavigation(::uStatic* __this, ::app::Fuse::Node* n, ::app::Fuse::Navigation::NavigationArgs* state);
void Navigation__Invoke(::uStatic* __this, ::uObject* handler, ::uArray* state);
void Navigation__NotifyNavigationState(::uStatic* __this, ::app::Fuse::Node* n, ::app::Fuse::Navigation::NavigationStateArgs* state);
void Navigation__InvokeState(::uStatic* __this, ::uObject* handler, ::uArray* state);
void Navigation__SetProgress(::uStatic* __this, ::app::Fuse::Node* n, double progress);
double Navigation__GetProgress(::uStatic* __this, ::app::Fuse::Node* n);
void Navigation__Toggle(Navigation* __this, ::app::Fuse::Node* page);
Navigation* Navigation__GetNavigation(::uStatic* __this, ::app::Fuse::Node* node);
Navigation* Navigation__TryFind(::uStatic* __this, ::app::Fuse::Node* node);
::app::Fuse::Node* Navigation__TryFindPage(::uStatic* __this, ::app::Fuse::Node* node);
void Navigation__OnTitleChanged(Navigation* __this, ::app::Fuse::Node* newElement);
void Navigation__OnNavigated(Navigation* __this, ::app::Fuse::Node* newElement);
void Navigation__GoForward(Navigation* __this);
void Navigation__GoBack(Navigation* __this);
void Navigation___TypeInit(::uStatic* __this);
void Navigation__add_Navigated(Navigation* __this, ::uDelegate* value);
void Navigation__remove_Navigated(Navigation* __this, ::uDelegate* value);

struct Navigation : ::app::Fuse::Behavior
{
    ::uStrong< ::uDelegate*> TitleChanged;
    ::uStrong< ::uDelegate*> Navigated;

    void Goto(::app::Fuse::Node* element) { (((Navigation__uType*)this->__obj_type)->__fp_Goto)(this, element); }
    void Toggle(::app::Fuse::Node* page) { (((Navigation__uType*)this->__obj_type)->__fp_Toggle)(this, page); }
    void OnTitleChanged(::app::Fuse::Node* newElement) { Navigation__OnTitleChanged(this, newElement); }
    void OnNavigated(::app::Fuse::Node* newElement) { Navigation__OnNavigated(this, newElement); }
    void GoForward() { (((Navigation__uType*)this->__obj_type)->__fp_GoForward)(this); }
    void GoBack() { (((Navigation__uType*)this->__obj_type)->__fp_GoBack)(this); }
    void add_Navigated(::uDelegate* value) { Navigation__add_Navigated(this, value); }
    void remove_Navigated(::uDelegate* value) { Navigation__remove_Navigated(this, value); }
    bool CanGoBack() { return (((Navigation__uType*)this->__obj_type)->__fp_get_CanGoBack)(this); }
    bool CanGoForward() { return (((Navigation__uType*)this->__obj_type)->__fp_get_CanGoForward)(this); }
};

}}}

#include <app/Uno.Bool.h>

namespace app {
namespace Fuse {
namespace Navigation {

}}}


#endif
