// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.1.0\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Elements.AlignmentHelpers.h>
#include <app/Fuse.Internal.SizingContainer.h>
#include <app/Uno.Double.h>
#include <app/Uno.Int.h>
#include <app/Uno.Math.h>

namespace app {
namespace Fuse {
namespace Internal {

SizingContainer__uType* SizingContainer__typeof()
{
    static SizingContainer__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (SizingContainer__uType*)::uAllocClassType(sizeof(SizingContainer__uType), "Fuse.Internal.SizingContainer", ::uObject__typeof());
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

float SizingContainer__get_PaddingWidth(SizingContainer* __this)
{
    return __this->padding.Item(0) + __this->padding.Item(2);
}

float SizingContainer__get_PaddingHeight(SizingContainer* __this)
{
    return __this->padding.Item(1) + __this->padding.Item(3);
}

bool SizingContainer__SetStretchMode(SizingContainer* __this, int mode)
{
    if (mode == __this->stretchMode)
    {
        return false;
    }

    __this->stretchMode = mode;
    return true;
}

::app::Uno::Float2 SizingContainer__CalcScale(SizingContainer* __this, ::app::Uno::Float2 availableSize, ::app::Uno::Float2 desiredSize)
{
    return __this->CalcScale_1(availableSize, desiredSize, false, false);
}

::app::Uno::Float2 SizingContainer__CalcContentSize(SizingContainer* __this, ::app::Uno::Float2 size, ::app::Uno::Int2 pixelSize)
{
    switch (__this->stretchMode)
    {
        case 1:
        {
            {
                if ((pixelSize.X == 0) || (pixelSize.Y == 0))
                {
                    return ::app::Uno::Float2__New_1(NULL, 0.0f);
                }

                return ::app::Uno::Float2__op_Division_1(NULL, ::app::Uno::Float2__New_2(NULL, (float)pixelSize.X, (float)pixelSize.Y), __this->absoluteZoom);
            }
        }
        case 2:
        {
            {
                if ((pixelSize.X == 0) || (pixelSize.Y == 0))
                {
                    return ::app::Uno::Float2__New_1(NULL, 0.0f);
                }

                ::app::Uno::Float2 exact = ::app::Uno::Float2__op_Division_1(NULL, ::app::Uno::Float2__New_2(NULL, (float)pixelSize.X, (float)pixelSize.Y), __this->absoluteZoom);
                ::app::Uno::Float2 scale = ::app::Uno::Float2__op_Division(NULL, size, exact);

                if (((double)scale.X > 0.75) && ((double)scale.X < 1.5))
                {
                    return exact;
                }

                break;
            }
        }
        default:
        {
            break;
        }
    }

    if (!__this->snapToPixels)
    {
        return size;
    }

    return __this->SnapSize(size);
}

::app::Uno::Float2 SizingContainer__SnapSize(SizingContainer* __this, ::app::Uno::Float2 sz)
{
    return ::app::Uno::Float2__op_Division_1(NULL, ::app::Uno::Math__Round_2(NULL, ::app::Uno::Float2__op_Multiply(NULL, sz, __this->absoluteZoom)), __this->absoluteZoom);
}

::app::Uno::Float2 SizingContainer__CalcScale_1(SizingContainer* __this, ::app::Uno::Float2 availableSize, ::app::Uno::Float2 desiredSize, bool autoWidth, bool autoHeight)
{
    ::app::Uno::Float2 d = availableSize;
    d.X = d.X - __this->PaddingWidth();
    d.Y = d.Y - __this->PaddingHeight();
    ::app::Uno::Float2 scale = ::app::Uno::Float2__New_1(NULL, 1.0f);

    if ((autoWidth && autoHeight) && !(((__this->stretchMode == 0) || (__this->stretchMode == 1)) || (__this->stretchMode == 2)))
    {
        if (__this->stretchSizing == 0)
        {
            scale = ::app::Uno::Float2__New_1(NULL, 0.0f);
        }
        else
        {
            scale = ::app::Uno::Float2__New_1(NULL, 1.0f);
        }
    }
    else
    {
        ::app::Uno::Float2 s = ::app::Uno::Float2__New_2(NULL, (desiredSize.X < 1e-05f) ? 0.0f : (d.X / desiredSize.X), (desiredSize.Y < 1e-05f) ? 0.0f : (d.Y / desiredSize.Y));

        switch (__this->stretchMode)
        {
            case 0:
            case 1:
            case 2:
            {
                scale = ::app::Uno::Float2__New_1(NULL, 1.0f);
                break;
            }
            case 4:
            case 3:
            {
                {
                    scale = autoWidth ? ::app::Uno::Float2__New_1(NULL, s.Y) : (autoHeight ? ::app::Uno::Float2__New_1(NULL, s.X) : s);
                    break;
                }
            }
            case 5:
            {
                {
                    float sm = autoWidth ? s.Y : (autoHeight ? s.X : ::app::Uno::Math__Min_1(NULL, s.X, s.Y));
                    scale = ::app::Uno::Float2__New_1(NULL, sm);
                    break;
                }
            }
            case 6:
            {
                {
                    float sm = autoWidth ? s.Y : (autoHeight ? s.X : ::app::Uno::Math__Max_1(NULL, s.X, s.Y));
                    scale = ::app::Uno::Float2__New_1(NULL, sm);
                    break;
                }
            }
        }
    }

    switch (__this->stretchDirection)
    {
        case 0:
        {
            break;
        }
        case 2:
        {
            scale.X = ::app::Uno::Math__Min_1(NULL, scale.X, 1.0f);
            scale.Y = ::app::Uno::Math__Min_1(NULL, scale.Y, 1.0f);
            break;
        }
        case 1:
        {
            scale.X = ::app::Uno::Math__Max_1(NULL, 1.0f, scale.X);
            scale.Y = ::app::Uno::Math__Max_1(NULL, 1.0f, scale.Y);
            break;
        }
    }

    if ((__this->snapToPixels && (desiredSize.X > 1e-05f)) && (desiredSize.Y > 1e-05f))
    {
        scale = ::app::Uno::Float2__op_Division(NULL, __this->SnapSize(::app::Uno::Float2__op_Multiply_1(NULL, scale, desiredSize)), desiredSize);
    }

    return scale;
}

::app::Uno::Float2 SizingContainer__CalcOrigin(SizingContainer* __this, ::app::Uno::Float2 availableSize, ::app::Uno::Float2 contentActualSize)
{
    ::app::Uno::Float2 origin = ::app::Uno::Float2__New_1(NULL, 0.0f);

    switch (::app::Fuse::Elements::AlignmentHelpers__GetHorizontalAlign(NULL, __this->align))
    {
        case 0:
        case 1:
        {
            origin.X = __this->padding.Item(0);
            break;
        }
        case 2:
        {
            origin.X = ((((availableSize.X - __this->padding.Item(0)) - __this->padding.Item(2)) / 2.0f) - (contentActualSize.X / 2.0f)) + __this->padding.Item(0);
            break;
        }
        case 3:
        {
            origin.X = (availableSize.X - __this->padding.Item(2)) - contentActualSize.X;
            break;
        }
    }

    switch (::app::Fuse::Elements::AlignmentHelpers__GetVerticalAlign(NULL, __this->align))
    {
        case 0:
        case 4:
        {
            origin.Y = __this->padding.Item(1);
            break;
        }
        case 8:
        {
            origin.Y = ((((availableSize.Y - __this->padding.Item(1)) - __this->padding.Item(3)) / 2.0f) - (contentActualSize.Y / 2.0f)) + __this->padding.Item(1);
            break;
        }
        case 12:
        {
            origin.Y = (availableSize.Y - __this->padding.Item(3)) - contentActualSize.Y;
            break;
        }
    }

    if (__this->snapToPixels)
    {
        origin = __this->SnapSize(origin);
    }

    return origin;
}

::app::Uno::Float4 SizingContainer__CalcClip(SizingContainer* __this, ::app::Uno::Float2 availableSize, ::app::Uno::Float2* origin, ::app::Uno::Float2* contentActualSize)
{
    ::app::Uno::Float4 ind_123 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_124 = ::app::Uno::Float4();

    if (((((*origin).X > availableSize.X) || (((*origin).X + (*contentActualSize).X) < 0.0f)) || ((*origin).Y > availableSize.Y)) || (((*origin).Y + (*contentActualSize).Y) < 0.0f))
    {
        *origin = ::app::Uno::Float2__New_2(NULL, 0.0f, 0.0f);
        *contentActualSize = ::app::Uno::Float2__New_1(NULL, 0.0f);
        return ::app::Uno::Float4__New_2(NULL, 0.0f, 0.0f, 1.0f, 1.0f);
    }

    ::app::Uno::Float2 tl = ::app::Uno::Math__Max_3(NULL, ::app::Uno::Float2__New_1(NULL, 0.0f), ::app::Uno::Float2__op_Division(NULL, ::app::Uno::Float2__op_Subtraction(NULL, (ind_123 = __this->padding, ::app::Uno::Float2__New_2(NULL, ind_123.X, ind_123.Y)), *origin), *contentActualSize));
    ::app::Uno::Float2 br = ::app::Uno::Math__Min_3(NULL, ::app::Uno::Float2__New_1(NULL, 1.0f), ::app::Uno::Float2__op_Division(NULL, ::app::Uno::Float2__op_Subtraction(NULL, ::app::Uno::Float2__op_Subtraction(NULL, availableSize, *origin), (ind_124 = __this->padding, ::app::Uno::Float2__New_2(NULL, ind_124.Z, ind_124.W))), *contentActualSize));
    float dx = __this->padding.X - (*origin).X;

    if (dx > 0.0f)
    {
        (*contentActualSize).X = (*contentActualSize).X - dx;
        (*origin).X = __this->padding.X;
    }

    dx = (((*origin).X + (*contentActualSize).X) - availableSize.X) + __this->padding.Z;

    if (dx > 0.0f)
    {
        (*contentActualSize).X = (*contentActualSize).X - dx;
    }

    float dy = __this->padding.Y - (*origin).Y;

    if (dy > 0.0f)
    {
        (*contentActualSize).Y = (*contentActualSize).Y - dy;
        (*origin).Y = __this->padding.Y;
    }

    dy = (((*origin).Y + (*contentActualSize).Y) - availableSize.Y) + __this->padding.W;

    if (dy > 0.0f)
    {
        (*contentActualSize).Y = (*contentActualSize).Y - dy;
    }

    return ::app::Uno::Float4__New_2(NULL, tl.X, tl.Y, br.X, br.Y);
}

::app::Uno::Float2 SizingContainer__ExpandFillSize(SizingContainer* __this, ::app::Uno::Float2 size, ::app::Uno::Float2 fillSize, int fillSet)
{
    bool autoWidth = !((fillSet & 1) == 1);
    bool autoHeight = !((fillSet & 2) == 2);
    ::app::Uno::Float2 scale = __this->CalcScale_1(fillSize, size, autoWidth, autoHeight);
    return ::app::Uno::Float2__op_Multiply_1(NULL, scale, size);
}

void SizingContainer___ObjInit(SizingContainer* __this)
{
    __this->stretchMode = 5;
    __this->align = 10;
    __this->stretchSizing = 1;
    __this->absoluteZoom = 1.0f;
}

SizingContainer* SizingContainer__New_1(::uStatic* __this)
{
    SizingContainer* inst = (::app::Fuse::Internal::SizingContainer*)::uAllocObject(sizeof(::app::Fuse::Internal::SizingContainer), ::app::Fuse::Internal::SizingContainer__typeof());
    inst->_ObjInit();
    return inst;
}

}}}
