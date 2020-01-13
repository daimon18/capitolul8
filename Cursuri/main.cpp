#include <iostream>
#include "Persoana.h"
#include "Mentor.h"
#include "Cursant.h"
using namespace std;

int main()
{
    Mentor theBest("Dumb","Dude","Spalarea aerului");
    theBest.GetNumeComplet();
    cout<<theBest.GetPrenume();
    theBest.Activitate();
    cout<<" "<<theBest.GetMaterie()<<endl;
    Cursant chuck ("Chuck","Norris","Spalarea aerului");
    chuck.GetNumeComplet();
    cout<<endl;
    cout<<chuck.GetPrenume();
    chuck.Activitate();
    cout<<"  "<<chuck.GetMaterie()<<endl;
     cout<<chuck.GetPrenume()<<" "<<chuck.Absolva()<<endl;
    chuck.SetNotaTeme(6);
    chuck.SetNotaTeste(7);
    chuck.SetNotaProiect(6);
    cout<<chuck.GetPrenume()<<" "<<chuck.Absolva()<<endl;
    theBest.SchimbaMentor("Dude","Dumber");
    theBest.SchimbaMaterie("Numaratul oilor");
    theBest.GetNumeComplet();
    cout<<theBest.GetPrenume();
    theBest.Activitate();
    cout<<" "<<theBest.GetMaterie()<<endl;
    Cursant obiWan("Obi Wan","Kenobi","Numaratul oilor");
    obiWan.GetNumeComplet();
    cout<<endl;
    cout<<obiWan.GetPrenume();
    obiWan.Activitate();
    cout<<" "<<obiWan.GetMaterie()<<endl;
    cout<<obiWan.GetPrenume()<<" "<<obiWan.Absolva()<<endl;
    obiWan.SetNotaTeme(10);
    obiWan.SetNotaTeste(10);
    obiWan.SetNotaProiect(10);
    cout<<obiWan.GetPrenume()<<" "<<obiWan.Absolva()<<endl;

    return 0;
}
