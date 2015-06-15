// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.HitTestResult.h>
#include <app/Fuse.Input.Capturer.h>
#include <app/Fuse.Input.Event__Fuse_Input_PointerEnteredHandler__Fuse_Input_-205a664c.h>
#include <app/Fuse.Input.Event__Fuse_Input_PointerLeftHandler__Fuse_Input_Poi-d793c7d6.h>
#include <app/Fuse.Input.Event__Fuse_Input_PointerMovedHandler__Fuse_Input_Po-5d8e7dec.h>
#include <app/Fuse.Input.Event__Fuse_Input_PointerPressedHandler__Fuse_Input_-d47a11ac.h>
#include <app/Fuse.Input.Event__Fuse_Input_PointerReleasedHandler__Fuse_Input-199508da.h>
#include <app/Fuse.Input.Event__Fuse_Input_PointerWheelMovedHandler__Fuse_Inp-684e3858.h>
#include <app/Fuse.Input.Focus.h>
#include <app/Fuse.Input.HitTestHelpers.h>
#include <app/Fuse.Input.InputEventArgs.h>
#include <app/Fuse.Input.Pointer.h>
#include <app/Fuse.Input.Pointer_PELHolder.h>
#include <app/Fuse.Input.Pointer_PointerRecord.h>
#include <app/Fuse.Input.PointerEntered.h>
#include <app/Fuse.Input.PointerEnteredArgs.h>
#include <app/Fuse.Input.PointerEventArgs.h>
#include <app/Fuse.Input.PointerEventData.h>
#include <app/Fuse.Input.PointerLeft.h>
#include <app/Fuse.Input.PointerLeftArgs.h>
#include <app/Fuse.Input.PointerMoved.h>
#include <app/Fuse.Input.PointerMovedArgs.h>
#include <app/Fuse.Input.PointerPressed.h>
#include <app/Fuse.Input.PointerPressedArgs.h>
#include <app/Fuse.Input.PointerReleased.h>
#include <app/Fuse.Input.PointerReleasedArgs.h>
#include <app/Fuse.Input.PointerWheelMoved.h>
#include <app/Fuse.Input.PointerWheelMovedArgs.h>
#include <app/Fuse.Node.h>
#include <app/Uno.Action.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Collections.Dictionary__int__Fuse_Input_Capturer.h>
#include <app/Uno.Collections.Dictionary__int__Fuse_Input_Pointer_PointerRecord.h>
#include <app/Uno.Collections.Dictionary__int__Uno_Collections_IList_Fuse_Inp-e2be1e95.h>
#include <app/Uno.Collections.Dictionary__int__Uno_Collections_List_Fuse_Inpu-e996adb.h>
#include <app/Uno.Collections.Dictionary2_Enumerator__int__Fuse_Input_Capturer.h>
#include <app/Uno.Collections.Dictionary2_Enumerator__int__Fuse_Input_Pointer-99c36562.h>
#include <app/Uno.Collections.Dictionary2_Enumerator__int__Uno_Collections_IL-552901c6.h>
#include <app/Uno.Collections.EnumerableExtensions.h>
#include <app/Uno.Collections.ICollection__Fuse_Input_Capturer.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Input_Capturer.h>
#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Input_Capturer.h>
#include <app/Uno.Collections.IList__Fuse_Input_Capturer.h>
#include <app/Uno.Collections.KeyValuePair__int__Fuse_Input_Capturer.h>
#include <app/Uno.Collections.KeyValuePair__int__Fuse_Input_Pointer_PointerRecord.h>
#include <app/Uno.Collections.KeyValuePair__int__Uno_Collections_IList_Fuse_I-6c4f2be3.h>
#include <app/Uno.Collections.List__Fuse_Input_Capturer.h>
#include <app/Uno.Collections.List__Fuse_Input_Pointer_PELHolder.h>
#include <app/Uno.Collections.List__int.h>
#include <app/Uno.Collections.List1_Enumerator__int.h>
#include <app/Uno.Delegate.h>
#include <app/Uno.Diagnostics.Debug.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Int.h>
#include <app/Uno.Object.h>
#include <app/Uno.String.h>
#include <app/Uno.Vector.h>

