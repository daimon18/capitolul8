#include <iostream>
#include "cerc.h"
#include "Cilindru.h"
using namespace std;

int main()
{
    Cilindru chilly(2,5);
    cout<<"volumul lui chilly: "<<chilly.Volum()<<endl;
    cout<<"Aria lui chilly: "<<chilly.Arie()<<endl;
    Cilindru *hipster=new Cilindru[2]
    {
        Cilindru{2,5}, Cilindru{5,2}
    };
    cout<<"Volumul primului element din hipster este: "<<hipster[0].Volum()<<endl;
    cout<<"Volumul secundului element din hipster este: "<<hipster[1].Volum()<<endl;
    cout<<"Aria primului element din hipster este: "<<hipster[0].Arie()<<endl;
    cout<<"Aria secundului element din hipster este: "<<hipster[1].Arie()<<endl;
    return 0;
}
