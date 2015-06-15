// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Gestures\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Gestures.Clicker.h>
#include <app/Fuse.Gestures.ClickerEventHandler.h>
#include <app/Fuse.Gestures.Tapped.h>
#include <app/Fuse.Gestures.TappedArgs.h>
#include <app/Fuse.Gestures.TappedHandler.h>
#include <app/Fuse.Input.PointerEventArgs.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.Triggers.Trigger.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Delegate.h>
#include <app/Uno.Object.h>

namespace app {
namespace Fuse {
namespace Gestures {

Tapped__uType* Tapped__typeof()
{
    static Tapped__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Tapped__uType*)::uAllocClassType(sizeof(Tapped__uType), "Fuse.Gestures.Tapped", ::app::Fuse::Gestures::ClickerTrigger__typeof(), 0, 1);
        type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))Tapped__OnRooted;
        type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))Tapped__OnUnrooted;

        type->StrongRefOffsets[0] = offsetof(Tapped, Handler);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "Handler";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void Tapped__OnRooted(Tapped* __this, ::app::Fuse::Node* elm)
{
    ::app::Fuse::Gestures::ClickerTrigger__OnRooted(__this, elm);
    ::uPtr< ::app::Fuse::Gestures::Clicker*>(__this->Clicker)->add_TappedEvent(::uNewDelegateNonVirt(::app::Fuse::Gestures::ClickerEventHandler__typeof(), (const void*)::app::Fuse::Gestures::Tapped__OnTapped, __this));
}

void Tapped__OnUnrooted(Tapped* __this, ::app::Fuse::Node* elm)
{
    ::uPtr< ::app::Fuse::Gestures::Clicker*>(__this->Clicker)->remove_TappedEvent(::uNewDelegateNonVirt(::app::Fuse::Gestures::ClickerEventHandler__typeof(), (const void*)::app::Fuse::Gestures::Tapped__OnTapped, __this));
    ::app::Fuse::Gestures::ClickerTrigger__OnUnrooted(__this, elm);
}

void Tapped__OnTapped(Tapped* __this, ::app::Fuse::Input::PointerEventArgs* args, int tapCount)
{
    __this->Pulse();

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->Handler, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->Handler)->InvokeVoid< ::uObject*, ::app::Fuse::Gestures::TappedArgs*>((::uObject*)__this, ::app::Fuse::Gestures::TappedArgs__New_3(NULL, args, __this->Node()));
    }
}

void Tapped___ObjInit_3(Tapped* __this)
{
    ::app::Fuse::Gestures::ClickerTrigger___ObjInit_2(__this);
}

Tapped* Tapped__New_2(::uStatic* __this)
{
    Tapped* inst = (::app::Fuse::Gestures::Tapped*)::uAllocObject(sizeof(::app::Fuse::Gestures::Tapped), ::app::Fuse::Gestures::Tapped__typeof());
    inst->_ObjInit_3();
    return inst;
}

}}}
