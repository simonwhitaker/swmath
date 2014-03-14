
#ifndef _swmath_h
#define _swmath_h

#if __has_attribute(overloadable)


float __attribute__((overloadable)) swacos(float);
double __attribute__((overloadable)) swacos(double);
long double __attribute__((overloadable)) swacos(long double);

float __attribute__((overloadable)) swasin(float);
double __attribute__((overloadable)) swasin(double);
long double __attribute__((overloadable)) swasin(long double);

float __attribute__((overloadable)) swatan(float);
double __attribute__((overloadable)) swatan(double);
long double __attribute__((overloadable)) swatan(long double);

float __attribute__((overloadable)) swatan2(float, float);
double __attribute__((overloadable)) swatan2(double, double);
long double __attribute__((overloadable)) swatan2(long double, long double);

float __attribute__((overloadable)) swcos(float);
double __attribute__((overloadable)) swcos(double);
long double __attribute__((overloadable)) swcos(long double);

float __attribute__((overloadable)) swsin(float);
double __attribute__((overloadable)) swsin(double);
long double __attribute__((overloadable)) swsin(long double);

float __attribute__((overloadable)) swtan(float);
double __attribute__((overloadable)) swtan(double);
long double __attribute__((overloadable)) swtan(long double);

float __attribute__((overloadable)) swacosh(float);
double __attribute__((overloadable)) swacosh(double);
long double __attribute__((overloadable)) swacosh(long double);

float __attribute__((overloadable)) swasinh(float);
double __attribute__((overloadable)) swasinh(double);
long double __attribute__((overloadable)) swasinh(long double);

float __attribute__((overloadable)) swatanh(float);
double __attribute__((overloadable)) swatanh(double);
long double __attribute__((overloadable)) swatanh(long double);

float __attribute__((overloadable)) swcosh(float);
double __attribute__((overloadable)) swcosh(double);
long double __attribute__((overloadable)) swcosh(long double);

float __attribute__((overloadable)) swsinh(float);
double __attribute__((overloadable)) swsinh(double);
long double __attribute__((overloadable)) swsinh(long double);

float __attribute__((overloadable)) swtanh(float);
double __attribute__((overloadable)) swtanh(double);
long double __attribute__((overloadable)) swtanh(long double);

float __attribute__((overloadable)) swexp(float);
double __attribute__((overloadable)) swexp(double);
long double __attribute__((overloadable)) swexp(long double);

float __attribute__((overloadable)) swexp2(float);
double __attribute__((overloadable)) swexp2(double);
long double __attribute__((overloadable)) swexp2(long double);

float __attribute__((overloadable)) swexpm1(float);
double __attribute__((overloadable)) swexpm1(double);
long double __attribute__((overloadable)) swexpm1(long double);

float __attribute__((overloadable)) swlog(float);
double __attribute__((overloadable)) swlog(double);
long double __attribute__((overloadable)) swlog(long double);

float __attribute__((overloadable)) swlog10(float);
double __attribute__((overloadable)) swlog10(double);
long double __attribute__((overloadable)) swlog10(long double);

float __attribute__((overloadable)) swlog2(float);
double __attribute__((overloadable)) swlog2(double);
long double __attribute__((overloadable)) swlog2(long double);

float __attribute__((overloadable)) swlog1p(float);
double __attribute__((overloadable)) swlog1p(double);
long double __attribute__((overloadable)) swlog1p(long double);

float __attribute__((overloadable)) swlogb(float);
double __attribute__((overloadable)) swlogb(double);
long double __attribute__((overloadable)) swlogb(long double);

float __attribute__((overloadable)) swmodf(float, float *);
double __attribute__((overloadable)) swmodf(double, double *);
long double __attribute__((overloadable)) swmodf(long double, long double *);

float __attribute__((overloadable)) swldexp(float, int);
double __attribute__((overloadable)) swldexp(double, int);
long double __attribute__((overloadable)) swldexp(long double, int);

float __attribute__((overloadable)) swfrexp(float, int *);
double __attribute__((overloadable)) swfrexp(double, int *);
long double __attribute__((overloadable)) swfrexp(long double, int *);

float __attribute__((overloadable)) swilogb(float);
double __attribute__((overloadable)) swilogb(double);
long double __attribute__((overloadable)) swilogb(long double);

float __attribute__((overloadable)) swscalbn(float, int);
double __attribute__((overloadable)) swscalbn(double, int);
long double __attribute__((overloadable)) swscalbn(long double, int);

float __attribute__((overloadable)) swscalbln(float, long int);
double __attribute__((overloadable)) swscalbln(double, long int);
long double __attribute__((overloadable)) swscalbln(long double, long int);

float __attribute__((overloadable)) swfabs(float);
double __attribute__((overloadable)) swfabs(double);
long double __attribute__((overloadable)) swfabs(long double);

