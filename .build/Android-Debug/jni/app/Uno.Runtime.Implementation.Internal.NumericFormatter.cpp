// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Runtime\Implementation\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Bool.h>
#include <app/Uno.Byte.h>
#include <app/Uno.Char.h>
#include <app/Uno.Collections.List__char.h>
#include <app/Uno.Double.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Float.h>
#include <app/Uno.FormatException.h>
#include <app/Uno.Int.h>
#include <app/Uno.Long.h>
#include <app/Uno.Math.h>
#include <app/Uno.Runtime.Implementation.Internal.NumericFormatter.h>
#include <app/Uno.SByte.h>
#include <app/Uno.Short.h>
#include <app/Uno.String.h>
#include <app/Uno.Text.StringBuilder.h>
#include <app/Uno.UInt.h>
#include <app/Uno.ULong.h>
#include <app/Uno.UShort.h>

namespace app {
namespace Uno {
namespace Runtime {
namespace Implementation {
namespace Internal {

int NumericFormatter__NumberDecimalDigits;
int NumericFormatter__ExponentialDigits;
::uStaticStrong< ::uString*> NumericFormatter___decimalPoint;

NumericFormatter__uType* NumericFormatter__typeof()
{
    static NumericFormatter__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (NumericFormatter__uType*)::uAllocClassType(sizeof(NumericFormatter__uType), "Uno.Runtime.Implementation.Internal.NumericFormatter");
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::uString* NumericFormatter__get_DecimalPoint(::uStatic* __this)
{
    if (::app::Uno::String__op_Equality(NULL, NumericFormatter___decimalPoint, NULL))
    {
        NumericFormatter___decimalPoint = ::app::Uno::Char::ToString(::uPtr< ::uString*>(::app::Uno::Double::ToString(1.1))->Item(1));
    }

    return NumericFormatter___decimalPoint;
}

::uString* NumericFormatter__Format(::uStatic* __this, ::uString* formatString, bool i)
{
    return ::app::Uno::Bool::ToString(i);
}

::uString* NumericFormatter__Format_1(::uStatic* __this, ::uString* formatString, ::uSByte b)
{
    if (NumericFormatter__GetFormatSpecifier(NULL, formatString) == 2)
    {
        return NumericFormatter__FormatHex(NULL, formatString, b);
    }

    return NumericFormatter__Format_4(NULL, formatString, (::uLong)b);
}

::uString* NumericFormatter__Format_2(::uStatic* __this, ::uString* formatString, ::uShort s)
{
    if (NumericFormatter__GetFormatSpecifier(NULL, formatString) == 2)
    {
        return NumericFormatter__FormatHex_1(NULL, formatString, s);
    }

    return NumericFormatter__Format_4(NULL, formatString, (::uLong)s);
}

::uString* NumericFormatter__Format_3(::uStatic* __this, ::uString* formatString, int i)
{
    if (NumericFormatter__GetFormatSpecifier(NULL, formatString) == 2)
    {
        return NumericFormatter__FormatHex_2(NULL, formatString, i);
    }

    return NumericFormatter__Format_4(NULL, formatString, (::uLong)i);
}

::uString* NumericFormatter__Format_4(::uStatic* __this, ::uString* formatString, ::uLong i)
{
    if (NumericFormatter__GetFormatSpecifier(NULL, formatString) == 2)
    {
        return NumericFormatter__FormatHex_3(NULL, formatString, i);
    }
    else if (i >= 0ll)
    {
        return NumericFormatter__Format_5(NULL, formatString, (::uULong)i);
    }
    else
    {
        return ::app::Uno::String__op_Addition(NULL, ::uGetConstString("-"), NumericFormatter__Format_5(NULL, formatString, (::uULong)(i * -1ll)));
    }
}

::uString* NumericFormatter__Format_5(::uStatic* __this, ::uString* formatString, ::uULong i)
{
    switch (NumericFormatter__GetFormatSpecifier(NULL, formatString))
    {
        case 0:
        {
            return NumericFormatter__FormatDecimal(NULL, formatString, i);
        }
        case 1:
        {
            return NumericFormatter__FormatFixedPoint(NULL, formatString, i);
        }
        case 2:
        {
            return NumericFormatter__FormatHex_4(NULL, formatString, i);
        }
        case 3:
        {
            return NumericFormatter__FormatExponential(NULL, formatString, (double)i);
        }
        case 4:
        {
            return NumericFormatter__FormatGeneral(NULL, formatString, i);
        }
        case 5:
        {
            return ::app::Uno::String__op_Addition(NULL, NumericFormatter__FormatNumber(NULL, formatString, 100ull * i), ::uGetConstString(" %"));
        }
        case 6:
        {
            return NumericFormatter__FormatNumber(NULL, formatString, i);
        }
        default:
        {
            return NumericFormatter__FormatCustom(NULL, formatString, i);
        }
    }
}

::uString* NumericFormatter__Format_6(::uStatic* __this, ::uString* formatString, float f)
{
    if (NumericFormatter__GetFormatSpecifier(NULL, formatString) == 4)
    {
        return NumericFormatter__FormatFloatGeneral(NULL, formatString, f);
    }

    return NumericFormatter__Format_7(NULL, formatString, (double)f);
}

::uString* NumericFormatter__Format_7(::uStatic* __this, ::uString* formatString, double d)
{
    switch (NumericFormatter__GetFormatSpecifier(NULL, formatString))
    {
        case 1:
        {
            return NumericFormatter__FormatFixedPoint_1(NULL, formatString, d);
        }
        case 3:
        {
            return NumericFormatter__FormatExponential(NULL, formatString, d);
        }
        case 4:
        {
            return NumericFormatter__FormatGeneral_1(NULL, formatString, d);
        }
        case 5:
        {
            return ::app::Uno::String__op_Addition(NULL, NumericFormatter__FormatNumber_1(NULL, formatString, 100.0 * d), ::uGetConstString(" %"));
        }
        case 6:
        {
            return NumericFormatter__FormatNumber_1(NULL, formatString, d);
        }
        case 7:
        {
            return NumericFormatter__FormatCustom_1(NULL, formatString, d);
        }
        default:
        {
            U_THROW(::app::Uno::FormatException__New_3(NULL, ::uGetConstString("Format specifier was invalid")));
        }
    }
}

::uString* NumericFormatter__FormatDecimal(::uStatic* __this, ::uString* formatString, ::uULong l)
{
    return NumericFormatter__Pad(NULL, ::app::Uno::ULong::ToString(l), formatString);
}

::uString* NumericFormatter__FormatFixedPoint(::uStatic* __this, ::uString* formatString, ::uULong d)
{
    return ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition(NULL, ::app::Uno::ULong::ToString(d), NumericFormatter__get_DecimalPoint(NULL)), NumericFormatter__Padding(NULL, (::uPtr< ::uString*>(formatString)->Length() > 1) ? NumericFormatter__Digits(NULL, formatString) : NumericFormatter__NumberDecimalDigits));
}

::uString* NumericFormatter__FormatFixedPoint_1(::uStatic* __this, ::uString* formatString, double d)
{
    int desiredDigits = (::uPtr< ::uString*>(formatString)->Length() > 1) ? NumericFormatter__Digits(NULL, formatString) : NumericFormatter__NumberDecimalDigits;
    ::uString* rounded = ::app::Uno::Double::ToString(::app::Uno::Math__Round_6(NULL, d, desiredDigits));
    int decimalPointPos = ::uPtr< ::uString*>(::app::Uno::Int::ToString((int)d))->Length();
    int actualDigits = ::app::Uno::Math__Max_8(NULL, (::uPtr< ::uString*>(rounded)->Length() - decimalPointPos) - 1, 0);

    if (desiredDigits <= actualDigits)
    {
        return rounded;
    }

    ::uString* padding = NumericFormatter__Padding(NULL, desiredDigits - actualDigits);
    bool hasDecimalPoint = ::app::Uno::String::IndexOf_1(rounded, NumericFormatter__get_DecimalPoint(NULL), 0) != -1;
    return ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition(NULL, rounded, hasDecimalPoint ? ::uGetConstString("") : NumericFormatter__get_DecimalPoint(NULL)), padding);
}

::uString* NumericFormatter__FormatHex(::uStatic* __this, ::uString* formatString, ::uSByte b)
{
    if (b < 0)
    {
        return NumericFormatter__DoFormatHex(NULL, formatString, (::uULong)((255 - (::uByte)-b) + 1), 8);
    }

    return NumericFormatter__DoFormatHex(NULL, formatString, (::uULong)b, 8);
}

::uString* NumericFormatter__FormatHex_1(::uStatic* __this, ::uString* formatString, ::uShort s)
{
    if (s < 0)
    {
        return NumericFormatter__DoFormatHex(NULL, formatString, (::uULong)((65535 - (::uUShort)-s) + 1), 8);
    }

    return NumericFormatter__DoFormatHex(NULL, formatString, (::uULong)s, 8);
}

::uString* NumericFormatter__FormatHex_2(::uStatic* __this, ::uString* formatString, int i)
{
    if (i < 0)
    {
        return NumericFormatter__DoFormatHex(NULL, formatString, (::uULong)((4294967295u - (::uUInt)-i) + 1u), 8);
    }

    return NumericFormatter__DoFormatHex(NULL, formatString, (::uULong)i, 8);
}

::uString* NumericFormatter__FormatHex_3(::uStatic* __this, ::uString* formatString, ::uLong l)
{
    if (l == -9223372036854775808ll)
    {
        return ::uGetConstString("8000000000000000");
    }

    if (l < 0ll)
    {
        return NumericFormatter__DoFormatHex(NULL, formatString, (18446744073709551615ull - (::uULong)-l) + 1ull, 16);
    }

    return NumericFormatter__DoFormatHex(NULL, formatString, (::uULong)l, 16);
}

::uString* NumericFormatter__FormatHex_4(::uStatic* __this, ::uString* formatString, ::uULong l)
{
    return NumericFormatter__DoFormatHex(NULL, formatString, l, 16);
}

::uString* NumericFormatter__DoFormatHex(::uStatic* __this, ::uString* formatString, ::uULong l, int maxLength)
{
    ::uArray* array_123;

    if (l == 0ull)
    {
        return NumericFormatter__Pad(NULL, ::uGetConstString("0"), formatString);
    }

    array_123 = ::uNewArray(::app::Uno::Char__typeof(), 16);
    ::uPtr< ::uArray*>(array_123)->Item< ::uChar>(0) = '0';
    ::uPtr< ::uArray*>(array_123)->Item< ::uChar>(1) = '1';
    ::uPtr< ::uArray*>(array_123)->Item< ::uChar>(2) = '2';
    ::uPtr< ::uArray*>(array_123)->Item< ::uChar>(3) = '3';
    ::uPtr< ::uArray*>(array_123)->Item< ::uChar>(4) = '4';
    ::uPtr< ::uArray*>(array_123)->Item< ::uChar>(5) = '5';
    ::uPtr< ::uArray*>(array_123)->Item< ::uChar>(6) = '6';
    ::uPtr< ::uArray*>(array_123)->Item< ::uChar>(7) = '7';
    ::uPtr< ::uArray*>(array_123)->Item< ::uChar>(8) = '8';
    ::uPtr< ::uArray*>(array_123)->Item< ::uChar>(9) = '9';
    ::uPtr< ::uArray*>(array_123)->Item< ::uChar>(10) = 'A';
    ::uPtr< ::uArray*>(array_123)->Item< ::uChar>(11) = 'B';
    ::uPtr< ::uArray*>(array_123)->Item< ::uChar>(12) = 'C';
    ::uPtr< ::uArray*>(array_123)->Item< ::uChar>(13) = 'D';
    ::uPtr< ::uArray*>(array_123)->Item< ::uChar>(14) = 'E';
    ::uPtr< ::uArray*>(array_123)->Item< ::uChar>(15) = 'F';
    ::uArray* hexChars = array_123;
    ::uArray* buffer = ::uNewArray(::app::Uno::Char__typeof(), maxLength);
    int index = maxLength;

    while (l != 0ull)
    {
        ::uPtr< ::uArray*>(buffer)->Item< ::uChar>(--index) = ::uPtr< ::uArray*>(hexChars)->Item< ::uChar>((int)(l % 16ull));
        l = l / 16ull;
    }

    ::uArray* result = ::uNewArray(::app::Uno::Char__typeof(), maxLength - index);

    for (int i = 0; i < result->Length(); i++)
    {
        result->Item< ::uChar>(i) = buffer->Item< ::uChar>(i + index);
    }

    ::uString* returnString = ::uNewStringFromArray(result);

    if (::uPtr< ::uString*>(formatString)->Item(0) == 'x')
    {
        returnString = ::app::Uno::String::ToLower(::uPtr< ::uString*>(returnString));
    }

    return NumericFormatter__Pad(NULL, returnString, formatString);
}

::uString* NumericFormatter__FormatExponential(::uStatic* __this, ::uString* formatString, double d)
{
    double raw = double();
    int offset = int();
    NumericFormatter__CalculateExponential(NULL, d, &raw, &offset);
    int desiredDigits = (::uPtr< ::uString*>(formatString)->Length() > 1) ? NumericFormatter__Digits(NULL, formatString) : NumericFormatter__ExponentialDigits;
    ::uString* rounded = ::app::Uno::Double::ToString(::app::Uno::Math__Round_6(NULL, raw, desiredDigits));

    if (::app::Uno::String::IndexOf_1(::uPtr< ::uString*>(rounded), NumericFormatter__get_DecimalPoint(NULL), 0) == -1)
    {
        rounded = ::app::Uno::String__op_Addition(NULL, rounded, NumericFormatter__get_DecimalPoint(NULL));
    }

    ::uString* padding = NumericFormatter__Padding(NULL, (desiredDigits + 2) - ::uPtr< ::uString*>(rounded)->Length());
    ::uString* exponent = ::app::Uno::Int::ToString(::app::Uno::Math__Abs_5(NULL, offset));
    return ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition(NULL, rounded, padding), ::uGetConstString("E")), (offset < 0) ? ::uGetConstString("-") : ::uGetConstString("+")), NumericFormatter__Padding(NULL, 3 - ::uPtr< ::uString*>(exponent)->Length())), exponent);
}

