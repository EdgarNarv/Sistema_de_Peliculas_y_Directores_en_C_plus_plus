#include "Director.h"
#include <iostream>
#include <cstring>

using namespace std;
Director::Director()
{
    //ctor
}

Director::Director(char nombre[100],char nacionalidad[100],int edad)
{
    strcpy(this->nombre,nombre);
    strcpy(this->nacionalidad,nacionalidad);
    this->edad=edad;
}

void Director::toString()
{
    cout<<endl;
    cout<<"...........Director.........."<<endl;
    cout<<"Nombre: "<<this->nombre<<endl;
    cout<<"Nacionalidad: "<<this->nacionalidad<<endl;
    cout<<"Edad: "<<this->edad<<endl;
    cout<<"............................."<<endl;
    cout<<endl;

}
