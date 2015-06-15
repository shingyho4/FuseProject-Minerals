// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.1.0\Layouts\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Layouts.DefinitionBase.h>
#include <app/Uno.Action.h>
#include <app/Uno.Delegate.h>

namespace app {
namespace Fuse {
namespace Layouts {

DefinitionBase__uType* DefinitionBase__typeof()
{
    static DefinitionBase__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (DefinitionBase__uType*)::uAllocClassType(sizeof(DefinitionBase__uType), "Fuse.Layouts.DefinitionBase", ::uObject__typeof(), 0, 1);
        type->StrongRefOffsets[0] = offsetof(DefinitionBase, Changed);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "Changed";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

float DefinitionBase__get_ActualOffset(DefinitionBase* __this)
{
    return __this->_actualOffset;
}

void DefinitionBase__set_ActualOffset(DefinitionBase* __this, float value)
{
    __this->_actualOffset = value;
}

bool DefinitionBase__get_Implicit(DefinitionBase* __this)
{
    return __this->_Implicit;
}

void DefinitionBase__set_Implicit(DefinitionBase* __this, bool value)
{
    __this->_Implicit = value;
}

void DefinitionBase__OnChanged(DefinitionBase* __this)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->Changed, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->Changed)->InvokeVoid();
    }
}

void DefinitionBase___ObjInit(DefinitionBase* __this)
{
}

void DefinitionBase__add_Changed(DefinitionBase* __this, ::uDelegate* value)
{
    __this->Changed = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->Changed, (::uDelegate*)value), ::app::Uno::Action__typeof());
}

void DefinitionBase__remove_Changed(DefinitionBase* __this, ::uDelegate* value)
{
    __this->Changed = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->Changed, (::uDelegate*)value), ::app::Uno::Action__typeof());
}

}}}
