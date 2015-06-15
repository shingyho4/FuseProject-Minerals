// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Entities\0.2.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.DefaultPass.h>
#include <app/Fuse.DepthPass.h>
#include <app/Fuse.DrawContext.h>
#include <app/Fuse.Drawing.Batching.Batch.h>
#include <app/Fuse.Drawing.Batching.BatchVertexBuffer.h>
#include <app/Fuse.Drawing.Batching.MeshBatcher.h>
#include <app/Fuse.Entities.DefaultMaterial.h>
#include <app/Fuse.Entities.Entry.h>
#include <app/Fuse.Entities.Material.h>
#include <app/Fuse.Entities.Mesh.h>
#include <app/Fuse.Entities.MeshBatchingEngine.h>
#include <app/Fuse.ICamera.h>
#include <app/Fuse.Pass.h>
#include <app/Fuse.ViewContext.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Collections.Dictionary__Fuse_Entities_Material__Uno_Collect-2534c055.h>
#include <app/Uno.Collections.Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Ba-653f1b88.h>
#include <app/Uno.Collections.Dictionary__Fuse_Entities_Mesh__Uno_Collections-e5128ebd.h>
#include <app/Uno.Collections.Dictionary2_Enumerator__Fuse_Entities_Material_-a8403dc6.h>
#include <app/Uno.Collections.Dictionary2_Enumerator__Fuse_Entities_Mesh__Uno-1ab9a0de.h>
#include <app/Uno.Collections.EnumerableExtensions.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Drawing_Batching_Batch.h>
#include <app/Uno.Collections.KeyValuePair__Fuse_Entities_Material__Uno_Colle-b20df26b.h>
#include <app/Uno.Collections.KeyValuePair__Fuse_Entities_Mesh__Uno_Collectio-6b7ff61b.h>
#include <app/Uno.Collections.List__Fuse_Entities_Entry.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Entities_Entry.h>
#include <app/Uno.Content.Models.ModelMesh.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Float3.h>
#include <app/Uno.Graphics.IndexBuffer.h>
#include <app/Uno.Graphics.Texture2D.h>
#include <app/Uno.Graphics.VertexBuffer.h>
#include <app/Uno.Math.h>
#include <app/Uno.Matrix.h>
#include <app/Uno.Runtime.Implementation.Internal.BundleRegistry.h>
#include <app/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h>

namespace app {
namespace Fuse {
namespace Entities {

::uStaticStrong< MeshBatchingEngine*> MeshBatchingEngine___singleton;

MeshBatchingEngine__uType* MeshBatchingEngine__typeof()
{
    static MeshBatchingEngine__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (MeshBatchingEngine__uType*)::uAllocClassType(sizeof(MeshBatchingEngine__uType), "Fuse.Entities.MeshBatchingEngine", ::uObject__typeof(), 1, 10);
        type->__interface_0.__fp_Flush = (void(*)(void*, ::app::Fuse::DrawContext*))MeshBatchingEngine__Flush;

        type->Implements[0] = ::app::Fuse::IFlush__typeof();

        type->InterfaceOffsets[0] = offsetof(MeshBatchingEngine__uType, __interface_0);

        type->StrongRefOffsets[0] = offsetof(MeshBatchingEngine, drawLists);
        type->StrongRefOffsets[1] = offsetof(MeshBatchingEngine, batchers);
        type->StrongRefOffsets[2] = offsetof(MeshBatchingEngine, worldArray);
        type->StrongRefOffsets[3] = offsetof(MeshBatchingEngine, normalArray);
        type->StrongRefOffsets[4] = offsetof(MeshBatchingEngine, _draw_753a684f._constValues);
        type->StrongRefOffsets[5] = offsetof(MeshBatchingEngine, _draw_753a684f._compiledProgram);
        type->StrongRefOffsets[6] = offsetof(MeshBatchingEngine, _draw_753a684f._Program);
        type->StrongRefOffsets[7] = offsetof(MeshBatchingEngine, _draw_3e29a4cf._constValues);
        type->StrongRefOffsets[8] = offsetof(MeshBatchingEngine, _draw_3e29a4cf._compiledProgram);
        type->StrongRefOffsets[9] = offsetof(MeshBatchingEngine, _draw_3e29a4cf._Program);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "drawLists";
        type->StrongRefNames[1] = "batchers";
        type->StrongRefNames[2] = "worldArray";
        type->StrongRefNames[3] = "normalArray";
        type->StrongRefNames[4] = "_draw_753a684f._constValues";
        type->StrongRefNames[5] = "_draw_753a684f._compiledProgram";
        type->StrongRefNames[6] = "_draw_753a684f._Program";
        type->StrongRefNames[7] = "_draw_3e29a4cf._constValues";
        type->StrongRefNames[8] = "_draw_3e29a4cf._compiledProgram";
        type->StrongRefNames[9] = "_draw_3e29a4cf._Program";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

MeshBatchingEngine* MeshBatchingEngine__get_Singleton(::uStatic* __this)
{
    MeshBatchingEngine* ind_133 = MeshBatchingEngine___singleton;
    return (ind_133 != NULL) ? ind_133 : (MeshBatchingEngine___singleton = MeshBatchingEngine__New_1(NULL));
}

void MeshBatchingEngine__Draw(MeshBatchingEngine* __this, ::app::Fuse::DrawContext* dc, ::app::Fuse::Entities::Mesh* mesh, ::app::Uno::Float4x4 transform, ::app::Fuse::Entities::Material* material)
{
    if (!::uPtr< ::app::Fuse::Entities::Material*>(material)->IsBatchable())
    {
        __this->Flush(dc);
    }

    ::app::Uno::Collections::List__Fuse_Entities_Entry* list;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_*>(__this->drawLists)->TryGetValue(material, &list))
    {
        list = ::app::Uno::Collections::List__Fuse_Entities_Entry__New_1(NULL);
        ::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_*>(__this->drawLists)->Add(material, list);
    }

    ::uPtr< ::app::Uno::Collections::List__Fuse_Entities_Entry*>(list)->Add(::app::Fuse::Entities::Entry__New_1(NULL, mesh, transform, ::app::Uno::Matrix__Invert(NULL, transform)));
    ::uPtr< ::app::Fuse::DrawContext*>(dc)->AddFlushListener((::uObject*)__this);
}

void MeshBatchingEngine__Flush(MeshBatchingEngine* __this, ::app::Fuse::DrawContext* dc)
{
    if (::uPtr< ::app::Fuse::DrawContext*>(dc)->Camera() == NULL)
    {
        return;
    }

    for (::app::Uno::Collections::Dictionary2_Enumerator__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_ enum_123 = ::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_*>(__this->drawLists)->GetEnumerator(); enum_123.MoveNext(); )
    {
        ::app::Uno::Collections::KeyValuePair__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_ p = enum_123.Current();
        __this->DrawList(dc, p.Key(), p.Value());
    }

    ::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_*>(__this->drawLists)->Clear();
}

void MeshBatchingEngine__DrawList(MeshBatchingEngine* __this, ::app::Fuse::DrawContext* dc, ::app::Fuse::Entities::Material* material, ::app::Uno::Collections::List__Fuse_Entities_Entry* entries)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Entities_Entry*>(entries)->Count() > 2)
    {
        ::app::Uno::Collections::Dictionary__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry_* meshCounts = ::app::Uno::Collections::Dictionary__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry___New_1(NULL);

        for (int i = 0; i < ::uPtr< ::app::Uno::Collections::List__Fuse_Entities_Entry*>(entries)->Count(); i++)
        {
            if (!::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry_*>(meshCounts)->ContainsKey(::uPtr< ::app::Uno::Collections::List__Fuse_Entities_Entry*>(entries)->Item(i).Mesh))
            {
                ::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry_*>(meshCounts)->Add(::uPtr< ::app::Uno::Collections::List__Fuse_Entities_Entry*>(entries)->Item(i).Mesh, ::app::Uno::Collections::List__Fuse_Entities_Entry__New_1(NULL));
            }

            ::uPtr< ::app::Uno::Collections::List__Fuse_Entities_Entry*>(meshCounts->Item(entries->Item(i).Mesh))->Add(entries->Item(i));
        }

        for (::app::Uno::Collections::Dictionary2_Enumerator__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry_ enum_124 = ::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry_*>(meshCounts)->GetEnumerator(); enum_124.MoveNext(); )
        {
            ::app::Uno::Collections::KeyValuePair__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry_ p = enum_124.Current();

            if ((::uPtr< ::app::Uno::Content::Models::ModelMesh*>(::uPtr< ::app::Fuse::Entities::Mesh*>(p.Key())->ModelMesh())->VertexCount() > 20000) || (::uPtr< ::app::Uno::Collections::List__Fuse_Entities_Entry*>(p.Value())->Count() < 3))
            {
                __this->DrawIndividual(dc, material, p.Value());
            }
            else
            {
                ::app::Fuse::Drawing::Batching::MeshBatcher* batcher = __this->FindOrCreateBatcher(p.Key());
                __this->DrawBatched(dc, material, batcher, p.Value());
            }
        }
    }
    else
    {
        __this->DrawIndividual(dc, material, entries);
    }
}

int MeshBatchingEngine__MeshVertexCount(MeshBatchingEngine* __this, ::app::Fuse::Entities::Mesh* mesh)
{
    return (::uPtr< ::app::Uno::Content::Models::ModelMesh*>(::uPtr< ::app::Fuse::Entities::Mesh*>(mesh)->ModelMesh())->IndexCount() != -1) ? ::uPtr< ::app::Uno::Content::Models::ModelMesh*>(::uPtr< ::app::Fuse::Entities::Mesh*>(mesh)->ModelMesh())->IndexCount() : ::uPtr< ::app::Uno::Content::Models::ModelMesh*>(::uPtr< ::app::Fuse::Entities::Mesh*>(mesh)->ModelMesh())->VertexCount();
}

::app::Fuse::Drawing::Batching::MeshBatcher* MeshBatchingEngine__FindOrCreateBatcher(MeshBatchingEngine* __this, ::app::Fuse::Entities::Mesh* mesh)
{
    ::app::Fuse::Drawing::Batching::MeshBatcher* batcher;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher*>(__this->batchers)->TryGetValue(mesh, &batcher))
    {
        batcher = ::app::Fuse::Drawing::Batching::MeshBatcher__New_1(NULL);
        ::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher*>(__this->batchers)->Item(mesh, batcher);
        int instanceCount = ::app::Uno::Math__Min_8(NULL, 16, 65535 / ::app::Uno::Math__Max_8(NULL, 1, __this->MeshVertexCount(mesh)));

        for (int i = 0; i < instanceCount; i++)
        {
            ::uPtr< ::app::Fuse::Drawing::Batching::MeshBatcher*>(batcher)->AddMesh(::uPtr< ::app::Fuse::Entities::Mesh*>(mesh)->ModelMesh());
        }

        batcher->Flush();
    }

