#include "Cursant.h"

Cursant::Cursant(string a,string b,string c): Persoana(a,b,c)
{
    _notaTeme=0;
    _notaTeste=0;
    _notaProiect=0;
}
    void Cursant::GetNumeComplet()
    {
        cout<<"Cursant: ";
        Persoana::GetNumeComplet();
        cout<<endl;
    }
        void Cursant::Activitate()
        {
            cout<<"studiaza ";
            Persoana::Activitate();
            cout<<endl;
        }
            void Cursant::SetNotaTeme(double a)
            {
                _notaTeme=a;
            }
            void Cursant::SetNotaTeste(double a)
            {
                _notaTeste=a;
            }
                void Cursant::SetNotaProiect(double a)
                {
                    _notaProiect=a;
                }
                  bool Cursant::HasGrades()
                  {
                      if ((_notaTeme!=0) && (_notaTeste!=0) && (_notaProiect!=0)) return true;
                      else return false;
                  }
                    bool Cursant::IsAverageOk()
                    {
                        if((_notaTeme+_notaTeste+_notaProiect)/3>=7) return true;
                        else return false;
                    }
                        string Cursant::Absolva()
                        {
                            if(HasGrades()==0) return "nu are note suficiente";
                            else if (IsAverageOk()==0) return "nu absolva";
                            else  return "absolva";
                        }
Cursant::~Cursant()
{
    //dtor
}
