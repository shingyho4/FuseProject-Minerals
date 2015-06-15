// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_BUCKET__STRING__UNO_CONTENT_MODELS__2EA2D722_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_BUCKET__STRING__UNO_CONTENT_MODELS__2EA2D722_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Uno { namespace Content { namespace Models { struct VertexAttributeArray; } } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_Bucket__string__Uno_Content_Models_VertexAttributeArray;

struct Dictionary2_Bucket__string__Uno_Content_Models_VertexAttributeArray__uType : ::uValueType
{
};

Dictionary2_Bucket__string__Uno_Content_Models_VertexAttributeArray__uType* Dictionary2_Bucket__string__Uno_Content_Models_VertexAttributeArray__typeof();

struct Dictionary2_Bucket__string__Uno_Content_Models_VertexAttributeArray
{
    ::uStrong< ::uString*> Key;
    ::uStrong< ::app::Uno::Content::Models::VertexAttributeArray*> Value;
    int State;

    Dictionary2_Bucket__string__Uno_Content_Models_VertexAttributeArray& operator =(const Dictionary2_Bucket__string__Uno_Content_Models_VertexAttributeArray& copy)
    {
        ::uCopyValue(this, Dictionary2_Bucket__string__Uno_Content_Models_VertexAttributeArray__typeof(), &copy);
        return *this;
    }
};

}}}


#endif
