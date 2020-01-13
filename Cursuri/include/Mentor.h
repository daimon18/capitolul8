#ifndef MENTOR_H
#define MENTOR_H
#include <iostream>
#include <Persoana.h>
using namespace std;

class Mentor : public Persoana
{
    public:
        Mentor(string,string,string);
        void GetNumeComplet();
        void Activitate();
        void SchimbaMaterie(string);
        void SchimbaMentor(string,string);
        virtual ~Mentor();

    protected:

    private:
};

#endif // MENTOR_H
