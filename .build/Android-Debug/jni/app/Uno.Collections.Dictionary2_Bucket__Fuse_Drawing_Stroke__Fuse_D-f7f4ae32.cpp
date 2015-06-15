// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Drawing.PolygonFiller.h>
#include <app/Fuse.Drawing.Stroke.h>
#include <app/Uno.Collections.Dictionary2_Bucket__Fuse_Drawing_Stroke__Fuse_D-f7f4ae32.h>
#include <app/Uno.Int.h>

namespace app {
namespace Uno {
namespace Collections {

Dictionary2_Bucket__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__uType* Dictionary2_Bucket__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__typeof()
{
    static Dictionary2_Bucket__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Dictionary2_Bucket__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__uType*)::uAllocValueType(sizeof(Dictionary2_Bucket__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__uType), "Uno.Collections.Dictionary2_Bucket<Fuse.Drawing.Stroke,Fuse.Drawing.PolygonFiller>", sizeof(Dictionary2_Bucket__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller), 0, 2);
        type->StrongRefOffsets[0] = offsetof(Dictionary2_Bucket__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller, Key);
        type->StrongRefOffsets[1] = offsetof(Dictionary2_Bucket__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller, Value);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "Key";
        type->StrongRefNames[1] = "Value";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

}}}
