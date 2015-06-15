// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.1.0\Sweep\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Drawing.Tesselation.Geom.h>
#include <app/Fuse.Drawing.Tesselation.Vertex.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Double.h>
#include <app/Uno.Float.h>
#include <app/Uno.Math.h>

namespace app {
namespace Fuse {
namespace Drawing {
namespace Tesselation {

Geom__uType* Geom__typeof()
{
    static Geom__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Geom__uType*)::uAllocClassType(sizeof(Geom__uType), "Fuse.Drawing.Tesselation.Geom");
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

float Geom__EdgeEval(::uStatic* __this, ::app::Fuse::Drawing::Tesselation::Vertex* u, ::app::Fuse::Drawing::Tesselation::Vertex* v, ::app::Fuse::Drawing::Tesselation::Vertex* w)
{
    double gapL = ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(v)->S - ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(u)->S;
    double gapR = ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(w)->S - v->S;
    double gap = gapL + gapR;

    if (gap > 9.9999997473787516e-06)
    {
        if (gapL < gapR)
        {
            return (float)((::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(v)->T - ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(u)->T) + ((::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(u)->T - ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(w)->T) * (gapL / (gapL + gapR))));
        }
        else
        {
            return (float)((::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(v)->T - ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(w)->T) + ((::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(w)->T - ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(u)->T) * (gapR / (gapL + gapR))));
        }
    }

    return 0.0f;
}

float Geom__EdgeSign(::uStatic* __this, ::app::Fuse::Drawing::Tesselation::Vertex* u, ::app::Fuse::Drawing::Tesselation::Vertex* v, ::app::Fuse::Drawing::Tesselation::Vertex* w)
{
    double gapL = ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(v)->S - ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(u)->S;
    double gapR = ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(w)->S - v->S;
    double gap = gapL + gapR;

    if (gap > 9.9999997473787516e-06)
    {
        return (float)(((::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(v)->T - ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(w)->T) * gapL) + ((::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(v)->T - ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(u)->T) * gapR));
    }

    return 0.0f;
}

bool Geom__TransLeq(::uStatic* __this, ::app::Fuse::Drawing::Tesselation::Vertex* u, ::app::Fuse::Drawing::Tesselation::Vertex* v)
{
    return (::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(u)->T < ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(v)->T) || ((::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(u)->T == ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(v)->T) && (::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(u)->S <= ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(v)->S));
}

float Geom__TransEval(::uStatic* __this, ::app::Fuse::Drawing::Tesselation::Vertex* u, ::app::Fuse::Drawing::Tesselation::Vertex* v, ::app::Fuse::Drawing::Tesselation::Vertex* w)
{
    double gapL = ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(v)->T - ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(u)->T;
    double gapR = ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(w)->T - v->T;

    if ((gapL + gapR) > 9.9999997473787516e-06)
    {
        if (gapL < gapR)
        {
            return (float)((::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(v)->S - ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(u)->S) + ((::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(u)->S - ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(w)->S) * (gapL / (gapL + gapR))));
        }
        else
        {
            return (float)((::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(v)->S - ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(w)->S) + ((::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(w)->S - ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(u)->S) * (gapR / (gapL + gapR))));
        }
    }

    return 0.0f;
}

float Geom__TransSign(::uStatic* __this, ::app::Fuse::Drawing::Tesselation::Vertex* u, ::app::Fuse::Drawing::Tesselation::Vertex* v, ::app::Fuse::Drawing::Tesselation::Vertex* w)
{
    double gapL = ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(v)->T - ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(u)->T;
    double gapR = ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(w)->T - v->T;

    if ((gapL + gapR) > 9.9999997473787516e-06)
    {
        return (float)(((::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(v)->S - ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(w)->S) * gapL) + ((::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(v)->S - ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(u)->S) * gapR));
    }

    return 0.0f;
}

double Geom__Interpolate(::uStatic* __this, double ai, double x, double bi, double y)
{
    double a = ::app::Uno::Math__Max(NULL, 0.0, ai);
    double b = ::app::Uno::Math__Max(NULL, 0.0, bi);
    return (a <= b) ? ((::app::Uno::Math__Abs(NULL, b) <= 9.9999997473787516e-06) ? ((x + y) / 2.0) : (x + ((y - x) * (a / (a + b))))) : (y + ((x - y) * (b / (a + b))));
}

void Geom__Swap(::uStatic* __this, ::app::Fuse::Drawing::Tesselation::Vertex** a, ::app::Fuse::Drawing::Tesselation::Vertex** b)
{
    ::app::Fuse::Drawing::Tesselation::Vertex* tmp = *a;
    *a = *b;
    *b = tmp;
}

::app::Fuse::Drawing::Tesselation::Vertex* Geom__Intersect(::uStatic* __this, ::app::Fuse::Drawing::Tesselation::Vertex* o1p, ::app::Fuse::Drawing::Tesselation::Vertex* d1p, ::app::Fuse::Drawing::Tesselation::Vertex* o2p, ::app::Fuse::Drawing::Tesselation::Vertex* d2p)
{
    ::app::Fuse::Drawing::Tesselation::Vertex* o1 = o1p;
    ::app::Fuse::Drawing::Tesselation::Vertex* d1 = d1p;
    ::app::Fuse::Drawing::Tesselation::Vertex* o2 = o2p;
    ::app::Fuse::Drawing::Tesselation::Vertex* d2 = d2p;
    ::app::Fuse::Drawing::Tesselation::Vertex* v = ::app::Fuse::Drawing::Tesselation::Vertex__New_1(NULL);
    float z1 = float();
    float z2 = float();

    if (!::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(o1)->VertLeq(d1))
    {
        Geom__Swap(NULL, &o1, &d1);
    }

    if (!::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(o2)->VertLeq(d2))
    {
        Geom__Swap(NULL, &o2, &d2);
    }

    if (!::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(o1)->VertLeq(o2))
    {
        Geom__Swap(NULL, &o1, &o2);
        Geom__Swap(NULL, &d1, &d2);
    }

    if (!::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(o2)->VertLeq(d1))
    {
        ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(v)->S = (::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(o2)->S + ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(d1)->S) / 2.0;
    }
    else if (::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(d1)->VertLeq(d2))
    {
        z1 = Geom__EdgeEval(NULL, o1, o2, d1);
        z2 = Geom__EdgeEval(NULL, o2, d1, d2);

        if ((z1 + z2) < 0.0f)
        {
            z1 = -z1;
            z2 = -z2;
        }

        ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(v)->S = Geom__Interpolate(NULL, (double)z1, ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(o2)->S, (double)z2, ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(d1)->S);
    }
    else
    {
        z1 = Geom__EdgeSign(NULL, o1, o2, d1);
        z2 = -Geom__EdgeSign(NULL, o1, d2, d1);

        if ((z1 + z2) < 0.0f)
        {
            z1 = -z1;
            z2 = -z2;
        }

        ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(v)->S = Geom__Interpolate(NULL, (double)z1, ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(o2)->S, (double)z2, ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(d2)->S);
    }

    if (!Geom__TransLeq(NULL, o1, d1))
    {
        Geom__Swap(NULL, &o1, &d1);
    }

    if (!Geom__TransLeq(NULL, o2, d2))
    {
        Geom__Swap(NULL, &o2, &d2);
    }

    if (!Geom__TransLeq(NULL, o1, o2))
    {
        Geom__Swap(NULL, &o1, &o2);
        Geom__Swap(NULL, &d1, &d2);
    }

    if (!Geom__TransLeq(NULL, o2, d1))
    {
        ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(v)->T = (::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(o2)->T + ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(d1)->T) / 2.0;
    }
    else if (Geom__TransLeq(NULL, d1, d2))
    {
        z1 = Geom__TransEval(NULL, o1, o2, d1);
        z2 = Geom__TransEval(NULL, o2, d1, d2);

        if ((z1 + z2) < 0.0f)
        {
            z1 = -z1;
            z2 = -z2;
        }

        ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(v)->T = Geom__Interpolate(NULL, (double)z1, ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(o2)->T, (double)z2, ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(d1)->T);
    }
    else
    {
        z1 = Geom__TransSign(NULL, o1, o2, d1);
        z2 = -Geom__TransSign(NULL, o1, d2, d1);

        if ((z1 + z2) < 0.0f)
        {
            z1 = -z1;
            z2 = -z2;
        }

        ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(v)->T = Geom__Interpolate(NULL, (double)z1, ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(o2)->T, (double)z2, ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(d2)->T);
    }

    return v;
}

}}}}
