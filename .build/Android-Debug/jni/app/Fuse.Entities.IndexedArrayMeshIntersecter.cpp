// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Entities\0.2.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Entities.IndexedArrayMeshIntersecter.h>

namespace app {
namespace Fuse {
namespace Entities {

IndexedArrayMeshIntersecter__uType* IndexedArrayMeshIntersecter__typeof()
{
    static IndexedArrayMeshIntersecter__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (IndexedArrayMeshIntersecter__uType*)::uAllocClassType(sizeof(IndexedArrayMeshIntersecter__uType), "Fuse.Entities.IndexedArrayMeshIntersecter", ::app::Fuse::Entities::TriangleMeshIntersecter__typeof(), 0, 2);
        type->__fp_GetTriangle = (::app::Uno::Geometry::Triangle(*)(::app::Fuse::Entities::TriangleMeshIntersecter*, int))IndexedArrayMeshIntersecter__GetTriangle;

        type->StrongRefOffsets[0] = offsetof(IndexedArrayMeshIntersecter, _indices);
        type->StrongRefOffsets[1] = offsetof(IndexedArrayMeshIntersecter, _positions);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_indices";
        type->StrongRefNames[1] = "_positions";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Uno::Geometry::Triangle IndexedArrayMeshIntersecter__GetTriangle(IndexedArrayMeshIntersecter* __this, int t)
{
    int i = t * 3;
    return ::app::Uno::Geometry::Triangle__New_1(NULL, ::uPtr< ::uArray*>(__this->_positions)->Item< ::app::Uno::Float3>(::uPtr< ::uArray*>(__this->_indices)->Item< int>(i)), ::uPtr< ::uArray*>(__this->_positions)->Item< ::app::Uno::Float3>(::uPtr< ::uArray*>(__this->_indices)->Item< int>(i + 1)), ::uPtr< ::uArray*>(__this->_positions)->Item< ::app::Uno::Float3>(::uPtr< ::uArray*>(__this->_indices)->Item< int>(i + 2)));
}

}}}
