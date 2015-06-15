// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Input.Focus.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.Triggers.Actions.GiveFocus.h>
#include <app/Uno.Bool.h>

namespace app {
namespace Fuse {
namespace Triggers {
namespace Actions {

::uStaticStrong< ::app::Fuse::Triggers::Actions::TriggerAction*> GiveFocus__Singleton;

GiveFocus__uType* GiveFocus__typeof()
{
    static GiveFocus__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (GiveFocus__uType*)::uAllocClassType(sizeof(GiveFocus__uType), "Fuse.Triggers.Actions.GiveFocus", ::app::Fuse::Triggers::Actions::TriggerAction__typeof(), 0, 1);
        type->__fp_Perform = (void(*)(::app::Fuse::Triggers::Actions::TriggerAction*, ::app::Fuse::Node*))GiveFocus__Perform;

        type->StrongRefOffsets[0] = offsetof(GiveFocus, _Target);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_Target";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Fuse::Node* GiveFocus__get_Target(GiveFocus* __this)
{
    return __this->_Target;
}

void GiveFocus__set_Target(GiveFocus* __this, ::app::Fuse::Node* value)
{
    __this->_Target = value;
}

void GiveFocus__Perform(GiveFocus* __this, ::app::Fuse::Node* target)
{
    ::app::Fuse::Node* ind_123;
    ::app::Fuse::Input::Focus__GiveTo(NULL, (ind_123 = __this->Target(), (ind_123 != NULL) ? ind_123 : target));
}

void GiveFocus___TypeInit(::uStatic* __this)
{
    GiveFocus__Singleton = (::app::Fuse::Triggers::Actions::TriggerAction*)GiveFocus__New_1(NULL);
}

void GiveFocus___ObjInit_1(GiveFocus* __this)
{
    ::app::Fuse::Triggers::Actions::TriggerAction___ObjInit(__this);
}

GiveFocus* GiveFocus__New_1(::uStatic* __this)
{
    GiveFocus* inst = (::app::Fuse::Triggers::Actions::GiveFocus*)::uAllocObject(sizeof(::app::Fuse::Triggers::Actions::GiveFocus), ::app::Fuse::Triggers::Actions::GiveFocus__typeof());
    inst->_ObjInit_1();
    return inst;
}

}}}}