::uString* NumericFormatter__FormatGeneral(::uStatic* __this, ::uString* formatString, ::uULong i)
{
    if (::uPtr< ::uString*>(formatString)->Length() == 1)
    {
        return ::app::Uno::ULong::ToString(i);
    }

    int desiredDigits = NumericFormatter__Digits(NULL, formatString);
    ::uString* str = ::app::Uno::ULong::ToString(i);

    if ((desiredDigits >= ::uPtr< ::uString*>(str)->Length()) || (desiredDigits == 0))
    {
        return str;
    }

    ::uString* rounded = ::app::Uno::Double::ToString(::app::Uno::Math__Round_6(NULL, (double)i / (double)::app::Uno::Math__Pow_1(NULL, 10.0f, (float)(::uPtr< ::uString*>(str)->Length() - 1)), desiredDigits - 1));
    ::uString* exponent = ::app::Uno::Int::ToString(str->Length() - 1);
    return ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition(NULL, rounded, ::uGetConstString("E+")), NumericFormatter__Padding(NULL, 2 - ::uPtr< ::uString*>(exponent)->Length())), exponent);
}

::uString* NumericFormatter__FormatFloatGeneral(::uStatic* __this, ::uString* formatString, float f)
{
    if (::uPtr< ::uString*>(formatString)->Length() == 1)
    {
        return ::app::Uno::Float::ToString(f);
    }

    return NumericFormatter__FormatGeneral_1(NULL, formatString, (double)f);
}