float __attribute__((overloadable)) swcbrt(float);
double __attribute__((overloadable)) swcbrt(double);
long double __attribute__((overloadable)) swcbrt(long double);

float __attribute__((overloadable)) swhypot(float, float);
double __attribute__((overloadable)) swhypot(double, double);
long double __attribute__((overloadable)) swhypot(long double, long double);

float __attribute__((overloadable)) swpow(float, float);
double __attribute__((overloadable)) swpow(double, double);
long double __attribute__((overloadable)) swpow(long double, long double);

float __attribute__((overloadable)) swsqrt(float);
double __attribute__((overloadable)) swsqrt(double);
long double __attribute__((overloadable)) swsqrt(long double);

float __attribute__((overloadable)) swerf(float);
double __attribute__((overloadable)) swerf(double);
long double __attribute__((overloadable)) swerf(long double);

float __attribute__((overloadable)) swerfc(float);
double __attribute__((overloadable)) swerfc(double);
long double __attribute__((overloadable)) swerfc(long double);

float __attribute__((overloadable)) swlgamma(float);
double __attribute__((overloadable)) swlgamma(double);
long double __attribute__((overloadable)) swlgamma(long double);

float __attribute__((overloadable)) swtgamma(float);
double __attribute__((overloadable)) swtgamma(double);
long double __attribute__((overloadable)) swtgamma(long double);

float __attribute__((overloadable)) swceil(float);
double __attribute__((overloadable)) swceil(double);
long double __attribute__((overloadable)) swceil(long double);

float __attribute__((overloadable)) swfloor(float);
double __attribute__((overloadable)) swfloor(double);
long double __attribute__((overloadable)) swfloor(long double);

float __attribute__((overloadable)) swnearbyint(float);
double __attribute__((overloadable)) swnearbyint(double);
long double __attribute__((overloadable)) swnearbyint(long double);

float __attribute__((overloadable)) swrint(float);
double __attribute__((overloadable)) swrint(double);
long double __attribute__((overloadable)) swrint(long double);

float __attribute__((overloadable)) swlrint(float);
double __attribute__((overloadable)) swlrint(double);
long double __attribute__((overloadable)) swlrint(long double);

float __attribute__((overloadable)) swround(float);
double __attribute__((overloadable)) swround(double);
long double __attribute__((overloadable)) swround(long double);

float __attribute__((overloadable)) swlround(float);
double __attribute__((overloadable)) swlround(double);
long double __attribute__((overloadable)) swlround(long double);

float __attribute__((overloadable)) swllrint(float);
double __attribute__((overloadable)) swllrint(double);
long double __attribute__((overloadable)) swllrint(long double);

float __attribute__((overloadable)) swllround(float);
double __attribute__((overloadable)) swllround(double);
long double __attribute__((overloadable)) swllround(long double);

float __attribute__((overloadable)) swtrunc(float);
double __attribute__((overloadable)) swtrunc(double);
long double __attribute__((overloadable)) swtrunc(long double);

float __attribute__((overloadable)) swfmod(float, float);
double __attribute__((overloadable)) swfmod(double, double);
long double __attribute__((overloadable)) swfmod(long double, long double);

float __attribute__((overloadable)) swremainder(float, float);
double __attribute__((overloadable)) swremainder(double, double);
long double __attribute__((overloadable)) swremainder(long double, long double);

float __attribute__((overloadable)) swremquo(float, float, int *);
double __attribute__((overloadable)) swremquo(double, double, int *);
long double __attribute__((overloadable)) swremquo(long double, long double, int *);

float __attribute__((overloadable)) swcopysign(float, float);
double __attribute__((overloadable)) swcopysign(double, double);
long double __attribute__((overloadable)) swcopysign(long double, long double);

float __attribute__((overloadable)) swnextafter(float, float);
double __attribute__((overloadable)) swnextafter(double, double);
long double __attribute__((overloadable)) swnextafter(long double, long double);

float __attribute__((overloadable)) swnexttoward(float, long double);
double __attribute__((overloadable)) swnexttoward(double, long double);
long double __attribute__((overloadable)) swnexttoward(long double, long double);

float __attribute__((overloadable)) swfdim(float, float);
double __attribute__((overloadable)) swfdim(double, double);
long double __attribute__((overloadable)) swfdim(long double, long double);

float __attribute__((overloadable)) swfmax(float, float);
double __attribute__((overloadable)) swfmax(double, double);
long double __attribute__((overloadable)) swfmax(long double, long double);

float __attribute__((overloadable)) swfmin(float, float);
double __attribute__((overloadable)) swfmin(double, double);
long double __attribute__((overloadable)) swfmin(long double, long double);

float __attribute__((overloadable)) swfma(float, float, float);
double __attribute__((overloadable)) swfma(double, double, double);
long double __attribute__((overloadable)) swfma(long double, long double, long double);


#else
#error swmath requires support for the clang `overrideable` attribute
#endif


#endif

