// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Animations.EasingFunction.h>
#include <app/Fuse.Animations.EasingFunctions.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Float.h>
#include <app/Uno.Int.h>
#include <app/Uno.Math.h>

namespace app {
namespace Fuse {
namespace Animations {

EasingFunctions__uType* EasingFunctions__typeof()
{
    static EasingFunctions__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (EasingFunctions__uType*)::uAllocClassType(sizeof(EasingFunctions__uType), "Fuse.Animations.EasingFunctions");
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::uDelegate* EasingFunctions__FromEasing(::uStatic* __this, int e)
{
    switch (e)
    {
        case 0:
        {
            return ::uNewDelegateNonVirt(::app::Fuse::Animations::EasingFunction__typeof(), (const void*)::app::Fuse::Animations::EasingFunctions__Linear);
        }
        case 1:
        {
            return ::uNewDelegateNonVirt(::app::Fuse::Animations::EasingFunction__typeof(), (const void*)::app::Fuse::Animations::EasingFunctions__QuadraticIn);
        }
        case 2:
        {
            return ::uNewDelegateNonVirt(::app::Fuse::Animations::EasingFunction__typeof(), (const void*)::app::Fuse::Animations::EasingFunctions__QuadraticOut);
        }
        case 3:
        {
            return ::uNewDelegateNonVirt(::app::Fuse::Animations::EasingFunction__typeof(), (const void*)::app::Fuse::Animations::EasingFunctions__QuadraticInOut);
        }
        case 4:
        {
            return ::uNewDelegateNonVirt(::app::Fuse::Animations::EasingFunction__typeof(), (const void*)::app::Fuse::Animations::EasingFunctions__CubicIn);
        }
        case 5:
        {
            return ::uNewDelegateNonVirt(::app::Fuse::Animations::EasingFunction__typeof(), (const void*)::app::Fuse::Animations::EasingFunctions__CubicOut);
        }
        case 6:
        {
            return ::uNewDelegateNonVirt(::app::Fuse::Animations::EasingFunction__typeof(), (const void*)::app::Fuse::Animations::EasingFunctions__CubicInOut);
        }
        case 7:
        {
            return ::uNewDelegateNonVirt(::app::Fuse::Animations::EasingFunction__typeof(), (const void*)::app::Fuse::Animations::EasingFunctions__QuarticIn);
        }
        case 8:
        {
            return ::uNewDelegateNonVirt(::app::Fuse::Animations::EasingFunction__typeof(), (const void*)::app::Fuse::Animations::EasingFunctions__QuarticOut);
        }
        case 9:
        {
            return ::uNewDelegateNonVirt(::app::Fuse::Animations::EasingFunction__typeof(), (const void*)::app::Fuse::Animations::EasingFunctions__QuarticInOut);
        }
        case 10:
        {
            return ::uNewDelegateNonVirt(::app::Fuse::Animations::EasingFunction__typeof(), (const void*)::app::Fuse::Animations::EasingFunctions__QuinticIn);
        }
        case 11:
        {
            return ::uNewDelegateNonVirt(::app::Fuse::Animations::EasingFunction__typeof(), (const void*)::app::Fuse::Animations::EasingFunctions__QuinticOut);
        }
        case 12:
        {
            return ::uNewDelegateNonVirt(::app::Fuse::Animations::EasingFunction__typeof(), (const void*)::app::Fuse::Animations::EasingFunctions__QuinticInOut);
        }
        case 13:
        {
            return ::uNewDelegateNonVirt(::app::Fuse::Animations::EasingFunction__typeof(), (const void*)::app::Fuse::Animations::EasingFunctions__SinusoidalIn);
        }
        case 14:
        {
            return ::uNewDelegateNonVirt(::app::Fuse::Animations::EasingFunction__typeof(), (const void*)::app::Fuse::Animations::EasingFunctions__SinusoidalOut);
        }
        case 15:
        {
            return ::uNewDelegateNonVirt(::app::Fuse::Animations::EasingFunction__typeof(), (const void*)::app::Fuse::Animations::EasingFunctions__SinusoidalInOut);
        }
        case 16:
        {
            return ::uNewDelegateNonVirt(::app::Fuse::Animations::EasingFunction__typeof(), (const void*)::app::Fuse::Animations::EasingFunctions__ExponentialIn);
        }
        case 17:
        {
            return ::uNewDelegateNonVirt(::app::Fuse::Animations::EasingFunction__typeof(), (const void*)::app::Fuse::Animations::EasingFunctions__ExponentialOut);
        }
        case 18:
        {
            return ::uNewDelegateNonVirt(::app::Fuse::Animations::EasingFunction__typeof(), (const void*)::app::Fuse::Animations::EasingFunctions__ExponentialInOut);
        }
        case 19:
        {
            return ::uNewDelegateNonVirt(::app::Fuse::Animations::EasingFunction__typeof(), (const void*)::app::Fuse::Animations::EasingFunctions__CircularIn);
        }
        case 20:
        {
            return ::uNewDelegateNonVirt(::app::Fuse::Animations::EasingFunction__typeof(), (const void*)::app::Fuse::Animations::EasingFunctions__CircularOut);
        }
        case 21:
        {
            return ::uNewDelegateNonVirt(::app::Fuse::Animations::EasingFunction__typeof(), (const void*)::app::Fuse::Animations::EasingFunctions__CircularInOut);
        }
        case 22:
        {
            return ::uNewDelegateNonVirt(::app::Fuse::Animations::EasingFunction__typeof(), (const void*)::app::Fuse::Animations::EasingFunctions__ElasticIn);
        }
        case 23:
        {
            return ::uNewDelegateNonVirt(::app::Fuse::Animations::EasingFunction__typeof(), (const void*)::app::Fuse::Animations::EasingFunctions__ElasticOut);
        }
        case 24:
        {
            return ::uNewDelegateNonVirt(::app::Fuse::Animations::EasingFunction__typeof(), (const void*)::app::Fuse::Animations::EasingFunctions__ElasticInOut);
        }
        case 25:
        {
            return ::uNewDelegateNonVirt(::app::Fuse::Animations::EasingFunction__typeof(), (const void*)::app::Fuse::Animations::EasingFunctions__BackIn);
        }
        case 26:
        {
            return ::uNewDelegateNonVirt(::app::Fuse::Animations::EasingFunction__typeof(), (const void*)::app::Fuse::Animations::EasingFunctions__BackOut);
        }
        case 27:
        {
            return ::uNewDelegateNonVirt(::app::Fuse::Animations::EasingFunction__typeof(), (const void*)::app::Fuse::Animations::EasingFunctions__BackInOut);
        }
        case 28:
        {
            return ::uNewDelegateNonVirt(::app::Fuse::Animations::EasingFunction__typeof(), (const void*)::app::Fuse::Animations::EasingFunctions__BounceIn);
        }
        case 29:
        {
            return ::uNewDelegateNonVirt(::app::Fuse::Animations::EasingFunction__typeof(), (const void*)::app::Fuse::Animations::EasingFunctions__BounceOut);
        }
        case 30:
        {
            return ::uNewDelegateNonVirt(::app::Fuse::Animations::EasingFunction__typeof(), (const void*)::app::Fuse::Animations::EasingFunctions__BounceInOut);
        }
        default:
        {
            return ::uNewDelegateNonVirt(::app::Fuse::Animations::EasingFunction__typeof(), (const void*)::app::Fuse::Animations::EasingFunctions__Linear);
        }
    }
}

float EasingFunctions__Linear(::uStatic* __this, float k)
{
    return k;
}

float EasingFunctions__QuadraticIn(::uStatic* __this, float k)
{
    return k * k;
}

float EasingFunctions__QuadraticOut(::uStatic* __this, float k)
{
    return k * (2.0f - k);
}

float EasingFunctions__QuadraticInOut(::uStatic* __this, float k)
{
    if ((k = k * 2.0f) < 1.0f)
    {
        return (0.5f * k) * k;
    }

    k = k - 1.0f;
    return -0.5f * ((k * (k - 2.0f)) - 1.0f);
}

float EasingFunctions__CubicIn(::uStatic* __this, float k)
{
    return (k * k) * k;
}

float EasingFunctions__CubicOut(::uStatic* __this, float k)
{
    k = k - 1.0f;
    return ((k * k) * k) + 1.0f;
}

float EasingFunctions__CubicInOut(::uStatic* __this, float k)
{
    if ((k = k * 2.0f) < 1.0f)
    {
        return ((0.5f * k) * k) * k;
    }

    return 0.5f * ((((k = k - 2.0f) * k) * k) + 2.0f);
}

float EasingFunctions__QuarticIn(::uStatic* __this, float k)
{
    return ((k * k) * k) * k;
}

float EasingFunctions__QuarticOut(::uStatic* __this, float k)
{
    k = k - 1.0f;
    return 1.0f - (((k * k) * k) * k);
}

float EasingFunctions__QuarticInOut(::uStatic* __this, float k)
{
    if ((k = k * 2.0f) < 1.0f)
    {
        return (((0.5f * k) * k) * k) * k;
    }

    return -0.5f * (((((k = k - 2.0f) * k) * k) * k) - 2.0f);
}

float EasingFunctions__QuinticIn(::uStatic* __this, float k)
{
    return (((k * k) * k) * k) * k;
}

float EasingFunctions__QuinticOut(::uStatic* __this, float k)
{
    k = k - 1.0f;
    return ((((k * k) * k) * k) * k) + 1.0f;
}

float EasingFunctions__QuinticInOut(::uStatic* __this, float k)
{
    if ((k = k * 2.0f) < 1.0f)
    {
        return ((((0.5f * k) * k) * k) * k) * k;
    }

    return 0.5f * ((((((k = k - 2.0f) * k) * k) * k) * k) + 2.0f);
}

float EasingFunctions__SinusoidalIn(::uStatic* __this, float k)
{
    return 1.0f - ::app::Uno::Math__Cos_1(NULL, (k * 3.14159274f) / 2.0f);
}

float EasingFunctions__SinusoidalOut(::uStatic* __this, float k)
{
    return ::app::Uno::Math__Sin_1(NULL, (k * 3.14159274f) / 2.0f);
}

float EasingFunctions__SinusoidalInOut(::uStatic* __this, float k)
{
    return 0.5f * (1.0f - ::app::Uno::Math__Cos_1(NULL, 3.14159274f * k));
}

float EasingFunctions__ExponentialIn(::uStatic* __this, float k)
{
    return (k == 0.0f) ? 0.0f : ::app::Uno::Math__Pow_1(NULL, 1024.0f, k - 1.0f);
}

float EasingFunctions__ExponentialOut(::uStatic* __this, float k)
{
    return (k == 1.0f) ? 1.0f : (1.0f - ::app::Uno::Math__Pow_1(NULL, 2.0f, -10.0f * k));
}

float EasingFunctions__ExponentialInOut(::uStatic* __this, float k)
{
    if (k == 0.0f)
    {
        return 0.0f;
    }

    if (k == 1.0f)
    {
        return 1.0f;
    }

    if ((k = k * 2.0f) < 1.0f)
    {
        return 0.5f * ::app::Uno::Math__Pow_1(NULL, 1024.0f, k - 1.0f);
    }

    return 0.5f * (-::app::Uno::Math__Pow_1(NULL, 2.0f, -10.0f * (k - 1.0f)) + 2.0f);
}

float EasingFunctions__CircularIn(::uStatic* __this, float k)
{
    return 1.0f - ::app::Uno::Math__Sqrt_1(NULL, 1.0f - (k * k));
}

float EasingFunctions__CircularOut(::uStatic* __this, float k)
{
    k = k - 1.0f;
    return ::app::Uno::Math__Sqrt_1(NULL, 1.0f - (k * k));
}

float EasingFunctions__CircularInOut(::uStatic* __this, float k)
{
    if ((k = k * 2.0f) < 1.0f)
    {
        return -0.5f * (::app::Uno::Math__Sqrt_1(NULL, 1.0f - (k * k)) - 1.0f);
    }

    return 0.5f * (::app::Uno::Math__Sqrt_1(NULL, 1.0f - ((k = k - 2.0f) * k)) + 1.0f);
}

float EasingFunctions__ElasticIn(::uStatic* __this, float k)
{
    float s = 0.0f;
    float a = 0.1f;
    float p = 0.4f;

    if (k == 0.0f)
    {
        return 0.0f;
    }

    if (k == 1.0f)
    {
        return 1.0f;
    }

    if ((a != 0.0f) || (a < 1.0f))
    {
        a = 1.0f;
        s = p / 4.0f;
    }
    else
    {
        s = (p * ::app::Uno::Math__Asin_1(NULL, 1.0f / a)) / 6.28318548f;
    }

    return -((a * ::app::Uno::Math__Pow_1(NULL, 2.0f, 10.0f * (k = k - 1.0f))) * ::app::Uno::Math__Sin_1(NULL, ((k - s) * 6.28318548f) / p));
}

float EasingFunctions__ElasticOut(::uStatic* __this, float k)
{
    float s = 0.0f;
    float a = 0.1f;
    float p = 0.4f;

    if (k == 0.0f)
    {
        return 0.0f;
    }

    if (k == 1.0f)
    {
        return 1.0f;
    }

    if ((a != 0.0f) || (a < 1.0f))
    {
        a = 1.0f;
        s = p / 4.0f;
    }
    else
    {
        s = (p * ::app::Uno::Math__Asin_1(NULL, 1.0f / a)) / 6.28318548f;
    }

    return ((a * ::app::Uno::Math__Pow_1(NULL, 2.0f, -10.0f * k)) * ::app::Uno::Math__Sin_1(NULL, ((k - s) * 6.28318548f) / p)) + 1.0f;
}

float EasingFunctions__ElasticInOut(::uStatic* __this, float k)
{
    float s = 0.0f;
    float a = 0.1f;
    float p = 0.4f;

    if (k == 0.0f)
    {
        return 0.0f;
    }

    if (k == 1.0f)
    {
        return 1.0f;
    }

    if ((a != 0.0f) || (a < 1.0f))
    {
        a = 1.0f;
        s = p / 4.0f;
    }
    else
    {
        s = (p * ::app::Uno::Math__Asin_1(NULL, 1.0f / a)) / 6.28318548f;
    }

    if ((k = k * 2.0f) < 1.0f)
    {
        return -0.5f * ((a * ::app::Uno::Math__Pow_1(NULL, 2.0f, 10.0f * (k = k - 1.0f))) * ::app::Uno::Math__Sin_1(NULL, ((k - s) * 6.28318548f) / p));
    }

    return (((a * ::app::Uno::Math__Pow_1(NULL, 2.0f, -10.0f * (k = k - 1.0f))) * ::app::Uno::Math__Sin_1(NULL, ((k - s) * 6.28318548f) / p)) * 0.5f) + 1.0f;
}

float EasingFunctions__BackIn(::uStatic* __this, float k)
{
    float s = 1.70158f;
    return (k * k) * (((s + 1.0f) * k) - s);
}

float EasingFunctions__BackOut(::uStatic* __this, float k)
{
    float s = 1.70158f;
    k = k - 1.0f;
    return ((k * k) * (((s + 1.0f) * k) + s)) + 1.0f;
}

float EasingFunctions__BackInOut(::uStatic* __this, float k)
{
    float s = 2.59490943f;

    if ((k = k * 2.0f) < 1.0f)
    {
        return 0.5f * ((k * k) * (((s + 1.0f) * k) - s));
    }

    return 0.5f * ((((k = k - 2.0f) * k) * (((s + 1.0f) * k) + s)) + 2.0f);
}

float EasingFunctions__BounceIn(::uStatic* __this, float k)
{
    return 1.0f - EasingFunctions__BounceOut(NULL, 1.0f - k);
}

float EasingFunctions__BounceOut(::uStatic* __this, float k)
{
    if (k < 0.363636374f)
    {
        return (7.5625f * k) * k;
    }
    else if (k < 0.727272749f)
    {
        return ((7.5625f * (k = k - 0.545454562f)) * k) + 0.75f;
    }
    else if (k < 0.909090936f)
    {
        return ((7.562f * (k = k - 0.8181818f)) * k) + 0.9375f;
    }
    else
    {
        return ((7.5625f * (k = k - 0.954545438f)) * k) + 0.984375f;
    }
}

float EasingFunctions__BounceInOut(::uStatic* __this, float k)
{
    if (k < 0.5f)
    {
        return EasingFunctions__BounceIn(NULL, k * 2.0f) * 0.5f;
    }

    return (EasingFunctions__BounceOut(NULL, (k * 2.0f) - 1.0f) * 0.5f) + 0.5f;
}

}}}
