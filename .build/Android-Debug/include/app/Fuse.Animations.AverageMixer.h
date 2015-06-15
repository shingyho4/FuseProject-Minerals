// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_AVERAGE_MIXER_H__
#define __APP_FUSE_ANIMATIONS_AVERAGE_MIXER_H__

#include <app/Fuse.Animations.IMixer.h>
#include <app/Fuse.Animations.MixerBase.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MasterBase__Fuse_Transform; } } }
namespace app { namespace Fuse { namespace Animations { struct MasterProperty__bool; } } }
namespace app { namespace Fuse { namespace Animations { struct MasterProperty__float; } } }
namespace app { namespace Fuse { namespace Animations { struct MasterProperty__float4; } } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Uno { namespace UX { struct Property__bool; } } }
namespace app { namespace Uno { namespace UX { struct Property__float; } } }
namespace app { namespace Uno { namespace UX { struct Property__float4; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct AverageMixer;

struct AverageMixer__uType : ::app::Fuse::Animations::MixerBase__uType
{
};

AverageMixer__uType* AverageMixer__typeof();

::app::Fuse::Animations::MasterBase__Fuse_Transform* AverageMixer__CreateMasterTransform(AverageMixer* __this, ::app::Fuse::Node* element, ::app::Fuse::Animations::MixerBase* mixerBase);
::app::Fuse::Animations::MasterProperty__float4* AverageMixer__CreateMaster__float4(AverageMixer* __this, ::app::Uno::UX::Property__float4* property, ::app::Fuse::Animations::MixerBase* mixerBase);
::app::Fuse::Animations::MasterProperty__float* AverageMixer__CreateMaster__float(AverageMixer* __this, ::app::Uno::UX::Property__float* property, ::app::Fuse::Animations::MixerBase* mixerBase);
::app::Fuse::Animations::MasterProperty__bool* AverageMixer__CreateMaster__bool(AverageMixer* __this, ::app::Uno::UX::Property__bool* property, ::app::Fuse::Animations::MixerBase* mixerBase);
void AverageMixer___ObjInit_1(AverageMixer* __this);
AverageMixer* AverageMixer__New_1(::uStatic* __this);

struct AverageMixer : ::app::Fuse::Animations::MixerBase
{
    void _ObjInit_1() { AverageMixer___ObjInit_1(this); }
};

}}}


#endif
