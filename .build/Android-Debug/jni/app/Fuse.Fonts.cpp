// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Font.h>
#include <app/Fuse.Fonts.h>
#include <app/Uno.Bool.h>
#include <app/Uno.BundleFile.h>
#include <app/Uno.Int.h>
#include <app/Uno.Object.h>
#include <app/Uno.Runtime.Implementation.Internal.BundleRegistry.h>

namespace app {
namespace Fuse {

::uStaticStrong< ::app::Fuse::Font*> Fonts___fallback;

Fonts__uType* Fonts__typeof()
{
    static Fonts__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Fonts__uType*)::uAllocClassType(sizeof(Fonts__uType), "Fuse.Fonts");
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Fuse::Font* Fonts__get_Fallback(::uStatic* __this)
{
    if (Fonts___fallback == NULL)
    {
        Fonts___fallback = ::app::Fuse::Font__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 100), ::app::Uno::BundleFile__typeof()));
    }

    return Fonts___fallback;
}

}}