::uString* NumericFormatter__FormatGeneral_1(::uStatic* __this, ::uString* formatString, double d)
{
    if (::uPtr< ::uString*>(formatString)->Length() == 1)
    {
        return ::app::Uno::Double::ToString(d);
    }

    int desiredDigits = NumericFormatter__Digits(NULL, formatString);
    ::uString* str = ::app::Uno::Double::ToString(d);

    if ((desiredDigits >= ::uPtr< ::uString*>(str)->Length()) || (desiredDigits == 0))
    {
        return str;
    }

    double significand = double();
    int exponent = int();
    NumericFormatter__CalculateExponential(NULL, ::app::Uno::Math__Abs(NULL, d), &significand, &exponent);
    significand = ::app::Uno::Math__Round_6(NULL, significand, desiredDigits - 1);

    if (exponent > desiredDigits)
    {
        return ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition(NULL, ::app::Uno::Double::ToString(significand), ::uGetConstString("E+")), NumericFormatter__Padding(NULL, 2 - ::uPtr< ::uString*>(::app::Uno::Int::ToString(exponent))->Length())), ::app::Uno::Int::ToString(exponent));
    }

    return ::app::Uno::String__op_Addition(NULL, (d < 0.0) ? ::uGetConstString("-") : ::app::Uno::String__Empty, ::app::Uno::Double::ToString(significand * (double)::app::Uno::Math__Pow_1(NULL, 10.0f, (float)exponent)));
}

