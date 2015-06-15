// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Gestures\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Experimental.Physics.DestinationSimulation__float4.h>
#include <app/Experimental.Physics.MotionSimulation__float.h>
#include <app/Experimental.Physics.MotionSimulation__float4.h>
#include <app/Experimental.Physics.PointerVelocity__float.h>
#include <app/Experimental.Physics.Simulation.h>
#include <app/Fuse.Entities.Transform3D.h>
#include <app/Fuse.Gestures.Trackball.h>
#include <app/Fuse.ICamera.h>
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
#include <app/Fuse.Node.h>
#include <app/Fuse.Transform.h>
#include <app/Fuse.UpdateManager.h>
#include <app/Uno.Action.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Collections.ICollection__Fuse_Transform.h>
#include <app/Uno.Collections.IList__Fuse_Transform.h>
#include <app/Uno.Double.h>
#include <app/Uno.Float.h>
#include <app/Uno.Int.h>
#include <app/Uno.Matrix.h>
#include <app/Uno.Object.h>
#include <app/Uno.Quaternion.h>
#include <app/Uno.Time.h>
#include <app/Uno.Vector.h>

namespace app {
namespace Fuse {
namespace Gestures {

Trackball__uType* Trackball__typeof()
{
    static Trackball__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Trackball__uType*)::uAllocClassType(sizeof(Trackball__uType), "Fuse.Gestures.Trackball", ::app::Fuse::Behavior__typeof(), 0, 6);
        type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))Trackball__OnRooted;
        type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))Trackball__OnUnrooted;

        type->StrongRefOffsets[0] = offsetof(Trackball, _node);
        type->StrongRefOffsets[1] = offsetof(Trackball, _transform);
        type->StrongRefOffsets[2] = offsetof(Trackball, _attractor);
        type->StrongRefOffsets[3] = offsetof(Trackball, _friction);
        type->StrongRefOffsets[4] = offsetof(Trackball, _angularVelocity);
        type->StrongRefOffsets[5] = offsetof(Trackball, _Camera);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_node";
        type->StrongRefNames[1] = "_transform";
        type->StrongRefNames[2] = "_attractor";
        type->StrongRefNames[3] = "_friction";
        type->StrongRefNames[4] = "_angularVelocity";
        type->StrongRefNames[5] = "_Camera";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::uObject* Trackball__get_Camera(Trackball* __this)
{
    return __this->_Camera;
}

void Trackball__set_Camera(Trackball* __this, ::uObject* value)
{
    __this->_Camera = value;
}

::app::Uno::Float4x4 Trackball__get_InverseViewProjection(Trackball* __this)
{
    ::app::Uno::Float4x4 at = ::uPtr< ::app::Fuse::Node*>(__this->_node)->WorldTransform();
    ::app::Uno::Float4x4 vp = ::app::Fuse::ICamera::ViewProjectionTransform(::uPtr< ::uObject*>(__this->Camera()));
    return ::app::Uno::Matrix__Invert(NULL, ::app::Uno::Matrix__Mul_11(NULL, at, vp));
}

void Trackball__OnRooted(Trackball* __this, ::app::Fuse::Node* e)
{
    __this->_node = e;
    ::app::Uno::Collections::ICollection__Fuse_Transform::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Node*>(__this->_node)->Transforms()), (::app::Fuse::Transform*)__this->_transform);
    __this->_moveMode = 0;
    ::uPtr< ::app::Fuse::Input::Event__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs*>(::app::Fuse::Input::Pointer__get_Pressed(NULL))->AddHandler(e, ::uNewDelegateNonVirt(::app::Fuse::Input::PointerPressedHandler__typeof(), (const void*)::app::Fuse::Gestures::Trackball__OnPointerPressed, __this));
    ::uPtr< ::app::Fuse::Input::Event__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs*>(::app::Fuse::Input::Pointer__get_Released(NULL))->AddHandler(e, ::uNewDelegateNonVirt(::app::Fuse::Input::PointerReleasedHandler__typeof(), (const void*)::app::Fuse::Gestures::Trackball__OnPointerReleased, __this));
    ::uPtr< ::app::Fuse::Input::Event__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs*>(::app::Fuse::Input::Pointer__get_Moved(NULL))->AddHandler(e, ::uNewDelegateNonVirt(::app::Fuse::Input::PointerMovedHandler__typeof(), (const void*)::app::Fuse::Gestures::Trackball__OnPointerMoved, __this));
}

