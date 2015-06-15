// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Entities\0.2.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ENTITIES_MESH_RENDERER_BASE_H__
#define __APP_FUSE_ENTITIES_MESH_RENDERER_BASE_H__

#include <app/Fuse.Entities.Component.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Entities { struct Entity; } } }
namespace app { namespace Fuse { namespace Entities { struct Material; } } }
namespace app { namespace Fuse { namespace Entities { struct Mesh; } } }
namespace app { namespace Fuse { struct DrawArgs; } }
namespace app { namespace Fuse { struct HitTestContext; } }

namespace app {
namespace Fuse {
namespace Entities {

struct MeshRendererBase;

struct MeshRendererBase__uType : ::app::Fuse::Entities::Component__uType
{
};

MeshRendererBase__uType* MeshRendererBase__typeof();

int MeshRendererBase__get_HitTestMode(MeshRendererBase* __this);
void MeshRendererBase__set_HitTestMode(MeshRendererBase* __this, int value);
::app::Fuse::Entities::Material* MeshRendererBase__get_Material(MeshRendererBase* __this);
void MeshRendererBase__set_Material(MeshRendererBase* __this, ::app::Fuse::Entities::Material* value);
void MeshRendererBase__OnAdded(MeshRendererBase* __this, ::app::Fuse::Entities::Entity* e);
void MeshRendererBase__OnRemoved(MeshRendererBase* __this, ::app::Fuse::Entities::Entity* e);
void MeshRendererBase__OnHitTest(MeshRendererBase* __this, ::uObject* sender, ::app::Fuse::HitTestContext* args);
void MeshRendererBase__OnDraw(MeshRendererBase* __this, ::uObject* sender, ::app::Fuse::DrawArgs* args);

struct MeshRendererBase : ::app::Fuse::Entities::Component
{
    int _hitTestMode;
    ::uStrong< ::app::Fuse::Entities::Mesh*> _mesh;
    ::uStrong< ::app::Fuse::Entities::Material*> _material;

    void OnHitTest(::uObject* sender, ::app::Fuse::HitTestContext* args) { MeshRendererBase__OnHitTest(this, sender, args); }
    void OnDraw(::uObject* sender, ::app::Fuse::DrawArgs* args) { MeshRendererBase__OnDraw(this, sender, args); }
    int HitTestMode() { return MeshRendererBase__get_HitTestMode(this); }
    void HitTestMode(int value) { MeshRendererBase__set_HitTestMode(this, value); }
    ::app::Fuse::Entities::Material* Material() { return MeshRendererBase__get_Material(this); }
    void Material(::app::Fuse::Entities::Material* value) { MeshRendererBase__set_Material(this, value); }
};

}}}


#endif
