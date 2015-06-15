// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Batching\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_DRAWING_BATCHING_BATCH_H__
#define __APP_FUSE_DRAWING_BATCHING_BATCH_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Drawing { namespace Batching { struct BatchIndexBuffer; } } } }
namespace app { namespace Fuse { namespace Drawing { namespace Batching { struct BatchVertexBuffer; } } } }
namespace app { namespace Uno { namespace Graphics { struct IndexBuffer; } } }

namespace app {
namespace Fuse {
namespace Drawing {
namespace Batching {

struct Batch;

struct Batch__uType : ::uClassType
{
};

Batch__uType* Batch__typeof();

::app::Fuse::Drawing::Batching::BatchVertexBuffer* Batch__get_Positions(Batch* __this);
void Batch__set_Positions(Batch* __this, ::app::Fuse::Drawing::Batching::BatchVertexBuffer* value);
::app::Fuse::Drawing::Batching::BatchVertexBuffer* Batch__get_TexCoord0s(Batch* __this);
void Batch__set_TexCoord0s(Batch* __this, ::app::Fuse::Drawing::Batching::BatchVertexBuffer* value);
::app::Fuse::Drawing::Batching::BatchVertexBuffer* Batch__get_TexCoord1s(Batch* __this);
void Batch__set_TexCoord1s(Batch* __this, ::app::Fuse::Drawing::Batching::BatchVertexBuffer* value);
::app::Fuse::Drawing::Batching::BatchVertexBuffer* Batch__get_TexCoord2s(Batch* __this);
void Batch__set_TexCoord2s(Batch* __this, ::app::Fuse::Drawing::Batching::BatchVertexBuffer* value);
::app::Fuse::Drawing::Batching::BatchVertexBuffer* Batch__get_TexCoord3s(Batch* __this);
void Batch__set_TexCoord3s(Batch* __this, ::app::Fuse::Drawing::Batching::BatchVertexBuffer* value);
::app::Fuse::Drawing::Batching::BatchVertexBuffer* Batch__get_TexCoord4s(Batch* __this);
void Batch__set_TexCoord4s(Batch* __this, ::app::Fuse::Drawing::Batching::BatchVertexBuffer* value);
::app::Fuse::Drawing::Batching::BatchVertexBuffer* Batch__get_TexCoord5s(Batch* __this);
void Batch__set_TexCoord5s(Batch* __this, ::app::Fuse::Drawing::Batching::BatchVertexBuffer* value);
::app::Fuse::Drawing::Batching::BatchVertexBuffer* Batch__get_TexCoord6s(Batch* __this);
void Batch__set_TexCoord6s(Batch* __this, ::app::Fuse::Drawing::Batching::BatchVertexBuffer* value);
::app::Fuse::Drawing::Batching::BatchVertexBuffer* Batch__get_TexCoord7s(Batch* __this);
void Batch__set_TexCoord7s(Batch* __this, ::app::Fuse::Drawing::Batching::BatchVertexBuffer* value);
::app::Fuse::Drawing::Batching::BatchVertexBuffer* Batch__get_Normals(Batch* __this);
void Batch__set_Normals(Batch* __this, ::app::Fuse::Drawing::Batching::BatchVertexBuffer* value);
::app::Fuse::Drawing::Batching::BatchVertexBuffer* Batch__get_Binormals(Batch* __this);
void Batch__set_Binormals(Batch* __this, ::app::Fuse::Drawing::Batching::BatchVertexBuffer* value);
::app::Fuse::Drawing::Batching::BatchVertexBuffer* Batch__get_Tangents(Batch* __this);
void Batch__set_Tangents(Batch* __this, ::app::Fuse::Drawing::Batching::BatchVertexBuffer* value);
::app::Fuse::Drawing::Batching::BatchVertexBuffer* Batch__get_Colors(Batch* __this);
void Batch__set_Colors(Batch* __this, ::app::Fuse::Drawing::Batching::BatchVertexBuffer* value);
::app::Fuse::Drawing::Batching::BatchVertexBuffer* Batch__get_InstanceIndices(Batch* __this);
void Batch__set_InstanceIndices(Batch* __this, ::app::Fuse::Drawing::Batching::BatchVertexBuffer* value);
::app::Fuse::Drawing::Batching::BatchVertexBuffer* Batch__get_BoneIndexBuffer(Batch* __this);
void Batch__set_BoneIndexBuffer(Batch* __this, ::app::Fuse::Drawing::Batching::BatchVertexBuffer* value);
::app::Fuse::Drawing::Batching::BatchVertexBuffer* Batch__get_BoneWeightBuffer(Batch* __this);
void Batch__set_BoneWeightBuffer(Batch* __this, ::app::Fuse::Drawing::Batching::BatchVertexBuffer* value);
int Batch__get_VertexCount(Batch* __this);
void Batch__set_VertexCount(Batch* __this, int value);
::app::Fuse::Drawing::Batching::BatchIndexBuffer* Batch__get_Indices(Batch* __this);
void Batch__set_Indices(Batch* __this, ::app::Fuse::Drawing::Batching::BatchIndexBuffer* value);
::app::Uno::Graphics::IndexBuffer* Batch__get_IndexBuffer(Batch* __this);
int Batch__get_IndexType(Batch* __this);
void Batch___ObjInit(Batch* __this, int maxVertices, int maxIndices, bool staticBatch);
Batch* Batch__New_1(::uStatic* __this, int maxVertices, int maxIndices, bool staticBatch);

struct Batch : ::uObject
{
    int maxVertices;
    int maxIndices;
    bool staticBatch;
    ::uStrong< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*> positions;
    ::uStrong< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*> texCoord0s;
    ::uStrong< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*> texCoord1s;
    ::uStrong< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*> texCoord2s;
    ::uStrong< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*> texCoord3s;
    ::uStrong< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*> texCoord4s;
    ::uStrong< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*> texCoord5s;
    ::uStrong< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*> texCoord6s;
    ::uStrong< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*> texCoord7s;
    ::uStrong< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*> normals;
    ::uStrong< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*> binormals;
    ::uStrong< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*> tangents;
    ::uStrong< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*> colors;
    ::uStrong< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*> instanceIndex;
    ::uStrong< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*> boneIndices;
    ::uStrong< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*> boneWeights;
    bool hasExplicitVertexCount;
    int explicitVertexCount;
    ::uStrong< ::app::Fuse::Drawing::Batching::BatchIndexBuffer*> indexBuffer;

