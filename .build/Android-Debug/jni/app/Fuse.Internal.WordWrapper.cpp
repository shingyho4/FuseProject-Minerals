// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.1.0\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Internal.ITextRenderer.h>
#include <app/Fuse.Internal.WordWrapInfo.h>
#include <app/Fuse.Internal.WordWrapper.h>
#include <app/Fuse.Internal.WordWrapperWord.h>
#include <app/Fuse.Internal.WrappedLine.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Char.h>
#include <app/Uno.Collections.List__Fuse_Internal_WordWrapperWord.h>
#include <app/Uno.Collections.List__Fuse_Internal_WrappedLine.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Int.h>
#include <app/Uno.String.h>

namespace app {
namespace Fuse {
namespace Internal {

WordWrapper__uType* WordWrapper__typeof()
{
    static WordWrapper__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (WordWrapper__uType*)::uAllocClassType(sizeof(WordWrapper__uType), "Fuse.Internal.WordWrapper");
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::uArray* WordWrapper__WrapLine(::uStatic* __this, ::app::Fuse::Internal::WordWrapInfo* wrapInfo, ::uString* text)
{
    ::app::Uno::Collections::List__Fuse_Internal_WordWrapperWord* words = WordWrapper__GetWords(NULL, wrapInfo, text);
    ::app::Uno::Collections::List__Fuse_Internal_WrappedLine* ret = ::app::Uno::Collections::List__Fuse_Internal_WrappedLine__New_1(NULL);
    int lineStartIndex = 0;
    ::uString* lineText = ::app::Uno::String__Empty;
    float lineWidth = 0.0f;

    for (int i = 0; i < (::uPtr< ::app::Uno::Collections::List__Fuse_Internal_WordWrapperWord*>(words)->Count() - 1); i++)
    {
        ::app::Fuse::Internal::WordWrapperWord* word = WordWrapper__SplitWord(NULL, wrapInfo, ret, ::uPtr< ::app::Uno::Collections::List__Fuse_Internal_WordWrapperWord*>(words)->Item(i), &lineStartIndex);
        ::app::Fuse::Internal::WordWrapperWord* nextWord = words->Item(i + 1);

        if (((lineWidth + ::uPtr< ::app::Fuse::Internal::WordWrapperWord*>(word)->TotalContentsWidth) + ::uPtr< ::app::Fuse::Internal::WordWrapperWord*>(nextWord)->ContentsWidth) <= ::uPtr< ::app::Fuse::Internal::WordWrapInfo*>(wrapInfo)->WrapWidth)
        {
            lineText = ::app::Uno::String__op_Addition(NULL, lineText, ::uPtr< ::app::Fuse::Internal::WordWrapperWord*>(word)->TotalContents);
            lineWidth = lineWidth + word->TotalContentsWidth;
        }
        else
        {
            ::uPtr< ::app::Uno::Collections::List__Fuse_Internal_WrappedLine*>(ret)->Add(::app::Fuse::Internal::WrappedLine__New_1(NULL, ::app::Uno::String__op_Addition(NULL, lineText, ::uPtr< ::app::Fuse::Internal::WordWrapperWord*>(word)->TotalContents), lineStartIndex, (float)::uPtr< ::app::Uno::Collections::List__Fuse_Internal_WrappedLine*>(ret)->Count() * ::uPtr< ::app::Fuse::Internal::WordWrapInfo*>(wrapInfo)->LineHeight, lineWidth + ::uPtr< ::app::Fuse::Internal::WordWrapperWord*>(word)->ContentsWidth));
            lineStartIndex = ::uPtr< ::app::Fuse::Internal::WordWrapperWord*>(nextWord)->StartIndex;
            lineText = ::app::Uno::String__Empty;
            lineWidth = 0.0f;
        }
    }

    ::app::Fuse::Internal::WordWrapperWord* lastWord = WordWrapper__SplitWord(NULL, wrapInfo, ret, ::uPtr< ::app::Uno::Collections::List__Fuse_Internal_WordWrapperWord*>(words)->Item(::uPtr< ::app::Uno::Collections::List__Fuse_Internal_WordWrapperWord*>(words)->Count() - 1), &lineStartIndex);
    ::uPtr< ::app::Uno::Collections::List__Fuse_Internal_WrappedLine*>(ret)->Add(::app::Fuse::Internal::WrappedLine__New_1(NULL, ::app::Uno::String__op_Addition(NULL, lineText, ::uPtr< ::app::Fuse::Internal::WordWrapperWord*>(lastWord)->TotalContents), lineStartIndex, (float)::uPtr< ::app::Uno::Collections::List__Fuse_Internal_WrappedLine*>(ret)->Count() * ::uPtr< ::app::Fuse::Internal::WordWrapInfo*>(wrapInfo)->LineHeight, lineWidth + ::uPtr< ::app::Fuse::Internal::WordWrapperWord*>(lastWord)->TotalContentsWidth));
    return ret->ToArray();
}

::app::Uno::Collections::List__Fuse_Internal_WordWrapperWord* WordWrapper__GetWords(::uStatic* __this, ::app::Fuse::Internal::WordWrapInfo* wrapInfo, ::uString* text)
{
    ::app::Uno::Collections::List__Fuse_Internal_WordWrapperWord* ret = ::app::Uno::Collections::List__Fuse_Internal_WordWrapperWord__New_1(NULL);

    for (int i = 0; i < ::uPtr< ::uString*>(text)->Length(); )
    {
        int contentsIndex = i;
        int contentsLength = 0;

        for (; (i < ::uPtr< ::uString*>(text)->Length()) && !::app::Uno::Char__IsWhiteSpace(NULL, ::uPtr< ::uString*>(text)->Item(i)); i++)
        {
            contentsLength++;
        }

        ::uString* contents = ::app::Uno::String::Substring(::uPtr< ::uString*>(text), contentsIndex, contentsLength);
        int whitespaceIndex = i;
        int whitespaceLength = 0;

        for (; (i < text->Length()) && ::app::Uno::Char__IsWhiteSpace(NULL, text->Item(i)); i++)
        {
            whitespaceLength++;
        }

        ::uString* whitespace = ::app::Uno::String::Substring(text, whitespaceIndex, whitespaceLength);
        ::uPtr< ::app::Uno::Collections::List__Fuse_Internal_WordWrapperWord*>(ret)->Add(::app::Fuse::Internal::WordWrapperWord__New_1(NULL, contents, whitespace, contentsIndex, ::app::Fuse::Internal::ITextRenderer::MeasureStringVirtual(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Internal::WordWrapInfo*>(wrapInfo)->TextRenderer), ::uPtr< ::app::Fuse::Internal::WordWrapInfo*>(wrapInfo)->FontSize, ::uPtr< ::app::Fuse::Internal::WordWrapInfo*>(wrapInfo)->AbsoluteZoom, contents).X, ::app::Fuse::Internal::ITextRenderer::MeasureStringVirtual(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Internal::WordWrapInfo*>(wrapInfo)->TextRenderer), ::uPtr< ::app::Fuse::Internal::WordWrapInfo*>(wrapInfo)->FontSize, ::uPtr< ::app::Fuse::Internal::WordWrapInfo*>(wrapInfo)->AbsoluteZoom, ::app::Uno::String__op_Addition(NULL, contents, whitespace)).X));
    }

