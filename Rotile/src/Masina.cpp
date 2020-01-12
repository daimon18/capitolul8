#include "Masina.h"

Masina::Masina()
{
    //ctor
}
Masina::Masina(Roata par1,Roata par2,Roata par3,Roata par4)
{
    _roti[0]=par1;
    _roti[1]=par2;
    _roti[2]=par3;
    _roti[3]=par4;
}

short Masina::VerificaRoti()
{
   for (int i=0; i<4; i++)
        if (_roti[i].IsFlat()==1) return i;
    return -1;
}

    void Masina::AfiseazaStareRoti(string NumeMasina)
{
    int a;
   cout<<NumeMasina;
   a=VerificaRoti();
   if (a<0) cout<<" are toate rotile in regula"<<endl;
   else cout<<"are pana la roata "<<a++<<" ."<<endl;
}
     void Masina::UmflaRoti(double _presiune)
     {
         for (int i=0; i<4; i++)
         {
             _roti[i].UmflaRoata(_presiune);
         }
     }
     void Masina::UmflaRoata(int a, double presiune)
     {
        _roti[a].UmflaRoata(presiune);
     }
     void Masina::SchimbaRoti(Roata R1,Roata R2,Roata R3,Roata R4)
     {
         _roti[0]=R1;
         _roti[1]=R2;
         _roti[2]=R3;
         _roti[3]=R4;
     }
     void Masina::SchimbaRoata(int a,Roata b)
     {
         _roti[a]=b;
     }
     void Masina::AfiseazaTipCauciucuri(string NumeMasina)
     {
         cout<<NumeMasina<<" are cauciucuri";
         if ((_roti[0].GetTipAnvelopa()==_roti[1].GetTipAnvelopa())&&(_roti[1].GetTipAnvelopa()==_roti[2].GetTipAnvelopa())&&(_roti[2].GetTipAnvelopa()==_roti[3].GetTipAnvelopa()))
            switch (_roti[0].GetTipAnvelopa())
         {
             case 0:cout<<" de vara"<<endl;break;
             case 1:cout<<" de iarna"<<endl;break;
             case 2:cout<<" all season"<<endl;break;
         }
         else cout<<" mixte";
     }

Masina::~Masina()
{
    //dtor
}
