// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Gestures\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Gestures.Pressing.h>
#include <app/Fuse.Input.Event__Fuse_Input_PointerPressedHandler__Fuse_Input_-d47a11ac.h>
#include <app/Fuse.Input.Event__Fuse_Input_PointerReleasedHandler__Fuse_Input-199508da.h>
#include <app/Fuse.Input.Pointer.h>
#include <app/Fuse.Input.PointerEventArgs.h>
#include <app/Fuse.Input.PointerPressedArgs.h>
#include <app/Fuse.Input.PointerPressedHandler.h>
#include <app/Fuse.Input.PointerReleasedArgs.h>
#include <app/Fuse.Input.PointerReleasedHandler.h>
#include <app/Fuse.Node.h>
#include <app/Uno.Action.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Int.h>
#include <app/Uno.Object.h>

namespace app {
namespace Fuse {
namespace Gestures {

Pressing__uType* Pressing__typeof()
{
    static Pressing__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Pressing__uType*)::uAllocClassType(sizeof(Pressing__uType), "Fuse.Gestures.Pressing", ::app::Fuse::Triggers::Trigger__typeof());
        type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))Pressing__OnRooted;
        type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))Pressing__OnUnrooted;
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

int Pressing__get_PointerType(Pressing* __this)
{
    return __this->_pointerType;
}

void Pressing__set_PointerType(Pressing* __this, int value)
{
    __this->_pointerType = value;
}

void Pressing__OnRooted(Pressing* __this, ::app::Fuse::Node* elm)
{
    ::uPtr< ::app::Fuse::Input::Event__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs*>(::app::Fuse::Input::Pointer__get_Pressed(NULL))->AddHandler(elm, ::uNewDelegateNonVirt(::app::Fuse::Input::PointerPressedHandler__typeof(), (const void*)::app::Fuse::Gestures::Pressing__OnPointerPressed, __this));
    ::uPtr< ::app::Fuse::Input::Event__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs*>(::app::Fuse::Input::Pointer__get_Released(NULL))->AddHandler(elm, ::uNewDelegateNonVirt(::app::Fuse::Input::PointerReleasedHandler__typeof(), (const void*)::app::Fuse::Gestures::Pressing__OnPointerReleased, __this));
    ::app::Fuse::Triggers::Trigger__OnRooted(__this, elm);
}

void Pressing__OnUnrooted(Pressing* __this, ::app::Fuse::Node* elm)
{
    ::uPtr< ::app::Fuse::Input::Event__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs*>(::app::Fuse::Input::Pointer__get_Pressed(NULL))->RemoveHandler(elm, ::uNewDelegateNonVirt(::app::Fuse::Input::PointerPressedHandler__typeof(), (const void*)::app::Fuse::Gestures::Pressing__OnPointerPressed, __this));
    ::uPtr< ::app::Fuse::Input::Event__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs*>(::app::Fuse::Input::Pointer__get_Released(NULL))->RemoveHandler(elm, ::uNewDelegateNonVirt(::app::Fuse::Input::PointerReleasedHandler__typeof(), (const void*)::app::Fuse::Gestures::Pressing__OnPointerReleased, __this));
    ::app::Fuse::Triggers::Trigger__OnUnrooted(__this, elm);
}

void Pressing__OnPointerPressed(Pressing* __this, ::uObject* sender, ::app::Fuse::Input::PointerPressedArgs* args)
{
    if ((__this->PointerType() == 0) || (__this->PointerType() == ::uPtr< ::app::Fuse::Input::PointerPressedArgs*>(args)->PointerType()))
    {
        if (::uPtr< ::app::Fuse::Input::PointerPressedArgs*>(args)->TrySoftCapture((::uObject*)__this, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)::app::Fuse::Triggers::Trigger__Deactivate, __this), NULL))
        {
            __this->Activate(NULL);
        }
    }
}

void Pressing__OnPointerReleased(Pressing* __this, ::uObject* sender, ::app::Fuse::Input::PointerReleasedArgs* args)
{
    if (::uPtr< ::app::Fuse::Input::PointerReleasedArgs*>(args)->IsSoftCapturedTo((::uObject*)__this))
    {
        ::uPtr< ::app::Fuse::Input::PointerReleasedArgs*>(args)->ReleaseSoftCapture((::uObject*)__this);
        __this->Deactivate();
    }
}

void Pressing___ObjInit_2(Pressing* __this)
{
    ::app::Fuse::Triggers::Trigger___ObjInit_1(__this);
}

Pressing* Pressing__New_1(::uStatic* __this)
{
    Pressing* inst = (::app::Fuse::Gestures::Pressing*)::uAllocObject(sizeof(::app::Fuse::Gestures::Pressing), ::app::Fuse::Gestures::Pressing__typeof());
    inst->_ObjInit_2();
    return inst;
}

}}}
