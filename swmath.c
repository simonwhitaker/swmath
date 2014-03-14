
#include <math.h>


float __attribute__((overloadable)) swacos(float arg1) { return acosf(arg1); }
double __attribute__((overloadable)) swacos(double arg1) { return acos(arg1); }
long double __attribute__((overloadable)) swacos(long double arg1) { return acosl(arg1); }

float __attribute__((overloadable)) swasin(float arg1) { return asinf(arg1); }
double __attribute__((overloadable)) swasin(double arg1) { return asin(arg1); }
long double __attribute__((overloadable)) swasin(long double arg1) { return asinl(arg1); }

float __attribute__((overloadable)) swatan(float arg1) { return atanf(arg1); }
double __attribute__((overloadable)) swatan(double arg1) { return atan(arg1); }
long double __attribute__((overloadable)) swatan(long double arg1) { return atanl(arg1); }

float __attribute__((overloadable)) swatan2(float arg1, float arg2) { return atan2f(arg1, arg2); }
double __attribute__((overloadable)) swatan2(double arg1, double arg2) { return atan2(arg1, arg2); }
long double __attribute__((overloadable)) swatan2(long double arg1, long double arg2) { return atan2l(arg1, arg2); }

float __attribute__((overloadable)) swcos(float arg1) { return cosf(arg1); }
double __attribute__((overloadable)) swcos(double arg1) { return cos(arg1); }
long double __attribute__((overloadable)) swcos(long double arg1) { return cosl(arg1); }

float __attribute__((overloadable)) swsin(float arg1) { return sinf(arg1); }
double __attribute__((overloadable)) swsin(double arg1) { return sin(arg1); }
long double __attribute__((overloadable)) swsin(long double arg1) { return sinl(arg1); }

float __attribute__((overloadable)) swtan(float arg1) { return tanf(arg1); }
double __attribute__((overloadable)) swtan(double arg1) { return tan(arg1); }
long double __attribute__((overloadable)) swtan(long double arg1) { return tanl(arg1); }

float __attribute__((overloadable)) swacosh(float arg1) { return acoshf(arg1); }
double __attribute__((overloadable)) swacosh(double arg1) { return acosh(arg1); }
long double __attribute__((overloadable)) swacosh(long double arg1) { return acoshl(arg1); }

float __attribute__((overloadable)) swasinh(float arg1) { return asinhf(arg1); }
double __attribute__((overloadable)) swasinh(double arg1) { return asinh(arg1); }
long double __attribute__((overloadable)) swasinh(long double arg1) { return asinhl(arg1); }

float __attribute__((overloadable)) swatanh(float arg1) { return atanhf(arg1); }
double __attribute__((overloadable)) swatanh(double arg1) { return atanh(arg1); }
long double __attribute__((overloadable)) swatanh(long double arg1) { return atanhl(arg1); }

float __attribute__((overloadable)) swcosh(float arg1) { return coshf(arg1); }
double __attribute__((overloadable)) swcosh(double arg1) { return cosh(arg1); }
long double __attribute__((overloadable)) swcosh(long double arg1) { return coshl(arg1); }

float __attribute__((overloadable)) swsinh(float arg1) { return sinhf(arg1); }
double __attribute__((overloadable)) swsinh(double arg1) { return sinh(arg1); }
long double __attribute__((overloadable)) swsinh(long double arg1) { return sinhl(arg1); }

float __attribute__((overloadable)) swtanh(float arg1) { return tanhf(arg1); }
double __attribute__((overloadable)) swtanh(double arg1) { return tanh(arg1); }
long double __attribute__((overloadable)) swtanh(long double arg1) { return tanhl(arg1); }

float __attribute__((overloadable)) swexp(float arg1) { return expf(arg1); }
double __attribute__((overloadable)) swexp(double arg1) { return exp(arg1); }
long double __attribute__((overloadable)) swexp(long double arg1) { return expl(arg1); }

float __attribute__((overloadable)) swexp2(float arg1) { return exp2f(arg1); }
double __attribute__((overloadable)) swexp2(double arg1) { return exp2(arg1); }
long double __attribute__((overloadable)) swexp2(long double arg1) { return exp2l(arg1); }

