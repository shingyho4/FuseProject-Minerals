// This file was generated based on 'C:\ProgramData\Uno\Packages\Experimental.TextureLoader\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Experimental.TextureLoader.InvalidContentTypeException.h>
#include <app/Uno.String.h>

namespace app {
namespace Experimental {
namespace TextureLoader {

InvalidContentTypeException__uType* InvalidContentTypeException__typeof()
{
    static InvalidContentTypeException__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (InvalidContentTypeException__uType*)::uAllocClassType(sizeof(InvalidContentTypeException__uType), "Experimental.TextureLoader.InvalidContentTypeException", ::app::Uno::Exception__typeof());
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void InvalidContentTypeException___ObjInit_2(InvalidContentTypeException* __this, ::uString* reason)
{
    ::app::Uno::Exception___ObjInit(__this, reason);
}

InvalidContentTypeException* InvalidContentTypeException__New_3(::uStatic* __this, ::uString* reason)
{
    InvalidContentTypeException* inst = (::app::Experimental::TextureLoader::InvalidContentTypeException*)::uAllocObject(sizeof(::app::Experimental::TextureLoader::InvalidContentTypeException), ::app::Experimental::TextureLoader::InvalidContentTypeException__typeof());
    inst->_ObjInit_2(reason);
    return inst;
}

}}}
