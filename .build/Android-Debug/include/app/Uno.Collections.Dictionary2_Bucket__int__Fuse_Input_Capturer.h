// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_BUCKET__INT__FUSE_INPUT_CAPTURER_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_BUCKET__INT__FUSE_INPUT_CAPTURER_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Input { struct Capturer; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_Bucket__int__Fuse_Input_Capturer;

struct Dictionary2_Bucket__int__Fuse_Input_Capturer__uType : ::uValueType
{
};

Dictionary2_Bucket__int__Fuse_Input_Capturer__uType* Dictionary2_Bucket__int__Fuse_Input_Capturer__typeof();

struct Dictionary2_Bucket__int__Fuse_Input_Capturer
{
    int Key;
    ::uStrong< ::app::Fuse::Input::Capturer*> Value;
    int State;

    Dictionary2_Bucket__int__Fuse_Input_Capturer& operator =(const Dictionary2_Bucket__int__Fuse_Input_Capturer& copy)
    {
        ::uCopyValue(this, Dictionary2_Bucket__int__Fuse_Input_Capturer__typeof(), &copy);
        return *this;
    }
};

}}}


#endif
