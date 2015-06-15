// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Batching\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Drawing.Batching.Batch.h>
#include <app/Fuse.Drawing.Batching.BatchIndexBuffer.h>
#include <app/Fuse.Drawing.Batching.BatchVertexBuffer.h>
#include <app/Fuse.Drawing.Batching.Entry.h>
#include <app/Fuse.Drawing.Batching.MeshBatcher.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Byte4.h>
#include <app/Uno.Collections.Dictionary__int__int.h>
#include <app/Uno.Collections.Dictionary__string__Uno_Content_Models_VertexAt-f3a424ef.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Drawing_Batching_Batch.h>
#include <app/Uno.Collections.IEnumerable__Uno_Collections_KeyValuePair_strin-ae1db1cc.h>
#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Uno_Collections_KeyValuePair_strin-712665e8.h>
#include <app/Uno.Collections.KeyValuePair__string__Uno_Content_Models_Vertex-155cc651.h>
#include <app/Uno.Collections.List__Fuse_Drawing_Batching_Batch.h>
#include <app/Uno.Collections.List__Fuse_Drawing_Batching_Entry.h>
#include <app/Uno.Content.Models.IndexArray.h>
#include <app/Uno.Content.Models.ModelMesh.h>
#include <app/Uno.Content.Models.VertexAttributeArray.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Float3.h>
#include <app/Uno.Float4.h>
#include <app/Uno.Runtime.Implementation.Internal.ArrayEnumerable__Fuse_Drawi-9697b912.h>
#include <app/Uno.String.h>
#include <app/Uno.UInt.h>
#include <app/Uno.UShort.h>