::uString* NumericFormatter__FormatNumber(::uStatic* __this, ::uString* formatString, ::uULong i)
{
    int desiredDigits = (::uPtr< ::uString*>(formatString)->Length() > 1) ? NumericFormatter__Digits(NULL, formatString) : NumericFormatter__NumberDecimalDigits;

    if (desiredDigits == 0)
    {
        return NumericFormatter__FormatNumber_3(NULL, i);
    }

    return ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition(NULL, NumericFormatter__FormatNumber_3(NULL, i), ::uGetConstString(".")), NumericFormatter__Padding(NULL, desiredDigits));
}

::uString* NumericFormatter__FormatNumber_1(::uStatic* __this, ::uString* formatString, double d)
{
    int desiredDigits = (::uPtr< ::uString*>(formatString)->Length() > 1) ? NumericFormatter__Digits(NULL, formatString) : NumericFormatter__NumberDecimalDigits;
    double rounded = ::app::Uno::Math__Round_6(NULL, d, desiredDigits);

    if (desiredDigits == 0)
    {
        return NumericFormatter__FormatNumber_2(NULL, rounded);
    }

    ::uString* str = ::app::Uno::Double::ToString(rounded);
    ::uString* residue = (::app::Uno::String::IndexOf_1(::uPtr< ::uString*>(str), NumericFormatter__get_DecimalPoint(NULL), 0) == -1) ? ::app::Uno::String__Empty : ::app::Uno::String::Substring_1(::uPtr< ::uString*>(str), ::app::Uno::String::IndexOf_1(::uPtr< ::uString*>(str), NumericFormatter__get_DecimalPoint(NULL), 0) + 1);
    return ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition(NULL, NumericFormatter__FormatNumber_2(NULL, rounded), NumericFormatter__get_DecimalPoint(NULL)), residue), NumericFormatter__Padding(NULL, desiredDigits - ::uPtr< ::uString*>(residue)->Length()));
}

