// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Entities\0.2.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Entities.ModelMeshCollision.h>
#include <app/Fuse.Entities.ModelMeshCollision_Direct.h>
#include <app/Fuse.Entities.ModelMeshCollision_Indexed.h>
#include <app/Fuse.Entities.TriangleMeshIntersecter.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Content.Models.IndexArray.h>
#include <app/Uno.Content.Models.ModelMesh.h>
#include <app/Uno.Content.Models.VertexAttributeArray.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Float.h>
#include <app/Uno.Geometry.Ray.h>
#include <app/Uno.Int.h>
#include <app/Uno.String.h>

namespace app {
namespace Fuse {
namespace Entities {

ModelMeshCollision__uType* ModelMeshCollision__typeof()
{
    static ModelMeshCollision__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (ModelMeshCollision__uType*)::uAllocClassType(sizeof(ModelMeshCollision__uType), "Fuse.Entities.ModelMeshCollision", ::uObject__typeof());
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

bool ModelMeshCollision__RayIntersectsModelMesh(::uStatic* __this, ::app::Uno::Geometry::Ray objRay, ::app::Uno::Content::Models::ModelMesh* modelMesh, float* outDistance)
{
    if (modelMesh == NULL)
    {
        U_THROW(::app::Uno::Exception__New_1(NULL, ::uGetConstString("modelMesh can not be null")));
    }

    bool useIndices = ::uPtr< ::app::Uno::Content::Models::ModelMesh*>(modelMesh)->IndexCount() > 0;
    return useIndices ? ::uPtr< ::app::Fuse::Entities::ModelMeshCollision_Indexed*>(::app::Fuse::Entities::ModelMeshCollision_Indexed__New_1(NULL, modelMesh->Positions(), modelMesh->Indices(), modelMesh->IndexCount()))->IntersectsRay(objRay, outDistance) : ::uPtr< ::app::Fuse::Entities::ModelMeshCollision_Direct*>(::app::Fuse::Entities::ModelMeshCollision_Direct__New_1(NULL, modelMesh->Positions(), modelMesh->VertexCount()))->IntersectsRay(objRay, outDistance);
}

}}}
