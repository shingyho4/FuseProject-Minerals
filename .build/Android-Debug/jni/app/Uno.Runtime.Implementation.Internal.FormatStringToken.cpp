// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Runtime\Implementation\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Runtime.Implementation.Internal.FormatStringToken.h>
#include <app/Uno.String.h>

namespace app {
namespace Uno {
namespace Runtime {
namespace Implementation {
namespace Internal {

FormatStringToken__uType* FormatStringToken__typeof()
{
    static FormatStringToken__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (FormatStringToken__uType*)::uAllocClassType(sizeof(FormatStringToken__uType), "Uno.Runtime.Implementation.Internal.FormatStringToken", ::uObject__typeof(), 0, 1);
        type->StrongRefOffsets[0] = offsetof(FormatStringToken, _Lexeme);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_Lexeme";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::uString* FormatStringToken__get_Lexeme(FormatStringToken* __this)
{
    return __this->_Lexeme;
}

void FormatStringToken__set_Lexeme(FormatStringToken* __this, ::uString* value)
{
    __this->_Lexeme = value;
}

void FormatStringToken___ObjInit(FormatStringToken* __this, ::uString* lexeme)
{
    __this->Lexeme(lexeme);
}

}}}}}
