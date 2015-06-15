// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Navigation\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Gestures.SwipeGestureHelper.h>
#include <app/Fuse.Input.Event__Fuse_Input_PointerMovedHandler__Fuse_Input_Po-5d8e7dec.h>
#include <app/Fuse.Input.Event__Fuse_Input_PointerPressedHandler__Fuse_Input_-d47a11ac.h>
#include <app/Fuse.Input.Event__Fuse_Input_PointerReleasedHandler__Fuse_Input-199508da.h>
#include <app/Fuse.Input.Pointer.h>
#include <app/Fuse.Input.PointerEventArgs.h>
#include <app/Fuse.Input.PointerMovedArgs.h>
#include <app/Fuse.Input.PointerMovedHandler.h>
#include <app/Fuse.Input.PointerPressedArgs.h>
#include <app/Fuse.Input.PointerPressedHandler.h>
#include <app/Fuse.Input.PointerReleasedArgs.h>
#include <app/Fuse.Input.PointerReleasedHandler.h>
#include <app/Fuse.Navigation.EndSeekArgs.h>
#include <app/Fuse.Navigation.INavigationPanel.h>
#include <app/Fuse.Navigation.Navigation.h>
#include <app/Fuse.Navigation.StructuredNavigation.h>
#include <app/Fuse.Navigation.SwipeNavigate.h>
#include <app/Fuse.Navigation.UpdateSeekArgs.h>
#include <app/Fuse.Node.h>
#include <app/Uno.Action.h>
#include <app/Uno.Diagnostics.Debug.h>
#include <app/Uno.Int.h>
#include <app/Uno.Math.h>
#include <app/Uno.Object.h>
#include <app/Uno.String.h>
#include <app/Uno.Time.h>

namespace app {
namespace Fuse {
namespace Navigation {

float SwipeNavigate__elasticDecay;
float SwipeNavigate__elasticScale;

SwipeNavigate__uType* SwipeNavigate__typeof()
{
    static SwipeNavigate__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (SwipeNavigate__uType*)::uAllocClassType(sizeof(SwipeNavigate__uType), "Fuse.Navigation.SwipeNavigate", ::app::Fuse::Behavior__typeof(), 0, 4);
        type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))SwipeNavigate__OnRooted;
        type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))SwipeNavigate__OnUnrooted;

        type->StrongRefOffsets[0] = offsetof(SwipeNavigate, _currentNavigation);
        type->StrongRefOffsets[1] = offsetof(SwipeNavigate, _element);
        type->StrongRefOffsets[2] = offsetof(SwipeNavigate, _horizontalGesture);
        type->StrongRefOffsets[3] = offsetof(SwipeNavigate, _verticalGesture);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_currentNavigation";
        type->StrongRefNames[1] = "_element";
        type->StrongRefNames[2] = "_horizontalGesture";
        type->StrongRefNames[3] = "_verticalGesture";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Fuse::Navigation::StructuredNavigation* SwipeNavigate__get_Navigation(SwipeNavigate* __this)
{
    ::app::Fuse::Node* elm = __this->_element;

    if (elm != NULL)
    {
        ::app::Fuse::Navigation::StructuredNavigation* navigation = ::uAs< ::app::Fuse::Navigation::StructuredNavigation*>(::app::Fuse::Navigation::Navigation__TryFind(NULL, elm), ::app::Fuse::Navigation::StructuredNavigation__typeof());

        if (navigation != NULL)
        {
            return navigation;
        }
    }

    return NULL;
}

int SwipeNavigate__get_SwipeEnds(SwipeNavigate* __this)
{
    return __this->_SwipeEnds;
}

void SwipeNavigate__set_SwipeEnds(SwipeNavigate* __this, int value)
{
    __this->_SwipeEnds = value;
}

int SwipeNavigate__get_SwipeDirection(SwipeNavigate* __this)
{
    return __this->_SwipeDirection;
}