    return batcher;
}

void MeshBatchingEngine__DrawBatched(MeshBatchingEngine* __this, ::app::Fuse::DrawContext* dc, ::app::Fuse::Entities::Material* material, ::app::Fuse::Drawing::Batching::MeshBatcher* batcher, ::app::Uno::Collections::List__Fuse_Entities_Entry* entries)
{
    ::uArray* array_129;
    ::uArray* array_130;
    ::uArray* array_131;
    ::uArray* array_132;

    for (int k = 0; k < 16; k++)
    {
        ::uPtr< ::uArray*>(__this->worldArray)->Item< ::app::Uno::Float4x4>(k) = ::app::Uno::Float4x4__New_1(NULL, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    }

    int bc = 0;

    for (int i = 0; i < ::uPtr< ::app::Uno::Collections::List__Fuse_Entities_Entry*>(entries)->Count(); i++)
    {
        ::uPtr< ::uArray*>(__this->worldArray)->Item< ::app::Uno::Float4x4>(bc) = ::uPtr< ::app::Uno::Collections::List__Fuse_Entities_Entry*>(entries)->Item(i).World;
        ::uPtr< ::uArray*>(__this->normalArray)->Item< ::app::Uno::Float4x4>(bc) = entries->Item(i).WorldInverse;
        bc++;

        if ((bc >= (::uPtr< ::app::Fuse::Drawing::Batching::MeshBatcher*>(batcher)->EntryCount() - 1)) || (i == (entries->Count() - 1)))
        {
            ::app::Fuse::Drawing::Batching::Batch* batch = ::app::Uno::Collections::EnumerableExtensions__FirstOrDefault__Fuse_Drawing_Batching_Batch_1(NULL, ::uPtr< ::app::Fuse::Drawing::Batching::MeshBatcher*>(batcher)->Batches());

            if (batch != NULL)
            {
                int vc = bc * __this->MeshVertexCount(::uPtr< ::app::Uno::Collections::List__Fuse_Entities_Entry*>(entries)->Item(0).Mesh);

                if (::uIs(material, ::app::Fuse::Entities::DefaultMaterial__typeof()))
                {
                    if (::uIs(::uPtr< ::app::Fuse::DrawContext*>(dc)->Pass(), ::app::Fuse::DepthPass__typeof()))
                    {
                        {
                            __this->_draw_753a684f.WriteRed(false);
                            __this->_draw_753a684f.WriteGreen(false);
                            __this->_draw_753a684f.WriteBlue(false);
                            __this->_draw_753a684f.WriteAlpha(false);
                            __this->_draw_753a684f.Const(0, ::uPtr< ::app::Fuse::Entities::DefaultMaterial*>(::uAs< ::app::Fuse::Entities::DefaultMaterial*>(material, ::app::Fuse::Entities::DefaultMaterial__typeof()))->DiffuseMap() != NULL);
                            __this->_draw_753a684f.Const(1, ::uPtr< ::app::Fuse::Entities::DefaultMaterial*>(::uAs< ::app::Fuse::Entities::DefaultMaterial*>(material, ::app::Fuse::Entities::DefaultMaterial__typeof()))->NormalMap() != NULL);
                            __this->_draw_753a684f.Const(2, ::uPtr< ::app::Fuse::Entities::DefaultMaterial*>(::uAs< ::app::Fuse::Entities::DefaultMaterial*>(material, ::app::Fuse::Entities::DefaultMaterial__typeof()))->SpecularMap() != NULL);
                            __this->_draw_753a684f.Use();
                            __this->_draw_753a684f.Attrib_1(3, ::uPtr< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*>(::uPtr< ::app::Fuse::Drawing::Batching::Batch*>(batch)->Positions())->DataType(), ::uPtr< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*>(::uPtr< ::app::Fuse::Drawing::Batching::Batch*>(batch)->Positions())->VertexBuffer(), ::uPtr< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*>(::uPtr< ::app::Fuse::Drawing::Batching::Batch*>(batch)->Positions())->StrideInBytes(), 0);
                            __this->_draw_753a684f.Attrib_1(4, ::uPtr< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*>(batch->InstanceIndices())->DataType(), ::uPtr< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*>(batch->InstanceIndices())->VertexBuffer(), ::uPtr< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*>(batch->InstanceIndices())->StrideInBytes(), 0);
                            __this->_draw_753a684f.Attrib_1(5, ::uPtr< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*>(batch->TexCoord0s())->DataType(), ::uPtr< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*>(batch->TexCoord0s())->VertexBuffer(), ::uPtr< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*>(batch->TexCoord0s())->StrideInBytes(), 0);
                            __this->_draw_753a684f.Attrib_1(6, ::uPtr< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*>(batch->Tangents())->DataType(), ::uPtr< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*>(batch->Tangents())->VertexBuffer(), ::uPtr< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*>(batch->Tangents())->StrideInBytes(), 0);
                            __this->_draw_753a684f.Attrib_1(7, ::uPtr< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*>(batch->Normals())->DataType(), ::uPtr< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*>(batch->Normals())->VertexBuffer(), ::uPtr< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*>(batch->Normals())->StrideInBytes(), 0);
                            __this->_draw_753a684f.Uniform_21(8, (array_129 = ::uNewArray(::app::Uno::Float4x4__typeof(), 16), ::uPtr< ::uArray*>(array_129)->Item< ::app::Uno::Float4x4>(0) = ::uPtr< ::uArray*>(__this->worldArray)->Item< ::app::Uno::Float4x4>(0), ::uPtr< ::uArray*>(array_129)->Item< ::app::Uno::Float4x4>(1) = ::uPtr< ::uArray*>(__this->worldArray)->Item< ::app::Uno::Float4x4>(1), ::uPtr< ::uArray*>(array_129)->Item< ::app::Uno::Float4x4>(2) = ::uPtr< ::uArray*>(__this->worldArray)->Item< ::app::Uno::Float4x4>(2), ::uPtr< ::uArray*>(array_129)->Item< ::app::Uno::Float4x4>(3) = ::uPtr< ::uArray*>(__this->worldArray)->Item< ::app::Uno::Float4x4>(3), ::uPtr< ::uArray*>(array_129)->Item< ::app::Uno::Float4x4>(4) = ::uPtr< ::uArray*>(__this->worldArray)->Item< ::app::Uno::Float4x4>(4), ::uPtr< ::uArray*>(array_129)->Item< ::app::Uno::Float4x4>(5) = ::uPtr< ::uArray*>(__this->worldArray)->Item< ::app::Uno::Float4x4>(5), ::uPtr< ::uArray*>(array_129)->Item< ::app::Uno::Float4x4>(6) = ::uPtr< ::uArray*>(__this->worldArray)->Item< ::app::Uno::Float4x4>(6), ::uPtr< ::uArray*>(array_129)->Item< ::app::Uno::Float4x4>(7) = ::uPtr< ::uArray*>(__this->worldArray)->Item< ::app::Uno::Float4x4>(7), ::uPtr< ::uArray*>(array_129)->Item< ::app::Uno::Float4x4>(8) = ::uPtr< ::uArray*>(__this->worldArray)->Item< ::app::Uno::Float4x4>(8), ::uPtr< ::uArray*>(array_129)->Item< ::app::Uno::Float4x4>(9) = ::uPtr< ::uArray*>(__this->worldArray)->Item< ::app::Uno::Float4x4>(9), ::uPtr< ::uArray*>(array_129)->Item< ::app::Uno::Float4x4>(10) = ::uPtr< ::uArray*>(__this->worldArray)->Item< ::app::Uno::Float4x4>(10), ::uPtr< ::uArray*>(array_129)->Item< ::app::Uno::Float4x4>(11) = ::uPtr< ::uArray*>(__this->worldArray)->Item< ::app::Uno::Float4x4>(11), ::uPtr< ::uArray*>(array_129)->Item< ::app::Uno::Float4x4>(12) = ::uPtr< ::uArray*>(__this->worldArray)->Item< ::app::Uno::Float4x4>(12), ::uPtr< ::uArray*>(array_129)->Item< ::app::Uno::Float4x4>(13) = ::uPtr< ::uArray*>(__this->worldArray)->Item< ::app::Uno::Float4x4>(13), ::uPtr< ::uArray*>(array_129)->Item< ::app::Uno::Float4x4>(14) = ::uPtr< ::uArray*>(__this->worldArray)->Item< ::app::Uno::Float4x4>(14), ::uPtr< ::uArray*>(array_129)->Item< ::app::Uno::Float4x4>(15) = ::uPtr< ::uArray*>(__this->worldArray)->Item< ::app::Uno::Float4x4>(15), array_129));
                            __this->_draw_753a684f.Uniform_9(9, ::uPtr< ::app::Fuse::Entities::DefaultMaterial*>(::uAs< ::app::Fuse::Entities::DefaultMaterial*>(material, ::app::Fuse::Entities::DefaultMaterial__typeof()))->Tiling());
                            __this->_draw_753a684f.Uniform_9(10, ::uPtr< ::app::Fuse::Entities::DefaultMaterial*>(::uAs< ::app::Fuse::Entities::DefaultMaterial*>(material, ::app::Fuse::Entities::DefaultMaterial__typeof()))->Offset());
                            __this->_draw_753a684f.Uniform_10(11, ::uPtr< ::app::Fuse::Entities::DefaultMaterial*>(::uAs< ::app::Fuse::Entities::DefaultMaterial*>(material, ::app::Fuse::Entities::DefaultMaterial__typeof()))->DiffuseColor());
                            __this->_draw_753a684f.Uniform_21(12, (array_130 = ::uNewArray(::app::Uno::Float4x4__typeof(), 16), ::uPtr< ::uArray*>(array_130)->Item< ::app::Uno::Float4x4>(0) = ::uPtr< ::uArray*>(__this->normalArray)->Item< ::app::Uno::Float4x4>(0), ::uPtr< ::uArray*>(array_130)->Item< ::app::Uno::Float4x4>(1) = ::uPtr< ::uArray*>(__this->normalArray)->Item< ::app::Uno::Float4x4>(1), ::uPtr< ::uArray*>(array_130)->Item< ::app::Uno::Float4x4>(2) = ::uPtr< ::uArray*>(__this->normalArray)->Item< ::app::Uno::Float4x4>(2), ::uPtr< ::uArray*>(array_130)->Item< ::app::Uno::Float4x4>(3) = ::uPtr< ::uArray*>(__this->normalArray)->Item< ::app::Uno::Float4x4>(3), ::uPtr< ::uArray*>(array_130)->Item< ::app::Uno::Float4x4>(4) = ::uPtr< ::uArray*>(__this->normalArray)->Item< ::app::Uno::Float4x4>(4), ::uPtr< ::uArray*>(array_130)->Item< ::app::Uno::Float4x4>(5) = ::uPtr< ::uArray*>(__this->normalArray)->Item< ::app::Uno::Float4x4>(5), ::uPtr< ::uArray*>(array_130)->Item< ::app::Uno::Float4x4>(6) = ::uPtr< ::uArray*>(__this->normalArray)->Item< ::app::Uno::Float4x4>(6), ::uPtr< ::uArray*>(array_130)->Item< ::app::Uno::Float4x4>(7) = ::uPtr< ::uArray*>(__this->normalArray)->Item< ::app::Uno::Float4x4>(7), ::uPtr< ::uArray*>(array_130)->Item< ::app::Uno::Float4x4>(8) = ::uPtr< ::uArray*>(__this->normalArray)->Item< ::app::Uno::Float4x4>(8), ::uPtr< ::uArray*>(array_130)->Item< ::app::Uno::Float4x4>(9) = ::uPtr< ::uArray*>(__this->normalArray)->Item< ::app::Uno::Float4x4>(9), ::uPtr< ::uArray*>(array_130)->Item< ::app::Uno::Float4x4>(10) = ::uPtr< ::uArray*>(__this->normalArray)->Item< ::app::Uno::Float4x4>(10), ::uPtr< ::uArray*>(array_130)->Item< ::app::Uno::Float4x4>(11) = ::uPtr< ::uArray*>(__this->normalArray)->Item< ::app::Uno::Float4x4>(11), ::uPtr< ::uArray*>(array_130)->Item< ::app::Uno::Float4x4>(12) = ::uPtr< ::uArray*>(__this->normalArray)->Item< ::app::Uno::Float4x4>(12), ::uPtr< ::uArray*>(array_130)->Item< ::app::Uno::Float4x4>(13) = ::uPtr< ::uArray*>(__this->normalArray)->Item< ::app::Uno::Float4x4>(13), ::uPtr< ::uArray*>(array_130)->Item< ::app::Uno::Float4x4>(14) = ::uPtr< ::uArray*>(__this->normalArray)->Item< ::app::Uno::Float4x4>(14), ::uPtr< ::uArray*>(array_130)->Item< ::app::Uno::Float4x4>(15) = ::uPtr< ::uArray*>(__this->normalArray)->Item< ::app::Uno::Float4x4>(15), array_130));
                            __this->_draw_753a684f.Uniform_10(13, ::uPtr< ::app::Fuse::Entities::DefaultMaterial*>(::uAs< ::app::Fuse::Entities::DefaultMaterial*>(material, ::app::Fuse::Entities::DefaultMaterial__typeof()))->SpecularColor());
                            __this->_draw_753a684f.Uniform_10(14, (::uPtr< ::app::Fuse::DrawContext*>(::app::Fuse::DrawContext__get_Current(NULL))->Camera() != NULL) ? ::app::Fuse::ICamera::WorldPosition(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::DrawContext*>(::app::Fuse::DrawContext__get_Current(NULL))->Camera())) : ::app::Uno::Float3__New_2(NULL, 100.0f, 100.0f, 100.0f));
                            __this->_draw_753a684f.Uniform_8(15, ::uPtr< ::app::Fuse::Entities::DefaultMaterial*>(::uAs< ::app::Fuse::Entities::DefaultMaterial*>(material, ::app::Fuse::Entities::DefaultMaterial__typeof()))->Shininess());
                            __this->_draw_753a684f.Uniform_14(16, (::uPtr< ::app::Fuse::DrawContext*>(::app::Fuse::DrawContext__get_Current(NULL))->Camera() != NULL) ? ::app::Fuse::ICamera::ViewProjectionTransform(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::DrawContext*>(::app::Fuse::DrawContext__get_Current(NULL))->Camera())) : ::app::Uno::Matrix__Mul_11(NULL, (::uPtr< ::app::Fuse::DrawContext*>(::app::Fuse::DrawContext__get_Current(NULL))->Camera() != NULL) ? ::app::Fuse::ICamera::ViewTransform(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::DrawContext*>(::app::Fuse::DrawContext__get_Current(NULL))->Camera())) : ::app::Uno::Float4x4__get_Identity(NULL), (::uPtr< ::app::Fuse::DrawContext*>(::app::Fuse::DrawContext__get_Current(NULL))->Camera() != NULL) ? ::app::Fuse::ICamera::ProjectionTransform(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::DrawContext*>(::app::Fuse::DrawContext__get_Current(NULL))->Camera())) : ::app::Uno::Float4x4__get_Identity(NULL)));
                            __this->_draw_753a684f.Sampler_2(17, ::uPtr< ::app::Fuse::Entities::DefaultMaterial*>(::uAs< ::app::Fuse::Entities::DefaultMaterial*>(material, ::app::Fuse::Entities::DefaultMaterial__typeof()))->DiffuseMap());
                            __this->_draw_753a684f.Sampler_2(18, ::uPtr< ::app::Fuse::Entities::DefaultMaterial*>(::uAs< ::app::Fuse::Entities::DefaultMaterial*>(material, ::app::Fuse::Entities::DefaultMaterial__typeof()))->NormalMap());
                            __this->_draw_753a684f.Sampler_2(19, ::uPtr< ::app::Fuse::Entities::DefaultMaterial*>(::uAs< ::app::Fuse::Entities::DefaultMaterial*>(material, ::app::Fuse::Entities::DefaultMaterial__typeof()))->SpecularMap());
                            __this->_draw_753a684f.Draw(vc, batch->IndexType(), batch->IndexBuffer());
                        }
                    }
                    else if (::uIs(::uPtr< ::app::Fuse::DrawContext*>(dc)->Pass(), ::app::Fuse::DefaultPass__typeof()))
                    {
                        {
                            __this->_draw_753a684f.Const(0, ::uPtr< ::app::Fuse::Entities::DefaultMaterial*>(::uAs< ::app::Fuse::Entities::DefaultMaterial*>(material, ::app::Fuse::Entities::DefaultMaterial__typeof()))->DiffuseMap() != NULL);
                            __this->_draw_753a684f.Const(1, ::uPtr< ::app::Fuse::Entities::DefaultMaterial*>(::uAs< ::app::Fuse::Entities::DefaultMaterial*>(material, ::app::Fuse::Entities::DefaultMaterial__typeof()))->NormalMap() != NULL);
                            __this->_draw_753a684f.Const(2, ::uPtr< ::app::Fuse::Entities::DefaultMaterial*>(::uAs< ::app::Fuse::Entities::DefaultMaterial*>(material, ::app::Fuse::Entities::DefaultMaterial__typeof()))->SpecularMap() != NULL);
                            __this->_draw_753a684f.Use();
                            __this->_draw_753a684f.Attrib_1(3, ::uPtr< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*>(::uPtr< ::app::Fuse::Drawing::Batching::Batch*>(batch)->Positions())->DataType(), ::uPtr< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*>(::uPtr< ::app::Fuse::Drawing::Batching::Batch*>(batch)->Positions())->VertexBuffer(), ::uPtr< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*>(::uPtr< ::app::Fuse::Drawing::Batching::Batch*>(batch)->Positions())->StrideInBytes(), 0);
                            __this->_draw_753a684f.Attrib_1(4, ::uPtr< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*>(batch->InstanceIndices())->DataType(), ::uPtr< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*>(batch->InstanceIndices())->VertexBuffer(), ::uPtr< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*>(batch->InstanceIndices())->StrideInBytes(), 0);
                            __this->_draw_753a684f.Attrib_1(5, ::uPtr< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*>(batch->TexCoord0s())->DataType(), ::uPtr< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*>(batch->TexCoord0s())->VertexBuffer(), ::uPtr< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*>(batch->TexCoord0s())->StrideInBytes(), 0);
                            __this->_draw_753a684f.Attrib_1(6, ::uPtr< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*>(batch->Tangents())->DataType(), ::uPtr< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*>(batch->Tangents())->VertexBuffer(), ::uPtr< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*>(batch->Tangents())->StrideInBytes(), 0);
                            __this->_draw_753a684f.Attrib_1(7, ::uPtr< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*>(batch->Normals())->DataType(), ::uPtr< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*>(batch->Normals())->VertexBuffer(), ::uPtr< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*>(batch->Normals())->StrideInBytes(), 0);
                            __this->_draw_753a684f.Uniform_21(8, (array_131 = ::uNewArray(::app::Uno::Float4x4__typeof(), 16), ::uPtr< ::uArray*>(array_131)->Item< ::app::Uno::Float4x4>(0) = ::uPtr< ::uArray*>(__this->worldArray)->Item< ::app::Uno::Float4x4>(0), ::uPtr< ::uArray*>(array_131)->Item< ::app::Uno::Float4x4>(1) = ::uPtr< ::uArray*>(__this->worldArray)->Item< ::app::Uno::Float4x4>(1), ::uPtr< ::uArray*>(array_131)->Item< ::app::Uno::Float4x4>(2) = ::uPtr< ::uArray*>(__this->worldArray)->Item< ::app::Uno::Float4x4>(2), ::uPtr< ::uArray*>(array_131)->Item< ::app::Uno::Float4x4>(3) = ::uPtr< ::uArray*>(__this->worldArray)->Item< ::app::Uno::Float4x4>(3), ::uPtr< ::uArray*>(array_131)->Item< ::app::Uno::Float4x4>(4) = ::uPtr< ::uArray*>(__this->worldArray)->Item< ::app::Uno::Float4x4>(4), ::uPtr< ::uArray*>(array_131)->Item< ::app::Uno::Float4x4>(5) = ::uPtr< ::uArray*>(__this->worldArray)->Item< ::app::Uno::Float4x4>(5), ::uPtr< ::uArray*>(array_131)->Item< ::app::Uno::Float4x4>(6) = ::uPtr< ::uArray*>(__this->worldArray)->Item< ::app::Uno::Float4x4>(6), ::uPtr< ::uArray*>(array_131)->Item< ::app::Uno::Float4x4>(7) = ::uPtr< ::uArray*>(__this->worldArray)->Item< ::app::Uno::Float4x4>(7), ::uPtr< ::uArray*>(array_131)->Item< ::app::Uno::Float4x4>(8) = ::uPtr< ::uArray*>(__this->worldArray)->Item< ::app::Uno::Float4x4>(8), ::uPtr< ::uArray*>(array_131)->Item< ::app::Uno::Float4x4>(9) = ::uPtr< ::uArray*>(__this->worldArray)->Item< ::app::Uno::Float4x4>(9), ::uPtr< ::uArray*>(array_131)->Item< ::app::Uno::Float4x4>(10) = ::uPtr< ::uArray*>(__this->worldArray)->Item< ::app::Uno::Float4x4>(10), ::uPtr< ::uArray*>(array_131)->Item< ::app::Uno::Float4x4>(11) = ::uPtr< ::uArray*>(__this->worldArray)->Item< ::app::Uno::Float4x4>(11), ::uPtr< ::uArray*>(array_131)->Item< ::app::Uno::Float4x4>(12) = ::uPtr< ::uArray*>(__this->worldArray)->Item< ::app::Uno::Float4x4>(12), ::uPtr< ::uArray*>(array_131)->Item< ::app::Uno::Float4x4>(13) = ::uPtr< ::uArray*>(__this->worldArray)->Item< ::app::Uno::Float4x4>(13), ::uPtr< ::uArray*>(array_131)->Item< ::app::Uno::Float4x4>(14) = ::uPtr< ::uArray*>(__this->worldArray)->Item< ::app::Uno::Float4x4>(14), ::uPtr< ::uArray*>(array_131)->Item< ::app::Uno::Float4x4>(15) = ::uPtr< ::uArray*>(__this->worldArray)->Item< ::app::Uno::Float4x4>(15), array_131));
                            __this->_draw_753a684f.Uniform_9(9, ::uPtr< ::app::Fuse::Entities::DefaultMaterial*>(::uAs< ::app::Fuse::Entities::DefaultMaterial*>(material, ::app::Fuse::Entities::DefaultMaterial__typeof()))->Tiling());
                            __this->_draw_753a684f.Uniform_9(10, ::uPtr< ::app::Fuse::Entities::DefaultMaterial*>(::uAs< ::app::Fuse::Entities::DefaultMaterial*>(material, ::app::Fuse::Entities::DefaultMaterial__typeof()))->Offset());
                            __this->_draw_753a684f.Uniform_10(11, ::uPtr< ::app::Fuse::Entities::DefaultMaterial*>(::uAs< ::app::Fuse::Entities::DefaultMaterial*>(material, ::app::Fuse::Entities::DefaultMaterial__typeof()))->DiffuseColor());
                            __this->_draw_753a684f.Uniform_21(12, (array_132 = ::uNewArray(::app::Uno::Float4x4__typeof(), 16), ::uPtr< ::uArray*>(array_132)->Item< ::app::Uno::Float4x4>(0) = ::uPtr< ::uArray*>(__this->normalArray)->Item< ::app::Uno::Float4x4>(0), ::uPtr< ::uArray*>(array_132)->Item< ::app::Uno::Float4x4>(1) = ::uPtr< ::uArray*>(__this->normalArray)->Item< ::app::Uno::Float4x4>(1), ::uPtr< ::uArray*>(array_132)->Item< ::app::Uno::Float4x4>(2) = ::uPtr< ::uArray*>(__this->normalArray)->Item< ::app::Uno::Float4x4>(2), ::uPtr< ::uArray*>(array_132)->Item< ::app::Uno::Float4x4>(3) = ::uPtr< ::uArray*>(__this->normalArray)->Item< ::app::Uno::Float4x4>(3), ::uPtr< ::uArray*>(array_132)->Item< ::app::Uno::Float4x4>(4) = ::uPtr< ::uArray*>(__this->normalArray)->Item< ::app::Uno::Float4x4>(4), ::uPtr< ::uArray*>(array_132)->Item< ::app::Uno::Float4x4>(5) = ::uPtr< ::uArray*>(__this->normalArray)->Item< ::app::Uno::Float4x4>(5), ::uPtr< ::uArray*>(array_132)->Item< ::app::Uno::Float4x4>(6) = ::uPtr< ::uArray*>(__this->normalArray)->Item< ::app::Uno::Float4x4>(6), ::uPtr< ::uArray*>(array_132)->Item< ::app::Uno::Float4x4>(7) = ::uPtr< ::uArray*>(__this->normalArray)->Item< ::app::Uno::Float4x4>(7), ::uPtr< ::uArray*>(array_132)->Item< ::app::Uno::Float4x4>(8) = ::uPtr< ::uArray*>(__this->normalArray)->Item< ::app::Uno::Float4x4>(8), ::uPtr< ::uArray*>(array_132)->Item< ::app::Uno::Float4x4>(9) = ::uPtr< ::uArray*>(__this->normalArray)->Item< ::app::Uno::Float4x4>(9), ::uPtr< ::uArray*>(array_132)->Item< ::app::Uno::Float4x4>(10) = ::uPtr< ::uArray*>(__this->normalArray)->Item< ::app::Uno::Float4x4>(10), ::uPtr< ::uArray*>(array_132)->Item< ::app::Uno::Float4x4>(11) = ::uPtr< ::uArray*>(__this->normalArray)->Item< ::app::Uno::Float4x4>(11), ::uPtr< ::uArray*>(array_132)->Item< ::app::Uno::Float4x4>(12) = ::uPtr< ::uArray*>(__this->normalArray)->Item< ::app::Uno::Float4x4>(12), ::uPtr< ::uArray*>(array_132)->Item< ::app::Uno::Float4x4>(13) = ::uPtr< ::uArray*>(__this->normalArray)->Item< ::app::Uno::Float4x4>(13), ::uPtr< ::uArray*>(array_132)->Item< ::app::Uno::Float4x4>(14) = ::uPtr< ::uArray*>(__this->normalArray)->Item< ::app::Uno::Float4x4>(14), ::uPtr< ::uArray*>(array_132)->Item< ::app::Uno::Float4x4>(15) = ::uPtr< ::uArray*>(__this->normalArray)->Item< ::app::Uno::Float4x4>(15), array_132));
                            __this->_draw_753a684f.Uniform_10(13, ::uPtr< ::app::Fuse::Entities::DefaultMaterial*>(::uAs< ::app::Fuse::Entities::DefaultMaterial*>(material, ::app::Fuse::Entities::DefaultMaterial__typeof()))->SpecularColor());
                            __this->_draw_753a684f.Uniform_10(14, (::uPtr< ::app::Fuse::DrawContext*>(::app::Fuse::DrawContext__get_Current(NULL))->Camera() != NULL) ? ::app::Fuse::ICamera::WorldPosition(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::DrawContext*>(::app::Fuse::DrawContext__get_Current(NULL))->Camera())) : ::app::Uno::Float3__New_2(NULL, 100.0f, 100.0f, 100.0f));
                            __this->_draw_753a684f.Uniform_8(15, ::uPtr< ::app::Fuse::Entities::DefaultMaterial*>(::uAs< ::app::Fuse::Entities::DefaultMaterial*>(material, ::app::Fuse::Entities::DefaultMaterial__typeof()))->Shininess());
                            __this->_draw_753a684f.Uniform_14(16, (::uPtr< ::app::Fuse::DrawContext*>(::app::Fuse::DrawContext__get_Current(NULL))->Camera() != NULL) ? ::app::Fuse::ICamera::ViewProjectionTransform(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::DrawContext*>(::app::Fuse::DrawContext__get_Current(NULL))->Camera())) : ::app::Uno::Matrix__Mul_11(NULL, (::uPtr< ::app::Fuse::DrawContext*>(::app::Fuse::DrawContext__get_Current(NULL))->Camera() != NULL) ? ::app::Fuse::ICamera::ViewTransform(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::DrawContext*>(::app::Fuse::DrawContext__get_Current(NULL))->Camera())) : ::app::Uno::Float4x4__get_Identity(NULL), (::uPtr< ::app::Fuse::DrawContext*>(::app::Fuse::DrawContext__get_Current(NULL))->Camera() != NULL) ? ::app::Fuse::ICamera::ProjectionTransform(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::DrawContext*>(::app::Fuse::DrawContext__get_Current(NULL))->Camera())) : ::app::Uno::Float4x4__get_Identity(NULL)));
                            __this->_draw_753a684f.Sampler_2(17, ::uPtr< ::app::Fuse::Entities::DefaultMaterial*>(::uAs< ::app::Fuse::Entities::DefaultMaterial*>(material, ::app::Fuse::Entities::DefaultMaterial__typeof()))->DiffuseMap());
                            __this->_draw_753a684f.Sampler_2(18, ::uPtr< ::app::Fuse::Entities::DefaultMaterial*>(::uAs< ::app::Fuse::Entities::DefaultMaterial*>(material, ::app::Fuse::Entities::DefaultMaterial__typeof()))->NormalMap());
                            __this->_draw_753a684f.Sampler_2(19, ::uPtr< ::app::Fuse::Entities::DefaultMaterial*>(::uAs< ::app::Fuse::Entities::DefaultMaterial*>(material, ::app::Fuse::Entities::DefaultMaterial__typeof()))->SpecularMap());
                            __this->_draw_753a684f.Draw(vc, batch->IndexType(), batch->IndexBuffer());
                        }
                    }
                }
            }

            bc = 0;

            for (int k = 0; k < 16; k++)
            {
                ::uPtr< ::uArray*>(__this->worldArray)->Item< ::app::Uno::Float4x4>(k) = ::app::Uno::Float4x4__New_1(NULL, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
            }
        }
    }
}