float __attribute__((overloadable)) swexpm1(float arg1) { return expm1f(arg1); }
double __attribute__((overloadable)) swexpm1(double arg1) { return expm1(arg1); }
long double __attribute__((overloadable)) swexpm1(long double arg1) { return expm1l(arg1); }

float __attribute__((overloadable)) swlog(float arg1) { return logf(arg1); }
double __attribute__((overloadable)) swlog(double arg1) { return log(arg1); }
long double __attribute__((overloadable)) swlog(long double arg1) { return logl(arg1); }

float __attribute__((overloadable)) swlog10(float arg1) { return log10f(arg1); }
double __attribute__((overloadable)) swlog10(double arg1) { return log10(arg1); }
long double __attribute__((overloadable)) swlog10(long double arg1) { return log10l(arg1); }

float __attribute__((overloadable)) swlog2(float arg1) { return log2f(arg1); }
double __attribute__((overloadable)) swlog2(double arg1) { return log2(arg1); }
long double __attribute__((overloadable)) swlog2(long double arg1) { return log2l(arg1); }

float __attribute__((overloadable)) swlog1p(float arg1) { return log1pf(arg1); }
double __attribute__((overloadable)) swlog1p(double arg1) { return log1p(arg1); }
long double __attribute__((overloadable)) swlog1p(long double arg1) { return log1pl(arg1); }

float __attribute__((overloadable)) swlogb(float arg1) { return logbf(arg1); }
double __attribute__((overloadable)) swlogb(double arg1) { return logb(arg1); }
long double __attribute__((overloadable)) swlogb(long double arg1) { return logbl(arg1); }

float __attribute__((overloadable)) swmodf(float arg1, float * arg2) { return modff(arg1, arg2); }
double __attribute__((overloadable)) swmodf(double arg1, double * arg2) { return modf(arg1, arg2); }
long double __attribute__((overloadable)) swmodf(long double arg1, long double * arg2) { return modfl(arg1, arg2); }

float __attribute__((overloadable)) swldexp(float arg1, int arg2) { return ldexpf(arg1, arg2); }
double __attribute__((overloadable)) swldexp(double arg1, int arg2) { return ldexp(arg1, arg2); }
long double __attribute__((overloadable)) swldexp(long double arg1, int arg2) { return ldexpl(arg1, arg2); }

float __attribute__((overloadable)) swfrexp(float arg1, int * arg2) { return frexpf(arg1, arg2); }
double __attribute__((overloadable)) swfrexp(double arg1, int * arg2) { return frexp(arg1, arg2); }
long double __attribute__((overloadable)) swfrexp(long double arg1, int * arg2) { return frexpl(arg1, arg2); }

float __attribute__((overloadable)) swilogb(float arg1) { return ilogbf(arg1); }
double __attribute__((overloadable)) swilogb(double arg1) { return ilogb(arg1); }
long double __attribute__((overloadable)) swilogb(long double arg1) { return ilogbl(arg1); }

float __attribute__((overloadable)) swscalbn(float arg1, int arg2) { return scalbnf(arg1, arg2); }
double __attribute__((overloadable)) swscalbn(double arg1, int arg2) { return scalbn(arg1, arg2); }
long double __attribute__((overloadable)) swscalbn(long double arg1, int arg2) { return scalbnl(arg1, arg2); }

float __attribute__((overloadable)) swscalbln(float arg1, long int arg2) { return scalblnf(arg1, arg2); }
double __attribute__((overloadable)) swscalbln(double arg1, long int arg2) { return scalbln(arg1, arg2); }
long double __attribute__((overloadable)) swscalbln(long double arg1, long int arg2) { return scalblnl(arg1, arg2); }

float __attribute__((overloadable)) swfabs(float arg1) { return fabsf(arg1); }
double __attribute__((overloadable)) swfabs(double arg1) { return fabs(arg1); }
long double __attribute__((overloadable)) swfabs(long double arg1) { return fabsl(arg1); }

float __attribute__((overloadable)) swcbrt(float arg1) { return cbrtf(arg1); }
double __attribute__((overloadable)) swcbrt(double arg1) { return cbrt(arg1); }
long double __attribute__((overloadable)) swcbrt(long double arg1) { return cbrtl(arg1); }

