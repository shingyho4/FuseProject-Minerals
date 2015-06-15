// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.1.0\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Internal.RectExtensions.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Rect.h>

namespace app {
namespace Fuse {
namespace Internal {

RectExtensions__uType* RectExtensions__typeof()
{
    static RectExtensions__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (RectExtensions__uType*)::uAllocClassType(sizeof(RectExtensions__uType), "Fuse.Internal.RectExtensions");
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Uno::Rect RectExtensions__MoveRectToContainRect(::uStatic* __this, ::app::Uno::Rect a, ::app::Uno::Rect b)
{
    ::app::Uno::Float2 pos = a.Position();
    float newX = pos.X;
    float newY = pos.Y;

    if ((a.Size().X < b.Size().X) || (b.Left < a.Left))
    {
        newX = b.Left;
    }
    else if (b.Right > a.Right)
    {
        newX = newX + (b.Right - a.Right);
    }

    if ((a.Size().Y < b.Size().Y) || (b.Top < a.Top))
    {
        newY = b.Top;
    }
    else if (b.Bottom > a.Bottom)
    {
        newY = newY + (b.Bottom - a.Bottom);
    }

    return ::app::Uno::Rect__New_2(NULL, ::app::Uno::Float2__New_2(NULL, newX, newY), a.Size());
}

::app::Uno::Rect RectExtensions__MoveRectInsideRect(::uStatic* __this, ::app::Uno::Rect a, ::app::Uno::Rect b)
{
    ::app::Uno::Float2 pos = a.Position();
    float newX = pos.X;
    float newY = pos.Y;

    if (b.Left > a.Left)
    {
        newX = b.Left;
    }
    else if (b.Right < a.Right)
    {
        newX = newX - (a.Right - b.Right);
    }

    if (b.Top > a.Top)
    {
        newY = b.Left;
    }
    else if (b.Bottom < a.Bottom)
    {
        newY = newY - (a.Bottom - b.Bottom);
    }

    return ::app::Uno::Rect__New_2(NULL, ::app::Uno::Float2__New_2(NULL, newX, newY), a.Size());
}

}}}
