#ifndef CURSANT_H
#define CURSANT_H

#include <Persoana.h>


class Cursant : public Persoana
{
    public:
        Cursant(string,string,string);
        void GetNumeComplet();
        void Activitate();
        void SetNotaTeme(double);
        void SetNotaTeste(double);
        void SetNotaProiect(double);
        string Absolva ();
        virtual ~Cursant();

    protected:

    private:
        double _notaTeme;
        double _notaTeste;
        double _notaProiect;
        bool HasGrades();
        bool IsAverageOk();
};

#endif // CURSANT_H
