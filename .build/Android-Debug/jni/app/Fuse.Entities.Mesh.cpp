// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Entities\0.2.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Drawing.Batching.Batch.h>
#include <app/Fuse.Drawing.Batching.BatchHelpers.h>
#include <app/Fuse.Drawing.Batching.MeshBatcher.h>
#include <app/Fuse.Entities.Mesh.h>
#include <app/Fuse.Entities.ModelMeshHelpers.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Collections.EnumerableExtensions.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Drawing_Batching_Batch.h>
#include <app/Uno.Content.Models.IndexArray.h>
#include <app/Uno.Content.Models.ModelDrawable.h>
#include <app/Uno.Content.Models.ModelMesh.h>
#include <app/Uno.Int.h>

namespace app {
namespace Fuse {
namespace Entities {

Mesh__uType* Mesh__typeof()
{
    static Mesh__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Mesh__uType*)::uAllocClassType(sizeof(Mesh__uType), "Fuse.Entities.Mesh", ::uObject__typeof(), 0, 3);
        type->StrongRefOffsets[0] = offsetof(Mesh, _drawable);
        type->StrongRefOffsets[1] = offsetof(Mesh, batches);
        type->StrongRefOffsets[2] = offsetof(Mesh, batcher);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_drawable";
        type->StrongRefNames[1] = "batches";
        type->StrongRefNames[2] = "batcher";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Uno::Content::Models::ModelMesh* Mesh__get_ModelMesh(Mesh* __this)
{
    return ::uPtr< ::app::Uno::Content::Models::ModelDrawable*>(__this->_drawable)->Mesh();
}

::app::Uno::Geometry::Box Mesh__get_BoundingBox(Mesh* __this)
{
    if (__this->_meshBoxDirty)
    {
        __this->_meshBox = ::app::Fuse::Entities::ModelMeshHelpers__CalculateAABB(NULL, __this->ModelMesh());
        __this->_meshBoxDirty = false;
    }

    return __this->_meshBox;
}

::uArray* Mesh__get_Batches(Mesh* __this)
{
    if (__this->isDirty)
    {
        __this->Flush();
    }

    ::uArray* ind_124 = __this->batches;
    return (ind_124 != NULL) ? ind_124 : ::app::Uno::Collections::EnumerableExtensions__ToArray__Fuse_Drawing_Batching_Batch(NULL, ::uPtr< ::app::Fuse::Drawing::Batching::MeshBatcher*>(__this->batcher)->Batches());
}

void Mesh__Flush(Mesh* __this)
{
    ::uArray* array_123;

    if (!__this->isDirty)
    {
        return;
    }

    if (((__this->ModelMesh() != NULL) && (::uPtr< ::app::Uno::Content::Models::ModelMesh*>(__this->ModelMesh())->Indices() != NULL)) && (::uPtr< ::app::Uno::Content::Models::IndexArray*>(::uPtr< ::app::Uno::Content::Models::ModelMesh*>(__this->ModelMesh())->Indices())->Type() == 4))
    {
        __this->batcher = ::app::Fuse::Drawing::Batching::MeshBatcher__New_1(NULL);
        ::uPtr< ::app::Fuse::Drawing::Batching::MeshBatcher*>(__this->batcher)->AddMesh(__this->ModelMesh());
        ::uPtr< ::app::Fuse::Drawing::Batching::MeshBatcher*>(__this->batcher)->Flush();
        __this->batches = NULL;
    }
    else
    {
        __this->batcher = NULL;
        __this->batches = (array_123 = ::uNewArray(::app::Fuse::Drawing::Batching::Batch__typeof(), 1), ::uPtr< ::uArray*>(array_123)->ItemStrong< ::app::Fuse::Drawing::Batching::Batch*>(0) = ::app::Fuse::Drawing::Batching::BatchHelpers__CreateSingleBatch(NULL, __this->ModelMesh()), array_123);
    }

    __this->isDirty = false;
}

}}}
