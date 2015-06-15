// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.1.0\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_INTERNAL_WORD_WRAPPER_WORD_H__
#define __APP_FUSE_INTERNAL_WORD_WRAPPER_WORD_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>

namespace app {
namespace Fuse {
namespace Internal {

struct WordWrapperWord;

struct WordWrapperWord__uType : ::uClassType
{
};

WordWrapperWord__uType* WordWrapperWord__typeof();

void WordWrapperWord___ObjInit(WordWrapperWord* __this, ::uString* contents, ::uString* whitespace, int startIndex, float contentsWidth, float totalContentsWidth);
WordWrapperWord* WordWrapperWord__New_1(::uStatic* __this, ::uString* contents, ::uString* whitespace, int startIndex, float contentsWidth, float totalContentsWidth);

struct WordWrapperWord : ::uObject
{
    ::uStrong< ::uString*> Contents;
    ::uStrong< ::uString*> Whitespace;
    ::uStrong< ::uString*> TotalContents;
    int StartIndex;
    float ContentsWidth;
    float TotalContentsWidth;

    void _ObjInit(::uString* contents, ::uString* whitespace, int startIndex, float contentsWidth, float totalContentsWidth) { WordWrapperWord___ObjInit(this, contents, whitespace, startIndex, contentsWidth, totalContentsWidth); }
};

}}}

#include <app/Uno.Float.h>
#include <app/Uno.Int.h>

namespace app {
namespace Fuse {
namespace Internal {

}}}


#endif
