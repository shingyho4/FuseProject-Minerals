// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Drawing.DynamicBrush.h>
#include <app/Uno.Action.h>
#include <app/Uno.Delegate.h>
#include <app/Uno.Int.h>

namespace app {
namespace Fuse {
namespace Drawing {

DynamicBrush__uType* DynamicBrush__typeof()
{
    static DynamicBrush__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (DynamicBrush__uType*)::uAllocClassType(sizeof(DynamicBrush__uType), "Fuse.Drawing.DynamicBrush", ::app::Fuse::Drawing::Brush__typeof(), 0, 1);
        type->__fp_get_IsCompletelyTransparent = (bool(*)(::app::Fuse::Drawing::Brush*))DynamicBrush__get_IsCompletelyTransparent;

        type->StrongRefOffsets[0] = offsetof(DynamicBrush, ShadingChanged);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "ShadingChanged";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

bool DynamicBrush__get_IsCompletelyTransparent(DynamicBrush* __this)
{
    return __this->Opacity() == 0.0f;
}

float DynamicBrush__get_Opacity(DynamicBrush* __this)
{
    return __this->_opacity;
}

void DynamicBrush__set_Opacity(DynamicBrush* __this, float value)
{
    if (value == __this->_opacity)
    {
        return;
    }

    __this->_opacity = value;
    __this->OnShadingChanged();
}

int DynamicBrush__get_BlendMode(DynamicBrush* __this)
{
    return __this->_blendMode;
}

void DynamicBrush__set_BlendMode(DynamicBrush* __this, int value)
{
    if (value == __this->_blendMode)
    {
        return;
    }

    __this->_blendMode = value;
    __this->OnShadingChanged();
}

void DynamicBrush__OnShadingChanged(DynamicBrush* __this)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->ShadingChanged, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->ShadingChanged)->InvokeVoid();
    }
}

void DynamicBrush___ObjInit_1(DynamicBrush* __this)
{
    __this->_opacity = 1.0f;
    ::app::Fuse::Drawing::Brush___ObjInit(__this);
}

void DynamicBrush__add_ShadingChanged(DynamicBrush* __this, ::uDelegate* value)
{
    __this->ShadingChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->ShadingChanged, (::uDelegate*)value), ::app::Uno::Action__typeof());
}

void DynamicBrush__remove_ShadingChanged(DynamicBrush* __this, ::uDelegate* value)
{
    __this->ShadingChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->ShadingChanged, (::uDelegate*)value), ::app::Uno::Action__typeof());
}

}}}
