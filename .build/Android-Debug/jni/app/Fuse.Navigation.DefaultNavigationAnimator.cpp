// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Navigation\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Navigation.DefaultNavigationAnimator.h>
#include <app/Fuse.Navigation.Navigation.h>
#include <app/Fuse.Navigation.NavigationArgs.h>
#include <app/Fuse.Node.h>

namespace app {
namespace Fuse {
namespace Navigation {

DefaultNavigationAnimator__uType* DefaultNavigationAnimator__typeof()
{
    static DefaultNavigationAnimator__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (DefaultNavigationAnimator__uType*)::uAllocClassType(sizeof(DefaultNavigationAnimator__uType), "Fuse.Navigation.DefaultNavigationAnimator", ::uObject__typeof(), 1, 1);
        type->__interface_0.__fp_Update = (void(*)(void*, double, double))DefaultNavigationAnimator__Update;

        type->Implements[0] = ::app::Fuse::Navigation::INavigationAnimator__typeof();

        type->InterfaceOffsets[0] = offsetof(DefaultNavigationAnimator__uType, __interface_0);

        type->StrongRefOffsets[0] = offsetof(DefaultNavigationAnimator, _node);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_node";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Fuse::Node* DefaultNavigationAnimator__get_Node(DefaultNavigationAnimator* __this)
{
    return __this->_node;
}

void DefaultNavigationAnimator__Update(DefaultNavigationAnimator* __this, double progress, double prevProgress)
{
    ::app::Fuse::Navigation::Navigation__NotifyNavigation(NULL, __this->Node(), ::app::Fuse::Navigation::NavigationArgs__New_2(NULL, progress - (double)__this->_index, prevProgress - (double)__this->_index, 2));
}

void DefaultNavigationAnimator___ObjInit(DefaultNavigationAnimator* __this, int index, ::app::Fuse::Node* node)
{
    __this->_index = index;
    __this->_node = node;
}

DefaultNavigationAnimator* DefaultNavigationAnimator__New_1(::uStatic* __this, int index, ::app::Fuse::Node* node)
{
    DefaultNavigationAnimator* inst = (::app::Fuse::Navigation::DefaultNavigationAnimator*)::uAllocObject(sizeof(::app::Fuse::Navigation::DefaultNavigationAnimator), ::app::Fuse::Navigation::DefaultNavigationAnimator__typeof());
    inst->_ObjInit(index, node);
    return inst;
}

}}}
