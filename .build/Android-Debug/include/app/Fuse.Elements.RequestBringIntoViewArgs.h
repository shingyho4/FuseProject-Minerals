// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ELEMENTS_REQUEST_BRING_INTO_VIEW_ARGS_H__
#define __APP_FUSE_ELEMENTS_REQUEST_BRING_INTO_VIEW_ARGS_H__

#include <app/Uno.EventArgs.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Elements { struct Element; } } }

namespace app {
namespace Fuse {
namespace Elements {

struct RequestBringIntoViewArgs;

struct RequestBringIntoViewArgs__uType : ::app::Uno::EventArgs__uType
{
};

RequestBringIntoViewArgs__uType* RequestBringIntoViewArgs__typeof();

::app::Fuse::Elements::Element* RequestBringIntoViewArgs__get_Element(RequestBringIntoViewArgs* __this);
void RequestBringIntoViewArgs__set_Element(RequestBringIntoViewArgs* __this, ::app::Fuse::Elements::Element* value);
void RequestBringIntoViewArgs___ObjInit_1(RequestBringIntoViewArgs* __this, ::app::Fuse::Elements::Element* elm);
RequestBringIntoViewArgs* RequestBringIntoViewArgs__New_2(::uStatic* __this, ::app::Fuse::Elements::Element* elm);

struct RequestBringIntoViewArgs : ::app::Uno::EventArgs
{
    ::uStrong< ::app::Fuse::Elements::Element*> _Element;

    void _ObjInit_1(::app::Fuse::Elements::Element* elm) { RequestBringIntoViewArgs___ObjInit_1(this, elm); }
    ::app::Fuse::Elements::Element* Element() { return RequestBringIntoViewArgs__get_Element(this); }
    void Element(::app::Fuse::Elements::Element* value) { RequestBringIntoViewArgs__set_Element(this, value); }
};

}}}


#endif
