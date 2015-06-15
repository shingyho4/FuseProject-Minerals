// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Animations.MasterBase1_GFWResult__float4.h>
#include <app/Uno.Float.h>

namespace app {
namespace Fuse {
namespace Animations {

MasterBase1_GFWResult__float4__uType* MasterBase1_GFWResult__float4__typeof()
{
    static MasterBase1_GFWResult__float4__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (MasterBase1_GFWResult__float4__uType*)::uAllocValueType(sizeof(MasterBase1_GFWResult__float4__uType), "Fuse.Animations.MasterBase1_GFWResult<float4>", sizeof(MasterBase1_GFWResult__float4));
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

}}}
