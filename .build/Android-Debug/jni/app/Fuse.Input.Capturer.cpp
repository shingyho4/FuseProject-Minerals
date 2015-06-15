// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Input.Capturer.h>
#include <app/Fuse.Node.h>
#include <app/Uno.Action.h>
#include <app/Uno.Delegate.h>
#include <app/Uno.Exception.h>
#include <app/Uno.String.h>

namespace app {
namespace Fuse {
namespace Input {

Capturer__uType* Capturer__typeof()
{
    static Capturer__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Capturer__uType*)::uAllocClassType(sizeof(Capturer__uType), "Fuse.Input.Capturer", ::uObject__typeof(), 0, 3);
        type->StrongRefOffsets[0] = offsetof(Capturer, _Node);
        type->StrongRefOffsets[1] = offsetof(Capturer, _Identity);
        type->StrongRefOffsets[2] = offsetof(Capturer, _LostCallback);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_Node";
        type->StrongRefNames[1] = "_Identity";
        type->StrongRefNames[2] = "_LostCallback";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Fuse::Node* Capturer__get_Node(Capturer* __this)
{
    return __this->_Node;
}

void Capturer__set_Node(Capturer* __this, ::app::Fuse::Node* value)
{
    __this->_Node = value;
}

::uObject* Capturer__get_Identity(Capturer* __this)
{
    return __this->_Identity;
}

void Capturer__set_Identity(Capturer* __this, ::uObject* value)
{
    __this->_Identity = value;
}

::uDelegate* Capturer__get_LostCallback(Capturer* __this)
{
    return __this->_LostCallback;
}

void Capturer__set_LostCallback(Capturer* __this, ::uDelegate* value)
{
    __this->_LostCallback = value;
}

bool Capturer__get_IsSuitable(Capturer* __this)
{
    return ::uPtr< ::app::Fuse::Node*>(__this->Node())->IsEnabled() && ::uPtr< ::app::Fuse::Node*>(__this->Node())->IsRooted();
}

void Capturer___ObjInit(Capturer* __this, ::app::Fuse::Node* n, ::uObject* identity, ::uDelegate* lostCallback)
{
    if (((n == NULL) || (identity == NULL)) || ::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)lostCallback, NULL))
    {
        U_THROW(::app::Uno::Exception__New_1(NULL, ::uGetConstString("Invalid Capturer parameters")));
    }

    __this->Node(n);
    __this->Identity(identity);
    __this->LostCallback(lostCallback);
}

Capturer* Capturer__New_1(::uStatic* __this, ::app::Fuse::Node* n, ::uObject* identity, ::uDelegate* lostCallback)
{
    Capturer* inst = (::app::Fuse::Input::Capturer*)::uAllocObject(sizeof(::app::Fuse::Input::Capturer), ::app::Fuse::Input::Capturer__typeof());
    inst->_ObjInit(n, identity, lostCallback);
    return inst;
}

}}}
