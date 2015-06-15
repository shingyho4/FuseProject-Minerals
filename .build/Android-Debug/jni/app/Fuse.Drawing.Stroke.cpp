// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Drawing.Brush.h>
#include <app/Fuse.Drawing.DynamicBrush.h>
#include <app/Fuse.Drawing.Stroke.h>
#include <app/Uno.Action.h>
#include <app/Uno.Action__Fuse_Drawing_Stroke.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Delegate.h>
#include <app/Uno.Int.h>
#include <app/Uno.Math.h>

namespace app {
namespace Fuse {
namespace Drawing {

Stroke__uType* Stroke__typeof()
{
    static Stroke__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Stroke__uType*)::uAllocClassType(sizeof(Stroke__uType), "Fuse.Drawing.Stroke", ::uObject__typeof(), 0, 3);
        type->StrongRefOffsets[0] = offsetof(Stroke, _brush);
        type->StrongRefOffsets[1] = offsetof(Stroke, StrokeChanged);
        type->StrongRefOffsets[2] = offsetof(Stroke, ShadingChanged);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_brush";
        type->StrongRefNames[1] = "StrokeChanged";
        type->StrongRefNames[2] = "ShadingChanged";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Fuse::Drawing::Brush* Stroke__get_Brush(Stroke* __this)
{
    return __this->_brush;
}

void Stroke__set_Brush(Stroke* __this, ::app::Fuse::Drawing::Brush* value)
{
    if (value == __this->_brush)
    {
        return;
    }

    if (::uIs(__this->_brush, ::app::Fuse::Drawing::DynamicBrush__typeof()))
    {
        ::uPtr< ::app::Fuse::Drawing::DynamicBrush*>(::uCast< ::app::Fuse::Drawing::DynamicBrush*>(__this->_brush, ::app::Fuse::Drawing::DynamicBrush__typeof()))->remove_ShadingChanged(::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)::app::Fuse::Drawing::Stroke__OnShadingChanged, __this));
    }

    __this->_brush = value;

    if (::uIs(__this->_brush, ::app::Fuse::Drawing::DynamicBrush__typeof()))
    {
        ::uPtr< ::app::Fuse::Drawing::DynamicBrush*>(::uCast< ::app::Fuse::Drawing::DynamicBrush*>(__this->_brush, ::app::Fuse::Drawing::DynamicBrush__typeof()))->add_ShadingChanged(::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)::app::Fuse::Drawing::Stroke__OnShadingChanged, __this));
    }

    __this->OnShadingChanged();
}

float Stroke__get_Width(Stroke* __this)
{
    return __this->_width;
}

void Stroke__set_Width(Stroke* __this, float value)
{
    __this->_width = value;
    __this->OnStrokeChanged();
}

int Stroke__get_LineCap(Stroke* __this)
{
    return __this->_lineCap;
}

void Stroke__set_LineCap(Stroke* __this, int value)
{
    if (value == __this->_lineCap)
    {
        return;
    }

    __this->_lineCap = value;
    __this->OnStrokeChanged();
}

::app::Uno::Float2 Stroke__GetDeviceAdjusted(Stroke* __this, float ppi, int adjustment, int alignment)
{
    float lo = 0.0f;
    float hi = 0.0f;

    switch (alignment)
    {
        case 2:
        {
            lo = ::app::Uno::Math__Ceil_1(NULL, (__this->_offset - 0.5f) * ppi) / ppi;
            hi = lo + __this->Adjust(__this->_width, ppi, adjustment);
            break;
        }
        case 1:
        {
            hi = ::app::Uno::Math__Floor_1(NULL, (__this->_offset + 0.5f) * ppi) / ppi;
            lo = hi - __this->Adjust(__this->_width, ppi, adjustment);
            break;
        }
        case 0:
        {
            lo = ::app::Uno::Math__Ceil_1(NULL, (__this->_offset - (__this->_width / 2.0f)) * ppi) / ppi;
            hi = lo + __this->Adjust(__this->_width, ppi, adjustment);
            break;
        }
    }

    ::app::Uno::Float2 r = ::app::Uno::Float2__New_2(NULL, hi - lo, (hi + lo) / 2.0f);
    return r;
}

float Stroke__Adjust(Stroke* __this, float w, float ppi, int adjustment)
{
    switch (adjustment)
    {
        case 0:
        {
            return w;
        }
        case 1:
        {
            w = ::app::Uno::Math__Ceil_1(NULL, w * ppi) / ppi;
            break;
        }
        case 2:
        {
            w = ::app::Uno::Math__Floor_1(NULL, (w * ppi) + 0.5f) / ppi;
            break;
        }
        case 3:
        {
            w = ::app::Uno::Math__Floor_1(NULL, w * ppi) / ppi;
            break;
        }
    }

    w = ::app::Uno::Math__Max_1(NULL, w, 1.0f / ppi);
    return w;
}

void Stroke__OnStrokeChanged(Stroke* __this)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->StrokeChanged, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->StrokeChanged)->InvokeVoid< Stroke*>(__this);
    }
}

void Stroke__OnShadingChanged(Stroke* __this)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->ShadingChanged, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->ShadingChanged)->InvokeVoid();
    }
}

void Stroke___ObjInit(Stroke* __this)
{
    __this->_width = 1.0f;
}

Stroke* Stroke__New_1(::uStatic* __this)
{
    Stroke* inst = (::app::Fuse::Drawing::Stroke*)::uAllocObject(sizeof(::app::Fuse::Drawing::Stroke), ::app::Fuse::Drawing::Stroke__typeof());
    inst->_ObjInit();
    return inst;
}

void Stroke__add_StrokeChanged(Stroke* __this, ::uDelegate* value)
{
    __this->StrokeChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->StrokeChanged, (::uDelegate*)value), ::app::Uno::Action__Fuse_Drawing_Stroke__typeof());
}

void Stroke__remove_StrokeChanged(Stroke* __this, ::uDelegate* value)
{
    __this->StrokeChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->StrokeChanged, (::uDelegate*)value), ::app::Uno::Action__Fuse_Drawing_Stroke__typeof());
}

void Stroke__add_ShadingChanged(Stroke* __this, ::uDelegate* value)
{
    __this->ShadingChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->ShadingChanged, (::uDelegate*)value), ::app::Uno::Action__typeof());
}

void Stroke__remove_ShadingChanged(Stroke* __this, ::uDelegate* value)
{
    __this->ShadingChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->ShadingChanged, (::uDelegate*)value), ::app::Uno::Action__typeof());
}

}}}
