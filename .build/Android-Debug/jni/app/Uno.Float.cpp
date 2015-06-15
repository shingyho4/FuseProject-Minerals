// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.ArgumentNullException.h>
#include <app/Uno.Byte.h>
#include <app/Uno.Double.h>
#include <app/Uno.Float.h>
#include <app/Uno.FormatException.h>
#include <app/Uno.OverflowException.h>
#include <app/Uno.SByte.h>
#include <app/Uno.Short.h>
#include <app/Uno.String.h>
#include <app/Uno.UInt.h>
#include <app/Uno.UShort.h>
#include <Uno/XliInterop.h>
#include <Xli/String.h>
#include <Xli/Traits.h>
#include <Xli/Unicode.h>

namespace app {
namespace Uno {

Float__uType* Float__typeof()
{
    static Float__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Float__uType*)::uAllocValueType(sizeof(Float__uType), "Uno.Float", sizeof(float));
        type->__fp_Equals_value = (bool(*)(void*, ::uObject*))Float__Equals;
        type->__fp_GetHashCode_value = (int(*)(void*))Float__GetHashCode;
        type->__fp_ToString_value = (::uString*(*)(void*))Float__ToString;
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

bool Float__Equals(float* __this, ::uObject* o)
{
    return ::app::Uno::Object__Equals(::uBox(Float__typeof(), *__this), o);
}

int Float__GetHashCode(float* __this)
{
    return (int)Xli::DefaultTraits::Hash(*__this);
}

::uString* Float__ToString(float* __this)
{
    Xli::String ansi = Xli::DefaultTraits::ToString(*__this);
    return uNewStringAnsi(ansi.Ptr(), ansi.Length());
}

float Float__Parse(::uStatic* __this, ::uString* __str)
{
    try
    {
        if (__str == NULL)
        {
            XLI_THROW_INVALID_ARGUMENT("String");
        }
    
        Xli::String s = Xli::Unicode::Utf16To8(__str->_ptr, __str->_len);
        return s.ToFloat();
    }
    catch (const Xli::FormatException& e)
    {
        throw uThrowable(::app::Uno::FormatException__New_3(NULL, ::uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
    }
    catch (const Xli::ArgumentException& e)
    {
        throw uThrowable(::app::Uno::ArgumentNullException__New_5(NULL, ::uStringFromXliString("String")), e.GetFunction(), e.GetLine());
    }
    catch (const Xli::OverflowException& e)
    {
        throw uThrowable(::app::Uno::OverflowException__New_3(NULL, ::uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
    }
}

}}
