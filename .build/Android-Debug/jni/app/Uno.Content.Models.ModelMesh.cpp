// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Content\Models\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Bool.h>
#include <app/Uno.Collections.Dictionary__string__Uno_Content_Models_VertexAt-f3a424ef.h>
#include <app/Uno.Collections.IEnumerable__Uno_Collections_KeyValuePair_strin-ae1db1cc.h>
#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Uno_Collections_KeyValuePair_strin-712665e8.h>
#include <app/Uno.Collections.KeyValuePair__string__Uno_Content_Models_Vertex-155cc651.h>
#include <app/Uno.Content.Models.IndexArray.h>
#include <app/Uno.Content.Models.ModelMesh.h>
#include <app/Uno.Content.Models.VertexAttributeArray.h>
#include <app/Uno.String.h>

namespace app {
namespace Uno {
namespace Content {
namespace Models {

ModelMesh__uType* ModelMesh__typeof()
{
    static ModelMesh__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (ModelMesh__uType*)::uAllocClassType(sizeof(ModelMesh__uType), "Uno.Content.Models.ModelMesh", ::uObject__typeof(), 0, 3);
        type->StrongRefOffsets[0] = offsetof(ModelMesh, _name);
        type->StrongRefOffsets[1] = offsetof(ModelMesh, _indices);
        type->StrongRefOffsets[2] = offsetof(ModelMesh, _vertexAttributes);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_name";
        type->StrongRefNames[1] = "_indices";
        type->StrongRefNames[2] = "_vertexAttributes";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::uString* ModelMesh__get_Name(ModelMesh* __this)
{
    return __this->_name;
}

int ModelMesh__get_PrimitiveType(ModelMesh* __this)
{
    return __this->_primitiveType;
}

::app::Uno::Content::Models::IndexArray* ModelMesh__get_Indices(ModelMesh* __this)
{
    return __this->_indices;
}

::uObject* ModelMesh__get_VertexAttributes(ModelMesh* __this)
{
    return (::uObject*)__this->_vertexAttributes;
}

int ModelMesh__get_IndexCount(ModelMesh* __this)
{
    return (__this->Indices() != NULL) ? ::uPtr< ::app::Uno::Content::Models::IndexArray*>(__this->Indices())->Count() : -1;
}

int ModelMesh__get_VertexCount(ModelMesh* __this)
{
    for (::uObject* enum_123 = ::app::Uno::Collections::IEnumerable__Uno_Collections_KeyValuePair_string_Uno_Content_Models_VertexAttributeArray_::GetEnumerator(::uPtr< ::uObject*>(__this->VertexAttributes())); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_123)); )
    {
        ::app::Uno::Collections::KeyValuePair__string__Uno_Content_Models_VertexAttributeArray attrib = ::app::Uno::Collections::IEnumerator__Uno_Collections_KeyValuePair_string_Uno_Content_Models_VertexAttributeArray_::Current(::uPtr< ::uObject*>(enum_123));
        return ::uPtr< ::app::Uno::Content::Models::VertexAttributeArray*>(attrib.Value())->Count();
    }

    return 0;
}

::app::Uno::Content::Models::VertexAttributeArray* ModelMesh__get_Positions(ModelMesh* __this)
{
    return __this->TryGetVertexAttribute(::uGetConstString("Position"));
}

::app::Uno::Content::Models::VertexAttributeArray* ModelMesh__TryGetVertexAttribute(ModelMesh* __this, ::uString* name)
{
    ::app::Uno::Content::Models::VertexAttributeArray* result;
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Content_Models_VertexAttributeArray*>(__this->_vertexAttributes)->TryGetValue(name, &result);
    return result;
}

void ModelMesh___ObjInit(ModelMesh* __this, ::uString* name, int type, ::app::Uno::Collections::Dictionary__string__Uno_Content_Models_VertexAttributeArray* vertexAttributes, ::app::Uno::Content::Models::IndexArray* indices)
{
    __this->_name = name;
    __this->_primitiveType = type;
    __this->_vertexAttributes = vertexAttributes;
    __this->_indices = indices;
}

ModelMesh* ModelMesh__New_1(::uStatic* __this, ::uString* name, int type, ::app::Uno::Collections::Dictionary__string__Uno_Content_Models_VertexAttributeArray* vertexAttributes, ::app::Uno::Content::Models::IndexArray* indices)
{
    ModelMesh* inst = (::app::Uno::Content::Models::ModelMesh*)::uAllocObject(sizeof(::app::Uno::Content::Models::ModelMesh), ::app::Uno::Content::Models::ModelMesh__typeof());
    inst->_ObjInit(name, type, vertexAttributes, indices);
    return inst;
}

}}}}
