// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Animations.MasterBase1_GFWResult__float.h>
#include <app/Uno.Float.h>

namespace app {
namespace Fuse {
namespace Animations {

MasterBase1_GFWResult__float__uType* MasterBase1_GFWResult__float__typeof()
{
    static MasterBase1_GFWResult__float__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (MasterBase1_GFWResult__float__uType*)::uAllocValueType(sizeof(MasterBase1_GFWResult__float__uType), "Fuse.Animations.MasterBase1_GFWResult<float>", sizeof(MasterBase1_GFWResult__float));
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

}}}
