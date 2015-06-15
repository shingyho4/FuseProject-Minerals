// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Bool.h>
#include <app/Uno.Graphics.Texture2D.h>
#include <app/Uno.Graphics.TextureHelpers.h>
#include <app/Uno.Int.h>
#include <app/Uno.Int2.h>

namespace app {
namespace Uno {
namespace Graphics {

TextureHelpers__uType* TextureHelpers__typeof()
{
    static TextureHelpers__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (TextureHelpers__uType*)::uAllocClassType(sizeof(TextureHelpers__uType), "Uno.Graphics.TextureHelpers");
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Uno::Int2 TextureHelpers__GetMipSize(::uStatic* __this, ::app::Uno::Graphics::Texture2D* texture, int mip)
{
    ::app::Uno::Int2 size = ::uPtr< ::app::Uno::Graphics::Texture2D*>(texture)->Size();

    if (mip > 0)
    {
        size.X = size.X >> mip;
        size.Y = size.Y >> mip;

        if (size.X < 0)
        {
            size.X = 1;
        }

        if (size.Y < 0)
        {
            size.Y = 1;
        }
    }

    return size;
}

int TextureHelpers__GetMipCount(::uStatic* __this, ::app::Uno::Int2 size)
{
    int result = 0;

    do
    {
        result++;
        size.X = size.X >> 1;
        size.Y = size.Y >> 1;
    }
    while ((size.X > 0) && (size.Y > 0));

    return result;
}

}}}