void Trackball__OnUnrooted(Trackball* __this, ::app::Fuse::Node* e)
{
    ::uPtr< ::app::Fuse::Input::Event__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs*>(::app::Fuse::Input::Pointer__get_Pressed(NULL))->RemoveHandler(e, ::uNewDelegateNonVirt(::app::Fuse::Input::PointerPressedHandler__typeof(), (const void*)::app::Fuse::Gestures::Trackball__OnPointerPressed, __this));
    ::uPtr< ::app::Fuse::Input::Event__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs*>(::app::Fuse::Input::Pointer__get_Released(NULL))->RemoveHandler(e, ::uNewDelegateNonVirt(::app::Fuse::Input::PointerReleasedHandler__typeof(), (const void*)::app::Fuse::Gestures::Trackball__OnPointerReleased, __this));
    ::uPtr< ::app::Fuse::Input::Event__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs*>(::app::Fuse::Input::Pointer__get_Moved(NULL))->RemoveHandler(e, ::uNewDelegateNonVirt(::app::Fuse::Input::PointerMovedHandler__typeof(), (const void*)::app::Fuse::Gestures::Trackball__OnPointerMoved, __this));
    ::app::Uno::Collections::ICollection__Fuse_Transform::Remove(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Node*>(__this->_node)->Transforms()), (::app::Fuse::Transform*)__this->_transform);
    __this->_node = NULL;
    __this->_moveMode = 0;
    __this->CheckNeedUpdate();
}

void Trackball__CheckNeedUpdate(Trackball* __this)
{
    if (__this->_moveMode == 0)
    {
        if (__this->_haveUpdate)
        {
            ::app::Fuse::UpdateManager__RemoveAction(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)::app::Fuse::Gestures::Trackball__OnUpdate, __this), 0);
            __this->_haveUpdate = false;
        }
    }
    else if (!__this->_haveUpdate)
    {
        ::app::Fuse::UpdateManager__AddAction(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)::app::Fuse::Gestures::Trackball__OnUpdate, __this), 0);
        __this->_haveUpdate = true;
    }
}

void Trackball__OnUpdate(Trackball* __this)
{
    if (__this->_moveMode == 1)
    {
        ::app::Experimental::Physics::Simulation::Update(::uPtr< ::uObject*>(__this->_attractor), ::app::Uno::Time__get_FrameInterval(NULL));

        if (::app::Experimental::Physics::Simulation::IsStatic(::uPtr< ::uObject*>(__this->_attractor)))
        {
            __this->_moveMode = 0;
        }

        ::uPtr< ::app::Fuse::Entities::Transform3D*>(__this->_transform)->RotationQuaternion(::app::Uno::Vector__Normalize_2(NULL, ::app::Experimental::Physics::MotionSimulation__float4::Position(::uPtr< ::uObject*>(__this->_attractor))));
    }
    else if (__this->_moveMode == 2)
    {
        ::app::Experimental::Physics::Simulation::Update(::uPtr< ::uObject*>(__this->_friction), ::app::Uno::Time__get_FrameInterval(NULL));

        if (::app::Experimental::Physics::Simulation::IsStatic(::uPtr< ::uObject*>(__this->_friction)))
        {
            __this->_moveMode = 0;
        }

        ::app::Uno::Float4 q = ::app::Uno::Quaternion__RotationAxis(NULL, __this->_frictionVector, ::app::Experimental::Physics::MotionSimulation__float::Position(::uPtr< ::uObject*>(__this->_friction)));
        ::app::Uno::Float4 cq = ::app::Uno::Quaternion__Mul(NULL, __this->_frictionQ, q);
        ::uPtr< ::app::Fuse::Entities::Transform3D*>(__this->_transform)->RotationQuaternion(cq);
    }

    __this->CheckNeedUpdate();
}

void Trackball__OnPointerPressed(Trackball* __this, ::uObject* s, ::app::Fuse::Input::PointerPressedArgs* args)
{
    if (__this->_captured || !::uPtr< ::app::Fuse::Input::PointerPressedArgs*>(args)->IsPrimary())
    {
        return;
    }

    if (::uPtr< ::app::Fuse::Input::PointerPressedArgs*>(args)->TrySoftCapture((::uObject*)__this, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)::app::Fuse::Gestures::Trackball__OnLostCapture, __this), NULL))
    {
        __this->_moveMode = 0;
        __this->_captured = true;
        __this->_soft = true;
        __this->_pressLoc = ::uPtr< ::app::Fuse::Input::PointerPressedArgs*>(args)->WindowPoint();
        __this->_pressIndex = args->PointIndex();
        __this->_pressQ = ::uPtr< ::app::Fuse::Entities::Transform3D*>(__this->_transform)->RotationQuaternion();
        ::uPtr< ::app::Fuse::Entities::Transform3D*>(__this->_transform)->RotationQuaternion(::app::Uno::Float4__New_2(NULL, 0.0f, 0.0f, 0.0f, 1.0f));
        ::uPtr< ::app::Experimental::Physics::PointerVelocity__float*>(__this->_angularVelocity)->Reset(0.0f);
        __this->_prevAngular = 0.0f;
        __this->_pressInvView = __this->InverseViewProjection();
        ::uPtr< ::app::Fuse::Entities::Transform3D*>(__this->_transform)->RotationQuaternion(__this->_pressQ);
    }
}