::uString* NumericFormatter__FormatNumber_2(::uStatic* __this, double d)
{
    if (d < 0.0)
    {
        return ::app::Uno::String__op_Addition(NULL, ::uGetConstString("-"), NumericFormatter__FormatNumber_3(NULL, (::uULong)-d));
    }

    return NumericFormatter__FormatNumber_3(NULL, (::uULong)d);
}

::uString* NumericFormatter__FormatNumber_3(::uStatic* __this, ::uULong i)
{
    ::uString* str = ::app::Uno::ULong::ToString(i);

    if (::uPtr< ::uString*>(str)->Length() <= 3)
    {
        return str;
    }

    int start = ((::uPtr< ::uString*>(str)->Length() % 3) == 0) ? 3 : (::uPtr< ::uString*>(str)->Length() % 3);
    ::app::Uno::Text::StringBuilder* result = ::app::Uno::Text::StringBuilder__New_1(NULL);
    ::uPtr< ::app::Uno::Text::StringBuilder*>(result)->Append_1(::app::Uno::String::Substring(str, 0, start));

    for (int index = start; index < str->Length(); index = index + 3)
    {
        ::uPtr< ::app::Uno::Text::StringBuilder*>(result)->Append_1(::uGetConstString(","));
        result->Append_1(::app::Uno::String::Substring(::uPtr< ::uString*>(str), index, 3));
    }

    return result->ToString();
}

