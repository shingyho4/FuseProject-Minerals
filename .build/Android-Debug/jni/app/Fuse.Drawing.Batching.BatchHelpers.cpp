// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Batching\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Drawing.Batching.Batch.h>
#include <app/Fuse.Drawing.Batching.BatchHelpers.h>
#include <app/Fuse.Drawing.Batching.BatchIndexBuffer.h>
#include <app/Fuse.Drawing.Batching.BatchVertexBuffer.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Buffer.h>
#include <app/Uno.Collections.IEnumerable__Uno_Collections_KeyValuePair_strin-ae1db1cc.h>
#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Uno_Collections_KeyValuePair_strin-712665e8.h>
#include <app/Uno.Collections.KeyValuePair__string__Uno_Content_Models_Vertex-155cc651.h>
#include <app/Uno.Content.Models.IndexArray.h>
#include <app/Uno.Content.Models.ModelMesh.h>
#include <app/Uno.Content.Models.VertexAttributeArray.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Int.h>
#include <app/Uno.String.h>
#include <app/Uno.UShort.h>

namespace app {
namespace Fuse {
namespace Drawing {
namespace Batching {

BatchHelpers__uType* BatchHelpers__typeof()
{
    static BatchHelpers__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (BatchHelpers__uType*)::uAllocClassType(sizeof(BatchHelpers__uType), "Fuse.Drawing.Batching.BatchHelpers");
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Fuse::Drawing::Batching::Batch* BatchHelpers__CreateSingleBatch(::uStatic* __this, ::app::Uno::Content::Models::ModelMesh* m)
{
    ::app::Fuse::Drawing::Batching::Batch* b;

    if (::uPtr< ::app::Uno::Content::Models::ModelMesh*>(m)->Indices() != NULL)
    {
        b = ::app::Fuse::Drawing::Batching::Batch__New_1(NULL, ::uPtr< ::app::Uno::Content::Models::ModelMesh*>(m)->VertexCount(), ::uPtr< ::app::Uno::Content::Models::ModelMesh*>(m)->IndexCount(), true);
        ::uPtr< ::app::Fuse::Drawing::Batching::Batch*>(b)->Indices(BatchHelpers__CreateBatchIndexBuffer(NULL, m->Indices()));
    }
    else
    {
        b = ::app::Fuse::Drawing::Batching::Batch__New_1(NULL, ::uPtr< ::app::Uno::Content::Models::ModelMesh*>(m)->VertexCount(), ::uPtr< ::app::Uno::Content::Models::ModelMesh*>(m)->VertexCount(), true);

        for (int i = 0; i < m->VertexCount(); i++)
        {
            ::uPtr< ::app::Fuse::Drawing::Batching::BatchIndexBuffer*>(::uPtr< ::app::Fuse::Drawing::Batching::Batch*>(b)->Indices())->Write_1((::uUShort)i);
        }
    }

    for (::uObject* enum_123 = ::app::Uno::Collections::IEnumerable__Uno_Collections_KeyValuePair_string_Uno_Content_Models_VertexAttributeArray_::GetEnumerator(::uPtr< ::uObject*>(::uPtr< ::app::Uno::Content::Models::ModelMesh*>(m)->VertexAttributes())); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_123)); )
    {
        ::app::Uno::Collections::KeyValuePair__string__Uno_Content_Models_VertexAttributeArray v = ::app::Uno::Collections::IEnumerator__Uno_Collections_KeyValuePair_string_Uno_Content_Models_VertexAttributeArray_::Current(::uPtr< ::uObject*>(enum_123));

        if (::app::Uno::String__op_Equality(NULL, v.Key(), ::uGetConstString("Position")))
        {
            ::uPtr< ::app::Fuse::Drawing::Batching::Batch*>(b)->Positions(BatchHelpers__CreateBatchVertexBuffer(NULL, v.Value()));
        }
        else if (::app::Uno::String__op_Equality(NULL, v.Key(), ::uGetConstString("TexCoord")))
        {
            b->TexCoord0s(BatchHelpers__CreateBatchVertexBuffer(NULL, v.Value()));
        }
        else if (::app::Uno::String__op_Equality(NULL, v.Key(), ::uGetConstString("TexCoord1")))
        {
            b->TexCoord1s(BatchHelpers__CreateBatchVertexBuffer(NULL, v.Value()));
        }
        else if (::app::Uno::String__op_Equality(NULL, v.Key(), ::uGetConstString("TexCoord2")))
        {
            b->TexCoord2s(BatchHelpers__CreateBatchVertexBuffer(NULL, v.Value()));
        }
        else if (::app::Uno::String__op_Equality(NULL, v.Key(), ::uGetConstString("TexCoord3")))
        {
            b->TexCoord3s(BatchHelpers__CreateBatchVertexBuffer(NULL, v.Value()));
        }
        else if (::app::Uno::String__op_Equality(NULL, v.Key(), ::uGetConstString("TexCoord4")))
        {
            b->TexCoord4s(BatchHelpers__CreateBatchVertexBuffer(NULL, v.Value()));
        }
        else if (::app::Uno::String__op_Equality(NULL, v.Key(), ::uGetConstString("TexCoord5")))
        {
            b->TexCoord5s(BatchHelpers__CreateBatchVertexBuffer(NULL, v.Value()));
        }
        else if (::app::Uno::String__op_Equality(NULL, v.Key(), ::uGetConstString("TexCoord6")))
        {
            b->TexCoord6s(BatchHelpers__CreateBatchVertexBuffer(NULL, v.Value()));
        }
        else if (::app::Uno::String__op_Equality(NULL, v.Key(), ::uGetConstString("TexCoord7")))
        {
            b->TexCoord7s(BatchHelpers__CreateBatchVertexBuffer(NULL, v.Value()));
        }
        else if (::app::Uno::String__op_Equality(NULL, v.Key(), ::uGetConstString("Normal")))
        {
            b->Normals(BatchHelpers__CreateBatchVertexBuffer(NULL, v.Value()));
        }
        else if (::app::Uno::String__op_Equality(NULL, v.Key(), ::uGetConstString("Tangent")))
        {
            b->Tangents(BatchHelpers__CreateBatchVertexBuffer(NULL, v.Value()));
        }
        else if (::app::Uno::String__op_Equality(NULL, v.Key(), ::uGetConstString("Binormal")))
        {
            b->Binormals(BatchHelpers__CreateBatchVertexBuffer(NULL, v.Value()));
        }
        else if (::app::Uno::String__op_Equality(NULL, v.Key(), ::uGetConstString("Color")))
        {
            b->Colors(BatchHelpers__CreateBatchVertexBuffer(NULL, v.Value()));
        }
        else if (::app::Uno::String__op_Equality(NULL, v.Key(), ::uGetConstString("TransformIndex")))
        {
            b->InstanceIndices(BatchHelpers__CreateBatchVertexBuffer(NULL, v.Value()));
        }
        else if (::app::Uno::String__op_Equality(NULL, v.Key(), ::uGetConstString("BoneWeights")))
        {
            b->BoneWeightBuffer(BatchHelpers__CreateBatchVertexBuffer(NULL, v.Value()));
        }
        else if (::app::Uno::String__op_Equality(NULL, v.Key(), ::uGetConstString("BoneIndices")))
        {
            b->BoneIndexBuffer(BatchHelpers__CreateBatchVertexBuffer(NULL, v.Value()));
        }
    }

