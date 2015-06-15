// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Triggers.State.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Exception.h>
#include <app/Uno.UX.Property__Fuse_Triggers_State.h>

namespace app {
namespace Uno {
namespace UX {

Property__Fuse_Triggers_State__uType* Property__Fuse_Triggers_State__typeof()
{
    static Property__Fuse_Triggers_State__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Property__Fuse_Triggers_State__uType*)::uAllocClassType(sizeof(Property__Fuse_Triggers_State__uType), "Uno.UX.Property<Fuse.Triggers.State>", ::app::Uno::UX::Property__typeof(), 0, 1);
        type->StrongRefOffsets[0] = offsetof(Property__Fuse_Triggers_State, _restState);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_restState";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void Property__Fuse_Triggers_State__RetainRestState(Property__Fuse_Triggers_State* __this)
{
    if (!__this->_hasRestState)
    {
        ::app::Fuse::Triggers::State* v = __this->OnGet();
        __this->_restState = v;
        __this->_hasRestState = true;
    }
}

void Property__Fuse_Triggers_State__Set(Property__Fuse_Triggers_State* __this, ::app::Fuse::Triggers::State* value)
{
    __this->RetainRestState();
    __this->OnSet(value);
}

void Property__Fuse_Triggers_State__OnSet(Property__Fuse_Triggers_State* __this, ::app::Fuse::Triggers::State* value)
{
    U_THROW(::app::Uno::Exception__New_2(NULL));
}

::app::Fuse::Triggers::State* Property__Fuse_Triggers_State__OnGet(Property__Fuse_Triggers_State* __this)
{
    U_THROW(::app::Uno::Exception__New_2(NULL));
}

}}}
