// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Drawing.BlendModeHelpers.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Int.h>
#include <app/Uno.String.h>

namespace app {
namespace Fuse {
namespace Drawing {

::uStaticStrong< ::uString*> BlendModeHelpers___invalidBlendMode;

BlendModeHelpers__uType* BlendModeHelpers__typeof()
{
    static BlendModeHelpers__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (BlendModeHelpers__uType*)::uAllocClassType(sizeof(BlendModeHelpers__uType), "Fuse.Drawing.BlendModeHelpers");
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

int BlendModeHelpers__GetSrcRgb(::uStatic* __this, int mode)
{
    switch (mode)
    {
        case 0:
        {
            return 1;
        }
        case 1:
        {
            return 1;
        }
        case 2:
        {
            return 1;
        }
        case 3:
        {
            return 8;
        }
        default:
        {
            U_THROW(::app::Uno::Exception__New_1(NULL, BlendModeHelpers___invalidBlendMode));
        }
    }
}

int BlendModeHelpers__GetDstRgb(::uStatic* __this, int mode)
{
    switch (mode)
    {
        case 0:
        {
            return 3;
        }
        case 1:
        {
            return 1;
        }
        case 2:
        {
            return 5;
        }
        case 3:
        {
            return 3;
        }
        default:
        {
            U_THROW(::app::Uno::Exception__New_1(NULL, BlendModeHelpers___invalidBlendMode));
        }
    }
}

int BlendModeHelpers__GetSrcAlpha(::uStatic* __this, int mode)
{
    switch (mode)
    {
        case 0:
        {
            return 1;
        }
        case 1:
        {
            return 1;
        }
        case 2:
        {
            return 1;
        }
        case 3:
        {
            return 1;
        }
        default:
        {
            U_THROW(::app::Uno::Exception__New_1(NULL, BlendModeHelpers___invalidBlendMode));
        }
    }
}

int BlendModeHelpers__GetDstAlpha(::uStatic* __this, int mode)
{
    switch (mode)
    {
        case 0:
        {
            return 3;
        }
        case 1:
        {
            return 3;
        }
        case 2:
        {
            return 3;
        }
        case 3:
        {
            return 3;
        }
        default:
        {
            U_THROW(::app::Uno::Exception__New_1(NULL, BlendModeHelpers___invalidBlendMode));
        }
    }
}

void BlendModeHelpers___TypeInit(::uStatic* __this)
{
    BlendModeHelpers___invalidBlendMode = ::uGetConstString("Invalid blend mode");
}

}}}
