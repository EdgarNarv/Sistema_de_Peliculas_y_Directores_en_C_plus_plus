#include "Pelicula.h"
#include "Director.h"
#include <cstring>
#include <iostream>

using namespace std;

Pelicula::Pelicula()
{
    //ctor
}

Pelicula::Pelicula(char titulo[100],Director director,int annio,char genero[100],char productora[100],int minutos)
{
    strcpy(this->titulo,titulo);
    this->director=director;
    this->annio=annio;
    strcpy(this->genero,genero);
    strcpy(this->productora,productora);
    this->minutos=minutos;
    //dtor
}
void Pelicula::toString()
{
    cout<<"Titulo: "<<this->titulo<<endl;
    this->director.toString();
    cout<<"Annio: "<<this->annio<<endl;
    cout<<"Genero: "<<this->genero<<endl;
    cout<<"Productora: "<<this->productora<<endl;
    cout<<"Minutos: "<<this->minutos<<endl;
}
void Pelicula::consultarDirector()
{
    this->director.toString();
}
