#include "Clasa.h"
#include <iostream>
using namespace std;
Clasa::Clasa()
{
    //ctor
}
Clasa::Clasa(unsigned short a,unsigned short b,char c)
{
    _an=a;
    _orePeSapt=b;
    _litera=c;
}

Clasa::~Clasa()
{
    //dtor
}
    void Clasa::AfiseazaOre()
    {
        cout<<"Clasa a "<<_an<<_litera<<" : "<<_orePeSapt<<" ore / saptamana"<<endl;
    }
    unsigned short Clasa::Get_orePeSapt()
    {
        return _orePeSapt;
    }
