#include "Cilindru.h"
#include "cerc.h"

Cilindru::Cilindru(double a,double b):_baza{a},_inaltime{b}
{

}

  Cilindru::~Cilindru()
{
    //dtor
}

double Cilindru::Volum()
{
    return(_baza.arie()*_inaltime);
}

double Cilindru::Arie()
{
    return (2*_baza.arie()+2*3.14*_baza.GetRaza()*_inaltime);
}