float __attribute__((overloadable)) swhypot(float arg1, float arg2) { return hypotf(arg1, arg2); }
double __attribute__((overloadable)) swhypot(double arg1, double arg2) { return hypot(arg1, arg2); }
long double __attribute__((overloadable)) swhypot(long double arg1, long double arg2) { return hypotl(arg1, arg2); }

float __attribute__((overloadable)) swpow(float arg1, float arg2) { return powf(arg1, arg2); }
double __attribute__((overloadable)) swpow(double arg1, double arg2) { return pow(arg1, arg2); }
long double __attribute__((overloadable)) swpow(long double arg1, long double arg2) { return powl(arg1, arg2); }

float __attribute__((overloadable)) swsqrt(float arg1) { return sqrtf(arg1); }
double __attribute__((overloadable)) swsqrt(double arg1) { return sqrt(arg1); }
long double __attribute__((overloadable)) swsqrt(long double arg1) { return sqrtl(arg1); }

float __attribute__((overloadable)) swerf(float arg1) { return erff(arg1); }
double __attribute__((overloadable)) swerf(double arg1) { return erf(arg1); }
long double __attribute__((overloadable)) swerf(long double arg1) { return erfl(arg1); }

float __attribute__((overloadable)) swerfc(float arg1) { return erfcf(arg1); }
double __attribute__((overloadable)) swerfc(double arg1) { return erfc(arg1); }
long double __attribute__((overloadable)) swerfc(long double arg1) { return erfcl(arg1); }

float __attribute__((overloadable)) swlgamma(float arg1) { return lgammaf(arg1); }
double __attribute__((overloadable)) swlgamma(double arg1) { return lgamma(arg1); }
long double __attribute__((overloadable)) swlgamma(long double arg1) { return lgammal(arg1); }

float __attribute__((overloadable)) swtgamma(float arg1) { return tgammaf(arg1); }
double __attribute__((overloadable)) swtgamma(double arg1) { return tgamma(arg1); }
long double __attribute__((overloadable)) swtgamma(long double arg1) { return tgammal(arg1); }

float __attribute__((overloadable)) swceil(float arg1) { return ceilf(arg1); }
double __attribute__((overloadable)) swceil(double arg1) { return ceil(arg1); }
long double __attribute__((overloadable)) swceil(long double arg1) { return ceill(arg1); }

float __attribute__((overloadable)) swfloor(float arg1) { return floorf(arg1); }
double __attribute__((overloadable)) swfloor(double arg1) { return floor(arg1); }
long double __attribute__((overloadable)) swfloor(long double arg1) { return floorl(arg1); }

float __attribute__((overloadable)) swnearbyint(float arg1) { return nearbyintf(arg1); }
double __attribute__((overloadable)) swnearbyint(double arg1) { return nearbyint(arg1); }
long double __attribute__((overloadable)) swnearbyint(long double arg1) { return nearbyintl(arg1); }

float __attribute__((overloadable)) swrint(float arg1) { return rintf(arg1); }
double __attribute__((overloadable)) swrint(double arg1) { return rint(arg1); }
long double __attribute__((overloadable)) swrint(long double arg1) { return rintl(arg1); }

float __attribute__((overloadable)) swlrint(float arg1) { return lrintf(arg1); }
double __attribute__((overloadable)) swlrint(double arg1) { return lrint(arg1); }
long double __attribute__((overloadable)) swlrint(long double arg1) { return lrintl(arg1); }

float __attribute__((overloadable)) swround(float arg1) { return roundf(arg1); }
double __attribute__((overloadable)) swround(double arg1) { return round(arg1); }
long double __attribute__((overloadable)) swround(long double arg1) { return roundl(arg1); }

float __attribute__((overloadable)) swlround(float arg1) { return lroundf(arg1); }
double __attribute__((overloadable)) swlround(double arg1) { return lround(arg1); }
long double __attribute__((overloadable)) swlround(long double arg1) { return lroundl(arg1); }

float __attribute__((overloadable)) swllrint(float arg1) { return llrintf(arg1); }
double __attribute__((overloadable)) swllrint(double arg1) { return llrint(arg1); }
long double __attribute__((overloadable)) swllrint(long double arg1) { return llrintl(arg1); }

