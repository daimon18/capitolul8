#include "Roata.h"
Roata::Roata()
{

}
Roata::Roata(Anvelopa a,Janta b)
{
    _anvelopa=a;
    _janta=b;
}

   bool Roata::IsFlat()
   {
       if (_presiune<1) return true;
        else return false;
   }

   void Roata::SchimbaRoata(Anvelopa a, Janta b)
   {
       _anvelopa=a;
       _janta=b;
   }

    void Roata::UmflaRoata(double _presiune)
     {
        UmflaAnvelopa(_presiune); //posibila greseala
     }

      TipAnvelopa Roata::GetTipAnvelopa()
      {
          return _tipAnvelopa;
      }
Roata::~Roata()
{
    //dtor
}
