// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Text\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Char.h>
#include <app/Uno.Text.StringBuilderElement.h>

namespace app {
namespace Uno {
namespace Text {

StringBuilderElement__uType* StringBuilderElement__typeof()
{
    static StringBuilderElement__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (StringBuilderElement__uType*)::uAllocClassType(sizeof(StringBuilderElement__uType), "Uno.Text.StringBuilderElement", ::uObject__typeof(), 0, 2);
        type->StrongRefOffsets[0] = offsetof(StringBuilderElement, chars);
        type->StrongRefOffsets[1] = offsetof(StringBuilderElement, next);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "chars";
        type->StrongRefNames[1] = "next";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void StringBuilderElement___ObjInit(StringBuilderElement* __this)
{
}

StringBuilderElement* StringBuilderElement__New_1(::uStatic* __this)
{
    StringBuilderElement* inst = (::app::Uno::Text::StringBuilderElement*)::uAllocObject(sizeof(::app::Uno::Text::StringBuilderElement), ::app::Uno::Text::StringBuilderElement__typeof());
    inst->_ObjInit();
    return inst;
}

}}}
