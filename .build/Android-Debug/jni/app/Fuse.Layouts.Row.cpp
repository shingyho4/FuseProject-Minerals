// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.1.0\Layouts\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Layouts.Row.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Int.h>
#include <app/Uno.Math.h>

namespace app {
namespace Fuse {
namespace Layouts {

Row__uType* Row__typeof()
{
    static Row__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Row__uType*)::uAllocClassType(sizeof(Row__uType), "Fuse.Layouts.Row", ::app::Fuse::Layouts::DefinitionBase__typeof());
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

int Row__get_HeightMetric(Row* __this)
{
    return __this->_heightMetric;
}

void Row__set_HeightMetric(Row* __this, int value)
{
    if (__this->_heightMetric != value)
    {
        __this->_heightMetric = value;
        __this->OnChanged();
    }
}

float Row__get_Height(Row* __this)
{
    return __this->_height;
}

void Row__set_Height(Row* __this, float value)
{
    if (__this->_height != value)
    {
        __this->_height = ::app::Uno::Math__Max_1(NULL, 0.0f, value);
        __this->OnChanged();
    }
}

float Row__get_ActualHeight(Row* __this)
{
    if (__this->HeightMetric() == 0)
    {
        return __this->_height;
    }
    else
    {
        return __this->_actualHeight;
    }
}

void Row__set_ActualHeight(Row* __this, float value)
{
    __this->_actualHeight = value;
}

Row* Row__CloneDef(Row* __this)
{
    Row* collection_124;
    collection_124 = Row__New_1(NULL);
    ::uPtr< ::app::Fuse::Layouts::Row*>(collection_124)->HeightMetric(__this->HeightMetric());
    collection_124->Height(__this->Height());
    return collection_124;
}

void Row___ObjInit_1(Row* __this)
{
    __this->_heightMetric = 1;
    __this->_height = 1.0f;
    ::app::Fuse::Layouts::DefinitionBase___ObjInit(__this);
}

Row* Row__New_1(::uStatic* __this)
{
    Row* inst = (::app::Fuse::Layouts::Row*)::uAllocObject(sizeof(::app::Fuse::Layouts::Row), ::app::Fuse::Layouts::Row__typeof());
    inst->_ObjInit_1();
    return inst;
}

}}}
