// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_INTERNAL_BLENDER_MAP_H__
#define __APP_FUSE_INTERNAL_BLENDER_MAP_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Internal { struct Blender__bool; } } }
namespace app { namespace Fuse { namespace Internal { struct Blender__float; } } }
namespace app { namespace Fuse { namespace Internal { struct Blender__float2; } } }
namespace app { namespace Fuse { namespace Internal { struct Blender__float4; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary__Uno_Type__object; } } }

namespace app {
namespace Fuse {
namespace Internal {

struct BlenderMap;

extern ::uStaticStrong< ::app::Uno::Collections::Dictionary__Uno_Type__object*> BlenderMap___blenders;

struct BlenderMap__uType : ::uClassType
{
};

BlenderMap__uType* BlenderMap__typeof();

::app::Fuse::Internal::Blender__float4* BlenderMap__Get__float4(::uStatic* __this);
::app::Fuse::Internal::Blender__float2* BlenderMap__Get__float2(::uStatic* __this);
::app::Fuse::Internal::Blender__float* BlenderMap__Get__float(::uStatic* __this);
::app::Fuse::Internal::Blender__bool* BlenderMap__Get__bool(::uStatic* __this);
void BlenderMap___TypeInit(::uStatic* __this);

struct BlenderMap : ::uObject
{
};

}}}


#endif
