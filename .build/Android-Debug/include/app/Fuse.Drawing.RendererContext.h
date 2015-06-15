// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.1.0\Rendering\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_DRAWING_RENDERER_CONTEXT_H__
#define __APP_FUSE_DRAWING_RENDERER_CONTEXT_H__

#include <app/Uno.Float2.h>
#include <app/Uno.Float4x4.h>
#include <app/Uno.Object.h>
#include <Uno/Uno.h>

namespace app {
namespace Fuse {
namespace Drawing {

struct RendererContext;

struct RendererContext__uType : ::uClassType
{
};

RendererContext__uType* RendererContext__typeof();

::app::Uno::Float4x4 RendererContext__get_Transform(RendererContext* __this);
void RendererContext__set_Transform(RendererContext* __this, ::app::Uno::Float4x4 value);
::app::Uno::Float2 RendererContext__get_ElementSize(RendererContext* __this);
void RendererContext__set_ElementSize(RendererContext* __this, ::app::Uno::Float2 value);
float RendererContext__get_Density(RendererContext* __this);
void RendererContext__set_Density(RendererContext* __this, float value);
void RendererContext___ObjInit_1(RendererContext* __this, ::app::Uno::Float4x4 transform, ::app::Uno::Float2 elementSize, float density);
RendererContext* RendererContext__New_2(::uStatic* __this, ::app::Uno::Float4x4 transform, ::app::Uno::Float2 elementSize, float density);

struct RendererContext : ::uObject
{
    ::app::Uno::Float4x4 _Transform;
    ::app::Uno::Float2 _ElementSize;
    float _Density;

    void _ObjInit_1(::app::Uno::Float4x4 transform, ::app::Uno::Float2 elementSize, float density);
    ::app::Uno::Float4x4 Transform();
    void Transform(::app::Uno::Float4x4 value);
    ::app::Uno::Float2 ElementSize();
    void ElementSize(::app::Uno::Float2 value);
    float Density() { return RendererContext__get_Density(this); }
    void Density(float value) { RendererContext__set_Density(this, value); }
};

}}}

#include <app/Uno.Float.h>

namespace app {
namespace Fuse {
namespace Drawing {

inline void RendererContext::_ObjInit_1(::app::Uno::Float4x4 transform, ::app::Uno::Float2 elementSize, float density) { RendererContext___ObjInit_1(this, transform, elementSize, density); }
inline ::app::Uno::Float4x4 RendererContext::Transform() { return RendererContext__get_Transform(this); }
inline void RendererContext::Transform(::app::Uno::Float4x4 value) { RendererContext__set_Transform(this, value); }
inline ::app::Uno::Float2 RendererContext::ElementSize() { return RendererContext__get_ElementSize(this); }
inline void RendererContext::ElementSize(::app::Uno::Float2 value) { RendererContext__set_ElementSize(this, value); }

}}}


#endif