::uString* NumericFormatter__FormatCustom(::uStatic* __this, ::uString* formatString, ::uULong value)
{
    int decimalPoint = ::app::Uno::String::IndexOf(::uPtr< ::uString*>(formatString), '.', 0);

    if (decimalPoint == -1)
    {
        return NumericFormatter__FormatCustomIntegerPart(NULL, formatString, value);
    }

    bool hasDecimalPoint = bool();
    ::uString* integerPart = NumericFormatter__FormatCustomIntegerPart(NULL, ::app::Uno::String::Substring(formatString, 0, decimalPoint), value);
    ::uString* doublePart = NumericFormatter__FormatCustomDoublePart(NULL, ::app::Uno::String::Substring_1(formatString, decimalPoint + 1), 0.0, &hasDecimalPoint);
    return ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition(NULL, integerPart, hasDecimalPoint ? ::uGetConstString(".") : ::app::Uno::String__Empty), doublePart);
}

::uString* NumericFormatter__FormatCustom_1(::uStatic* __this, ::uString* formatString, double value)
{
    double absoluteValue = ::app::Uno::Math__Abs(NULL, value);
    int decimalPoint = ::app::Uno::String::IndexOf(::uPtr< ::uString*>(formatString), '.', 0);

    if (decimalPoint == -1)
    {
        return NumericFormatter__FormatCustomIntegerPart(NULL, formatString, (::uULong)absoluteValue);
    }

    bool hasDecimalPoint = bool();
    ::uString* integerPart = NumericFormatter__FormatCustomIntegerPart(NULL, ::app::Uno::String::Substring(formatString, 0, decimalPoint), (::uULong)absoluteValue);
    ::uString* doublePart = NumericFormatter__FormatCustomDoublePart(NULL, ::app::Uno::String::Substring_1(formatString, decimalPoint + 1), absoluteValue, &hasDecimalPoint);
    return ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition(NULL, (value < 0.0) ? ::uGetConstString("-") : ::app::Uno::String__Empty, integerPart), hasDecimalPoint ? ::uGetConstString(".") : ::app::Uno::String__Empty), doublePart);
}

