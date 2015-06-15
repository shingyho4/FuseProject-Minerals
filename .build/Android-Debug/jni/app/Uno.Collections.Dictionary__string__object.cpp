// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Collections.Dictionary__string__object.h>
#include <app/Uno.Int.h>

namespace app {
namespace Uno {
namespace Collections {

Dictionary__string__object__uType* Dictionary__string__object__typeof()
{
    static Dictionary__string__object__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Dictionary__string__object__uType*)::uAllocClassType(sizeof(Dictionary__string__object__uType), "Uno.Collections.Dictionary<string,object>", ::uObject__typeof(), 0, 1);
        type->StrongRefOffsets[0] = offsetof(Dictionary__string__object, _buckets);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_buckets";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void Dictionary__string__object___ObjInit(Dictionary__string__object* __this)
{
    __this->_buckets = ::uNewArray(::app::Uno::Collections::Dictionary2_Bucket__string__object__typeof(), 8);
    __this->_count = 0;
    __this->_dummies = 0;
}

Dictionary__string__object* Dictionary__string__object__New_1(::uStatic* __this)
{
    Dictionary__string__object* inst = (::app::Uno::Collections::Dictionary__string__object*)::uAllocObject(sizeof(::app::Uno::Collections::Dictionary__string__object), ::app::Uno::Collections::Dictionary__string__object__typeof());
    inst->_ObjInit();
    return inst;
}

}}}
