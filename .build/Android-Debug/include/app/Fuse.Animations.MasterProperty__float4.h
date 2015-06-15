// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_MASTER_PROPERTY__FLOAT4_H__
#define __APP_FUSE_ANIMATIONS_MASTER_PROPERTY__FLOAT4_H__

#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Fuse.Animations.MasterBase__float4.h>
#include <app/Fuse.Animations.MasterPropertyGet.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerBase; } } }
namespace app { namespace Uno { namespace UX { struct Property__float4; } } }
namespace app { namespace Uno { struct Float4; } }

namespace app {
namespace Fuse {
namespace Animations {

struct MasterProperty__float4;

struct MasterProperty__float4__uType : ::app::Fuse::Animations::MasterBase__float4__uType
{
    ::app::Fuse::Animations::MasterPropertyGet __interface_1;
};

MasterProperty__float4__uType* MasterProperty__float4__typeof();

::app::Uno::Float4 MasterProperty__float4__get_RestValue(MasterProperty__float4* __this);
::uObject* MasterProperty__float4__GetPropertyObject(MasterProperty__float4* __this);
void MasterProperty__float4__OnInactive(MasterProperty__float4* __this);
void MasterProperty__float4___ObjInit_1(MasterProperty__float4* __this, ::app::Uno::UX::Property__float4* property, ::app::Fuse::Animations::MixerBase* mixerBase);

struct MasterProperty__float4 : ::app::Fuse::Animations::MasterBase__float4
{
    ::uStrong< ::app::Uno::UX::Property__float4*> Property;

    ::uObject* GetPropertyObject() { return MasterProperty__float4__GetPropertyObject(this); }
    void _ObjInit_1(::app::Uno::UX::Property__float4* property, ::app::Fuse::Animations::MixerBase* mixerBase) { MasterProperty__float4___ObjInit_1(this, property, mixerBase); }
    ::app::Uno::Float4 RestValue();
};

}}}

#include <app/Uno.Float4.h>

namespace app {
namespace Fuse {
namespace Animations {

inline ::app::Uno::Float4 MasterProperty__float4::RestValue() { return MasterProperty__float4__get_RestValue(this); }

}}}


#endif
