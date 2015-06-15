// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.ArgumentNullException.h>
#include <app/Uno.ArgumentOutOfRangeException.h>
#include <app/Uno.Collections.List__Uno_Runtime_Implementation_Internal_Forma-a0649357.h>
#include <app/Uno.Collections.List1_Enumerator__Uno_Runtime_Implementation_In-3ecc4a89.h>
#include <app/Uno.Runtime.Implementation.Internal.FormatStringToken.h>
#include <app/Uno.Runtime.Implementation.Internal.FormatStringTokenizer.h>
#include <app/Uno.String.h>
#include <app/Uno.Text.StringBuilder.h>
#include <Xli/Traits.h>

namespace app {
namespace Uno {

::uStaticStrong< ::uString*> String__Empty;

String__uType* String__typeof()
{
    static String__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (String__uType*)::uAllocClassType(sizeof(String__uType), "Uno.String", ::uObject__typeof());
        type->__fp_GetHashCode = (int(*)(::uObject*))String__GetHashCode;
        type->__fp_ToString = (::uString*(*)(::uObject*))String__ToString;
        type->__fp_Equals = (bool(*)(::uObject*, ::uObject*))String__Equals;
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

int String__GetHashCode(::uString* __this)
{
    return (int)Xli::DefaultTraits::Hash((const Xli::UInt8*)__this->_ptr, sizeof(uChar) * __this->_len);
}

::uString* String__ToString(::uString* __this)
{
    return __this;
}

::uString* String__ToLower(::uString* __this)
{
    ::uArray* chars = ::uNewArray(::app::Uno::Char__typeof(), __this->Length());

    for (int i = 0; i < __this->Length(); i++)
    {
        ::uPtr< ::uArray*>(chars)->Item< ::uChar>(i) = ::app::Uno::Char__ToLower(NULL, __this->Item(i));
    }

    return ::uNewStringFromArray(chars);
}

::uString* String__ToUpper(::uString* __this)
{
    ::uArray* chars = ::uNewArray(::app::Uno::Char__typeof(), __this->Length());

    for (int i = 0; i < __this->Length(); i++)
    {
        ::uPtr< ::uArray*>(chars)->Item< ::uChar>(i) = ::app::Uno::Char__ToUpper(NULL, __this->Item(i));
    }

    return ::uNewStringFromArray(chars);
}

bool String__Equals(::uString* __this, ::uObject* __other)
{
    if (__other != NULL &&
        __this->__obj_type == __other->__obj_type)
    {
        uString* str = (uString*)__other;
        return __this->_len == str->_len && !memcmp(__this->_ptr, str->_ptr, sizeof(uChar) * __this->_len);
    }
    
    return false;
}

bool String__Equals_3(::uStatic* __this, ::uString* left, ::uString* right)
{
    if (::app::Uno::Object__ReferenceEquals(NULL, (::uObject*)left, (::uObject*)right))
    {
        return true;
    }

    if (::app::Uno::Object__ReferenceEquals(NULL, (::uObject*)left, NULL) || ::app::Uno::Object__ReferenceEquals(NULL, (::uObject*)right, NULL))
    {
        return false;
    }

    if (::uPtr< ::uString*>(left)->Length() != ::uPtr< ::uString*>(right)->Length())
    {
        return false;
    }

    for (int i = 0; i < ::uPtr< ::uString*>(left)->Length(); i++)
    {
        if (::uPtr< ::uString*>(left)->Item(i) != ::uPtr< ::uString*>(right)->Item(i))
        {
            return false;
        }
    }

    return true;
}

::uString* String__Concat(::uStatic* __this, ::uString* a, ::uString* b)
{
    if (::app::Uno::Object__ReferenceEquals(NULL, (::uObject*)a, NULL) && ::app::Uno::Object__ReferenceEquals(NULL, (::uObject*)b, NULL))
    {
        return String__Empty;
    }

    if (::app::Uno::Object__ReferenceEquals(NULL, (::uObject*)a, NULL))
    {
        return b;
    }

    if (::app::Uno::Object__ReferenceEquals(NULL, (::uObject*)b, NULL))
    {
        return a;
    }

    ::uArray* s = ::uNewArray(::app::Uno::Char__typeof(), ::uPtr< ::uString*>(a)->Length() + ::uPtr< ::uString*>(b)->Length());

    for (int i = 0; i < a->Length(); i++)
    {
        s->Item< ::uChar>(i) = a->Item(i);
    }

    for (int i = 0; i < b->Length(); i++)
    {
        s->Item< ::uChar>(a->Length() + i) = b->Item(i);
    }

    return ::uNewStringFromArray(s);
}

::uString* String__Concat_1(::uStatic* __this, ::uObject* a, ::uObject* b)
{
    return String__Concat(NULL, (a == NULL) ? (::uString*)NULL : ::app::Uno::Object::ToString(::uPtr< ::uObject*>(a)), (b == NULL) ? (::uString*)NULL : ::app::Uno::Object::ToString(::uPtr< ::uObject*>(b)));
}

::uString* String__Substring(::uString* __this, int start, int len)
{
    if ((start == __this->Length()) && (len == 0))
    {
        return String__Empty;
    }

    ::uArray* s = ::uNewArray(::app::Uno::Char__typeof(), len);

    for (int i = 0; i < len; i++)
    {
        s->Item< ::uChar>(i) = __this->Item(start + i);
    }

    return ::uNewStringFromArray(s);
}

::uString* String__Substring_1(::uString* __this, int start)
{
    return ::app::Uno::String::Substring(__this, start, __this->Length() - start);
}

int String__IndexOf(::uString* __this, ::uChar c, int startIndex)
{
    if (startIndex > __this->Length())
    {
        U_THROW(::app::Uno::ArgumentOutOfRangeException__New_6(NULL, ::uGetConstString("startIndex")));
    }

    for (int i = startIndex; i < __this->Length(); i++)
    {
        if (__this->Item(i) == c)
        {
            return i;
        }
    }

    return -1;
}

::uArray* String__ToCharArray(::uString* __this, int start, int length)
{
    ::uArray* result = ::uNewArray(::app::Uno::Char__typeof(), length);

    for (int i = 0; i < length; i++)
    {
        result->Item< ::uChar>(i) = __this->Item(start + i);
    }

    return result;
}

::uArray* String__ToCharArray_1(::uString* __this)
{
    return ::app::Uno::String::ToCharArray(__this, 0, __this->Length());
}

::uArray* String__Split(::uString* __this, ::uArray* splitChars)
{
    ::uArray* array_124;

    if ((splitChars == NULL) || (::uPtr< ::uArray*>(splitChars)->Length() == 0))
    {
        splitChars = (array_124 = ::uNewArray(::app::Uno::Char__typeof(), 4), ::uPtr< ::uArray*>(array_124)->Item< ::uChar>(0) = ' ', ::uPtr< ::uArray*>(array_124)->Item< ::uChar>(1) = 9, ::uPtr< ::uArray*>(array_124)->Item< ::uChar>(2) = 10, ::uPtr< ::uArray*>(array_124)->Item< ::uChar>(3) = 13, array_124);
    }

    int splitCount = 0;
    int charCount = 0;

    for (int i = 0; i < __this->Length(); i++)
    {
        for (int k = 0; k < ::uPtr< ::uArray*>(splitChars)->Length(); k++)
        {
            if (__this->Item(i) == ::uPtr< ::uArray*>(splitChars)->Item< ::uChar>(k))
            {
                splitCount++;
            }
        }
    }

    ::uArray* r = ::uNewArray(::app::Uno::String__typeof(), splitCount + 1);
    ::uArray* ch = ::uNewArray(::uGetArrayType(::app::Uno::Char__typeof()), splitCount + 1);
    splitCount = 0;
    int start = 0;

    for (int i = 0; i < __this->Length(); i++)
    {
        bool found = false;

        for (int k = 0; k < ::uPtr< ::uArray*>(splitChars)->Length(); k++)
        {
            if (__this->Item(i) == ::uPtr< ::uArray*>(splitChars)->Item< ::uChar>(k))
            {
                ::uPtr< ::uArray*>(ch)->ItemStrong< ::uArray*>(splitCount) = ::uNewArray(::app::Uno::Char__typeof(), charCount);

                for (int n = 0; n < charCount; n++)
                {
                    ::uPtr< ::uArray*>(ch->Item< ::uArray*>(splitCount))->Item< ::uChar>(n) = __this->Item(start + n);
                }

                start = i + 1;
                splitCount++;
                charCount = 0;
                found = true;
                break;
            }
        }

        if (!found)
        {
            charCount++;
        }
    }

    ch->ItemStrong< ::uArray*>(splitCount) = ::uNewArray(::app::Uno::Char__typeof(), charCount);

    for (int n = 0; n < charCount; n++)
    {
        ::uPtr< ::uArray*>(ch->Item< ::uArray*>(splitCount))->Item< ::uChar>(n) = __this->Item(start + n);
    }

    for (int i = 0; i < ch->Length(); i++)
    {
        r->ItemStrong< ::uString*>(i) = ::uNewStringFromArray(ch->Item< ::uArray*>(i));
    }

    return r;
}

::uString* String__Join(::uStatic* __this, ::uString* separator, ::uArray* value)
{
    ::uString* result = ::uGetConstString("");

    for (int i = 0; i < ::uPtr< ::uArray*>(value)->Length(); i++)
    {
        if (i > 0)
        {
            result = String__op_Addition(NULL, result, separator);
        }

        result = String__op_Addition(NULL, result, ::uPtr< ::uArray*>(value)->Item< ::uString*>(i));
    }

    return result;
}

bool String__IsNullOrEmpty(::uStatic* __this, ::uString* s)
{
    return String__op_Equality(NULL, s, NULL) || String__op_Equality(NULL, s, String__Empty);
}

::uString* String__Trim(::uString* __this)
{
    if (String__op_Equality(NULL, __this, String__Empty))
    {
        return String__Empty;
    }

    int first = ::app::Uno::String::IndexOfFirstNotWhiteSpace(__this);

    if (first == -1)
    {
        return String__Empty;
    }

    int last = ::app::Uno::String::IndexOfLastNotWhiteSpace(__this);
    int length = (last - first) + 1;
    return ::app::Uno::String::Substring(__this, first, length);
}

::uString* String__Trim_1(::uString* __this, ::uArray* trimChars)
{
    if (String__op_Equality(NULL, __this, String__Empty))
    {
        return String__Empty;
    }

    int first = ::app::Uno::String::IndexOfFirstNotInSet(__this, trimChars);

    if (first == -1)
    {
        return String__Empty;
    }

    int last = ::app::Uno::String::IndexOfLastNotInSet(__this, trimChars);
    int length = (last - first) + 1;
    return ::app::Uno::String::Substring(__this, first, length);
}

int String__IndexOfFirstNotInSet(::uString* __this, ::uArray* charSet)
{
    for (int i = 0; i < __this->Length(); i++)
    {
        if (!::app::Uno::String::InSet(__this, __this->Item(i), charSet))
        {
            return i;
        }
    }

    return -1;
}

int String__IndexOfLastNotInSet(::uString* __this, ::uArray* charSet)
{
    for (int i = __this->Length() - 1; i >= 0; i--)
    {
        if (!::app::Uno::String::InSet(__this, __this->Item(i), charSet))
        {
            return i;
        }
    }

    return -1;
}

bool String__InSet(::uString* __this, ::uChar c, ::uArray* charSet)
{
    for (int i = 0; i < ::uPtr< ::uArray*>(charSet)->Length(); i++)
    {
        if (::uPtr< ::uArray*>(charSet)->Item< ::uChar>(i) == c)
        {
            return true;
        }
    }

    return false;
}

int String__IndexOfFirstNotWhiteSpace(::uString* __this)
{
    for (int i = 0; i < __this->Length(); i++)
    {
        if (!::app::Uno::Char__IsWhiteSpace(NULL, __this->Item(i)))
        {
            return i;
        }
    }

    return -1;
}

int String__IndexOfLastNotWhiteSpace(::uString* __this)
{
    for (int i = __this->Length() - 1; i >= 0; i--)
    {
        if (!::app::Uno::Char__IsWhiteSpace(NULL, __this->Item(i)))
        {
            return i;
        }
    }

    return -1;
}

::uString* String__Insert(::uString* __this, int pos, ::uString* str)
{
    if (String__op_Equality(NULL, str, NULL))
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("str")));
    }

