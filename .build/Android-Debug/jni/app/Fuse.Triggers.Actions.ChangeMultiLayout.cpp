// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Controls.MultiLayoutPanel.h>
#include <app/Fuse.Elements.Element.h>
#include <app/Fuse.INodeParent.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.Triggers.Actions.ChangeMultiLayout.h>
#include <app/Uno.Bool.h>

namespace app {
namespace Fuse {
namespace Triggers {
namespace Actions {

ChangeMultiLayout__uType* ChangeMultiLayout__typeof()
{
    static ChangeMultiLayout__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (ChangeMultiLayout__uType*)::uAllocClassType(sizeof(ChangeMultiLayout__uType), "Fuse.Triggers.Actions.ChangeMultiLayout", ::app::Fuse::Triggers::Actions::TriggerAction__typeof(), 0, 1);
        type->__fp_Perform = (void(*)(::app::Fuse::Triggers::Actions::TriggerAction*, ::app::Fuse::Node*))ChangeMultiLayout__Perform;

        type->StrongRefOffsets[0] = offsetof(ChangeMultiLayout, _Target);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_Target";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Fuse::Elements::Element* ChangeMultiLayout__get_Target(ChangeMultiLayout* __this)
{
    return __this->_Target;
}

void ChangeMultiLayout__set_Target(ChangeMultiLayout* __this, ::app::Fuse::Elements::Element* value)
{
    __this->_Target = value;
}

void ChangeMultiLayout__Perform(ChangeMultiLayout* __this, ::app::Fuse::Node* n)
{
    if (__this->Target() == NULL)
    {
        return;
    }

    ::app::Fuse::Controls::MultiLayoutPanel* mlp = ::uAs< ::app::Fuse::Controls::MultiLayoutPanel*>(::uPtr< ::app::Fuse::Elements::Element*>(__this->Target())->Parent(), ::app::Fuse::Controls::MultiLayoutPanel__typeof());

    if (mlp == NULL)
    {
        return;
    }

    ::uPtr< ::app::Fuse::Controls::MultiLayoutPanel*>(mlp)->ChangeLayout(__this->Target());
}

}}}}
