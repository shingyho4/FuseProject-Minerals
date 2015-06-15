// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Bool.h>
#include <app/Uno.Exception.h>
#include <app/Uno.UX.Property__float.h>

namespace app {
namespace Uno {
namespace UX {

Property__float__uType* Property__float__typeof()
{
    static Property__float__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Property__float__uType*)::uAllocClassType(sizeof(Property__float__uType), "Uno.UX.Property<float>", ::app::Uno::UX::Property__typeof());
        type->__fp_OnSet = Property__float__OnSet;
        type->__fp_OnGet = Property__float__OnGet;
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void Property__float__RetainRestState(Property__float* __this)
{
    if (!__this->_hasRestState)
    {
        float v = __this->OnGet();
        __this->_restState = v;
        __this->_hasRestState = true;
    }
}

float Property__float__GetRestState(Property__float* __this)
{
    __this->RetainRestState();
    return __this->_restState;
}

void Property__float__Set(Property__float* __this, float value)
{
    __this->RetainRestState();
    __this->OnSet(value);
}

void Property__float__OnSet(Property__float* __this, float value)
{
    U_THROW(::app::Uno::Exception__New_2(NULL));
}

float Property__float__OnGet(Property__float* __this)
{
    U_THROW(::app::Uno::Exception__New_2(NULL));
}

void Property__float___ObjInit_1(Property__float* __this, int stage)
{
    ::app::Uno::UX::Property___ObjInit(__this, stage);
}

}}}
