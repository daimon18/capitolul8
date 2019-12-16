#ifndef CILINDRU_H
#define CILINDRU_H
#include "cerc.h"

class Cilindru
{
    public:
        Cilindru(double RazaBazei, double Inaltime);
        virtual ~Cilindru();

    protected:

    private:
        cerc _baza;
        double _inaltime;
};

#endif // CILINDRU_H
