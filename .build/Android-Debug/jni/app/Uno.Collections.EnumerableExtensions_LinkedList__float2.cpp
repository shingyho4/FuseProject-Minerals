// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.1.0\Extensions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Collections.EnumerableExtensions_LinkedList__float2.h>

namespace app {
namespace Uno {
namespace Collections {

EnumerableExtensions_LinkedList__float2__uType* EnumerableExtensions_LinkedList__float2__typeof()
{
    static EnumerableExtensions_LinkedList__float2__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (EnumerableExtensions_LinkedList__float2__uType*)::uAllocClassType(sizeof(EnumerableExtensions_LinkedList__float2__uType), "Uno.Collections.EnumerableExtensions_LinkedList<float2>", ::uObject__typeof(), 0, 1);
        type->StrongRefOffsets[0] = offsetof(EnumerableExtensions_LinkedList__float2, Next);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "Next";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void EnumerableExtensions_LinkedList__float2___ObjInit(EnumerableExtensions_LinkedList__float2* __this, ::app::Uno::Float2 item, EnumerableExtensions_LinkedList__float2* next)
{
    __this->Item = item;
    __this->Next = next;
}

EnumerableExtensions_LinkedList__float2* EnumerableExtensions_LinkedList__float2__New_1(::uStatic* __this, ::app::Uno::Float2 item, EnumerableExtensions_LinkedList__float2* next)
{
    EnumerableExtensions_LinkedList__float2* inst = (::app::Uno::Collections::EnumerableExtensions_LinkedList__float2*)::uAllocObject(sizeof(::app::Uno::Collections::EnumerableExtensions_LinkedList__float2), ::app::Uno::Collections::EnumerableExtensions_LinkedList__float2__typeof());
    inst->_ObjInit(item, next);
    return inst;
}

}}}
