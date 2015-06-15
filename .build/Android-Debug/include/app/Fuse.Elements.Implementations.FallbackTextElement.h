// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.1.0\Implementations\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ELEMENTS_IMPLEMENTATIONS_FALLBACK_TEXT_ELEMENT_H__
#define __APP_FUSE_ELEMENTS_IMPLEMENTATIONS_FALLBACK_TEXT_ELEMENT_H__

#include <app/Fuse.Elements.TextElement.h>
#include <app/Fuse.IActualSize.h>
#include <app/Fuse.INodeParent.h>
#include <app/Fuse.IResourceParent.h>
#include <app/Fuse.Triggers.Actions.ICollapse.h>
#include <app/Fuse.Triggers.Actions.IHide.h>
#include <app/Fuse.Triggers.Actions.IShow.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Internal { struct DefaultTextRenderer; } } }
namespace app { namespace Fuse { namespace Internal { struct LineCache; } } }
namespace app { namespace Fuse { namespace Internal { struct TextWindow; } } }
namespace app { namespace Fuse { namespace Internal { struct WordWrapInfo; } } }
namespace app { namespace Fuse { struct DrawContext; } }
namespace app { namespace Fuse { struct Font; } }
namespace app { namespace Uno { namespace Collections { struct Dictionary__Fuse_Font__Fuse_Internal_DefaultTextRenderer; } } }
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Fuse {
namespace Elements {
namespace Implementations {

struct FallbackTextElement;

extern ::uStaticStrong< ::app::Uno::Collections::Dictionary__Fuse_Font__Fuse_Internal_DefaultTextRenderer*> FallbackTextElement___textRenderers;

struct FallbackTextElement__uType : ::app::Fuse::Elements::TextElement__uType
{
};

FallbackTextElement__uType* FallbackTextElement__typeof();

::app::Fuse::Font* FallbackTextElement__GetFontOrThrow(FallbackTextElement* __this);
void FallbackTextElement__OnTextChanged(FallbackTextElement* __this);
void FallbackTextElement__OnIsMultilineChanged(FallbackTextElement* __this);
void FallbackTextElement__OnTextWrappingChanged(FallbackTextElement* __this);
void FallbackTextElement__OnTextAlignmentChanged(FallbackTextElement* __this);
void FallbackTextElement__OnFontSizeChanged(FallbackTextElement* __this);
void FallbackTextElement__OnFontChanged(FallbackTextElement* __this);
void FallbackTextElement__OnTextColorChanged(FallbackTextElement* __this);
void FallbackTextElement__OnLineSpacingChanged(FallbackTextElement* __this);
::app::Uno::Float2 FallbackTextElement__GetContentSize(FallbackTextElement* __this, ::app::Uno::Float2 fillSize, int fillSet);
void FallbackTextElement__ArrangePaddingBox(FallbackTextElement* __this, ::app::Uno::Float2 size);
void FallbackTextElement__InvalidateVisual_1(FallbackTextElement* __this, int reason);
void FallbackTextElement__OnDraw(FallbackTextElement* __this, ::app::Fuse::DrawContext* dc);
::app::Fuse::Internal::DefaultTextRenderer* FallbackTextElement__GetTextRenderer(::uStatic* __this, ::app::Fuse::Font* f);
void FallbackTextElement__CreateWrapInfo(FallbackTextElement* __this, float wrapWidth, bool haveWidth);
::app::Uno::Float2 FallbackTextElement__GetTextBoundsSize(FallbackTextElement* __this, ::app::Fuse::Internal::WordWrapInfo* wrapInfo);
::app::Uno::Float2 FallbackTextElement__GetClampedTextBoundsSize(FallbackTextElement* __this, ::app::Fuse::Internal::WordWrapInfo* wrapInfo);
::app::Uno::Float2 FallbackTextElement__GetWindowSize(FallbackTextElement* __this);
void FallbackTextElement___TypeInit_2(::uStatic* __this);
void FallbackTextElement___ObjInit_3(FallbackTextElement* __this);
FallbackTextElement* FallbackTextElement__New_1(::uStatic* __this);

struct FallbackTextElement : ::app::Fuse::Elements::TextElement
{
    ::uStrong< ::app::Fuse::Internal::TextWindow*> _textWindow;
    ::uStrong< ::app::Fuse::Internal::LineCache*> _lineCache;
    ::uStrong< ::app::Fuse::Internal::WordWrapInfo*> _wrapInfo;
    float _wrapInfoWidth;
    bool _wrapInfoHaveWidth;

    ::app::Fuse::Font* GetFontOrThrow() { return FallbackTextElement__GetFontOrThrow(this); }
    void InvalidateVisual_1(int reason) { FallbackTextElement__InvalidateVisual_1(this, reason); }
    void CreateWrapInfo(float wrapWidth, bool haveWidth) { FallbackTextElement__CreateWrapInfo(this, wrapWidth, haveWidth); }
    ::app::Uno::Float2 GetTextBoundsSize(::app::Fuse::Internal::WordWrapInfo* wrapInfo);
    ::app::Uno::Float2 GetClampedTextBoundsSize(::app::Fuse::Internal::WordWrapInfo* wrapInfo);
    ::app::Uno::Float2 GetWindowSize();
    void _ObjInit_3() { FallbackTextElement___ObjInit_3(this); }
};

}}}}

#include <app/Uno.Bool.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float2.h>

namespace app {
namespace Fuse {
namespace Elements {
namespace Implementations {

inline ::app::Uno::Float2 FallbackTextElement::GetTextBoundsSize(::app::Fuse::Internal::WordWrapInfo* wrapInfo) { return FallbackTextElement__GetTextBoundsSize(this, wrapInfo); }
inline ::app::Uno::Float2 FallbackTextElement::GetClampedTextBoundsSize(::app::Fuse::Internal::WordWrapInfo* wrapInfo) { return FallbackTextElement__GetClampedTextBoundsSize(this, wrapInfo); }
inline ::app::Uno::Float2 FallbackTextElement::GetWindowSize() { return FallbackTextElement__GetWindowSize(this); }

}}}}


#endif
