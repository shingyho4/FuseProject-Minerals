// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_DRAWING_STROKE_H__
#define __APP_FUSE_DRAWING_STROKE_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Drawing { struct Brush; } } }
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Fuse {
namespace Drawing {

struct Stroke;

struct Stroke__uType : ::uClassType
{
};

Stroke__uType* Stroke__typeof();

::app::Fuse::Drawing::Brush* Stroke__get_Brush(Stroke* __this);
void Stroke__set_Brush(Stroke* __this, ::app::Fuse::Drawing::Brush* value);
float Stroke__get_Width(Stroke* __this);
void Stroke__set_Width(Stroke* __this, float value);
int Stroke__get_LineCap(Stroke* __this);
void Stroke__set_LineCap(Stroke* __this, int value);
::app::Uno::Float2 Stroke__GetDeviceAdjusted(Stroke* __this, float ppi, int adjustment, int alignment);
float Stroke__Adjust(Stroke* __this, float w, float ppi, int adjustment);
void Stroke__OnStrokeChanged(Stroke* __this);
void Stroke__OnShadingChanged(Stroke* __this);
void Stroke___ObjInit(Stroke* __this);
Stroke* Stroke__New_1(::uStatic* __this);
void Stroke__add_StrokeChanged(Stroke* __this, ::uDelegate* value);
void Stroke__remove_StrokeChanged(Stroke* __this, ::uDelegate* value);
void Stroke__add_ShadingChanged(Stroke* __this, ::uDelegate* value);
void Stroke__remove_ShadingChanged(Stroke* __this, ::uDelegate* value);

struct Stroke : ::uObject
{
    ::uStrong< ::app::Fuse::Drawing::Brush*> _brush;
    float _width;
    float _offset;
    int _lineCap;
    ::uStrong< ::uDelegate*> StrokeChanged;
    ::uStrong< ::uDelegate*> ShadingChanged;

    ::app::Uno::Float2 GetDeviceAdjusted(float ppi, int adjustment, int alignment);
    float Adjust(float w, float ppi, int adjustment) { return Stroke__Adjust(this, w, ppi, adjustment); }
    void OnStrokeChanged() { Stroke__OnStrokeChanged(this); }
    void OnShadingChanged() { Stroke__OnShadingChanged(this); }
    void _ObjInit() { Stroke___ObjInit(this); }
    void add_StrokeChanged(::uDelegate* value) { Stroke__add_StrokeChanged(this, value); }
    void remove_StrokeChanged(::uDelegate* value) { Stroke__remove_StrokeChanged(this, value); }
    void add_ShadingChanged(::uDelegate* value) { Stroke__add_ShadingChanged(this, value); }
    void remove_ShadingChanged(::uDelegate* value) { Stroke__remove_ShadingChanged(this, value); }
    ::app::Fuse::Drawing::Brush* Brush() { return Stroke__get_Brush(this); }
    void Brush(::app::Fuse::Drawing::Brush* value) { Stroke__set_Brush(this, value); }
    float Width() { return Stroke__get_Width(this); }
    void Width(float value) { Stroke__set_Width(this, value); }
    int LineCap() { return Stroke__get_LineCap(this); }
    void LineCap(int value) { Stroke__set_LineCap(this, value); }
};

}}}

#include <app/Uno.Float.h>
#include <app/Uno.Float2.h>

namespace app {
namespace Fuse {
namespace Drawing {

inline ::app::Uno::Float2 Stroke::GetDeviceAdjusted(float ppi, int adjustment, int alignment) { return Stroke__GetDeviceAdjusted(this, ppi, adjustment, alignment); }

}}}


#endif
