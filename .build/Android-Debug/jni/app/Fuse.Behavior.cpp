// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Behavior.h>
#include <app/Fuse.Node.h>
#include <app/Uno.Bool.h>

namespace app {
namespace Fuse {

Behavior__uType* Behavior__typeof()
{
    static Behavior__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Behavior__uType*)::uAllocClassType(sizeof(Behavior__uType), "Fuse.Behavior", ::uObject__typeof());
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void Behavior__Rooted(Behavior* __this, ::app::Fuse::Node* e)
{
    if (__this->_isRooted)
    {
        return;
    }

    __this->_isRooted = true;
    __this->OnRooted(e);
}

void Behavior__Unrooted(Behavior* __this, ::app::Fuse::Node* e)
{
    if (!__this->_isRooted)
    {
        return;
    }

    __this->_isRooted = false;
    __this->OnUnrooted(e);
}

void Behavior___ObjInit(Behavior* __this)
{
}

}}
