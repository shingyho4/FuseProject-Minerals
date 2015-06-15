// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Entities\0.2.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Entities.ModelMeshHelpers.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Content.Models.ModelMesh.h>
#include <app/Uno.Content.Models.VertexAttributeArray.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float3.h>
#include <app/Uno.Float4.h>
#include <app/Uno.Geometry.Box.h>
#include <app/Uno.Int.h>
#include <app/Uno.Math.h>

namespace app {
namespace Fuse {
namespace Entities {

ModelMeshHelpers__uType* ModelMeshHelpers__typeof()
{
    static ModelMeshHelpers__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (ModelMeshHelpers__uType*)::uAllocClassType(sizeof(ModelMeshHelpers__uType), "Fuse.Entities.ModelMeshHelpers");
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Uno::Geometry::Box ModelMeshHelpers__CalculateAABB(::uStatic* __this, ::app::Uno::Content::Models::ModelMesh* modelMesh)
{
    ::app::Uno::Content::Models::VertexAttributeArray* positions = ::uPtr< ::app::Uno::Content::Models::ModelMesh*>(modelMesh)->Positions();
    ::app::Uno::Float3 min = ::app::Uno::Float3__New_2(NULL, 3.402823e+38f, 3.402823e+38f, 3.402823e+38f);
    ::app::Uno::Float3 max = ::app::Uno::Float3__New_2(NULL, -3.402823e+38f, -3.402823e+38f, -3.402823e+38f);

    for (int v = 0; v < modelMesh->VertexCount(); v++)
    {
        ::app::Uno::Float4 ind_123 = ::uPtr< ::app::Uno::Content::Models::VertexAttributeArray*>(positions)->GetFloat4(v);
        ::app::Uno::Float3 p = ::app::Uno::Float3__New_2(NULL, ind_123.X, ind_123.Y, ind_123.Z);
        min = ::app::Uno::Float3__New_2(NULL, ::app::Uno::Math__Min_1(NULL, min.X, p.X), ::app::Uno::Math__Min_1(NULL, min.Y, p.Y), ::app::Uno::Math__Min_1(NULL, min.Z, p.Z));
        max = ::app::Uno::Float3__New_2(NULL, ::app::Uno::Math__Max_1(NULL, max.X, p.X), ::app::Uno::Math__Max_1(NULL, max.Y, p.Y), ::app::Uno::Math__Max_1(NULL, max.Z, p.Z));
    }

    return ::app::Uno::Geometry::Box__New_1(NULL, min, max);
}

}}}
