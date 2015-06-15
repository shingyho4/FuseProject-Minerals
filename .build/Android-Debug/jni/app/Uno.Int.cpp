// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.ArgumentNullException.h>
#include <app/Uno.Byte.h>
#include <app/Uno.Char.h>
#include <app/Uno.Double.h>
#include <app/Uno.Float.h>
#include <app/Uno.FormatException.h>
#include <app/Uno.Int.h>
#include <app/Uno.Long.h>
#include <app/Uno.OverflowException.h>
#include <app/Uno.Short.h>
#include <app/Uno.String.h>
#include <app/Uno.UInt.h>
#include <app/Uno.ULong.h>
#include <app/Uno.UShort.h>
#include <Uno/XliInterop.h>
#include <Xli/String.h>
#include <Xli/Traits.h>
#include <Xli/Unicode.h>

namespace app {
namespace Uno {

Int__uType* Int__typeof()
{
    static Int__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Int__uType*)::uAllocValueType(sizeof(Int__uType), "Uno.Int", sizeof(int));
        type->__fp_Equals_value = (bool(*)(void*, ::uObject*))Int__Equals;
        type->__fp_GetHashCode_value = (int(*)(void*))Int__GetHashCode;
        type->__fp_ToString_value = (::uString*(*)(void*))Int__ToString;
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

bool Int__Equals(int* __this, ::uObject* o)
{
    return ::app::Uno::Object__Equals(::uBox< int>(Int__typeof(), *__this), o);
}

int Int__GetHashCode(int* __this)
{
    return *__this;
}

::uString* Int__ToString(int* __this)
{
    Xli::String ansi(*__this);
    return uNewStringAnsi(ansi.Ptr(), ansi.Length());
}

int Int__Parse(::uStatic* __this, ::uString* __str)
{
    try
    {
        if (__str == NULL)
        {
            XLI_THROW_INVALID_ARGUMENT("String");
        }
    
        Xli::String s = Xli::Unicode::Utf16To8(__str->_ptr, __str->_len);
        return s.ToInt();
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
