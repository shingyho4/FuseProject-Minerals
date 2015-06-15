// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Batching\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Drawing.Batching.Batch.h>
#include <app/Fuse.Drawing.Batching.BatchIndexBuffer.h>
#include <app/Fuse.Drawing.Batching.BatchVertexBuffer.h>
#include <app/Uno.Graphics.IndexBuffer.h>

namespace app {
namespace Fuse {
namespace Drawing {
namespace Batching {

Batch__uType* Batch__typeof()
{
    static Batch__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Batch__uType*)::uAllocClassType(sizeof(Batch__uType), "Fuse.Drawing.Batching.Batch", ::uObject__typeof(), 0, 17);
        type->StrongRefOffsets[0] = offsetof(Batch, positions);
        type->StrongRefOffsets[1] = offsetof(Batch, texCoord0s);
        type->StrongRefOffsets[2] = offsetof(Batch, texCoord1s);
        type->StrongRefOffsets[3] = offsetof(Batch, texCoord2s);
        type->StrongRefOffsets[4] = offsetof(Batch, texCoord3s);
        type->StrongRefOffsets[5] = offsetof(Batch, texCoord4s);
        type->StrongRefOffsets[6] = offsetof(Batch, texCoord5s);
        type->StrongRefOffsets[7] = offsetof(Batch, texCoord6s);
        type->StrongRefOffsets[8] = offsetof(Batch, texCoord7s);
        type->StrongRefOffsets[9] = offsetof(Batch, normals);
        type->StrongRefOffsets[10] = offsetof(Batch, binormals);
        type->StrongRefOffsets[11] = offsetof(Batch, tangents);
        type->StrongRefOffsets[12] = offsetof(Batch, colors);
        type->StrongRefOffsets[13] = offsetof(Batch, instanceIndex);
        type->StrongRefOffsets[14] = offsetof(Batch, boneIndices);
        type->StrongRefOffsets[15] = offsetof(Batch, boneWeights);
        type->StrongRefOffsets[16] = offsetof(Batch, indexBuffer);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "positions";
        type->StrongRefNames[1] = "texCoord0s";
        type->StrongRefNames[2] = "texCoord1s";
        type->StrongRefNames[3] = "texCoord2s";
        type->StrongRefNames[4] = "texCoord3s";
        type->StrongRefNames[5] = "texCoord4s";
        type->StrongRefNames[6] = "texCoord5s";
        type->StrongRefNames[7] = "texCoord6s";
        type->StrongRefNames[8] = "texCoord7s";
        type->StrongRefNames[9] = "normals";
        type->StrongRefNames[10] = "binormals";
        type->StrongRefNames[11] = "tangents";
        type->StrongRefNames[12] = "colors";
        type->StrongRefNames[13] = "instanceIndex";
        type->StrongRefNames[14] = "boneIndices";
        type->StrongRefNames[15] = "boneWeights";
        type->StrongRefNames[16] = "indexBuffer";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Fuse::Drawing::Batching::BatchVertexBuffer* Batch__get_Positions(Batch* __this)
{
    ::app::Fuse::Drawing::Batching::BatchVertexBuffer* ind_123 = __this->positions;
    return (ind_123 != NULL) ? ind_123 : (__this->positions = ::app::Fuse::Drawing::Batching::BatchVertexBuffer__New_1(NULL, 3, __this->maxVertices, __this->staticBatch));
}

void Batch__set_Positions(Batch* __this, ::app::Fuse::Drawing::Batching::BatchVertexBuffer* value)
{
    __this->positions = value;
}

::app::Fuse::Drawing::Batching::BatchVertexBuffer* Batch__get_TexCoord0s(Batch* __this)
{
    ::app::Fuse::Drawing::Batching::BatchVertexBuffer* ind_124 = __this->texCoord0s;
    return (ind_124 != NULL) ? ind_124 : (__this->texCoord0s = ::app::Fuse::Drawing::Batching::BatchVertexBuffer__New_1(NULL, 2, __this->maxVertices, __this->staticBatch));
}

void Batch__set_TexCoord0s(Batch* __this, ::app::Fuse::Drawing::Batching::BatchVertexBuffer* value)
{
    __this->texCoord0s = value;
}

::app::Fuse::Drawing::Batching::BatchVertexBuffer* Batch__get_TexCoord1s(Batch* __this)
{
    ::app::Fuse::Drawing::Batching::BatchVertexBuffer* ind_125 = __this->texCoord1s;
    return (ind_125 != NULL) ? ind_125 : (__this->texCoord1s = ::app::Fuse::Drawing::Batching::BatchVertexBuffer__New_1(NULL, 2, __this->maxVertices, __this->staticBatch));
}

void Batch__set_TexCoord1s(Batch* __this, ::app::Fuse::Drawing::Batching::BatchVertexBuffer* value)
{
    __this->texCoord1s = value;
}

::app::Fuse::Drawing::Batching::BatchVertexBuffer* Batch__get_TexCoord2s(Batch* __this)
{
    ::app::Fuse::Drawing::Batching::BatchVertexBuffer* ind_126 = __this->texCoord2s;
    return (ind_126 != NULL) ? ind_126 : (__this->texCoord2s = ::app::Fuse::Drawing::Batching::BatchVertexBuffer__New_1(NULL, 2, __this->maxVertices, __this->staticBatch));
}

void Batch__set_TexCoord2s(Batch* __this, ::app::Fuse::Drawing::Batching::BatchVertexBuffer* value)
{
    __this->texCoord2s = value;
}

::app::Fuse::Drawing::Batching::BatchVertexBuffer* Batch__get_TexCoord3s(Batch* __this)
{
    ::app::Fuse::Drawing::Batching::BatchVertexBuffer* ind_127 = __this->texCoord3s;
    return (ind_127 != NULL) ? ind_127 : (__this->texCoord3s = ::app::Fuse::Drawing::Batching::BatchVertexBuffer__New_1(NULL, 2, __this->maxVertices, __this->staticBatch));
}

void Batch__set_TexCoord3s(Batch* __this, ::app::Fuse::Drawing::Batching::BatchVertexBuffer* value)
{
    __this->texCoord3s = value;
}

::app::Fuse::Drawing::Batching::BatchVertexBuffer* Batch__get_TexCoord4s(Batch* __this)
{
    ::app::Fuse::Drawing::Batching::BatchVertexBuffer* ind_128 = __this->texCoord4s;
    return (ind_128 != NULL) ? ind_128 : (__this->texCoord4s = ::app::Fuse::Drawing::Batching::BatchVertexBuffer__New_1(NULL, 2, __this->maxVertices, __this->staticBatch));
}

void Batch__set_TexCoord4s(Batch* __this, ::app::Fuse::Drawing::Batching::BatchVertexBuffer* value)
{
    __this->texCoord4s = value;
}

::app::Fuse::Drawing::Batching::BatchVertexBuffer* Batch__get_TexCoord5s(Batch* __this)
{
    ::app::Fuse::Drawing::Batching::BatchVertexBuffer* ind_129 = __this->texCoord5s;
    return (ind_129 != NULL) ? ind_129 : (__this->texCoord5s = ::app::Fuse::Drawing::Batching::BatchVertexBuffer__New_1(NULL, 2, __this->maxVertices, __this->staticBatch));
}

void Batch__set_TexCoord5s(Batch* __this, ::app::Fuse::Drawing::Batching::BatchVertexBuffer* value)
{
    __this->texCoord5s = value;
}

::app::Fuse::Drawing::Batching::BatchVertexBuffer* Batch__get_TexCoord6s(Batch* __this)
{
    ::app::Fuse::Drawing::Batching::BatchVertexBuffer* ind_130 = __this->texCoord6s;
    return (ind_130 != NULL) ? ind_130 : (__this->texCoord6s = ::app::Fuse::Drawing::Batching::BatchVertexBuffer__New_1(NULL, 2, __this->maxVertices, __this->staticBatch));
}

void Batch__set_TexCoord6s(Batch* __this, ::app::Fuse::Drawing::Batching::BatchVertexBuffer* value)
{
    __this->texCoord6s = value;
}

::app::Fuse::Drawing::Batching::BatchVertexBuffer* Batch__get_TexCoord7s(Batch* __this)
{
    ::app::Fuse::Drawing::Batching::BatchVertexBuffer* ind_131 = __this->texCoord7s;
    return (ind_131 != NULL) ? ind_131 : (__this->texCoord7s = ::app::Fuse::Drawing::Batching::BatchVertexBuffer__New_1(NULL, 2, __this->maxVertices, __this->staticBatch));
}

void Batch__set_TexCoord7s(Batch* __this, ::app::Fuse::Drawing::Batching::BatchVertexBuffer* value)
{
    __this->texCoord7s = value;
}

::app::Fuse::Drawing::Batching::BatchVertexBuffer* Batch__get_Normals(Batch* __this)
{
    ::app::Fuse::Drawing::Batching::BatchVertexBuffer* ind_132 = __this->normals;
    return (ind_132 != NULL) ? ind_132 : (__this->normals = ::app::Fuse::Drawing::Batching::BatchVertexBuffer__New_1(NULL, 3, __this->maxVertices, __this->staticBatch));
}

void Batch__set_Normals(Batch* __this, ::app::Fuse::Drawing::Batching::BatchVertexBuffer* value)
{
    __this->normals = value;
}

::app::Fuse::Drawing::Batching::BatchVertexBuffer* Batch__get_Binormals(Batch* __this)
{
    ::app::Fuse::Drawing::Batching::BatchVertexBuffer* ind_133 = __this->binormals;
    return (ind_133 != NULL) ? ind_133 : (__this->binormals = ::app::Fuse::Drawing::Batching::BatchVertexBuffer__New_1(NULL, 3, __this->maxVertices, __this->staticBatch));
}

void Batch__set_Binormals(Batch* __this, ::app::Fuse::Drawing::Batching::BatchVertexBuffer* value)
{
    __this->binormals = value;
}

::app::Fuse::Drawing::Batching::BatchVertexBuffer* Batch__get_Tangents(Batch* __this)
{
    ::app::Fuse::Drawing::Batching::BatchVertexBuffer* ind_134 = __this->tangents;
    return (ind_134 != NULL) ? ind_134 : (__this->tangents = ::app::Fuse::Drawing::Batching::BatchVertexBuffer__New_1(NULL, 4, __this->maxVertices, __this->staticBatch));
}

void Batch__set_Tangents(Batch* __this, ::app::Fuse::Drawing::Batching::BatchVertexBuffer* value)
{
    __this->tangents = value;
}

::app::Fuse::Drawing::Batching::BatchVertexBuffer* Batch__get_Colors(Batch* __this)
{
    ::app::Fuse::Drawing::Batching::BatchVertexBuffer* ind_135 = __this->colors;
    return (ind_135 != NULL) ? ind_135 : (__this->colors = ::app::Fuse::Drawing::Batching::BatchVertexBuffer__New_1(NULL, 4, __this->maxVertices, __this->staticBatch));
}

void Batch__set_Colors(Batch* __this, ::app::Fuse::Drawing::Batching::BatchVertexBuffer* value)
{
    __this->colors = value;
}

::app::Fuse::Drawing::Batching::BatchVertexBuffer* Batch__get_InstanceIndices(Batch* __this)
{
    ::app::Fuse::Drawing::Batching::BatchVertexBuffer* ind_136 = __this->instanceIndex;
    return (ind_136 != NULL) ? ind_136 : (__this->instanceIndex = ::app::Fuse::Drawing::Batching::BatchVertexBuffer__New_1(NULL, 11, __this->maxVertices, __this->staticBatch));
}

void Batch__set_InstanceIndices(Batch* __this, ::app::Fuse::Drawing::Batching::BatchVertexBuffer* value)
{
    __this->instanceIndex = value;
}

::app::Fuse::Drawing::Batching::BatchVertexBuffer* Batch__get_BoneIndexBuffer(Batch* __this)
{
    ::app::Fuse::Drawing::Batching::BatchVertexBuffer* ind_137 = __this->boneIndices;
    return (ind_137 != NULL) ? ind_137 : (__this->boneIndices = ::app::Fuse::Drawing::Batching::BatchVertexBuffer__New_1(NULL, 19, __this->maxVertices, __this->staticBatch));
}

void Batch__set_BoneIndexBuffer(Batch* __this, ::app::Fuse::Drawing::Batching::BatchVertexBuffer* value)
{
    __this->boneIndices = value;
}

::app::Fuse::Drawing::Batching::BatchVertexBuffer* Batch__get_BoneWeightBuffer(Batch* __this)
{
    ::app::Fuse::Drawing::Batching::BatchVertexBuffer* ind_138 = __this->boneWeights;
    return (ind_138 != NULL) ? ind_138 : (__this->boneWeights = ::app::Fuse::Drawing::Batching::BatchVertexBuffer__New_1(NULL, 20, __this->maxVertices, __this->staticBatch));
}

void Batch__set_BoneWeightBuffer(Batch* __this, ::app::Fuse::Drawing::Batching::BatchVertexBuffer* value)
{
    __this->boneWeights = value;
}

int Batch__get_VertexCount(Batch* __this)
{
    return __this->hasExplicitVertexCount ? __this->explicitVertexCount : __this->maxIndices;
}

void Batch__set_VertexCount(Batch* __this, int value)
{
    __this->hasExplicitVertexCount = true;
    __this->explicitVertexCount = value;
}

::app::Fuse::Drawing::Batching::BatchIndexBuffer* Batch__get_Indices(Batch* __this)
{
    ::app::Fuse::Drawing::Batching::BatchIndexBuffer* ind_147 = __this->indexBuffer;
    return (ind_147 != NULL) ? ind_147 : (__this->indexBuffer = ::app::Fuse::Drawing::Batching::BatchIndexBuffer__New_1(NULL, 2, __this->maxIndices, __this->staticBatch));
}

void Batch__set_Indices(Batch* __this, ::app::Fuse::Drawing::Batching::BatchIndexBuffer* value)
{
    __this->indexBuffer = value;
}

::app::Uno::Graphics::IndexBuffer* Batch__get_IndexBuffer(Batch* __this)
{
    return (__this->indexBuffer == NULL) ? (::app::Uno::Graphics::IndexBuffer*)NULL : ::uPtr< ::app::Fuse::Drawing::Batching::BatchIndexBuffer*>(__this->Indices())->IndexBuffer();
}

int Batch__get_IndexType(Batch* __this)
{
    return (__this->indexBuffer == NULL) ? 0 : ::uPtr< ::app::Fuse::Drawing::Batching::BatchIndexBuffer*>(__this->Indices())->DataType();
}

void Batch___ObjInit(Batch* __this, int maxVertices, int maxIndices, bool staticBatch)
{
    __this->maxVertices = maxVertices;
    __this->maxIndices = maxIndices;
    __this->staticBatch = staticBatch;
}

Batch* Batch__New_1(::uStatic* __this, int maxVertices, int maxIndices, bool staticBatch)
{
    Batch* inst = (::app::Fuse::Drawing::Batching::Batch*)::uAllocObject(sizeof(::app::Fuse::Drawing::Batching::Batch), ::app::Fuse::Drawing::Batching::Batch__typeof());
    inst->_ObjInit(maxVertices, maxIndices, staticBatch);
    return inst;
}

}}}}
