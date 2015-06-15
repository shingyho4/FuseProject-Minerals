// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Entities\0.2.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ENTITIES_ENTITY_H__
#define __APP_FUSE_ENTITIES_ENTITY_H__

#include <app/Fuse.ICamera.h>
#include <app/Fuse.INodeParent.h>
#include <app/Fuse.IResourceParent.h>
#include <app/Fuse.Node.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Entities { struct Component; } } }
namespace app { namespace Fuse { namespace Entities { struct Frustum; } } }
namespace app { namespace Fuse { namespace Entities { struct MeshRenderer; } } }
namespace app { namespace Fuse { namespace Entities { struct Transform3D; } } }
namespace app { namespace Fuse { struct DrawContext; } }
namespace app { namespace Fuse { struct HitTestContext; } }
namespace app { namespace Uno { namespace Collections { struct ObservableList__Fuse_Entities_Component; } } }
namespace app { namespace Uno { namespace Collections { struct ObservableList__Fuse_Entities_Entity; } } }
namespace app { namespace Uno { struct Float3; } }
namespace app { namespace Uno { struct Float4x4; } }

namespace app {
namespace Fuse {
namespace Entities {

struct Entity;

struct Entity__uType : ::app::Fuse::Node__uType
{
    ::app::Fuse::ICamera __interface_2;
};

Entity__uType* Entity__typeof();

::app::Uno::Float4x4 Entity__Fuse_ICamera_get_ViewTransform(Entity* __this);
::app::Uno::Float4x4 Entity__Fuse_ICamera_get_ProjectionTransform(Entity* __this);
::app::Uno::Float4x4 Entity__Fuse_ICamera_get_ViewProjectionTransform(Entity* __this);
::app::Uno::Float3 Entity__Fuse_ICamera_get_WorldPosition(Entity* __this);
float Entity__get_Aspect(Entity* __this);
::uObject* Entity__get_Children(Entity* __this);
bool Entity__get_HasChildren(Entity* __this);
::uObject* Entity__get_Components(Entity* __this);
Entity* Entity__get_ParentEntity(Entity* __this);
::app::Uno::Float3 Entity__get_WorldPosition(Entity* __this);
void Entity__set_WorldPosition(Entity* __this, ::app::Uno::Float3 value);
::app::Fuse::Entities::Frustum* Entity__get_Frustum(Entity* __this);
::app::Fuse::Entities::Transform3D* Entity__get_Transform(Entity* __this);
::app::Fuse::Entities::MeshRenderer* Entity__get_MeshRenderer(Entity* __this);
void Entity__set_MeshRenderer(Entity* __this, ::app::Fuse::Entities::MeshRenderer* value);
int Entity__get_SubNodeCount(Entity* __this);
void Entity__EnsureFrustum(Entity* __this);
void Entity__OnChildAdded(Entity* __this, Entity* c);
void Entity__OnChildRemoved(Entity* __this, Entity* c);
void Entity__OnComponentAdded(Entity* __this, ::app::Fuse::Entities::Component* c);
void Entity__OnComponentRemoved(Entity* __this, ::app::Fuse::Entities::Component* c);
void Entity__Draw(Entity* __this, ::app::Fuse::DrawContext* dc);
void Entity__OnHitTest(Entity* __this, ::app::Fuse::HitTestContext* htc);
::app::Fuse::Node* Entity__GetSubNode(Entity* __this, int index);
void Entity__add_ComponentDraw(Entity* __this, ::uDelegate* value);
void Entity__remove_ComponentDraw(Entity* __this, ::uDelegate* value);
void Entity__add_ComponentHitTest(Entity* __this, ::uDelegate* value);
void Entity__remove_ComponentHitTest(Entity* __this, ::uDelegate* value);

struct Entity : ::app::Fuse::Node
{
    ::uStrong< ::app::Uno::Collections::ObservableList__Fuse_Entities_Entity*> _children;
    ::uStrong< ::app::Uno::Collections::ObservableList__Fuse_Entities_Component*> _components;
    ::uStrong< ::uDelegate*> ComponentDraw;
    ::uStrong< ::uDelegate*> ComponentHitTest;
    ::uStrong< ::app::Fuse::Entities::MeshRenderer*> _MeshRenderer;

    void EnsureFrustum() { Entity__EnsureFrustum(this); }
    void OnChildAdded(Entity* c) { Entity__OnChildAdded(this, c); }
    void OnChildRemoved(Entity* c) { Entity__OnChildRemoved(this, c); }
    void OnComponentAdded(::app::Fuse::Entities::Component* c) { Entity__OnComponentAdded(this, c); }
    void OnComponentRemoved(::app::Fuse::Entities::Component* c) { Entity__OnComponentRemoved(this, c); }
    void add_ComponentDraw(::uDelegate* value) { Entity__add_ComponentDraw(this, value); }
    void remove_ComponentDraw(::uDelegate* value) { Entity__remove_ComponentDraw(this, value); }
    void add_ComponentHitTest(::uDelegate* value) { Entity__add_ComponentHitTest(this, value); }
    void remove_ComponentHitTest(::uDelegate* value) { Entity__remove_ComponentHitTest(this, value); }
    float Aspect() { return Entity__get_Aspect(this); }
    ::uObject* Children() { return Entity__get_Children(this); }
    bool HasChildren() { return Entity__get_HasChildren(this); }
    ::uObject* Components() { return Entity__get_Components(this); }
    Entity* ParentEntity() { return Entity__get_ParentEntity(this); }
    ::app::Uno::Float3 WorldPosition();
    void WorldPosition(::app::Uno::Float3 value);
    ::app::Fuse::Entities::Frustum* Frustum() { return Entity__get_Frustum(this); }
    ::app::Fuse::Entities::Transform3D* Transform() { return Entity__get_Transform(this); }
    ::app::Fuse::Entities::MeshRenderer* MeshRenderer() { return Entity__get_MeshRenderer(this); }
    void MeshRenderer(::app::Fuse::Entities::MeshRenderer* value) { Entity__set_MeshRenderer(this, value); }
};

}}}

#include <app/Uno.Bool.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float3.h>
#include <app/Uno.Float4x4.h>
#include <app/Uno.Int.h>

namespace app {
namespace Fuse {
namespace Entities {

inline ::app::Uno::Float3 Entity::WorldPosition() { return Entity__get_WorldPosition(this); }
inline void Entity::WorldPosition(::app::Uno::Float3 value) { Entity__set_WorldPosition(this, value); }

}}}


#endif
