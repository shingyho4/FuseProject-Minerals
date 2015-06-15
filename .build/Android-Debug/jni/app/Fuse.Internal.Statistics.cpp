// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Internal.Statistics.h>
#include <app/Uno.Double.h>
#include <app/Uno.Float.h>
#include <app/Uno.Math.h>

namespace app {
namespace Fuse {
namespace Internal {

Statistics__uType* Statistics__typeof()
{
    static Statistics__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Statistics__uType*)::uAllocClassType(sizeof(Statistics__uType), "Fuse.Internal.Statistics");
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

float Statistics__ContinuousFilterAlpha(::uStatic* __this, float elapsed, float period)
{
    return (float)(1.0 - ::app::Uno::Math__Pow(NULL, 2.7182818284590451, (double)(-elapsed / period)));
}

}}}