    if ((pos < 0) || (pos > __this->Length()))
    {
        U_THROW(::app::Uno::ArgumentOutOfRangeException__New_6(NULL, ::uGetConstString("pos")));
    }

    if (::uPtr< ::uString*>(str)->Length() == 0)
    {
        return __this;
    }

    if (__this->Length() == 0)
    {
        return str;
    }

    ::uArray* s = ::uNewArray(::app::Uno::Char__typeof(), __this->Length() + ::uPtr< ::uString*>(str)->Length());

    for (int i = 0; i < pos; i++)
    {
        s->Item< ::uChar>(i) = __this->Item(i);
    }

    for (int i = 0; i < str->Length(); i++)
    {
        s->Item< ::uChar>(i + pos) = str->Item(i);
    }

    for (int i = pos; i < __this->Length(); i++)
    {
        s->Item< ::uChar>(i + str->Length()) = __this->Item(i);
    }

    return ::uNewStringFromArray(s);
}

int String__IndexOf_1(::uString* __this, ::uString* str, int startIndex)
{
    if (String__op_Equality(NULL, str, NULL))
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("str")));
    }

    if (String__op_Equality(NULL, str, String__Empty))
    {
        return 0;
    }

    if (startIndex > __this->Length())
    {
        U_THROW(::app::Uno::ArgumentOutOfRangeException__New_6(NULL, ::uGetConstString("startIndex")));
    }

    for (int hay = startIndex; hay < __this->Length(); hay++)
    {
        if (::uPtr< ::uString*>(str)->Length() > (__this->Length() - hay))
        {
            return -1;
        }

        if (::app::Uno::String::MatchesAt(__this, str, hay))
        {
            return hay;
        }
    }

    return -1;
}

