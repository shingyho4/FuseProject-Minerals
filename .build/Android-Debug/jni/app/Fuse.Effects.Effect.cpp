// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.1.0\Effects\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.DrawContext.h>
#include <app/Fuse.Effects.Effect.h>
#include <app/Fuse.Elements.Element.h>
#include <app/Fuse.Node.h>
#include <app/Uno.Action__Fuse_Effects_Effect.h>
#include <app/Uno.Delegate.h>
#include <app/Uno.Int.h>

namespace app {
namespace Fuse {
namespace Effects {

Effect__uType* Effect__typeof()
{
    static Effect__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Effect__uType*)::uAllocClassType(sizeof(Effect__uType), "Fuse.Effects.Effect", ::uObject__typeof(), 0, 2);
        type->__fp_get_ExtendsRenderBounds = Effect__get_ExtendsRenderBounds;
        type->__fp_get_Active = Effect__get_Active;
        type->__fp_get_RenderBounds = Effect__get_RenderBounds;

        type->StrongRefOffsets[0] = offsetof(Effect, RenderingChanged);
        type->StrongRefOffsets[1] = offsetof(Effect, _Element);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "RenderingChanged";
        type->StrongRefNames[1] = "_Element";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

int Effect__get_Type(Effect* __this)
{
    return __this->_effectType;
}

::app::Fuse::Elements::Element* Effect__get_Element(Effect* __this)
{
    return __this->_Element;
}

void Effect__set_Element(Effect* __this, ::app::Fuse::Elements::Element* value)
{
    __this->_Element = value;
}

bool Effect__get_ExtendsRenderBounds(Effect* __this)
{
    return false;
}

bool Effect__get_Active(Effect* __this)
{
    return true;
}

::app::Uno::Rect Effect__get_RenderBounds(Effect* __this)
{
    return ::uPtr< ::app::Fuse::Elements::Element*>(__this->Element())->RenderBounds();
}

void Effect__OnRooted(Effect* __this)
{
}

void Effect__OnUnrooted(Effect* __this)
{
}

void Effect__Rooted(Effect* __this)
{
    if (__this->_isRooted)
    {
        return;
    }

    __this->_isRooted = true;
    __this->OnRooted();
}

void Effect__Unrooted(Effect* __this)
{
    if (!__this->_isRooted)
    {
        return;
    }

    __this->_isRooted = false;
    __this->OnUnrooted();
}

void Effect__Added(Effect* __this, ::app::Fuse::Elements::Element* elm)
{
    __this->Element(elm);

    if (::uPtr< ::app::Fuse::Elements::Element*>(elm)->IsRooted())
    {
        __this->Rooted();
    }
}

void Effect__Removed(Effect* __this, ::app::Fuse::Elements::Element* elm)
{
    if (::uPtr< ::app::Fuse::Elements::Element*>(elm)->IsRooted())
    {
        __this->Unrooted();
    }

    __this->Element(NULL);
}

void Effect__OnRenderingChanged(Effect* __this)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->RenderingChanged, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->RenderingChanged)->InvokeVoid< Effect*>(__this);
    }
}

void Effect___ObjInit(Effect* __this, int effectType)
{
    __this->_effectType = effectType;
}

void Effect__add_RenderingChanged(Effect* __this, ::uDelegate* value)
{
    __this->RenderingChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->RenderingChanged, (::uDelegate*)value), ::app::Uno::Action__Fuse_Effects_Effect__typeof());
}

void Effect__remove_RenderingChanged(Effect* __this, ::uDelegate* value)
{
    __this->RenderingChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->RenderingChanged, (::uDelegate*)value), ::app::Uno::Action__Fuse_Effects_Effect__typeof());
}

}}}
