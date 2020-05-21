#ifndef DIRECTOR_H
#define DIRECTOR_H


class Director
{
    public://metodos
        Director();
        Director(char[],char[],int);
        void toString();

    private://atributos
        char nombre[100];
        char nacionalidad[100];
        int edad;
};

#endif // DIRECTOR_H
