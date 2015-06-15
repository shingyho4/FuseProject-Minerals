// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.1.0\Primitives\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Controls.Primitives.RangeControl.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Delegate.h>
#include <app/Uno.EventArgs.h>
#include <app/Uno.EventHandler.h>
#include <app/Uno.Math.h>
#include <app/Uno.Object.h>

namespace app {
namespace Fuse {
namespace Controls {
namespace Primitives {

RangeControl__uType* RangeControl__typeof()
{
    static RangeControl__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (RangeControl__uType*)::uAllocClassType(sizeof(RangeControl__uType), "Fuse.Controls.Primitives.RangeControl", ::app::Fuse::Controls::Control__typeof(), 7, 3);
        type->__fp_OnValueChanged = RangeControl__OnValueChanged;

        type->Implements[0] = ::app::Fuse::INodeParent__typeof();
        type->Implements[1] = ::app::Fuse::IResourceParent__typeof();
        type->Implements[2] = ::app::Fuse::Triggers::Actions::IShow__typeof();
        type->Implements[3] = ::app::Fuse::Triggers::Actions::IHide__typeof();
        type->Implements[4] = ::app::Fuse::Triggers::Actions::ICollapse__typeof();
        type->Implements[5] = ::app::Fuse::IActualSize__typeof();
        type->Implements[6] = ::app::Fuse::Controls::Internal::ICollectionParent__typeof();

        type->InterfaceOffsets[0] = offsetof(RangeControl__uType, __interface_0);
        type->InterfaceOffsets[1] = offsetof(RangeControl__uType, __interface_1);
        type->InterfaceOffsets[2] = offsetof(RangeControl__uType, __interface_2);
        type->InterfaceOffsets[3] = offsetof(RangeControl__uType, __interface_3);
        type->InterfaceOffsets[4] = offsetof(RangeControl__uType, __interface_4);
        type->InterfaceOffsets[5] = offsetof(RangeControl__uType, __interface_5);
        type->InterfaceOffsets[6] = offsetof(RangeControl__uType, __interface_6);

        type->StrongRefOffsets[0] = offsetof(RangeControl, MinimumChanged);
        type->StrongRefOffsets[1] = offsetof(RangeControl, MaximumChanged);
        type->StrongRefOffsets[2] = offsetof(RangeControl, ValueChanged);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "MinimumChanged";
        type->StrongRefNames[1] = "MaximumChanged";
        type->StrongRefNames[2] = "ValueChanged";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

float RangeControl__get_Minimum(RangeControl* __this)
{
    return __this->_minimum;
}

void RangeControl__set_Minimum(RangeControl* __this, float value)
{
    __this->_minimum = value;
    __this->OnMinimumChanged();
}

float RangeControl__get_Maximum(RangeControl* __this)
{
    return __this->_maxmimum;
}

void RangeControl__set_Maximum(RangeControl* __this, float value)
{
    __this->_maxmimum = value;
    __this->OnMaximumChanged();
}

float RangeControl__get_Value(RangeControl* __this)
{
    return __this->_value;
}

void RangeControl__set_Value(RangeControl* __this, float value)
{
    float v = value;

    if ((__this->_value < __this->Minimum()) || ((__this->_value > __this->Maximum()) && (__this->Minimum() <= __this->Maximum())))
    {
        v = ::app::Uno::Math__Min_1(NULL, ::app::Uno::Math__Max_1(NULL, __this->Minimum(), value), __this->Maximum());
    }

    if (__this->_value != v)
    {
        __this->_value = v;
        __this->OnValueChanged();
    }
}

void RangeControl__OnMinimumChanged(RangeControl* __this)
{
    ::uDelegate* handler = __this->MinimumChanged;

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)handler, NULL))
    {
        ::uPtr< ::uDelegate*>(handler)->InvokeVoid< ::uObject*, ::app::Uno::EventArgs*>((::uObject*)__this, ::app::Uno::EventArgs__New_1(NULL));
    }
}

void RangeControl__OnMaximumChanged(RangeControl* __this)
{
    ::uDelegate* handler = __this->MaximumChanged;

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)handler, NULL))
    {
        ::uPtr< ::uDelegate*>(handler)->InvokeVoid< ::uObject*, ::app::Uno::EventArgs*>((::uObject*)__this, ::app::Uno::EventArgs__New_1(NULL));
    }
}

void RangeControl__OnValueChanged(RangeControl* __this)
{
    ::uDelegate* handler = __this->ValueChanged;

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)handler, NULL))
    {
        ::uPtr< ::uDelegate*>(handler)->InvokeVoid< ::uObject*, ::app::Uno::EventArgs*>((::uObject*)__this, ::app::Uno::EventArgs__New_1(NULL));
    }
}

void RangeControl__add_MinimumChanged(RangeControl* __this, ::uDelegate* value)
{
    __this->MinimumChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->MinimumChanged, (::uDelegate*)value), ::app::Uno::EventHandler__typeof());
}

void RangeControl__remove_MinimumChanged(RangeControl* __this, ::uDelegate* value)
{
    __this->MinimumChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->MinimumChanged, (::uDelegate*)value), ::app::Uno::EventHandler__typeof());
}

void RangeControl__add_MaximumChanged(RangeControl* __this, ::uDelegate* value)
{
    __this->MaximumChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->MaximumChanged, (::uDelegate*)value), ::app::Uno::EventHandler__typeof());
}

void RangeControl__remove_MaximumChanged(RangeControl* __this, ::uDelegate* value)
{
    __this->MaximumChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->MaximumChanged, (::uDelegate*)value), ::app::Uno::EventHandler__typeof());
}

void RangeControl__add_ValueChanged(RangeControl* __this, ::uDelegate* value)
{
    __this->ValueChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->ValueChanged, (::uDelegate*)value), ::app::Uno::EventHandler__typeof());
}

void RangeControl__remove_ValueChanged(RangeControl* __this, ::uDelegate* value)
{
    __this->ValueChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->ValueChanged, (::uDelegate*)value), ::app::Uno::EventHandler__typeof());
}

}}}}
