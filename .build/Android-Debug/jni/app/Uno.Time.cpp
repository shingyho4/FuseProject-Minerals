// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Application.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Double.h>
#include <app/Uno.FakeTime.h>
#include <app/Uno.Float.h>
#include <app/Uno.Time.h>

namespace app {
namespace Uno {

::uStaticStrong< ::app::Uno::FakeTime*> Time__FakeTime;

Time__uType* Time__typeof()
{
    static Time__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Time__uType*)::uAllocClassType(sizeof(Time__uType), "Uno.Time");
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

double Time__get_FrameTime(::uStatic* __this)
{
    return Time__GetFrameTime(NULL);
}

double Time__get_FrameInterval(::uStatic* __this)
{
    return Time__GetFrameInterval(NULL);
}

float Time__get_FrameIntervalFloat(::uStatic* __this)
{
    return (float)Time__GetFrameInterval(NULL);
}

double Time__GetFrameTime(::uStatic* __this)
{
    return (Time__FakeTime == NULL) ? ::uPtr< ::app::Uno::Application*>(::app::Uno::Application__get_Current(NULL))->FrameTime() : ::uPtr< ::app::Uno::FakeTime*>(Time__FakeTime)->FrameTime;
}

double Time__GetFrameInterval(::uStatic* __this)
{
    return (Time__FakeTime == NULL) ? ::uPtr< ::app::Uno::Application*>(::app::Uno::Application__get_Current(NULL))->FrameInterval() : ::uPtr< ::app::Uno::FakeTime*>(Time__FakeTime)->FrameInterval;
}

}}
