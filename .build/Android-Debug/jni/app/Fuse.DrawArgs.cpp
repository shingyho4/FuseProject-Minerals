// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.DrawArgs.h>
#include <app/Fuse.DrawContext.h>

namespace app {
namespace Fuse {

DrawArgs__uType* DrawArgs__typeof()
{
    static DrawArgs__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (DrawArgs__uType*)::uAllocClassType(sizeof(DrawArgs__uType), "Fuse.DrawArgs", ::app::Uno::EventArgs__typeof(), 0, 1);
        type->StrongRefOffsets[0] = offsetof(DrawArgs, _Context);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_Context";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Fuse::DrawContext* DrawArgs__get_Context(DrawArgs* __this)
{
    return __this->_Context;
}

void DrawArgs__set_Context(DrawArgs* __this, ::app::Fuse::DrawContext* value)
{
    __this->_Context = value;
}

void DrawArgs___ObjInit_1(DrawArgs* __this, ::app::Fuse::DrawContext* dc)
{
    ::app::Uno::EventArgs___ObjInit(__this);
    __this->Context(dc);
}

DrawArgs* DrawArgs__New_2(::uStatic* __this, ::app::Fuse::DrawContext* dc)
{
    DrawArgs* inst = (::app::Fuse::DrawArgs*)::uAllocObject(sizeof(::app::Fuse::DrawArgs), ::app::Fuse::DrawArgs__typeof());
    inst->_ObjInit_1(dc);
    return inst;
}

}}
