#include <math.h>
#include <stddef.h>
static double f1_0(double x) { if(x==0.) return 0x1.0000000000000p+0;
if(fabs(x)<=0x1.0000000000000p+0) { double p=0x1.2f49b46814157p-57;
p=p*x+0x1.6827863b97d97p-53;
p=p*x+0x1.952c77030ad4ap-49;
p=p*x+0x1.ae7f3e733b81fp-45;
p=p*x+0x1.ae7f3e733b81fp-41;
p=p*x+0x1.93974a8c07c9dp-37;
p=p*x+0x1.6124613a86d09p-33;
p=p*x+0x1.1eed8eff8d898p-29;
p=p*x+0x1.ae64567f544e4p-26;
p=p*x+0x1.27e4fb7789f5cp-22;
p=p*x+0x1.71de3a556c734p-19;
p=p*x+0x1.a01a01a01a01ap-16;
p=p*x+0x1.a01a01a01a01ap-13;
p=p*x+0x1.6c16c16c16c17p-10;
p=p*x+0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
p=p*x+0x1.0000000000000p-1;
p=p*x+0x1.0000000000000p+0;
return p;}
return expm1(x)/x;}
static double f1_1(double x) { if(x==0.) return 0x1.0000000000000p+0;
return (exp(x)-1.)/x;}
static double f1_2(double x) { if(x==0.) return 0x1.0000000000000p+0;
return expm1(x)/x;}
static double f1_3(double x) { if(x==0.) return 0x1.0000000000000p+0;
if(fabs(x)<=0x1.0000000000000p-6) { double p=0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
p=p*x+0x1.0000000000000p-1;
p=p*x+0x1.0000000000000p+0;
return p;}
return expm1(x)/x;}
static double f1_4(double x) { if(x==0.) return 0x1.0000000000000p+0;
if(fabs(x)<=0x1.0000000000000p-4) { double p=0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
p=p*x+0x1.0000000000000p-1;
p=p*x+0x1.0000000000000p+0;
return p;}
return expm1(x)/x;}
static double f1_5(double x) { if(x==0.) return 0x1.0000000000000p+0;
if(fabs(x)<=0x1.0000000000000p-2) { double p=0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
p=p*x+0x1.0000000000000p-1;
p=p*x+0x1.0000000000000p+0;
return p;}
return expm1(x)/x;}
static double f1_6(double x) { if(x==0.) return 0x1.0000000000000p+0;
if(fabs(x)<=0x1.0000000000000p-1) { double p=0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
p=p*x+0x1.0000000000000p-1;
p=p*x+0x1.0000000000000p+0;
return p;}
return expm1(x)/x;}
static double f1_7(double x) { if(x==0.) return 0x1.0000000000000p+0;
if(fabs(x)<=0x1.0000000000000p+0) { double p=0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
p=p*x+0x1.0000000000000p-1;
p=p*x+0x1.0000000000000p+0;
return p;}
return expm1(x)/x;}
static double f1_8(double x) { if(x==0.) return 0x1.0000000000000p+0;
if(fabs(x)<=0x1.0000000000000p+1) { double p=0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
p=p*x+0x1.0000000000000p-1;
p=p*x+0x1.0000000000000p+0;
return p;}
return expm1(x)/x;}
static double f1_9(double x) { if(x==0.) return 0x1.0000000000000p+0;
if(fabs(x)<=0x1.0000000000000p-6) { double p=0x1.a01a01a01a01ap-13;
p=p*x+0x1.6c16c16c16c17p-10;
p=p*x+0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
p=p*x+0x1.0000000000000p-1;
p=p*x+0x1.0000000000000p+0;
return p;}
return expm1(x)/x;}
static double f1_10(double x) { if(x==0.) return 0x1.0000000000000p+0;
if(fabs(x)<=0x1.0000000000000p-4) { double p=0x1.a01a01a01a01ap-13;
p=p*x+0x1.6c16c16c16c17p-10;
p=p*x+0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
p=p*x+0x1.0000000000000p-1;
p=p*x+0x1.0000000000000p+0;
return p;}
return expm1(x)/x;}
static double f1_11(double x) { if(x==0.) return 0x1.0000000000000p+0;
if(fabs(x)<=0x1.0000000000000p-2) { double p=0x1.a01a01a01a01ap-13;
p=p*x+0x1.6c16c16c16c17p-10;
p=p*x+0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
p=p*x+0x1.0000000000000p-1;
p=p*x+0x1.0000000000000p+0;
return p;}
return expm1(x)/x;}
static double f1_12(double x) { if(x==0.) return 0x1.0000000000000p+0;
if(fabs(x)<=0x1.0000000000000p-1) { double p=0x1.a01a01a01a01ap-13;
p=p*x+0x1.6c16c16c16c17p-10;
p=p*x+0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
p=p*x+0x1.0000000000000p-1;
p=p*x+0x1.0000000000000p+0;
return p;}
return expm1(x)/x;}
static double f1_13(double x) { if(x==0.) return 0x1.0000000000000p+0;
if(fabs(x)<=0x1.0000000000000p+0) { double p=0x1.a01a01a01a01ap-13;
p=p*x+0x1.6c16c16c16c17p-10;
p=p*x+0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
p=p*x+0x1.0000000000000p-1;
p=p*x+0x1.0000000000000p+0;
return p;}
return expm1(x)/x;}
static double f1_14(double x) { if(x==0.) return 0x1.0000000000000p+0;
if(fabs(x)<=0x1.0000000000000p+1) { double p=0x1.a01a01a01a01ap-13;
p=p*x+0x1.6c16c16c16c17p-10;
p=p*x+0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
p=p*x+0x1.0000000000000p-1;
p=p*x+0x1.0000000000000p+0;
return p;}
return expm1(x)/x;}
static double f1_15(double x) { if(x==0.) return 0x1.0000000000000p+0;
if(fabs(x)<=0x1.0000000000000p-6) { double p=0x1.71de3a556c734p-19;
p=p*x+0x1.a01a01a01a01ap-16;
p=p*x+0x1.a01a01a01a01ap-13;
p=p*x+0x1.6c16c16c16c17p-10;
p=p*x+0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
p=p*x+0x1.0000000000000p-1;
p=p*x+0x1.0000000000000p+0;
return p;}
return expm1(x)/x;}
static double f1_16(double x) { if(x==0.) return 0x1.0000000000000p+0;
if(fabs(x)<=0x1.0000000000000p-4) { double p=0x1.71de3a556c734p-19;
p=p*x+0x1.a01a01a01a01ap-16;
p=p*x+0x1.a01a01a01a01ap-13;
p=p*x+0x1.6c16c16c16c17p-10;
p=p*x+0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
p=p*x+0x1.0000000000000p-1;
p=p*x+0x1.0000000000000p+0;
return p;}
return expm1(x)/x;}
static double f1_17(double x) { if(x==0.) return 0x1.0000000000000p+0;
if(fabs(x)<=0x1.0000000000000p-2) { double p=0x1.71de3a556c734p-19;
p=p*x+0x1.a01a01a01a01ap-16;
p=p*x+0x1.a01a01a01a01ap-13;
p=p*x+0x1.6c16c16c16c17p-10;
p=p*x+0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
p=p*x+0x1.0000000000000p-1;
p=p*x+0x1.0000000000000p+0;
return p;}
return expm1(x)/x;}
static double f1_18(double x) { if(x==0.) return 0x1.0000000000000p+0;
if(fabs(x)<=0x1.0000000000000p-1) { double p=0x1.71de3a556c734p-19;
p=p*x+0x1.a01a01a01a01ap-16;
p=p*x+0x1.a01a01a01a01ap-13;
p=p*x+0x1.6c16c16c16c17p-10;
p=p*x+0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
p=p*x+0x1.0000000000000p-1;
p=p*x+0x1.0000000000000p+0;
return p;}
return expm1(x)/x;}
static double f1_19(double x) { if(x==0.) return 0x1.0000000000000p+0;
if(fabs(x)<=0x1.0000000000000p+0) { double p=0x1.71de3a556c734p-19;
p=p*x+0x1.a01a01a01a01ap-16;
p=p*x+0x1.a01a01a01a01ap-13;
p=p*x+0x1.6c16c16c16c17p-10;
p=p*x+0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
p=p*x+0x1.0000000000000p-1;
p=p*x+0x1.0000000000000p+0;
return p;}
return expm1(x)/x;}
static double f1_20(double x) { if(x==0.) return 0x1.0000000000000p+0;
if(fabs(x)<=0x1.0000000000000p+1) { double p=0x1.71de3a556c734p-19;
p=p*x+0x1.a01a01a01a01ap-16;
p=p*x+0x1.a01a01a01a01ap-13;
p=p*x+0x1.6c16c16c16c17p-10;
p=p*x+0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
p=p*x+0x1.0000000000000p-1;
p=p*x+0x1.0000000000000p+0;
return p;}
return expm1(x)/x;}
static double f1_21(double x) { if(x==0.) return 0x1.0000000000000p+0;
if(fabs(x)<=0x1.0000000000000p-6) { double p=0x1.ae64567f544e4p-26;
p=p*x+0x1.27e4fb7789f5cp-22;
p=p*x+0x1.71de3a556c734p-19;
p=p*x+0x1.a01a01a01a01ap-16;
p=p*x+0x1.a01a01a01a01ap-13;
p=p*x+0x1.6c16c16c16c17p-10;
p=p*x+0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
p=p*x+0x1.0000000000000p-1;
p=p*x+0x1.0000000000000p+0;
return p;}
return expm1(x)/x;}
static double f1_22(double x) { if(x==0.) return 0x1.0000000000000p+0;
if(fabs(x)<=0x1.0000000000000p-4) { double p=0x1.ae64567f544e4p-26;
p=p*x+0x1.27e4fb7789f5cp-22;
p=p*x+0x1.71de3a556c734p-19;
p=p*x+0x1.a01a01a01a01ap-16;
p=p*x+0x1.a01a01a01a01ap-13;
p=p*x+0x1.6c16c16c16c17p-10;
p=p*x+0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
p=p*x+0x1.0000000000000p-1;
p=p*x+0x1.0000000000000p+0;
return p;}
return expm1(x)/x;}
static double f1_23(double x) { if(x==0.) return 0x1.0000000000000p+0;
if(fabs(x)<=0x1.0000000000000p-2) { double p=0x1.ae64567f544e4p-26;
p=p*x+0x1.27e4fb7789f5cp-22;
p=p*x+0x1.71de3a556c734p-19;
p=p*x+0x1.a01a01a01a01ap-16;
p=p*x+0x1.a01a01a01a01ap-13;
p=p*x+0x1.6c16c16c16c17p-10;
p=p*x+0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
p=p*x+0x1.0000000000000p-1;
p=p*x+0x1.0000000000000p+0;
return p;}
return expm1(x)/x;}
static double f1_24(double x) { if(x==0.) return 0x1.0000000000000p+0;
if(fabs(x)<=0x1.0000000000000p-1) { double p=0x1.ae64567f544e4p-26;
p=p*x+0x1.27e4fb7789f5cp-22;
p=p*x+0x1.71de3a556c734p-19;
p=p*x+0x1.a01a01a01a01ap-16;
p=p*x+0x1.a01a01a01a01ap-13;
p=p*x+0x1.6c16c16c16c17p-10;
p=p*x+0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
p=p*x+0x1.0000000000000p-1;
p=p*x+0x1.0000000000000p+0;
return p;}
return expm1(x)/x;}
static double f1_25(double x) { if(x==0.) return 0x1.0000000000000p+0;
if(fabs(x)<=0x1.0000000000000p+0) { double p=0x1.ae64567f544e4p-26;
p=p*x+0x1.27e4fb7789f5cp-22;
p=p*x+0x1.71de3a556c734p-19;
p=p*x+0x1.a01a01a01a01ap-16;
p=p*x+0x1.a01a01a01a01ap-13;
p=p*x+0x1.6c16c16c16c17p-10;
p=p*x+0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
p=p*x+0x1.0000000000000p-1;
p=p*x+0x1.0000000000000p+0;
return p;}
return expm1(x)/x;}
static double f1_26(double x) { if(x==0.) return 0x1.0000000000000p+0;
if(fabs(x)<=0x1.0000000000000p+1) { double p=0x1.ae64567f544e4p-26;
p=p*x+0x1.27e4fb7789f5cp-22;
p=p*x+0x1.71de3a556c734p-19;
p=p*x+0x1.a01a01a01a01ap-16;
p=p*x+0x1.a01a01a01a01ap-13;
p=p*x+0x1.6c16c16c16c17p-10;
p=p*x+0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
p=p*x+0x1.0000000000000p-1;
p=p*x+0x1.0000000000000p+0;
return p;}
return expm1(x)/x;}
static double f1_27(double x) { if(x==0.) return 0x1.0000000000000p+0;
if(fabs(x)<=0x1.0000000000000p-6) { double p=0x1.6124613a86d09p-33;
p=p*x+0x1.1eed8eff8d898p-29;
p=p*x+0x1.ae64567f544e4p-26;
p=p*x+0x1.27e4fb7789f5cp-22;
p=p*x+0x1.71de3a556c734p-19;
p=p*x+0x1.a01a01a01a01ap-16;
p=p*x+0x1.a01a01a01a01ap-13;
p=p*x+0x1.6c16c16c16c17p-10;
p=p*x+0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
p=p*x+0x1.0000000000000p-1;
p=p*x+0x1.0000000000000p+0;
return p;}
return expm1(x)/x;}
static double f1_28(double x) { if(x==0.) return 0x1.0000000000000p+0;
if(fabs(x)<=0x1.0000000000000p-4) { double p=0x1.6124613a86d09p-33;
p=p*x+0x1.1eed8eff8d898p-29;
p=p*x+0x1.ae64567f544e4p-26;
p=p*x+0x1.27e4fb7789f5cp-22;
p=p*x+0x1.71de3a556c734p-19;
p=p*x+0x1.a01a01a01a01ap-16;
p=p*x+0x1.a01a01a01a01ap-13;
p=p*x+0x1.6c16c16c16c17p-10;
p=p*x+0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
p=p*x+0x1.0000000000000p-1;
p=p*x+0x1.0000000000000p+0;
return p;}
return expm1(x)/x;}
static double f1_29(double x) { if(x==0.) return 0x1.0000000000000p+0;
if(fabs(x)<=0x1.0000000000000p-2) { double p=0x1.6124613a86d09p-33;
p=p*x+0x1.1eed8eff8d898p-29;
p=p*x+0x1.ae64567f544e4p-26;
p=p*x+0x1.27e4fb7789f5cp-22;
p=p*x+0x1.71de3a556c734p-19;
p=p*x+0x1.a01a01a01a01ap-16;
p=p*x+0x1.a01a01a01a01ap-13;
p=p*x+0x1.6c16c16c16c17p-10;
p=p*x+0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
p=p*x+0x1.0000000000000p-1;
p=p*x+0x1.0000000000000p+0;
return p;}
return expm1(x)/x;}
static double f1_30(double x) { if(x==0.) return 0x1.0000000000000p+0;
if(fabs(x)<=0x1.0000000000000p-1) { double p=0x1.6124613a86d09p-33;
p=p*x+0x1.1eed8eff8d898p-29;
p=p*x+0x1.ae64567f544e4p-26;
p=p*x+0x1.27e4fb7789f5cp-22;
p=p*x+0x1.71de3a556c734p-19;
p=p*x+0x1.a01a01a01a01ap-16;
p=p*x+0x1.a01a01a01a01ap-13;
p=p*x+0x1.6c16c16c16c17p-10;
p=p*x+0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
p=p*x+0x1.0000000000000p-1;
p=p*x+0x1.0000000000000p+0;
return p;}
return expm1(x)/x;}
static double f1_31(double x) { if(x==0.) return 0x1.0000000000000p+0;
if(fabs(x)<=0x1.0000000000000p+0) { double p=0x1.6124613a86d09p-33;
p=p*x+0x1.1eed8eff8d898p-29;
p=p*x+0x1.ae64567f544e4p-26;
p=p*x+0x1.27e4fb7789f5cp-22;
p=p*x+0x1.71de3a556c734p-19;
p=p*x+0x1.a01a01a01a01ap-16;
p=p*x+0x1.a01a01a01a01ap-13;
p=p*x+0x1.6c16c16c16c17p-10;
p=p*x+0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
p=p*x+0x1.0000000000000p-1;
p=p*x+0x1.0000000000000p+0;
return p;}
return expm1(x)/x;}
static double f1_32(double x) { if(x==0.) return 0x1.0000000000000p+0;
if(fabs(x)<=0x1.0000000000000p+1) { double p=0x1.6124613a86d09p-33;
p=p*x+0x1.1eed8eff8d898p-29;
p=p*x+0x1.ae64567f544e4p-26;
p=p*x+0x1.27e4fb7789f5cp-22;
p=p*x+0x1.71de3a556c734p-19;
p=p*x+0x1.a01a01a01a01ap-16;
p=p*x+0x1.a01a01a01a01ap-13;
p=p*x+0x1.6c16c16c16c17p-10;
p=p*x+0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
p=p*x+0x1.0000000000000p-1;
p=p*x+0x1.0000000000000p+0;
return p;}
return expm1(x)/x;}
static double f1_33(double x) { if(x==0.) return 0x1.0000000000000p+0;
if(fabs(x)<=0x1.0000000000000p-6) { double p=0x1.ae7f3e733b81fp-41;
p=p*x+0x1.93974a8c07c9dp-37;
p=p*x+0x1.6124613a86d09p-33;
p=p*x+0x1.1eed8eff8d898p-29;
p=p*x+0x1.ae64567f544e4p-26;
p=p*x+0x1.27e4fb7789f5cp-22;
p=p*x+0x1.71de3a556c734p-19;
p=p*x+0x1.a01a01a01a01ap-16;
p=p*x+0x1.a01a01a01a01ap-13;
p=p*x+0x1.6c16c16c16c17p-10;
p=p*x+0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
p=p*x+0x1.0000000000000p-1;
p=p*x+0x1.0000000000000p+0;
return p;}
return expm1(x)/x;}
static double f1_34(double x) { if(x==0.) return 0x1.0000000000000p+0;
if(fabs(x)<=0x1.0000000000000p-4) { double p=0x1.ae7f3e733b81fp-41;
p=p*x+0x1.93974a8c07c9dp-37;
p=p*x+0x1.6124613a86d09p-33;
p=p*x+0x1.1eed8eff8d898p-29;
p=p*x+0x1.ae64567f544e4p-26;
p=p*x+0x1.27e4fb7789f5cp-22;
p=p*x+0x1.71de3a556c734p-19;
p=p*x+0x1.a01a01a01a01ap-16;
p=p*x+0x1.a01a01a01a01ap-13;
p=p*x+0x1.6c16c16c16c17p-10;
p=p*x+0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
p=p*x+0x1.0000000000000p-1;
p=p*x+0x1.0000000000000p+0;
return p;}
return expm1(x)/x;}
static double f1_35(double x) { if(x==0.) return 0x1.0000000000000p+0;
if(fabs(x)<=0x1.0000000000000p-2) { double p=0x1.ae7f3e733b81fp-41;
p=p*x+0x1.93974a8c07c9dp-37;
p=p*x+0x1.6124613a86d09p-33;
p=p*x+0x1.1eed8eff8d898p-29;
p=p*x+0x1.ae64567f544e4p-26;
p=p*x+0x1.27e4fb7789f5cp-22;
p=p*x+0x1.71de3a556c734p-19;
p=p*x+0x1.a01a01a01a01ap-16;
p=p*x+0x1.a01a01a01a01ap-13;
p=p*x+0x1.6c16c16c16c17p-10;
p=p*x+0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
p=p*x+0x1.0000000000000p-1;
p=p*x+0x1.0000000000000p+0;
return p;}
return expm1(x)/x;}
static double f1_36(double x) { if(x==0.) return 0x1.0000000000000p+0;
if(fabs(x)<=0x1.0000000000000p-1) { double p=0x1.ae7f3e733b81fp-41;
p=p*x+0x1.93974a8c07c9dp-37;
p=p*x+0x1.6124613a86d09p-33;
p=p*x+0x1.1eed8eff8d898p-29;
p=p*x+0x1.ae64567f544e4p-26;
p=p*x+0x1.27e4fb7789f5cp-22;
p=p*x+0x1.71de3a556c734p-19;
p=p*x+0x1.a01a01a01a01ap-16;
p=p*x+0x1.a01a01a01a01ap-13;
p=p*x+0x1.6c16c16c16c17p-10;
p=p*x+0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
p=p*x+0x1.0000000000000p-1;
p=p*x+0x1.0000000000000p+0;
return p;}
return expm1(x)/x;}
static double f1_37(double x) { if(x==0.) return 0x1.0000000000000p+0;
if(fabs(x)<=0x1.0000000000000p+0) { double p=0x1.ae7f3e733b81fp-41;
p=p*x+0x1.93974a8c07c9dp-37;
p=p*x+0x1.6124613a86d09p-33;
p=p*x+0x1.1eed8eff8d898p-29;
p=p*x+0x1.ae64567f544e4p-26;
p=p*x+0x1.27e4fb7789f5cp-22;
p=p*x+0x1.71de3a556c734p-19;
p=p*x+0x1.a01a01a01a01ap-16;
p=p*x+0x1.a01a01a01a01ap-13;
p=p*x+0x1.6c16c16c16c17p-10;
p=p*x+0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
p=p*x+0x1.0000000000000p-1;
p=p*x+0x1.0000000000000p+0;
return p;}
return expm1(x)/x;}
static double f1_38(double x) { if(x==0.) return 0x1.0000000000000p+0;
if(fabs(x)<=0x1.0000000000000p+1) { double p=0x1.ae7f3e733b81fp-41;
p=p*x+0x1.93974a8c07c9dp-37;
p=p*x+0x1.6124613a86d09p-33;
p=p*x+0x1.1eed8eff8d898p-29;
p=p*x+0x1.ae64567f544e4p-26;
p=p*x+0x1.27e4fb7789f5cp-22;
p=p*x+0x1.71de3a556c734p-19;
p=p*x+0x1.a01a01a01a01ap-16;
p=p*x+0x1.a01a01a01a01ap-13;
p=p*x+0x1.6c16c16c16c17p-10;
p=p*x+0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
p=p*x+0x1.0000000000000p-1;
p=p*x+0x1.0000000000000p+0;
return p;}
return expm1(x)/x;}
static double f1_39(double x) { if(x==0.) return 0x1.0000000000000p+0;
if(fabs(x)<=0x1.0000000000000p-6) { double p=0x1.952c77030ad4ap-49;
p=p*x+0x1.ae7f3e733b81fp-45;
p=p*x+0x1.ae7f3e733b81fp-41;
p=p*x+0x1.93974a8c07c9dp-37;
p=p*x+0x1.6124613a86d09p-33;
p=p*x+0x1.1eed8eff8d898p-29;
p=p*x+0x1.ae64567f544e4p-26;
p=p*x+0x1.27e4fb7789f5cp-22;
p=p*x+0x1.71de3a556c734p-19;
p=p*x+0x1.a01a01a01a01ap-16;
p=p*x+0x1.a01a01a01a01ap-13;
p=p*x+0x1.6c16c16c16c17p-10;
p=p*x+0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
p=p*x+0x1.0000000000000p-1;
p=p*x+0x1.0000000000000p+0;
return p;}
return expm1(x)/x;}
static double f1_40(double x) { if(x==0.) return 0x1.0000000000000p+0;
if(fabs(x)<=0x1.0000000000000p-4) { double p=0x1.952c77030ad4ap-49;
p=p*x+0x1.ae7f3e733b81fp-45;
p=p*x+0x1.ae7f3e733b81fp-41;
p=p*x+0x1.93974a8c07c9dp-37;
p=p*x+0x1.6124613a86d09p-33;
p=p*x+0x1.1eed8eff8d898p-29;
p=p*x+0x1.ae64567f544e4p-26;
p=p*x+0x1.27e4fb7789f5cp-22;
p=p*x+0x1.71de3a556c734p-19;
p=p*x+0x1.a01a01a01a01ap-16;
p=p*x+0x1.a01a01a01a01ap-13;
p=p*x+0x1.6c16c16c16c17p-10;
p=p*x+0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
p=p*x+0x1.0000000000000p-1;
p=p*x+0x1.0000000000000p+0;
return p;}
return expm1(x)/x;}
static double f1_41(double x) { if(x==0.) return 0x1.0000000000000p+0;
if(fabs(x)<=0x1.0000000000000p-2) { double p=0x1.952c77030ad4ap-49;
p=p*x+0x1.ae7f3e733b81fp-45;
p=p*x+0x1.ae7f3e733b81fp-41;
p=p*x+0x1.93974a8c07c9dp-37;
p=p*x+0x1.6124613a86d09p-33;
p=p*x+0x1.1eed8eff8d898p-29;
p=p*x+0x1.ae64567f544e4p-26;
p=p*x+0x1.27e4fb7789f5cp-22;
p=p*x+0x1.71de3a556c734p-19;
p=p*x+0x1.a01a01a01a01ap-16;
p=p*x+0x1.a01a01a01a01ap-13;
p=p*x+0x1.6c16c16c16c17p-10;
p=p*x+0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
p=p*x+0x1.0000000000000p-1;
p=p*x+0x1.0000000000000p+0;
return p;}
return expm1(x)/x;}
static double f1_42(double x) { if(x==0.) return 0x1.0000000000000p+0;
if(fabs(x)<=0x1.0000000000000p-1) { double p=0x1.952c77030ad4ap-49;
p=p*x+0x1.ae7f3e733b81fp-45;
p=p*x+0x1.ae7f3e733b81fp-41;
p=p*x+0x1.93974a8c07c9dp-37;
p=p*x+0x1.6124613a86d09p-33;
p=p*x+0x1.1eed8eff8d898p-29;
p=p*x+0x1.ae64567f544e4p-26;
p=p*x+0x1.27e4fb7789f5cp-22;
p=p*x+0x1.71de3a556c734p-19;
p=p*x+0x1.a01a01a01a01ap-16;
p=p*x+0x1.a01a01a01a01ap-13;
p=p*x+0x1.6c16c16c16c17p-10;
p=p*x+0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
p=p*x+0x1.0000000000000p-1;
p=p*x+0x1.0000000000000p+0;
return p;}
return expm1(x)/x;}
static double f1_43(double x) { if(x==0.) return 0x1.0000000000000p+0;
if(fabs(x)<=0x1.0000000000000p+0) { double p=0x1.952c77030ad4ap-49;
p=p*x+0x1.ae7f3e733b81fp-45;
p=p*x+0x1.ae7f3e733b81fp-41;
p=p*x+0x1.93974a8c07c9dp-37;
p=p*x+0x1.6124613a86d09p-33;
p=p*x+0x1.1eed8eff8d898p-29;
p=p*x+0x1.ae64567f544e4p-26;
p=p*x+0x1.27e4fb7789f5cp-22;
p=p*x+0x1.71de3a556c734p-19;
p=p*x+0x1.a01a01a01a01ap-16;
p=p*x+0x1.a01a01a01a01ap-13;
p=p*x+0x1.6c16c16c16c17p-10;
p=p*x+0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
p=p*x+0x1.0000000000000p-1;
p=p*x+0x1.0000000000000p+0;
return p;}
return expm1(x)/x;}
static double f1_44(double x) { if(x==0.) return 0x1.0000000000000p+0;
if(fabs(x)<=0x1.0000000000000p+1) { double p=0x1.952c77030ad4ap-49;
p=p*x+0x1.ae7f3e733b81fp-45;
p=p*x+0x1.ae7f3e733b81fp-41;
p=p*x+0x1.93974a8c07c9dp-37;
p=p*x+0x1.6124613a86d09p-33;
p=p*x+0x1.1eed8eff8d898p-29;
p=p*x+0x1.ae64567f544e4p-26;
p=p*x+0x1.27e4fb7789f5cp-22;
p=p*x+0x1.71de3a556c734p-19;
p=p*x+0x1.a01a01a01a01ap-16;
p=p*x+0x1.a01a01a01a01ap-13;
p=p*x+0x1.6c16c16c16c17p-10;
p=p*x+0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
p=p*x+0x1.0000000000000p-1;
p=p*x+0x1.0000000000000p+0;
return p;}
return expm1(x)/x;}
static double f1_45(double x) { if(x==0.) return 0x1.0000000000000p+0;
if(fabs(x)<=0x1.0000000000000p-6) { double p=0x1.2f49b46814157p-57;
p=p*x+0x1.6827863b97d97p-53;
p=p*x+0x1.952c77030ad4ap-49;
p=p*x+0x1.ae7f3e733b81fp-45;
p=p*x+0x1.ae7f3e733b81fp-41;
p=p*x+0x1.93974a8c07c9dp-37;
p=p*x+0x1.6124613a86d09p-33;
p=p*x+0x1.1eed8eff8d898p-29;
p=p*x+0x1.ae64567f544e4p-26;
p=p*x+0x1.27e4fb7789f5cp-22;
p=p*x+0x1.71de3a556c734p-19;
p=p*x+0x1.a01a01a01a01ap-16;
p=p*x+0x1.a01a01a01a01ap-13;
p=p*x+0x1.6c16c16c16c17p-10;
p=p*x+0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
p=p*x+0x1.0000000000000p-1;
p=p*x+0x1.0000000000000p+0;
return p;}
return expm1(x)/x;}
static double f1_46(double x) { if(x==0.) return 0x1.0000000000000p+0;
if(fabs(x)<=0x1.0000000000000p-4) { double p=0x1.2f49b46814157p-57;
p=p*x+0x1.6827863b97d97p-53;
p=p*x+0x1.952c77030ad4ap-49;
p=p*x+0x1.ae7f3e733b81fp-45;
p=p*x+0x1.ae7f3e733b81fp-41;
p=p*x+0x1.93974a8c07c9dp-37;
p=p*x+0x1.6124613a86d09p-33;
p=p*x+0x1.1eed8eff8d898p-29;
p=p*x+0x1.ae64567f544e4p-26;
p=p*x+0x1.27e4fb7789f5cp-22;
p=p*x+0x1.71de3a556c734p-19;
p=p*x+0x1.a01a01a01a01ap-16;
p=p*x+0x1.a01a01a01a01ap-13;
p=p*x+0x1.6c16c16c16c17p-10;
p=p*x+0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
p=p*x+0x1.0000000000000p-1;
p=p*x+0x1.0000000000000p+0;
return p;}
return expm1(x)/x;}
static double f1_47(double x) { if(x==0.) return 0x1.0000000000000p+0;
if(fabs(x)<=0x1.0000000000000p-2) { double p=0x1.2f49b46814157p-57;
p=p*x+0x1.6827863b97d97p-53;
p=p*x+0x1.952c77030ad4ap-49;
p=p*x+0x1.ae7f3e733b81fp-45;
p=p*x+0x1.ae7f3e733b81fp-41;
p=p*x+0x1.93974a8c07c9dp-37;
p=p*x+0x1.6124613a86d09p-33;
p=p*x+0x1.1eed8eff8d898p-29;
p=p*x+0x1.ae64567f544e4p-26;
p=p*x+0x1.27e4fb7789f5cp-22;
p=p*x+0x1.71de3a556c734p-19;
p=p*x+0x1.a01a01a01a01ap-16;
p=p*x+0x1.a01a01a01a01ap-13;
p=p*x+0x1.6c16c16c16c17p-10;
p=p*x+0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
p=p*x+0x1.0000000000000p-1;
p=p*x+0x1.0000000000000p+0;
return p;}
return expm1(x)/x;}
static double f1_48(double x) { if(x==0.) return 0x1.0000000000000p+0;
if(fabs(x)<=0x1.0000000000000p-1) { double p=0x1.2f49b46814157p-57;
p=p*x+0x1.6827863b97d97p-53;
p=p*x+0x1.952c77030ad4ap-49;
p=p*x+0x1.ae7f3e733b81fp-45;
p=p*x+0x1.ae7f3e733b81fp-41;
p=p*x+0x1.93974a8c07c9dp-37;
p=p*x+0x1.6124613a86d09p-33;
p=p*x+0x1.1eed8eff8d898p-29;
p=p*x+0x1.ae64567f544e4p-26;
p=p*x+0x1.27e4fb7789f5cp-22;
p=p*x+0x1.71de3a556c734p-19;
p=p*x+0x1.a01a01a01a01ap-16;
p=p*x+0x1.a01a01a01a01ap-13;
p=p*x+0x1.6c16c16c16c17p-10;
p=p*x+0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
p=p*x+0x1.0000000000000p-1;
p=p*x+0x1.0000000000000p+0;
return p;}
return expm1(x)/x;}
static double f1_49(double x) { if(x==0.) return 0x1.0000000000000p+0;
if(fabs(x)<=0x1.0000000000000p+0) { double p=0x1.2f49b46814157p-57;
p=p*x+0x1.6827863b97d97p-53;
p=p*x+0x1.952c77030ad4ap-49;
p=p*x+0x1.ae7f3e733b81fp-45;
p=p*x+0x1.ae7f3e733b81fp-41;
p=p*x+0x1.93974a8c07c9dp-37;
p=p*x+0x1.6124613a86d09p-33;
p=p*x+0x1.1eed8eff8d898p-29;
p=p*x+0x1.ae64567f544e4p-26;
p=p*x+0x1.27e4fb7789f5cp-22;
p=p*x+0x1.71de3a556c734p-19;
p=p*x+0x1.a01a01a01a01ap-16;
p=p*x+0x1.a01a01a01a01ap-13;
p=p*x+0x1.6c16c16c16c17p-10;
p=p*x+0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
p=p*x+0x1.0000000000000p-1;
p=p*x+0x1.0000000000000p+0;
return p;}
return expm1(x)/x;}
static double f1_50(double x) { if(x==0.) return 0x1.0000000000000p+0;
if(fabs(x)<=0x1.0000000000000p+1) { double p=0x1.2f49b46814157p-57;
p=p*x+0x1.6827863b97d97p-53;
p=p*x+0x1.952c77030ad4ap-49;
p=p*x+0x1.ae7f3e733b81fp-45;
p=p*x+0x1.ae7f3e733b81fp-41;
p=p*x+0x1.93974a8c07c9dp-37;
p=p*x+0x1.6124613a86d09p-33;
p=p*x+0x1.1eed8eff8d898p-29;
p=p*x+0x1.ae64567f544e4p-26;
p=p*x+0x1.27e4fb7789f5cp-22;
p=p*x+0x1.71de3a556c734p-19;
p=p*x+0x1.a01a01a01a01ap-16;
p=p*x+0x1.a01a01a01a01ap-13;
p=p*x+0x1.6c16c16c16c17p-10;
p=p*x+0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
p=p*x+0x1.0000000000000p-1;
p=p*x+0x1.0000000000000p+0;
return p;}
return expm1(x)/x;}
static double f2_0(double x) { if(x==0.) return 0x1.0000000000000p-1;
if(fabs(x)<=0x1.0000000000000p+0) { double p=0x1.e542ba4020225p-62;
p=p*x+0x1.2f49b46814157p-57;
p=p*x+0x1.6827863b97d97p-53;
p=p*x+0x1.952c77030ad4ap-49;
p=p*x+0x1.ae7f3e733b81fp-45;
p=p*x+0x1.ae7f3e733b81fp-41;
p=p*x+0x1.93974a8c07c9dp-37;
p=p*x+0x1.6124613a86d09p-33;
p=p*x+0x1.1eed8eff8d898p-29;
p=p*x+0x1.ae64567f544e4p-26;
p=p*x+0x1.27e4fb7789f5cp-22;
p=p*x+0x1.71de3a556c734p-19;
p=p*x+0x1.a01a01a01a01ap-16;
p=p*x+0x1.a01a01a01a01ap-13;
p=p*x+0x1.6c16c16c16c17p-10;
p=p*x+0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
p=p*x+0x1.0000000000000p-1;
return p;}
return (expm1(x)-x)/(x*x);}
static double f2_1(double x) { if(x==0.) return 0x1.0000000000000p-1;
return ((exp(x)-1.)-x)/(x*x);}
static double f2_2(double x) { if(x==0.) return 0x1.0000000000000p-1;
return (expm1(x)-x)/(x*x);}
static double f2_3(double x) { if(x==0.) return 0x1.0000000000000p-1;
if(fabs(x)<=0x1.0000000000000p-6) { double p=0x1.6c16c16c16c17p-10;
p=p*x+0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
p=p*x+0x1.0000000000000p-1;
return p;}
return (expm1(x)-x)/(x*x);}
static double f2_4(double x) { if(x==0.) return 0x1.0000000000000p-1;
if(fabs(x)<=0x1.0000000000000p-4) { double p=0x1.6c16c16c16c17p-10;
p=p*x+0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
p=p*x+0x1.0000000000000p-1;
return p;}
return (expm1(x)-x)/(x*x);}
static double f2_5(double x) { if(x==0.) return 0x1.0000000000000p-1;
if(fabs(x)<=0x1.0000000000000p-2) { double p=0x1.6c16c16c16c17p-10;
p=p*x+0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
p=p*x+0x1.0000000000000p-1;
return p;}
return (expm1(x)-x)/(x*x);}
static double f2_6(double x) { if(x==0.) return 0x1.0000000000000p-1;
if(fabs(x)<=0x1.0000000000000p-1) { double p=0x1.6c16c16c16c17p-10;
p=p*x+0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
p=p*x+0x1.0000000000000p-1;
return p;}
return (expm1(x)-x)/(x*x);}
static double f2_7(double x) { if(x==0.) return 0x1.0000000000000p-1;
if(fabs(x)<=0x1.0000000000000p+0) { double p=0x1.6c16c16c16c17p-10;
p=p*x+0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
p=p*x+0x1.0000000000000p-1;
return p;}
return (expm1(x)-x)/(x*x);}
static double f2_8(double x) { if(x==0.) return 0x1.0000000000000p-1;
if(fabs(x)<=0x1.0000000000000p+1) { double p=0x1.6c16c16c16c17p-10;
p=p*x+0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
p=p*x+0x1.0000000000000p-1;
return p;}
return (expm1(x)-x)/(x*x);}
static double f2_9(double x) { if(x==0.) return 0x1.0000000000000p-1;
if(fabs(x)<=0x1.0000000000000p-6) { double p=0x1.a01a01a01a01ap-16;
p=p*x+0x1.a01a01a01a01ap-13;
p=p*x+0x1.6c16c16c16c17p-10;
p=p*x+0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
p=p*x+0x1.0000000000000p-1;
return p;}
return (expm1(x)-x)/(x*x);}
static double f2_10(double x) { if(x==0.) return 0x1.0000000000000p-1;
if(fabs(x)<=0x1.0000000000000p-4) { double p=0x1.a01a01a01a01ap-16;
p=p*x+0x1.a01a01a01a01ap-13;
p=p*x+0x1.6c16c16c16c17p-10;
p=p*x+0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
p=p*x+0x1.0000000000000p-1;
return p;}
return (expm1(x)-x)/(x*x);}
static double f2_11(double x) { if(x==0.) return 0x1.0000000000000p-1;
if(fabs(x)<=0x1.0000000000000p-2) { double p=0x1.a01a01a01a01ap-16;
p=p*x+0x1.a01a01a01a01ap-13;
p=p*x+0x1.6c16c16c16c17p-10;
p=p*x+0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
p=p*x+0x1.0000000000000p-1;
return p;}
return (expm1(x)-x)/(x*x);}
static double f2_12(double x) { if(x==0.) return 0x1.0000000000000p-1;
if(fabs(x)<=0x1.0000000000000p-1) { double p=0x1.a01a01a01a01ap-16;
p=p*x+0x1.a01a01a01a01ap-13;
p=p*x+0x1.6c16c16c16c17p-10;
p=p*x+0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
p=p*x+0x1.0000000000000p-1;
return p;}
return (expm1(x)-x)/(x*x);}
static double f2_13(double x) { if(x==0.) return 0x1.0000000000000p-1;
if(fabs(x)<=0x1.0000000000000p+0) { double p=0x1.a01a01a01a01ap-16;
p=p*x+0x1.a01a01a01a01ap-13;
p=p*x+0x1.6c16c16c16c17p-10;
p=p*x+0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
p=p*x+0x1.0000000000000p-1;
return p;}
return (expm1(x)-x)/(x*x);}
static double f2_14(double x) { if(x==0.) return 0x1.0000000000000p-1;
if(fabs(x)<=0x1.0000000000000p+1) { double p=0x1.a01a01a01a01ap-16;
p=p*x+0x1.a01a01a01a01ap-13;
p=p*x+0x1.6c16c16c16c17p-10;
p=p*x+0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
p=p*x+0x1.0000000000000p-1;
return p;}
return (expm1(x)-x)/(x*x);}
static double f2_15(double x) { if(x==0.) return 0x1.0000000000000p-1;
if(fabs(x)<=0x1.0000000000000p-6) { double p=0x1.27e4fb7789f5cp-22;
p=p*x+0x1.71de3a556c734p-19;
p=p*x+0x1.a01a01a01a01ap-16;
p=p*x+0x1.a01a01a01a01ap-13;
p=p*x+0x1.6c16c16c16c17p-10;
p=p*x+0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
p=p*x+0x1.0000000000000p-1;
return p;}
return (expm1(x)-x)/(x*x);}
static double f2_16(double x) { if(x==0.) return 0x1.0000000000000p-1;
if(fabs(x)<=0x1.0000000000000p-4) { double p=0x1.27e4fb7789f5cp-22;
p=p*x+0x1.71de3a556c734p-19;
p=p*x+0x1.a01a01a01a01ap-16;
p=p*x+0x1.a01a01a01a01ap-13;
p=p*x+0x1.6c16c16c16c17p-10;
p=p*x+0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
p=p*x+0x1.0000000000000p-1;
return p;}
return (expm1(x)-x)/(x*x);}
static double f2_17(double x) { if(x==0.) return 0x1.0000000000000p-1;
if(fabs(x)<=0x1.0000000000000p-2) { double p=0x1.27e4fb7789f5cp-22;
p=p*x+0x1.71de3a556c734p-19;
p=p*x+0x1.a01a01a01a01ap-16;
p=p*x+0x1.a01a01a01a01ap-13;
p=p*x+0x1.6c16c16c16c17p-10;
p=p*x+0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
p=p*x+0x1.0000000000000p-1;
return p;}
return (expm1(x)-x)/(x*x);}
static double f2_18(double x) { if(x==0.) return 0x1.0000000000000p-1;
if(fabs(x)<=0x1.0000000000000p-1) { double p=0x1.27e4fb7789f5cp-22;
p=p*x+0x1.71de3a556c734p-19;
p=p*x+0x1.a01a01a01a01ap-16;
p=p*x+0x1.a01a01a01a01ap-13;
p=p*x+0x1.6c16c16c16c17p-10;
p=p*x+0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
p=p*x+0x1.0000000000000p-1;
return p;}
return (expm1(x)-x)/(x*x);}
static double f2_19(double x) { if(x==0.) return 0x1.0000000000000p-1;
if(fabs(x)<=0x1.0000000000000p+0) { double p=0x1.27e4fb7789f5cp-22;
p=p*x+0x1.71de3a556c734p-19;
p=p*x+0x1.a01a01a01a01ap-16;
p=p*x+0x1.a01a01a01a01ap-13;
p=p*x+0x1.6c16c16c16c17p-10;
p=p*x+0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
p=p*x+0x1.0000000000000p-1;
return p;}
return (expm1(x)-x)/(x*x);}
static double f2_20(double x) { if(x==0.) return 0x1.0000000000000p-1;
if(fabs(x)<=0x1.0000000000000p+1) { double p=0x1.27e4fb7789f5cp-22;
p=p*x+0x1.71de3a556c734p-19;
p=p*x+0x1.a01a01a01a01ap-16;
p=p*x+0x1.a01a01a01a01ap-13;
p=p*x+0x1.6c16c16c16c17p-10;
p=p*x+0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
p=p*x+0x1.0000000000000p-1;
return p;}
return (expm1(x)-x)/(x*x);}
static double f2_21(double x) { if(x==0.) return 0x1.0000000000000p-1;
if(fabs(x)<=0x1.0000000000000p-6) { double p=0x1.1eed8eff8d898p-29;
p=p*x+0x1.ae64567f544e4p-26;
p=p*x+0x1.27e4fb7789f5cp-22;
p=p*x+0x1.71de3a556c734p-19;
p=p*x+0x1.a01a01a01a01ap-16;
p=p*x+0x1.a01a01a01a01ap-13;
p=p*x+0x1.6c16c16c16c17p-10;
p=p*x+0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
p=p*x+0x1.0000000000000p-1;
return p;}
return (expm1(x)-x)/(x*x);}
static double f2_22(double x) { if(x==0.) return 0x1.0000000000000p-1;
if(fabs(x)<=0x1.0000000000000p-4) { double p=0x1.1eed8eff8d898p-29;
p=p*x+0x1.ae64567f544e4p-26;
p=p*x+0x1.27e4fb7789f5cp-22;
p=p*x+0x1.71de3a556c734p-19;
p=p*x+0x1.a01a01a01a01ap-16;
p=p*x+0x1.a01a01a01a01ap-13;
p=p*x+0x1.6c16c16c16c17p-10;
p=p*x+0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
p=p*x+0x1.0000000000000p-1;
return p;}
return (expm1(x)-x)/(x*x);}
static double f2_23(double x) { if(x==0.) return 0x1.0000000000000p-1;
if(fabs(x)<=0x1.0000000000000p-2) { double p=0x1.1eed8eff8d898p-29;
p=p*x+0x1.ae64567f544e4p-26;
p=p*x+0x1.27e4fb7789f5cp-22;
p=p*x+0x1.71de3a556c734p-19;
p=p*x+0x1.a01a01a01a01ap-16;
p=p*x+0x1.a01a01a01a01ap-13;
p=p*x+0x1.6c16c16c16c17p-10;
p=p*x+0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
p=p*x+0x1.0000000000000p-1;
return p;}
return (expm1(x)-x)/(x*x);}
static double f2_24(double x) { if(x==0.) return 0x1.0000000000000p-1;
if(fabs(x)<=0x1.0000000000000p-1) { double p=0x1.1eed8eff8d898p-29;
p=p*x+0x1.ae64567f544e4p-26;
p=p*x+0x1.27e4fb7789f5cp-22;
p=p*x+0x1.71de3a556c734p-19;
p=p*x+0x1.a01a01a01a01ap-16;
p=p*x+0x1.a01a01a01a01ap-13;
p=p*x+0x1.6c16c16c16c17p-10;
p=p*x+0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
p=p*x+0x1.0000000000000p-1;
return p;}
return (expm1(x)-x)/(x*x);}
static double f2_25(double x) { if(x==0.) return 0x1.0000000000000p-1;
if(fabs(x)<=0x1.0000000000000p+0) { double p=0x1.1eed8eff8d898p-29;
p=p*x+0x1.ae64567f544e4p-26;
p=p*x+0x1.27e4fb7789f5cp-22;
p=p*x+0x1.71de3a556c734p-19;
p=p*x+0x1.a01a01a01a01ap-16;
p=p*x+0x1.a01a01a01a01ap-13;
p=p*x+0x1.6c16c16c16c17p-10;
p=p*x+0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
p=p*x+0x1.0000000000000p-1;
return p;}
return (expm1(x)-x)/(x*x);}
static double f2_26(double x) { if(x==0.) return 0x1.0000000000000p-1;
if(fabs(x)<=0x1.0000000000000p+1) { double p=0x1.1eed8eff8d898p-29;
p=p*x+0x1.ae64567f544e4p-26;
p=p*x+0x1.27e4fb7789f5cp-22;
p=p*x+0x1.71de3a556c734p-19;
p=p*x+0x1.a01a01a01a01ap-16;
p=p*x+0x1.a01a01a01a01ap-13;
p=p*x+0x1.6c16c16c16c17p-10;
p=p*x+0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
p=p*x+0x1.0000000000000p-1;
return p;}
return (expm1(x)-x)/(x*x);}
static double f2_27(double x) { if(x==0.) return 0x1.0000000000000p-1;
if(fabs(x)<=0x1.0000000000000p-6) { double p=0x1.93974a8c07c9dp-37;
p=p*x+0x1.6124613a86d09p-33;
p=p*x+0x1.1eed8eff8d898p-29;
p=p*x+0x1.ae64567f544e4p-26;
p=p*x+0x1.27e4fb7789f5cp-22;
p=p*x+0x1.71de3a556c734p-19;
p=p*x+0x1.a01a01a01a01ap-16;
p=p*x+0x1.a01a01a01a01ap-13;
p=p*x+0x1.6c16c16c16c17p-10;
p=p*x+0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
p=p*x+0x1.0000000000000p-1;
return p;}
return (expm1(x)-x)/(x*x);}
static double f2_28(double x) { if(x==0.) return 0x1.0000000000000p-1;
if(fabs(x)<=0x1.0000000000000p-4) { double p=0x1.93974a8c07c9dp-37;
p=p*x+0x1.6124613a86d09p-33;
p=p*x+0x1.1eed8eff8d898p-29;
p=p*x+0x1.ae64567f544e4p-26;
p=p*x+0x1.27e4fb7789f5cp-22;
p=p*x+0x1.71de3a556c734p-19;
p=p*x+0x1.a01a01a01a01ap-16;
p=p*x+0x1.a01a01a01a01ap-13;
p=p*x+0x1.6c16c16c16c17p-10;
p=p*x+0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
p=p*x+0x1.0000000000000p-1;
return p;}
return (expm1(x)-x)/(x*x);}
static double f2_29(double x) { if(x==0.) return 0x1.0000000000000p-1;
if(fabs(x)<=0x1.0000000000000p-2) { double p=0x1.93974a8c07c9dp-37;
p=p*x+0x1.6124613a86d09p-33;
p=p*x+0x1.1eed8eff8d898p-29;
p=p*x+0x1.ae64567f544e4p-26;
p=p*x+0x1.27e4fb7789f5cp-22;
p=p*x+0x1.71de3a556c734p-19;
p=p*x+0x1.a01a01a01a01ap-16;
p=p*x+0x1.a01a01a01a01ap-13;
p=p*x+0x1.6c16c16c16c17p-10;
p=p*x+0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
p=p*x+0x1.0000000000000p-1;
return p;}
return (expm1(x)-x)/(x*x);}
static double f2_30(double x) { if(x==0.) return 0x1.0000000000000p-1;
if(fabs(x)<=0x1.0000000000000p-1) { double p=0x1.93974a8c07c9dp-37;
p=p*x+0x1.6124613a86d09p-33;
p=p*x+0x1.1eed8eff8d898p-29;
p=p*x+0x1.ae64567f544e4p-26;
p=p*x+0x1.27e4fb7789f5cp-22;
p=p*x+0x1.71de3a556c734p-19;
p=p*x+0x1.a01a01a01a01ap-16;
p=p*x+0x1.a01a01a01a01ap-13;
p=p*x+0x1.6c16c16c16c17p-10;
p=p*x+0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
p=p*x+0x1.0000000000000p-1;
return p;}
return (expm1(x)-x)/(x*x);}
static double f2_31(double x) { if(x==0.) return 0x1.0000000000000p-1;
if(fabs(x)<=0x1.0000000000000p+0) { double p=0x1.93974a8c07c9dp-37;
p=p*x+0x1.6124613a86d09p-33;
p=p*x+0x1.1eed8eff8d898p-29;
p=p*x+0x1.ae64567f544e4p-26;
p=p*x+0x1.27e4fb7789f5cp-22;
p=p*x+0x1.71de3a556c734p-19;
p=p*x+0x1.a01a01a01a01ap-16;
p=p*x+0x1.a01a01a01a01ap-13;
p=p*x+0x1.6c16c16c16c17p-10;
p=p*x+0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
p=p*x+0x1.0000000000000p-1;
return p;}
return (expm1(x)-x)/(x*x);}
static double f2_32(double x) { if(x==0.) return 0x1.0000000000000p-1;
if(fabs(x)<=0x1.0000000000000p+1) { double p=0x1.93974a8c07c9dp-37;
p=p*x+0x1.6124613a86d09p-33;
p=p*x+0x1.1eed8eff8d898p-29;
p=p*x+0x1.ae64567f544e4p-26;
p=p*x+0x1.27e4fb7789f5cp-22;
p=p*x+0x1.71de3a556c734p-19;
p=p*x+0x1.a01a01a01a01ap-16;
p=p*x+0x1.a01a01a01a01ap-13;
p=p*x+0x1.6c16c16c16c17p-10;
p=p*x+0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
p=p*x+0x1.0000000000000p-1;
return p;}
return (expm1(x)-x)/(x*x);}
static double f2_33(double x) { if(x==0.) return 0x1.0000000000000p-1;
if(fabs(x)<=0x1.0000000000000p-6) { double p=0x1.ae7f3e733b81fp-45;
p=p*x+0x1.ae7f3e733b81fp-41;
p=p*x+0x1.93974a8c07c9dp-37;
p=p*x+0x1.6124613a86d09p-33;
p=p*x+0x1.1eed8eff8d898p-29;
p=p*x+0x1.ae64567f544e4p-26;
p=p*x+0x1.27e4fb7789f5cp-22;
p=p*x+0x1.71de3a556c734p-19;
p=p*x+0x1.a01a01a01a01ap-16;
p=p*x+0x1.a01a01a01a01ap-13;
p=p*x+0x1.6c16c16c16c17p-10;
p=p*x+0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
p=p*x+0x1.0000000000000p-1;
return p;}
return (expm1(x)-x)/(x*x);}
static double f2_34(double x) { if(x==0.) return 0x1.0000000000000p-1;
if(fabs(x)<=0x1.0000000000000p-4) { double p=0x1.ae7f3e733b81fp-45;
p=p*x+0x1.ae7f3e733b81fp-41;
p=p*x+0x1.93974a8c07c9dp-37;
p=p*x+0x1.6124613a86d09p-33;
p=p*x+0x1.1eed8eff8d898p-29;
p=p*x+0x1.ae64567f544e4p-26;
p=p*x+0x1.27e4fb7789f5cp-22;
p=p*x+0x1.71de3a556c734p-19;
p=p*x+0x1.a01a01a01a01ap-16;
p=p*x+0x1.a01a01a01a01ap-13;
p=p*x+0x1.6c16c16c16c17p-10;
p=p*x+0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
p=p*x+0x1.0000000000000p-1;
return p;}
return (expm1(x)-x)/(x*x);}
static double f2_35(double x) { if(x==0.) return 0x1.0000000000000p-1;
if(fabs(x)<=0x1.0000000000000p-2) { double p=0x1.ae7f3e733b81fp-45;
p=p*x+0x1.ae7f3e733b81fp-41;
p=p*x+0x1.93974a8c07c9dp-37;
p=p*x+0x1.6124613a86d09p-33;
p=p*x+0x1.1eed8eff8d898p-29;
p=p*x+0x1.ae64567f544e4p-26;
p=p*x+0x1.27e4fb7789f5cp-22;
p=p*x+0x1.71de3a556c734p-19;
p=p*x+0x1.a01a01a01a01ap-16;
p=p*x+0x1.a01a01a01a01ap-13;
p=p*x+0x1.6c16c16c16c17p-10;
p=p*x+0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
p=p*x+0x1.0000000000000p-1;
return p;}
return (expm1(x)-x)/(x*x);}
static double f2_36(double x) { if(x==0.) return 0x1.0000000000000p-1;
if(fabs(x)<=0x1.0000000000000p-1) { double p=0x1.ae7f3e733b81fp-45;
p=p*x+0x1.ae7f3e733b81fp-41;
p=p*x+0x1.93974a8c07c9dp-37;
p=p*x+0x1.6124613a86d09p-33;
p=p*x+0x1.1eed8eff8d898p-29;
p=p*x+0x1.ae64567f544e4p-26;
p=p*x+0x1.27e4fb7789f5cp-22;
p=p*x+0x1.71de3a556c734p-19;
p=p*x+0x1.a01a01a01a01ap-16;
p=p*x+0x1.a01a01a01a01ap-13;
p=p*x+0x1.6c16c16c16c17p-10;
p=p*x+0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
p=p*x+0x1.0000000000000p-1;
return p;}
return (expm1(x)-x)/(x*x);}
static double f2_37(double x) { if(x==0.) return 0x1.0000000000000p-1;
if(fabs(x)<=0x1.0000000000000p+0) { double p=0x1.ae7f3e733b81fp-45;
p=p*x+0x1.ae7f3e733b81fp-41;
p=p*x+0x1.93974a8c07c9dp-37;
p=p*x+0x1.6124613a86d09p-33;
p=p*x+0x1.1eed8eff8d898p-29;
p=p*x+0x1.ae64567f544e4p-26;
p=p*x+0x1.27e4fb7789f5cp-22;
p=p*x+0x1.71de3a556c734p-19;
p=p*x+0x1.a01a01a01a01ap-16;
p=p*x+0x1.a01a01a01a01ap-13;
p=p*x+0x1.6c16c16c16c17p-10;
p=p*x+0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
p=p*x+0x1.0000000000000p-1;
return p;}
return (expm1(x)-x)/(x*x);}
static double f2_38(double x) { if(x==0.) return 0x1.0000000000000p-1;
if(fabs(x)<=0x1.0000000000000p+1) { double p=0x1.ae7f3e733b81fp-45;
p=p*x+0x1.ae7f3e733b81fp-41;
p=p*x+0x1.93974a8c07c9dp-37;
p=p*x+0x1.6124613a86d09p-33;
p=p*x+0x1.1eed8eff8d898p-29;
p=p*x+0x1.ae64567f544e4p-26;
p=p*x+0x1.27e4fb7789f5cp-22;
p=p*x+0x1.71de3a556c734p-19;
p=p*x+0x1.a01a01a01a01ap-16;
p=p*x+0x1.a01a01a01a01ap-13;
p=p*x+0x1.6c16c16c16c17p-10;
p=p*x+0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
p=p*x+0x1.0000000000000p-1;
return p;}
return (expm1(x)-x)/(x*x);}
static double f2_39(double x) { if(x==0.) return 0x1.0000000000000p-1;
if(fabs(x)<=0x1.0000000000000p-6) { double p=0x1.6827863b97d97p-53;
p=p*x+0x1.952c77030ad4ap-49;
p=p*x+0x1.ae7f3e733b81fp-45;
p=p*x+0x1.ae7f3e733b81fp-41;
p=p*x+0x1.93974a8c07c9dp-37;
p=p*x+0x1.6124613a86d09p-33;
p=p*x+0x1.1eed8eff8d898p-29;
p=p*x+0x1.ae64567f544e4p-26;
p=p*x+0x1.27e4fb7789f5cp-22;
p=p*x+0x1.71de3a556c734p-19;
p=p*x+0x1.a01a01a01a01ap-16;
p=p*x+0x1.a01a01a01a01ap-13;
p=p*x+0x1.6c16c16c16c17p-10;
p=p*x+0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
p=p*x+0x1.0000000000000p-1;
return p;}
return (expm1(x)-x)/(x*x);}
static double f2_40(double x) { if(x==0.) return 0x1.0000000000000p-1;
if(fabs(x)<=0x1.0000000000000p-4) { double p=0x1.6827863b97d97p-53;
p=p*x+0x1.952c77030ad4ap-49;
p=p*x+0x1.ae7f3e733b81fp-45;
p=p*x+0x1.ae7f3e733b81fp-41;
p=p*x+0x1.93974a8c07c9dp-37;
p=p*x+0x1.6124613a86d09p-33;
p=p*x+0x1.1eed8eff8d898p-29;
p=p*x+0x1.ae64567f544e4p-26;
p=p*x+0x1.27e4fb7789f5cp-22;
p=p*x+0x1.71de3a556c734p-19;
p=p*x+0x1.a01a01a01a01ap-16;
p=p*x+0x1.a01a01a01a01ap-13;
p=p*x+0x1.6c16c16c16c17p-10;
p=p*x+0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
p=p*x+0x1.0000000000000p-1;
return p;}
return (expm1(x)-x)/(x*x);}
static double f2_41(double x) { if(x==0.) return 0x1.0000000000000p-1;
if(fabs(x)<=0x1.0000000000000p-2) { double p=0x1.6827863b97d97p-53;
p=p*x+0x1.952c77030ad4ap-49;
p=p*x+0x1.ae7f3e733b81fp-45;
p=p*x+0x1.ae7f3e733b81fp-41;
p=p*x+0x1.93974a8c07c9dp-37;
p=p*x+0x1.6124613a86d09p-33;
p=p*x+0x1.1eed8eff8d898p-29;
p=p*x+0x1.ae64567f544e4p-26;
p=p*x+0x1.27e4fb7789f5cp-22;
p=p*x+0x1.71de3a556c734p-19;
p=p*x+0x1.a01a01a01a01ap-16;
p=p*x+0x1.a01a01a01a01ap-13;
p=p*x+0x1.6c16c16c16c17p-10;
p=p*x+0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
p=p*x+0x1.0000000000000p-1;
return p;}
return (expm1(x)-x)/(x*x);}
static double f2_42(double x) { if(x==0.) return 0x1.0000000000000p-1;
if(fabs(x)<=0x1.0000000000000p-1) { double p=0x1.6827863b97d97p-53;
p=p*x+0x1.952c77030ad4ap-49;
p=p*x+0x1.ae7f3e733b81fp-45;
p=p*x+0x1.ae7f3e733b81fp-41;
p=p*x+0x1.93974a8c07c9dp-37;
p=p*x+0x1.6124613a86d09p-33;
p=p*x+0x1.1eed8eff8d898p-29;
p=p*x+0x1.ae64567f544e4p-26;
p=p*x+0x1.27e4fb7789f5cp-22;
p=p*x+0x1.71de3a556c734p-19;
p=p*x+0x1.a01a01a01a01ap-16;
p=p*x+0x1.a01a01a01a01ap-13;
p=p*x+0x1.6c16c16c16c17p-10;
p=p*x+0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
p=p*x+0x1.0000000000000p-1;
return p;}
return (expm1(x)-x)/(x*x);}
static double f2_43(double x) { if(x==0.) return 0x1.0000000000000p-1;
if(fabs(x)<=0x1.0000000000000p+0) { double p=0x1.6827863b97d97p-53;
p=p*x+0x1.952c77030ad4ap-49;
p=p*x+0x1.ae7f3e733b81fp-45;
p=p*x+0x1.ae7f3e733b81fp-41;
p=p*x+0x1.93974a8c07c9dp-37;
p=p*x+0x1.6124613a86d09p-33;
p=p*x+0x1.1eed8eff8d898p-29;
p=p*x+0x1.ae64567f544e4p-26;
p=p*x+0x1.27e4fb7789f5cp-22;
p=p*x+0x1.71de3a556c734p-19;
p=p*x+0x1.a01a01a01a01ap-16;
p=p*x+0x1.a01a01a01a01ap-13;
p=p*x+0x1.6c16c16c16c17p-10;
p=p*x+0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
p=p*x+0x1.0000000000000p-1;
return p;}
return (expm1(x)-x)/(x*x);}
static double f2_44(double x) { if(x==0.) return 0x1.0000000000000p-1;
if(fabs(x)<=0x1.0000000000000p+1) { double p=0x1.6827863b97d97p-53;
p=p*x+0x1.952c77030ad4ap-49;
p=p*x+0x1.ae7f3e733b81fp-45;
p=p*x+0x1.ae7f3e733b81fp-41;
p=p*x+0x1.93974a8c07c9dp-37;
p=p*x+0x1.6124613a86d09p-33;
p=p*x+0x1.1eed8eff8d898p-29;
p=p*x+0x1.ae64567f544e4p-26;
p=p*x+0x1.27e4fb7789f5cp-22;
p=p*x+0x1.71de3a556c734p-19;
p=p*x+0x1.a01a01a01a01ap-16;
p=p*x+0x1.a01a01a01a01ap-13;
p=p*x+0x1.6c16c16c16c17p-10;
p=p*x+0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
p=p*x+0x1.0000000000000p-1;
return p;}
return (expm1(x)-x)/(x*x);}
static double f2_45(double x) { if(x==0.) return 0x1.0000000000000p-1;
if(fabs(x)<=0x1.0000000000000p-6) { double p=0x1.e542ba4020225p-62;
p=p*x+0x1.2f49b46814157p-57;
p=p*x+0x1.6827863b97d97p-53;
p=p*x+0x1.952c77030ad4ap-49;
p=p*x+0x1.ae7f3e733b81fp-45;
p=p*x+0x1.ae7f3e733b81fp-41;
p=p*x+0x1.93974a8c07c9dp-37;
p=p*x+0x1.6124613a86d09p-33;
p=p*x+0x1.1eed8eff8d898p-29;
p=p*x+0x1.ae64567f544e4p-26;
p=p*x+0x1.27e4fb7789f5cp-22;
p=p*x+0x1.71de3a556c734p-19;
p=p*x+0x1.a01a01a01a01ap-16;
p=p*x+0x1.a01a01a01a01ap-13;
p=p*x+0x1.6c16c16c16c17p-10;
p=p*x+0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
p=p*x+0x1.0000000000000p-1;
return p;}
return (expm1(x)-x)/(x*x);}
static double f2_46(double x) { if(x==0.) return 0x1.0000000000000p-1;
if(fabs(x)<=0x1.0000000000000p-4) { double p=0x1.e542ba4020225p-62;
p=p*x+0x1.2f49b46814157p-57;
p=p*x+0x1.6827863b97d97p-53;
p=p*x+0x1.952c77030ad4ap-49;
p=p*x+0x1.ae7f3e733b81fp-45;
p=p*x+0x1.ae7f3e733b81fp-41;
p=p*x+0x1.93974a8c07c9dp-37;
p=p*x+0x1.6124613a86d09p-33;
p=p*x+0x1.1eed8eff8d898p-29;
p=p*x+0x1.ae64567f544e4p-26;
p=p*x+0x1.27e4fb7789f5cp-22;
p=p*x+0x1.71de3a556c734p-19;
p=p*x+0x1.a01a01a01a01ap-16;
p=p*x+0x1.a01a01a01a01ap-13;
p=p*x+0x1.6c16c16c16c17p-10;
p=p*x+0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
p=p*x+0x1.0000000000000p-1;
return p;}
return (expm1(x)-x)/(x*x);}
static double f2_47(double x) { if(x==0.) return 0x1.0000000000000p-1;
if(fabs(x)<=0x1.0000000000000p-2) { double p=0x1.e542ba4020225p-62;
p=p*x+0x1.2f49b46814157p-57;
p=p*x+0x1.6827863b97d97p-53;
p=p*x+0x1.952c77030ad4ap-49;
p=p*x+0x1.ae7f3e733b81fp-45;
p=p*x+0x1.ae7f3e733b81fp-41;
p=p*x+0x1.93974a8c07c9dp-37;
p=p*x+0x1.6124613a86d09p-33;
p=p*x+0x1.1eed8eff8d898p-29;
p=p*x+0x1.ae64567f544e4p-26;
p=p*x+0x1.27e4fb7789f5cp-22;
p=p*x+0x1.71de3a556c734p-19;
p=p*x+0x1.a01a01a01a01ap-16;
p=p*x+0x1.a01a01a01a01ap-13;
p=p*x+0x1.6c16c16c16c17p-10;
p=p*x+0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
p=p*x+0x1.0000000000000p-1;
return p;}
return (expm1(x)-x)/(x*x);}
static double f2_48(double x) { if(x==0.) return 0x1.0000000000000p-1;
if(fabs(x)<=0x1.0000000000000p-1) { double p=0x1.e542ba4020225p-62;
p=p*x+0x1.2f49b46814157p-57;
p=p*x+0x1.6827863b97d97p-53;
p=p*x+0x1.952c77030ad4ap-49;
p=p*x+0x1.ae7f3e733b81fp-45;
p=p*x+0x1.ae7f3e733b81fp-41;
p=p*x+0x1.93974a8c07c9dp-37;
p=p*x+0x1.6124613a86d09p-33;
p=p*x+0x1.1eed8eff8d898p-29;
p=p*x+0x1.ae64567f544e4p-26;
p=p*x+0x1.27e4fb7789f5cp-22;
p=p*x+0x1.71de3a556c734p-19;
p=p*x+0x1.a01a01a01a01ap-16;
p=p*x+0x1.a01a01a01a01ap-13;
p=p*x+0x1.6c16c16c16c17p-10;
p=p*x+0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
p=p*x+0x1.0000000000000p-1;
return p;}
return (expm1(x)-x)/(x*x);}
static double f2_49(double x) { if(x==0.) return 0x1.0000000000000p-1;
if(fabs(x)<=0x1.0000000000000p+0) { double p=0x1.e542ba4020225p-62;
p=p*x+0x1.2f49b46814157p-57;
p=p*x+0x1.6827863b97d97p-53;
p=p*x+0x1.952c77030ad4ap-49;
p=p*x+0x1.ae7f3e733b81fp-45;
p=p*x+0x1.ae7f3e733b81fp-41;
p=p*x+0x1.93974a8c07c9dp-37;
p=p*x+0x1.6124613a86d09p-33;
p=p*x+0x1.1eed8eff8d898p-29;
p=p*x+0x1.ae64567f544e4p-26;
p=p*x+0x1.27e4fb7789f5cp-22;
p=p*x+0x1.71de3a556c734p-19;
p=p*x+0x1.a01a01a01a01ap-16;
p=p*x+0x1.a01a01a01a01ap-13;
p=p*x+0x1.6c16c16c16c17p-10;
p=p*x+0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
p=p*x+0x1.0000000000000p-1;
return p;}
return (expm1(x)-x)/(x*x);}
static double f2_50(double x) { if(x==0.) return 0x1.0000000000000p-1;
if(fabs(x)<=0x1.0000000000000p+1) { double p=0x1.e542ba4020225p-62;
p=p*x+0x1.2f49b46814157p-57;
p=p*x+0x1.6827863b97d97p-53;
p=p*x+0x1.952c77030ad4ap-49;
p=p*x+0x1.ae7f3e733b81fp-45;
p=p*x+0x1.ae7f3e733b81fp-41;
p=p*x+0x1.93974a8c07c9dp-37;
p=p*x+0x1.6124613a86d09p-33;
p=p*x+0x1.1eed8eff8d898p-29;
p=p*x+0x1.ae64567f544e4p-26;
p=p*x+0x1.27e4fb7789f5cp-22;
p=p*x+0x1.71de3a556c734p-19;
p=p*x+0x1.a01a01a01a01ap-16;
p=p*x+0x1.a01a01a01a01ap-13;
p=p*x+0x1.6c16c16c16c17p-10;
p=p*x+0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
p=p*x+0x1.0000000000000p-1;
return p;}
return (expm1(x)-x)/(x*x);}
static double f3_0(double x) { if(x==0.) return 0x1.5555555555555p-3;
if(fabs(x)<=0x1.0000000000000p+0) { double p=0x1.71b8ef6dcf572p-66;
p=p*x+0x1.e542ba4020225p-62;
p=p*x+0x1.2f49b46814157p-57;
p=p*x+0x1.6827863b97d97p-53;
p=p*x+0x1.952c77030ad4ap-49;
p=p*x+0x1.ae7f3e733b81fp-45;
p=p*x+0x1.ae7f3e733b81fp-41;
p=p*x+0x1.93974a8c07c9dp-37;
p=p*x+0x1.6124613a86d09p-33;
p=p*x+0x1.1eed8eff8d898p-29;
p=p*x+0x1.ae64567f544e4p-26;
p=p*x+0x1.27e4fb7789f5cp-22;
p=p*x+0x1.71de3a556c734p-19;
p=p*x+0x1.a01a01a01a01ap-16;
p=p*x+0x1.a01a01a01a01ap-13;
p=p*x+0x1.6c16c16c16c17p-10;
p=p*x+0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
return p;}
return (expm1(x)-x-0.5*x*x)/(x*x*x);}
static double f3_1(double x) { if(x==0.) return 0x1.5555555555555p-3;
return ((exp(x)-1.)-x-0.5*x*x)/(x*x*x);}
static double f3_2(double x) { if(x==0.) return 0x1.5555555555555p-3;
return (expm1(x)-x-0.5*x*x)/(x*x*x);}
static double f3_3(double x) { if(x==0.) return 0x1.5555555555555p-3;
if(fabs(x)<=0x1.0000000000000p-6) { double p=0x1.a01a01a01a01ap-13;
p=p*x+0x1.6c16c16c16c17p-10;
p=p*x+0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
return p;}
return (expm1(x)-x-0.5*x*x)/(x*x*x);}
static double f3_4(double x) { if(x==0.) return 0x1.5555555555555p-3;
if(fabs(x)<=0x1.0000000000000p-4) { double p=0x1.a01a01a01a01ap-13;
p=p*x+0x1.6c16c16c16c17p-10;
p=p*x+0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
return p;}
return (expm1(x)-x-0.5*x*x)/(x*x*x);}
static double f3_5(double x) { if(x==0.) return 0x1.5555555555555p-3;
if(fabs(x)<=0x1.0000000000000p-2) { double p=0x1.a01a01a01a01ap-13;
p=p*x+0x1.6c16c16c16c17p-10;
p=p*x+0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
return p;}
return (expm1(x)-x-0.5*x*x)/(x*x*x);}
static double f3_6(double x) { if(x==0.) return 0x1.5555555555555p-3;
if(fabs(x)<=0x1.0000000000000p-1) { double p=0x1.a01a01a01a01ap-13;
p=p*x+0x1.6c16c16c16c17p-10;
p=p*x+0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
return p;}
return (expm1(x)-x-0.5*x*x)/(x*x*x);}
static double f3_7(double x) { if(x==0.) return 0x1.5555555555555p-3;
if(fabs(x)<=0x1.0000000000000p+0) { double p=0x1.a01a01a01a01ap-13;
p=p*x+0x1.6c16c16c16c17p-10;
p=p*x+0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
return p;}
return (expm1(x)-x-0.5*x*x)/(x*x*x);}
static double f3_8(double x) { if(x==0.) return 0x1.5555555555555p-3;
if(fabs(x)<=0x1.0000000000000p+1) { double p=0x1.a01a01a01a01ap-13;
p=p*x+0x1.6c16c16c16c17p-10;
p=p*x+0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
return p;}
return (expm1(x)-x-0.5*x*x)/(x*x*x);}
static double f3_9(double x) { if(x==0.) return 0x1.5555555555555p-3;
if(fabs(x)<=0x1.0000000000000p-6) { double p=0x1.71de3a556c734p-19;
p=p*x+0x1.a01a01a01a01ap-16;
p=p*x+0x1.a01a01a01a01ap-13;
p=p*x+0x1.6c16c16c16c17p-10;
p=p*x+0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
return p;}
return (expm1(x)-x-0.5*x*x)/(x*x*x);}
static double f3_10(double x) { if(x==0.) return 0x1.5555555555555p-3;
if(fabs(x)<=0x1.0000000000000p-4) { double p=0x1.71de3a556c734p-19;
p=p*x+0x1.a01a01a01a01ap-16;
p=p*x+0x1.a01a01a01a01ap-13;
p=p*x+0x1.6c16c16c16c17p-10;
p=p*x+0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
return p;}
return (expm1(x)-x-0.5*x*x)/(x*x*x);}
static double f3_11(double x) { if(x==0.) return 0x1.5555555555555p-3;
if(fabs(x)<=0x1.0000000000000p-2) { double p=0x1.71de3a556c734p-19;
p=p*x+0x1.a01a01a01a01ap-16;
p=p*x+0x1.a01a01a01a01ap-13;
p=p*x+0x1.6c16c16c16c17p-10;
p=p*x+0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
return p;}
return (expm1(x)-x-0.5*x*x)/(x*x*x);}
static double f3_12(double x) { if(x==0.) return 0x1.5555555555555p-3;
if(fabs(x)<=0x1.0000000000000p-1) { double p=0x1.71de3a556c734p-19;
p=p*x+0x1.a01a01a01a01ap-16;
p=p*x+0x1.a01a01a01a01ap-13;
p=p*x+0x1.6c16c16c16c17p-10;
p=p*x+0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
return p;}
return (expm1(x)-x-0.5*x*x)/(x*x*x);}
static double f3_13(double x) { if(x==0.) return 0x1.5555555555555p-3;
if(fabs(x)<=0x1.0000000000000p+0) { double p=0x1.71de3a556c734p-19;
p=p*x+0x1.a01a01a01a01ap-16;
p=p*x+0x1.a01a01a01a01ap-13;
p=p*x+0x1.6c16c16c16c17p-10;
p=p*x+0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
return p;}
return (expm1(x)-x-0.5*x*x)/(x*x*x);}
static double f3_14(double x) { if(x==0.) return 0x1.5555555555555p-3;
if(fabs(x)<=0x1.0000000000000p+1) { double p=0x1.71de3a556c734p-19;
p=p*x+0x1.a01a01a01a01ap-16;
p=p*x+0x1.a01a01a01a01ap-13;
p=p*x+0x1.6c16c16c16c17p-10;
p=p*x+0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
return p;}
return (expm1(x)-x-0.5*x*x)/(x*x*x);}
static double f3_15(double x) { if(x==0.) return 0x1.5555555555555p-3;
if(fabs(x)<=0x1.0000000000000p-6) { double p=0x1.ae64567f544e4p-26;
p=p*x+0x1.27e4fb7789f5cp-22;
p=p*x+0x1.71de3a556c734p-19;
p=p*x+0x1.a01a01a01a01ap-16;
p=p*x+0x1.a01a01a01a01ap-13;
p=p*x+0x1.6c16c16c16c17p-10;
p=p*x+0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
return p;}
return (expm1(x)-x-0.5*x*x)/(x*x*x);}
static double f3_16(double x) { if(x==0.) return 0x1.5555555555555p-3;
if(fabs(x)<=0x1.0000000000000p-4) { double p=0x1.ae64567f544e4p-26;
p=p*x+0x1.27e4fb7789f5cp-22;
p=p*x+0x1.71de3a556c734p-19;
p=p*x+0x1.a01a01a01a01ap-16;
p=p*x+0x1.a01a01a01a01ap-13;
p=p*x+0x1.6c16c16c16c17p-10;
p=p*x+0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
return p;}
return (expm1(x)-x-0.5*x*x)/(x*x*x);}
static double f3_17(double x) { if(x==0.) return 0x1.5555555555555p-3;
if(fabs(x)<=0x1.0000000000000p-2) { double p=0x1.ae64567f544e4p-26;
p=p*x+0x1.27e4fb7789f5cp-22;
p=p*x+0x1.71de3a556c734p-19;
p=p*x+0x1.a01a01a01a01ap-16;
p=p*x+0x1.a01a01a01a01ap-13;
p=p*x+0x1.6c16c16c16c17p-10;
p=p*x+0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
return p;}
return (expm1(x)-x-0.5*x*x)/(x*x*x);}
static double f3_18(double x) { if(x==0.) return 0x1.5555555555555p-3;
if(fabs(x)<=0x1.0000000000000p-1) { double p=0x1.ae64567f544e4p-26;
p=p*x+0x1.27e4fb7789f5cp-22;
p=p*x+0x1.71de3a556c734p-19;
p=p*x+0x1.a01a01a01a01ap-16;
p=p*x+0x1.a01a01a01a01ap-13;
p=p*x+0x1.6c16c16c16c17p-10;
p=p*x+0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
return p;}
return (expm1(x)-x-0.5*x*x)/(x*x*x);}
static double f3_19(double x) { if(x==0.) return 0x1.5555555555555p-3;
if(fabs(x)<=0x1.0000000000000p+0) { double p=0x1.ae64567f544e4p-26;
p=p*x+0x1.27e4fb7789f5cp-22;
p=p*x+0x1.71de3a556c734p-19;
p=p*x+0x1.a01a01a01a01ap-16;
p=p*x+0x1.a01a01a01a01ap-13;
p=p*x+0x1.6c16c16c16c17p-10;
p=p*x+0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
return p;}
return (expm1(x)-x-0.5*x*x)/(x*x*x);}
static double f3_20(double x) { if(x==0.) return 0x1.5555555555555p-3;
if(fabs(x)<=0x1.0000000000000p+1) { double p=0x1.ae64567f544e4p-26;
p=p*x+0x1.27e4fb7789f5cp-22;
p=p*x+0x1.71de3a556c734p-19;
p=p*x+0x1.a01a01a01a01ap-16;
p=p*x+0x1.a01a01a01a01ap-13;
p=p*x+0x1.6c16c16c16c17p-10;
p=p*x+0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
return p;}
return (expm1(x)-x-0.5*x*x)/(x*x*x);}
static double f3_21(double x) { if(x==0.) return 0x1.5555555555555p-3;
if(fabs(x)<=0x1.0000000000000p-6) { double p=0x1.6124613a86d09p-33;
p=p*x+0x1.1eed8eff8d898p-29;
p=p*x+0x1.ae64567f544e4p-26;
p=p*x+0x1.27e4fb7789f5cp-22;
p=p*x+0x1.71de3a556c734p-19;
p=p*x+0x1.a01a01a01a01ap-16;
p=p*x+0x1.a01a01a01a01ap-13;
p=p*x+0x1.6c16c16c16c17p-10;
p=p*x+0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
return p;}
return (expm1(x)-x-0.5*x*x)/(x*x*x);}
static double f3_22(double x) { if(x==0.) return 0x1.5555555555555p-3;
if(fabs(x)<=0x1.0000000000000p-4) { double p=0x1.6124613a86d09p-33;
p=p*x+0x1.1eed8eff8d898p-29;
p=p*x+0x1.ae64567f544e4p-26;
p=p*x+0x1.27e4fb7789f5cp-22;
p=p*x+0x1.71de3a556c734p-19;
p=p*x+0x1.a01a01a01a01ap-16;
p=p*x+0x1.a01a01a01a01ap-13;
p=p*x+0x1.6c16c16c16c17p-10;
p=p*x+0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
return p;}
return (expm1(x)-x-0.5*x*x)/(x*x*x);}
static double f3_23(double x) { if(x==0.) return 0x1.5555555555555p-3;
if(fabs(x)<=0x1.0000000000000p-2) { double p=0x1.6124613a86d09p-33;
p=p*x+0x1.1eed8eff8d898p-29;
p=p*x+0x1.ae64567f544e4p-26;
p=p*x+0x1.27e4fb7789f5cp-22;
p=p*x+0x1.71de3a556c734p-19;
p=p*x+0x1.a01a01a01a01ap-16;
p=p*x+0x1.a01a01a01a01ap-13;
p=p*x+0x1.6c16c16c16c17p-10;
p=p*x+0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
return p;}
return (expm1(x)-x-0.5*x*x)/(x*x*x);}
static double f3_24(double x) { if(x==0.) return 0x1.5555555555555p-3;
if(fabs(x)<=0x1.0000000000000p-1) { double p=0x1.6124613a86d09p-33;
p=p*x+0x1.1eed8eff8d898p-29;
p=p*x+0x1.ae64567f544e4p-26;
p=p*x+0x1.27e4fb7789f5cp-22;
p=p*x+0x1.71de3a556c734p-19;
p=p*x+0x1.a01a01a01a01ap-16;
p=p*x+0x1.a01a01a01a01ap-13;
p=p*x+0x1.6c16c16c16c17p-10;
p=p*x+0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
return p;}
return (expm1(x)-x-0.5*x*x)/(x*x*x);}
static double f3_25(double x) { if(x==0.) return 0x1.5555555555555p-3;
if(fabs(x)<=0x1.0000000000000p+0) { double p=0x1.6124613a86d09p-33;
p=p*x+0x1.1eed8eff8d898p-29;
p=p*x+0x1.ae64567f544e4p-26;
p=p*x+0x1.27e4fb7789f5cp-22;
p=p*x+0x1.71de3a556c734p-19;
p=p*x+0x1.a01a01a01a01ap-16;
p=p*x+0x1.a01a01a01a01ap-13;
p=p*x+0x1.6c16c16c16c17p-10;
p=p*x+0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
return p;}
return (expm1(x)-x-0.5*x*x)/(x*x*x);}
static double f3_26(double x) { if(x==0.) return 0x1.5555555555555p-3;
if(fabs(x)<=0x1.0000000000000p+1) { double p=0x1.6124613a86d09p-33;
p=p*x+0x1.1eed8eff8d898p-29;
p=p*x+0x1.ae64567f544e4p-26;
p=p*x+0x1.27e4fb7789f5cp-22;
p=p*x+0x1.71de3a556c734p-19;
p=p*x+0x1.a01a01a01a01ap-16;
p=p*x+0x1.a01a01a01a01ap-13;
p=p*x+0x1.6c16c16c16c17p-10;
p=p*x+0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
return p;}
return (expm1(x)-x-0.5*x*x)/(x*x*x);}
static double f3_27(double x) { if(x==0.) return 0x1.5555555555555p-3;
if(fabs(x)<=0x1.0000000000000p-6) { double p=0x1.ae7f3e733b81fp-41;
p=p*x+0x1.93974a8c07c9dp-37;
p=p*x+0x1.6124613a86d09p-33;
p=p*x+0x1.1eed8eff8d898p-29;
p=p*x+0x1.ae64567f544e4p-26;
p=p*x+0x1.27e4fb7789f5cp-22;
p=p*x+0x1.71de3a556c734p-19;
p=p*x+0x1.a01a01a01a01ap-16;
p=p*x+0x1.a01a01a01a01ap-13;
p=p*x+0x1.6c16c16c16c17p-10;
p=p*x+0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
return p;}
return (expm1(x)-x-0.5*x*x)/(x*x*x);}
static double f3_28(double x) { if(x==0.) return 0x1.5555555555555p-3;
if(fabs(x)<=0x1.0000000000000p-4) { double p=0x1.ae7f3e733b81fp-41;
p=p*x+0x1.93974a8c07c9dp-37;
p=p*x+0x1.6124613a86d09p-33;
p=p*x+0x1.1eed8eff8d898p-29;
p=p*x+0x1.ae64567f544e4p-26;
p=p*x+0x1.27e4fb7789f5cp-22;
p=p*x+0x1.71de3a556c734p-19;
p=p*x+0x1.a01a01a01a01ap-16;
p=p*x+0x1.a01a01a01a01ap-13;
p=p*x+0x1.6c16c16c16c17p-10;
p=p*x+0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
return p;}
return (expm1(x)-x-0.5*x*x)/(x*x*x);}
static double f3_29(double x) { if(x==0.) return 0x1.5555555555555p-3;
if(fabs(x)<=0x1.0000000000000p-2) { double p=0x1.ae7f3e733b81fp-41;
p=p*x+0x1.93974a8c07c9dp-37;
p=p*x+0x1.6124613a86d09p-33;
p=p*x+0x1.1eed8eff8d898p-29;
p=p*x+0x1.ae64567f544e4p-26;
p=p*x+0x1.27e4fb7789f5cp-22;
p=p*x+0x1.71de3a556c734p-19;
p=p*x+0x1.a01a01a01a01ap-16;
p=p*x+0x1.a01a01a01a01ap-13;
p=p*x+0x1.6c16c16c16c17p-10;
p=p*x+0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
return p;}
return (expm1(x)-x-0.5*x*x)/(x*x*x);}
static double f3_30(double x) { if(x==0.) return 0x1.5555555555555p-3;
if(fabs(x)<=0x1.0000000000000p-1) { double p=0x1.ae7f3e733b81fp-41;
p=p*x+0x1.93974a8c07c9dp-37;
p=p*x+0x1.6124613a86d09p-33;
p=p*x+0x1.1eed8eff8d898p-29;
p=p*x+0x1.ae64567f544e4p-26;
p=p*x+0x1.27e4fb7789f5cp-22;
p=p*x+0x1.71de3a556c734p-19;
p=p*x+0x1.a01a01a01a01ap-16;
p=p*x+0x1.a01a01a01a01ap-13;
p=p*x+0x1.6c16c16c16c17p-10;
p=p*x+0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
return p;}
return (expm1(x)-x-0.5*x*x)/(x*x*x);}
static double f3_31(double x) { if(x==0.) return 0x1.5555555555555p-3;
if(fabs(x)<=0x1.0000000000000p+0) { double p=0x1.ae7f3e733b81fp-41;
p=p*x+0x1.93974a8c07c9dp-37;
p=p*x+0x1.6124613a86d09p-33;
p=p*x+0x1.1eed8eff8d898p-29;
p=p*x+0x1.ae64567f544e4p-26;
p=p*x+0x1.27e4fb7789f5cp-22;
p=p*x+0x1.71de3a556c734p-19;
p=p*x+0x1.a01a01a01a01ap-16;
p=p*x+0x1.a01a01a01a01ap-13;
p=p*x+0x1.6c16c16c16c17p-10;
p=p*x+0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
return p;}
return (expm1(x)-x-0.5*x*x)/(x*x*x);}
static double f3_32(double x) { if(x==0.) return 0x1.5555555555555p-3;
if(fabs(x)<=0x1.0000000000000p+1) { double p=0x1.ae7f3e733b81fp-41;
p=p*x+0x1.93974a8c07c9dp-37;
p=p*x+0x1.6124613a86d09p-33;
p=p*x+0x1.1eed8eff8d898p-29;
p=p*x+0x1.ae64567f544e4p-26;
p=p*x+0x1.27e4fb7789f5cp-22;
p=p*x+0x1.71de3a556c734p-19;
p=p*x+0x1.a01a01a01a01ap-16;
p=p*x+0x1.a01a01a01a01ap-13;
p=p*x+0x1.6c16c16c16c17p-10;
p=p*x+0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
return p;}
return (expm1(x)-x-0.5*x*x)/(x*x*x);}
static double f3_33(double x) { if(x==0.) return 0x1.5555555555555p-3;
if(fabs(x)<=0x1.0000000000000p-6) { double p=0x1.952c77030ad4ap-49;
p=p*x+0x1.ae7f3e733b81fp-45;
p=p*x+0x1.ae7f3e733b81fp-41;
p=p*x+0x1.93974a8c07c9dp-37;
p=p*x+0x1.6124613a86d09p-33;
p=p*x+0x1.1eed8eff8d898p-29;
p=p*x+0x1.ae64567f544e4p-26;
p=p*x+0x1.27e4fb7789f5cp-22;
p=p*x+0x1.71de3a556c734p-19;
p=p*x+0x1.a01a01a01a01ap-16;
p=p*x+0x1.a01a01a01a01ap-13;
p=p*x+0x1.6c16c16c16c17p-10;
p=p*x+0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
return p;}
return (expm1(x)-x-0.5*x*x)/(x*x*x);}
static double f3_34(double x) { if(x==0.) return 0x1.5555555555555p-3;
if(fabs(x)<=0x1.0000000000000p-4) { double p=0x1.952c77030ad4ap-49;
p=p*x+0x1.ae7f3e733b81fp-45;
p=p*x+0x1.ae7f3e733b81fp-41;
p=p*x+0x1.93974a8c07c9dp-37;
p=p*x+0x1.6124613a86d09p-33;
p=p*x+0x1.1eed8eff8d898p-29;
p=p*x+0x1.ae64567f544e4p-26;
p=p*x+0x1.27e4fb7789f5cp-22;
p=p*x+0x1.71de3a556c734p-19;
p=p*x+0x1.a01a01a01a01ap-16;
p=p*x+0x1.a01a01a01a01ap-13;
p=p*x+0x1.6c16c16c16c17p-10;
p=p*x+0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
return p;}
return (expm1(x)-x-0.5*x*x)/(x*x*x);}
static double f3_35(double x) { if(x==0.) return 0x1.5555555555555p-3;
if(fabs(x)<=0x1.0000000000000p-2) { double p=0x1.952c77030ad4ap-49;
p=p*x+0x1.ae7f3e733b81fp-45;
p=p*x+0x1.ae7f3e733b81fp-41;
p=p*x+0x1.93974a8c07c9dp-37;
p=p*x+0x1.6124613a86d09p-33;
p=p*x+0x1.1eed8eff8d898p-29;
p=p*x+0x1.ae64567f544e4p-26;
p=p*x+0x1.27e4fb7789f5cp-22;
p=p*x+0x1.71de3a556c734p-19;
p=p*x+0x1.a01a01a01a01ap-16;
p=p*x+0x1.a01a01a01a01ap-13;
p=p*x+0x1.6c16c16c16c17p-10;
p=p*x+0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
return p;}
return (expm1(x)-x-0.5*x*x)/(x*x*x);}
static double f3_36(double x) { if(x==0.) return 0x1.5555555555555p-3;
if(fabs(x)<=0x1.0000000000000p-1) { double p=0x1.952c77030ad4ap-49;
p=p*x+0x1.ae7f3e733b81fp-45;
p=p*x+0x1.ae7f3e733b81fp-41;
p=p*x+0x1.93974a8c07c9dp-37;
p=p*x+0x1.6124613a86d09p-33;
p=p*x+0x1.1eed8eff8d898p-29;
p=p*x+0x1.ae64567f544e4p-26;
p=p*x+0x1.27e4fb7789f5cp-22;
p=p*x+0x1.71de3a556c734p-19;
p=p*x+0x1.a01a01a01a01ap-16;
p=p*x+0x1.a01a01a01a01ap-13;
p=p*x+0x1.6c16c16c16c17p-10;
p=p*x+0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
return p;}
return (expm1(x)-x-0.5*x*x)/(x*x*x);}
static double f3_37(double x) { if(x==0.) return 0x1.5555555555555p-3;
if(fabs(x)<=0x1.0000000000000p+0) { double p=0x1.952c77030ad4ap-49;
p=p*x+0x1.ae7f3e733b81fp-45;
p=p*x+0x1.ae7f3e733b81fp-41;
p=p*x+0x1.93974a8c07c9dp-37;
p=p*x+0x1.6124613a86d09p-33;
p=p*x+0x1.1eed8eff8d898p-29;
p=p*x+0x1.ae64567f544e4p-26;
p=p*x+0x1.27e4fb7789f5cp-22;
p=p*x+0x1.71de3a556c734p-19;
p=p*x+0x1.a01a01a01a01ap-16;
p=p*x+0x1.a01a01a01a01ap-13;
p=p*x+0x1.6c16c16c16c17p-10;
p=p*x+0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
return p;}
return (expm1(x)-x-0.5*x*x)/(x*x*x);}
static double f3_38(double x) { if(x==0.) return 0x1.5555555555555p-3;
if(fabs(x)<=0x1.0000000000000p+1) { double p=0x1.952c77030ad4ap-49;
p=p*x+0x1.ae7f3e733b81fp-45;
p=p*x+0x1.ae7f3e733b81fp-41;
p=p*x+0x1.93974a8c07c9dp-37;
p=p*x+0x1.6124613a86d09p-33;
p=p*x+0x1.1eed8eff8d898p-29;
p=p*x+0x1.ae64567f544e4p-26;
p=p*x+0x1.27e4fb7789f5cp-22;
p=p*x+0x1.71de3a556c734p-19;
p=p*x+0x1.a01a01a01a01ap-16;
p=p*x+0x1.a01a01a01a01ap-13;
p=p*x+0x1.6c16c16c16c17p-10;
p=p*x+0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
return p;}
return (expm1(x)-x-0.5*x*x)/(x*x*x);}
static double f3_39(double x) { if(x==0.) return 0x1.5555555555555p-3;
if(fabs(x)<=0x1.0000000000000p-6) { double p=0x1.2f49b46814157p-57;
p=p*x+0x1.6827863b97d97p-53;
p=p*x+0x1.952c77030ad4ap-49;
p=p*x+0x1.ae7f3e733b81fp-45;
p=p*x+0x1.ae7f3e733b81fp-41;
p=p*x+0x1.93974a8c07c9dp-37;
p=p*x+0x1.6124613a86d09p-33;
p=p*x+0x1.1eed8eff8d898p-29;
p=p*x+0x1.ae64567f544e4p-26;
p=p*x+0x1.27e4fb7789f5cp-22;
p=p*x+0x1.71de3a556c734p-19;
p=p*x+0x1.a01a01a01a01ap-16;
p=p*x+0x1.a01a01a01a01ap-13;
p=p*x+0x1.6c16c16c16c17p-10;
p=p*x+0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
return p;}
return (expm1(x)-x-0.5*x*x)/(x*x*x);}
static double f3_40(double x) { if(x==0.) return 0x1.5555555555555p-3;
if(fabs(x)<=0x1.0000000000000p-4) { double p=0x1.2f49b46814157p-57;
p=p*x+0x1.6827863b97d97p-53;
p=p*x+0x1.952c77030ad4ap-49;
p=p*x+0x1.ae7f3e733b81fp-45;
p=p*x+0x1.ae7f3e733b81fp-41;
p=p*x+0x1.93974a8c07c9dp-37;
p=p*x+0x1.6124613a86d09p-33;
p=p*x+0x1.1eed8eff8d898p-29;
p=p*x+0x1.ae64567f544e4p-26;
p=p*x+0x1.27e4fb7789f5cp-22;
p=p*x+0x1.71de3a556c734p-19;
p=p*x+0x1.a01a01a01a01ap-16;
p=p*x+0x1.a01a01a01a01ap-13;
p=p*x+0x1.6c16c16c16c17p-10;
p=p*x+0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
return p;}
return (expm1(x)-x-0.5*x*x)/(x*x*x);}
static double f3_41(double x) { if(x==0.) return 0x1.5555555555555p-3;
if(fabs(x)<=0x1.0000000000000p-2) { double p=0x1.2f49b46814157p-57;
p=p*x+0x1.6827863b97d97p-53;
p=p*x+0x1.952c77030ad4ap-49;
p=p*x+0x1.ae7f3e733b81fp-45;
p=p*x+0x1.ae7f3e733b81fp-41;
p=p*x+0x1.93974a8c07c9dp-37;
p=p*x+0x1.6124613a86d09p-33;
p=p*x+0x1.1eed8eff8d898p-29;
p=p*x+0x1.ae64567f544e4p-26;
p=p*x+0x1.27e4fb7789f5cp-22;
p=p*x+0x1.71de3a556c734p-19;
p=p*x+0x1.a01a01a01a01ap-16;
p=p*x+0x1.a01a01a01a01ap-13;
p=p*x+0x1.6c16c16c16c17p-10;
p=p*x+0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
return p;}
return (expm1(x)-x-0.5*x*x)/(x*x*x);}
static double f3_42(double x) { if(x==0.) return 0x1.5555555555555p-3;
if(fabs(x)<=0x1.0000000000000p-1) { double p=0x1.2f49b46814157p-57;
p=p*x+0x1.6827863b97d97p-53;
p=p*x+0x1.952c77030ad4ap-49;
p=p*x+0x1.ae7f3e733b81fp-45;
p=p*x+0x1.ae7f3e733b81fp-41;
p=p*x+0x1.93974a8c07c9dp-37;
p=p*x+0x1.6124613a86d09p-33;
p=p*x+0x1.1eed8eff8d898p-29;
p=p*x+0x1.ae64567f544e4p-26;
p=p*x+0x1.27e4fb7789f5cp-22;
p=p*x+0x1.71de3a556c734p-19;
p=p*x+0x1.a01a01a01a01ap-16;
p=p*x+0x1.a01a01a01a01ap-13;
p=p*x+0x1.6c16c16c16c17p-10;
p=p*x+0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
return p;}
return (expm1(x)-x-0.5*x*x)/(x*x*x);}
static double f3_43(double x) { if(x==0.) return 0x1.5555555555555p-3;
if(fabs(x)<=0x1.0000000000000p+0) { double p=0x1.2f49b46814157p-57;
p=p*x+0x1.6827863b97d97p-53;
p=p*x+0x1.952c77030ad4ap-49;
p=p*x+0x1.ae7f3e733b81fp-45;
p=p*x+0x1.ae7f3e733b81fp-41;
p=p*x+0x1.93974a8c07c9dp-37;
p=p*x+0x1.6124613a86d09p-33;
p=p*x+0x1.1eed8eff8d898p-29;
p=p*x+0x1.ae64567f544e4p-26;
p=p*x+0x1.27e4fb7789f5cp-22;
p=p*x+0x1.71de3a556c734p-19;
p=p*x+0x1.a01a01a01a01ap-16;
p=p*x+0x1.a01a01a01a01ap-13;
p=p*x+0x1.6c16c16c16c17p-10;
p=p*x+0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
return p;}
return (expm1(x)-x-0.5*x*x)/(x*x*x);}
static double f3_44(double x) { if(x==0.) return 0x1.5555555555555p-3;
if(fabs(x)<=0x1.0000000000000p+1) { double p=0x1.2f49b46814157p-57;
p=p*x+0x1.6827863b97d97p-53;
p=p*x+0x1.952c77030ad4ap-49;
p=p*x+0x1.ae7f3e733b81fp-45;
p=p*x+0x1.ae7f3e733b81fp-41;
p=p*x+0x1.93974a8c07c9dp-37;
p=p*x+0x1.6124613a86d09p-33;
p=p*x+0x1.1eed8eff8d898p-29;
p=p*x+0x1.ae64567f544e4p-26;
p=p*x+0x1.27e4fb7789f5cp-22;
p=p*x+0x1.71de3a556c734p-19;
p=p*x+0x1.a01a01a01a01ap-16;
p=p*x+0x1.a01a01a01a01ap-13;
p=p*x+0x1.6c16c16c16c17p-10;
p=p*x+0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
return p;}
return (expm1(x)-x-0.5*x*x)/(x*x*x);}
static double f3_45(double x) { if(x==0.) return 0x1.5555555555555p-3;
if(fabs(x)<=0x1.0000000000000p-6) { double p=0x1.71b8ef6dcf572p-66;
p=p*x+0x1.e542ba4020225p-62;
p=p*x+0x1.2f49b46814157p-57;
p=p*x+0x1.6827863b97d97p-53;
p=p*x+0x1.952c77030ad4ap-49;
p=p*x+0x1.ae7f3e733b81fp-45;
p=p*x+0x1.ae7f3e733b81fp-41;
p=p*x+0x1.93974a8c07c9dp-37;
p=p*x+0x1.6124613a86d09p-33;
p=p*x+0x1.1eed8eff8d898p-29;
p=p*x+0x1.ae64567f544e4p-26;
p=p*x+0x1.27e4fb7789f5cp-22;
p=p*x+0x1.71de3a556c734p-19;
p=p*x+0x1.a01a01a01a01ap-16;
p=p*x+0x1.a01a01a01a01ap-13;
p=p*x+0x1.6c16c16c16c17p-10;
p=p*x+0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
return p;}
return (expm1(x)-x-0.5*x*x)/(x*x*x);}
static double f3_46(double x) { if(x==0.) return 0x1.5555555555555p-3;
if(fabs(x)<=0x1.0000000000000p-4) { double p=0x1.71b8ef6dcf572p-66;
p=p*x+0x1.e542ba4020225p-62;
p=p*x+0x1.2f49b46814157p-57;
p=p*x+0x1.6827863b97d97p-53;
p=p*x+0x1.952c77030ad4ap-49;
p=p*x+0x1.ae7f3e733b81fp-45;
p=p*x+0x1.ae7f3e733b81fp-41;
p=p*x+0x1.93974a8c07c9dp-37;
p=p*x+0x1.6124613a86d09p-33;
p=p*x+0x1.1eed8eff8d898p-29;
p=p*x+0x1.ae64567f544e4p-26;
p=p*x+0x1.27e4fb7789f5cp-22;
p=p*x+0x1.71de3a556c734p-19;
p=p*x+0x1.a01a01a01a01ap-16;
p=p*x+0x1.a01a01a01a01ap-13;
p=p*x+0x1.6c16c16c16c17p-10;
p=p*x+0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
return p;}
return (expm1(x)-x-0.5*x*x)/(x*x*x);}
static double f3_47(double x) { if(x==0.) return 0x1.5555555555555p-3;
if(fabs(x)<=0x1.0000000000000p-2) { double p=0x1.71b8ef6dcf572p-66;
p=p*x+0x1.e542ba4020225p-62;
p=p*x+0x1.2f49b46814157p-57;
p=p*x+0x1.6827863b97d97p-53;
p=p*x+0x1.952c77030ad4ap-49;
p=p*x+0x1.ae7f3e733b81fp-45;
p=p*x+0x1.ae7f3e733b81fp-41;
p=p*x+0x1.93974a8c07c9dp-37;
p=p*x+0x1.6124613a86d09p-33;
p=p*x+0x1.1eed8eff8d898p-29;
p=p*x+0x1.ae64567f544e4p-26;
p=p*x+0x1.27e4fb7789f5cp-22;
p=p*x+0x1.71de3a556c734p-19;
p=p*x+0x1.a01a01a01a01ap-16;
p=p*x+0x1.a01a01a01a01ap-13;
p=p*x+0x1.6c16c16c16c17p-10;
p=p*x+0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
return p;}
return (expm1(x)-x-0.5*x*x)/(x*x*x);}
static double f3_48(double x) { if(x==0.) return 0x1.5555555555555p-3;
if(fabs(x)<=0x1.0000000000000p-1) { double p=0x1.71b8ef6dcf572p-66;
p=p*x+0x1.e542ba4020225p-62;
p=p*x+0x1.2f49b46814157p-57;
p=p*x+0x1.6827863b97d97p-53;
p=p*x+0x1.952c77030ad4ap-49;
p=p*x+0x1.ae7f3e733b81fp-45;
p=p*x+0x1.ae7f3e733b81fp-41;
p=p*x+0x1.93974a8c07c9dp-37;
p=p*x+0x1.6124613a86d09p-33;
p=p*x+0x1.1eed8eff8d898p-29;
p=p*x+0x1.ae64567f544e4p-26;
p=p*x+0x1.27e4fb7789f5cp-22;
p=p*x+0x1.71de3a556c734p-19;
p=p*x+0x1.a01a01a01a01ap-16;
p=p*x+0x1.a01a01a01a01ap-13;
p=p*x+0x1.6c16c16c16c17p-10;
p=p*x+0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
return p;}
return (expm1(x)-x-0.5*x*x)/(x*x*x);}
static double f3_49(double x) { if(x==0.) return 0x1.5555555555555p-3;
if(fabs(x)<=0x1.0000000000000p+0) { double p=0x1.71b8ef6dcf572p-66;
p=p*x+0x1.e542ba4020225p-62;
p=p*x+0x1.2f49b46814157p-57;
p=p*x+0x1.6827863b97d97p-53;
p=p*x+0x1.952c77030ad4ap-49;
p=p*x+0x1.ae7f3e733b81fp-45;
p=p*x+0x1.ae7f3e733b81fp-41;
p=p*x+0x1.93974a8c07c9dp-37;
p=p*x+0x1.6124613a86d09p-33;
p=p*x+0x1.1eed8eff8d898p-29;
p=p*x+0x1.ae64567f544e4p-26;
p=p*x+0x1.27e4fb7789f5cp-22;
p=p*x+0x1.71de3a556c734p-19;
p=p*x+0x1.a01a01a01a01ap-16;
p=p*x+0x1.a01a01a01a01ap-13;
p=p*x+0x1.6c16c16c16c17p-10;
p=p*x+0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
return p;}
return (expm1(x)-x-0.5*x*x)/(x*x*x);}
static double f3_50(double x) { if(x==0.) return 0x1.5555555555555p-3;
if(fabs(x)<=0x1.0000000000000p+1) { double p=0x1.71b8ef6dcf572p-66;
p=p*x+0x1.e542ba4020225p-62;
p=p*x+0x1.2f49b46814157p-57;
p=p*x+0x1.6827863b97d97p-53;
p=p*x+0x1.952c77030ad4ap-49;
p=p*x+0x1.ae7f3e733b81fp-45;
p=p*x+0x1.ae7f3e733b81fp-41;
p=p*x+0x1.93974a8c07c9dp-37;
p=p*x+0x1.6124613a86d09p-33;
p=p*x+0x1.1eed8eff8d898p-29;
p=p*x+0x1.ae64567f544e4p-26;
p=p*x+0x1.27e4fb7789f5cp-22;
p=p*x+0x1.71de3a556c734p-19;
p=p*x+0x1.a01a01a01a01ap-16;
p=p*x+0x1.a01a01a01a01ap-13;
p=p*x+0x1.6c16c16c16c17p-10;
p=p*x+0x1.1111111111111p-7;
p=p*x+0x1.5555555555555p-5;
p=p*x+0x1.5555555555555p-3;
return p;}
return (expm1(x)-x-0.5*x*x)/(x*x*x);}
double run(const double*x,size_t n,int order,int mode,int reps,double*out){ double (*f)(double)=0;
if(order==1)switch(mode){
case 0:f=f1_0;break;
case 1:f=f1_1;break;
case 2:f=f1_2;break;
case 3:f=f1_3;break;
case 4:f=f1_4;break;
case 5:f=f1_5;break;
case 6:f=f1_6;break;
case 7:f=f1_7;break;
case 8:f=f1_8;break;
case 9:f=f1_9;break;
case 10:f=f1_10;break;
case 11:f=f1_11;break;
case 12:f=f1_12;break;
case 13:f=f1_13;break;
case 14:f=f1_14;break;
case 15:f=f1_15;break;
case 16:f=f1_16;break;
case 17:f=f1_17;break;
case 18:f=f1_18;break;
case 19:f=f1_19;break;
case 20:f=f1_20;break;
case 21:f=f1_21;break;
case 22:f=f1_22;break;
case 23:f=f1_23;break;
case 24:f=f1_24;break;
case 25:f=f1_25;break;
case 26:f=f1_26;break;
case 27:f=f1_27;break;
case 28:f=f1_28;break;
case 29:f=f1_29;break;
case 30:f=f1_30;break;
case 31:f=f1_31;break;
case 32:f=f1_32;break;
case 33:f=f1_33;break;
case 34:f=f1_34;break;
case 35:f=f1_35;break;
case 36:f=f1_36;break;
case 37:f=f1_37;break;
case 38:f=f1_38;break;
case 39:f=f1_39;break;
case 40:f=f1_40;break;
case 41:f=f1_41;break;
case 42:f=f1_42;break;
case 43:f=f1_43;break;
case 44:f=f1_44;break;
case 45:f=f1_45;break;
case 46:f=f1_46;break;
case 47:f=f1_47;break;
case 48:f=f1_48;break;
case 49:f=f1_49;break;
case 50:f=f1_50;break;
}
if(order==2)switch(mode){
case 0:f=f2_0;break;
case 1:f=f2_1;break;
case 2:f=f2_2;break;
case 3:f=f2_3;break;
case 4:f=f2_4;break;
case 5:f=f2_5;break;
case 6:f=f2_6;break;
case 7:f=f2_7;break;
case 8:f=f2_8;break;
case 9:f=f2_9;break;
case 10:f=f2_10;break;
case 11:f=f2_11;break;
case 12:f=f2_12;break;
case 13:f=f2_13;break;
case 14:f=f2_14;break;
case 15:f=f2_15;break;
case 16:f=f2_16;break;
case 17:f=f2_17;break;
case 18:f=f2_18;break;
case 19:f=f2_19;break;
case 20:f=f2_20;break;
case 21:f=f2_21;break;
case 22:f=f2_22;break;
case 23:f=f2_23;break;
case 24:f=f2_24;break;
case 25:f=f2_25;break;
case 26:f=f2_26;break;
case 27:f=f2_27;break;
case 28:f=f2_28;break;
case 29:f=f2_29;break;
case 30:f=f2_30;break;
case 31:f=f2_31;break;
case 32:f=f2_32;break;
case 33:f=f2_33;break;
case 34:f=f2_34;break;
case 35:f=f2_35;break;
case 36:f=f2_36;break;
case 37:f=f2_37;break;
case 38:f=f2_38;break;
case 39:f=f2_39;break;
case 40:f=f2_40;break;
case 41:f=f2_41;break;
case 42:f=f2_42;break;
case 43:f=f2_43;break;
case 44:f=f2_44;break;
case 45:f=f2_45;break;
case 46:f=f2_46;break;
case 47:f=f2_47;break;
case 48:f=f2_48;break;
case 49:f=f2_49;break;
case 50:f=f2_50;break;
}
if(order==3)switch(mode){
case 0:f=f3_0;break;
case 1:f=f3_1;break;
case 2:f=f3_2;break;
case 3:f=f3_3;break;
case 4:f=f3_4;break;
case 5:f=f3_5;break;
case 6:f=f3_6;break;
case 7:f=f3_7;break;
case 8:f=f3_8;break;
case 9:f=f3_9;break;
case 10:f=f3_10;break;
case 11:f=f3_11;break;
case 12:f=f3_12;break;
case 13:f=f3_13;break;
case 14:f=f3_14;break;
case 15:f=f3_15;break;
case 16:f=f3_16;break;
case 17:f=f3_17;break;
case 18:f=f3_18;break;
case 19:f=f3_19;break;
case 20:f=f3_20;break;
case 21:f=f3_21;break;
case 22:f=f3_22;break;
case 23:f=f3_23;break;
case 24:f=f3_24;break;
case 25:f=f3_25;break;
case 26:f=f3_26;break;
case 27:f=f3_27;break;
case 28:f=f3_28;break;
case 29:f=f3_29;break;
case 30:f=f3_30;break;
case 31:f=f3_31;break;
case 32:f=f3_32;break;
case 33:f=f3_33;break;
case 34:f=f3_34;break;
case 35:f=f3_35;break;
case 36:f=f3_36;break;
case 37:f=f3_37;break;
case 38:f=f3_38;break;
case 39:f=f3_39;break;
case 40:f=f3_40;break;
case 41:f=f3_41;break;
case 42:f=f3_42;break;
case 43:f=f3_43;break;
case 44:f=f3_44;break;
case 45:f=f3_45;break;
case 46:f=f3_46;break;
case 47:f=f3_47;break;
case 48:f=f3_48;break;
case 49:f=f3_49;break;
case 50:f=f3_50;break;
}
if(!f)return NAN;double s=0.; for(int r=0;r<reps;r++)for(size_t i=0;i<n;i++){out[i]=f(x[i]);s+=out[i];}return s;}
