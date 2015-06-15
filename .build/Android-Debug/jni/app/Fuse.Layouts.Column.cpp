// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.1.0\Layouts\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Layouts.Column.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Int.h>
#include <app/Uno.Math.h>

namespace app {
namespace Fuse {
namespace Layouts {

Column__uType* Column__typeof()
{
    static Column__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Column__uType*)::uAllocClassType(sizeof(Column__uType), "Fuse.Layouts.Column", ::app::Fuse::Layouts::DefinitionBase__typeof());
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

int Column__get_WidthMetric(Column* __this)
{
    return __this->_widthMetric;
}

void Column__set_WidthMetric(Column* __this, int value)
{
    if (__this->_widthMetric != value)
    {
        __this->_widthMetric = value;
        __this->OnChanged();
    }
}

float Column__get_Width(Column* __this)
{
    return __this->_width;
}

void Column__set_Width(Column* __this, float value)
{
    if (__this->_width != value)
    {
        __this->_width = ::app::Uno::Math__Max_1(NULL, 0.0f, value);
        __this->OnChanged();
    }
}

float Column__get_ActualWidth(Column* __this)
{
    if (__this->WidthMetric() == 0)
    {
        return __this->_width;
    }
    else
    {
        return __this->_actualWidth;
    }
}

void Column__set_ActualWidth(Column* __this, float value)
{
    __this->_actualWidth = value;
}

Column* Column__CloneDef(Column* __this)
{
    Column* collection_124;
    collection_124 = Column__New_1(NULL);
    ::uPtr< ::app::Fuse::Layouts::Column*>(collection_124)->WidthMetric(__this->WidthMetric());
    collection_124->Width(__this->Width());
    return collection_124;
}

void Column___ObjInit_1(Column* __this)
{
    __this->_widthMetric = 1;
    __this->_width = 1.0f;
    ::app::Fuse::Layouts::DefinitionBase___ObjInit(__this);
}

Column* Column__New_1(::uStatic* __this)
{
    Column* inst = (::app::Fuse::Layouts::Column*)::uAllocObject(sizeof(::app::Fuse::Layouts::Column), ::app::Fuse::Layouts::Column__typeof());
    inst->_ObjInit_1();
    return inst;
}

}}}
