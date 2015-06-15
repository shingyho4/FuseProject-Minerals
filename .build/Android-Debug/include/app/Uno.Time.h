// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_TIME_H__
#define __APP_UNO_TIME_H__

#include <Uno/Uno.h>
namespace app { namespace Uno { struct FakeTime; } }

namespace app {
namespace Uno {

extern ::uStaticStrong< ::app::Uno::FakeTime*> Time__FakeTime;

struct Time__uType : ::uClassType
{
};

Time__uType* Time__typeof();

double Time__get_FrameTime(::uStatic* __this);
double Time__get_FrameInterval(::uStatic* __this);
float Time__get_FrameIntervalFloat(::uStatic* __this);
double Time__GetFrameTime(::uStatic* __this);
double Time__GetFrameInterval(::uStatic* __this);

}}


#endif
