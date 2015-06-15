// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Drawing.ButtCap.h>
#include <app/Fuse.Drawing.LineCapImpl.h>
#include <app/Fuse.Drawing.RoundCap.h>
#include <app/Uno.Collections.IEnumerable__float2.h>
#include <app/Uno.Int.h>
#include <app/Uno.NotImplementedException.h>

namespace app {
namespace Fuse {
namespace Drawing {

LineCapImpl__uType* LineCapImpl__typeof()
{
    static LineCapImpl__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (LineCapImpl__uType*)::uAllocClassType(sizeof(LineCapImpl__uType), "Fuse.Drawing.LineCapImpl", ::uObject__typeof());
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

LineCapImpl* LineCapImpl__Create_1(::uStatic* __this, int lineCap)
{
    switch (lineCap)
    {
        case 0:
        {
            return (LineCapImpl*)::app::Fuse::Drawing::ButtCap__New_1(NULL);
        }
        case 1:
        {
            return (LineCapImpl*)::app::Fuse::Drawing::RoundCap__New_1(NULL);
        }
    }

    U_THROW(::app::Uno::NotImplementedException__New_3(NULL));
}

void LineCapImpl___ObjInit(LineCapImpl* __this)
{
}

}}}
