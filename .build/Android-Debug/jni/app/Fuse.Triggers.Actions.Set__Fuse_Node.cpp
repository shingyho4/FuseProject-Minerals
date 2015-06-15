// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Node.h>
#include <app/Fuse.Triggers.Actions.Set__Fuse_Node.h>
#include <app/Uno.UX.Property__Fuse_Node.h>

namespace app {
namespace Fuse {
namespace Triggers {
namespace Actions {

Set__Fuse_Node__uType* Set__Fuse_Node__typeof()
{
    static Set__Fuse_Node__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Set__Fuse_Node__uType*)::uAllocClassType(sizeof(Set__Fuse_Node__uType), "Fuse.Triggers.Actions.Set<Fuse.Node>", ::app::Fuse::Triggers::Actions::TriggerAction__typeof(), 0, 2);
        type->__fp_Perform = (void(*)(::app::Fuse::Triggers::Actions::TriggerAction*, ::app::Fuse::Node*))Set__Fuse_Node__Perform;

        type->StrongRefOffsets[0] = offsetof(Set__Fuse_Node, _Target);
        type->StrongRefOffsets[1] = offsetof(Set__Fuse_Node, _Value);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_Target";
        type->StrongRefNames[1] = "_Value";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Uno::UX::Property__Fuse_Node* Set__Fuse_Node__get_Target(Set__Fuse_Node* __this)
{
    return __this->_Target;
}

void Set__Fuse_Node__set_Target(Set__Fuse_Node* __this, ::app::Uno::UX::Property__Fuse_Node* value)
{
    __this->_Target = value;
}

::app::Fuse::Node* Set__Fuse_Node__get_Value(Set__Fuse_Node* __this)
{
    return __this->_Value;
}

void Set__Fuse_Node__set_Value(Set__Fuse_Node* __this, ::app::Fuse::Node* value)
{
    __this->_Value = value;
}

void Set__Fuse_Node__Perform(Set__Fuse_Node* __this, ::app::Fuse::Node* target)
{
    ::uPtr< ::app::Uno::UX::Property__Fuse_Node*>(__this->Target())->Set(__this->Value());
}

}}}}
