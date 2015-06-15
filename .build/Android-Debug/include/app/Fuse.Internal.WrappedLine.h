// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.1.0\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_INTERNAL_WRAPPED_LINE_H__
#define __APP_FUSE_INTERNAL_WRAPPED_LINE_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Internal { struct WordWrapInfo; } } }

namespace app {
namespace Fuse {
namespace Internal {

struct WrappedLine;

struct WrappedLine__uType : ::uClassType
{
};

WrappedLine__uType* WrappedLine__typeof();

int WrappedLine__get_LineTextEndOffset(WrappedLine* __this);
float WrappedLine__GetXOffset(WrappedLine* __this, int textAlignment, float boundsWidth, float absoluteZoom);
float WrappedLine__PosToBounds(WrappedLine* __this, ::app::Fuse::Internal::WordWrapInfo* wrapInfo, int p);
void WrappedLine___ObjInit(WrappedLine* __this, ::uString* text, int lineTextStartOffset, float yOffset, float lineWidth);
WrappedLine* WrappedLine__New_1(::uStatic* __this, ::uString* text, int lineTextStartOffset, float yOffset, float lineWidth);

struct WrappedLine : ::uObject
{
    ::uStrong< ::uString*> Text;
    int LineTextStartOffset;
    float YOffset;
    float LineWidth;

    float GetXOffset(int textAlignment, float boundsWidth, float absoluteZoom) { return WrappedLine__GetXOffset(this, textAlignment, boundsWidth, absoluteZoom); }
    float PosToBounds(::app::Fuse::Internal::WordWrapInfo* wrapInfo, int p) { return WrappedLine__PosToBounds(this, wrapInfo, p); }
    void _ObjInit(::uString* text, int lineTextStartOffset, float yOffset, float lineWidth) { WrappedLine___ObjInit(this, text, lineTextStartOffset, yOffset, lineWidth); }
    int LineTextEndOffset() { return WrappedLine__get_LineTextEndOffset(this); }
};

}}}

#include <app/Uno.Float.h>
#include <app/Uno.Int.h>

namespace app {
namespace Fuse {
namespace Internal {

}}}


#endif
