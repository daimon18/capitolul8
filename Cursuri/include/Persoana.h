#ifndef PERSOANA_H
#define PERSOANA_H
#include <string>
#include <iostream>
using namespace std;

class Persoana
{
    public:
        Persoana(string,string,string);
        void Activitate();
        string GetMaterie();
        string GetPrenume();
        virtual ~Persoana();

    protected:
        void GetNumeComplet();
        void SetPrenume(string);
        void SetNume(string);
        void SetMaterie(string);

    private:
        string _prenume;
        string _nume;
        string _materie;
};

#endif // PERSOANA_H