namespace app {
namespace Fuse {
namespace Input {

::uStaticStrong< ::app::Fuse::Input::PointerPressed*> Pointer___pressed;
::uStaticStrong< ::app::Fuse::Input::PointerMoved*> Pointer___moved;
::uStaticStrong< ::app::Fuse::Input::PointerReleased*> Pointer___released;
::uStaticStrong< ::app::Fuse::Input::PointerEntered*> Pointer___entered;
::uStaticStrong< ::app::Fuse::Input::PointerLeft*> Pointer___left;
::uStaticStrong< ::app::Fuse::Input::PointerWheelMoved*> Pointer___wheelMoved;
::uStaticStrong< ::app::Uno::Collections::Dictionary__int__Fuse_Input_Pointer_PointerRecord*> Pointer___pointersDown;
::uStaticStrong< ::app::Uno::Collections::Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer_*> Pointer___softCapturers;
::uStaticStrong< ::app::Uno::Collections::Dictionary__int__Fuse_Input_Capturer*> Pointer___hardCapturers;
::uStaticStrong< ::app::Uno::Collections::Dictionary__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder_*> Pointer___lastHitNodes;
::app::Uno::Float2 Pointer___Coord;

Pointer__uType* Pointer__typeof()
{
    static Pointer__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Pointer__uType*)::uAllocClassType(sizeof(Pointer__uType), "Fuse.Input.Pointer");
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Fuse::Input::Event__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs* Pointer__get_Pressed(::uStatic* __this)
{
    return (::app::Fuse::Input::Event__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs*)Pointer___pressed;
}

::app::Fuse::Input::Event__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs* Pointer__get_Moved(::uStatic* __this)
{
    return (::app::Fuse::Input::Event__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs*)Pointer___moved;
}

::app::Fuse::Input::Event__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs* Pointer__get_Released(::uStatic* __this)
{
    return (::app::Fuse::Input::Event__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs*)Pointer___released;
}

::app::Fuse::Input::Event__Fuse_Input_PointerEnteredHandler__Fuse_Input_PointerEnteredArgs* Pointer__get_Entered(::uStatic* __this)
{
    return (::app::Fuse::Input::Event__Fuse_Input_PointerEnteredHandler__Fuse_Input_PointerEnteredArgs*)Pointer___entered;
}

::app::Fuse::Input::Event__Fuse_Input_PointerLeftHandler__Fuse_Input_PointerLeftArgs* Pointer__get_Left(::uStatic* __this)
{
    return (::app::Fuse::Input::Event__Fuse_Input_PointerLeftHandler__Fuse_Input_PointerLeftArgs*)Pointer___left;
}

::app::Fuse::Input::Event__Fuse_Input_PointerWheelMovedHandler__Fuse_Input_PointerWheelMovedArgs* Pointer__get_WheelMoved(::uStatic* __this)
{
    return (::app::Fuse::Input::Event__Fuse_Input_PointerWheelMovedHandler__Fuse_Input_PointerWheelMovedArgs*)Pointer___wheelMoved;
}

::app::Uno::Float2 Pointer__get_Coord(::uStatic* __this)
{
    return Pointer___Coord;
}

void Pointer__set_Coord(::uStatic* __this, ::app::Uno::Float2 value)
{
    Pointer___Coord = value;
}

bool Pointer__IsPressed_1(::uStatic* __this, int pointIndex)
{
    for (::app::Uno::Collections::Dictionary2_Enumerator__int__Fuse_Input_Pointer_PointerRecord enum_124 = ::uPtr< ::app::Uno::Collections::Dictionary__int__Fuse_Input_Pointer_PointerRecord*>(Pointer___pointersDown)->GetEnumerator(); enum_124.MoveNext(); )
    {
        ::app::Uno::Collections::KeyValuePair__int__Fuse_Input_Pointer_PointerRecord p = enum_124.Current();

        if (p.Key() == pointIndex)
        {
            return true;
        }
    }

    return false;
}

::app::Fuse::Input::Capturer* Pointer__GetSoftCapturer(::uStatic* __this, int pointIndex)
{
    if (::uPtr< ::app::Uno::Collections::Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer_*>(Pointer___softCapturers)->ContainsKey(pointIndex))
    {
        ::uObject* list = ::uPtr< ::app::Uno::Collections::Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer_*>(Pointer___softCapturers)->Item(pointIndex);

        while (::app::Uno::Collections::ICollection__Fuse_Input_Capturer::Count(::uPtr< ::uObject*>(list)) > 0)
        {
            ::app::Fuse::Input::Capturer* n = ::app::Uno::Collections::EnumerableExtensions__First__Fuse_Input_Capturer(NULL, (::uObject*)list);

            if (::uPtr< ::app::Fuse::Input::Capturer*>(n)->IsSuitable())
            {
                return n;
            }

            ::uPtr< ::uDelegate*>(::uPtr< ::app::Fuse::Input::Capturer*>(n)->LostCallback())->InvokeVoid();
            ::app::Uno::Collections::IList__Fuse_Input_Capturer::RemoveAt(::uPtr< ::uObject*>(list), 0);
        }
    }

    return NULL;
}

bool Pointer__IsSoftCaptured_1(::uStatic* __this, int pointIndex, ::uObject* capturerIdentity)
{
    if (::uPtr< ::app::Uno::Collections::Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer_*>(Pointer___softCapturers)->ContainsKey(pointIndex))
    {
        ::uObject* sc = ::uPtr< ::app::Uno::Collections::Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer_*>(Pointer___softCapturers)->Item(pointIndex);

        for (::uObject* enum_125 = ::app::Uno::Collections::IEnumerable__Fuse_Input_Capturer::GetEnumerator(::uPtr< ::uObject*>(sc)); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_125)); )
        {
            ::app::Fuse::Input::Capturer* s = ::app::Uno::Collections::IEnumerator__Fuse_Input_Capturer::Current(::uPtr< ::uObject*>(enum_125));

            if (::uPtr< ::app::Fuse::Input::Capturer*>(s)->Identity() == capturerIdentity)
            {
                return true;
            }
        }
    }