namespace app {
namespace Fuse {
namespace Drawing {
namespace Batching {

MeshBatcher__uType* MeshBatcher__typeof()
{
    static MeshBatcher__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (MeshBatcher__uType*)::uAllocClassType(sizeof(MeshBatcher__uType), "Fuse.Drawing.Batching.MeshBatcher", ::uObject__typeof(), 0, 2);
        type->StrongRefOffsets[0] = offsetof(MeshBatcher, entries);
        type->StrongRefOffsets[1] = offsetof(MeshBatcher, batches);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "entries";
        type->StrongRefNames[1] = "batches";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

int MeshBatcher__get_EntryCount(MeshBatcher* __this)
{
    return ::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_Batching_Entry*>(__this->entries)->Count();
}

::uObject* MeshBatcher__get_Batches(MeshBatcher* __this)
{
    __this->Flush();
    return (::uObject*)::app::Uno::Runtime::Implementation::Internal::ArrayEnumerable__Fuse_Drawing_Batching_Batch__New_1(NULL, __this->batches);
}

int MeshBatcher__AddMesh(MeshBatcher* __this, ::app::Uno::Content::Models::ModelMesh* mesh)
{
    return __this->AddEntry(::app::Fuse::Drawing::Batching::Entry__New_1(NULL, mesh, ::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_Batching_Entry*>(__this->entries)->Count()));
}

int MeshBatcher__AddEntry(MeshBatcher* __this, ::app::Fuse::Drawing::Batching::Entry* e)
{
    ::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_Batching_Entry*>(__this->entries)->Add(e);
    return ::uPtr< ::app::Fuse::Drawing::Batching::Entry*>(e)->InstanceIndex;
}

void MeshBatcher__Flush(MeshBatcher* __this)
{
    ::app::Uno::Float4 ind_125 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_126 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_127 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_128 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_129 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_130 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_131 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_132 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_133 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_134 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_135 = ::app::Uno::Float4();

    if (__this->batches != NULL)
    {
        return;
    }

    ::app::Uno::Content::Models::VertexAttributeArray* position;
    ::app::Uno::Content::Models::VertexAttributeArray* texcoord;
    ::app::Uno::Content::Models::VertexAttributeArray* texcoord1;
    ::app::Uno::Content::Models::VertexAttributeArray* texcoord2;
    ::app::Uno::Content::Models::VertexAttributeArray* texcoord3;
    ::app::Uno::Content::Models::VertexAttributeArray* texcoord4;
    ::app::Uno::Content::Models::VertexAttributeArray* texcoord5;
    ::app::Uno::Content::Models::VertexAttributeArray* texcoord6;
    ::app::Uno::Content::Models::VertexAttributeArray* texcoord7;
    ::app::Uno::Content::Models::VertexAttributeArray* normal;
    ::app::Uno::Content::Models::VertexAttributeArray* tangent;
    ::app::Uno::Content::Models::VertexAttributeArray* binormal;
    ::app::Uno::Content::Models::VertexAttributeArray* color;
    ::app::Uno::Content::Models::VertexAttributeArray* boneWeights;
    ::app::Uno::Content::Models::VertexAttributeArray* boneIndex;
    ::app::Uno::Collections::List__Fuse_Drawing_Batching_Batch* batches = ::app::Uno::Collections::List__Fuse_Drawing_Batching_Batch__New_1(NULL);
    ::app::Fuse::Drawing::Batching::Batch* b = NULL;
    int virtualIndexBase = 0;
    ::app::Uno::Collections::Dictionary__int__int* virtualIndexToRealIndex = ::app::Uno::Collections::Dictionary__int__int__New_1(NULL);
    int batchVertexCount = 0;
    int batchIndexCount = 0;
    int batchVertexCutoff = 0;
    int batchIndexCutoff = 0;

    for (int e = 0; e < ::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_Batching_Entry*>(__this->entries)->Count(); e++)
    {
        ::app::Uno::Content::Models::ModelMesh* m = ::uPtr< ::app::Fuse::Drawing::Batching::Entry*>(::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_Batching_Entry*>(__this->entries)->Item(e))->Mesh;
        position = texcoord = texcoord1 = texcoord2 = texcoord3 = texcoord4 = texcoord5 = texcoord6 = texcoord7 = normal = tangent = binormal = color = boneWeights = boneIndex = NULL;

        for (::uObject* enum_123 = ::app::Uno::Collections::IEnumerable__Uno_Collections_KeyValuePair_string_Uno_Content_Models_VertexAttributeArray_::GetEnumerator(::uPtr< ::uObject*>(::uPtr< ::app::Uno::Content::Models::ModelMesh*>(m)->VertexAttributes())); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_123)); )
        {
            ::app::Uno::Collections::KeyValuePair__string__Uno_Content_Models_VertexAttributeArray v = ::app::Uno::Collections::IEnumerator__Uno_Collections_KeyValuePair_string_Uno_Content_Models_VertexAttributeArray_::Current(::uPtr< ::uObject*>(enum_123));

            if (::app::Uno::String__op_Equality(NULL, v.Key(), ::uGetConstString("Position")))
            {
                position = v.Value();
            }
            else if (::app::Uno::String__op_Equality(NULL, v.Key(), ::uGetConstString("TexCoord")))
            {
                texcoord = v.Value();
            }
            else if (::app::Uno::String__op_Equality(NULL, v.Key(), ::uGetConstString("TexCoord1")))
            {
                texcoord1 = v.Value();
            }
            else if (::app::Uno::String__op_Equality(NULL, v.Key(), ::uGetConstString("TexCoord2")))
            {
                texcoord2 = v.Value();
            }
            else if (::app::Uno::String__op_Equality(NULL, v.Key(), ::uGetConstString("TexCoord3")))
            {
                texcoord3 = v.Value();
            }
            else if (::app::Uno::String__op_Equality(NULL, v.Key(), ::uGetConstString("TexCoord4")))
            {
                texcoord4 = v.Value();
            }
            else if (::app::Uno::String__op_Equality(NULL, v.Key(), ::uGetConstString("TexCoord5")))
            {
                texcoord5 = v.Value();
            }
            else if (::app::Uno::String__op_Equality(NULL, v.Key(), ::uGetConstString("TexCoord6")))
            {
                texcoord6 = v.Value();
            }
            else if (::app::Uno::String__op_Equality(NULL, v.Key(), ::uGetConstString("TexCoord7")))
            {
                texcoord7 = v.Value();
            }
            else if (::app::Uno::String__op_Equality(NULL, v.Key(), ::uGetConstString("Normal")))
            {
                normal = v.Value();
            }
            else if (::app::Uno::String__op_Equality(NULL, v.Key(), ::uGetConstString("Tangent")))
            {
                tangent = v.Value();
            }
            else if (::app::Uno::String__op_Equality(NULL, v.Key(), ::uGetConstString("Binormal")))
            {
                binormal = v.Value();
            }
            else if (::app::Uno::String__op_Equality(NULL, v.Key(), ::uGetConstString("Color")))
            {
                color = v.Value();
            }
            else if (::app::Uno::String__op_Equality(NULL, v.Key(), ::uGetConstString("BoneWeights")))
            {
                boneWeights = v.Value();
            }
            else if (::app::Uno::String__op_Equality(NULL, v.Key(), ::uGetConstString("BoneIndices")))
            {
                boneIndex = v.Value();
            }
        }

        if (m->Indices() == NULL)
        {
            m = MeshBatcher__CreateFakeIndexBuffer(NULL, m);
        }

        for (int i = 0; i < ::uPtr< ::app::Uno::Content::Models::ModelMesh*>(m)->IndexCount(); i++)
        {
            if ((batchVertexCount >= batchVertexCutoff) || (batchIndexCount >= batchIndexCutoff))
            {
                batchVertexCutoff = 65535;
                batchIndexCutoff = 100000;
                b = ::app::Fuse::Drawing::Batching::Batch__New_1(NULL, batchVertexCutoff, batchIndexCutoff, true);
                ::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_Batching_Batch*>(batches)->Add(b);
                virtualIndexToRealIndex = ::app::Uno::Collections::Dictionary__int__int__New_1(NULL);
                batchVertexCount = 0;
                batchIndexCount = 0;
            }

            int originalIndex = ::uPtr< ::app::Uno::Content::Models::IndexArray*>(::uPtr< ::app::Uno::Content::Models::ModelMesh*>(m)->Indices())->GetInt(i);
            int virtualIndex = virtualIndexBase + originalIndex;
            int newIndex = int();

            if (!::uPtr< ::app::Uno::Collections::Dictionary__int__int*>(virtualIndexToRealIndex)->TryGetValue(virtualIndex, &newIndex))
            {
                newIndex = batchVertexCount;
                ::uPtr< ::app::Uno::Collections::Dictionary__int__int*>(virtualIndexToRealIndex)->Add(virtualIndex, newIndex);

                if (position != NULL)
                {
                    ::uPtr< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*>(::uPtr< ::app::Fuse::Drawing::Batching::Batch*>(b)->Positions())->Write_1((ind_125 = ::uPtr< ::app::Uno::Content::Models::VertexAttributeArray*>(position)->GetFloat4(originalIndex), ::app::Uno::Float3__New_2(NULL, ind_125.X, ind_125.Y, ind_125.Z)));
                }

                if (texcoord != NULL)
                {
                    ::uPtr< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*>(b->TexCoord0s())->Write((ind_126 = ::uPtr< ::app::Uno::Content::Models::VertexAttributeArray*>(texcoord)->GetFloat4(originalIndex), ::app::Uno::Float2__New_2(NULL, ind_126.X, ind_126.Y)));
                }

                if (texcoord1 != NULL)
                {
                    ::uPtr< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*>(b->TexCoord1s())->Write((ind_127 = ::uPtr< ::app::Uno::Content::Models::VertexAttributeArray*>(texcoord1)->GetFloat4(originalIndex), ::app::Uno::Float2__New_2(NULL, ind_127.X, ind_127.Y)));
                }

                if (texcoord2 != NULL)
                {
                    ::uPtr< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*>(b->TexCoord2s())->Write((ind_128 = ::uPtr< ::app::Uno::Content::Models::VertexAttributeArray*>(texcoord2)->GetFloat4(originalIndex), ::app::Uno::Float2__New_2(NULL, ind_128.X, ind_128.Y)));
                }

                if (texcoord3 != NULL)
                {
                    ::uPtr< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*>(b->TexCoord3s())->Write((ind_129 = ::uPtr< ::app::Uno::Content::Models::VertexAttributeArray*>(texcoord3)->GetFloat4(originalIndex), ::app::Uno::Float2__New_2(NULL, ind_129.X, ind_129.Y)));
                }

                if (texcoord4 != NULL)
                {
                    ::uPtr< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*>(b->TexCoord4s())->Write((ind_130 = ::uPtr< ::app::Uno::Content::Models::VertexAttributeArray*>(texcoord4)->GetFloat4(originalIndex), ::app::Uno::Float2__New_2(NULL, ind_130.X, ind_130.Y)));
                }

                if (texcoord5 != NULL)
                {
                    ::uPtr< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*>(b->TexCoord5s())->Write((ind_131 = ::uPtr< ::app::Uno::Content::Models::VertexAttributeArray*>(texcoord5)->GetFloat4(originalIndex), ::app::Uno::Float2__New_2(NULL, ind_131.X, ind_131.Y)));
                }

                if (texcoord6 != NULL)
                {
                    ::uPtr< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*>(b->TexCoord6s())->Write((ind_132 = ::uPtr< ::app::Uno::Content::Models::VertexAttributeArray*>(texcoord6)->GetFloat4(originalIndex), ::app::Uno::Float2__New_2(NULL, ind_132.X, ind_132.Y)));
                }

                if (texcoord7 != NULL)
                {
                    ::uPtr< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*>(b->TexCoord7s())->Write((ind_133 = ::uPtr< ::app::Uno::Content::Models::VertexAttributeArray*>(texcoord7)->GetFloat4(originalIndex), ::app::Uno::Float2__New_2(NULL, ind_133.X, ind_133.Y)));
                }

                if (normal != NULL)
                {
                    ::uPtr< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*>(b->Normals())->Write_1((ind_134 = ::uPtr< ::app::Uno::Content::Models::VertexAttributeArray*>(normal)->GetFloat4(originalIndex), ::app::Uno::Float3__New_2(NULL, ind_134.X, ind_134.Y, ind_134.Z)));
                }

                if (tangent != NULL)
                {
                    ::uPtr< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*>(b->Tangents())->Write_2(::uPtr< ::app::Uno::Content::Models::VertexAttributeArray*>(tangent)->GetFloat4(originalIndex));
                }

                if (binormal != NULL)
                {
                    ::uPtr< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*>(b->Binormals())->Write_1((ind_135 = ::uPtr< ::app::Uno::Content::Models::VertexAttributeArray*>(binormal)->GetFloat4(originalIndex), ::app::Uno::Float3__New_2(NULL, ind_135.X, ind_135.Y, ind_135.Z)));
                }

                if (color != NULL)
                {
                    ::uPtr< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*>(b->Colors())->Write_2(::uPtr< ::app::Uno::Content::Models::VertexAttributeArray*>(color)->GetFloat4(originalIndex));
                }

                if (boneWeights != NULL)
                {
                    ::uPtr< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*>(b->BoneWeightBuffer())->Write_5(::uPtr< ::app::Uno::Content::Models::VertexAttributeArray*>(boneWeights)->GetByte4Normalized(originalIndex));
                }

                if (boneIndex != NULL)
                {
                    ::uPtr< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*>(b->BoneIndexBuffer())->Write_5(::uPtr< ::app::Uno::Content::Models::VertexAttributeArray*>(boneIndex)->GetByte4(originalIndex));
                }

                ::uPtr< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*>(b->InstanceIndices())->Write_9((::uUShort)::uPtr< ::app::Fuse::Drawing::Batching::Entry*>(::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_Batching_Entry*>(__this->entries)->Item(e))->InstanceIndex);
                batchVertexCount++;
            }

            ::uPtr< ::app::Fuse::Drawing::Batching::BatchIndexBuffer*>(::uPtr< ::app::Fuse::Drawing::Batching::Batch*>(b)->Indices())->Write_1((::uUShort)newIndex);
            batchIndexCount++;
        }

        virtualIndexBase = virtualIndexBase + ::uPtr< ::app::Uno::Content::Models::ModelMesh*>(m)->VertexCount();
    }

