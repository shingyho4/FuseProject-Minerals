// This file was generated based on 'D:\Shing\work\OCIO\FuseProject\MyMineral\.cache\GeneratedCode\MainView.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/_.NavButton.h>

namespace app {

NavButton__uType* NavButton__typeof()
{
    static NavButton__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (NavButton__uType*)::uAllocClassType(sizeof(NavButton__uType), "NavButton", ::app::Fuse::Controls::Panel__typeof(), 9);
        type->Implements[0] = ::app::Fuse::INodeParent__typeof();
        type->Implements[1] = ::app::Fuse::IResourceParent__typeof();
        type->Implements[2] = ::app::Fuse::Triggers::Actions::IShow__typeof();
        type->Implements[3] = ::app::Fuse::Triggers::Actions::IHide__typeof();
        type->Implements[4] = ::app::Fuse::Triggers::Actions::ICollapse__typeof();
        type->Implements[5] = ::app::Fuse::IActualSize__typeof();
        type->Implements[6] = ::app::Fuse::Controls::Internal::ICollectionParent__typeof();
        type->Implements[7] = ::app::Fuse::Navigation::INavigationPanel__typeof();
        type->Implements[8] = ::app::Fuse::Triggers::IAddRemoveChild__typeof();

        type->InterfaceOffsets[0] = offsetof(NavButton__uType, __interface_0);
        type->InterfaceOffsets[1] = offsetof(NavButton__uType, __interface_1);
        type->InterfaceOffsets[2] = offsetof(NavButton__uType, __interface_2);
        type->InterfaceOffsets[3] = offsetof(NavButton__uType, __interface_3);
        type->InterfaceOffsets[4] = offsetof(NavButton__uType, __interface_4);
        type->InterfaceOffsets[5] = offsetof(NavButton__uType, __interface_5);
        type->InterfaceOffsets[6] = offsetof(NavButton__uType, __interface_6);
        type->InterfaceOffsets[7] = offsetof(NavButton__uType, __interface_7);
        type->InterfaceOffsets[8] = offsetof(NavButton__uType, __interface_8);
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void NavButton__InitializeUX(NavButton* __this)
{
}

void NavButton___ObjInit_4(NavButton* __this)
{
    ::app::Fuse::Controls::Panel___ObjInit_3(__this);
    __this->InitializeUX();
}

NavButton* NavButton__New_2(::uStatic* __this)
{
    NavButton* inst = (::app::NavButton*)::uAllocObject(sizeof(::app::NavButton), ::app::NavButton__typeof());
    inst->_ObjInit_4();
    return inst;
}

}
