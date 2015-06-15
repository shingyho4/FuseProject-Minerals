// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_DRAWING_BRUSH_H__
#define __APP_FUSE_DRAWING_BRUSH_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>

namespace app {
namespace Fuse {
namespace Drawing {

struct Brush;

struct Brush__uType : ::uClassType
{
    bool(*__fp_get_IsCompletelyTransparent)(Brush*);
};

Brush__uType* Brush__typeof();

bool Brush__get_IsCompletelyTransparent(Brush* __this);
void Brush___ObjInit(Brush* __this);

struct Brush : ::uObject
{
    void _ObjInit() { Brush___ObjInit(this); }
    bool IsCompletelyTransparent() { return (((Brush__uType*)this->__obj_type)->__fp_get_IsCompletelyTransparent)(this); }
};

}}}

#include <app/Uno.Bool.h>

namespace app {
namespace Fuse {
namespace Drawing {

}}}


#endif
