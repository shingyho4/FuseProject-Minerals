// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_DRAWING_LINE_CAP_IMPL_H__
#define __APP_FUSE_DRAWING_LINE_CAP_IMPL_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Fuse {
namespace Drawing {

struct LineCapImpl;

struct LineCapImpl__uType : ::uClassType
{
    ::uObject*(*__fp_Create)(LineCapImpl*, ::app::Uno::Float2, ::app::Uno::Float2);
};

LineCapImpl__uType* LineCapImpl__typeof();

LineCapImpl* LineCapImpl__Create_1(::uStatic* __this, int lineCap);
void LineCapImpl___ObjInit(LineCapImpl* __this);

struct LineCapImpl : ::uObject
{
    ::uObject* Create(::app::Uno::Float2 from, ::app::Uno::Float2 to);
    void _ObjInit() { LineCapImpl___ObjInit(this); }
};

}}}

#include <app/Uno.Float2.h>

namespace app {
namespace Fuse {
namespace Drawing {

inline ::uObject* LineCapImpl::Create(::app::Uno::Float2 from, ::app::Uno::Float2 to) { return (((LineCapImpl__uType*)this->__obj_type)->__fp_Create)(this, from, to); }

}}}


#endif
