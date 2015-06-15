// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.1.0\Meshes\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Drawing.Tesselation.Face.h>
#include <app/Fuse.Drawing.Tesselation.FacesEnumerable.h>
#include <app/Uno.Bool.h>

namespace app {
namespace Fuse {
namespace Drawing {
namespace Tesselation {

FacesEnumerable__uType* FacesEnumerable__typeof()
{
    static FacesEnumerable__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (FacesEnumerable__uType*)::uAllocClassType(sizeof(FacesEnumerable__uType), "Fuse.Drawing.Tesselation.FacesEnumerable", ::app::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable__Fuse_Drawing_Tesselation_Face__typeof(), 1, 1);
        type->__fp_GetNext = (::app::Fuse::Drawing::Tesselation::Face*(*)(::app::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable__Fuse_Drawing_Tesselation_Face*, ::app::Fuse::Drawing::Tesselation::Face*))FacesEnumerable__GetNext;

        type->Implements[0] = ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Tesselation_Face__typeof();

        type->InterfaceOffsets[0] = offsetof(FacesEnumerable__uType, __interface_0);

        type->StrongRefOffsets[0] = offsetof(FacesEnumerable, _head);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_head";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Fuse::Drawing::Tesselation::Face* FacesEnumerable__GetNext(FacesEnumerable* __this, ::app::Fuse::Drawing::Tesselation::Face* v)
{
    return (::uPtr< ::app::Fuse::Drawing::Tesselation::Face*>(v)->Next() == __this->_head) ? (::app::Fuse::Drawing::Tesselation::Face*)NULL : ::uPtr< ::app::Fuse::Drawing::Tesselation::Face*>(v)->Next();
}

void FacesEnumerable___ObjInit_1(FacesEnumerable* __this, ::app::Fuse::Drawing::Tesselation::Face* head)
{
    ::app::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable__Fuse_Drawing_Tesselation_Face___ObjInit(__this, (::uPtr< ::app::Fuse::Drawing::Tesselation::Face*>(head)->Next() == head) ? (::app::Fuse::Drawing::Tesselation::Face*)NULL : ::uPtr< ::app::Fuse::Drawing::Tesselation::Face*>(head)->Next());
    __this->_head = head;
}

FacesEnumerable* FacesEnumerable__New_1(::uStatic* __this, ::app::Fuse::Drawing::Tesselation::Face* head)
{
    FacesEnumerable* inst = (::app::Fuse::Drawing::Tesselation::FacesEnumerable*)::uAllocObject(sizeof(::app::Fuse::Drawing::Tesselation::FacesEnumerable), ::app::Fuse::Drawing::Tesselation::FacesEnumerable__typeof());
    inst->_ObjInit_1(head);
    return inst;
}

}}}}