    return false;
}

bool Pointer__SoftCapture(::uStatic* __this, int pointIndex, ::app::Fuse::Node* softCapturer, ::uObject* identity, ::uDelegate* lostCallback)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)lostCallback, NULL))
    {
        U_THROW(::app::Uno::Exception__New_1(NULL, ::uGetConstString("SoftCapture requires lostCallback Action")));
    }

    if (identity == NULL)
    {
        U_THROW(::app::Uno::Exception__New_1(NULL, ::uGetConstString("SoftCapture requires identity object")));
    }

    if (softCapturer == NULL)
    {
        U_THROW(::app::Uno::Exception__New_1(NULL, ::uGetConstString("SoftCapture requires softCapturer Node")));
    }

    if (!::uPtr< ::app::Fuse::Node*>(softCapturer)->IsEnabled() || !::uPtr< ::app::Fuse::Node*>(softCapturer)->IsRooted())
    {
        ::app::Uno::Diagnostics::Debug__Log(NULL, ::uGetConstString("SoftCapture can only be done on rooted enabled node"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\FuseCore\\0.1.0\\Input\\$.uno"), 1089);
        return false;
    }

    if (Pointer__GetHardCapturer(NULL, pointIndex) != NULL)
    {
        return false;
    }

    if (!::uPtr< ::app::Uno::Collections::Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer_*>(Pointer___softCapturers)->ContainsKey(pointIndex))
    {
        ::uPtr< ::app::Uno::Collections::Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer_*>(Pointer___softCapturers)->Add(pointIndex, (::uObject*)::app::Uno::Collections::List__Fuse_Input_Capturer__New_1(NULL));
    }

    ::app::Uno::Collections::ICollection__Fuse_Input_Capturer::Add(::uPtr< ::uObject*>(::uPtr< ::app::Uno::Collections::Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer_*>(Pointer___softCapturers)->Item(pointIndex)), ::app::Fuse::Input::Capturer__New_1(NULL, softCapturer, identity, lostCallback));
    return true;
}

void Pointer__ReleaseSoftCapture(::uStatic* __this, int pointIndex, ::uObject* identity)
{
    if (::uPtr< ::app::Uno::Collections::Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer_*>(Pointer___softCapturers)->ContainsKey(pointIndex))
    {
        ::uObject* sc = ::uPtr< ::app::Uno::Collections::Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer_*>(Pointer___softCapturers)->Item(pointIndex);

        for (int i = 0; i < ::app::Uno::Collections::ICollection__Fuse_Input_Capturer::Count(::uPtr< ::uObject*>(sc)); i++)
        {
            if (::uPtr< ::app::Fuse::Input::Capturer*>(::app::Uno::Collections::IList__Fuse_Input_Capturer::Item(::uPtr< ::uObject*>(sc), i))->Identity() == identity)
            {
                ::app::Uno::Collections::IList__Fuse_Input_Capturer::RemoveAt(::uPtr< ::uObject*>(sc), i--);
            }
        }
    }
}

void Pointer__ReleaseAllCaptures(::uStatic* __this, ::uObject* identity)
{
    for (::app::Uno::Collections::Dictionary2_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer_ enum_126 = ::uPtr< ::app::Uno::Collections::Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer_*>(Pointer___softCapturers)->GetEnumerator(); enum_126.MoveNext(); )
    {
        ::app::Uno::Collections::KeyValuePair__int__Uno_Collections_IList_Fuse_Input_Capturer_ sc = enum_126.Current();

        for (int i = ::app::Uno::Collections::ICollection__Fuse_Input_Capturer::Count(::uPtr< ::uObject*>(sc.Value())) - 1; i >= 0; --i)
        {
            if (::uPtr< ::app::Fuse::Input::Capturer*>(::app::Uno::Collections::IList__Fuse_Input_Capturer::Item(::uPtr< ::uObject*>(sc.Value()), i))->Identity() == identity)
            {
                ::app::Uno::Collections::IList__Fuse_Input_Capturer::RemoveAt(::uPtr< ::uObject*>(sc.Value()), i);
            }
        }
    }

    ::app::Uno::Collections::List__int* remove = ::app::Uno::Collections::List__int__New_1(NULL);

    for (::app::Uno::Collections::Dictionary2_Enumerator__int__Fuse_Input_Capturer enum_127 = ::uPtr< ::app::Uno::Collections::Dictionary__int__Fuse_Input_Capturer*>(Pointer___hardCapturers)->GetEnumerator(); enum_127.MoveNext(); )
    {
        ::app::Uno::Collections::KeyValuePair__int__Fuse_Input_Capturer hc = enum_127.Current();

        if (::uPtr< ::app::Fuse::Input::Capturer*>(hc.Value())->Identity() == identity)
        {
            ::uPtr< ::app::Uno::Collections::List__int*>(remove)->Add(hc.Key());
        }
    }

    for (::app::Uno::Collections::List1_Enumerator__int enum_128 = ::uPtr< ::app::Uno::Collections::List__int*>(remove)->GetEnumerator(); enum_128.MoveNext(); )
    {
        int r = enum_128.Current();
        ::uPtr< ::app::Uno::Collections::Dictionary__int__Fuse_Input_Capturer*>(Pointer___hardCapturers)->Remove(r);
    }
}

bool Pointer__IsHardCaptured(::uStatic* __this, int pointIndex)
{
    return ::uPtr< ::app::Uno::Collections::Dictionary__int__Fuse_Input_Capturer*>(Pointer___hardCapturers)->ContainsKey(pointIndex);
}

bool Pointer__IsHardCaptured_1(::uStatic* __this, int pointIndex, ::uObject* behavior)
{
    ::app::Fuse::Input::Capturer* hc = Pointer__GetHardCapturer(NULL, pointIndex);
    return (hc != NULL) && (::uPtr< ::app::Fuse::Input::Capturer*>(hc)->Identity() == behavior);
}

::app::Fuse::Input::Capturer* Pointer__GetHardCapturer(::uStatic* __this, int pointIndex)
{
    if (::uPtr< ::app::Uno::Collections::Dictionary__int__Fuse_Input_Capturer*>(Pointer___hardCapturers)->ContainsKey(pointIndex))
    {
        ::app::Fuse::Input::Capturer* hc = ::uPtr< ::app::Uno::Collections::Dictionary__int__Fuse_Input_Capturer*>(Pointer___hardCapturers)->Item(pointIndex);

        if (::uPtr< ::app::Fuse::Input::Capturer*>(hc)->IsSuitable())
        {
            return hc;
        }

        ::uPtr< ::uDelegate*>(::uPtr< ::app::Fuse::Input::Capturer*>(hc)->LostCallback())->InvokeVoid();
        ::uPtr< ::app::Uno::Collections::Dictionary__int__Fuse_Input_Capturer*>(Pointer___hardCapturers)->Remove(pointIndex);
    }

    return NULL;
}

bool Pointer__HardCapture(::uStatic* __this, int pointIndex, ::app::Fuse::Node* node, ::uObject* identity, ::uDelegate* lostCallback)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)lostCallback, NULL))
    {
        U_THROW(::app::Uno::Exception__New_1(NULL, ::uGetConstString("HardCapture requires lostCallback Action")));
    }

    if (identity == NULL)
    {
        U_THROW(::app::Uno::Exception__New_1(NULL, ::uGetConstString("HardCapture requires identity object")));
    }

    if (node == NULL)
    {
        U_THROW(::app::Uno::Exception__New_1(NULL, ::uGetConstString("HardCapture requires Node")));
    }

    if (!::uPtr< ::app::Fuse::Node*>(node)->IsEnabled() || !::uPtr< ::app::Fuse::Node*>(node)->IsRooted())
    {
        ::app::Uno::Diagnostics::Debug__Log(NULL, ::uGetConstString("HardCapture can only be done on rooted enabled node"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\FuseCore\\0.1.0\\Input\\$.uno"), 1180);
        return false;
    }

    if (::uPtr< ::app::Uno::Collections::Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer_*>(Pointer___softCapturers)->ContainsKey(pointIndex))
    {
        ::uObject* sc = ::uPtr< ::app::Uno::Collections::Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer_*>(Pointer___softCapturers)->Item(pointIndex);

        for (int i = 0; i < ::app::Uno::Collections::ICollection__Fuse_Input_Capturer::Count(::uPtr< ::uObject*>(sc)); i++)
        {
            if (::uPtr< ::app::Fuse::Input::Capturer*>(::app::Uno::Collections::IList__Fuse_Input_Capturer::Item(::uPtr< ::uObject*>(sc), i))->Identity() == identity)
            {
                continue;
            }

            if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)::uPtr< ::app::Fuse::Input::Capturer*>(::app::Uno::Collections::IList__Fuse_Input_Capturer::Item(::uPtr< ::uObject*>(sc), i))->LostCallback(), NULL))
            {
                ::uPtr< ::uDelegate*>(::uPtr< ::app::Fuse::Input::Capturer*>(::app::Uno::Collections::IList__Fuse_Input_Capturer::Item(::uPtr< ::uObject*>(sc), i))->LostCallback())->InvokeVoid();
            }
        }

        ::app::Uno::Collections::ICollection__Fuse_Input_Capturer::Clear(::uPtr< ::uObject*>(sc));
    }

    ::uPtr< ::app::Uno::Collections::Dictionary__int__Fuse_Input_Capturer*>(Pointer___hardCapturers)->Item(pointIndex, ::app::Fuse::Input::Capturer__New_1(NULL, node, identity, lostCallback));
    return true;
}

