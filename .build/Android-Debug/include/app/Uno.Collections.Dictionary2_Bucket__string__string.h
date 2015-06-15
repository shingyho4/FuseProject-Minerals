// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_BUCKET__STRING__STRING_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_BUCKET__STRING__STRING_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_Bucket__string__string;

struct Dictionary2_Bucket__string__string__uType : ::uValueType
{
};

Dictionary2_Bucket__string__string__uType* Dictionary2_Bucket__string__string__typeof();

struct Dictionary2_Bucket__string__string
{
    ::uStrong< ::uString*> Key;
    ::uStrong< ::uString*> Value;
    int State;

    Dictionary2_Bucket__string__string& operator =(const Dictionary2_Bucket__string__string& copy)
    {
        ::uCopyValue(this, Dictionary2_Bucket__string__string__typeof(), &copy);
        return *this;
    }
};

}}}


#endif
