// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Bool.h>
#include <app/Uno.Exception.h>
#include <app/Uno.UX.Property__float4.h>

namespace app {
namespace Uno {
namespace UX {

Property__float4__uType* Property__float4__typeof()
{
    static Property__float4__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Property__float4__uType*)::uAllocClassType(sizeof(Property__float4__uType), "Uno.UX.Property<float4>", ::app::Uno::UX::Property__typeof());
        type->__fp_OnSet = Property__float4__OnSet;
        type->__fp_OnGet = Property__float4__OnGet;
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void Property__float4__RetainRestState(Property__float4* __this)
{
    if (!__this->_hasRestState)
    {
        ::app::Uno::Float4 v = __this->OnGet();
        __this->_restState = v;
        __this->_hasRestState = true;
    }
}

::app::Uno::Float4 Property__float4__GetRestState(Property__float4* __this)
{
    __this->RetainRestState();
    return __this->_restState;
}

void Property__float4__Set(Property__float4* __this, ::app::Uno::Float4 value)
{
    __this->RetainRestState();
    __this->OnSet(value);
}

void Property__float4__SetRestState(Property__float4* __this, ::app::Uno::Float4 value)
{
    __this->OnSet(value);
    __this->_hasRestState = false;
    __this->RetainRestState();
}

void Property__float4__OnSet(Property__float4* __this, ::app::Uno::Float4 value)
{
    U_THROW(::app::Uno::Exception__New_2(NULL));
}

::app::Uno::Float4 Property__float4__OnGet(Property__float4* __this)
{
    U_THROW(::app::Uno::Exception__New_2(NULL));
}

void Property__float4___ObjInit_1(Property__float4* __this, int stage)
{
    ::app::Uno::UX::Property___ObjInit(__this, stage);
}

}}}
