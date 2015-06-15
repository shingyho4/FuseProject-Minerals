// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Runtime\Implementation\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_RUNTIME_IMPLEMENTATION_INTERNAL_FORMAT_STRING_ITEM_H__
#define __APP_UNO_RUNTIME_IMPLEMENTATION_INTERNAL_FORMAT_STRING_ITEM_H__

#include <app/Uno.Runtime.Implementation.Internal.FormatStringToken.h>
#include <Uno/Uno.h>

namespace app {
namespace Uno {
namespace Runtime {
namespace Implementation {
namespace Internal {

struct FormatStringItem;

struct FormatStringItem__uType : ::app::Uno::Runtime::Implementation::Internal::FormatStringToken__uType
{
};

FormatStringItem__uType* FormatStringItem__typeof();

int FormatStringItem__get_Number(FormatStringItem* __this);
::uString* FormatStringItem__get_FormatString(FormatStringItem* __this);
bool FormatStringItem__Equals(FormatStringItem* __this, ::uObject* obj);
int FormatStringItem__GetHashCode(FormatStringItem* __this);
::uString* FormatStringItem__ToString_1(FormatStringItem* __this, ::uArray* objs);
void FormatStringItem___ObjInit_1(FormatStringItem* __this, ::uString* lexeme);
FormatStringItem* FormatStringItem__New_1(::uStatic* __this, ::uString* lexeme);

struct FormatStringItem : ::app::Uno::Runtime::Implementation::Internal::FormatStringToken
{
    void _ObjInit_1(::uString* lexeme) { FormatStringItem___ObjInit_1(this, lexeme); }
    int Number() { return FormatStringItem__get_Number(this); }
    ::uString* FormatString() { return FormatStringItem__get_FormatString(this); }
};

}}}}}

#include <app/Uno.Bool.h>
#include <app/Uno.Int.h>

namespace app {
namespace Uno {
namespace Runtime {
namespace Implementation {
namespace Internal {

}}}}}


#endif
