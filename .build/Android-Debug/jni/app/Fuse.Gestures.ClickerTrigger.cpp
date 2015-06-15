// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Gestures\0.1.0\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Gestures.Clicker.h>
#include <app/Fuse.Gestures.ClickerTrigger.h>
#include <app/Fuse.Node.h>

namespace app {
namespace Fuse {
namespace Gestures {

ClickerTrigger__uType* ClickerTrigger__typeof()
{
    static ClickerTrigger__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (ClickerTrigger__uType*)::uAllocClassType(sizeof(ClickerTrigger__uType), "Fuse.Gestures.ClickerTrigger", ::app::Fuse::Triggers::Trigger__typeof(), 0, 1);
        type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))ClickerTrigger__OnRooted;
        type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))ClickerTrigger__OnUnrooted;

        type->StrongRefOffsets[0] = offsetof(ClickerTrigger, Clicker);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "Clicker";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void ClickerTrigger__OnRooted(ClickerTrigger* __this, ::app::Fuse::Node* elm)
{
    ::app::Fuse::Triggers::Trigger__OnRooted(__this, elm);
    __this->Clicker = ::app::Fuse::Gestures::Clicker__AttachClicker(NULL, elm);
}

void ClickerTrigger__OnUnrooted(ClickerTrigger* __this, ::app::Fuse::Node* elm)
{
    ::uPtr< ::app::Fuse::Gestures::Clicker*>(__this->Clicker)->Detach();
    __this->Clicker = NULL;
    ::app::Fuse::Triggers::Trigger__OnUnrooted(__this, elm);
}

void ClickerTrigger___ObjInit_2(ClickerTrigger* __this)
{
    ::app::Fuse::Triggers::Trigger___ObjInit_1(__this);
}

}}}
