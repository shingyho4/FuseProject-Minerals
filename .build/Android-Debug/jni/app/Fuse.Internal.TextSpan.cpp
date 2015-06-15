// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.1.0\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Internal.TextPosition.h>
#include <app/Fuse.Internal.TextSpan.h>

namespace app {
namespace Fuse {
namespace Internal {

TextSpan__uType* TextSpan__typeof()
{
    static TextSpan__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (TextSpan__uType*)::uAllocClassType(sizeof(TextSpan__uType), "Fuse.Internal.TextSpan", ::uObject__typeof(), 0, 2);
        type->__fp_Equals = (bool(*)(::uObject*, ::uObject*))TextSpan__Equals;
        type->__fp_GetHashCode = (int(*)(::uObject*))TextSpan__GetHashCode;

        type->StrongRefOffsets[0] = offsetof(TextSpan, Start);
        type->StrongRefOffsets[1] = offsetof(TextSpan, End);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "Start";
        type->StrongRefNames[1] = "End";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

bool TextSpan__Intersects(::uStatic* __this, TextSpan* a, TextSpan* b)
{
    return !(::app::Fuse::Internal::TextPosition__op_LessThanOrEqual(NULL, ::uPtr< ::app::Fuse::Internal::TextSpan*>(a)->End, ::uPtr< ::app::Fuse::Internal::TextSpan*>(b)->Start) || ::app::Fuse::Internal::TextPosition__op_GreaterThanOrEqual(NULL, ::uPtr< ::app::Fuse::Internal::TextSpan*>(a)->Start, ::uPtr< ::app::Fuse::Internal::TextSpan*>(b)->End));
}

TextSpan* TextSpan__Intersection(::uStatic* __this, TextSpan* a, TextSpan* b)
{
    return TextSpan__Intersects(NULL, a, b) ? TextSpan__New_1(NULL, ::app::Fuse::Internal::TextPosition__Max(NULL, ::uPtr< ::app::Fuse::Internal::TextSpan*>(a)->Start, ::uPtr< ::app::Fuse::Internal::TextSpan*>(b)->Start), ::app::Fuse::Internal::TextPosition__Min(NULL, ::uPtr< ::app::Fuse::Internal::TextSpan*>(a)->End, ::uPtr< ::app::Fuse::Internal::TextSpan*>(b)->End)) : NULL;
}

bool TextSpan__Equals(TextSpan* __this, ::uObject* obj)
{
    if (!::uIs(obj, TextSpan__typeof()))
    {
        return false;
    }

    TextSpan* other = ::uCast< TextSpan*>(obj, TextSpan__typeof());
    return ::app::Fuse::Internal::TextPosition__op_Equality(NULL, __this->Start, ::uPtr< ::app::Fuse::Internal::TextSpan*>(other)->Start) && ::app::Fuse::Internal::TextPosition__op_Equality(NULL, __this->End, ::uPtr< ::app::Fuse::Internal::TextSpan*>(other)->End);
}

int TextSpan__GetHashCode(TextSpan* __this)
{
    return ::uPtr< ::app::Fuse::Internal::TextPosition*>(__this->Start)->GetHashCode() ^ ::uPtr< ::app::Fuse::Internal::TextPosition*>(__this->End)->GetHashCode();
}

void TextSpan___ObjInit(TextSpan* __this, ::app::Fuse::Internal::TextPosition* start, ::app::Fuse::Internal::TextPosition* end)
{
    bool isValid = ::app::Fuse::Internal::TextPosition__op_LessThanOrEqual(NULL, start, end);
    __this->Start = isValid ? start : end;
    __this->End = isValid ? end : start;
}

TextSpan* TextSpan__New_1(::uStatic* __this, ::app::Fuse::Internal::TextPosition* start, ::app::Fuse::Internal::TextPosition* end)
{
    TextSpan* inst = (::app::Fuse::Internal::TextSpan*)::uAllocObject(sizeof(::app::Fuse::Internal::TextSpan), ::app::Fuse::Internal::TextSpan__typeof());
    inst->_ObjInit(start, end);
    return inst;
}

bool TextSpan__op_Equality(::uStatic* __this, TextSpan* a, TextSpan* b)
{
    bool aNull = ::app::Uno::Object__ReferenceEquals(NULL, (::uObject*)a, NULL);
    bool bNull = ::app::Uno::Object__ReferenceEquals(NULL, (::uObject*)b, NULL);

    if (aNull && bNull)
    {
        return true;
    }

    if ((aNull && !bNull) || (!aNull && bNull))
    {
        return false;
    }

    return ::uPtr< ::app::Fuse::Internal::TextSpan*>(a)->Equals((::uObject*)b);
}

bool TextSpan__op_Inequality(::uStatic* __this, TextSpan* a, TextSpan* b)
{
    return !TextSpan__op_Equality(NULL, a, b);
}

}}}
