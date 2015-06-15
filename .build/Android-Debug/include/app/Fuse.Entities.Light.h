// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Entities\0.2.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ENTITIES_LIGHT_H__
#define __APP_FUSE_ENTITIES_LIGHT_H__

#include <app/Fuse.Entities.Component.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Entities { struct Entity; } } }

namespace app {
namespace Fuse {
namespace Entities {

struct Light;

struct Light__uType : ::app::Fuse::Entities::Component__uType
{
};

Light__uType* Light__typeof();

void Light__OnAdded(Light* __this, ::app::Fuse::Entities::Entity* e);
void Light__OnRemoved(Light* __this, ::app::Fuse::Entities::Entity* e);

struct Light : ::app::Fuse::Entities::Component
{
};

}}}


#endif
