// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Navigation\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_NAVIGATION_STRUCTURED_NAVIGATION_H__
#define __APP_FUSE_NAVIGATION_STRUCTURED_NAVIGATION_H__

#include <app/Fuse.Navigation.INavigationContext.h>
#include <app/Fuse.Navigation.Navigation.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Navigation { struct EndSeekArgs; } } }
namespace app { namespace Fuse { namespace Navigation { struct NavigationTween; } } }
namespace app { namespace Fuse { namespace Navigation { struct UpdateSeekArgs; } } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Uno { struct EventArgs; } }
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Fuse {
namespace Navigation {

struct StructuredNavigation;

struct StructuredNavigation__uType : ::app::Fuse::Navigation::Navigation__uType
{
};

StructuredNavigation__uType* StructuredNavigation__typeof();

int StructuredNavigation__get_Mode(StructuredNavigation* __this);
void StructuredNavigation__set_Mode(StructuredNavigation* __this, int value);
::uObject* StructuredNavigation__get_Owner(StructuredNavigation* __this);
bool StructuredNavigation__get_CanGoForward(StructuredNavigation* __this);
bool StructuredNavigation__get_CanGoBack(StructuredNavigation* __this);
double StructuredNavigation__get_Progress(StructuredNavigation* __this);
void StructuredNavigation__set_Progress(StructuredNavigation* __this, double value);
::app::Uno::Float2 StructuredNavigation__get_SeekRange(StructuredNavigation* __this);
::app::Fuse::Node* StructuredNavigation__get_Back(StructuredNavigation* __this);
::app::Fuse::Node* StructuredNavigation__get_Front(StructuredNavigation* __this);
::app::Fuse::Node* StructuredNavigation__get_Previous(StructuredNavigation* __this);
::app::Fuse::Node* StructuredNavigation__get_Next(StructuredNavigation* __this);
void StructuredNavigation__OnRooted(StructuredNavigation* __this, ::app::Fuse::Node* node);
void StructuredNavigation__OnUnrooted(StructuredNavigation* __this, ::app::Fuse::Node* node);
void StructuredNavigation__OnResized(StructuredNavigation* __this);
int StructuredNavigation__IndexOfChild(StructuredNavigation* __this, ::app::Fuse::Node* n);
void StructuredNavigation__Goto(StructuredNavigation* __this, ::app::Fuse::Node* element);
void StructuredNavigation__TransitionTo(StructuredNavigation* __this, ::app::Fuse::Node* element, bool bypass);
void StructuredNavigation__GoForward(StructuredNavigation* __this);
void StructuredNavigation__GoBack(StructuredNavigation* __this);
void StructuredNavigation__OnChildAdded(StructuredNavigation* __this, ::app::Fuse::Node* child);
void StructuredNavigation__OnChildRemoved(StructuredNavigation* __this, ::app::Fuse::Node* child);
void StructuredNavigation__OnUpdate(StructuredNavigation* __this, ::uObject* sender, ::app::Uno::EventArgs* args);
void StructuredNavigation__EnsureChildAnimationState(StructuredNavigation* __this);
void StructuredNavigation__AnimatorDoneCallback(StructuredNavigation* __this);
void StructuredNavigation__ProgressSetterCallback(StructuredNavigation* __this, double newProgress);
double StructuredNavigation__ProgressGetterCallback(StructuredNavigation* __this);
void StructuredNavigation__BeginSeek(StructuredNavigation* __this);
void StructuredNavigation__Seek(StructuredNavigation* __this, ::app::Fuse::Navigation::UpdateSeekArgs* args);
void StructuredNavigation__EndSeek(StructuredNavigation* __this, ::app::Fuse::Navigation::EndSeekArgs* args);
void StructuredNavigation__ClearForwardHistory(StructuredNavigation* __this);

struct StructuredNavigation : ::app::Fuse::Navigation::Navigation
{
    ::uStrong< ::app::Fuse::Node*> _node;
    ::uStrong< ::uObject*> _panel;
    ::uStrong< ::app::Fuse::Navigation::NavigationTween*> _navigationTween;
    ::uStrong< ::uObject*> _currentAnimatorPlayer;
    double _progress;
    ::uStrong< ::app::Fuse::Node*> _active;
    double _progressBase;
    ::uStrong< ::uDelegate*> ProgressChanged;
    int _Mode;

    void OnResized() { StructuredNavigation__OnResized(this); }
    int IndexOfChild(::app::Fuse::Node* n) { return StructuredNavigation__IndexOfChild(this, n); }
    void TransitionTo(::app::Fuse::Node* element, bool bypass) { StructuredNavigation__TransitionTo(this, element, bypass); }
    void OnChildAdded(::app::Fuse::Node* child) { StructuredNavigation__OnChildAdded(this, child); }
    void OnChildRemoved(::app::Fuse::Node* child) { StructuredNavigation__OnChildRemoved(this, child); }
    void OnUpdate(::uObject* sender, ::app::Uno::EventArgs* args) { StructuredNavigation__OnUpdate(this, sender, args); }
    void EnsureChildAnimationState() { StructuredNavigation__EnsureChildAnimationState(this); }
    void AnimatorDoneCallback() { StructuredNavigation__AnimatorDoneCallback(this); }
    void ProgressSetterCallback(double newProgress) { StructuredNavigation__ProgressSetterCallback(this, newProgress); }
    double ProgressGetterCallback() { return StructuredNavigation__ProgressGetterCallback(this); }
    void BeginSeek() { StructuredNavigation__BeginSeek(this); }
    void Seek(::app::Fuse::Navigation::UpdateSeekArgs* args) { StructuredNavigation__Seek(this, args); }
    void EndSeek(::app::Fuse::Navigation::EndSeekArgs* args) { StructuredNavigation__EndSeek(this, args); }
    void ClearForwardHistory() { StructuredNavigation__ClearForwardHistory(this); }
    int Mode() { return StructuredNavigation__get_Mode(this); }
    void Mode(int value) { StructuredNavigation__set_Mode(this, value); }
    ::uObject* Owner() { return StructuredNavigation__get_Owner(this); }
    double Progress() { return StructuredNavigation__get_Progress(this); }
    void Progress(double value) { StructuredNavigation__set_Progress(this, value); }
    ::app::Uno::Float2 SeekRange();
    ::app::Fuse::Node* Back() { return StructuredNavigation__get_Back(this); }
    ::app::Fuse::Node* Front() { return StructuredNavigation__get_Front(this); }
    ::app::Fuse::Node* Previous() { return StructuredNavigation__get_Previous(this); }
    ::app::Fuse::Node* Next() { return StructuredNavigation__get_Next(this); }
};

}}}

#include <app/Uno.Bool.h>
#include <app/Uno.Double.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Int.h>

namespace app {
namespace Fuse {
namespace Navigation {

inline ::app::Uno::Float2 StructuredNavigation::SeekRange() { return StructuredNavigation__get_SeekRange(this); }

}}}


#endif
