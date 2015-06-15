// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_BUCKET__STRING__FUSE_SHAPES_GEOMETR_1275591A_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_BUCKET__STRING__FUSE_SHAPES_GEOMETR_1275591A_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Shapes { struct GeometryCacheEntry; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_Bucket__string__Fuse_Shapes_GeometryCacheEntry;

struct Dictionary2_Bucket__string__Fuse_Shapes_GeometryCacheEntry__uType : ::uValueType
{
};

Dictionary2_Bucket__string__Fuse_Shapes_GeometryCacheEntry__uType* Dictionary2_Bucket__string__Fuse_Shapes_GeometryCacheEntry__typeof();

struct Dictionary2_Bucket__string__Fuse_Shapes_GeometryCacheEntry
{
    ::uStrong< ::uString*> Key;
    ::uStrong< ::app::Fuse::Shapes::GeometryCacheEntry*> Value;
    int State;

    Dictionary2_Bucket__string__Fuse_Shapes_GeometryCacheEntry& operator =(const Dictionary2_Bucket__string__Fuse_Shapes_GeometryCacheEntry& copy)
    {
        ::uCopyValue(this, Dictionary2_Bucket__string__Fuse_Shapes_GeometryCacheEntry__typeof(), &copy);
        return *this;
    }
};

}}}


#endif
