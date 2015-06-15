// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.1.0\Meshes\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_DRAWING_TESSELATION_FACES_ENUMERABLE_H__
#define __APP_FUSE_DRAWING_TESSELATION_FACES_ENUMERABLE_H__

#include <app/Fuse.Drawing.Tesselation.Collections.LinkedListEnumerable__Fuse-d70cd244.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Drawing_Tesselation_Face.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Drawing { namespace Tesselation { struct Face; } } } }

namespace app {
namespace Fuse {
namespace Drawing {
namespace Tesselation {

struct FacesEnumerable;

struct FacesEnumerable__uType : ::app::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable__Fuse_Drawing_Tesselation_Face__uType
{
};

FacesEnumerable__uType* FacesEnumerable__typeof();

::app::Fuse::Drawing::Tesselation::Face* FacesEnumerable__GetNext(FacesEnumerable* __this, ::app::Fuse::Drawing::Tesselation::Face* v);
void FacesEnumerable___ObjInit_1(FacesEnumerable* __this, ::app::Fuse::Drawing::Tesselation::Face* head);
FacesEnumerable* FacesEnumerable__New_1(::uStatic* __this, ::app::Fuse::Drawing::Tesselation::Face* head);

struct FacesEnumerable : ::app::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable__Fuse_Drawing_Tesselation_Face
{
    ::uStrong< ::app::Fuse::Drawing::Tesselation::Face*> _head;

    void _ObjInit_1(::app::Fuse::Drawing::Tesselation::Face* head) { FacesEnumerable___ObjInit_1(this, head); }
};

}}}}


#endif
