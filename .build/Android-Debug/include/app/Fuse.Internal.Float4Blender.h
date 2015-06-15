// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_INTERNAL_FLOAT4_BLENDER_H__
#define __APP_FUSE_INTERNAL_FLOAT4_BLENDER_H__

#include <app/Fuse.Internal.Blender__float4.h>
#include <Uno/Uno.h>
namespace app { namespace Uno { struct Float4; } }

namespace app {
namespace Fuse {
namespace Internal {

struct Float4Blender;

struct Float4Blender__uType : ::app::Fuse::Internal::Blender__float4__uType
{
};

Float4Blender__uType* Float4Blender__typeof();

::app::Uno::Float4 Float4Blender__Weight(Float4Blender* __this, ::app::Uno::Float4 v, float w);
::app::Uno::Float4 Float4Blender__Add(Float4Blender* __this, ::app::Uno::Float4 a, ::app::Uno::Float4 b);
void Float4Blender___ObjInit_1(Float4Blender* __this);
Float4Blender* Float4Blender__New_1(::uStatic* __this);

struct Float4Blender : ::app::Fuse::Internal::Blender__float4
{
    void _ObjInit_1() { Float4Blender___ObjInit_1(this); }
};

}}}

#include <app/Uno.Float.h>
#include <app/Uno.Float4.h>

namespace app {
namespace Fuse {
namespace Internal {

}}}


#endif
