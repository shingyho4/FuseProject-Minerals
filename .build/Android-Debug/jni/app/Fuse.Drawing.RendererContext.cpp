// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.1.0\Rendering\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Drawing.RendererContext.h>

namespace app {
namespace Fuse {
namespace Drawing {

RendererContext__uType* RendererContext__typeof()
{
    static RendererContext__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (RendererContext__uType*)::uAllocClassType(sizeof(RendererContext__uType), "Fuse.Drawing.RendererContext", ::uObject__typeof());
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Uno::Float4x4 RendererContext__get_Transform(RendererContext* __this)
{
    return __this->_Transform;
}

void RendererContext__set_Transform(RendererContext* __this, ::app::Uno::Float4x4 value)
{
    __this->_Transform = value;
}

::app::Uno::Float2 RendererContext__get_ElementSize(RendererContext* __this)
{
    return __this->_ElementSize;
}

void RendererContext__set_ElementSize(RendererContext* __this, ::app::Uno::Float2 value)
{
    __this->_ElementSize = value;
}

float RendererContext__get_Density(RendererContext* __this)
{
    return __this->_Density;
}

void RendererContext__set_Density(RendererContext* __this, float value)
{
    __this->_Density = value;
}

void RendererContext___ObjInit_1(RendererContext* __this, ::app::Uno::Float4x4 transform, ::app::Uno::Float2 elementSize, float density)
{
    __this->Transform(transform);
    __this->ElementSize(elementSize);
    __this->Density(density);
}

RendererContext* RendererContext__New_2(::uStatic* __this, ::app::Uno::Float4x4 transform, ::app::Uno::Float2 elementSize, float density)
{
    RendererContext* inst = (::app::Fuse::Drawing::RendererContext*)::uAllocObject(sizeof(::app::Fuse::Drawing::RendererContext), ::app::Fuse::Drawing::RendererContext__typeof());
    inst->_ObjInit_1(transform, elementSize, density);
    return inst;
}

}}}
