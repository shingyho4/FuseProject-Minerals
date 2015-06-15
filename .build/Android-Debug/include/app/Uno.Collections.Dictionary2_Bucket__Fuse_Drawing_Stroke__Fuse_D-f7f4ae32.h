// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_BUCKET__FUSE_DRAWING_STROKE__FUSE_D_F7F4AE32_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_BUCKET__FUSE_DRAWING_STROKE__FUSE_D_F7F4AE32_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Drawing { struct PolygonFiller; } } }
namespace app { namespace Fuse { namespace Drawing { struct Stroke; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_Bucket__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller;

struct Dictionary2_Bucket__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__uType : ::uValueType
{
};

Dictionary2_Bucket__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__uType* Dictionary2_Bucket__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__typeof();

struct Dictionary2_Bucket__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller
{
    ::uStrong< ::app::Fuse::Drawing::Stroke*> Key;
    ::uStrong< ::app::Fuse::Drawing::PolygonFiller*> Value;
    int State;

    Dictionary2_Bucket__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller& operator =(const Dictionary2_Bucket__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller& copy)
    {
        ::uCopyValue(this, Dictionary2_Bucket__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__typeof(), &copy);
        return *this;
    }
};

}}}


#endif
