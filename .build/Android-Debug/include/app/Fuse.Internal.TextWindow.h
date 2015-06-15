// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.1.0\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_INTERNAL_TEXT_WINDOW_H__
#define __APP_FUSE_INTERNAL_TEXT_WINDOW_H__

#include <app/Fuse.Elements.Element.h>
#include <app/Fuse.IActualSize.h>
#include <app/Fuse.INodeParent.h>
#include <app/Fuse.IResourceParent.h>
#include <app/Fuse.Triggers.Actions.ICollapse.h>
#include <app/Fuse.Triggers.Actions.IHide.h>
#include <app/Fuse.Triggers.Actions.IShow.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Float4.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Internal { struct LineCache; } } }
namespace app { namespace Fuse { namespace Internal { struct TextSpan; } } }
namespace app { namespace Fuse { namespace Internal { struct WordWrapInfo; } } }
namespace app { namespace Fuse { struct DrawContext; } }
namespace app { namespace Uno { struct Rect; } }

namespace app {
namespace Fuse {
namespace Internal {

struct TextWindow;

struct TextWindow__uType : ::app::Fuse::Elements::Element__uType
{
};

TextWindow__uType* TextWindow__typeof();

::app::Uno::Rect TextWindow__CalcRenderBounds(TextWindow* __this);
void TextWindow__Draw_1(TextWindow* __this, ::app::Fuse::Internal::WordWrapInfo* wrapInfo, ::app::Fuse::Internal::TextSpan* selection, ::app::Uno::Float4 textColor, ::app::Uno::Float4 selectionColor, int maxTextLength, int textAlignment, ::app::Uno::Float2 textBoundsSize, ::app::Uno::Float2 offset, ::app::Fuse::DrawContext* dc);
void TextWindow__OnDraw(TextWindow* __this, ::app::Fuse::DrawContext* dc);
void TextWindow___ObjInit_2(TextWindow* __this, ::uObject* parent, ::app::Fuse::Internal::LineCache* lineCache);
TextWindow* TextWindow__New_1(::uStatic* __this, ::uObject* parent, ::app::Fuse::Internal::LineCache* lineCache);

struct TextWindow : ::app::Fuse::Elements::Element
{
    ::uStrong< ::app::Fuse::Internal::LineCache*> _lineCache;
    ::uStrong< ::app::Fuse::Internal::WordWrapInfo*> _wrapInfo;
    ::uStrong< ::app::Fuse::Internal::TextSpan*> _selection;
    ::app::Uno::Float4 _textColor_1;
    ::app::Uno::Float4 _selectionColor;
    int _maxTextLength;
    int _textAlignment_1;
    ::app::Uno::Float2 _textBoundsSize;
    ::app::Uno::Float2 _offset_1;

    void Draw_1(::app::Fuse::Internal::WordWrapInfo* wrapInfo, ::app::Fuse::Internal::TextSpan* selection, ::app::Uno::Float4 textColor, ::app::Uno::Float4 selectionColor, int maxTextLength, int textAlignment, ::app::Uno::Float2 textBoundsSize, ::app::Uno::Float2 offset, ::app::Fuse::DrawContext* dc);
    void _ObjInit_2(::uObject* parent, ::app::Fuse::Internal::LineCache* lineCache) { TextWindow___ObjInit_2(this, parent, lineCache); }
};

}}}

#include <app/Uno.Int.h>
#include <app/Uno.Rect.h>

namespace app {
namespace Fuse {
namespace Internal {

inline void TextWindow::Draw_1(::app::Fuse::Internal::WordWrapInfo* wrapInfo, ::app::Fuse::Internal::TextSpan* selection, ::app::Uno::Float4 textColor, ::app::Uno::Float4 selectionColor, int maxTextLength, int textAlignment, ::app::Uno::Float2 textBoundsSize, ::app::Uno::Float2 offset, ::app::Fuse::DrawContext* dc) { TextWindow__Draw_1(this, wrapInfo, selection, textColor, selectionColor, maxTextLength, textAlignment, textBoundsSize, offset, dc); }

}}}


#endif
