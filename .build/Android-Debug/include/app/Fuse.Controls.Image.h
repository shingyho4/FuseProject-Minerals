// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CONTROLS_IMAGE_H__
#define __APP_FUSE_CONTROLS_IMAGE_H__

#include <app/Fuse.Controls.Internal.ICollectionParent.h>
#include <app/Fuse.Controls.Panel.h>
#include <app/Fuse.IActualSize.h>
#include <app/Fuse.INodeParent.h>
#include <app/Fuse.IResourceParent.h>
#include <app/Fuse.Navigation.INavigationPanel.h>
#include <app/Fuse.Triggers.Actions.ICollapse.h>
#include <app/Fuse.Triggers.Actions.IHide.h>
#include <app/Fuse.Triggers.Actions.IShow.h>
#include <app/Fuse.Triggers.IAddRemoveChild.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Elements { struct ImageElement; } } }
namespace app { namespace Uno { struct BundleFile; } }

namespace app {
namespace Fuse {
namespace Controls {

struct Image;

struct Image__uType : ::app::Fuse::Controls::Panel__uType
{
};

Image__uType* Image__typeof();

::app::Uno::BundleFile* Image__get_File(Image* __this);
void Image__set_File(Image* __this, ::app::Uno::BundleFile* value);
void Image___ObjInit_4(Image* __this);
Image* Image__New_2(::uStatic* __this);

struct Image : ::app::Fuse::Controls::Panel
{
    ::uStrong< ::app::Fuse::Elements::ImageElement*> _img;

    void _ObjInit_4() { Image___ObjInit_4(this); }
    ::app::Uno::BundleFile* File() { return Image__get_File(this); }
    void File(::app::Uno::BundleFile* value) { Image__set_File(this, value); }
};

}}}


#endif
