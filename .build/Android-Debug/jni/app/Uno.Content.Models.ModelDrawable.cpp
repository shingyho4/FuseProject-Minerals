// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Content\Models\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Content.Models.ModelDrawable.h>
#include <app/Uno.Content.Models.ModelMesh.h>

namespace app {
namespace Uno {
namespace Content {
namespace Models {

ModelDrawable__uType* ModelDrawable__typeof()
{
    static ModelDrawable__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (ModelDrawable__uType*)::uAllocClassType(sizeof(ModelDrawable__uType), "Uno.Content.Models.ModelDrawable", ::uObject__typeof(), 0, 1);
        type->StrongRefOffsets[0] = offsetof(ModelDrawable, _mesh);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_mesh";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Uno::Content::Models::ModelMesh* ModelDrawable__get_Mesh(ModelDrawable* __this)
{
    return __this->_mesh;
}

}}}}
