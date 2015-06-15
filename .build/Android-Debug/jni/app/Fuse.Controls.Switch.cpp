// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Controls.Switch.h>
#include <app/Uno.Delegate.h>
#include <app/Uno.EventArgs.h>
#include <app/Uno.EventHandler.h>
#include <app/Uno.Object.h>

namespace app {
namespace Fuse {
namespace Controls {

Switch__uType* Switch__typeof()
{
    static Switch__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Switch__uType*)::uAllocClassType(sizeof(Switch__uType), "Fuse.Controls.Switch", ::app::Fuse::Controls::Control__typeof(), 8, 1);
        type->__interface_7.__fp_get_Toggled = (bool(*)(void*))Switch__get_Toggled;
        type->__interface_7.__fp_set_Toggled = (void(*)(void*, bool))Switch__set_Toggled;

        type->Implements[0] = ::app::Fuse::INodeParent__typeof();
        type->Implements[1] = ::app::Fuse::IResourceParent__typeof();
        type->Implements[2] = ::app::Fuse::Triggers::Actions::IShow__typeof();
        type->Implements[3] = ::app::Fuse::Triggers::Actions::IHide__typeof();
        type->Implements[4] = ::app::Fuse::Triggers::Actions::ICollapse__typeof();
        type->Implements[5] = ::app::Fuse::IActualSize__typeof();
        type->Implements[6] = ::app::Fuse::Controls::Internal::ICollectionParent__typeof();
        type->Implements[7] = ::app::Fuse::Controls::IToggle__typeof();

        type->InterfaceOffsets[0] = offsetof(Switch__uType, __interface_0);
        type->InterfaceOffsets[1] = offsetof(Switch__uType, __interface_1);
        type->InterfaceOffsets[2] = offsetof(Switch__uType, __interface_2);
        type->InterfaceOffsets[3] = offsetof(Switch__uType, __interface_3);
        type->InterfaceOffsets[4] = offsetof(Switch__uType, __interface_4);
        type->InterfaceOffsets[5] = offsetof(Switch__uType, __interface_5);
        type->InterfaceOffsets[6] = offsetof(Switch__uType, __interface_6);
        type->InterfaceOffsets[7] = offsetof(Switch__uType, __interface_7);

        type->StrongRefOffsets[0] = offsetof(Switch, ToggledChanged);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "ToggledChanged";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

bool Switch__get_Toggled(Switch* __this)
{
    return __this->_toggled;
}

void Switch__set_Toggled(Switch* __this, bool value)
{
    if (!__this->_hasToggled || (__this->_toggled != value))
    {
        __this->_toggled = value;
        __this->_hasToggled = true;
        __this->OnToggledChanged();
    }
}

void Switch__OnToggledChanged(Switch* __this)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->ToggledChanged, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->ToggledChanged)->InvokeVoid< ::uObject*, ::app::Uno::EventArgs*>((::uObject*)__this, ::app::Uno::EventArgs__Empty);
    }
}

void Switch__add_ToggledChanged(Switch* __this, ::uDelegate* value)
{
    __this->ToggledChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->ToggledChanged, (::uDelegate*)value), ::app::Uno::EventHandler__typeof());
}

void Switch__remove_ToggledChanged(Switch* __this, ::uDelegate* value)
{
    __this->ToggledChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->ToggledChanged, (::uDelegate*)value), ::app::Uno::EventHandler__typeof());
}

}}}
