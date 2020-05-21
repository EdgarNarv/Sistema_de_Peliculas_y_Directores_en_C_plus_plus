#ifndef PELICULA_H
#define PELICULA_H
#include "Director.h"

class Pelicula
{
    public://metodos
        Pelicula();
        Pelicula(char[],Director,int,char[],char[],int);
        void consultarDirector();
        void toString();
    private://atributos
        char titulo[100];
        Director director;
        int annio;
        char genero[100];
        char productora[100];
        int minutos;
        /*nombre, director (objeto tipo Persona), año, género, productora, minutos
Y los siguientes métodos:
· registrar(), editar(), eliminar(), consultarDirector(), toString()*/

};

#endif // PELICULA_H
