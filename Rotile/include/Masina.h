#ifndef MASINA_H
#define MASINA_H
#include "Roata.h"
#include <string>
#include <iostream>
using namespace std;

class Masina:public Roata
{
    public:
        Masina();
        Masina(Roata par1,Roata par2,Roata par3,Roata par4);
        void AfiseazaStareRoti(string NumeMasina);
        void UmflaRoti(double _presiune);
        void UmflaRoata(int a, double presiune);
        void SchimbaRoti(Roata R1,Roata R2,Roata R3,Roata R4);
        void SchimbaRoata (int a,Roata b);
        void AfiseazaTipCauciucuri(string NumeMasina);
        virtual ~Masina();

    protected:

    private:
        Roata _roti[4];
        short VerificaRoti();

};

#endif // MASINA_H