void Trackball__OnLostCapture(Trackball* __this)
{
    __this->_captured = false;
    ::uPtr< ::app::Fuse::Entities::Transform3D*>(__this->_transform)->RotationQuaternion(__this->_pressQ);
}

void Trackball__OnPointerReleased(Trackball* __this, ::uObject* s, ::app::Fuse::Input::PointerReleasedArgs* args)
{
    if (!__this->_captured || (::uPtr< ::app::Fuse::Input::PointerReleasedArgs*>(args)->PointIndex() != __this->_pressIndex))
    {
        return;
    }

    if (__this->_soft)
    {
        ::uPtr< ::app::Fuse::Input::PointerReleasedArgs*>(args)->ReleaseSoftCapture((::uObject*)__this);
    }
    else
    {
        args->ReleaseHardCapture((::uObject*)__this);
    }

    __this->_captured = false;
    __this->_moveMode = 2;
    ::app::Experimental::Physics::MotionSimulation__float::Position(::uPtr< ::uObject*>(__this->_friction), 0.0f);
    ::app::Experimental::Physics::MotionSimulation__float::Velocity(::uPtr< ::uObject*>(__this->_friction), ::uPtr< ::app::Experimental::Physics::PointerVelocity__float*>(__this->_angularVelocity)->CurrentVelocity());
    __this->_frictionQ = ::uPtr< ::app::Fuse::Entities::Transform3D*>(__this->_transform)->RotationQuaternion();
    __this->CheckNeedUpdate();
}

void Trackball__OnPointerMoved(Trackball* __this, ::uObject* s, ::app::Fuse::Input::PointerMovedArgs* args)
{
    if (!__this->_captured || (::uPtr< ::app::Fuse::Input::PointerMovedArgs*>(args)->PointIndex() != __this->_pressIndex))
    {
        return;
    }

    ::app::Uno::Float2 dir0 = ::app::Uno::Float2__op_Subtraction(NULL, ::uPtr< ::app::Fuse::Input::PointerMovedArgs*>(args)->WindowPoint(), __this->_pressLoc);
    ::app::Uno::Float2 dir = ::app::Uno::Float2__New_2(NULL, dir0.X, -dir0.Y);
    ::app::Uno::Float3 norm = ::app::Uno::Vector__Normalize_1(NULL, ::app::Uno::Float3__New_2(NULL, -dir.Y, dir.X, 0.0f));
    float length = ::app::Uno::Vector__Length(NULL, dir);
    float angular = length / (2.0f * __this->_radius);
    ::uPtr< ::app::Experimental::Physics::PointerVelocity__float*>(__this->_angularVelocity)->AddSample(angular, ::app::Uno::Time__get_FrameIntervalFloat(NULL), false);
    __this->_prevAngular = angular;
    ::app::Uno::Float3 ind_123 = ::app::Uno::Vector__Normalize_1(NULL, ::app::Uno::Vector__TransformNormal(NULL, norm, __this->_pressInvView));
    ::app::Uno::Float3 localNorm = ::app::Uno::Float3__New_2(NULL, ind_123.X, ind_123.Y, ind_123.Z);
    __this->_frictionVector = localNorm;
    ::app::Uno::Float4 q = ::app::Uno::Quaternion__RotationAxis(NULL, localNorm, angular);
    ::app::Uno::Float4 cq = ::app::Uno::Quaternion__Mul(NULL, __this->_pressQ, q);
    ::uPtr< ::app::Fuse::Entities::Transform3D*>(__this->_transform)->RotationQuaternion(cq);

    if (__this->_soft && (length > 10.0f))
    {
        if (!::uPtr< ::app::Fuse::Input::PointerMovedArgs*>(args)->TryHardCapture((::uObject*)__this, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)::app::Fuse::Gestures::Trackball__OnLostCapture, __this), NULL))
        {
            __this->OnLostCapture();
        }

        __this->_soft = false;
    }
}

}}}
