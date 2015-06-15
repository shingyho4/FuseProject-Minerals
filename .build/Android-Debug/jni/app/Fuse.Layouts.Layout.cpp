// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.1.0\Layouts\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Elements.Element.h>
#include <app/Fuse.Layouts.Layout.h>
#include <app/Uno.Collections.IList__Fuse_Elements_Element.h>
#include <app/Uno.Int.h>

namespace app {
namespace Fuse {
namespace Layouts {

Layout__uType* Layout__typeof()
{
    static Layout__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Layout__uType*)::uAllocClassType(sizeof(Layout__uType), "Fuse.Layouts.Layout", ::uObject__typeof());
        type->__fp_AddSubscriber = Layout__AddSubscriber;
        type->__fp_RemoveSubscriber = Layout__RemoveSubscriber;
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void Layout__AddSubscriber(Layout* __this, ::app::Fuse::Elements::Element* element)
{
}

void Layout__RemoveSubscriber(Layout* __this, ::app::Fuse::Elements::Element* element)
{
}

void Layout___ObjInit(Layout* __this)
{
}

}}}