void SwipeNavigate__set_SwipeDirection(SwipeNavigate* __this, int value)
{
    __this->_SwipeDirection = value;
}

float SwipeNavigate__get_VelocityThreshold(SwipeNavigate* __this)
{
    return __this->_VelocityThreshold;
}

void SwipeNavigate__set_VelocityThreshold(SwipeNavigate* __this, float value)
{
    __this->_VelocityThreshold = value;
}

bool SwipeNavigate__get_IsHorizontal(SwipeNavigate* __this)
{
    return (__this->SwipeDirection() == 1) || (__this->SwipeDirection() == 0);
}

::app::Uno::Float2 SwipeNavigate__get_Delta(SwipeNavigate* __this)
{
    return ::app::Uno::Float2__op_Subtraction(NULL, __this->_currentCoord, __this->_previousCoord);
}

::app::Uno::Float2 SwipeNavigate__get_Scale(SwipeNavigate* __this)
{
    return ::app::Fuse::Navigation::INavigationPanel::ActualSize(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Navigation::StructuredNavigation*>(__this->_currentNavigation)->Owner()));
}

::app::Uno::Float2 SwipeNavigate__get_Velocity(SwipeNavigate* __this)
{
    return ::app::Uno::Float2__op_Division_1(NULL, __this->Distance(), (float)__this->ElapsedTime());
}

::app::Uno::Float2 SwipeNavigate__get_Distance(SwipeNavigate* __this)
{
    return ::app::Uno::Float2__op_Subtraction(NULL, __this->_currentCoord, __this->_startCoord);
}

double SwipeNavigate__get_ElapsedTime(SwipeNavigate* __this)
{
    return ::app::Uno::Time__get_FrameTime(NULL) - __this->_startTime;
}

void SwipeNavigate__OnRooted(SwipeNavigate* __this, ::app::Fuse::Node* elm)
{
    __this->_element = elm;
    ::uPtr< ::app::Fuse::Input::Event__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs*>(::app::Fuse::Input::Pointer__get_Pressed(NULL))->AddHandler(elm, ::uNewDelegateNonVirt(::app::Fuse::Input::PointerPressedHandler__typeof(), (const void*)::app::Fuse::Navigation::SwipeNavigate__OnPointerPressed, __this));
    ::uPtr< ::app::Fuse::Input::Event__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs*>(::app::Fuse::Input::Pointer__get_Moved(NULL))->AddHandler(elm, ::uNewDelegateNonVirt(::app::Fuse::Input::PointerMovedHandler__typeof(), (const void*)::app::Fuse::Navigation::SwipeNavigate__OnPointerMoved, __this));
    ::uPtr< ::app::Fuse::Input::Event__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs*>(::app::Fuse::Input::Pointer__get_Released(NULL))->AddHandler(elm, ::uNewDelegateNonVirt(::app::Fuse::Input::PointerReleasedHandler__typeof(), (const void*)::app::Fuse::Navigation::SwipeNavigate__OnPointerReleased, __this));
}

void SwipeNavigate__OnUnrooted(SwipeNavigate* __this, ::app::Fuse::Node* elm)
{
    ::uPtr< ::app::Fuse::Input::Event__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs*>(::app::Fuse::Input::Pointer__get_Pressed(NULL))->RemoveHandler(elm, ::uNewDelegateNonVirt(::app::Fuse::Input::PointerPressedHandler__typeof(), (const void*)::app::Fuse::Navigation::SwipeNavigate__OnPointerPressed, __this));
    ::uPtr< ::app::Fuse::Input::Event__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs*>(::app::Fuse::Input::Pointer__get_Moved(NULL))->RemoveHandler(elm, ::uNewDelegateNonVirt(::app::Fuse::Input::PointerMovedHandler__typeof(), (const void*)::app::Fuse::Navigation::SwipeNavigate__OnPointerMoved, __this));
    ::uPtr< ::app::Fuse::Input::Event__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs*>(::app::Fuse::Input::Pointer__get_Released(NULL))->RemoveHandler(elm, ::uNewDelegateNonVirt(::app::Fuse::Input::PointerReleasedHandler__typeof(), (const void*)::app::Fuse::Navigation::SwipeNavigate__OnPointerReleased, __this));
    __this->_element = NULL;
}

