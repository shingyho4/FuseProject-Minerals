// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Entities\0.2.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.DrawArgs.h>
#include <app/Fuse.DrawContext.h>
#include <app/Fuse.DrawHandler.h>
#include <app/Fuse.Entities.Entity.h>
#include <app/Fuse.Entities.Material.h>
#include <app/Fuse.Entities.Mesh.h>
#include <app/Fuse.Entities.MeshBatchingEngine.h>
#include <app/Fuse.Entities.MeshRenderer.h>
#include <app/Fuse.Entities.MeshRendererBase.h>
#include <app/Fuse.Entities.ModelMeshCollision.h>
#include <app/Fuse.HitTestContext.h>
#include <app/Fuse.HitTestHandler.h>
#include <app/Fuse.Node.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Content.Models.ModelMesh.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float3.h>
#include <app/Uno.Float4x4.h>
#include <app/Uno.Geometry.Box.h>
#include <app/Uno.Geometry.Collision.h>
#include <app/Uno.Geometry.Ray.h>
#include <app/Uno.Int.h>
#include <app/Uno.Object.h>
#include <app/Uno.Vector.h>

namespace app {
namespace Fuse {
namespace Entities {

MeshRendererBase__uType* MeshRendererBase__typeof()
{
    static MeshRendererBase__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (MeshRendererBase__uType*)::uAllocClassType(sizeof(MeshRendererBase__uType), "Fuse.Entities.MeshRendererBase", ::app::Fuse::Entities::Component__typeof(), 0, 2);
        type->__fp_OnAdded = (void(*)(::app::Fuse::Entities::Component*, ::app::Fuse::Entities::Entity*))MeshRendererBase__OnAdded;
        type->__fp_OnRemoved = (void(*)(::app::Fuse::Entities::Component*, ::app::Fuse::Entities::Entity*))MeshRendererBase__OnRemoved;

        type->StrongRefOffsets[0] = offsetof(MeshRendererBase, _mesh);
        type->StrongRefOffsets[1] = offsetof(MeshRendererBase, _material);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_mesh";
        type->StrongRefNames[1] = "_material";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

int MeshRendererBase__get_HitTestMode(MeshRendererBase* __this)
{
    return __this->_hitTestMode;
}

void MeshRendererBase__set_HitTestMode(MeshRendererBase* __this, int value)
{
    __this->_hitTestMode = value;
}

::app::Fuse::Entities::Material* MeshRendererBase__get_Material(MeshRendererBase* __this)
{
    if (__this->_material != NULL)
    {
        return __this->_material;
    }

    ::app::Fuse::Entities::Entity* e = __this->Entity();

    while (e != NULL)
    {
        e = ::uPtr< ::app::Fuse::Entities::Entity*>(e)->ParentEntity();

        if ((e != NULL) && (e->MeshRenderer() != NULL))
        {
            return ::uPtr< ::app::Fuse::Entities::MeshRenderer*>(e->MeshRenderer())->Material();
        }
    }

    return NULL;
}

void MeshRendererBase__set_Material(MeshRendererBase* __this, ::app::Fuse::Entities::Material* value)
{
    __this->_material = value;
}

void MeshRendererBase__OnAdded(MeshRendererBase* __this, ::app::Fuse::Entities::Entity* e)
{
    ::uPtr< ::app::Fuse::Entities::Entity*>(e)->add_ComponentDraw(::uNewDelegateNonVirt(::app::Fuse::DrawHandler__typeof(), (const void*)::app::Fuse::Entities::MeshRendererBase__OnDraw, __this));
    e->add_ComponentHitTest(::uNewDelegateNonVirt(::app::Fuse::HitTestHandler__typeof(), (const void*)::app::Fuse::Entities::MeshRendererBase__OnHitTest, __this));
}

void MeshRendererBase__OnRemoved(MeshRendererBase* __this, ::app::Fuse::Entities::Entity* e)
{
    ::uPtr< ::app::Fuse::Entities::Entity*>(e)->remove_ComponentDraw(::uNewDelegateNonVirt(::app::Fuse::DrawHandler__typeof(), (const void*)::app::Fuse::Entities::MeshRendererBase__OnDraw, __this));
    e->remove_ComponentHitTest(::uNewDelegateNonVirt(::app::Fuse::HitTestHandler__typeof(), (const void*)::app::Fuse::Entities::MeshRendererBase__OnHitTest, __this));
}

void MeshRendererBase__OnHitTest(MeshRendererBase* __this, ::uObject* sender, ::app::Fuse::HitTestContext* args)
{
    if (__this->HitTestMode() == 0)
    {
        return;
    }

    ::app::Uno::Geometry::Ray objRay = ::app::Uno::Geometry::Ray__Transform(NULL, ::uPtr< ::app::Fuse::HitTestContext*>(args)->WorldRay(), ::uPtr< ::app::Fuse::Entities::Entity*>(__this->Entity())->WorldTransformInverse());
    float distance = float();
    bool hit = ::app::Uno::Geometry::Collision__RayIntersectsBox(NULL, objRay, ::uPtr< ::app::Fuse::Entities::Mesh*>(__this->_mesh)->BoundingBox(), &distance);

    if (hit && (__this->HitTestMode() == 2))
    {
        hit = ::app::Fuse::Entities::ModelMeshCollision__RayIntersectsModelMesh(NULL, objRay, ::uPtr< ::app::Fuse::Entities::Mesh*>(__this->_mesh)->ModelMesh(), &distance);
    }

    if (hit)
    {
        ::app::Uno::Float3 hitPoint = ::app::Uno::Vector__TransformCoordinate(NULL, ::app::Uno::Float3__op_Addition(NULL, objRay.Position, ::app::Uno::Float3__op_Multiply(NULL, objRay.Direction, distance)), ::uPtr< ::app::Fuse::Entities::Entity*>(__this->Entity())->WorldTransform());
        float dist = ::app::Uno::Vector__Length_1(NULL, ::app::Uno::Float3__op_Subtraction(NULL, hitPoint, ::uPtr< ::app::Fuse::HitTestContext*>(args)->WorldRay().Position));
        args->Hit_1((::app::Fuse::Node*)__this->Entity(), dist);
    }
}

void MeshRendererBase__OnDraw(MeshRendererBase* __this, ::uObject* sender, ::app::Fuse::DrawArgs* args)
{
    ::app::Fuse::DrawContext* dc = ::uPtr< ::app::Fuse::DrawArgs*>(args)->Context();

    if (__this->_mesh == NULL)
    {
        return;
    }

    if (__this->Material() == NULL)
    {
        return;
    }

    ::app::Uno::Float4x4 m = ::uPtr< ::app::Fuse::Entities::Entity*>(__this->Entity())->WorldTransform();

    if (!::uPtr< ::app::Fuse::Entities::Material*>(__this->Material())->Draw(__this->_mesh, m))
    {
        ::uPtr< ::app::Fuse::Entities::MeshBatchingEngine*>(::app::Fuse::Entities::MeshBatchingEngine__get_Singleton(NULL))->Draw(dc, __this->_mesh, m, __this->Material());
        ::uPtr< ::app::Fuse::DrawContext*>(dc)->Flush();
    }
}

}}}
