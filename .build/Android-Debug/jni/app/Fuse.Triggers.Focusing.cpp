// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Input.Event__Fuse_Input_FocusGainedHandler__Fuse_Input_Foc-7957175e.h>
#include <app/Fuse.Input.Event__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs.h>
#include <app/Fuse.Input.Focus.h>
#include <app/Fuse.Input.FocusGainedHandler.h>
#include <app/Fuse.Input.FocusLostHandler.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.Triggers.Focusing.h>
#include <app/Uno.Action.h>
#include <app/Uno.EventArgs.h>
#include <app/Uno.Object.h>

namespace app {
namespace Fuse {
namespace Triggers {

Focusing__uType* Focusing__typeof()
{
    static Focusing__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Focusing__uType*)::uAllocClassType(sizeof(Focusing__uType), "Fuse.Triggers.Focusing", ::app::Fuse::Triggers::Trigger__typeof());
        type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))Focusing__OnRooted;
        type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))Focusing__OnUnrooted;
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void Focusing__OnRooted(Focusing* __this, ::app::Fuse::Node* elm)
{
    ::app::Fuse::Triggers::Trigger__OnRooted(__this, elm);
    ::uPtr< ::app::Fuse::Input::Event__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs*>(::app::Fuse::Input::Focus__get_Gained(NULL))->AddHandler(elm, ::uNewDelegateNonVirt(::app::Fuse::Input::FocusGainedHandler__typeof(), (const void*)::app::Fuse::Triggers::Focusing__OnGotFocus, __this));
    ::uPtr< ::app::Fuse::Input::Event__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs*>(::app::Fuse::Input::Focus__get_Lost(NULL))->AddHandler(elm, ::uNewDelegateNonVirt(::app::Fuse::Input::FocusLostHandler__typeof(), (const void*)::app::Fuse::Triggers::Focusing__OnLostFocus, __this));
}

void Focusing__OnUnrooted(Focusing* __this, ::app::Fuse::Node* elm)
{
    ::uPtr< ::app::Fuse::Input::Event__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs*>(::app::Fuse::Input::Focus__get_Gained(NULL))->RemoveHandler(elm, ::uNewDelegateNonVirt(::app::Fuse::Input::FocusGainedHandler__typeof(), (const void*)::app::Fuse::Triggers::Focusing__OnGotFocus, __this));
    ::uPtr< ::app::Fuse::Input::Event__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs*>(::app::Fuse::Input::Focus__get_Lost(NULL))->RemoveHandler(elm, ::uNewDelegateNonVirt(::app::Fuse::Input::FocusLostHandler__typeof(), (const void*)::app::Fuse::Triggers::Focusing__OnLostFocus, __this));
    ::app::Fuse::Triggers::Trigger__OnUnrooted(__this, elm);
}

void Focusing__OnGotFocus(Focusing* __this, ::uObject* sender, ::app::Uno::EventArgs* args)
{
    __this->Activate(NULL);
}

void Focusing__OnLostFocus(Focusing* __this, ::uObject* sender, ::app::Uno::EventArgs* args)
{
    __this->Deactivate();
}

void Focusing___ObjInit_2(Focusing* __this)
{
    ::app::Fuse::Triggers::Trigger___ObjInit_1(__this);
}

Focusing* Focusing__New_1(::uStatic* __this)
{
    Focusing* inst = (::app::Fuse::Triggers::Focusing*)::uAllocObject(sizeof(::app::Fuse::Triggers::Focusing), ::app::Fuse::Triggers::Focusing__typeof());
    inst->_ObjInit_2();
    return inst;
}

}}}
