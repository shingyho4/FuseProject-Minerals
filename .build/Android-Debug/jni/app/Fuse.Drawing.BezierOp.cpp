// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Paths\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Drawing.BezierOp.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Double.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Int.h>
#include <app/Uno.Math.h>
#include <app/Uno.Rect.h>

namespace app {
namespace Fuse {
namespace Drawing {

BezierOp__uType* BezierOp__typeof()
{
    static BezierOp__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (BezierOp__uType*)::uAllocClassType(sizeof(BezierOp__uType), "Fuse.Drawing.BezierOp");
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

double BezierOp__bezierSpline(::uStatic* __this, double p0, double p1, double p2, double p3, double t)
{
    return ((((((p3 - (3.0 * p2)) + (3.0 * p1)) - p0) * ::app::Uno::Math__Pow(NULL, t, 3.0)) + ((((3.0 * p2) - (6.0 * p1)) + (3.0 * p0)) * ::app::Uno::Math__Pow(NULL, t, 2.0))) + (((3.0 * p1) - (3.0 * p0)) * t)) + p0;
}

double BezierOp__A(::uStatic* __this, double p0, double p1, double p2, double p3)
{
    return (((3.0 * p3) - (9.0 * p2)) + (9.0 * p1)) - (3.0 * p0);
}

double BezierOp__B(::uStatic* __this, double p0, double p1, double p2)
{
    return ((6.0 * p2) - (12.0 * p1)) + (6.0 * p0);
}

double BezierOp__C(::uStatic* __this, double p0, double p1)
{
    return (3.0 * p1) - (3.0 * p0);
}

double BezierOp__Determinant(::uStatic* __this, double a, double b, double c)
{
    return ::app::Uno::Math__Pow(NULL, b, 2.0) - ((4.0 * a) * c);
}

double BezierOp___Solve(::uStatic* __this, double a_, double b_, double c_, bool s)
{
    return (-b_ + (::app::Uno::Math__Sqrt(NULL, (b_ * b_) - ((4.0 * a_) * c_)) * (double)(s ? 1 : -1))) / (2.0 * a_);
}

::uArray* BezierOp__Solve(::uStatic* __this, double a, double b, double c)
{
    ::uArray* array_129;
    ::uArray* array_130;
    ::uArray* array_131;
    ::uArray* array_132;
    ::uArray* array_133;
    double d = BezierOp__Determinant(NULL, a, b, c);

    if (d < 0.0)
    {
        return (array_129 = ::uNewArray(::app::Uno::Double__typeof(), 0), array_129);
    }

    if (::app::Uno::Math__Abs(NULL, a) < 9.9999997473787516e-06)
    {
        if (::app::Uno::Math__Abs(NULL, b) < 9.9999997473787516e-06)
        {
            return (array_130 = ::uNewArray(::app::Uno::Double__typeof(), 0), array_130);
        }

        array_131 = ::uNewArray(::app::Uno::Double__typeof(), 1);
        ::uPtr< ::uArray*>(array_131)->Item< double>(0) = -c / b;
        return array_131;
    }

    if (d == 0.0)
    {
        array_132 = ::uNewArray(::app::Uno::Double__typeof(), 1);
        ::uPtr< ::uArray*>(array_132)->Item< double>(0) = BezierOp___Solve(NULL, a, b, c, true);
        return array_132;
    }
    else
    {
        return (array_133 = ::uNewArray(::app::Uno::Double__typeof(), 2), ::uPtr< ::uArray*>(array_133)->Item< double>(0) = BezierOp___Solve(NULL, a, b, c, true), ::uPtr< ::uArray*>(array_133)->Item< double>(1) = BezierOp___Solve(NULL, a, b, c, false), array_133);
    }
}

::app::Uno::Rect BezierOp__GetRect(::uStatic* __this, ::app::Uno::Float2 p1, ::app::Uno::Float2 c1, ::app::Uno::Float2 c2, ::app::Uno::Float2 p2)
{
    double aX = BezierOp__A(NULL, (double)p1.X, (double)c1.X, (double)c2.X, (double)p2.X);
    double bX = BezierOp__B(NULL, (double)p1.X, (double)c1.X, (double)c2.X);
    double cX = BezierOp__C(NULL, (double)p1.X, (double)c1.X);
    double aY = BezierOp__A(NULL, (double)p1.Y, (double)c1.Y, (double)c2.Y, (double)p2.Y);
    double bY = BezierOp__B(NULL, (double)p1.Y, (double)c1.Y, (double)c2.Y);
    double cY = BezierOp__C(NULL, (double)p1.Y, (double)c1.Y);
    ::uArray* resX = BezierOp__Solve(NULL, aX, bX, cX);
    ::uArray* resY = BezierOp__Solve(NULL, aY, bY, cY);
    ::app::Uno::Float2 min = ::app::Uno::Math__Min_3(NULL, p1, p2);
    ::app::Uno::Float2 max = ::app::Uno::Math__Max_3(NULL, p1, p2);

    for (int index_124 = 0, length_125 = ::uPtr< ::uArray*>(resX)->Length(); index_124 < length_125; ++index_124)
    {
        double e = ::uPtr< ::uArray*>(resX)->Item< double>(index_124);

        if ((e < 0.0) || (e > 1.0))
        {
            continue;
        }

        double x = BezierOp__bezierSpline(NULL, (double)p1.X, (double)c1.X, (double)c2.X, (double)p2.X, e);
        min.X = ::app::Uno::Math__Min_1(NULL, min.X, (float)x);
        max.X = ::app::Uno::Math__Max_1(NULL, max.X, (float)x);
    }

    for (int index_127 = 0, length_128 = ::uPtr< ::uArray*>(resY)->Length(); index_127 < length_128; ++index_127)
    {
        double e = ::uPtr< ::uArray*>(resY)->Item< double>(index_127);

        if ((e < 0.0) || (e > 1.0))
        {
            continue;
        }

        double y = BezierOp__bezierSpline(NULL, (double)p1.Y, (double)c1.Y, (double)c2.Y, (double)p2.Y, e);
        min.Y = ::app::Uno::Math__Min_1(NULL, min.Y, (float)y);
        max.Y = ::app::Uno::Math__Max_1(NULL, max.Y, (float)y);
    }

    return ::app::Uno::Rect__New_1(NULL, min.X, min.Y, max.X, max.Y);
}

}}}
