// This file was generated based on 'C:\ProgramData\Uno\Packages\Experimental.TextureLoader\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Experimental.TextureLoader.Callback.h>
#include <app/Uno.Action__texture2D.h>
#include <app/Uno.Graphics.Texture2D.h>

namespace app {
namespace Experimental {
namespace TextureLoader {

Callback__uType* Callback__typeof()
{
    static Callback__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Callback__uType*)::uAllocClassType(sizeof(Callback__uType), "Experimental.TextureLoader.Callback", ::uObject__typeof(), 0, 1);
        type->StrongRefOffsets[0] = offsetof(Callback, _action);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_action";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void Callback__Execute(Callback* __this, ::app::Uno::Graphics::Texture2D* arg)
{
    ::uPtr< ::uDelegate*>(__this->_action)->InvokeVoid< ::app::Uno::Graphics::Texture2D*>(arg);
}

void Callback___ObjInit(Callback* __this, ::uDelegate* action)
{
    __this->_action = action;
}

Callback* Callback__New_1(::uStatic* __this, ::uDelegate* action)
{
    Callback* inst = (::app::Experimental::TextureLoader::Callback*)::uAllocObject(sizeof(::app::Experimental::TextureLoader::Callback), ::app::Experimental::TextureLoader::Callback__typeof());
    inst->_ObjInit(action);
    return inst;
}

}}}