void Pointer__ReleaseHardCapture(::uStatic* __this, int pointIndex)
{
    if (::uPtr< ::app::Uno::Collections::Dictionary__int__Fuse_Input_Capturer*>(Pointer___hardCapturers)->ContainsKey(pointIndex))
    {
        ::uPtr< ::app::Uno::Collections::Dictionary__int__Fuse_Input_Capturer*>(Pointer___hardCapturers)->Remove(pointIndex);
    }
}

bool Pointer__RaisePressed(::uStatic* __this, ::app::Fuse::Node* root, ::app::Fuse::Input::PointerEventData* data)
{
    ::app::Fuse::Node* target = Pointer__RoutePointerEvent(NULL, data, root);

    if (target == NULL)
    {
        ::app::Fuse::Input::Focus__Release(NULL);
        return false;
    }

    ::app::Fuse::Input::PointerPressedArgs* e = ::app::Fuse::Input::PointerPressedArgs__New_3(NULL, data, target);
    Pointer__RaisePointerPressedInternal(NULL, e);
    return ::uPtr< ::app::Fuse::Input::PointerPressedArgs*>(e)->IsHandled();
}

bool Pointer__RaiseMoved(::uStatic* __this, ::app::Fuse::Node* root, ::app::Fuse::Input::PointerEventData* data)
{
    ::app::Fuse::Node* target = Pointer__RoutePointerEvent(NULL, data, root);

    if (target == NULL)
    {
        return false;
    }

    ::app::Fuse::Input::PointerMovedArgs* e = ::app::Fuse::Input::PointerMovedArgs__New_3(NULL, data, target);
    Pointer__RaisePointerMovedInternal(NULL, e);
    return ::uPtr< ::app::Fuse::Input::PointerMovedArgs*>(e)->IsHandled();
}

