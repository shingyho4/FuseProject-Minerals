// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Entities\0.2.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Entities.DirectArrayMeshIntersecter.h>

namespace app {
namespace Fuse {
namespace Entities {

DirectArrayMeshIntersecter__uType* DirectArrayMeshIntersecter__typeof()
{
    static DirectArrayMeshIntersecter__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (DirectArrayMeshIntersecter__uType*)::uAllocClassType(sizeof(DirectArrayMeshIntersecter__uType), "Fuse.Entities.DirectArrayMeshIntersecter", ::app::Fuse::Entities::TriangleMeshIntersecter__typeof(), 0, 1);
        type->__fp_GetTriangle = (::app::Uno::Geometry::Triangle(*)(::app::Fuse::Entities::TriangleMeshIntersecter*, int))DirectArrayMeshIntersecter__GetTriangle;

        type->StrongRefOffsets[0] = offsetof(DirectArrayMeshIntersecter, _positions);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_positions";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Uno::Geometry::Triangle DirectArrayMeshIntersecter__GetTriangle(DirectArrayMeshIntersecter* __this, int t)
{
    int i = t * 3;
    return ::app::Uno::Geometry::Triangle__New_1(NULL, ::uPtr< ::uArray*>(__this->_positions)->Item< ::app::Uno::Float3>(i), ::uPtr< ::uArray*>(__this->_positions)->Item< ::app::Uno::Float3>(i + 1), ::uPtr< ::uArray*>(__this->_positions)->Item< ::app::Uno::Float3>(i + 2));
}

}}}
