// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Graphics.SamplerState.h>
#include <app/Uno.Int.h>

namespace app {
namespace Uno {
namespace Graphics {

SamplerState__uType* SamplerState__typeof()
{
    static SamplerState__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (SamplerState__uType*)::uAllocValueType(sizeof(SamplerState__uType), "Uno.Graphics.SamplerState", sizeof(SamplerState));
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

int SamplerState__get_MinFilterNoMipmap(SamplerState* __this)
{
    switch (__this->MinFilter)
    {
        case 9984:
        case 9985:
        {
            return 9728;
        }
        case 9986:
        case 9987:
        {
            return 9729;
        }
        default:
        {
            return __this->MinFilter;
        }
    }
}

SamplerState SamplerState__get_LinearClamp(::uStatic* __this)
{
    return SamplerState__New_1(NULL, 9729, 9729, 33071);
}

SamplerState SamplerState__get_TrilinearClamp(::uStatic* __this)
{
    return SamplerState__New_1(NULL, 9987, 9729, 33071);
}

void SamplerState___ObjInit(SamplerState* __this, int minFilter, int magFilter, int addressMode)
{
    __this->MinFilter = minFilter;
    __this->MagFilter = magFilter;
    __this->AddressU = addressMode;
    __this->AddressV = addressMode;
    __this->AddressW = addressMode;
}

SamplerState SamplerState__New_1(::uStatic* __this, int minFilter, int magFilter, int addressMode)
{
    SamplerState inst = ::uDefault< SamplerState>();
    inst._ObjInit(minFilter, magFilter, addressMode);
    return inst;
}

}}}
