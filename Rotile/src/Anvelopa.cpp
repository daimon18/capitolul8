#include "Anvelopa.h"

Anvelopa::Anvelopa()
{
    _brand= "Michelin";
    _presiune=2.2;
    _tipAnvelopa=vara;
}
Anvelopa::Anvelopa(string a,float b,TipAnvelopa c)
{
    _brand=a;
    _presiune=b;
    _tipAnvelopa=c;
}
        float Anvelopa::GetPresiune()
    {
        return _presiune;
    }

        TipAnvelopa Anvelopa::GetTipAnvelopa()
    {
        return _tipAnvelopa;
    }

        void Anvelopa::UmflaAnvelopa(float m)
    {
        if(m>3)m=3;
            else _presiune=m;
    }
Anvelopa::~Anvelopa()
{
    //dtor
}
