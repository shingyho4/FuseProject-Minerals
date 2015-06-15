// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Content\Models\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_CONTENT_MODELS_MODEL_MESH_H__
#define __APP_UNO_CONTENT_MODELS_MODEL_MESH_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary__string__Uno_Content_Models_VertexAttributeArray; } } }
namespace app { namespace Uno { namespace Content { namespace Models { struct IndexArray; } } } }
namespace app { namespace Uno { namespace Content { namespace Models { struct VertexAttributeArray; } } } }

namespace app {
namespace Uno {
namespace Content {
namespace Models {

struct ModelMesh;

struct ModelMesh__uType : ::uClassType
{
};

ModelMesh__uType* ModelMesh__typeof();

::uString* ModelMesh__get_Name(ModelMesh* __this);
int ModelMesh__get_PrimitiveType(ModelMesh* __this);
::app::Uno::Content::Models::IndexArray* ModelMesh__get_Indices(ModelMesh* __this);
::uObject* ModelMesh__get_VertexAttributes(ModelMesh* __this);
int ModelMesh__get_IndexCount(ModelMesh* __this);
int ModelMesh__get_VertexCount(ModelMesh* __this);
::app::Uno::Content::Models::VertexAttributeArray* ModelMesh__get_Positions(ModelMesh* __this);
::app::Uno::Content::Models::VertexAttributeArray* ModelMesh__TryGetVertexAttribute(ModelMesh* __this, ::uString* name);
void ModelMesh___ObjInit(ModelMesh* __this, ::uString* name, int type, ::app::Uno::Collections::Dictionary__string__Uno_Content_Models_VertexAttributeArray* vertexAttributes, ::app::Uno::Content::Models::IndexArray* indices);
ModelMesh* ModelMesh__New_1(::uStatic* __this, ::uString* name, int type, ::app::Uno::Collections::Dictionary__string__Uno_Content_Models_VertexAttributeArray* vertexAttributes, ::app::Uno::Content::Models::IndexArray* indices);

struct ModelMesh : ::uObject
{
    ::uStrong< ::uString*> _name;
    int _primitiveType;
    ::uStrong< ::app::Uno::Content::Models::IndexArray*> _indices;
    ::uStrong< ::app::Uno::Collections::Dictionary__string__Uno_Content_Models_VertexAttributeArray*> _vertexAttributes;

    ::app::Uno::Content::Models::VertexAttributeArray* TryGetVertexAttribute(::uString* name) { return ModelMesh__TryGetVertexAttribute(this, name); }
    void _ObjInit(::uString* name, int type, ::app::Uno::Collections::Dictionary__string__Uno_Content_Models_VertexAttributeArray* vertexAttributes, ::app::Uno::Content::Models::IndexArray* indices) { ModelMesh___ObjInit(this, name, type, vertexAttributes, indices); }
    ::uString* Name() { return ModelMesh__get_Name(this); }
    int PrimitiveType() { return ModelMesh__get_PrimitiveType(this); }
    ::app::Uno::Content::Models::IndexArray* Indices() { return ModelMesh__get_Indices(this); }
    ::uObject* VertexAttributes() { return ModelMesh__get_VertexAttributes(this); }
    int IndexCount() { return ModelMesh__get_IndexCount(this); }
    int VertexCount() { return ModelMesh__get_VertexCount(this); }
    ::app::Uno::Content::Models::VertexAttributeArray* Positions() { return ModelMesh__get_Positions(this); }
};

}}}}

#include <app/Uno.Int.h>

namespace app {
namespace Uno {
namespace Content {
namespace Models {

}}}}


#endif
