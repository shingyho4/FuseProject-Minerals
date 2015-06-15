// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.1.0\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Drawing.NonConsecutiveEnumerable.h>
#include <app/Fuse.Drawing.NonConsecutiveExtension.h>
#include <app/Uno.Collections.IEnumerable__float2.h>

namespace app {
namespace Fuse {
namespace Drawing {

NonConsecutiveExtension__uType* NonConsecutiveExtension__typeof()
{
    static NonConsecutiveExtension__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (NonConsecutiveExtension__uType*)::uAllocClassType(sizeof(NonConsecutiveExtension__uType), "Fuse.Drawing.NonConsecutiveExtension");
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::uObject* NonConsecutiveExtension__NonConsecutive(::uStatic* __this, ::uObject* self)
{
    return (::uObject*)::app::Fuse::Drawing::NonConsecutiveEnumerable__New_1(NULL, self);
}

}}}