bool Pointer__RaiseWheelMoved(::uStatic* __this, ::app::Fuse::Node* root, ::app::Fuse::Input::PointerEventData* data)
{
    ::app::Fuse::Node* target = Pointer__RoutePointerEvent(NULL, data, root);

    if (target == NULL)
    {
        return false;
    }

    ::app::Fuse::Input::PointerWheelMovedArgs* e = ::app::Fuse::Input::PointerWheelMovedArgs__New_3(NULL, data, target);
    Pointer__RaisePointerWheelMovedInternal(NULL, e);
    return ::uPtr< ::app::Fuse::Input::PointerWheelMovedArgs*>(e)->IsHandled();
}

void Pointer__RaiseLeft(::uStatic* __this, ::app::Fuse::Node* root, ::app::Fuse::Input::PointerEventData* data)
{
    Pointer__ProcessPointerEnterLeave(NULL, NULL, data);
}

bool Pointer__RaiseReleased(::uStatic* __this, ::app::Fuse::Node* root, ::app::Fuse::Input::PointerEventData* data)
{
    ::app::Fuse::Node* target = Pointer__RoutePointerEvent(NULL, data, root);

    if (target == NULL)
    {
        return false;
    }

    ::app::Fuse::Input::PointerReleasedArgs* e = ::app::Fuse::Input::PointerReleasedArgs__New_3(NULL, data, target);
    Pointer__RaisePointerReleasedInternal(NULL, e);
    return ::uPtr< ::app::Fuse::Input::PointerReleasedArgs*>(e)->IsHandled();
}

::app::Fuse::Node* Pointer__RoutePointerEvent(::uStatic* __this, ::app::Fuse::Input::PointerEventData* plainEvent, ::app::Fuse::Node* root)
{
    ::app::Fuse::Node* n = Pointer__RouteToSoftCapturer(NULL, plainEvent);

    if (n != NULL)
    {
        return n;
    }

    n = Pointer__RouteToCapturer(NULL, plainEvent);

    if (n != NULL)
    {
        return n;
    }

    n = Pointer__RouteToHit(NULL, plainEvent, root);

    if (n != NULL)
    {
        return n;
    }

    return NULL;
}