float __attribute__((overloadable)) swllround(float arg1) { return llroundf(arg1); }
double __attribute__((overloadable)) swllround(double arg1) { return llround(arg1); }
long double __attribute__((overloadable)) swllround(long double arg1) { return llroundl(arg1); }

float __attribute__((overloadable)) swtrunc(float arg1) { return truncf(arg1); }
double __attribute__((overloadable)) swtrunc(double arg1) { return trunc(arg1); }
long double __attribute__((overloadable)) swtrunc(long double arg1) { return truncl(arg1); }

float __attribute__((overloadable)) swfmod(float arg1, float arg2) { return fmodf(arg1, arg2); }
double __attribute__((overloadable)) swfmod(double arg1, double arg2) { return fmod(arg1, arg2); }
long double __attribute__((overloadable)) swfmod(long double arg1, long double arg2) { return fmodl(arg1, arg2); }

float __attribute__((overloadable)) swremainder(float arg1, float arg2) { return remainderf(arg1, arg2); }
double __attribute__((overloadable)) swremainder(double arg1, double arg2) { return remainder(arg1, arg2); }
long double __attribute__((overloadable)) swremainder(long double arg1, long double arg2) { return remainderl(arg1, arg2); }

float __attribute__((overloadable)) swremquo(float arg1, float arg2, int * arg3) { return remquof(arg1, arg2, arg3); }
double __attribute__((overloadable)) swremquo(double arg1, double arg2, int * arg3) { return remquo(arg1, arg2, arg3); }
long double __attribute__((overloadable)) swremquo(long double arg1, long double arg2, int * arg3) { return remquol(arg1, arg2, arg3); }

float __attribute__((overloadable)) swcopysign(float arg1, float arg2) { return copysignf(arg1, arg2); }
double __attribute__((overloadable)) swcopysign(double arg1, double arg2) { return copysign(arg1, arg2); }
long double __attribute__((overloadable)) swcopysign(long double arg1, long double arg2) { return copysignl(arg1, arg2); }

float __attribute__((overloadable)) swnextafter(float arg1, float arg2) { return nextafterf(arg1, arg2); }
double __attribute__((overloadable)) swnextafter(double arg1, double arg2) { return nextafter(arg1, arg2); }
long double __attribute__((overloadable)) swnextafter(long double arg1, long double arg2) { return nextafterl(arg1, arg2); }

float __attribute__((overloadable)) swnexttoward(float arg1, long double arg2) { return nexttowardf(arg1, arg2); }
double __attribute__((overloadable)) swnexttoward(double arg1, long double arg2) { return nexttoward(arg1, arg2); }
long double __attribute__((overloadable)) swnexttoward(long double arg1, long double arg2) { return nexttowardl(arg1, arg2); }

float __attribute__((overloadable)) swfdim(float arg1, float arg2) { return fdimf(arg1, arg2); }
double __attribute__((overloadable)) swfdim(double arg1, double arg2) { return fdim(arg1, arg2); }
long double __attribute__((overloadable)) swfdim(long double arg1, long double arg2) { return fdiml(arg1, arg2); }

float __attribute__((overloadable)) swfmax(float arg1, float arg2) { return fmaxf(arg1, arg2); }
double __attribute__((overloadable)) swfmax(double arg1, double arg2) { return fmax(arg1, arg2); }
long double __attribute__((overloadable)) swfmax(long double arg1, long double arg2) { return fmaxl(arg1, arg2); }

float __attribute__((overloadable)) swfmin(float arg1, float arg2) { return fminf(arg1, arg2); }
double __attribute__((overloadable)) swfmin(double arg1, double arg2) { return fmin(arg1, arg2); }
long double __attribute__((overloadable)) swfmin(long double arg1, long double arg2) { return fminl(arg1, arg2); }

float __attribute__((overloadable)) swfma(float arg1, float arg2, float arg3) { return fmaf(arg1, arg2, arg3); }
double __attribute__((overloadable)) swfma(double arg1, double arg2, double arg3) { return fma(arg1, arg2, arg3); }
long double __attribute__((overloadable)) swfma(long double arg1, long double arg2, long double arg3) { return fmal(arg1, arg2, arg3); }

