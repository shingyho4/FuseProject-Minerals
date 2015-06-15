// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_BUCKET__STRING__UNO_COLLECTIONS_LIS_35E22A25_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_BUCKET__STRING__UNO_COLLECTIONS_LIS_35E22A25_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Uno { namespace Collections { struct List__Uno_Action; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_Bucket__string__Uno_Collections_List_Uno_Action_;

struct Dictionary2_Bucket__string__Uno_Collections_List_Uno_Action___uType : ::uValueType
{
};

Dictionary2_Bucket__string__Uno_Collections_List_Uno_Action___uType* Dictionary2_Bucket__string__Uno_Collections_List_Uno_Action___typeof();

struct Dictionary2_Bucket__string__Uno_Collections_List_Uno_Action_
{
    ::uStrong< ::uString*> Key;
    ::uStrong< ::app::Uno::Collections::List__Uno_Action*> Value;
    int State;

    Dictionary2_Bucket__string__Uno_Collections_List_Uno_Action_& operator =(const Dictionary2_Bucket__string__Uno_Collections_List_Uno_Action_& copy)
    {
        ::uCopyValue(this, Dictionary2_Bucket__string__Uno_Collections_List_Uno_Action___typeof(), &copy);
        return *this;
    }
};

}}}


#endif