::app::Fuse::Node* Pointer__RouteToSoftCapturer(::uStatic* __this, ::app::Fuse::Input::PointerEventData* args)
{
    ::app::Fuse::Input::Capturer* sc = Pointer__GetSoftCapturer(NULL, ::uPtr< ::app::Fuse::Input::PointerEventData*>(args)->PointIndex);

    if (sc == NULL)
    {
        return NULL;
    }

    return ::uPtr< ::app::Fuse::Input::Capturer*>(sc)->Node();
}

::app::Fuse::Node* Pointer__RouteToCapturer(::uStatic* __this, ::app::Fuse::Input::PointerEventData* args)
{
    ::app::Fuse::Input::Capturer* capturer = Pointer__GetHardCapturer(NULL, ::uPtr< ::app::Fuse::Input::PointerEventData*>(args)->PointIndex);

    if (capturer == NULL)
    {
        return NULL;
    }

    return ::uPtr< ::app::Fuse::Input::Capturer*>(capturer)->Node();
}

::app::Fuse::Node* Pointer__RouteToHit(::uStatic* __this, ::app::Fuse::Input::PointerEventData* args, ::app::Fuse::Node* root)
{
    ::app::Fuse::HitTestResult* result = ::app::Fuse::Input::HitTestHelpers__HitTestNearest(NULL, root, ::uPtr< ::app::Fuse::Input::PointerEventData*>(args)->WindowPoint);

    while ((result != NULL) && !::uPtr< ::app::Fuse::Node*>(::uPtr< ::app::Fuse::HitTestResult*>(result)->HitObject())->IsEnabled())
    {
        ::uPtr< ::app::Fuse::HitTestResult*>(result)->HitObject(::uPtr< ::app::Fuse::Node*>(::uPtr< ::app::Fuse::HitTestResult*>(result)->HitObject())->ParentNode());
    }

    Pointer__ProcessPointerEnterLeave(NULL, result, args);

    if (result == NULL)
    {
        return NULL;
    }

    return result->HitObject();
}

void Pointer__ProcessPointerEnterLeave(::uStatic* __this, ::app::Fuse::HitTestResult* result, ::app::Fuse::Input::PointerEventData* args)
{
    ::app::Uno::Collections::List__Fuse_Input_Pointer_PELHolder* lastHitList = Pointer__GetLastHitList(NULL, ::uPtr< ::app::Fuse::Input::PointerEventData*>(args)->PointIndex);
    Pointer__MarkAncestorHits(NULL, (result == NULL) ? (::app::Fuse::Node*)NULL : ::uPtr< ::app::Fuse::HitTestResult*>(result)->HitObject(), lastHitList);

    for (int j = ::uPtr< ::app::Uno::Collections::List__Fuse_Input_Pointer_PELHolder*>(lastHitList)->Count() - 1; j >= 0; j--)
    {
        if (::uPtr< ::app::Fuse::Input::Pointer_PELHolder*>(::uPtr< ::app::Uno::Collections::List__Fuse_Input_Pointer_PELHolder*>(lastHitList)->Item(j))->Status != 1)
        {
            continue;
        }

        ::uPtr< ::app::Fuse::Input::Event__Fuse_Input_PointerLeftHandler__Fuse_Input_PointerLeftArgs*>(Pointer__get_Left(NULL))->RaiseWithoutBubble(::app::Fuse::Input::PointerLeftArgs__New_3(NULL, args, ::uPtr< ::app::Fuse::Input::Pointer_PELHolder*>(::uPtr< ::app::Uno::Collections::List__Fuse_Input_Pointer_PELHolder*>(lastHitList)->Item(j))->Node), 2);
        lastHitList->RemoveAt(j);
    }

    for (int j = 0; j < lastHitList->Count(); ++j)
    {
        if (::uPtr< ::app::Fuse::Input::Pointer_PELHolder*>(::uPtr< ::app::Uno::Collections::List__Fuse_Input_Pointer_PELHolder*>(lastHitList)->Item(j))->Status != 0)
        {
            continue;
        }

        ::uPtr< ::app::Fuse::Input::Event__Fuse_Input_PointerEnteredHandler__Fuse_Input_PointerEnteredArgs*>(Pointer__get_Entered(NULL))->RaiseWithoutBubble(::app::Fuse::Input::PointerEnteredArgs__New_3(NULL, args, ::uPtr< ::app::Fuse::Input::Pointer_PELHolder*>(::uPtr< ::app::Uno::Collections::List__Fuse_Input_Pointer_PELHolder*>(lastHitList)->Item(j))->Node), 1);
    }
}

