// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.1.0\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Internal.ITextRenderer.h>
#include <app/Fuse.Internal.LineCacheLine.h>
#include <app/Fuse.Internal.LineCacheTransform.h>
#include <app/Fuse.Internal.WordWrapInfo.h>
#include <app/Fuse.Internal.WordWrapper.h>
#include <app/Fuse.Internal.WrappedLine.h>
#include <app/Uno.Bool.h>
#include <app/Uno.String.h>

namespace app {
namespace Fuse {
namespace Internal {

LineCacheLine__uType* LineCacheLine__typeof()
{
    static LineCacheLine__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (LineCacheLine__uType*)::uAllocClassType(sizeof(LineCacheLine__uType), "Fuse.Internal.LineCacheLine", ::uObject__typeof(), 0, 4);
        type->StrongRefOffsets[0] = offsetof(LineCacheLine, _text);
        type->StrongRefOffsets[1] = offsetof(LineCacheLine, _transform);
        type->StrongRefOffsets[2] = offsetof(LineCacheLine, _wrappedLinesCache);
        type->StrongRefOffsets[3] = offsetof(LineCacheLine, _wordWrapInfoCache);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_text";
        type->StrongRefNames[1] = "_transform";
        type->StrongRefNames[2] = "_wrappedLinesCache";
        type->StrongRefNames[3] = "_wordWrapInfoCache";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::uString* LineCacheLine__get_Text(LineCacheLine* __this)
{
    return __this->_text;
}

void LineCacheLine__set_Text(LineCacheLine* __this, ::uString* value)
{
    if (::app::Uno::String__op_Equality(NULL, value, __this->_text))
    {
        return;
    }

    __this->_text = value;
    __this->Invalidate();
}

::uObject* LineCacheLine__get_Transform(LineCacheLine* __this)
{
    return __this->_transform;
}

void LineCacheLine__set_Transform(LineCacheLine* __this, ::uObject* value)
{
    __this->_transform = value;
    __this->Invalidate();
}

::uString* LineCacheLine__get_VisualText(LineCacheLine* __this)
{
    if (__this->_transform != NULL)
    {
        return ::app::Fuse::Internal::LineCacheTransform::Transform(::uPtr< ::uObject*>(__this->_transform), __this->_text);
    }

    return __this->_text;
}

::uArray* LineCacheLine__GetWrappedLines(LineCacheLine* __this, ::app::Fuse::Internal::WordWrapInfo* wrapInfo)
{
    ::uArray* array_123;

    if (((__this->_wrappedLinesCache == NULL) || (__this->_wordWrapInfoCache == NULL)) || !::uPtr< ::app::Fuse::Internal::WordWrapInfo*>(__this->_wordWrapInfoCache)->Equals((::uObject*)wrapInfo))
    {
        __this->_wrappedLinesCache = (::uPtr< ::app::Fuse::Internal::WordWrapInfo*>(wrapInfo)->IsEnabled && (::uPtr< ::uString*>(__this->Text())->Length() > 0)) ? ::app::Fuse::Internal::WordWrapper__WrapLine(NULL, wrapInfo, __this->VisualText()) : (array_123 = ::uNewArray(::app::Fuse::Internal::WrappedLine__typeof(), 1), ::uPtr< ::uArray*>(array_123)->ItemStrong< ::app::Fuse::Internal::WrappedLine*>(0) = ::app::Fuse::Internal::WrappedLine__New_1(NULL, __this->VisualText(), 0, 0.0f, ::app::Fuse::Internal::ITextRenderer::MeasureStringVirtual(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Internal::WordWrapInfo*>(wrapInfo)->TextRenderer), ::uPtr< ::app::Fuse::Internal::WordWrapInfo*>(wrapInfo)->FontSize, ::uPtr< ::app::Fuse::Internal::WordWrapInfo*>(wrapInfo)->AbsoluteZoom, __this->VisualText()).X), array_123);
        __this->_wordWrapInfoCache = wrapInfo;
    }

    return __this->_wrappedLinesCache;
}

::app::Uno::Float2 LineCacheLine__PosToBounds(LineCacheLine* __this, ::app::Fuse::Internal::WordWrapInfo* wrapInfo, int textAlignment, float boundsWidth, int p)
{
    ::app::Fuse::Internal::WrappedLine* wrappedLine = __this->PosToWrappedLine(wrapInfo, p);
    float xOffset = ::uPtr< ::app::Fuse::Internal::WrappedLine*>(wrappedLine)->GetXOffset(textAlignment, boundsWidth, ::uPtr< ::app::Fuse::Internal::WordWrapInfo*>(wrapInfo)->AbsoluteZoom);
    float yOffset = wrappedLine->YOffset;
    return ::app::Uno::Float2__New_2(NULL, xOffset + wrappedLine->PosToBounds(wrapInfo, p - wrappedLine->LineTextStartOffset), yOffset);
}

float LineCacheLine__GetTotalHeight(LineCacheLine* __this, ::app::Fuse::Internal::WordWrapInfo* wrapInfo)
{
    ::uArray* wrappedLines = __this->GetWrappedLines(wrapInfo);
    return (float)::uPtr< ::uArray*>(wrappedLines)->Length() * ::uPtr< ::app::Fuse::Internal::WordWrapInfo*>(wrapInfo)->LineHeight;
}

::app::Fuse::Internal::WrappedLine* LineCacheLine__PosToWrappedLine(LineCacheLine* __this, ::app::Fuse::Internal::WordWrapInfo* wrapInfo, int p)
{
    ::uArray* wrappedLines = __this->GetWrappedLines(wrapInfo);

    for (int i = 0; i < (::uPtr< ::uArray*>(wrappedLines)->Length() - 1); i++)
    {
        ::app::Fuse::Internal::WrappedLine* wrappedLine = ::uPtr< ::uArray*>(wrappedLines)->Item< ::app::Fuse::Internal::WrappedLine*>(i);

        if ((p >= ::uPtr< ::app::Fuse::Internal::WrappedLine*>(wrappedLine)->LineTextStartOffset) && (p < ::uPtr< ::app::Fuse::Internal::WrappedLine*>(wrappedLine)->LineTextEndOffset()))
        {
            return wrappedLine;
        }
    }

    return ::uPtr< ::uArray*>(wrappedLines)->Item< ::app::Fuse::Internal::WrappedLine*>(::uPtr< ::uArray*>(wrappedLines)->Length() - 1);
}

void LineCacheLine__Invalidate(LineCacheLine* __this)
{
    __this->_wrappedLinesCache = NULL;
}

void LineCacheLine___ObjInit(LineCacheLine* __this, ::uString* text, ::uObject* transform)
{
    __this->_text = text;
    __this->_transform = transform;
}

LineCacheLine* LineCacheLine__New_1(::uStatic* __this, ::uString* text, ::uObject* transform)
{
    LineCacheLine* inst = (::app::Fuse::Internal::LineCacheLine*)::uAllocObject(sizeof(::app::Fuse::Internal::LineCacheLine), ::app::Fuse::Internal::LineCacheLine__typeof());
    inst->_ObjInit(text, transform);
    return inst;
}

}}}
