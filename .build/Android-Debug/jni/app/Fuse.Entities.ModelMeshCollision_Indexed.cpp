// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Entities\0.2.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Entities.ModelMeshCollision_Indexed.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Content.Models.IndexArray.h>
#include <app/Uno.Content.Models.VertexAttributeArray.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float3.h>
#include <app/Uno.Float4.h>
#include <app/Uno.String.h>

namespace app {
namespace Fuse {
namespace Entities {

ModelMeshCollision_Indexed__uType* ModelMeshCollision_Indexed__typeof()
{
    static ModelMeshCollision_Indexed__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (ModelMeshCollision_Indexed__uType*)::uAllocClassType(sizeof(ModelMeshCollision_Indexed__uType), "Fuse.Entities.ModelMeshCollision.Indexed", ::app::Fuse::Entities::TriangleMeshIntersecter__typeof(), 0, 2);
        type->__fp_GetTriangle = (::app::Uno::Geometry::Triangle(*)(::app::Fuse::Entities::TriangleMeshIntersecter*, int))ModelMeshCollision_Indexed__GetTriangle;

        type->StrongRefOffsets[0] = offsetof(ModelMeshCollision_Indexed, _positions);
        type->StrongRefOffsets[1] = offsetof(ModelMeshCollision_Indexed, _indices);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_positions";
        type->StrongRefNames[1] = "_indices";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Uno::Geometry::Triangle ModelMeshCollision_Indexed__GetTriangle(ModelMeshCollision_Indexed* __this, int t)
{
    ::app::Uno::Float4 ind_123 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_124 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_125 = ::app::Uno::Float4();
    int i = t * 3;
    return ::app::Uno::Geometry::Triangle__New_1(NULL, (ind_123 = ::uPtr< ::app::Uno::Content::Models::VertexAttributeArray*>(__this->_positions)->GetFloat4(::uPtr< ::app::Uno::Content::Models::IndexArray*>(__this->_indices)->GetInt(i)), ::app::Uno::Float3__New_2(NULL, ind_123.X, ind_123.Y, ind_123.Z)), (ind_124 = ::uPtr< ::app::Uno::Content::Models::VertexAttributeArray*>(__this->_positions)->GetFloat4(::uPtr< ::app::Uno::Content::Models::IndexArray*>(__this->_indices)->GetInt(i + 1)), ::app::Uno::Float3__New_2(NULL, ind_124.X, ind_124.Y, ind_124.Z)), (ind_125 = ::uPtr< ::app::Uno::Content::Models::VertexAttributeArray*>(__this->_positions)->GetFloat4(::uPtr< ::app::Uno::Content::Models::IndexArray*>(__this->_indices)->GetInt(i + 2)), ::app::Uno::Float3__New_2(NULL, ind_125.X, ind_125.Y, ind_125.Z)));
}

void ModelMeshCollision_Indexed___ObjInit_1(ModelMeshCollision_Indexed* __this, ::app::Uno::Content::Models::VertexAttributeArray* positions, ::app::Uno::Content::Models::IndexArray* indices, int indexCount)
{
    ::app::Fuse::Entities::TriangleMeshIntersecter___ObjInit(__this, indexCount / 3);

    if (positions == NULL)
    {
        U_THROW(::app::Uno::Exception__New_1(NULL, ::uGetConstString("positions can not be null")));
    }

    if (indices == NULL)
    {
        U_THROW(::app::Uno::Exception__New_1(NULL, ::uGetConstString("indices can not be null")));
    }

    __this->_positions = positions;
    __this->_indices = indices;
}

ModelMeshCollision_Indexed* ModelMeshCollision_Indexed__New_1(::uStatic* __this, ::app::Uno::Content::Models::VertexAttributeArray* positions, ::app::Uno::Content::Models::IndexArray* indices, int indexCount)
{
    ModelMeshCollision_Indexed* inst = (::app::Fuse::Entities::ModelMeshCollision_Indexed*)::uAllocObject(sizeof(::app::Fuse::Entities::ModelMeshCollision_Indexed), ::app::Fuse::Entities::ModelMeshCollision_Indexed__typeof());
    inst->_ObjInit_1(positions, indices, indexCount);
    return inst;
}

}}}
