// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_BUCKET__INT__FUSE_INPUT_POINTER_POI_7A997982_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_BUCKET__INT__FUSE_INPUT_POINTER_POI_7A997982_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Input { struct Pointer_PointerRecord; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_Bucket__int__Fuse_Input_Pointer_PointerRecord;

struct Dictionary2_Bucket__int__Fuse_Input_Pointer_PointerRecord__uType : ::uValueType
{
};

Dictionary2_Bucket__int__Fuse_Input_Pointer_PointerRecord__uType* Dictionary2_Bucket__int__Fuse_Input_Pointer_PointerRecord__typeof();

struct Dictionary2_Bucket__int__Fuse_Input_Pointer_PointerRecord
{
    int Key;
    ::uStrong< ::app::Fuse::Input::Pointer_PointerRecord*> Value;
    int State;

    Dictionary2_Bucket__int__Fuse_Input_Pointer_PointerRecord& operator =(const Dictionary2_Bucket__int__Fuse_Input_Pointer_PointerRecord& copy)
    {
        ::uCopyValue(this, Dictionary2_Bucket__int__Fuse_Input_Pointer_PointerRecord__typeof(), &copy);
        return *this;
    }
};

}}}


#endif
