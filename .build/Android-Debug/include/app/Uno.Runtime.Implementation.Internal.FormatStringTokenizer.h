// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Runtime\Implementation\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_RUNTIME_IMPLEMENTATION_INTERNAL_FORMAT_STRING_TOKENIZER_H__
#define __APP_UNO_RUNTIME_IMPLEMENTATION_INTERNAL_FORMAT_STRING_TOKENIZER_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Uno { namespace Collections { struct List__Uno_Runtime_Implementation_Internal_FormatStringToken; } } }

namespace app {
namespace Uno {
namespace Runtime {
namespace Implementation {
namespace Internal {

struct FormatStringTokenizer;

struct FormatStringTokenizer__uType : ::uClassType
{
};

FormatStringTokenizer__uType* FormatStringTokenizer__typeof();

::app::Uno::Collections::List__Uno_Runtime_Implementation_Internal_FormatStringToken* FormatStringTokenizer__TokenizeFormatString(::uStatic* __this, ::uString* format);
::app::Uno::Collections::List__Uno_Runtime_Implementation_Internal_FormatStringToken* FormatStringTokenizer__TokenizeFormatStringInternal(FormatStringTokenizer* __this);
void FormatStringTokenizer__AddFormatItemAndGoTo(FormatStringTokenizer* __this, int state);
void FormatStringTokenizer__AddLiteralAndGoTo(FormatStringTokenizer* __this, int state);
void FormatStringTokenizer__DiscardCharacterAndGoTo(FormatStringTokenizer* __this, int state);
void FormatStringTokenizer__Throw(FormatStringTokenizer* __this);
bool FormatStringTokenizer__AtEnd(FormatStringTokenizer* __this);
void FormatStringTokenizer___ObjInit(FormatStringTokenizer* __this, ::uString* format);
FormatStringTokenizer* FormatStringTokenizer__New_1(::uStatic* __this, ::uString* format);

struct FormatStringTokenizer : ::uObject
{
    int _index;
    int _prevIndex;
    ::uStrong< ::app::Uno::Collections::List__Uno_Runtime_Implementation_Internal_FormatStringToken*> _tokens;
    int _state;
    ::uStrong< ::uString*> _format;

    ::app::Uno::Collections::List__Uno_Runtime_Implementation_Internal_FormatStringToken* TokenizeFormatStringInternal() { return FormatStringTokenizer__TokenizeFormatStringInternal(this); }
    void AddFormatItemAndGoTo(int state) { FormatStringTokenizer__AddFormatItemAndGoTo(this, state); }
    void AddLiteralAndGoTo(int state) { FormatStringTokenizer__AddLiteralAndGoTo(this, state); }
    void DiscardCharacterAndGoTo(int state) { FormatStringTokenizer__DiscardCharacterAndGoTo(this, state); }
    void Throw() { FormatStringTokenizer__Throw(this); }
    bool AtEnd() { return FormatStringTokenizer__AtEnd(this); }
    void _ObjInit(::uString* format) { FormatStringTokenizer___ObjInit(this, format); }
};

}}}}}

#include <app/Uno.Bool.h>

namespace app {
namespace Uno {
namespace Runtime {
namespace Implementation {
namespace Internal {

}}}}}


#endif
