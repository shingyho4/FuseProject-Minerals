// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Text\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.ArgumentOutOfRangeException.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Char.h>
#include <app/Uno.String.h>
#include <app/Uno.Text.StringBuilder.h>
#include <app/Uno.Text.StringBuilderElement.h>

namespace app {
namespace Uno {
namespace Text {

StringBuilder__uType* StringBuilder__typeof()
{
    static StringBuilder__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (StringBuilder__uType*)::uAllocClassType(sizeof(StringBuilder__uType), "Uno.Text.StringBuilder", ::uObject__typeof(), 0, 2);
        type->__fp_ToString = (::uString*(*)(::uObject*))StringBuilder__ToString;

        type->StrongRefOffsets[0] = offsetof(StringBuilder, firstElement);
        type->StrongRefOffsets[1] = offsetof(StringBuilder, lastElement);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "firstElement";
        type->StrongRefNames[1] = "lastElement";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

int StringBuilder__get_MaxCapacity(StringBuilder* __this)
{
    return 2147483647;
}

int StringBuilder__get_Length(StringBuilder* __this)
{
    return __this->_Length;
}

void StringBuilder__set_Length(StringBuilder* __this, int value)
{
    __this->_Length = value;
}

::uString* StringBuilder__ToString(StringBuilder* __this)
{
    if (__this->firstElement == NULL)
    {
        return ::uGetConstString("");
    }

    ::uArray* chars = ::uNewArray(::app::Uno::Char__typeof(), __this->Length());
    ::app::Uno::Text::StringBuilderElement* elem = __this->firstElement;
    int pos = 0;

    while (elem != NULL)
    {
        for (int i = 0; i < ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Text::StringBuilderElement*>(elem)->chars)->Length(); i++)
        {
            ::uPtr< ::uArray*>(chars)->Item< ::uChar>(pos + i) = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Text::StringBuilderElement*>(elem)->chars)->Item< ::uChar>(i);
        }

        pos = pos + ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Text::StringBuilderElement*>(elem)->chars)->Length();
        elem = ::uPtr< ::app::Uno::Text::StringBuilderElement*>(elem)->next;
    }

    return ::uNewStringFromArray(chars);
}

StringBuilder* StringBuilder__Append(StringBuilder* __this, ::uArray* chars)
{
    ::app::Uno::Text::StringBuilderElement* collection_123;

    if ((__this->MaxCapacity() - __this->Length()) < ::uPtr< ::uArray*>(chars)->Length())
    {
        U_THROW(::app::Uno::ArgumentOutOfRangeException__New_6(NULL, ::uGetConstString("")));
    }

    __this->Length(__this->Length() + ::uPtr< ::uArray*>(chars)->Length());
    __this->lastElement = (collection_123 = ::app::Uno::Text::StringBuilderElement__New_1(NULL), ::uPtr< ::app::Uno::Text::StringBuilderElement*>(collection_123)->chars = chars, collection_123);

    if (__this->firstElement == NULL)
    {
        __this->firstElement = __this->lastElement;
    }
    else
    {
        ::app::Uno::Text::StringBuilderElement* elem = __this->firstElement;

        while (::uPtr< ::app::Uno::Text::StringBuilderElement*>(elem)->next != NULL)
        {
            elem = ::uPtr< ::app::Uno::Text::StringBuilderElement*>(elem)->next;
        }

        ::uPtr< ::app::Uno::Text::StringBuilderElement*>(elem)->next = __this->lastElement;
    }

    return __this;
}

StringBuilder* StringBuilder__Append_1(StringBuilder* __this, ::uString* str)
{
    ::uArray* chars = ::uNewArray(::app::Uno::Char__typeof(), ::uPtr< ::uString*>(str)->Length());

    for (int i = 0; i < str->Length(); i++)
    {
        chars->Item< ::uChar>(i) = str->Item(i);
    }

    return __this->Append(chars);
}

void StringBuilder___ObjInit(StringBuilder* __this)
{
}

StringBuilder* StringBuilder__New_1(::uStatic* __this)
{
    StringBuilder* inst = (::app::Uno::Text::StringBuilder*)::uAllocObject(sizeof(::app::Uno::Text::StringBuilder), ::app::Uno::Text::StringBuilder__typeof());
    inst->_ObjInit();
    return inst;
}

}}}