::uString* NumericFormatter__FormatCustomDoublePart(::uStatic* __this, ::uString* doubleFormat, double d, bool* decimalPoint)
{
    int precision = 0;
    bool hasZero = false;
    ::uArray* processedFormat = ::app::Uno::String::ToCharArray_1(::uPtr< ::uString*>(doubleFormat));

    for (int i = ::uPtr< ::uArray*>(processedFormat)->Length() - 1; i >= 0; i--)
    {
        if (::uPtr< ::uArray*>(processedFormat)->Item< ::uChar>(i) == '0')
        {
            hasZero = true;
        }

        if ((::uPtr< ::uArray*>(processedFormat)->Item< ::uChar>(i) == '0') || (::uPtr< ::uArray*>(processedFormat)->Item< ::uChar>(i) == '#'))
        {
            ::uPtr< ::uArray*>(processedFormat)->Item< ::uChar>(i) = hasZero ? '0' : ::uPtr< ::uArray*>(processedFormat)->Item< ::uChar>(i);
            precision++;
        }
    }

    ::uString* raw = ::app::Uno::Double::ToString(::app::Uno::Math__Round_6(NULL, d, precision));
    int index = ::app::Uno::String::IndexOf_1(::uPtr< ::uString*>(raw), NumericFormatter__get_DecimalPoint(NULL), 0) + 1;
    *decimalPoint = (index != 0) || hasZero;

    if (index == 0)
    {
        index = raw->Length();
    }

    ::app::Uno::Collections::List__char* formatted = ::app::Uno::Collections::List__char__New_2(NULL, processedFormat->Length());

    for (int i = 0; i < processedFormat->Length(); i++)
    {
        switch (::uPtr< ::uArray*>(processedFormat)->Item< ::uChar>(i))
        {
            case '0':
            {
                ::uPtr< ::app::Uno::Collections::List__char*>(formatted)->Add((index >= ::uPtr< ::uString*>(raw)->Length()) ? '0' : ::uPtr< ::uString*>(raw)->Item(index++));
                break;
            }
            case '#':
            {
                if (index < ::uPtr< ::uString*>(raw)->Length())
                {
                    ::uPtr< ::app::Uno::Collections::List__char*>(formatted)->Add(::uPtr< ::uString*>(raw)->Item(index++));
                }

                break;
            }
            case '.':
            {
                break;
            }
            default:
            {
                ::uPtr< ::app::Uno::Collections::List__char*>(formatted)->Add(::uPtr< ::uArray*>(processedFormat)->Item< ::uChar>(i));
                break;
            }
        }
    }

    return ::uNewStringFromArray(::uPtr< ::app::Uno::Collections::List__char*>(formatted)->ToArray());
}

::uString* NumericFormatter__FormatCustomIntegerPart(::uStatic* __this, ::uString* integerFormat, ::uULong value)
{
    ::uString* raw = ::app::Uno::ULong::ToString(value);
    int rawIndex = (value == 0ull) ? -1 : (::uPtr< ::uString*>(raw)->Length() - 1);
    ::uArray* formatted = ::uNewArray(::app::Uno::Char__typeof(), ::uPtr< ::uString*>(integerFormat)->Length());
    int index = integerFormat->Length() - 1;
    int lastNumber = 0;

    for (int i = integerFormat->Length() - 1; i >= 0; i--)
    {
        switch (::uPtr< ::uString*>(integerFormat)->Item(i))
        {
            case '0':
            {
                lastNumber = i;
                ::uPtr< ::uArray*>(formatted)->Item< ::uChar>(index--) = (rawIndex < 0) ? '0' : ::uPtr< ::uString*>(raw)->Item(rawIndex--);
                break;
            }
            case '#':
            {
                lastNumber = i;

                if (rawIndex >= 0)
                {
                    ::uPtr< ::uArray*>(formatted)->Item< ::uChar>(index--) = ::uPtr< ::uString*>(raw)->Item(rawIndex--);
                }

                break;
            }
            default:
            {
                ::uPtr< ::uArray*>(formatted)->Item< ::uChar>(index--) = ::uPtr< ::uString*>(integerFormat)->Item(i);
                break;
            }
        }
    }

    ::uString* formattedString = ::uNewStringFromArray(formatted);

    if (index != -1)
    {
        formattedString = ::app::Uno::String::Substring_1(::uPtr< ::uString*>(formattedString), index + 1);
    }

    if (rawIndex >= 0)
    {
        return ::app::Uno::String::Insert(formattedString, lastNumber, ::app::Uno::String::Substring(raw, 0, rawIndex + 1));
    }

    return formattedString;
}