    return b;
}

::app::Fuse::Drawing::Batching::BatchVertexBuffer* BatchHelpers__CreateBatchVertexBuffer(::uStatic* __this, ::app::Uno::Content::Models::VertexAttributeArray* array)
{
    switch (::uPtr< ::app::Uno::Content::Models::VertexAttributeArray*>(array)->Type())
    {
        case 1:
        {
            return ::app::Fuse::Drawing::Batching::BatchVertexBuffer__New_2(NULL, ::uPtr< ::app::Uno::Content::Models::VertexAttributeArray*>(array)->Type(), ::uPtr< ::app::Uno::Content::Models::VertexAttributeArray*>(array)->Buffer());
        }
        case 2:
        {
            return ::app::Fuse::Drawing::Batching::BatchVertexBuffer__New_2(NULL, ::uPtr< ::app::Uno::Content::Models::VertexAttributeArray*>(array)->Type(), ::uPtr< ::app::Uno::Content::Models::VertexAttributeArray*>(array)->Buffer());
        }
        case 3:
        {
            return ::app::Fuse::Drawing::Batching::BatchVertexBuffer__New_2(NULL, ::uPtr< ::app::Uno::Content::Models::VertexAttributeArray*>(array)->Type(), ::uPtr< ::app::Uno::Content::Models::VertexAttributeArray*>(array)->Buffer());
        }
        case 4:
        {
            return ::app::Fuse::Drawing::Batching::BatchVertexBuffer__New_2(NULL, ::uPtr< ::app::Uno::Content::Models::VertexAttributeArray*>(array)->Type(), ::uPtr< ::app::Uno::Content::Models::VertexAttributeArray*>(array)->Buffer());
        }
        case 17:
        case 18:
        {
            return ::app::Fuse::Drawing::Batching::BatchVertexBuffer__New_2(NULL, ::uPtr< ::app::Uno::Content::Models::VertexAttributeArray*>(array)->Type(), ::uPtr< ::app::Uno::Content::Models::VertexAttributeArray*>(array)->Buffer());
        }
        case 19:
        case 20:
        {
            return ::app::Fuse::Drawing::Batching::BatchVertexBuffer__New_2(NULL, ::uPtr< ::app::Uno::Content::Models::VertexAttributeArray*>(array)->Type(), ::uPtr< ::app::Uno::Content::Models::VertexAttributeArray*>(array)->Buffer());
        }
        default:
        {
            U_THROW(::app::Uno::Exception__New_1(NULL, ::uGetConstString("Unsupported vertex attribute type")));
        }
    }
}

::app::Fuse::Drawing::Batching::BatchIndexBuffer* BatchHelpers__CreateBatchIndexBuffer(::uStatic* __this, ::app::Uno::Content::Models::IndexArray* array)
{
    switch (::uPtr< ::app::Uno::Content::Models::IndexArray*>(array)->Type())
    {
        case 1:
        {
            return ::app::Fuse::Drawing::Batching::BatchIndexBuffer__New_2(NULL, ::uPtr< ::app::Uno::Content::Models::IndexArray*>(array)->Type(), ::uPtr< ::app::Uno::Content::Models::IndexArray*>(array)->Buffer());
        }
        case 2:
        {
            return ::app::Fuse::Drawing::Batching::BatchIndexBuffer__New_2(NULL, ::uPtr< ::app::Uno::Content::Models::IndexArray*>(array)->Type(), ::uPtr< ::app::Uno::Content::Models::IndexArray*>(array)->Buffer());
        }
        case 4:
        {
            return ::app::Fuse::Drawing::Batching::BatchIndexBuffer__New_2(NULL, ::uPtr< ::app::Uno::Content::Models::IndexArray*>(array)->Type(), ::uPtr< ::app::Uno::Content::Models::IndexArray*>(array)->Buffer());
        }
        default:
        {
            U_THROW(::app::Uno::Exception__New_1(NULL, ::uGetConstString("Unsupported index type")));
        }
    }
}

}}}}
