// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Exception.h>
#include <app/Uno.UX.Property__bool.h>

namespace app {
namespace Uno {
namespace UX {

Property__bool__uType* Property__bool__typeof()
{
    static Property__bool__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Property__bool__uType*)::uAllocClassType(sizeof(Property__bool__uType), "Uno.UX.Property<bool>", ::app::Uno::UX::Property__typeof());
        type->__fp_OnSet = Property__bool__OnSet;
        type->__fp_OnGet = Property__bool__OnGet;
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void Property__bool__RetainRestState(Property__bool* __this)
{
    if (!__this->_hasRestState)
    {
        bool v = __this->OnGet();
        __this->_restState = v;
        __this->_hasRestState = true;
    }
}

bool Property__bool__GetRestState(Property__bool* __this)
{
    __this->RetainRestState();
    return __this->_restState;
}

void Property__bool__Set(Property__bool* __this, bool value)
{
    __this->RetainRestState();
    __this->OnSet(value);
}

void Property__bool__OnSet(Property__bool* __this, bool value)
{
    U_THROW(::app::Uno::Exception__New_2(NULL));
}

bool Property__bool__OnGet(Property__bool* __this)
{
    U_THROW(::app::Uno::Exception__New_2(NULL));
}

void Property__bool___ObjInit_1(Property__bool* __this, int stage)
{
    ::app::Uno::UX::Property___ObjInit(__this, stage);
}

}}}
