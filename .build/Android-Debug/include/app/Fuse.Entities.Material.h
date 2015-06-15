// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Entities\0.2.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ENTITIES_MATERIAL_H__
#define __APP_FUSE_ENTITIES_MATERIAL_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Entities { struct Mesh; } } }
namespace app { namespace Uno { struct Float4x4; } }

namespace app {
namespace Fuse {
namespace Entities {

struct Material;

struct Material__uType : ::uClassType
{
};

Material__uType* Material__typeof();

bool Material__get_IsBatchable(Material* __this);
bool Material__Draw(Material* __this, ::app::Fuse::Entities::Mesh* m, ::app::Uno::Float4x4 transform);

struct Material : ::uObject
{
    bool Draw(::app::Fuse::Entities::Mesh* m, ::app::Uno::Float4x4 transform);
    bool IsBatchable() { return Material__get_IsBatchable(this); }
};

}}}

#include <app/Uno.Bool.h>
#include <app/Uno.Float4x4.h>

namespace app {
namespace Fuse {
namespace Entities {

inline bool Material::Draw(::app::Fuse::Entities::Mesh* m, ::app::Uno::Float4x4 transform) { return Material__Draw(this, m, transform); }

}}}


#endif
