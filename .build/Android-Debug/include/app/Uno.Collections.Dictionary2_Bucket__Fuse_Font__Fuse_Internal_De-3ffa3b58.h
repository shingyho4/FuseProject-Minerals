// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_BUCKET__FUSE_FONT__FUSE_INTERNAL_DE_3FFA3B58_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_BUCKET__FUSE_FONT__FUSE_INTERNAL_DE_3FFA3B58_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Internal { struct DefaultTextRenderer; } } }
namespace app { namespace Fuse { struct Font; } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_Bucket__Fuse_Font__Fuse_Internal_DefaultTextRenderer;

struct Dictionary2_Bucket__Fuse_Font__Fuse_Internal_DefaultTextRenderer__uType : ::uValueType
{
};

Dictionary2_Bucket__Fuse_Font__Fuse_Internal_DefaultTextRenderer__uType* Dictionary2_Bucket__Fuse_Font__Fuse_Internal_DefaultTextRenderer__typeof();

struct Dictionary2_Bucket__Fuse_Font__Fuse_Internal_DefaultTextRenderer
{
    ::uStrong< ::app::Fuse::Font*> Key;
    ::uStrong< ::app::Fuse::Internal::DefaultTextRenderer*> Value;
    int State;

    Dictionary2_Bucket__Fuse_Font__Fuse_Internal_DefaultTextRenderer& operator =(const Dictionary2_Bucket__Fuse_Font__Fuse_Internal_DefaultTextRenderer& copy)
    {
        ::uCopyValue(this, Dictionary2_Bucket__Fuse_Font__Fuse_Internal_DefaultTextRenderer__typeof(), &copy);
        return *this;
    }
};

}}}


#endif