    __this->batches = ::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_Batching_Batch*>(batches)->ToArray();
}

::app::Uno::Content::Models::ModelMesh* MeshBatcher__CreateFakeIndexBuffer(::uStatic* __this, ::app::Uno::Content::Models::ModelMesh* m)
{
    ::uArray* d = ::uNewArray(::app::Uno::UInt__typeof(), ::uPtr< ::app::Uno::Content::Models::ModelMesh*>(m)->VertexCount());

    for (int i = 0; i < d->Length(); i++)
    {
        d->Item< ::uUInt>(i) = (::uUInt)i;
    }

    ::app::Uno::Collections::Dictionary__string__Uno_Content_Models_VertexAttributeArray* dict = ::app::Uno::Collections::Dictionary__string__Uno_Content_Models_VertexAttributeArray__New_1(NULL);

    for (::uObject* enum_124 = ::app::Uno::Collections::IEnumerable__Uno_Collections_KeyValuePair_string_Uno_Content_Models_VertexAttributeArray_::GetEnumerator(::uPtr< ::uObject*>(m->VertexAttributes())); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_124)); )
    {
        ::app::Uno::Collections::KeyValuePair__string__Uno_Content_Models_VertexAttributeArray v = ::app::Uno::Collections::IEnumerator__Uno_Collections_KeyValuePair_string_Uno_Content_Models_VertexAttributeArray_::Current(::uPtr< ::uObject*>(enum_124));
        ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Content_Models_VertexAttributeArray*>(dict)->Item(v.Key(), v.Value());
    }

    return ::app::Uno::Content::Models::ModelMesh__New_1(NULL, m->Name(), m->PrimitiveType(), dict, ::app::Uno::Content::Models::IndexArray__New_4(NULL, d));
}

void MeshBatcher___ObjInit(MeshBatcher* __this)
{
    __this->entries = ::app::Uno::Collections::List__Fuse_Drawing_Batching_Entry__New_1(NULL);
}

MeshBatcher* MeshBatcher__New_1(::uStatic* __this)
{
    MeshBatcher* inst = (::app::Fuse::Drawing::Batching::MeshBatcher*)::uAllocObject(sizeof(::app::Fuse::Drawing::Batching::MeshBatcher), ::app::Fuse::Drawing::Batching::MeshBatcher__typeof());
    inst->_ObjInit();
    return inst;
}

}}}}
