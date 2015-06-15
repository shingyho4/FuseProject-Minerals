// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Platform2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Platform2.ViewNativeHandle.h>
#include <Xli/Traits.h>

namespace app {
namespace Uno {
namespace Platform2 {

ViewNativeHandle__uType* ViewNativeHandle__typeof()
{
    static ViewNativeHandle__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (ViewNativeHandle__uType*)::uAllocValueType(sizeof(ViewNativeHandle__uType), "Uno.Platform2.ViewNativeHandle", sizeof(uPlatform2::ViewNativeHandle));
        type->__fp_Equals_value = (bool(*)(void*, ::uObject*))ViewNativeHandle__Equals;
        type->__fp_GetHashCode_value = (int(*)(void*))ViewNativeHandle__GetHashCode;
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

uPlatform2::ViewNativeHandle ViewNativeHandle__get_Null(::uStatic* __this)
{
    return NULL;
}

bool ViewNativeHandle__Equals(uPlatform2::ViewNativeHandle* __this, ::uObject* obj)
{
    return ::uIs(obj, ViewNativeHandle__typeof()) && ViewNativeHandle__op_Equality(NULL, ::uUnbox< uPlatform2::ViewNativeHandle>(obj), *__this);
}

int ViewNativeHandle__GetHashCode(uPlatform2::ViewNativeHandle* __this)
{
    return ::Xli::DefaultTraits::Hash(__this);
}

bool ViewNativeHandle__IsSameView(::uStatic* __this, uPlatform2::ViewNativeHandle __handle1, uPlatform2::ViewNativeHandle __handle2)
{
    return uPlatform2::View::IsSameView(__handle1, __handle2);
}

bool ViewNativeHandle__op_Implicit(::uStatic* __this, uPlatform2::ViewNativeHandle handle)
{
    return handle;
}

bool ViewNativeHandle__op_LogicalNot(::uStatic* __this, uPlatform2::ViewNativeHandle handle)
{
    return !handle;
}

bool ViewNativeHandle__op_Equality(::uStatic* __this, uPlatform2::ViewNativeHandle lhs, uPlatform2::ViewNativeHandle rhs)
{
    return ViewNativeHandle__IsSameView(NULL, lhs, rhs);
}

}}}