void Pointer__MarkAncestorHits(::uStatic* __this, ::app::Fuse::Node* hitObject, ::app::Uno::Collections::List__Fuse_Input_Pointer_PELHolder* list)
{
    ::app::Fuse::Input::Pointer_PELHolder* collection_129;

    for (int i = 0; i < ::uPtr< ::app::Uno::Collections::List__Fuse_Input_Pointer_PELHolder*>(list)->Count(); ++i)
    {
        ::uPtr< ::app::Fuse::Input::Pointer_PELHolder*>(::uPtr< ::app::Uno::Collections::List__Fuse_Input_Pointer_PELHolder*>(list)->Item(i))->Status = 1;
    }

    while (hitObject != NULL)
    {
        bool found = false;

        for (int i = 0; i < ::uPtr< ::app::Uno::Collections::List__Fuse_Input_Pointer_PELHolder*>(list)->Count(); ++i)
        {
            if (::uPtr< ::app::Fuse::Input::Pointer_PELHolder*>(::uPtr< ::app::Uno::Collections::List__Fuse_Input_Pointer_PELHolder*>(list)->Item(i))->Node == hitObject)
            {
                ::uPtr< ::app::Fuse::Input::Pointer_PELHolder*>(::uPtr< ::app::Uno::Collections::List__Fuse_Input_Pointer_PELHolder*>(list)->Item(i))->Status = 2;
                found = true;
                break;
            }
        }

        if (!found)
        {
            ::uPtr< ::app::Uno::Collections::List__Fuse_Input_Pointer_PELHolder*>(list)->Add((collection_129 = ::app::Fuse::Input::Pointer_PELHolder__New_1(NULL), ::uPtr< ::app::Fuse::Input::Pointer_PELHolder*>(collection_129)->Node = hitObject, ::uPtr< ::app::Fuse::Input::Pointer_PELHolder*>(collection_129)->Status = 0, collection_129));
        }

        hitObject = ::uPtr< ::app::Fuse::Node*>(hitObject)->ParentNode();
    }
}

::app::Uno::Collections::List__Fuse_Input_Pointer_PELHolder* Pointer__GetLastHitList(::uStatic* __this, int pointIndex)
{
    ::app::Uno::Collections::List__Fuse_Input_Pointer_PELHolder* lastHitList = NULL;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder_*>(Pointer___lastHitNodes)->TryGetValue(pointIndex, &lastHitList))
    {
        lastHitList = ::app::Uno::Collections::List__Fuse_Input_Pointer_PELHolder__New_1(NULL);
        ::uPtr< ::app::Uno::Collections::Dictionary__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder_*>(Pointer___lastHitNodes)->Add(pointIndex, lastHitList);
    }

    return lastHitList;
}

void Pointer__RaisePointerPressedInternal(::uStatic* __this, ::app::Fuse::Input::PointerPressedArgs* args)
{
    ::app::Fuse::Input::Pointer_PointerRecord* collection_130;
    collection_130 = ::app::Fuse::Input::Pointer_PointerRecord__New_1(NULL);
    ::uPtr< ::app::Fuse::Input::Pointer_PointerRecord*>(collection_130)->WindowPoint = ::uPtr< ::app::Fuse::Input::PointerPressedArgs*>(args)->WindowPoint();
    collection_130->DistanceMoved = 0.0f;
    ::app::Fuse::Input::Pointer_PointerRecord* p = collection_130;
    ::uPtr< ::app::Uno::Collections::Dictionary__int__Fuse_Input_Pointer_PointerRecord*>(Pointer___pointersDown)->Item(args->PointIndex(), p);
    Pointer__set_Coord(NULL, args->WindowPoint());
    ::uPtr< ::app::Fuse::Input::Event__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs*>(Pointer__get_Pressed(NULL))->RaiseWithBubble(args, 1);

    if (!args->IsHandled() && !Pointer__IsOnFocusablePath(NULL, args->Node()))
    {
        ::app::Fuse::Input::Focus__Release(NULL);
    }

    p->WasHandled = args->IsHandled();
}

