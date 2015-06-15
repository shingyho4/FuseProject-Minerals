// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.1.0\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.DrawContext.h>
#include <app/Fuse.Elements.Internal.ElementDraw.h>
#include <app/Fuse.Internal.ITextRenderer.h>
#include <app/Fuse.Internal.LineCache.h>
#include <app/Fuse.Internal.LineCacheLine.h>
#include <app/Fuse.Internal.TextPosition.h>
#include <app/Fuse.Internal.TextSpan.h>
#include <app/Fuse.Internal.TextWindow.h>
#include <app/Fuse.Internal.WordWrapInfo.h>
#include <app/Fuse.Internal.WrappedLine.h>
#include <app/Fuse.Node.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Collections.List__Fuse_Internal_LineCacheLine.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float4x4.h>
#include <app/Uno.Math.h>
#include <app/Uno.String.h>

namespace app {
namespace Fuse {
namespace Internal {

TextWindow__uType* TextWindow__typeof()
{
    static TextWindow__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (TextWindow__uType*)::uAllocClassType(sizeof(TextWindow__uType), "Fuse.Internal.TextWindow", ::app::Fuse::Elements::Element__typeof(), 6, 3);
        type->__fp_CalcRenderBounds = (::app::Uno::Rect(*)(::app::Fuse::Elements::Element*))TextWindow__CalcRenderBounds;
        type->__fp_OnDraw = (void(*)(::app::Fuse::Elements::Element*, ::app::Fuse::DrawContext*))TextWindow__OnDraw;

        type->Implements[0] = ::app::Fuse::INodeParent__typeof();
        type->Implements[1] = ::app::Fuse::IResourceParent__typeof();
        type->Implements[2] = ::app::Fuse::Triggers::Actions::IShow__typeof();
        type->Implements[3] = ::app::Fuse::Triggers::Actions::IHide__typeof();
        type->Implements[4] = ::app::Fuse::Triggers::Actions::ICollapse__typeof();
        type->Implements[5] = ::app::Fuse::IActualSize__typeof();

        type->InterfaceOffsets[0] = offsetof(TextWindow__uType, __interface_0);
        type->InterfaceOffsets[1] = offsetof(TextWindow__uType, __interface_1);
        type->InterfaceOffsets[2] = offsetof(TextWindow__uType, __interface_2);
        type->InterfaceOffsets[3] = offsetof(TextWindow__uType, __interface_3);
        type->InterfaceOffsets[4] = offsetof(TextWindow__uType, __interface_4);
        type->InterfaceOffsets[5] = offsetof(TextWindow__uType, __interface_5);

        type->StrongRefOffsets[0] = offsetof(TextWindow, _lineCache);
        type->StrongRefOffsets[1] = offsetof(TextWindow, _wrapInfo);
        type->StrongRefOffsets[2] = offsetof(TextWindow, _selection);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_lineCache";
        type->StrongRefNames[1] = "_wrapInfo";
        type->StrongRefNames[2] = "_selection";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Uno::Rect TextWindow__CalcRenderBounds(TextWindow* __this)
{
    return ::app::Uno::Rect__New_2(NULL, ::app::Uno::Float2__New_1(NULL, 0.0f), __this->_textBoundsSize);
}

void TextWindow__Draw_1(TextWindow* __this, ::app::Fuse::Internal::WordWrapInfo* wrapInfo, ::app::Fuse::Internal::TextSpan* selection, ::app::Uno::Float4 textColor, ::app::Uno::Float4 selectionColor, int maxTextLength, int textAlignment, ::app::Uno::Float2 textBoundsSize, ::app::Uno::Float2 offset, ::app::Fuse::DrawContext* dc)
{
    if (::app::Uno::Float2__op_Inequality(NULL, __this->_textBoundsSize, textBoundsSize))
    {
        __this->InvalidateRenderBounds();
    }

    __this->_wrapInfo = wrapInfo;
    __this->_selection = selection;
    __this->_textColor_1 = textColor;
    __this->_selectionColor = selectionColor;
    __this->_maxTextLength = maxTextLength;
    __this->_textAlignment_1 = textAlignment;
    __this->_textBoundsSize = textBoundsSize;
    __this->_offset_1 = offset;
    __this->Draw(dc);
}

void TextWindow__OnDraw(TextWindow* __this, ::app::Fuse::DrawContext* dc)
{
    ::app::Fuse::Internal::ITextRenderer::BeginRendering(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Internal::WordWrapInfo*>(__this->_wrapInfo)->TextRenderer), ::uPtr< ::app::Fuse::Internal::WordWrapInfo*>(__this->_wrapInfo)->FontSize, ::uPtr< ::app::Fuse::Internal::WordWrapInfo*>(__this->_wrapInfo)->AbsoluteZoom, __this->WorldTransform(), __this->ActualSize(), __this->_textColor_1, __this->_maxTextLength);
    float lineHeight = ::uPtr< ::app::Fuse::Internal::WordWrapInfo*>(__this->_wrapInfo)->LineHeight * ::uPtr< ::app::Fuse::Internal::WordWrapInfo*>(__this->_wrapInfo)->AbsoluteZoom;
    ::app::Uno::Float2 scaledOffset = ::app::Uno::Float2__op_Multiply(NULL, __this->_offset_1, ::uPtr< ::app::Fuse::Internal::WordWrapInfo*>(__this->_wrapInfo)->AbsoluteZoom);
    float y = 0.0f;
    float selectionY = 0.0f;

    for (int i = 0; i < ::uPtr< ::app::Uno::Collections::List__Fuse_Internal_LineCacheLine*>(::uPtr< ::app::Fuse::Internal::LineCache*>(__this->_lineCache)->Lines())->Count(); i++)
    {
        ::uArray* lines = ::uPtr< ::app::Fuse::Internal::LineCacheLine*>(::uPtr< ::app::Uno::Collections::List__Fuse_Internal_LineCacheLine*>(::uPtr< ::app::Fuse::Internal::LineCache*>(__this->_lineCache)->Lines())->Item(i))->GetWrappedLines(__this->_wrapInfo);

        for (int j = 0; j < ::uPtr< ::uArray*>(lines)->Length(); ++j)
        {
            ::app::Fuse::Internal::WrappedLine* wrappedLine = ::uPtr< ::uArray*>(lines)->Item< ::app::Fuse::Internal::WrappedLine*>(j);
            float drawY = scaledOffset.Y + y;

            if (drawY >= (__this->ActualSize().Y * ::uPtr< ::app::Fuse::Internal::WordWrapInfo*>(__this->_wrapInfo)->AbsoluteZoom))
            {
                break;
            }
            else if (drawY >= -lineHeight)
            {
                float x = ::uPtr< ::app::Fuse::Internal::WrappedLine*>(wrappedLine)->GetXOffset(__this->_textAlignment_1, __this->_textBoundsSize.X, __this->AbsoluteZoom());

                if (::app::Fuse::Internal::TextSpan__op_Inequality(NULL, __this->_selection, NULL))
                {
                    ::app::Fuse::Internal::TextPosition* start = ::app::Fuse::Internal::TextPosition__New_1(NULL, i, ::uPtr< ::app::Fuse::Internal::WrappedLine*>(wrappedLine)->LineTextStartOffset);
                    ::app::Fuse::Internal::TextPosition* end = ::app::Fuse::Internal::TextPosition__New_1(NULL, i, wrappedLine->LineTextEndOffset());
                    ::app::Fuse::Internal::TextSpan* span = ::app::Fuse::Internal::TextSpan__New_1(NULL, start, end);
                    ::app::Fuse::Internal::TextSpan* intersection = ::app::Fuse::Internal::TextSpan__Intersection(NULL, span, __this->_selection);

                    if (::app::Fuse::Internal::TextSpan__op_Inequality(NULL, intersection, NULL))
                    {
                        float startPos = ::uPtr< ::app::Fuse::Internal::WrappedLine*>(wrappedLine)->PosToBounds(__this->_wrapInfo, ::uPtr< ::app::Fuse::Internal::TextPosition*>(::uPtr< ::app::Fuse::Internal::TextSpan*>(intersection)->Start)->Char - ::uPtr< ::app::Fuse::Internal::WrappedLine*>(wrappedLine)->LineTextStartOffset);
                        float endPos = (::uPtr< ::app::Fuse::Internal::TextPosition*>(intersection->End)->Char < wrappedLine->LineTextEndOffset()) ? wrappedLine->PosToBounds(__this->_wrapInfo, ::uPtr< ::app::Fuse::Internal::TextPosition*>(intersection->End)->Char - wrappedLine->LineTextStartOffset) : wrappedLine->LineWidth;
                        ::uPtr< ::app::Fuse::Elements::Internal::ElementDraw*>(::app::Fuse::Elements::Internal::ElementDraw__Impl)->Rectangle(dc, (::app::Fuse::Elements::Element*)__this, ::app::Uno::Math__Floor_2(NULL, ::app::Uno::Float2__New_2(NULL, (__this->_offset_1.X + x) + startPos, __this->_offset_1.Y + selectionY)), ::app::Uno::Float2__New_2(NULL, endPos - startPos, ::uPtr< ::app::Fuse::Internal::WordWrapInfo*>(__this->_wrapInfo)->LineHeight), __this->_selectionColor);
                    }
                }

                ::app::Fuse::Internal::ITextRenderer::DrawLine(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Internal::WordWrapInfo*>(__this->_wrapInfo)->TextRenderer), dc, scaledOffset.X + (x * ::uPtr< ::app::Fuse::Internal::WordWrapInfo*>(__this->_wrapInfo)->AbsoluteZoom), drawY, wrappedLine->Text);
            }

            y = y + lineHeight;
            selectionY = selectionY + (lineHeight / ::uPtr< ::app::Fuse::Internal::WordWrapInfo*>(__this->_wrapInfo)->AbsoluteZoom);
        }
    }

    ::app::Fuse::Internal::ITextRenderer::EndRendering(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Internal::WordWrapInfo*>(__this->_wrapInfo)->TextRenderer), dc);
}

void TextWindow___ObjInit_2(TextWindow* __this, ::uObject* parent, ::app::Fuse::Internal::LineCache* lineCache)
{
    ::app::Fuse::Elements::Element___ObjInit_1(__this);
    __this->_lineCache = lineCache;
    __this->ClipToBounds(true);
    __this->OnAdded(parent);
}

TextWindow* TextWindow__New_1(::uStatic* __this, ::uObject* parent, ::app::Fuse::Internal::LineCache* lineCache)
{
    TextWindow* inst = (::app::Fuse::Internal::TextWindow*)::uAllocObject(sizeof(::app::Fuse::Internal::TextWindow), ::app::Fuse::Internal::TextWindow__typeof());
    inst->_ObjInit_2(parent, lineCache);
    return inst;
}

}}}
