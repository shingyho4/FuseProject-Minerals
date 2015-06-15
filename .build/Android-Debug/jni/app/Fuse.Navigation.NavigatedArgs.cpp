// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Navigation\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Navigation.NavigatedArgs.h>
#include <app/Fuse.Node.h>

namespace app {
namespace Fuse {
namespace Navigation {

NavigatedArgs__uType* NavigatedArgs__typeof()
{
    static NavigatedArgs__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (NavigatedArgs__uType*)::uAllocClassType(sizeof(NavigatedArgs__uType), "Fuse.Navigation.NavigatedArgs", ::app::Uno::EventArgs__typeof(), 0, 1);
        type->StrongRefOffsets[0] = offsetof(NavigatedArgs, _NewNode);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_NewNode";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Fuse::Node* NavigatedArgs__get_NewNode(NavigatedArgs* __this)
{
    return __this->_NewNode;
}

void NavigatedArgs__set_NewNode(NavigatedArgs* __this, ::app::Fuse::Node* value)
{
    __this->_NewNode = value;
}

void NavigatedArgs___ObjInit_1(NavigatedArgs* __this, ::app::Fuse::Node* newNode)
{
    ::app::Uno::EventArgs___ObjInit(__this);
    __this->NewNode(newNode);
}

NavigatedArgs* NavigatedArgs__New_2(::uStatic* __this, ::app::Fuse::Node* newNode)
{
    NavigatedArgs* inst = (::app::Fuse::Navigation::NavigatedArgs*)::uAllocObject(sizeof(::app::Fuse::Navigation::NavigatedArgs), ::app::Fuse::Navigation::NavigatedArgs__typeof());
    inst->_ObjInit_1(newNode);
    return inst;
}

}}}