void NumericFormatter__CalculateExponential(::uStatic* __this, double d, double* significand, int* exponent)
{
    *significand = d;
    *exponent = 0;

    while (*significand < 1.0)
    {
        *exponent = *exponent - 1;
        *significand = *significand * 10.0;
    }

    while (*significand >= 10.0)
    {
        *exponent = *exponent + 1;
        *significand = *significand / 10.0;
    }
}

int NumericFormatter__Digits(::uStatic* __this, ::uString* formatString)
{
    return ::app::Uno::Int__Parse(NULL, ::app::Uno::String::Substring_1(::uPtr< ::uString*>(formatString), 1));
}

bool NumericFormatter__IsLetter(::uStatic* __this, ::uChar symbol)
{
    return (symbol >= 'A') && (symbol <= 'Z');
}

::uString* NumericFormatter__Pad(::uStatic* __this, ::uString* unmodified, ::uString* formatString)
{
    int actualLength = ::uPtr< ::uString*>(unmodified)->Length();
    int desiredLength = (::uPtr< ::uString*>(formatString)->Length() > 1) ? NumericFormatter__Digits(NULL, formatString) : actualLength;

    if (desiredLength <= actualLength)
    {
        return unmodified;
    }

    ::uString* padding = NumericFormatter__Padding(NULL, desiredLength - actualLength);
    return ::app::Uno::String__op_Addition(NULL, padding, unmodified);
}

::uString* NumericFormatter__Padding(::uStatic* __this, int length)
{
    if (length <= 0)
    {
        return ::uGetConstString("");
    }

    ::uArray* padding = ::uNewArray(::app::Uno::Char__typeof(), length);

    for (int i = 0; i < length; i++)
    {
        padding->Item< ::uChar>(i) = '0';
    }

    return ::uNewStringFromArray(padding);
}

int NumericFormatter__GetFormatSpecifier(::uStatic* __this, ::uString* formatString)
{
    ::uArray* array_124;
    ::uChar symbol = ::app::Uno::Char__ToUpper(NULL, ::uPtr< ::uString*>(formatString)->Item(0));

    if ((formatString->Length() == 1) && NumericFormatter__IsLetter(NULL, symbol))
    {
        return NumericFormatter__GetStandartFormat(NULL, symbol);
    }

    try
    {
        int decimals = NumericFormatter__Digits(NULL, formatString);

        if (decimals > 99)
        {
            return 7;
        }

        if (::uPtr< ::uString*>(::app::Uno::String::Trim_1(::uPtr< ::uString*>(formatString), (array_124 = ::uNewArray(::app::Uno::Char__typeof(), 1), ::uPtr< ::uArray*>(array_124)->Item< ::uChar>(0) = '0', array_124)))->Length() == 0)
        {
            return 7;
        }
    }
    catch (const ::uThrowable& __t)
    {
        if (::uIs(__t.Exception, ::app::Uno::Exception__typeof()))
        {
            ::app::Uno::Exception* __exception = (::app::Uno::Exception*)__t.Exception;
            return 7;
        }
        else
        {
            throw __t;
        }
    }

    return NumericFormatter__GetStandartFormat(NULL, symbol);
}

int NumericFormatter__GetStandartFormat(::uStatic* __this, ::uChar symbol)
{
    switch (symbol)
    {
        case 'X':
        {
            return 2;
        }
        case 'D':
        {
            return 0;
        }
        case 'F':
        {
            return 1;
        }
        case 'G':
        {
            return 4;
        }
        case 'N':
        {
            return 6;
        }
        case 'E':
        {
            return 3;
        }
        case 'P':
        {
            return 5;
        }
        default:
        {
            U_THROW(::app::Uno::FormatException__New_3(NULL, ::uGetConstString("Format specifier was invalid")));
        }
    }
}

void NumericFormatter___TypeInit(::uStatic* __this)
{
    NumericFormatter__NumberDecimalDigits = 2;
    NumericFormatter__ExponentialDigits = 6;
}

}}}}}
