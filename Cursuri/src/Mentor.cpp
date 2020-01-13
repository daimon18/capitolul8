#include "Mentor.h"

Mentor::Mentor(string a,string b,string c): Persoana(a,b,c) //pasam membrii catre constructorul clasei Persoana
{
    //ctor
}
    void Mentor::GetNumeComplet()
    {
        cout<<"Mentor: ";
        Persoana::GetNumeComplet();
        cout<<endl;
    }
        void Mentor::Activitate()
        {
            cout<<" preda ";
            Persoana::Activitate();
            cout<<endl;
        }
            void Mentor::SchimbaMaterie(string var)
            {
                GetMaterie()=var;
            }
                void Mentor::SchimbaMentor(string var1,string var2)
                {
                    GetPrenume()=var1;
                    Persoana::SetNume(var1);
                }

Mentor::~Mentor()
{
    //dtor
}
