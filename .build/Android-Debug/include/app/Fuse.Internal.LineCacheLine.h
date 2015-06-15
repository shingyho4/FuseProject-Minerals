// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.1.0\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_INTERNAL_LINE_CACHE_LINE_H__
#define __APP_FUSE_INTERNAL_LINE_CACHE_LINE_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Internal { struct WordWrapInfo; } } }
namespace app { namespace Fuse { namespace Internal { struct WrappedLine; } } }
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Fuse {
namespace Internal {

struct LineCacheLine;

struct LineCacheLine__uType : ::uClassType
{
};

LineCacheLine__uType* LineCacheLine__typeof();

::uString* LineCacheLine__get_Text(LineCacheLine* __this);
void LineCacheLine__set_Text(LineCacheLine* __this, ::uString* value);
::uObject* LineCacheLine__get_Transform(LineCacheLine* __this);
void LineCacheLine__set_Transform(LineCacheLine* __this, ::uObject* value);
::uString* LineCacheLine__get_VisualText(LineCacheLine* __this);
::uArray* LineCacheLine__GetWrappedLines(LineCacheLine* __this, ::app::Fuse::Internal::WordWrapInfo* wrapInfo);
::app::Uno::Float2 LineCacheLine__PosToBounds(LineCacheLine* __this, ::app::Fuse::Internal::WordWrapInfo* wrapInfo, int textAlignment, float boundsWidth, int p);
float LineCacheLine__GetTotalHeight(LineCacheLine* __this, ::app::Fuse::Internal::WordWrapInfo* wrapInfo);
::app::Fuse::Internal::WrappedLine* LineCacheLine__PosToWrappedLine(LineCacheLine* __this, ::app::Fuse::Internal::WordWrapInfo* wrapInfo, int p);
void LineCacheLine__Invalidate(LineCacheLine* __this);
void LineCacheLine___ObjInit(LineCacheLine* __this, ::uString* text, ::uObject* transform);
LineCacheLine* LineCacheLine__New_1(::uStatic* __this, ::uString* text, ::uObject* transform);

struct LineCacheLine : ::uObject
{
    ::uStrong< ::uString*> _text;
    ::uStrong< ::uObject*> _transform;
    ::uStrong< ::uArray*> _wrappedLinesCache;
    ::uStrong< ::app::Fuse::Internal::WordWrapInfo*> _wordWrapInfoCache;

    ::uArray* GetWrappedLines(::app::Fuse::Internal::WordWrapInfo* wrapInfo) { return LineCacheLine__GetWrappedLines(this, wrapInfo); }
    ::app::Uno::Float2 PosToBounds(::app::Fuse::Internal::WordWrapInfo* wrapInfo, int textAlignment, float boundsWidth, int p);
    float GetTotalHeight(::app::Fuse::Internal::WordWrapInfo* wrapInfo) { return LineCacheLine__GetTotalHeight(this, wrapInfo); }
    ::app::Fuse::Internal::WrappedLine* PosToWrappedLine(::app::Fuse::Internal::WordWrapInfo* wrapInfo, int p) { return LineCacheLine__PosToWrappedLine(this, wrapInfo, p); }
    void Invalidate() { LineCacheLine__Invalidate(this); }
    void _ObjInit(::uString* text, ::uObject* transform) { LineCacheLine___ObjInit(this, text, transform); }
    ::uString* Text() { return LineCacheLine__get_Text(this); }
    void Text(::uString* value) { LineCacheLine__set_Text(this, value); }
    ::uObject* Transform() { return LineCacheLine__get_Transform(this); }
    void Transform(::uObject* value) { LineCacheLine__set_Transform(this, value); }
    ::uString* VisualText() { return LineCacheLine__get_VisualText(this); }
};

}}}

#include <app/Uno.Float.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Int.h>

namespace app {
namespace Fuse {
namespace Internal {

inline ::app::Uno::Float2 LineCacheLine::PosToBounds(::app::Fuse::Internal::WordWrapInfo* wrapInfo, int textAlignment, float boundsWidth, int p) { return LineCacheLine__PosToBounds(this, wrapInfo, textAlignment, boundsWidth, p); }

}}}


#endif
