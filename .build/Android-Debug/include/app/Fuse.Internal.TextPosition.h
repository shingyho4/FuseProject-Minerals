// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.1.0\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_INTERNAL_TEXT_POSITION_H__
#define __APP_FUSE_INTERNAL_TEXT_POSITION_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>

namespace app {
namespace Fuse {
namespace Internal {

struct TextPosition;

extern ::uStaticStrong< TextPosition*> TextPosition__Default;

struct TextPosition__uType : ::uClassType
{
};

TextPosition__uType* TextPosition__typeof();

TextPosition* TextPosition__Min(::uStatic* __this, TextPosition* a, TextPosition* b);
TextPosition* TextPosition__Max(::uStatic* __this, TextPosition* a, TextPosition* b);
bool TextPosition__Equals(TextPosition* __this, ::uObject* obj);
int TextPosition__GetHashCode(TextPosition* __this);
void TextPosition___TypeInit(::uStatic* __this);
void TextPosition___ObjInit(TextPosition* __this, int l, int c);
TextPosition* TextPosition__New_1(::uStatic* __this, int l, int c);
bool TextPosition__op_Equality(::uStatic* __this, TextPosition* a, TextPosition* b);
bool TextPosition__op_LessThanOrEqual(::uStatic* __this, TextPosition* a, TextPosition* b);
bool TextPosition__op_GreaterThanOrEqual(::uStatic* __this, TextPosition* a, TextPosition* b);

struct TextPosition : ::uObject
{
    int Line;
    int Char;

    void _ObjInit(int l, int c) { TextPosition___ObjInit(this, l, c); }
};

}}}

#include <app/Uno.Bool.h>
#include <app/Uno.Int.h>

namespace app {
namespace Fuse {
namespace Internal {

}}}


#endif
