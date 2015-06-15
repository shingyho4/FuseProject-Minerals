// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.1.0\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Internal.WordWrapperWord.h>
#include <app/Uno.String.h>

namespace app {
namespace Fuse {
namespace Internal {

WordWrapperWord__uType* WordWrapperWord__typeof()
{
    static WordWrapperWord__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (WordWrapperWord__uType*)::uAllocClassType(sizeof(WordWrapperWord__uType), "Fuse.Internal.WordWrapperWord", ::uObject__typeof(), 0, 3);
        type->StrongRefOffsets[0] = offsetof(WordWrapperWord, Contents);
        type->StrongRefOffsets[1] = offsetof(WordWrapperWord, Whitespace);
        type->StrongRefOffsets[2] = offsetof(WordWrapperWord, TotalContents);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "Contents";
        type->StrongRefNames[1] = "Whitespace";
        type->StrongRefNames[2] = "TotalContents";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void WordWrapperWord___ObjInit(WordWrapperWord* __this, ::uString* contents, ::uString* whitespace, int startIndex, float contentsWidth, float totalContentsWidth)
{
    __this->Contents = contents;
    __this->Whitespace = whitespace;
    __this->TotalContents = ::app::Uno::String__op_Addition(NULL, __this->Contents, __this->Whitespace);
    __this->StartIndex = startIndex;
    __this->ContentsWidth = contentsWidth;
    __this->TotalContentsWidth = totalContentsWidth;
}

WordWrapperWord* WordWrapperWord__New_1(::uStatic* __this, ::uString* contents, ::uString* whitespace, int startIndex, float contentsWidth, float totalContentsWidth)
{
    WordWrapperWord* inst = (::app::Fuse::Internal::WordWrapperWord*)::uAllocObject(sizeof(::app::Fuse::Internal::WordWrapperWord), ::app::Fuse::Internal::WordWrapperWord__typeof());
    inst->_ObjInit(contents, whitespace, startIndex, contentsWidth, totalContentsWidth);
    return inst;
}

}}}
