#include "Persoana.h"

Persoana::Persoana(string a,string b,string c): _prenume(a), _nume(b), _materie(c)
{
    //ctor
}
    void Persoana::Activitate()
    {
        cout<<"cursul ";
    }
        string Persoana::GetMaterie()
        {
            return _materie;
        }
            string Persoana::GetPrenume()
            {
                return _prenume;
            }
                void Persoana::GetNumeComplet()
                {
                    cout<<_prenume<<"  "<<_nume;
                }
                    void Persoana::SetPrenume(string a)
                    {
                        _prenume=a;
                    }
                    void Persoana::SetNume(string b)
                    {
                        _nume=b;
                    }
                        void Persoana::SetMaterie(string c)
                        {
                            _materie=c;
                        }

Persoana::~Persoana()
{
    //dtor
}
