// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.1.0\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_INTERNAL_TEXT_SPAN_H__
#define __APP_FUSE_INTERNAL_TEXT_SPAN_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Internal { struct TextPosition; } } }

namespace app {
namespace Fuse {
namespace Internal {

struct TextSpan;

struct TextSpan__uType : ::uClassType
{
};

TextSpan__uType* TextSpan__typeof();

bool TextSpan__Intersects(::uStatic* __this, TextSpan* a, TextSpan* b);
TextSpan* TextSpan__Intersection(::uStatic* __this, TextSpan* a, TextSpan* b);
bool TextSpan__Equals(TextSpan* __this, ::uObject* obj);
int TextSpan__GetHashCode(TextSpan* __this);
void TextSpan___ObjInit(TextSpan* __this, ::app::Fuse::Internal::TextPosition* start, ::app::Fuse::Internal::TextPosition* end);
TextSpan* TextSpan__New_1(::uStatic* __this, ::app::Fuse::Internal::TextPosition* start, ::app::Fuse::Internal::TextPosition* end);
bool TextSpan__op_Equality(::uStatic* __this, TextSpan* a, TextSpan* b);
bool TextSpan__op_Inequality(::uStatic* __this, TextSpan* a, TextSpan* b);

struct TextSpan : ::uObject
{
    ::uStrong< ::app::Fuse::Internal::TextPosition*> Start;
    ::uStrong< ::app::Fuse::Internal::TextPosition*> End;

    void _ObjInit(::app::Fuse::Internal::TextPosition* start, ::app::Fuse::Internal::TextPosition* end) { TextSpan___ObjInit(this, start, end); }
};

}}}

#include <app/Uno.Bool.h>
#include <app/Uno.Int.h>

namespace app {
namespace Fuse {
namespace Internal {

}}}


#endif
