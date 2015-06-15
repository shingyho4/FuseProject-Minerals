// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Geometry\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Bool.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float3.h>
#include <app/Uno.Geometry.Box.h>
#include <app/Uno.Geometry.Collision.h>
#include <app/Uno.Geometry.Ray.h>
#include <app/Uno.Geometry.Triangle.h>
#include <app/Uno.Math.h>
#include <app/Uno.Vector.h>

namespace app {
namespace Uno {
namespace Geometry {

Collision__uType* Collision__typeof()
{
    static Collision__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Collision__uType*)::uAllocClassType(sizeof(Collision__uType), "Uno.Geometry.Collision");
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

bool Collision__RayIntersectsTriangle(::uStatic* __this, ::app::Uno::Geometry::Ray ray, ::app::Uno::Geometry::Triangle triangle, float* distance)
{
    ::app::Uno::Float3 edge1 = ::app::Uno::Float3__op_Subtraction(NULL, triangle.B, triangle.A);
    ::app::Uno::Float3 edge2 = ::app::Uno::Float3__op_Subtraction(NULL, triangle.C, triangle.A);
    ::app::Uno::Float3 directioncrossedge2 = ::app::Uno::Vector__Cross(NULL, ray.Direction, edge2);
    float determinant = float();
    determinant = ::app::Uno::Vector__Dot_1(NULL, edge1, directioncrossedge2);

    if ((determinant > -1e-05f) && (determinant < 1e-05f))
    {
        *distance = 0.0f;
        return false;
    }

    float inversedeterminant = 1.0f / determinant;
    ::app::Uno::Float3 distanceVector = ::app::Uno::Float3__op_Subtraction(NULL, ray.Position, triangle.A);
    float triangleU = float();
    triangleU = ::app::Uno::Vector__Dot_1(NULL, distanceVector, directioncrossedge2);
    triangleU = triangleU * inversedeterminant;

    if ((triangleU < 0.0f) || (triangleU > 1.0f))
    {
        *distance = 0.0f;
        return false;
    }

    ::app::Uno::Float3 distancecrossedge1 = ::app::Uno::Vector__Cross(NULL, distanceVector, edge1);
    float triangleV = float();
    triangleV = ::app::Uno::Vector__Dot_1(NULL, ray.Direction, distancecrossedge1);
    triangleV = triangleV * inversedeterminant;

    if ((triangleV < 0.0f) || ((triangleU + triangleV) > 1.0f))
    {
        *distance = 0.0f;
        return false;
    }

    float raydistance = float();
    raydistance = ::app::Uno::Vector__Dot_1(NULL, edge2, distancecrossedge1);
    raydistance = raydistance * inversedeterminant;

    if (raydistance < 0.0f)
    {
        *distance = 0.0f;
        return false;
    }

    *distance = raydistance;
    return true;
}

bool Collision__RayIntersectsBox(::uStatic* __this, ::app::Uno::Geometry::Ray ray, ::app::Uno::Geometry::Box box, float* distance)
{
    *distance = 0.0f;
    float tmax = 3.402823e+38f;

    if (::app::Uno::Math__Abs_1(NULL, ray.Direction.X) < 1e-05f)
    {
        if ((ray.Position.X < box.Minimum.X) || (ray.Position.X > box.Maximum.X))
        {
            *distance = 0.0f;
            return false;
        }
    }
    else
    {
        float inverse = 1.0f / ray.Direction.X;
        float t1 = (box.Minimum.X - ray.Position.X) * inverse;
        float t2 = (box.Maximum.X - ray.Position.X) * inverse;

        if (t1 > t2)
        {
            float temp = t1;
            t1 = t2;
            t2 = temp;
        }

        *distance = ::app::Uno::Math__Max_1(NULL, t1, *distance);
        tmax = ::app::Uno::Math__Min_1(NULL, t2, tmax);

        if (*distance > tmax)
        {
            *distance = 0.0f;
            return false;
        }
    }

    if (::app::Uno::Math__Abs_1(NULL, ray.Direction.Y) < 1e-05f)
    {
        if ((ray.Position.Y < box.Minimum.Y) || (ray.Position.Y > box.Maximum.Y))
        {
            *distance = 0.0f;
            return false;
        }
    }
    else
    {
        float inverse = 1.0f / ray.Direction.Y;
        float t1 = (box.Minimum.Y - ray.Position.Y) * inverse;
        float t2 = (box.Maximum.Y - ray.Position.Y) * inverse;

        if (t1 > t2)
        {
            float temp = t1;
            t1 = t2;
            t2 = temp;
        }

        *distance = ::app::Uno::Math__Max_1(NULL, t1, *distance);
        tmax = ::app::Uno::Math__Min_1(NULL, t2, tmax);

        if (*distance > tmax)
        {
            *distance = 0.0f;
            return false;
        }
    }

    if (::app::Uno::Math__Abs_1(NULL, ray.Direction.Z) < 1e-05f)
    {
        if ((ray.Position.Z < box.Minimum.Z) || (ray.Position.Z > box.Maximum.Z))
        {
            *distance = 0.0f;
            return false;
        }
    }
    else
    {
        float inverse = 1.0f / ray.Direction.Z;
        float t1 = (box.Minimum.Z - ray.Position.Z) * inverse;
        float t2 = (box.Maximum.Z - ray.Position.Z) * inverse;

        if (t1 > t2)
        {
            float temp = t1;
            t1 = t2;
            t2 = temp;
        }

        *distance = ::app::Uno::Math__Max_1(NULL, t1, *distance);
        tmax = ::app::Uno::Math__Min_1(NULL, t2, tmax);

        if (*distance > tmax)
        {
            *distance = 0.0f;
            return false;
        }
    }

    return true;
}

}}}
