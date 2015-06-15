// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Paths\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Drawing.PathGeometry.h>
#include <app/Fuse.Drawing.PathGeometryParser.h>
#include <app/Fuse.Drawing.Token.h>
#include <app/Uno.Float2.h>
#include <app/Uno.String.h>

namespace app {
namespace Fuse {
namespace Drawing {

PathGeometryParser__uType* PathGeometryParser__typeof()
{
    static PathGeometryParser__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (PathGeometryParser__uType*)::uAllocClassType(sizeof(PathGeometryParser__uType), "Fuse.Drawing.PathGeometryParser", ::uObject__typeof(), 0, 5);
        type->StrongRefOffsets[0] = offsetof(PathGeometryParser, _data);
        type->StrongRefOffsets[1] = offsetof(PathGeometryParser, _headToken);
        type->StrongRefOffsets[2] = offsetof(PathGeometryParser, _prevToken);
        type->StrongRefOffsets[3] = offsetof(PathGeometryParser, _token);
        type->StrongRefOffsets[4] = offsetof(PathGeometryParser, _head);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_data";
        type->StrongRefNames[1] = "_headToken";
        type->StrongRefNames[2] = "_prevToken";
        type->StrongRefNames[3] = "_token";
        type->StrongRefNames[4] = "_head";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Fuse::Drawing::PathGeometry* PathGeometryParser__Deserialize(::uStatic* __this, ::uString* data)
{
    if (::app::Uno::String__op_Equality(NULL, data, NULL) || (::uPtr< ::uString*>(data)->Length() == 0))
    {
        return ::app::Fuse::Drawing::PathGeometry__New_1(NULL);
    }

    return ::uPtr< ::app::Fuse::Drawing::PathGeometryParser*>(PathGeometryParser__New_1(NULL, data))->_head;
}

void PathGeometryParser__Execute(PathGeometryParser* __this, ::uChar c)
{
    switch (c)
    {
        case 'M':
        {
            __this->MoveTo(0.0f, 0.0f);
            break;
        }
        case 'C':
        {
            __this->CurveTo(0.0f, 0.0f);
            break;
        }
        case 'S':
        {
            __this->SmoothCurveTo(0.0f, 0.0f);
            break;
        }
        case 'Z':
        {
            __this->ClosePath();
            break;
        }
        case 'L':
        {
            __this->LineTo(0.0f, 0.0f);
            break;
        }
        case 'H':
        {
            __this->HLineTo(0.0f, 0.0f);
            break;
        }
        case 'V':
        {
            __this->VLineTo(0.0f, 0.0f);
            break;
        }
        case 'm':
        {
            __this->MoveTo(__this->_x, __this->_y);
            break;
        }
        case 'c':
        {
            __this->CurveTo(__this->_x, __this->_y);
            break;
        }
        case 's':
        {
            __this->SmoothCurveTo(__this->_x, __this->_y);
            break;
        }
        case 'z':
        {
            __this->ClosePath();
            break;
        }
        case 'l':
        {
            __this->LineTo(__this->_x, __this->_y);
            break;
        }
        case 'h':
        {
            __this->HLineTo(__this->_x, __this->_y);
            break;
        }
        case 'v':
        {
            __this->VLineTo(__this->_x, __this->_y);
            break;
        }
    }
}

void PathGeometryParser__StartNewToken(PathGeometryParser* __this, int prevLastChar, int nextFirstChar, bool hasAction)
{
    ::uPtr< ::app::Fuse::Drawing::Token*>(__this->_prevToken)->Last = prevLastChar;
    __this->_prevToken = ::uPtr< ::app::Fuse::Drawing::Token*>(__this->_prevToken)->Next = ::app::Fuse::Drawing::Token__New_1(NULL, nextFirstChar, hasAction);
}

void PathGeometryParser__CurveTo(PathGeometryParser* __this, float offsetX, float offsetY)
{
    float x1 = offsetX + __this->ReadFloat();
    float y1 = offsetY + __this->ReadFloat();
    float x2 = offsetX + __this->ReadFloat();
    float y2 = offsetY + __this->ReadFloat();
    float x = __this->_x = offsetX + __this->ReadFloat();
    float y = __this->_y = offsetY + __this->ReadFloat();
    __this->_head = ::uPtr< ::app::Fuse::Drawing::PathGeometry*>(__this->_head)->CurveTo(::app::Uno::Float2__New_2(NULL, x1, y1), ::app::Uno::Float2__New_2(NULL, x2, y2), ::app::Uno::Float2__New_2(NULL, x, y));
}

void PathGeometryParser__SmoothCurveTo(PathGeometryParser* __this, float offsetX, float offsetY)
{
    float x2 = offsetX + __this->ReadFloat();
    float y2 = offsetY + __this->ReadFloat();
    float x = __this->_x = offsetX + __this->ReadFloat();
    float y = __this->_y = offsetY + __this->ReadFloat();
    __this->_head = ::uPtr< ::app::Fuse::Drawing::PathGeometry*>(__this->_head)->SmoothCurveTo(::app::Uno::Float2__New_2(NULL, x2, y2), ::app::Uno::Float2__New_2(NULL, x, y));
}

void PathGeometryParser__MoveTo(PathGeometryParser* __this, float offsetX, float offsetY)
{
    float x = __this->_x = offsetX + __this->ReadFloat();
    float y = __this->_y = offsetY + __this->ReadFloat();
    __this->_head = ::uPtr< ::app::Fuse::Drawing::PathGeometry*>(__this->_head)->MoveTo(x, y);
}

void PathGeometryParser__LineTo(PathGeometryParser* __this, float offsetX, float offsetY)
{
    float x = __this->_x = offsetX + __this->ReadFloat();
    float y = __this->_y = offsetY + __this->ReadFloat();
    __this->_head = ::uPtr< ::app::Fuse::Drawing::PathGeometry*>(__this->_head)->LineTo(x, y);
}

void PathGeometryParser__HLineTo(PathGeometryParser* __this, float offsetX, float offsetY)
{
    float x = __this->_x = offsetX + __this->ReadFloat();
    __this->_head = ::uPtr< ::app::Fuse::Drawing::PathGeometry*>(__this->_head)->HorizontalLineTo(x);
}

void PathGeometryParser__VLineTo(PathGeometryParser* __this, float offsetX, float offsetY)
{
    float y = __this->_y = offsetY + __this->ReadFloat();
    __this->_head = ::uPtr< ::app::Fuse::Drawing::PathGeometry*>(__this->_head)->VerticalLineTo(y);
}

void PathGeometryParser__ClosePath(PathGeometryParser* __this)
{
    __this->_head = ::uPtr< ::app::Fuse::Drawing::PathGeometry*>(__this->_head)->ClosePath();
}

float PathGeometryParser__ReadFloat(PathGeometryParser* __this)
{
    ::uString* str = ::app::Uno::String::Substring(::uPtr< ::uString*>(__this->_data), ::uPtr< ::app::Fuse::Drawing::Token*>(__this->_token)->First, (::uPtr< ::app::Fuse::Drawing::Token*>(__this->_token)->Last - ::uPtr< ::app::Fuse::Drawing::Token*>(__this->_token)->First) + 1);
    float res = ::app::Uno::Float__Parse(NULL, str);
    __this->_token = ::uPtr< ::app::Fuse::Drawing::Token*>(__this->_token)->Next;
    return res;
}

void PathGeometryParser___ObjInit(PathGeometryParser* __this, ::uString* data)
{
    __this->_data = data;
    __this->_headToken = ::app::Fuse::Drawing::Token__New_1(NULL, -1, false);
    __this->_prevToken = ::uPtr< ::app::Fuse::Drawing::Token*>(__this->_headToken)->Next = ::app::Fuse::Drawing::Token__New_1(NULL, 0, false);
    bool wasExponent = false;

    for (int i = 0; i < ::uPtr< ::uString*>(data)->Length(); i++)
    {
        ::uChar c = ::uPtr< ::uString*>(data)->Item(i);

        switch (c)
        {
            case 0:
            case ' ':
            case ',':
            {
                __this->StartNewToken(i - 1, i + 1, false);
                break;
            }
            case '-':
            {
                if (!wasExponent)
                {
                    __this->StartNewToken(i - 1, i, false);
                }

                break;
            }
            case 'M':
            case 'C':
            case 'S':
            case 'Z':
            case 'L':
            case 'H':
            case 'V':
            case 'm':
            case 'c':
            case 's':
            case 'z':
            case 'l':
            case 'h':
            case 'v':
            {
                __this->StartNewToken(i - 1, i, true);
                __this->StartNewToken(i, i + 1, false);
                break;
            }
        }

        wasExponent = (c == 'e') || (c == 'E');
    }

    ::uPtr< ::app::Fuse::Drawing::Token*>(__this->_prevToken)->Last = ::uPtr< ::uString*>(data)->Length() - 1;

    for (::app::Fuse::Drawing::Token* token = ::uPtr< ::app::Fuse::Drawing::Token*>(__this->_headToken)->Next; token != NULL; )
    {
        ::app::Fuse::Drawing::Token* next = ::uPtr< ::app::Fuse::Drawing::Token*>(token)->Next;

        while ((next != NULL) && ((::uPtr< ::app::Fuse::Drawing::Token*>(next)->Last - ::uPtr< ::app::Fuse::Drawing::Token*>(next)->First) < 0))
        {
            next = ::uPtr< ::app::Fuse::Drawing::Token*>(next)->Next;
        }

        token = ::uPtr< ::app::Fuse::Drawing::Token*>(token)->Next = next;
    }

    __this->_head = ::app::Fuse::Drawing::PathGeometry__New_1(NULL);
    __this->_token = ::uPtr< ::app::Fuse::Drawing::Token*>(__this->_headToken)->Next;

    while (__this->_token != NULL)
    {
        if (!::uPtr< ::app::Fuse::Drawing::Token*>(__this->_token)->HasAction)
        {
            __this->_token = ::uPtr< ::app::Fuse::Drawing::Token*>(__this->_token)->Next;
            continue;
        }

        ::uChar currentCommand = ::uPtr< ::uString*>(__this->_data)->Item(::uPtr< ::app::Fuse::Drawing::Token*>(__this->_token)->First);
        __this->_token = ::uPtr< ::app::Fuse::Drawing::Token*>(__this->_token)->Next;

        do
        {
            __this->Execute(currentCommand);
        }
        while ((__this->_token != NULL) && !::uPtr< ::app::Fuse::Drawing::Token*>(__this->_token)->HasAction);
    }
}

PathGeometryParser* PathGeometryParser__New_1(::uStatic* __this, ::uString* data)
{
    PathGeometryParser* inst = (::app::Fuse::Drawing::PathGeometryParser*)::uAllocObject(sizeof(::app::Fuse::Drawing::PathGeometryParser), ::app::Fuse::Drawing::PathGeometryParser__typeof());
    inst->_ObjInit(data);
    return inst;
}

}}}
