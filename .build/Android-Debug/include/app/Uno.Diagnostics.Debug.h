// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Diagnostics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_DIAGNOSTICS_DEBUG_H__
#define __APP_UNO_DIAGNOSTICS_DEBUG_H__

#include <Uno/Uno.h>

namespace app {
namespace Uno {
namespace Diagnostics {

extern ::uStaticStrong< ::uDelegate*> Debug___assertionHandler;
extern ::uStaticStrong< ::uString*> Debug___indentStr;

struct Debug__uType : ::uClassType
{
};

Debug__uType* Debug__typeof();

void Debug__Assert(::uStatic* __this, bool value, ::uString* expression, ::uString* filename, int line, ::uArray* operands);
void Debug__Log(::uStatic* __this, ::uString* message, int type, ::uString* filename, int line);
void Debug__Log_1(::uStatic* __this, ::uObject* message, int type, ::uString* filename, int line);
void Debug__Log_2(::uStatic* __this, ::uString* message, int type);
void Debug__EmitLog(::uStatic* __this, ::uString* message, int type);
void Debug___TypeInit(::uStatic* __this);

}}}


#endif
