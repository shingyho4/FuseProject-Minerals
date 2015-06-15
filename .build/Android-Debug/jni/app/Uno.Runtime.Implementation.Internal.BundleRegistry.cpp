// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Runtime\Implementation\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.BundleFile.h>
#include <app/Uno.Int.h>
#include <app/Uno.Object.h>
#include <app/Uno.Runtime.Implementation.Internal.BundleRegistry.h>
#include <app/Uno.String.h>

namespace app {
namespace Uno {
namespace Runtime {
namespace Implementation {
namespace Internal {

::uStaticStrong< ::uArray*> BundleRegistry___data;

BundleRegistry__uType* BundleRegistry__typeof()
{
    static BundleRegistry__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (BundleRegistry__uType*)::uAllocClassType(sizeof(BundleRegistry__uType), "Uno.Runtime.Implementation.Internal.BundleRegistry");
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void BundleRegistry__Init(::uStatic* __this, int resourceCount)
{
    BundleRegistry___data = ::uNewArray(::uObject__typeof(), resourceCount);
}

void BundleRegistry__RegisterBundleFile(::uStatic* __this, int index, ::uString* filename)
{
    ::uPtr< ::uArray*>(BundleRegistry___data)->ItemStrong< ::uObject*>(index) = (::uObject*)::app::Uno::BundleFile__New_1(NULL, filename);
}

void BundleRegistry__Register(::uStatic* __this, int index, ::uObject* data)
{
    ::uPtr< ::uArray*>(BundleRegistry___data)->ItemStrong< ::uObject*>(index) = data;
}

::uObject* BundleRegistry__Get(::uStatic* __this, int index)
{
    return ::uPtr< ::uArray*>(BundleRegistry___data)->Item< ::uObject*>(index);
}

}}}}}