void Pointer__RaisePointerMovedInternal(::uStatic* __this, ::app::Fuse::Input::PointerMovedArgs* args)
{
    if (::uPtr< ::app::Uno::Collections::Dictionary__int__Fuse_Input_Pointer_PointerRecord*>(Pointer___pointersDown)->ContainsKey(::uPtr< ::app::Fuse::Input::PointerMovedArgs*>(args)->PointIndex()))
    {
        ::app::Fuse::Input::Pointer_PointerRecord* p = ::uPtr< ::app::Uno::Collections::Dictionary__int__Fuse_Input_Pointer_PointerRecord*>(Pointer___pointersDown)->Item(::uPtr< ::app::Fuse::Input::PointerMovedArgs*>(args)->PointIndex());
        ::uPtr< ::app::Fuse::Input::Pointer_PointerRecord*>(p)->DistanceMoved = ::uPtr< ::app::Fuse::Input::Pointer_PointerRecord*>(p)->DistanceMoved + ::app::Uno::Vector__Length(NULL, ::app::Uno::Float2__op_Subtraction(NULL, args->WindowPoint(), ::uPtr< ::app::Fuse::Input::Pointer_PointerRecord*>(p)->WindowPoint));
        p->WindowPoint = args->WindowPoint();
    }

    Pointer__set_Coord(NULL, ::uPtr< ::app::Fuse::Input::PointerMovedArgs*>(args)->WindowPoint());
    ::uPtr< ::app::Fuse::Input::Event__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs*>(Pointer__get_Moved(NULL))->RaiseWithBubble(args, 1);
}

void Pointer__RaisePointerWheelMovedInternal(::uStatic* __this, ::app::Fuse::Input::PointerWheelMovedArgs* args)
{
    ::uPtr< ::app::Fuse::Input::Event__Fuse_Input_PointerWheelMovedHandler__Fuse_Input_PointerWheelMovedArgs*>(Pointer__get_WheelMoved(NULL))->RaiseWithBubble(args, 1);
}

bool Pointer__IsOnFocusablePath(::uStatic* __this, ::app::Fuse::Node* n)
{
    if (::app::Fuse::Input::Focus__IsFocusable(NULL, n))
    {
        return true;
    }

    if (::uPtr< ::app::Fuse::Node*>(n)->ParentNode() != NULL)
    {
        return Pointer__IsOnFocusablePath(NULL, ::uPtr< ::app::Fuse::Node*>(n)->ParentNode());
    }
    else
    {
        return false;
    }
}

void Pointer__RaisePointerReleasedInternal(::uStatic* __this, ::app::Fuse::Input::PointerReleasedArgs* args)
{
    if (::uPtr< ::app::Uno::Collections::Dictionary__int__Fuse_Input_Pointer_PointerRecord*>(Pointer___pointersDown)->ContainsKey(::uPtr< ::app::Fuse::Input::PointerReleasedArgs*>(args)->PointIndex()))
    {
        ::app::Fuse::Input::Pointer_PointerRecord* p = ::uPtr< ::app::Uno::Collections::Dictionary__int__Fuse_Input_Pointer_PointerRecord*>(Pointer___pointersDown)->Item(::uPtr< ::app::Fuse::Input::PointerReleasedArgs*>(args)->PointIndex());
        ::uPtr< ::app::Fuse::Input::Pointer_PointerRecord*>(p)->DistanceMoved = ::uPtr< ::app::Fuse::Input::Pointer_PointerRecord*>(p)->DistanceMoved + ::app::Uno::Vector__Length(NULL, ::app::Uno::Float2__op_Subtraction(NULL, args->WindowPoint(), ::uPtr< ::app::Fuse::Input::Pointer_PointerRecord*>(p)->WindowPoint));
        ::uPtr< ::app::Uno::Collections::Dictionary__int__Fuse_Input_Pointer_PointerRecord*>(Pointer___pointersDown)->Remove(args->PointIndex());
    }

    Pointer__set_Coord(NULL, ::uPtr< ::app::Fuse::Input::PointerReleasedArgs*>(args)->WindowPoint());
    ::uPtr< ::app::Fuse::Input::Event__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs*>(Pointer__get_Released(NULL))->RaiseWithBubble(args, 1);
}

void Pointer___TypeInit(::uStatic* __this)
{
    Pointer___pressed = ::app::Fuse::Input::PointerPressed__New_1(NULL);
    Pointer___moved = ::app::Fuse::Input::PointerMoved__New_1(NULL);
    Pointer___released = ::app::Fuse::Input::PointerReleased__New_1(NULL);
    Pointer___entered = ::app::Fuse::Input::PointerEntered__New_1(NULL);
    Pointer___left = ::app::Fuse::Input::PointerLeft__New_1(NULL);
    Pointer___wheelMoved = ::app::Fuse::Input::PointerWheelMoved__New_1(NULL);
    Pointer___pointersDown = ::app::Uno::Collections::Dictionary__int__Fuse_Input_Pointer_PointerRecord__New_1(NULL);
    Pointer___softCapturers = ::app::Uno::Collections::Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer___New_1(NULL);
    Pointer___hardCapturers = ::app::Uno::Collections::Dictionary__int__Fuse_Input_Capturer__New_1(NULL);
    Pointer___lastHitNodes = ::app::Uno::Collections::Dictionary__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder___New_1(NULL);
}

}}}
