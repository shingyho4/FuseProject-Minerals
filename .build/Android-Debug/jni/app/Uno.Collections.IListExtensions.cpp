// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.1.0\Extensions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Layouts.Column.h>
#include <app/Fuse.Layouts.Row.h>
#include <app/Fuse.RenderTargetEntry.h>
#include <app/Uno.Collections.ICollection__Fuse_Layouts_Column.h>
#include <app/Uno.Collections.ICollection__Fuse_Layouts_Row.h>
#include <app/Uno.Collections.ICollection__Fuse_RenderTargetEntry.h>
#include <app/Uno.Collections.IList__Fuse_Layouts_Column.h>
#include <app/Uno.Collections.IList__Fuse_Layouts_Row.h>
#include <app/Uno.Collections.IList__Fuse_RenderTargetEntry.h>
#include <app/Uno.Collections.IListExtensions.h>
#include <app/Uno.Int.h>

namespace app {
namespace Uno {
namespace Collections {

IListExtensions__uType* IListExtensions__typeof()
{
    static IListExtensions__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (IListExtensions__uType*)::uAllocClassType(sizeof(IListExtensions__uType), "Uno.Collections.IListExtensions");
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Fuse::RenderTargetEntry* IListExtensions__RemoveLast__Fuse_RenderTargetEntry(::uStatic* __this, ::uObject* self)
{
    int i = ::app::Uno::Collections::ICollection__Fuse_RenderTargetEntry::Count(::uPtr< ::uObject*>(self)) - 1;
    ::app::Fuse::RenderTargetEntry* t = ::app::Uno::Collections::IList__Fuse_RenderTargetEntry::Item(self, i);
    ::app::Uno::Collections::IList__Fuse_RenderTargetEntry::RemoveAt(self, i);
    return t;
}

::app::Fuse::Layouts::Row* IListExtensions__RemoveLast__Fuse_Layouts_Row(::uStatic* __this, ::uObject* self)
{
    int i = ::app::Uno::Collections::ICollection__Fuse_Layouts_Row::Count(::uPtr< ::uObject*>(self)) - 1;
    ::app::Fuse::Layouts::Row* t = ::app::Uno::Collections::IList__Fuse_Layouts_Row::Item(self, i);
    ::app::Uno::Collections::IList__Fuse_Layouts_Row::RemoveAt(self, i);
    return t;
}

::app::Fuse::Layouts::Column* IListExtensions__RemoveLast__Fuse_Layouts_Column(::uStatic* __this, ::uObject* self)
{
    int i = ::app::Uno::Collections::ICollection__Fuse_Layouts_Column::Count(::uPtr< ::uObject*>(self)) - 1;
    ::app::Fuse::Layouts::Column* t = ::app::Uno::Collections::IList__Fuse_Layouts_Column::Item(self, i);
    ::app::Uno::Collections::IList__Fuse_Layouts_Column::RemoveAt(self, i);
    return t;
}

}}}
