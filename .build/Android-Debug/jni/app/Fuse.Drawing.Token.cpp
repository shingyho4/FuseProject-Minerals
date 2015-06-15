// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Paths\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Drawing.Token.h>

namespace app {
namespace Fuse {
namespace Drawing {

Token__uType* Token__typeof()
{
    static Token__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Token__uType*)::uAllocClassType(sizeof(Token__uType), "Fuse.Drawing.Token", ::uObject__typeof(), 0, 1);
        type->StrongRefOffsets[0] = offsetof(Token, Next);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "Next";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void Token___ObjInit(Token* __this, int first, bool hasAction)
{
    __this->First = first;
    __this->HasAction = hasAction;
}

Token* Token__New_1(::uStatic* __this, int first, bool hasAction)
{
    Token* inst = (::app::Fuse::Drawing::Token*)::uAllocObject(sizeof(::app::Fuse::Drawing::Token), ::app::Fuse::Drawing::Token__typeof());
    inst->_ObjInit(first, hasAction);
    return inst;
}

}}}
