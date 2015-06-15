// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Animations.MasterBase1_GFWResult__bool.h>
#include <app/Uno.Float.h>

namespace app {
namespace Fuse {
namespace Animations {

MasterBase1_GFWResult__bool__uType* MasterBase1_GFWResult__bool__typeof()
{
    static MasterBase1_GFWResult__bool__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (MasterBase1_GFWResult__bool__uType*)::uAllocValueType(sizeof(MasterBase1_GFWResult__bool__uType), "Fuse.Animations.MasterBase1_GFWResult<bool>", sizeof(MasterBase1_GFWResult__bool));
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

}}}