    return ret;
}

::app::Fuse::Internal::WordWrapperWord* WordWrapper__SplitWord(::uStatic* __this, ::app::Fuse::Internal::WordWrapInfo* wrapInfo, ::app::Uno::Collections::List__Fuse_Internal_WrappedLine* wrappedLines, ::app::Fuse::Internal::WordWrapperWord* word, int* lineStartIndex)
{
    while ((::uPtr< ::uString*>(::uPtr< ::app::Fuse::Internal::WordWrapperWord*>(word)->Contents)->Length() > 1) && (::uPtr< ::app::Fuse::Internal::WordWrapperWord*>(word)->ContentsWidth > ::uPtr< ::app::Fuse::Internal::WordWrapInfo*>(wrapInfo)->WrapWidth))
    {
        int c = 1;

        for (; c < ::uPtr< ::uString*>(::uPtr< ::app::Fuse::Internal::WordWrapperWord*>(word)->Contents)->Length(); c++)
        {
            ::uString* leftString = ::app::Uno::String::Substring(::uPtr< ::uString*>(::uPtr< ::app::Fuse::Internal::WordWrapperWord*>(word)->Contents), 0, c);
            float startX = ::app::Fuse::Internal::ITextRenderer::MeasureStringVirtual(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Internal::WordWrapInfo*>(wrapInfo)->TextRenderer), ::uPtr< ::app::Fuse::Internal::WordWrapInfo*>(wrapInfo)->FontSize, ::uPtr< ::app::Fuse::Internal::WordWrapInfo*>(wrapInfo)->AbsoluteZoom, leftString).X;

            if (startX >= wrapInfo->WrapWidth)
            {
                return word;
            }

            float endX = startX + ::app::Fuse::Internal::ITextRenderer::MeasureStringVirtual(::uPtr< ::uObject*>(wrapInfo->TextRenderer), wrapInfo->FontSize, wrapInfo->AbsoluteZoom, ::app::Uno::String::Substring(::uPtr< ::uString*>(word->Contents), c, 1)).X;

            if ((startX < wrapInfo->WrapWidth) && (endX >= wrapInfo->WrapWidth))
            {
                ::uPtr< ::app::Uno::Collections::List__Fuse_Internal_WrappedLine*>(wrappedLines)->Add(::app::Fuse::Internal::WrappedLine__New_1(NULL, leftString, ::uPtr< ::app::Fuse::Internal::WordWrapperWord*>(word)->StartIndex, (float)::uPtr< ::app::Uno::Collections::List__Fuse_Internal_WrappedLine*>(wrappedLines)->Count() * ::uPtr< ::app::Fuse::Internal::WordWrapInfo*>(wrapInfo)->LineHeight, startX));
                ::uString* newWordContents = ::app::Uno::String::Substring_1(::uPtr< ::uString*>(word->Contents), c);
                *lineStartIndex = word->StartIndex + c;
                word = ::app::Fuse::Internal::WordWrapperWord__New_1(NULL, newWordContents, ::uPtr< ::app::Fuse::Internal::WordWrapperWord*>(word)->Whitespace, *lineStartIndex, ::app::Fuse::Internal::ITextRenderer::MeasureStringVirtual(::uPtr< ::uObject*>(wrapInfo->TextRenderer), wrapInfo->FontSize, wrapInfo->AbsoluteZoom, newWordContents).X, ::app::Fuse::Internal::ITextRenderer::MeasureStringVirtual(::uPtr< ::uObject*>(wrapInfo->TextRenderer), wrapInfo->FontSize, wrapInfo->AbsoluteZoom, ::app::Uno::String__op_Addition(NULL, newWordContents, ::uPtr< ::app::Fuse::Internal::WordWrapperWord*>(word)->Whitespace)).X);
                break;
            }
        }
    }

    return word;
}

}}}
