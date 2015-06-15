// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Collections.Dictionary__framebuffer__bool.h>
#include <app/Uno.Collections.HashSet__framebuffer.h>
#include <app/Uno.Graphics.Framebuffer.h>

namespace app {
namespace Uno {
namespace Collections {

HashSet__framebuffer__uType* HashSet__framebuffer__typeof()
{
    static HashSet__framebuffer__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (HashSet__framebuffer__uType*)::uAllocClassType(sizeof(HashSet__framebuffer__uType), "Uno.Collections.HashSet<framebuffer>", ::uObject__typeof(), 0, 1);
        type->StrongRefOffsets[0] = offsetof(HashSet__framebuffer, _map);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_map";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

bool HashSet__framebuffer__Add(HashSet__framebuffer* __this, ::app::Uno::Graphics::Framebuffer* item)
{
    bool result = ::uPtr< ::app::Uno::Collections::Dictionary__framebuffer__bool*>(__this->_map)->ContainsKey(item);
    ::uPtr< ::app::Uno::Collections::Dictionary__framebuffer__bool*>(__this->_map)->Item(item, true);
    return result;
}

bool HashSet__framebuffer__Contains(HashSet__framebuffer* __this, ::app::Uno::Graphics::Framebuffer* item)
{
    return ::uPtr< ::app::Uno::Collections::Dictionary__framebuffer__bool*>(__this->_map)->ContainsKey(item);
}

bool HashSet__framebuffer__Remove(HashSet__framebuffer* __this, ::app::Uno::Graphics::Framebuffer* item)
{
    return ::uPtr< ::app::Uno::Collections::Dictionary__framebuffer__bool*>(__this->_map)->Remove(item);
}

void HashSet__framebuffer___ObjInit(HashSet__framebuffer* __this)
{
    __this->_map = ::app::Uno::Collections::Dictionary__framebuffer__bool__New_1(NULL);
}

HashSet__framebuffer* HashSet__framebuffer__New_1(::uStatic* __this)
{
    HashSet__framebuffer* inst = (::app::Uno::Collections::HashSet__framebuffer*)::uAllocObject(sizeof(::app::Uno::Collections::HashSet__framebuffer), ::app::Uno::Collections::HashSet__framebuffer__typeof());
    inst->_ObjInit();
    return inst;
}

}}}