void MeshBatchingEngine__DrawIndividual(MeshBatchingEngine* __this, ::app::Fuse::DrawContext* dc, ::app::Fuse::Entities::Material* m, ::app::Uno::Collections::List__Fuse_Entities_Entry* entries)
{
    for (::app::Uno::Collections::List1_Enumerator__Fuse_Entities_Entry enum_125 = ::uPtr< ::app::Uno::Collections::List__Fuse_Entities_Entry*>(entries)->GetEnumerator(); enum_125.MoveNext(); )
    {
        ::app::Fuse::Entities::Entry e = enum_125.Current();
        __this->DrawMesh(dc, m, e.Mesh, e.World, e.WorldInverse);
    }
}

void MeshBatchingEngine__DrawMesh(MeshBatchingEngine* __this, ::app::Fuse::DrawContext* dc, ::app::Fuse::Entities::Material* m, ::app::Fuse::Entities::Mesh* mesh, ::app::Uno::Float4x4 world, ::app::Uno::Float4x4 worldInverse)
{
    ::uArray* array_126;
    int index_127 = int();
    int length_128 = int();

    for (array_126 = ::uPtr< ::app::Fuse::Entities::Mesh*>(mesh)->Batches(), index_127 = 0, length_128 = ::uPtr< ::uArray*>(array_126)->Length(); index_127 < length_128; ++index_127)
    {
        ::app::Fuse::Drawing::Batching::Batch* b = ::uPtr< ::uArray*>(array_126)->Item< ::app::Fuse::Drawing::Batching::Batch*>(index_127);
        __this->DrawBatch(dc, m, b, world, worldInverse);
    }
}

