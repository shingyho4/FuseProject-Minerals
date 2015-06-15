// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.1.0\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Internal.TextPosition.h>

namespace app {
namespace Fuse {
namespace Internal {

::uStaticStrong< TextPosition*> TextPosition__Default;

TextPosition__uType* TextPosition__typeof()
{
    static TextPosition__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (TextPosition__uType*)::uAllocClassType(sizeof(TextPosition__uType), "Fuse.Internal.TextPosition", ::uObject__typeof());
        type->__fp_Equals = (bool(*)(::uObject*, ::uObject*))TextPosition__Equals;
        type->__fp_GetHashCode = (int(*)(::uObject*))TextPosition__GetHashCode;
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

TextPosition* TextPosition__Min(::uStatic* __this, TextPosition* a, TextPosition* b)
{
    return TextPosition__op_LessThanOrEqual(NULL, a, b) ? a : b;
}

TextPosition* TextPosition__Max(::uStatic* __this, TextPosition* a, TextPosition* b)
{
    return TextPosition__op_GreaterThanOrEqual(NULL, a, b) ? a : b;
}

bool TextPosition__Equals(TextPosition* __this, ::uObject* obj)
{
    if (!::uIs(obj, TextPosition__typeof()))
    {
        return false;
    }

    TextPosition* other = ::uCast< TextPosition*>(obj, TextPosition__typeof());
    return (__this->Line == ::uPtr< ::app::Fuse::Internal::TextPosition*>(other)->Line) && (__this->Char == ::uPtr< ::app::Fuse::Internal::TextPosition*>(other)->Char);
}

int TextPosition__GetHashCode(TextPosition* __this)
{
    return __this->Line ^ __this->Char;
}

void TextPosition___TypeInit(::uStatic* __this)
{
    TextPosition__Default = TextPosition__New_1(NULL, 0, 0);
}

void TextPosition___ObjInit(TextPosition* __this, int l, int c)
{
    __this->Line = l;
    __this->Char = c;
}

TextPosition* TextPosition__New_1(::uStatic* __this, int l, int c)
{
    TextPosition* inst = (::app::Fuse::Internal::TextPosition*)::uAllocObject(sizeof(::app::Fuse::Internal::TextPosition), ::app::Fuse::Internal::TextPosition__typeof());
    inst->_ObjInit(l, c);
    return inst;
}

bool TextPosition__op_Equality(::uStatic* __this, TextPosition* a, TextPosition* b)
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

    return ::uPtr< ::app::Fuse::Internal::TextPosition*>(a)->Equals((::uObject*)b);
}

bool TextPosition__op_LessThanOrEqual(::uStatic* __this, TextPosition* a, TextPosition* b)
{
    if (::uPtr< ::app::Fuse::Internal::TextPosition*>(a)->Line < ::uPtr< ::app::Fuse::Internal::TextPosition*>(b)->Line)
    {
        return true;
    }

    if (::uPtr< ::app::Fuse::Internal::TextPosition*>(a)->Line > ::uPtr< ::app::Fuse::Internal::TextPosition*>(b)->Line)
    {
        return false;
    }

    return ::uPtr< ::app::Fuse::Internal::TextPosition*>(a)->Char <= ::uPtr< ::app::Fuse::Internal::TextPosition*>(b)->Char;
}

bool TextPosition__op_GreaterThanOrEqual(::uStatic* __this, TextPosition* a, TextPosition* b)
{
    if (::uPtr< ::app::Fuse::Internal::TextPosition*>(a)->Line > ::uPtr< ::app::Fuse::Internal::TextPosition*>(b)->Line)
    {
        return true;
    }

    if (::uPtr< ::app::Fuse::Internal::TextPosition*>(a)->Line < ::uPtr< ::app::Fuse::Internal::TextPosition*>(b)->Line)
    {
        return false;
    }

    return ::uPtr< ::app::Fuse::Internal::TextPosition*>(a)->Char >= ::uPtr< ::app::Fuse::Internal::TextPosition*>(b)->Char;
}

}}}
