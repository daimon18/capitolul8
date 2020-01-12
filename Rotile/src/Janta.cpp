#include "Janta.h"
Janta::Janta()
{
    _nrPrezoane=5;
    _diametru=14;
    _matJanta=aluminiu;
}
Janta::Janta(unsigned short a, int b, MatJanta c)
{
    _nrPrezoane=a;
    _diametru=b;
    _matJanta=c;
}
void Janta::SchimbaJanta(MatJanta var1, int var2)
{
    _matJanta=var1;
    _diametru=var2;
}

Janta::~Janta()
{
    //dtor
}
