// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Runtime\Implementation\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Byte.h>
#include <app/Uno.Char.h>
#include <app/Uno.Double.h>
#include <app/Uno.Float.h>
#include <app/Uno.FormatException.h>
#include <app/Uno.Long.h>
#include <app/Uno.Object.h>
#include <app/Uno.Runtime.Implementation.Internal.FormatStringItem.h>
#include <app/Uno.Runtime.Implementation.Internal.NumericFormatter.h>
#include <app/Uno.SByte.h>
#include <app/Uno.Short.h>
#include <app/Uno.String.h>
#include <app/Uno.UInt.h>
#include <app/Uno.ULong.h>
#include <app/Uno.UShort.h>

namespace app {
namespace Uno {
namespace Runtime {
namespace Implementation {
namespace Internal {

FormatStringItem__uType* FormatStringItem__typeof()
{
    static FormatStringItem__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (FormatStringItem__uType*)::uAllocClassType(sizeof(FormatStringItem__uType), "Uno.Runtime.Implementation.Internal.FormatStringItem", ::app::Uno::Runtime::Implementation::Internal::FormatStringToken__typeof());
        type->__fp_Equals = (bool(*)(::uObject*, ::uObject*))FormatStringItem__Equals;
        type->__fp_GetHashCode = (int(*)(::uObject*))FormatStringItem__GetHashCode;
        type->__fp_ToString_1 = (::uString*(*)(::app::Uno::Runtime::Implementation::Internal::FormatStringToken*, ::uArray*))FormatStringItem__ToString_1;
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

int FormatStringItem__get_Number(FormatStringItem* __this)
{
    int index = ::app::Uno::String::IndexOf(::uPtr< ::uString*>(__this->Lexeme()), ',', 0);

    if (index == -1)
    {
        index = ::app::Uno::String::IndexOf(::uPtr< ::uString*>(__this->Lexeme()), ':', 0);
    }

    if (index == -1)
    {
        index = ::app::Uno::String::IndexOf(::uPtr< ::uString*>(__this->Lexeme()), '}', 0);
    }

    return ::app::Uno::Int__Parse(NULL, ::app::Uno::String::Substring(::uPtr< ::uString*>(__this->Lexeme()), 1, index - 1));
}

::uString* FormatStringItem__get_FormatString(FormatStringItem* __this)
{
    int colon = ::app::Uno::String::IndexOf(::uPtr< ::uString*>(__this->Lexeme()), ':', 0);

    if (colon == -1)
    {
        return NULL;
    }

    int end = ::app::Uno::String::IndexOf(::uPtr< ::uString*>(__this->Lexeme()), '}', 0);

    if (end == -1)
    {
        U_THROW(::app::Uno::FormatException__New_3(NULL, ::uGetConstString("Format specifier was invalid")));
    }

    return ::app::Uno::String::Substring(::uPtr< ::uString*>(__this->Lexeme()), colon + 1, (end - colon) - 1);
}

bool FormatStringItem__Equals(FormatStringItem* __this, ::uObject* obj)
{
    if (obj == NULL)
    {
        return false;
    }

    FormatStringItem* token = ::uAs< FormatStringItem*>(obj, FormatStringItem__typeof());

    if (token == NULL)
    {
        return false;
    }

    return ::app::Uno::String__op_Equality(NULL, __this->Lexeme(), ::uPtr< ::app::Uno::Runtime::Implementation::Internal::FormatStringItem*>(token)->Lexeme());
}

int FormatStringItem__GetHashCode(FormatStringItem* __this)
{
    return ::uPtr< ::uString*>(__this->Lexeme())->GetHashCode();
}

::uString* FormatStringItem__ToString_1(FormatStringItem* __this, ::uArray* objs)
{
    if ((__this->Number() < 0) || (__this->Number() > (::uPtr< ::uArray*>(objs)->Length() - 1)))
    {
        U_THROW(::app::Uno::FormatException__New_3(NULL, ::uGetConstString("Index (zero based) must be greater than or equal to zero and less than the size of the argument list.")));
    }

    ::uObject* o = ::uPtr< ::uArray*>(objs)->Item< ::uObject*>(__this->Number());
    ::uString* formatString = __this->FormatString();

    if (::app::Uno::String__IsNullOrEmpty(NULL, formatString))
    {
        return ::app::Uno::Object::ToString(::uPtr< ::uObject*>(o));
    }
    else
    {
        if (::uIs(o, ::app::Uno::Bool__typeof()))
        {
            return ::app::Uno::Runtime::Implementation::Internal::NumericFormatter__Format(NULL, formatString, ::uUnbox< bool>(o));
        }

        if (::uIs(o, ::app::Uno::Char__typeof()))
        {
            return ::app::Uno::Runtime::Implementation::Internal::NumericFormatter__Format_3(NULL, formatString, (int)::uUnbox< ::uChar>(o));
        }

        if (::uIs(o, ::app::Uno::SByte__typeof()))
        {
            return ::app::Uno::Runtime::Implementation::Internal::NumericFormatter__Format_1(NULL, formatString, ::uUnbox< ::uSByte>(o));
        }

        if (::uIs(o, ::app::Uno::Byte__typeof()))
        {
            return ::app::Uno::Runtime::Implementation::Internal::NumericFormatter__Format_2(NULL, formatString, (::uShort)::uUnbox< ::uByte>(o));
        }

        if (::uIs(o, ::app::Uno::Short__typeof()))
        {
            return ::app::Uno::Runtime::Implementation::Internal::NumericFormatter__Format_2(NULL, formatString, ::uUnbox< ::uShort>(o));
        }

        if (::uIs(o, ::app::Uno::UShort__typeof()))
        {
            return ::app::Uno::Runtime::Implementation::Internal::NumericFormatter__Format_3(NULL, formatString, (int)::uUnbox< ::uUShort>(o));
        }

        if (::uIs(o, ::app::Uno::Int__typeof()))
        {
            return ::app::Uno::Runtime::Implementation::Internal::NumericFormatter__Format_3(NULL, formatString, ::uUnbox< int>(o));
        }

        if (::uIs(o, ::app::Uno::UInt__typeof()))
        {
            return ::app::Uno::Runtime::Implementation::Internal::NumericFormatter__Format_4(NULL, formatString, (::uLong)::uUnbox< ::uUInt>(o));
        }

        if (::uIs(o, ::app::Uno::Long__typeof()))
        {
            return ::app::Uno::Runtime::Implementation::Internal::NumericFormatter__Format_4(NULL, formatString, ::uUnbox< ::uLong>(o));
        }

        if (::uIs(o, ::app::Uno::ULong__typeof()))
        {
            return ::app::Uno::Runtime::Implementation::Internal::NumericFormatter__Format_5(NULL, formatString, ::uUnbox< ::uULong>(o));
        }

        if (::uIs(o, ::app::Uno::Float__typeof()))
        {
            return ::app::Uno::Runtime::Implementation::Internal::NumericFormatter__Format_6(NULL, formatString, ::uUnbox< float>(o));
        }

        if (::uIs(o, ::app::Uno::Double__typeof()))
        {
            return ::app::Uno::Runtime::Implementation::Internal::NumericFormatter__Format_7(NULL, formatString, ::uUnbox< double>(o));
        }
    }

    return ::app::Uno::Object::ToString(::uPtr< ::uObject*>(o));
}

void FormatStringItem___ObjInit_1(FormatStringItem* __this, ::uString* lexeme)
{
    ::app::Uno::Runtime::Implementation::Internal::FormatStringToken___ObjInit(__this, lexeme);
}

FormatStringItem* FormatStringItem__New_1(::uStatic* __this, ::uString* lexeme)
{
    FormatStringItem* inst = (::app::Uno::Runtime::Implementation::Internal::FormatStringItem*)::uAllocObject(sizeof(::app::Uno::Runtime::Implementation::Internal::FormatStringItem), ::app::Uno::Runtime::Implementation::Internal::FormatStringItem__typeof());
    inst->_ObjInit_1(lexeme);
    return inst;
}

}}}}}
