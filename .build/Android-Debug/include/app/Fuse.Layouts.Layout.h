// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.1.0\Layouts\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_LAYOUTS_LAYOUT_H__
#define __APP_FUSE_LAYOUTS_LAYOUT_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Elements { struct Element; } } }
namespace app { namespace Uno { struct Float2; } }
namespace app { namespace Uno { struct Float4; } }

namespace app {
namespace Fuse {
namespace Layouts {

struct Layout;

struct Layout__uType : ::uClassType
{
    void(*__fp_AddSubscriber)(Layout*, ::app::Fuse::Elements::Element*);
    void(*__fp_RemoveSubscriber)(Layout*, ::app::Fuse::Elements::Element*);
    ::app::Uno::Float2(*__fp_GetContentSize)(Layout*, ::uObject*, ::app::Uno::Float2, int);
    void(*__fp_ArrangePaddingBox)(Layout*, ::uObject*, ::app::Uno::Float4, ::app::Uno::Float2);
};

Layout__uType* Layout__typeof();

void Layout__AddSubscriber(Layout* __this, ::app::Fuse::Elements::Element* element);
void Layout__RemoveSubscriber(Layout* __this, ::app::Fuse::Elements::Element* element);
void Layout___ObjInit(Layout* __this);

struct Layout : ::uObject
{
    void AddSubscriber(::app::Fuse::Elements::Element* element) { (((Layout__uType*)this->__obj_type)->__fp_AddSubscriber)(this, element); }
    void RemoveSubscriber(::app::Fuse::Elements::Element* element) { (((Layout__uType*)this->__obj_type)->__fp_RemoveSubscriber)(this, element); }
    ::app::Uno::Float2 GetContentSize(::uObject* elements, ::app::Uno::Float2 fillSize, int fillSet);
    void ArrangePaddingBox(::uObject* elements, ::app::Uno::Float4 padding, ::app::Uno::Float2 availableSize);
    void _ObjInit() { Layout___ObjInit(this); }
};

}}}

#include <app/Uno.Float2.h>
#include <app/Uno.Float4.h>

namespace app {
namespace Fuse {
namespace Layouts {

inline ::app::Uno::Float2 Layout::GetContentSize(::uObject* elements, ::app::Uno::Float2 fillSize, int fillSet) { return (((Layout__uType*)this->__obj_type)->__fp_GetContentSize)(this, elements, fillSize, fillSet); }
inline void Layout::ArrangePaddingBox(::uObject* elements, ::app::Uno::Float4 padding, ::app::Uno::Float2 availableSize) { (((Layout__uType*)this->__obj_type)->__fp_ArrangePaddingBox)(this, elements, padding, availableSize); }

}}}


#endif
