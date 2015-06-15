// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.1.0\Implementations\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.DrawContext.h>
#include <app/Fuse.Elements.Element.h>
#include <app/Fuse.Elements.Implementations.FallbackTextElement.h>
#include <app/Fuse.Font.h>
#include <app/Fuse.Internal.DefaultTextRenderer.h>
#include <app/Fuse.Internal.ITextRenderer.h>
#include <app/Fuse.Internal.LineCache.h>
#include <app/Fuse.Internal.TextSpan.h>
#include <app/Fuse.Internal.TextWindow.h>
#include <app/Fuse.Internal.WordWrapInfo.h>
#include <app/Uno.Action.h>
#include <app/Uno.BundleFile.h>
#include <app/Uno.Collections.Dictionary__Fuse_Font__Fuse_Internal_DefaultTextRenderer.h>
#include <app/Uno.Content.Fonts.FontFace.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Float4.h>
#include <app/Uno.Int.h>
#include <app/Uno.Math.h>
#include <app/Uno.String.h>

namespace app {
namespace Fuse {
namespace Elements {
namespace Implementations {

::uStaticStrong< ::app::Uno::Collections::Dictionary__Fuse_Font__Fuse_Internal_DefaultTextRenderer*> FallbackTextElement___textRenderers;

FallbackTextElement__uType* FallbackTextElement__typeof()
{
    static FallbackTextElement__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (FallbackTextElement__uType*)::uAllocClassType(sizeof(FallbackTextElement__uType), "Fuse.Elements.Implementations.FallbackTextElement", ::app::Fuse::Elements::TextElement__typeof(), 6, 3);
        type->__fp_OnTextChanged = (void(*)(::app::Fuse::Elements::TextElement*))FallbackTextElement__OnTextChanged;
        type->__fp_OnIsMultilineChanged = (void(*)(::app::Fuse::Elements::TextElement*))FallbackTextElement__OnIsMultilineChanged;
        type->__fp_OnTextWrappingChanged = (void(*)(::app::Fuse::Elements::TextElement*))FallbackTextElement__OnTextWrappingChanged;
        type->__fp_OnTextAlignmentChanged = (void(*)(::app::Fuse::Elements::Element*))FallbackTextElement__OnTextAlignmentChanged;
        type->__fp_OnFontSizeChanged = (void(*)(::app::Fuse::Elements::Element*))FallbackTextElement__OnFontSizeChanged;
        type->__fp_OnFontChanged = (void(*)(::app::Fuse::Elements::Element*))FallbackTextElement__OnFontChanged;
        type->__fp_OnTextColorChanged = (void(*)(::app::Fuse::Elements::Element*))FallbackTextElement__OnTextColorChanged;
        type->__fp_OnLineSpacingChanged = (void(*)(::app::Fuse::Elements::TextElement*))FallbackTextElement__OnLineSpacingChanged;
        type->__fp_GetContentSize = (::app::Uno::Float2(*)(::app::Fuse::Elements::Element*, ::app::Uno::Float2, int))FallbackTextElement__GetContentSize;
        type->__fp_ArrangePaddingBox = (void(*)(::app::Fuse::Elements::Element*, ::app::Uno::Float2))FallbackTextElement__ArrangePaddingBox;
        type->__fp_OnDraw = (void(*)(::app::Fuse::Elements::Element*, ::app::Fuse::DrawContext*))FallbackTextElement__OnDraw;

        type->__interface_0.__fp_WindowToLocal = (::app::Uno::Float2(*)(void*, ::app::Uno::Float2))::app::Fuse::Node__WindowToLocal;
        type->__interface_0.__fp_get_IsRooted = (bool(*)(void*))::app::Fuse::Node__get_IsRooted;
        type->__interface_0.__fp_get_Window = (::uObject*(*)(void*))::app::Fuse::Node__get_Window;
        type->__interface_1.__fp_ApplyStyle = (void(*)(void*, ::uObject*))::app::Fuse::Node__ApplyStyle_1;
        type->__interface_1.__fp_GetResource = (::uObject*(*)(void*, ::uString*, ::uDelegate*))::app::Fuse::Node__GetResource;

        type->Implements[0] = ::app::Fuse::INodeParent__typeof();
        type->Implements[1] = ::app::Fuse::IResourceParent__typeof();
        type->Implements[2] = ::app::Fuse::Triggers::Actions::IShow__typeof();
        type->Implements[3] = ::app::Fuse::Triggers::Actions::IHide__typeof();
        type->Implements[4] = ::app::Fuse::Triggers::Actions::ICollapse__typeof();
        type->Implements[5] = ::app::Fuse::IActualSize__typeof();

        type->InterfaceOffsets[0] = offsetof(FallbackTextElement__uType, __interface_0);
        type->InterfaceOffsets[1] = offsetof(FallbackTextElement__uType, __interface_1);
        type->InterfaceOffsets[2] = offsetof(FallbackTextElement__uType, __interface_2);
        type->InterfaceOffsets[3] = offsetof(FallbackTextElement__uType, __interface_3);
        type->InterfaceOffsets[4] = offsetof(FallbackTextElement__uType, __interface_4);
        type->InterfaceOffsets[5] = offsetof(FallbackTextElement__uType, __interface_5);

        type->StrongRefOffsets[0] = offsetof(FallbackTextElement, _textWindow);
        type->StrongRefOffsets[1] = offsetof(FallbackTextElement, _lineCache);
        type->StrongRefOffsets[2] = offsetof(FallbackTextElement, _wrapInfo);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_textWindow";
        type->StrongRefNames[1] = "_lineCache";
        type->StrongRefNames[2] = "_wrapInfo";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Fuse::Font* FallbackTextElement__GetFontOrThrow(FallbackTextElement* __this)
{
    if (__this->Font() == NULL)
    {
        U_THROW(::app::Uno::Exception__New_1(NULL, ::uGetConstString("Font property was not set. Did you provide a custom style with no font?")));
    }

    return __this->Font();
}

void FallbackTextElement__OnTextChanged(FallbackTextElement* __this)
{
    ::uPtr< ::app::Fuse::Internal::LineCache*>(__this->_lineCache)->Text(__this->Text());
    __this->InvalidateLayout();
    __this->InvalidateVisual_1(11);
    ::app::Fuse::Elements::TextElement__OnTextChanged(__this);
}

void FallbackTextElement__OnIsMultilineChanged(FallbackTextElement* __this)
{
    ::uPtr< ::app::Fuse::Internal::LineCache*>(__this->_lineCache)->IsMultiline(__this->IsMultiline());
    __this->InvalidateLayout();
    __this->InvalidateVisual_1(12);
    ::app::Fuse::Elements::TextElement__OnIsMultilineChanged(__this);
}

void FallbackTextElement__OnTextWrappingChanged(FallbackTextElement* __this)
{
    __this->InvalidateLayout();
    __this->InvalidateVisual_1(12);
}

void FallbackTextElement__OnTextAlignmentChanged(FallbackTextElement* __this)
{
    ::app::Fuse::Elements::Element__OnTextAlignmentChanged(__this);
    __this->InvalidateVisual_1(12);
}

void FallbackTextElement__OnFontSizeChanged(FallbackTextElement* __this)
{
    ::app::Fuse::Elements::Element__OnFontSizeChanged(__this);
    __this->InvalidateLayout();
    __this->InvalidateVisual_1(12);
}

void FallbackTextElement__OnFontChanged(FallbackTextElement* __this)
{
    ::app::Fuse::Elements::Element__OnFontChanged(__this);
    __this->InvalidateLayout();
    __this->InvalidateVisual_1(12);
}

void FallbackTextElement__OnTextColorChanged(FallbackTextElement* __this)
{
    ::app::Fuse::Elements::Element__OnTextColorChanged(__this);
    __this->InvalidateVisual_1(12);
}

void FallbackTextElement__OnLineSpacingChanged(FallbackTextElement* __this)
{
    ::app::Fuse::Elements::TextElement__OnLineSpacingChanged(__this);
    __this->InvalidateVisual_1(12);
}

::app::Uno::Float2 FallbackTextElement__GetContentSize(FallbackTextElement* __this, ::app::Uno::Float2 fillSize, int fillSet)
{
    if (__this->Font() == NULL)
    {
        return ::app::Uno::Float2__New_1(NULL, 0.0f);
    }

    float wrapWidth = ::app::Uno::Math__Max_1(NULL, fillSize.X, 0.0f);
    __this->CreateWrapInfo(wrapWidth, (fillSet & 1) == 1);
    ::app::Uno::Float2 r = ::app::Uno::Float2__op_Addition_1(NULL, ::app::Uno::Math__Ceil_2(NULL, __this->GetTextBoundsSize(__this->_wrapInfo)), 1.0f);

    if ((fillSet & 1) == 1)
    {
        r.X = ::app::Uno::Math__Min_1(NULL, r.X, fillSize.X);
    }

    return r;
}

void FallbackTextElement__ArrangePaddingBox(FallbackTextElement* __this, ::app::Uno::Float2 size)
{
    ::app::Uno::Float4 ind_123 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_124 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_125 = ::app::Uno::Float4();
    ::uPtr< ::app::Fuse::Internal::TextWindow*>(__this->_textWindow)->ArrangeMarginBox((ind_123 = __this->Padding(), ::app::Uno::Float2__New_2(NULL, ind_123.X, ind_123.Y)), ::app::Uno::Float2__op_Subtraction(NULL, ::app::Uno::Float2__op_Subtraction(NULL, size, (ind_124 = __this->Padding(), ::app::Uno::Float2__New_2(NULL, ind_124.X, ind_124.Y))), (ind_125 = __this->Padding(), ::app::Uno::Float2__New_2(NULL, ind_125.Z, ind_125.W))), 3);
}

void FallbackTextElement__InvalidateVisual_1(FallbackTextElement* __this, int reason)
{
    ::uPtr< ::app::Fuse::Internal::TextWindow*>(__this->_textWindow)->InvalidateVisual(reason);
    ::app::Fuse::Elements::Element__InvalidateVisual(__this, reason);
}

void FallbackTextElement__OnDraw(FallbackTextElement* __this, ::app::Fuse::DrawContext* dc)
{
    __this->GetFontOrThrow();
    float width = (__this->ActualSize().X - __this->Padding().X) - __this->Padding().Z;
    __this->CreateWrapInfo(width, true);
    ::app::Uno::Float2 textBoundsSize = __this->GetClampedTextBoundsSize(__this->_wrapInfo);

    if (!::app::Uno::String__IsNullOrEmpty(NULL, __this->Text()))
    {
        ::uPtr< ::app::Fuse::Internal::TextWindow*>(__this->_textWindow)->Draw_1(__this->_wrapInfo, NULL, __this->TextColor(), ::app::Uno::Float4__New_1(NULL, 0.0f), ::uPtr< ::uString*>(__this->Text())->Length(), __this->TextAlignment(), textBoundsSize, ::app::Uno::Float2__New_1(NULL, 0.0f), dc);
    }
}

::app::Fuse::Internal::DefaultTextRenderer* FallbackTextElement__GetTextRenderer(::uStatic* __this, ::app::Fuse::Font* f)
{
    ::app::Fuse::Internal::DefaultTextRenderer* tr;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Font__Fuse_Internal_DefaultTextRenderer*>(FallbackTextElement___textRenderers)->TryGetValue(f, &tr))
    {
        tr = ::app::Fuse::Internal::DefaultTextRenderer__New_2(NULL, ::app::Uno::Content::Fonts::FontFace__Load(NULL, ::uPtr< ::app::Fuse::Font*>(f)->BundleFile()));
        ::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Font__Fuse_Internal_DefaultTextRenderer*>(FallbackTextElement___textRenderers)->Add(f, tr);
    }

    return tr;
}

void FallbackTextElement__CreateWrapInfo(FallbackTextElement* __this, float wrapWidth, bool haveWidth)
{
    if (((__this->_wrapInfo != NULL) && (__this->_wrapInfoWidth == wrapWidth)) && (__this->_wrapInfoHaveWidth == haveWidth))
    {
        return;
    }

    __this->_wrapInfoWidth = wrapWidth;
    __this->_wrapInfoHaveWidth = haveWidth;
    ::app::Fuse::Font* font = __this->GetFontOrThrow();
    ::app::Fuse::Internal::DefaultTextRenderer* renderer = FallbackTextElement__GetTextRenderer(NULL, font);
    float fontSize = __this->FontSize();
    __this->_wrapInfo = ::app::Fuse::Internal::WordWrapInfo__New_1(NULL, (::uObject*)renderer, __this->TextWrapping() == 1, haveWidth ? wrapWidth : FLT_INF, fontSize, ::uPtr< ::app::Fuse::Internal::DefaultTextRenderer*>(renderer)->GetLineHeight(fontSize), __this->LineSpacing(), __this->AbsoluteZoom());
}

::app::Uno::Float2 FallbackTextElement__GetTextBoundsSize(FallbackTextElement* __this, ::app::Fuse::Internal::WordWrapInfo* wrapInfo)
{
    return ::uPtr< ::app::Fuse::Internal::LineCache*>(__this->_lineCache)->GetBoundsSize(wrapInfo);
}

::app::Uno::Float2 FallbackTextElement__GetClampedTextBoundsSize(FallbackTextElement* __this, ::app::Fuse::Internal::WordWrapInfo* wrapInfo)
{
    return ::app::Uno::Math__Max_3(NULL, __this->GetTextBoundsSize(wrapInfo), __this->GetWindowSize());
}

::app::Uno::Float2 FallbackTextElement__GetWindowSize(FallbackTextElement* __this)
{
    return ::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__Max_1(NULL, __this->ActualSize().X - (__this->Padding().X + __this->Padding().Z), 0.0f), ::app::Uno::Math__Max_1(NULL, __this->ActualSize().Y - (__this->Padding().Y + __this->Padding().W), 0.0f));
}

void FallbackTextElement___TypeInit_2(::uStatic* __this)
{
    FallbackTextElement___textRenderers = ::app::Uno::Collections::Dictionary__Fuse_Font__Fuse_Internal_DefaultTextRenderer__New_1(NULL);
}

void FallbackTextElement___ObjInit_3(FallbackTextElement* __this)
{
    ::app::Fuse::Elements::TextElement___ObjInit_2(__this);
    __this->_lineCache = ::app::Fuse::Internal::LineCache__New_1(NULL, ::uNewDelegateVirt(::app::Uno::Action__typeof(), __this, offsetof(::app::Fuse::Elements::Implementations::FallbackTextElement__uType, __fp_OnTextChanged)), ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)::app::Fuse::Elements::Element__InvalidateLayout, __this));
    __this->_textWindow = ::app::Fuse::Internal::TextWindow__New_1(NULL, (::uObject*)__this, __this->_lineCache);
}

FallbackTextElement* FallbackTextElement__New_1(::uStatic* __this)
{
    FallbackTextElement* inst = (::app::Fuse::Elements::Implementations::FallbackTextElement*)::uAllocObject(sizeof(::app::Fuse::Elements::Implementations::FallbackTextElement), ::app::Fuse::Elements::Implementations::FallbackTextElement__typeof());
    inst->_ObjInit_3();
    return inst;
}

}}}}