void MeshBatchingEngine__DrawBatch(MeshBatchingEngine* __this, ::app::Fuse::DrawContext* dc, ::app::Fuse::Entities::Material* material, ::app::Fuse::Drawing::Batching::Batch* batch, ::app::Uno::Float4x4 world, ::app::Uno::Float4x4 worldInverse)
{
    if (::uIs(material, ::app::Fuse::Entities::DefaultMaterial__typeof()))
    {
        if (::uIs(::uPtr< ::app::Fuse::DrawContext*>(dc)->Pass(), ::app::Fuse::DepthPass__typeof()))
        {
            {
                __this->_draw_3e29a4cf.WriteRed(false);
                __this->_draw_3e29a4cf.WriteGreen(false);
                __this->_draw_3e29a4cf.WriteBlue(false);
                __this->_draw_3e29a4cf.WriteAlpha(false);
                __this->_draw_3e29a4cf.Const(0, ::uPtr< ::app::Fuse::Entities::DefaultMaterial*>(::uAs< ::app::Fuse::Entities::DefaultMaterial*>(material, ::app::Fuse::Entities::DefaultMaterial__typeof()))->DiffuseMap() != NULL);
                __this->_draw_3e29a4cf.Const(1, ::uPtr< ::app::Fuse::Entities::DefaultMaterial*>(::uAs< ::app::Fuse::Entities::DefaultMaterial*>(material, ::app::Fuse::Entities::DefaultMaterial__typeof()))->NormalMap() != NULL);
                __this->_draw_3e29a4cf.Const(2, ::uPtr< ::app::Fuse::Entities::DefaultMaterial*>(::uAs< ::app::Fuse::Entities::DefaultMaterial*>(material, ::app::Fuse::Entities::DefaultMaterial__typeof()))->SpecularMap() != NULL);
                __this->_draw_3e29a4cf.Use();
                __this->_draw_3e29a4cf.Attrib_1(3, ::uPtr< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*>(::uPtr< ::app::Fuse::Drawing::Batching::Batch*>(batch)->Positions())->DataType(), ::uPtr< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*>(::uPtr< ::app::Fuse::Drawing::Batching::Batch*>(batch)->Positions())->VertexBuffer(), ::uPtr< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*>(::uPtr< ::app::Fuse::Drawing::Batching::Batch*>(batch)->Positions())->StrideInBytes(), 0);
                __this->_draw_3e29a4cf.Attrib_1(4, ::uPtr< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*>(batch->TexCoord0s())->DataType(), ::uPtr< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*>(batch->TexCoord0s())->VertexBuffer(), ::uPtr< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*>(batch->TexCoord0s())->StrideInBytes(), 0);
                __this->_draw_3e29a4cf.Attrib_1(5, ::uPtr< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*>(batch->Tangents())->DataType(), ::uPtr< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*>(batch->Tangents())->VertexBuffer(), ::uPtr< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*>(batch->Tangents())->StrideInBytes(), 0);
                __this->_draw_3e29a4cf.Attrib_1(6, ::uPtr< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*>(batch->Normals())->DataType(), ::uPtr< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*>(batch->Normals())->VertexBuffer(), ::uPtr< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*>(batch->Normals())->StrideInBytes(), 0);
                __this->_draw_3e29a4cf.Uniform_9(7, ::uPtr< ::app::Fuse::Entities::DefaultMaterial*>(::uAs< ::app::Fuse::Entities::DefaultMaterial*>(material, ::app::Fuse::Entities::DefaultMaterial__typeof()))->Tiling());
                __this->_draw_3e29a4cf.Uniform_9(8, ::uPtr< ::app::Fuse::Entities::DefaultMaterial*>(::uAs< ::app::Fuse::Entities::DefaultMaterial*>(material, ::app::Fuse::Entities::DefaultMaterial__typeof()))->Offset());
                __this->_draw_3e29a4cf.Uniform_10(9, ::uPtr< ::app::Fuse::Entities::DefaultMaterial*>(::uAs< ::app::Fuse::Entities::DefaultMaterial*>(material, ::app::Fuse::Entities::DefaultMaterial__typeof()))->DiffuseColor());
                __this->_draw_3e29a4cf.Uniform_10(10, ::uPtr< ::app::Fuse::Entities::DefaultMaterial*>(::uAs< ::app::Fuse::Entities::DefaultMaterial*>(material, ::app::Fuse::Entities::DefaultMaterial__typeof()))->SpecularColor());
                __this->_draw_3e29a4cf.Uniform_14(11, world);
                __this->_draw_3e29a4cf.Uniform_10(12, (::uPtr< ::app::Fuse::DrawContext*>(::app::Fuse::DrawContext__get_Current(NULL))->Camera() != NULL) ? ::app::Fuse::ICamera::WorldPosition(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::DrawContext*>(::app::Fuse::DrawContext__get_Current(NULL))->Camera())) : ::app::Uno::Float3__New_2(NULL, 100.0f, 100.0f, 100.0f));
                __this->_draw_3e29a4cf.Uniform_8(13, ::uPtr< ::app::Fuse::Entities::DefaultMaterial*>(::uAs< ::app::Fuse::Entities::DefaultMaterial*>(material, ::app::Fuse::Entities::DefaultMaterial__typeof()))->Shininess());
                __this->_draw_3e29a4cf.Uniform_14(14, ::app::Uno::Matrix__Mul_11(NULL, world, (::uPtr< ::app::Fuse::DrawContext*>(::app::Fuse::DrawContext__get_Current(NULL))->Camera() != NULL) ? ::app::Fuse::ICamera::ViewProjectionTransform(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::DrawContext*>(::app::Fuse::DrawContext__get_Current(NULL))->Camera())) : ::app::Uno::Matrix__Mul_11(NULL, (::uPtr< ::app::Fuse::DrawContext*>(::app::Fuse::DrawContext__get_Current(NULL))->Camera() != NULL) ? ::app::Fuse::ICamera::ViewTransform(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::DrawContext*>(::app::Fuse::DrawContext__get_Current(NULL))->Camera())) : ::app::Uno::Float4x4__get_Identity(NULL), (::uPtr< ::app::Fuse::DrawContext*>(::app::Fuse::DrawContext__get_Current(NULL))->Camera() != NULL) ? ::app::Fuse::ICamera::ProjectionTransform(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::DrawContext*>(::app::Fuse::DrawContext__get_Current(NULL))->Camera())) : ::app::Uno::Float4x4__get_Identity(NULL))));
                __this->_draw_3e29a4cf.Uniform_14(15, ::app::Uno::Matrix__Transpose_2(NULL, worldInverse));
                __this->_draw_3e29a4cf.Sampler_2(16, ::uPtr< ::app::Fuse::Entities::DefaultMaterial*>(::uAs< ::app::Fuse::Entities::DefaultMaterial*>(material, ::app::Fuse::Entities::DefaultMaterial__typeof()))->DiffuseMap());
                __this->_draw_3e29a4cf.Sampler_2(17, ::uPtr< ::app::Fuse::Entities::DefaultMaterial*>(::uAs< ::app::Fuse::Entities::DefaultMaterial*>(material, ::app::Fuse::Entities::DefaultMaterial__typeof()))->NormalMap());
                __this->_draw_3e29a4cf.Sampler_2(18, ::uPtr< ::app::Fuse::Entities::DefaultMaterial*>(::uAs< ::app::Fuse::Entities::DefaultMaterial*>(material, ::app::Fuse::Entities::DefaultMaterial__typeof()))->SpecularMap());
                __this->_draw_3e29a4cf.Draw(batch->VertexCount(), batch->IndexType(), batch->IndexBuffer());
            }
        }
        else if (::uIs(::uPtr< ::app::Fuse::DrawContext*>(dc)->Pass(), ::app::Fuse::DefaultPass__typeof()))
        {
            {
                __this->_draw_3e29a4cf.Const(0, ::uPtr< ::app::Fuse::Entities::DefaultMaterial*>(::uAs< ::app::Fuse::Entities::DefaultMaterial*>(material, ::app::Fuse::Entities::DefaultMaterial__typeof()))->DiffuseMap() != NULL);
                __this->_draw_3e29a4cf.Const(1, ::uPtr< ::app::Fuse::Entities::DefaultMaterial*>(::uAs< ::app::Fuse::Entities::DefaultMaterial*>(material, ::app::Fuse::Entities::DefaultMaterial__typeof()))->NormalMap() != NULL);
                __this->_draw_3e29a4cf.Const(2, ::uPtr< ::app::Fuse::Entities::DefaultMaterial*>(::uAs< ::app::Fuse::Entities::DefaultMaterial*>(material, ::app::Fuse::Entities::DefaultMaterial__typeof()))->SpecularMap() != NULL);
                __this->_draw_3e29a4cf.Use();
                __this->_draw_3e29a4cf.Attrib_1(3, ::uPtr< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*>(::uPtr< ::app::Fuse::Drawing::Batching::Batch*>(batch)->Positions())->DataType(), ::uPtr< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*>(::uPtr< ::app::Fuse::Drawing::Batching::Batch*>(batch)->Positions())->VertexBuffer(), ::uPtr< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*>(::uPtr< ::app::Fuse::Drawing::Batching::Batch*>(batch)->Positions())->StrideInBytes(), 0);
                __this->_draw_3e29a4cf.Attrib_1(4, ::uPtr< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*>(batch->TexCoord0s())->DataType(), ::uPtr< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*>(batch->TexCoord0s())->VertexBuffer(), ::uPtr< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*>(batch->TexCoord0s())->StrideInBytes(), 0);
                __this->_draw_3e29a4cf.Attrib_1(5, ::uPtr< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*>(batch->Tangents())->DataType(), ::uPtr< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*>(batch->Tangents())->VertexBuffer(), ::uPtr< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*>(batch->Tangents())->StrideInBytes(), 0);
                __this->_draw_3e29a4cf.Attrib_1(6, ::uPtr< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*>(batch->Normals())->DataType(), ::uPtr< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*>(batch->Normals())->VertexBuffer(), ::uPtr< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*>(batch->Normals())->StrideInBytes(), 0);
                __this->_draw_3e29a4cf.Uniform_9(7, ::uPtr< ::app::Fuse::Entities::DefaultMaterial*>(::uAs< ::app::Fuse::Entities::DefaultMaterial*>(material, ::app::Fuse::Entities::DefaultMaterial__typeof()))->Tiling());
                __this->_draw_3e29a4cf.Uniform_9(8, ::uPtr< ::app::Fuse::Entities::DefaultMaterial*>(::uAs< ::app::Fuse::Entities::DefaultMaterial*>(material, ::app::Fuse::Entities::DefaultMaterial__typeof()))->Offset());
                __this->_draw_3e29a4cf.Uniform_10(9, ::uPtr< ::app::Fuse::Entities::DefaultMaterial*>(::uAs< ::app::Fuse::Entities::DefaultMaterial*>(material, ::app::Fuse::Entities::DefaultMaterial__typeof()))->DiffuseColor());
                __this->_draw_3e29a4cf.Uniform_10(10, ::uPtr< ::app::Fuse::Entities::DefaultMaterial*>(::uAs< ::app::Fuse::Entities::DefaultMaterial*>(material, ::app::Fuse::Entities::DefaultMaterial__typeof()))->SpecularColor());
                __this->_draw_3e29a4cf.Uniform_14(11, world);
                __this->_draw_3e29a4cf.Uniform_10(12, (::uPtr< ::app::Fuse::DrawContext*>(::app::Fuse::DrawContext__get_Current(NULL))->Camera() != NULL) ? ::app::Fuse::ICamera::WorldPosition(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::DrawContext*>(::app::Fuse::DrawContext__get_Current(NULL))->Camera())) : ::app::Uno::Float3__New_2(NULL, 100.0f, 100.0f, 100.0f));
                __this->_draw_3e29a4cf.Uniform_8(13, ::uPtr< ::app::Fuse::Entities::DefaultMaterial*>(::uAs< ::app::Fuse::Entities::DefaultMaterial*>(material, ::app::Fuse::Entities::DefaultMaterial__typeof()))->Shininess());
                __this->_draw_3e29a4cf.Uniform_14(14, ::app::Uno::Matrix__Mul_11(NULL, world, (::uPtr< ::app::Fuse::DrawContext*>(::app::Fuse::DrawContext__get_Current(NULL))->Camera() != NULL) ? ::app::Fuse::ICamera::ViewProjectionTransform(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::DrawContext*>(::app::Fuse::DrawContext__get_Current(NULL))->Camera())) : ::app::Uno::Matrix__Mul_11(NULL, (::uPtr< ::app::Fuse::DrawContext*>(::app::Fuse::DrawContext__get_Current(NULL))->Camera() != NULL) ? ::app::Fuse::ICamera::ViewTransform(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::DrawContext*>(::app::Fuse::DrawContext__get_Current(NULL))->Camera())) : ::app::Uno::Float4x4__get_Identity(NULL), (::uPtr< ::app::Fuse::DrawContext*>(::app::Fuse::DrawContext__get_Current(NULL))->Camera() != NULL) ? ::app::Fuse::ICamera::ProjectionTransform(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::DrawContext*>(::app::Fuse::DrawContext__get_Current(NULL))->Camera())) : ::app::Uno::Float4x4__get_Identity(NULL))));
                __this->_draw_3e29a4cf.Uniform_14(15, ::app::Uno::Matrix__Transpose_2(NULL, worldInverse));
                __this->_draw_3e29a4cf.Sampler_2(16, ::uPtr< ::app::Fuse::Entities::DefaultMaterial*>(::uAs< ::app::Fuse::Entities::DefaultMaterial*>(material, ::app::Fuse::Entities::DefaultMaterial__typeof()))->DiffuseMap());
                __this->_draw_3e29a4cf.Sampler_2(17, ::uPtr< ::app::Fuse::Entities::DefaultMaterial*>(::uAs< ::app::Fuse::Entities::DefaultMaterial*>(material, ::app::Fuse::Entities::DefaultMaterial__typeof()))->NormalMap());
                __this->_draw_3e29a4cf.Sampler_2(18, ::uPtr< ::app::Fuse::Entities::DefaultMaterial*>(::uAs< ::app::Fuse::Entities::DefaultMaterial*>(material, ::app::Fuse::Entities::DefaultMaterial__typeof()))->SpecularMap());
                __this->_draw_3e29a4cf.Draw(batch->VertexCount(), batch->IndexType(), batch->IndexBuffer());
            }
        }
    }
}

void MeshBatchingEngine__init_DrawCalls(MeshBatchingEngine* __this)
{
    __this->_draw_753a684f = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New_1(NULL, ::uCast< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 331), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__typeof()));
    __this->_draw_3e29a4cf = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New_1(NULL, ::uCast< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 332), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__typeof()));
}

void MeshBatchingEngine___ObjInit(MeshBatchingEngine* __this)
{
    __this->drawLists = ::app::Uno::Collections::Dictionary__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___New_1(NULL);
    __this->batchers = ::app::Uno::Collections::Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__New_1(NULL);
    __this->worldArray = ::uNewArray(::app::Uno::Float4x4__typeof(), 16);
    __this->normalArray = ::uNewArray(::app::Uno::Float4x4__typeof(), 16);
    __this->init_DrawCalls();
}

MeshBatchingEngine* MeshBatchingEngine__New_1(::uStatic* __this)
{
    MeshBatchingEngine* inst = (::app::Fuse::Entities::MeshBatchingEngine*)::uAllocObject(sizeof(::app::Fuse::Entities::MeshBatchingEngine), ::app::Fuse::Entities::MeshBatchingEngine__typeof());
    inst->_ObjInit();
    return inst;
}

}}}
