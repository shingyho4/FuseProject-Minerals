// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Navigation\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_NAVIGATION_SWIPE_NAVIGATE_H__
#define __APP_FUSE_NAVIGATION_SWIPE_NAVIGATE_H__

#include <app/Fuse.Behavior.h>
#include <app/Uno.Float2.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Gestures { struct SwipeGestureHelper; } } }
namespace app { namespace Fuse { namespace Input { struct PointerMovedArgs; } } }
namespace app { namespace Fuse { namespace Input { struct PointerPressedArgs; } } }
namespace app { namespace Fuse { namespace Input { struct PointerReleasedArgs; } } }
namespace app { namespace Fuse { namespace Navigation { struct StructuredNavigation; } } }
namespace app { namespace Fuse { namespace Navigation { struct UpdateSeekArgs; } } }
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Navigation {

struct SwipeNavigate;

extern float SwipeNavigate__elasticDecay;
extern float SwipeNavigate__elasticScale;

struct SwipeNavigate__uType : ::app::Fuse::Behavior__uType
{
};

SwipeNavigate__uType* SwipeNavigate__typeof();

::app::Fuse::Navigation::StructuredNavigation* SwipeNavigate__get_Navigation(SwipeNavigate* __this);
int SwipeNavigate__get_SwipeEnds(SwipeNavigate* __this);
void SwipeNavigate__set_SwipeEnds(SwipeNavigate* __this, int value);
int SwipeNavigate__get_SwipeDirection(SwipeNavigate* __this);
void SwipeNavigate__set_SwipeDirection(SwipeNavigate* __this, int value);
float SwipeNavigate__get_VelocityThreshold(SwipeNavigate* __this);
void SwipeNavigate__set_VelocityThreshold(SwipeNavigate* __this, float value);
bool SwipeNavigate__get_IsHorizontal(SwipeNavigate* __this);
::app::Uno::Float2 SwipeNavigate__get_Delta(SwipeNavigate* __this);
::app::Uno::Float2 SwipeNavigate__get_Scale(SwipeNavigate* __this);
::app::Uno::Float2 SwipeNavigate__get_Velocity(SwipeNavigate* __this);
::app::Uno::Float2 SwipeNavigate__get_Distance(SwipeNavigate* __this);
double SwipeNavigate__get_ElapsedTime(SwipeNavigate* __this);
void SwipeNavigate__OnRooted(SwipeNavigate* __this, ::app::Fuse::Node* elm);
void SwipeNavigate__OnUnrooted(SwipeNavigate* __this, ::app::Fuse::Node* elm);
void SwipeNavigate__OnLostCapture(SwipeNavigate* __this);
void SwipeNavigate__OnPointerPressed(SwipeNavigate* __this, ::uObject* sender, ::app::Fuse::Input::PointerPressedArgs* args);
void SwipeNavigate__OnPointerMoved(SwipeNavigate* __this, ::uObject* sender, ::app::Fuse::Input::PointerMovedArgs* args);
void SwipeNavigate__OnPointerReleased(SwipeNavigate* __this, ::uObject* sender, ::app::Fuse::Input::PointerReleasedArgs* args);
::app::Fuse::Navigation::UpdateSeekArgs* SwipeNavigate__GetNavigationArgs(SwipeNavigate* __this);
float SwipeNavigate__ElasticDistance(SwipeNavigate* __this, float v);
int SwipeNavigate__DetermineSnap(SwipeNavigate* __this);
void SwipeNavigate___TypeInit(::uStatic* __this);

struct SwipeNavigate : ::app::Fuse::Behavior
{
    ::uStrong< ::app::Fuse::Navigation::StructuredNavigation*> _currentNavigation;
    ::uStrong< ::app::Fuse::Node*> _element;
    ::app::Uno::Float2 _startCoord;
    ::app::Uno::Float2 _currentCoord;
    ::app::Uno::Float2 _previousCoord;
    double _startTime;
    ::uStrong< ::app::Fuse::Gestures::SwipeGestureHelper*> _horizontalGesture;
    ::uStrong< ::app::Fuse::Gestures::SwipeGestureHelper*> _verticalGesture;
    int _down;
    int _SwipeEnds;
    int _SwipeDirection;
    float _VelocityThreshold;

    void OnLostCapture() { SwipeNavigate__OnLostCapture(this); }
    void OnPointerPressed(::uObject* sender, ::app::Fuse::Input::PointerPressedArgs* args) { SwipeNavigate__OnPointerPressed(this, sender, args); }
    void OnPointerMoved(::uObject* sender, ::app::Fuse::Input::PointerMovedArgs* args) { SwipeNavigate__OnPointerMoved(this, sender, args); }
    void OnPointerReleased(::uObject* sender, ::app::Fuse::Input::PointerReleasedArgs* args) { SwipeNavigate__OnPointerReleased(this, sender, args); }
    ::app::Fuse::Navigation::UpdateSeekArgs* GetNavigationArgs() { return SwipeNavigate__GetNavigationArgs(this); }
    float ElasticDistance(float v) { return SwipeNavigate__ElasticDistance(this, v); }
    int DetermineSnap() { return SwipeNavigate__DetermineSnap(this); }
    ::app::Fuse::Navigation::StructuredNavigation* Navigation() { return SwipeNavigate__get_Navigation(this); }
    int SwipeEnds() { return SwipeNavigate__get_SwipeEnds(this); }
    void SwipeEnds(int value) { SwipeNavigate__set_SwipeEnds(this, value); }
    int SwipeDirection() { return SwipeNavigate__get_SwipeDirection(this); }
    void SwipeDirection(int value) { SwipeNavigate__set_SwipeDirection(this, value); }
    float VelocityThreshold() { return SwipeNavigate__get_VelocityThreshold(this); }
    void VelocityThreshold(float value) { SwipeNavigate__set_VelocityThreshold(this, value); }
    bool IsHorizontal() { return SwipeNavigate__get_IsHorizontal(this); }
    ::app::Uno::Float2 Delta();
    ::app::Uno::Float2 Scale();
    ::app::Uno::Float2 Velocity();
    ::app::Uno::Float2 Distance();
    double ElapsedTime() { return SwipeNavigate__get_ElapsedTime(this); }
};

}}}

#include <app/Uno.Bool.h>
#include <app/Uno.Double.h>
#include <app/Uno.Float.h>

namespace app {
namespace Fuse {
namespace Navigation {

inline ::app::Uno::Float2 SwipeNavigate::Delta() { return SwipeNavigate__get_Delta(this); }
inline ::app::Uno::Float2 SwipeNavigate::Scale() { return SwipeNavigate__get_Scale(this); }
inline ::app::Uno::Float2 SwipeNavigate::Velocity() { return SwipeNavigate__get_Velocity(this); }
inline ::app::Uno::Float2 SwipeNavigate::Distance() { return SwipeNavigate__get_Distance(this); }

}}}


#endif
