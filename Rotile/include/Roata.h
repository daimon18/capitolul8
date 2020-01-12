#ifndef ROATA_H
#define ROATA_H
#include "Anvelopa.h"

class Roata:public Anvelopa
{
    public:
        Roata();
        Roata(Anvelopa,Janta);
            bool IsFlat();
          void SchimbaRoata(Anvelopa a,Janta b);
          void UmflaRoata(double _presiune);
          TipAnvelopa GetTipAnvelopa();
        virtual ~Roata();

    protected:

    private:
        Anvelopa _anvelopa;
        Janta _janta;
};

#endif // ROATA_H
