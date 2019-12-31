#include "cerc.h"

cerc::cerc(double InitRaza)//constructor cu un parametru double care să inițializeze membrul raza
{
    _raza=InitRaza;

}

cerc::~cerc()
{
    //dtor
}

double cerc::arie()//metoda Arie care să returneze aria cercului folosind formula „PI * R^2”
{
   return 3.14* _raza* _raza;
}
    double cerc::GetRaza()//getter pentru _raza
    {
        return _raza;
    }
