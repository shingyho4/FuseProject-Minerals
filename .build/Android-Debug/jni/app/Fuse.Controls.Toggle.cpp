// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Controls.IToggle.h>
#include <app/Fuse.Controls.Toggle.h>
#include <app/Fuse.Node.h>
#include <app/Uno.Bool.h>

namespace app {
namespace Fuse {
namespace Controls {

Toggle__uType* Toggle__typeof()
{
    static Toggle__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Toggle__uType*)::uAllocClassType(sizeof(Toggle__uType), "Fuse.Controls.Toggle", ::app::Fuse::Triggers::Actions::TriggerAction__typeof(), 0, 1);
        type->__fp_Perform = (void(*)(::app::Fuse::Triggers::Actions::TriggerAction*, ::app::Fuse::Node*))Toggle__Perform;

        type->StrongRefOffsets[0] = offsetof(Toggle, _Target);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_Target";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::uObject* Toggle__get_Target(Toggle* __this)
{
    return __this->_Target;
}

void Toggle__set_Target(Toggle* __this, ::uObject* value)
{
    __this->_Target = value;
}

void Toggle__Perform(Toggle* __this, ::app::Fuse::Node* target)
{
    ::uObject* ind_123 = __this->Target();
    ::uObject* t = (ind_123 != NULL) ? ind_123 : (::uObject*)target;

    if (t != NULL)
    {
        ::app::Fuse::Controls::IToggle::Toggled(::uPtr< ::uObject*>(t), !::app::Fuse::Controls::IToggle::Toggled(::uPtr< ::uObject*>(t)));
    }
}

}}}
