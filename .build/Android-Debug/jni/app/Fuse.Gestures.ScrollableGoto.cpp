// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Gestures\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Gestures.IScrollable.h>
#include <app/Fuse.Gestures.ScrollableGoto.h>
#include <app/Fuse.Node.h>
#include <app/Uno.Bool.h>

namespace app {
namespace Fuse {
namespace Gestures {

ScrollableGoto__uType* ScrollableGoto__typeof()
{
    static ScrollableGoto__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (ScrollableGoto__uType*)::uAllocClassType(sizeof(ScrollableGoto__uType), "Fuse.Gestures.ScrollableGoto", ::app::Fuse::Triggers::Actions::TriggerAction__typeof(), 0, 1);
        type->__fp_Perform = (void(*)(::app::Fuse::Triggers::Actions::TriggerAction*, ::app::Fuse::Node*))ScrollableGoto__Perform;

        type->StrongRefOffsets[0] = offsetof(ScrollableGoto, _Target);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_Target";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::uObject* ScrollableGoto__get_Target(ScrollableGoto* __this)
{
    return __this->_Target;
}

void ScrollableGoto__set_Target(ScrollableGoto* __this, ::uObject* value)
{
    __this->_Target = value;
}

void ScrollableGoto__Perform(ScrollableGoto* __this, ::app::Fuse::Node* target)
{
    if (__this->Target() == NULL)
    {
        return;
    }

    if (__this->_hasRelativePosition)
    {
        ::app::Fuse::Gestures::IScrollable::Goto(::uPtr< ::uObject*>(__this->Target()), ::app::Uno::Float2__op_Addition(NULL, ::app::Fuse::Gestures::IScrollable::MinScroll(::uPtr< ::uObject*>(__this->Target())), ::app::Uno::Float2__op_Multiply_1(NULL, ::app::Uno::Float2__op_Subtraction(NULL, ::app::Fuse::Gestures::IScrollable::MaxScroll(::uPtr< ::uObject*>(__this->Target())), ::app::Fuse::Gestures::IScrollable::MinScroll(::uPtr< ::uObject*>(__this->Target()))), __this->_relativePosition)));
    }
    else if (__this->_hasPosition)
    {
        ::app::Fuse::Gestures::IScrollable::Goto(::uPtr< ::uObject*>(__this->Target()), __this->_position);
    }
}

}}}