void SwipeNavigate__OnLostCapture(SwipeNavigate* __this)
{
    __this->_down = -1;

    if (__this->_currentNavigation != NULL)
    {
        ::uPtr< ::app::Fuse::Navigation::StructuredNavigation*>(__this->_currentNavigation)->EndSeek(::app::Fuse::Navigation::EndSeekArgs__New_1(NULL, 1));
        __this->_currentNavigation = NULL;
    }
}

void SwipeNavigate__OnPointerPressed(SwipeNavigate* __this, ::uObject* sender, ::app::Fuse::Input::PointerPressedArgs* args)
{
    __this->_currentNavigation = __this->Navigation();

    if (__this->_currentNavigation == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log(NULL, ::uGetConstString("SwipeNavigate: failed to find suitable Navigation object"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Navigation\\0.1.0\\$.uno"), 1689);
        return;
    }

    if (::uPtr< ::app::Fuse::Input::PointerPressedArgs*>(args)->TrySoftCapture((::uObject*)__this, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)::app::Fuse::Navigation::SwipeNavigate__OnLostCapture, __this), NULL))
    {
        __this->_down = ::uPtr< ::app::Fuse::Input::PointerPressedArgs*>(args)->PointIndex();
        __this->_startCoord = __this->_currentCoord = __this->_previousCoord = args->WindowPoint();
        __this->_startTime = ::app::Uno::Time__get_FrameTime(NULL);
    }
}

void SwipeNavigate__OnPointerMoved(SwipeNavigate* __this, ::uObject* sender, ::app::Fuse::Input::PointerMovedArgs* args)
{
    if (__this->_down != ::uPtr< ::app::Fuse::Input::PointerMovedArgs*>(args)->PointIndex())
    {
        return;
    }

    if (__this->_currentNavigation == NULL)
    {
        return;
    }

    __this->_previousCoord = __this->_currentCoord;
    __this->_currentCoord = ::uPtr< ::app::Fuse::Input::PointerMovedArgs*>(args)->WindowPoint();

    if (args->IsHardCapturedTo((::uObject*)__this))
    {
        ::uPtr< ::app::Fuse::Navigation::StructuredNavigation*>(__this->_currentNavigation)->Seek(__this->GetNavigationArgs());
    }
    else
    {
        ::app::Uno::Float2 diff = ::app::Uno::Float2__op_Subtraction(NULL, __this->_currentCoord, __this->_startCoord);
        bool withinBounds = __this->IsHorizontal() ? ::uPtr< ::app::Fuse::Gestures::SwipeGestureHelper*>(__this->_horizontalGesture)->IsWithinBounds(diff) : ::uPtr< ::app::Fuse::Gestures::SwipeGestureHelper*>(__this->_verticalGesture)->IsWithinBounds(diff);

        if (withinBounds)
        {
            if (::uPtr< ::app::Fuse::Input::PointerMovedArgs*>(args)->TryHardCapture((::uObject*)__this, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)::app::Fuse::Navigation::SwipeNavigate__OnLostCapture, __this), NULL))
            {
                ::uPtr< ::app::Fuse::Navigation::StructuredNavigation*>(__this->_currentNavigation)->BeginSeek();
            }
            else
            {
                __this->OnLostCapture();
            }
        }
    }
}