bool String__MatchesAt(::uString* __this, ::uString* str, int pos)
{
    for (int i = 0; i < ::uPtr< ::uString*>(str)->Length(); i++)
    {
        if (((pos + i) == __this->Length()) || (__this->Item(pos + i) != ::uPtr< ::uString*>(str)->Item(i)))
        {
            return false;
        }
    }

    return true;
}

::uString* String__Format(::uStatic* __this, ::uString* str, ::uArray* objs)
{
    ::app::Uno::Text::StringBuilder* builder = ::app::Uno::Text::StringBuilder__New_1(NULL);
    ::app::Uno::Collections::List__Uno_Runtime_Implementation_Internal_FormatStringToken* tokens = ::app::Uno::Runtime::Implementation::Internal::FormatStringTokenizer__TokenizeFormatString(NULL, str);

    for (::app::Uno::Collections::List1_Enumerator__Uno_Runtime_Implementation_Internal_FormatStringToken enum_123 = ::uPtr< ::app::Uno::Collections::List__Uno_Runtime_Implementation_Internal_FormatStringToken*>(tokens)->GetEnumerator(); enum_123.MoveNext(); )
    {
        ::app::Uno::Runtime::Implementation::Internal::FormatStringToken* token = enum_123.Current();
        ::uPtr< ::app::Uno::Text::StringBuilder*>(builder)->Append_1(::uPtr< ::app::Uno::Runtime::Implementation::Internal::FormatStringToken*>(token)->ToString_1(objs));
    }

    return ::uPtr< ::app::Uno::Text::StringBuilder*>(builder)->ToString();
}

void String___TypeInit(::uStatic* __this)
{
    String__Empty = ::uGetConstString("");
}

::uString* String__op_Addition(::uStatic* __this, ::uString* a, ::uString* b)
{
    return String__Concat(NULL, a, b);
}

bool String__op_Equality(::uStatic* __this, ::uString* left, ::uString* right)
{
    return String__Equals_3(NULL, left, right);
}

::uString* String__op_Addition_1(::uStatic* __this, ::uString* a, ::uObject* b)
{
    return String__Concat_1(NULL, (::uObject*)a, b);
}

bool String__op_Inequality(::uStatic* __this, ::uString* left, ::uString* right)
{
    return !String__Equals_3(NULL, left, right);
}

::uString* String__op_Addition_2(::uStatic* __this, ::uObject* a, ::uString* b)
{
    return String__Concat_1(NULL, a, (::uObject*)b);
}

}}
