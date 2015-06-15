// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Effects\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.DrawContext.h>
#include <app/Fuse.Effects.BasicEffect.h>
#include <app/Fuse.Elements.Element.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Int.h>
#include <app/Uno.Int2.h>
#include <app/Uno.Math.h>
#include <app/Uno.Recti.h>

namespace app {
namespace Fuse {
namespace Effects {

BasicEffect__uType* BasicEffect__typeof()
{
    static BasicEffect__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (BasicEffect__uType*)::uAllocClassType(sizeof(BasicEffect__uType), "Fuse.Effects.BasicEffect", ::app::Fuse::Effects::Effect__typeof());
        type->__fp_Render = (void(*)(::app::Fuse::Effects::Effect*, ::app::Fuse::DrawContext*))BasicEffect__Render;
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void BasicEffect__Render(BasicEffect* __this, ::app::Fuse::DrawContext* dc)
{
    ::app::Uno::Rect rect = __this->GetLocalElementRect();
    __this->OnRender(dc, rect);
}

::app::Uno::Recti BasicEffect__ConservativelySnapToCoveringIntegers(::uStatic* __this, ::app::Uno::Rect r)
{
    ::app::Uno::Int2 origin = ::app::Uno::Int2__op_Explicit(NULL, ::app::Uno::Math__Floor_2(NULL, r.LeftTop()));
    ::app::Uno::Int2 size = ::app::Uno::Int2__op_Explicit(NULL, ::app::Uno::Math__Ceil_2(NULL, ::app::Uno::Float2__op_Addition_1(NULL, ::app::Uno::Float2__op_Subtraction(NULL, r.RightBottom(), r.LeftTop()), 0.01f)));
    return ::app::Uno::Recti__New_1(NULL, origin.X, origin.Y, (origin.X + size.X) + 1, (origin.Y + size.Y) + 1);
}

::app::Uno::Rect BasicEffect__GetLocalElementRect(BasicEffect* __this)
{
    ::app::Uno::Recti ir = BasicEffect__ConservativelySnapToCoveringIntegers(NULL, ::app::Uno::Rect__Scale_1(NULL, ::uPtr< ::app::Fuse::Elements::Element*>(__this->Element())->RenderBounds(), ::uPtr< ::app::Fuse::Elements::Element*>(__this->Element())->AbsoluteZoom()));
    return ::app::Uno::Rect__New_1(NULL, (float)ir.Minimum().X / ::uPtr< ::app::Fuse::Elements::Element*>(__this->Element())->AbsoluteZoom(), (float)ir.Minimum().Y / ::uPtr< ::app::Fuse::Elements::Element*>(__this->Element())->AbsoluteZoom(), (float)ir.Maximum().X / ::uPtr< ::app::Fuse::Elements::Element*>(__this->Element())->AbsoluteZoom(), (float)ir.Maximum().Y / ::uPtr< ::app::Fuse::Elements::Element*>(__this->Element())->AbsoluteZoom());
}

void BasicEffect___ObjInit_1(BasicEffect* __this, int effectType)
{
    ::app::Fuse::Effects::Effect___ObjInit(__this, effectType);
}

}}}