void SwipeNavigate__OnPointerReleased(SwipeNavigate* __this, ::uObject* sender, ::app::Fuse::Input::PointerReleasedArgs* args)
{
    __this->_previousCoord = __this->_currentCoord;
    __this->_currentCoord = ::uPtr< ::app::Fuse::Input::PointerReleasedArgs*>(args)->WindowPoint();
    __this->_down = -1;

    if (__this->_currentNavigation == NULL)
    {
        return;
    }

    if (args->IsHardCapturedTo((::uObject*)__this))
    {
        ::uPtr< ::app::Fuse::Navigation::StructuredNavigation*>(__this->_currentNavigation)->EndSeek(::app::Fuse::Navigation::EndSeekArgs__New_1(NULL, __this->DetermineSnap()));
        ::uPtr< ::app::Fuse::Input::PointerReleasedArgs*>(args)->ReleaseHardCapture((::uObject*)__this);
    }
    else
    {
        if (::uPtr< ::app::Fuse::Input::PointerReleasedArgs*>(args)->IsSoftCapturedTo((::uObject*)__this))
        {
            ::uPtr< ::app::Fuse::Input::PointerReleasedArgs*>(args)->ReleaseSoftCapture((::uObject*)__this);
        }
    }

    __this->_currentNavigation = NULL;
}

::app::Fuse::Navigation::UpdateSeekArgs* SwipeNavigate__GetNavigationArgs(SwipeNavigate* __this)
{
    float delta = float();
    float distance = float();
    float scale = float();

    if (__this->IsHorizontal())
    {
        delta = __this->Delta().X;
        distance = __this->Distance().X;
        scale = __this->Scale().X;
    }
    else
    {
        delta = __this->Delta().Y;
        distance = __this->Distance().Y;
        scale = __this->Scale().Y;
    }

    if ((__this->SwipeDirection() == 1) || (__this->SwipeDirection() == 3))
    {
        delta = -delta;
        distance = -distance;
    }

    ::app::Uno::Float2 limits = ::uPtr< ::app::Fuse::Navigation::StructuredNavigation*>(__this->_currentNavigation)->SeekRange();
    float relDistance = distance / scale;

    switch (__this->SwipeEnds())
    {
        case 0:
        {
            {
                float limitDistance = ::app::Uno::Math__Clamp_1(NULL, relDistance, limits.Item(0), limits.Item(1));
                distance = limitDistance * scale;
                break;
            }
        }
        case 1:
        {
            break;
        }
        case 2:
        {
            {
                float limit = relDistance;

                if (relDistance < limits.Item(0))
                {
                    limit = __this->ElasticDistance(relDistance - limits.Item(0)) + limits.Item(0);
                }
                else if (relDistance > limits.Item(1))
                {
                    limit = __this->ElasticDistance(relDistance - limits.Item(1)) + limits.Item(1);
                }

                distance = limit * scale;
                break;
            }
        }
    }

    return ::app::Fuse::Navigation::UpdateSeekArgs__New_1(NULL, delta, distance, scale, __this->ElapsedTime());
}

float SwipeNavigate__ElasticDistance(SwipeNavigate* __this, float v)
{
    bool neg = false;

    if (v < 0.0f)
    {
        v = -v;
        neg = true;
    }

    v = (::app::Uno::Math__Pow_1(NULL, SwipeNavigate__elasticDecay, v * SwipeNavigate__elasticScale) - 1.0f) / ::app::Uno::Math__Log_1(NULL, SwipeNavigate__elasticDecay);

    if (neg)
    {
        v = -v;
    }

    return v;
}

int SwipeNavigate__DetermineSnap(SwipeNavigate* __this)
{
    float diff = __this->IsHorizontal() ? __this->Velocity().X : __this->Velocity().Y;

    if ((__this->SwipeDirection() == 1) || (__this->SwipeDirection() == 3))
    {
        diff = -diff;
    }

    if (diff < -__this->VelocityThreshold())
    {
        return 0;
    }

    if (diff > __this->VelocityThreshold())
    {
        return 2;
    }

    return 1;
}

void SwipeNavigate___TypeInit(::uStatic* __this)
{
    SwipeNavigate__elasticDecay = 0.015f;
    SwipeNavigate__elasticScale = 0.4f;
}

}}}
