// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.1.0\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_INTERNAL_WORD_WRAP_INFO_H__
#define __APP_FUSE_INTERNAL_WORD_WRAP_INFO_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>

namespace app {
namespace Fuse {
namespace Internal {

struct WordWrapInfo;

struct WordWrapInfo__uType : ::uClassType
{
};

WordWrapInfo__uType* WordWrapInfo__typeof();

bool WordWrapInfo__Equals(WordWrapInfo* __this, ::uObject* obj);
int WordWrapInfo__GetHashCode(WordWrapInfo* __this);
void WordWrapInfo___ObjInit(WordWrapInfo* __this, ::uObject* textRenderer, bool isEnabled, float wrapWidth, float fontSize, float lineHeight, float lineSpacing, float absoluteZoom);
WordWrapInfo* WordWrapInfo__New_1(::uStatic* __this, ::uObject* textRenderer, bool isEnabled, float wrapWidth, float fontSize, float lineHeight, float lineSpacing, float absoluteZoom);

struct WordWrapInfo : ::uObject
{
    ::uStrong< ::uObject*> TextRenderer;
    bool IsEnabled;
    float WrapWidth;
    float FontSize;
    float LineHeight;
    float AbsoluteZoom;

    void _ObjInit(::uObject* textRenderer, bool isEnabled, float wrapWidth, float fontSize, float lineHeight, float lineSpacing, float absoluteZoom) { WordWrapInfo___ObjInit(this, textRenderer, isEnabled, wrapWidth, fontSize, lineHeight, lineSpacing, absoluteZoom); }
};

}}}

#include <app/Uno.Bool.h>
#include <app/Uno.Float.h>
#include <app/Uno.Int.h>

namespace app {
namespace Fuse {
namespace Internal {

}}}


#endif
