// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Entities\0.2.0\Designer\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Entities.Designer.PreloadedResources.h>
#include <app/Uno.Collections.Dictionary__string__object.h>

namespace app {
namespace Fuse {
namespace Entities {
namespace Designer {

::uStaticStrong< ::app::Uno::Collections::Dictionary__string__object*> PreloadedResources__resources;

PreloadedResources__uType* PreloadedResources__typeof()
{
    static PreloadedResources__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (PreloadedResources__uType*)::uAllocClassType(sizeof(PreloadedResources__uType), "Fuse.Entities.Designer.PreloadedResources");
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void PreloadedResources___TypeInit(::uStatic* __this)
{
    PreloadedResources__resources = ::app::Uno::Collections::Dictionary__string__object__New_1(NULL);
}

}}}}
