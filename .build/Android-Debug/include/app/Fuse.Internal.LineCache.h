// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.1.0\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_INTERNAL_LINE_CACHE_H__
#define __APP_FUSE_INTERNAL_LINE_CACHE_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Internal { struct TextPosition; } } }
namespace app { namespace Fuse { namespace Internal { struct WordWrapInfo; } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Internal_LineCacheLine; } } }
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Fuse {
namespace Internal {

struct LineCache;

struct LineCache__uType : ::uClassType
{
};

LineCache__uType* LineCache__typeof();

::app::Uno::Collections::List__Fuse_Internal_LineCacheLine* LineCache__get_Lines(LineCache* __this);
::uString* LineCache__get_Text(LineCache* __this);
void LineCache__set_Text(LineCache* __this, ::uString* value);
bool LineCache__get_IsMultiline(LineCache* __this);
void LineCache__set_IsMultiline(LineCache* __this, bool value);
::uObject* LineCache__get_Transform(LineCache* __this);
void LineCache__set_Transform(LineCache* __this, ::uObject* value);
::app::Uno::Float2 LineCache__GetBoundsSize(LineCache* __this, ::app::Fuse::Internal::WordWrapInfo* wrapInfo);
::app::Uno::Float2 LineCache__TextPosToBounds(LineCache* __this, ::app::Fuse::Internal::WordWrapInfo* wrapInfo, int textAlignment, float boundsWidth, ::app::Fuse::Internal::TextPosition* p);
::app::Fuse::Internal::TextPosition* LineCache__GetLastTextPos(LineCache* __this);
void LineCache__InvalidateVisual(LineCache* __this);
void LineCache__InvalidateText(LineCache* __this);
void LineCache__InvalidateLayout(LineCache* __this);
::app::Uno::Collections::List__Fuse_Internal_LineCacheLine* LineCache__DecomposeLines(LineCache* __this, ::uString* text);
void LineCache___ObjInit(LineCache* __this, ::uDelegate* onTextChanged, ::uDelegate* invalideLayout);
LineCache* LineCache__New_1(::uStatic* __this, ::uDelegate* onTextChanged, ::uDelegate* invalideLayout);

struct LineCache : ::uObject
{
    ::uStrong< ::app::Uno::Collections::List__Fuse_Internal_LineCacheLine*> _lines;
    ::uStrong< ::uString*> _text;
    bool _isTextValid;
    bool _isMultiline;
    ::uStrong< ::uObject*> _transform;
    ::uStrong< ::uDelegate*> _onTextChanged;
    ::uStrong< ::uDelegate*> _invalideLayout;

    ::app::Uno::Float2 GetBoundsSize(::app::Fuse::Internal::WordWrapInfo* wrapInfo);
    ::app::Uno::Float2 TextPosToBounds(::app::Fuse::Internal::WordWrapInfo* wrapInfo, int textAlignment, float boundsWidth, ::app::Fuse::Internal::TextPosition* p);
    ::app::Fuse::Internal::TextPosition* GetLastTextPos() { return LineCache__GetLastTextPos(this); }
    void InvalidateVisual() { LineCache__InvalidateVisual(this); }
    void InvalidateText() { LineCache__InvalidateText(this); }
    void InvalidateLayout() { LineCache__InvalidateLayout(this); }
    ::app::Uno::Collections::List__Fuse_Internal_LineCacheLine* DecomposeLines(::uString* text) { return LineCache__DecomposeLines(this, text); }
    void _ObjInit(::uDelegate* onTextChanged, ::uDelegate* invalideLayout) { LineCache___ObjInit(this, onTextChanged, invalideLayout); }
    ::app::Uno::Collections::List__Fuse_Internal_LineCacheLine* Lines() { return LineCache__get_Lines(this); }
    ::uString* Text() { return LineCache__get_Text(this); }
    void Text(::uString* value) { LineCache__set_Text(this, value); }
    bool IsMultiline() { return LineCache__get_IsMultiline(this); }
    void IsMultiline(bool value) { LineCache__set_IsMultiline(this, value); }
    ::uObject* Transform() { return LineCache__get_Transform(this); }
    void Transform(::uObject* value) { LineCache__set_Transform(this, value); }
};

}}}

#include <app/Uno.Bool.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float2.h>

namespace app {
namespace Fuse {
namespace Internal {

inline ::app::Uno::Float2 LineCache::GetBoundsSize(::app::Fuse::Internal::WordWrapInfo* wrapInfo) { return LineCache__GetBoundsSize(this, wrapInfo); }
inline ::app::Uno::Float2 LineCache::TextPosToBounds(::app::Fuse::Internal::WordWrapInfo* wrapInfo, int textAlignment, float boundsWidth, ::app::Fuse::Internal::TextPosition* p) { return LineCache__TextPosToBounds(this, wrapInfo, textAlignment, boundsWidth, p); }

}}}


#endif