    void _ObjInit(int maxVertices, int maxIndices, bool staticBatch) { Batch___ObjInit(this, maxVertices, maxIndices, staticBatch); }
    ::app::Fuse::Drawing::Batching::BatchVertexBuffer* Positions() { return Batch__get_Positions(this); }
    void Positions(::app::Fuse::Drawing::Batching::BatchVertexBuffer* value) { Batch__set_Positions(this, value); }
    ::app::Fuse::Drawing::Batching::BatchVertexBuffer* TexCoord0s() { return Batch__get_TexCoord0s(this); }
    void TexCoord0s(::app::Fuse::Drawing::Batching::BatchVertexBuffer* value) { Batch__set_TexCoord0s(this, value); }
    ::app::Fuse::Drawing::Batching::BatchVertexBuffer* TexCoord1s() { return Batch__get_TexCoord1s(this); }
    void TexCoord1s(::app::Fuse::Drawing::Batching::BatchVertexBuffer* value) { Batch__set_TexCoord1s(this, value); }
    ::app::Fuse::Drawing::Batching::BatchVertexBuffer* TexCoord2s() { return Batch__get_TexCoord2s(this); }
    void TexCoord2s(::app::Fuse::Drawing::Batching::BatchVertexBuffer* value) { Batch__set_TexCoord2s(this, value); }
    ::app::Fuse::Drawing::Batching::BatchVertexBuffer* TexCoord3s() { return Batch__get_TexCoord3s(this); }
    void TexCoord3s(::app::Fuse::Drawing::Batching::BatchVertexBuffer* value) { Batch__set_TexCoord3s(this, value); }
    ::app::Fuse::Drawing::Batching::BatchVertexBuffer* TexCoord4s() { return Batch__get_TexCoord4s(this); }
    void TexCoord4s(::app::Fuse::Drawing::Batching::BatchVertexBuffer* value) { Batch__set_TexCoord4s(this, value); }
    ::app::Fuse::Drawing::Batching::BatchVertexBuffer* TexCoord5s() { return Batch__get_TexCoord5s(this); }
    void TexCoord5s(::app::Fuse::Drawing::Batching::BatchVertexBuffer* value) { Batch__set_TexCoord5s(this, value); }
    ::app::Fuse::Drawing::Batching::BatchVertexBuffer* TexCoord6s() { return Batch__get_TexCoord6s(this); }
    void TexCoord6s(::app::Fuse::Drawing::Batching::BatchVertexBuffer* value) { Batch__set_TexCoord6s(this, value); }
    ::app::Fuse::Drawing::Batching::BatchVertexBuffer* TexCoord7s() { return Batch__get_TexCoord7s(this); }
    void TexCoord7s(::app::Fuse::Drawing::Batching::BatchVertexBuffer* value) { Batch__set_TexCoord7s(this, value); }
    ::app::Fuse::Drawing::Batching::BatchVertexBuffer* Normals() { return Batch__get_Normals(this); }
    void Normals(::app::Fuse::Drawing::Batching::BatchVertexBuffer* value) { Batch__set_Normals(this, value); }
    ::app::Fuse::Drawing::Batching::BatchVertexBuffer* Binormals() { return Batch__get_Binormals(this); }
    void Binormals(::app::Fuse::Drawing::Batching::BatchVertexBuffer* value) { Batch__set_Binormals(this, value); }
    ::app::Fuse::Drawing::Batching::BatchVertexBuffer* Tangents() { return Batch__get_Tangents(this); }
    void Tangents(::app::Fuse::Drawing::Batching::BatchVertexBuffer* value) { Batch__set_Tangents(this, value); }
    ::app::Fuse::Drawing::Batching::BatchVertexBuffer* Colors() { return Batch__get_Colors(this); }
    void Colors(::app::Fuse::Drawing::Batching::BatchVertexBuffer* value) { Batch__set_Colors(this, value); }
    ::app::Fuse::Drawing::Batching::BatchVertexBuffer* InstanceIndices() { return Batch__get_InstanceIndices(this); }
    void InstanceIndices(::app::Fuse::Drawing::Batching::BatchVertexBuffer* value) { Batch__set_InstanceIndices(this, value); }
    ::app::Fuse::Drawing::Batching::BatchVertexBuffer* BoneIndexBuffer() { return Batch__get_BoneIndexBuffer(this); }
    void BoneIndexBuffer(::app::Fuse::Drawing::Batching::BatchVertexBuffer* value) { Batch__set_BoneIndexBuffer(this, value); }
    ::app::Fuse::Drawing::Batching::BatchVertexBuffer* BoneWeightBuffer() { return Batch__get_BoneWeightBuffer(this); }
    void BoneWeightBuffer(::app::Fuse::Drawing::Batching::BatchVertexBuffer* value) { Batch__set_BoneWeightBuffer(this, value); }
    int VertexCount() { return Batch__get_VertexCount(this); }
    void VertexCount(int value) { Batch__set_VertexCount(this, value); }
    ::app::Fuse::Drawing::Batching::BatchIndexBuffer* Indices() { return Batch__get_Indices(this); }
    void Indices(::app::Fuse::Drawing::Batching::BatchIndexBuffer* value) { Batch__set_Indices(this, value); }
    ::app::Uno::Graphics::IndexBuffer* IndexBuffer() { return Batch__get_IndexBuffer(this); }
    int IndexType() { return Batch__get_IndexType(this); }
};

}}}}

#include <app/Uno.Bool.h>
#include <app/Uno.Int.h>

namespace app {
namespace Fuse {
namespace Drawing {
namespace Batching {

}}}}


#endif
