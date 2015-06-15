// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Content\Fonts\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Content.Fonts.BitmapFont_CharPair.h>

namespace app {
namespace Uno {
namespace Content {
namespace Fonts {

BitmapFont_CharPair__uType* BitmapFont_CharPair__typeof()
{
    static BitmapFont_CharPair__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (BitmapFont_CharPair__uType*)::uAllocValueType(sizeof(BitmapFont_CharPair__uType), "Uno.Content.Fonts.BitmapFont.CharPair", sizeof(BitmapFont_CharPair));
        type->__fp_GetHashCode_value = (int(*)(void*))BitmapFont_CharPair__GetHashCode;
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

int BitmapFont_CharPair__GetHashCode(BitmapFont_CharPair* __this)
{
    int hash = 27;
    hash = (hash * 13) + (int)__this->Left;
    hash = (hash * 13) + (int)__this->Right;
    return hash;
}

void BitmapFont_CharPair___ObjInit(BitmapFont_CharPair* __this, ::uChar left, ::uChar right)
{
    __this->Left = left;
    __this->Right = right;
}

BitmapFont_CharPair BitmapFont_CharPair__New_1(::uStatic* __this, ::uChar left, ::uChar right)
{
    BitmapFont_CharPair inst = ::uDefault< BitmapFont_CharPair>();
    inst._ObjInit(left, right);
    return inst;
}

}}}}
