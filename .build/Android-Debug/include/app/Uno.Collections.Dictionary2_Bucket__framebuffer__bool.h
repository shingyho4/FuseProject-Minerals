// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_BUCKET__FRAMEBUFFER__BOOL_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_BUCKET__FRAMEBUFFER__BOOL_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Uno { namespace Graphics { struct Framebuffer; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_Bucket__framebuffer__bool;

struct Dictionary2_Bucket__framebuffer__bool__uType : ::uValueType
{
};

Dictionary2_Bucket__framebuffer__bool__uType* Dictionary2_Bucket__framebuffer__bool__typeof();

struct Dictionary2_Bucket__framebuffer__bool
{
    ::uStrong< ::app::Uno::Graphics::Framebuffer*> Key;
    bool Value;
    int State;

    Dictionary2_Bucket__framebuffer__bool& operator =(const Dictionary2_Bucket__framebuffer__bool& copy)
    {
        ::uCopyValue(this, Dictionary2_Bucket__framebuffer__bool__typeof(), &copy);
        return *this;
    }
};

}}}


#endif
