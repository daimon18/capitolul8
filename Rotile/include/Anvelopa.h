#ifndef ANVELOPA_H
#define ANVELOPA_H
#include "Janta.h"
#include <string>
#include <iostream>
using namespace std;

    enum TipAnvelopa{iarna,vara,universal};
class Anvelopa:public Janta
{
    public:
        Anvelopa();
        void AfiseazaTipCauciucuri(string NumeMasina);
            Anvelopa(string a,float b,TipAnvelopa c);
                float GetPresiune();
                    TipAnvelopa GetTipAnvelopa();
                        void UmflaAnvelopa(float m);
        virtual ~Anvelopa();

    protected:
        double _presiune;
         TipAnvelopa _tipAnvelopa;

    private:
         string _brand;

};

#endif // ANVELOPA_H
