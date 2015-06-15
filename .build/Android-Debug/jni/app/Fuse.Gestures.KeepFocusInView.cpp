// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Gestures\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Elements.Element.h>
#include <app/Fuse.Gestures.KeepFocusInView.h>
#include <app/Fuse.Input.Event__Fuse_Input_FocusGainedHandler__Fuse_Input_Foc-7957175e.h>
#include <app/Fuse.Input.Event__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs.h>
#include <app/Fuse.Input.Focus.h>
#include <app/Fuse.Input.FocusGainedArgs.h>
#include <app/Fuse.Input.FocusGainedHandler.h>
#include <app/Fuse.Input.FocusLostHandler.h>
#include <app/Fuse.Node.h>
#include <app/Uno.Object.h>

namespace app {
namespace Fuse {
namespace Gestures {

KeepFocusInView__uType* KeepFocusInView__typeof()
{
    static KeepFocusInView__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (KeepFocusInView__uType*)::uAllocClassType(sizeof(KeepFocusInView__uType), "Fuse.Gestures.KeepFocusInView", ::app::Fuse::Gestures::KeepInViewCommon__typeof());
        type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))KeepFocusInView__OnRooted;
        type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))KeepFocusInView__OnUnrooted;
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void KeepFocusInView__OnRooted(KeepFocusInView* __this, ::app::Fuse::Node* elm)
{
    ::app::Fuse::Gestures::KeepInViewCommon__OnRooted(__this, elm);
    ::uPtr< ::app::Fuse::Input::Event__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs*>(::app::Fuse::Input::Focus__get_Gained(NULL))->AddHandler(elm, ::uNewDelegateNonVirt(::app::Fuse::Input::FocusGainedHandler__typeof(), (const void*)::app::Fuse::Gestures::KeepFocusInView__OnGotFocus, __this));
    ::uPtr< ::app::Fuse::Input::Event__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs*>(::app::Fuse::Input::Focus__get_Lost(NULL))->AddHandler(elm, ::uNewDelegateNonVirt(::app::Fuse::Input::FocusLostHandler__typeof(), (const void*)::app::Fuse::Gestures::KeepFocusInView__OnLostFocus, __this));
}

void KeepFocusInView__OnUnrooted(KeepFocusInView* __this, ::app::Fuse::Node* elm)
{
    ::uPtr< ::app::Fuse::Input::Event__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs*>(::app::Fuse::Input::Focus__get_Gained(NULL))->RemoveHandler(elm, ::uNewDelegateNonVirt(::app::Fuse::Input::FocusGainedHandler__typeof(), (const void*)::app::Fuse::Gestures::KeepFocusInView__OnGotFocus, __this));
    ::uPtr< ::app::Fuse::Input::Event__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs*>(::app::Fuse::Input::Focus__get_Lost(NULL))->RemoveHandler(elm, ::uNewDelegateNonVirt(::app::Fuse::Input::FocusLostHandler__typeof(), (const void*)::app::Fuse::Gestures::KeepFocusInView__OnLostFocus, __this));
    ::app::Fuse::Gestures::KeepInViewCommon__OnUnrooted(__this, elm);
}

void KeepFocusInView__OnGotFocus(KeepFocusInView* __this, ::uObject* s, ::app::Fuse::Input::FocusGainedArgs* fga)
{
    __this->Target(::uAs< ::app::Fuse::Elements::Element*>(::app::Fuse::Input::Focus__get_FocusedNode(NULL), ::app::Fuse::Elements::Element__typeof()));
}

void KeepFocusInView__OnLostFocus(KeepFocusInView* __this, ::uObject* s, ::uObject* a)
{
    __this->Target(NULL);
}

void KeepFocusInView___ObjInit_2(KeepFocusInView* __this)
{
    ::app::Fuse::Gestures::KeepInViewCommon___ObjInit_1(__this);
}

KeepFocusInView* KeepFocusInView__New_2(::uStatic* __this)
{
    KeepFocusInView* inst = (::app::Fuse::Gestures::KeepFocusInView*)::uAllocObject(sizeof(::app::Fuse::Gestures::KeepFocusInView), ::app::Fuse::Gestures::KeepFocusInView__typeof());
    inst->_ObjInit_2();
    return inst;
}

}}}
