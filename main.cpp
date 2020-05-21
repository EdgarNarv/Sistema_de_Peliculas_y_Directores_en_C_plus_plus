#include <iostream>
#include "Pelicula.h"
#include "Director.h"
using namespace std;

void menu()
{
    cout<<"......Menu Pelicula......"<<endl;
    cout<<". 1.Registrar           ."<<endl;
    cout<<". 2.Editar              ."<<endl;
    cout<<". 3.Eliminar            ."<<endl;
    cout<<". 4.Consultar Pelicula  ."<<endl;
    cout<<". 5.Consultar Director  ."<<endl;
    cout<<"........................."<<endl;
}
int main()
{
    Pelicula pelicula[10];
    char nombre[100];
    char nacionalidad[100];
    int edad;
    char titulo[100];
    Director director;
    int annio;
    char genero[100];
    char productora[100];
    int minutos;
    int op=0;;
    int num;
    int peliculasC=0;
    bool on=true;

    while (on==true)
    {
        menu();
        cin>>op;
        switch (op)
        {
            case 1:
                cout<<"..........Registro..........."<<endl;
                cout<<endl;
                cout<<"Titulo:"<<endl;
                cin>>titulo;
                cout<<"Annio:"<<endl;
                cin>>annio;
                cout<<"Genero:"<<endl;
                cin>>genero;
                cout<<"Productora:"<<endl;
                cin>>productora;
                cout<<"Minutos:"<<endl;
                cin>>minutos;
                cout<<endl;
                cout<<"...........Director.........."<<endl;
                cout<<endl;
                cout<<"Nombre:"<<endl;
                cin>>nombre;
                cout<<"Nacionalidad:"<<endl;
                cin>>nacionalidad;
                cout<<"Edad:"<<endl;
                cin>>edad;
                cout<<"No. Pelicula: "<<peliculasC<<endl;
                cout<<endl;
                pelicula[peliculasC]=Pelicula (titulo,Director(nombre,nacionalidad,edad),annio,genero,productora,minutos);

                peliculasC++;
                cout<<".....Pelicula Registrada....."<<endl;
                break;
            case 2:
                cout<<"...........Editar............"<<endl;
                cout<<endl;
                for (int x=0;x<peliculasC;x++)
                {
                    cout<<"Pelicula: "<<x<<endl;
                    pelicula[x].toString();
                    cout<<"................................."<<endl;
                }
                cout<<endl;
                cout<<"Ingrese el No. de pelicula:"<<endl;
                cin>>num;
                cout<<endl;
                cout<<"Titulo:"<<endl;
                cin>>titulo;
                cout<<"Annio:"<<endl;
                cin>>annio;
                cout<<"Genero:"<<endl;
                cin>>genero;
                cout<<"Productora:"<<endl;
                cin>>productora;
                cout<<"Minutos:"<<endl;
                cin>>minutos;
                cout<<endl;
                cout<<"...........Director.........."<<endl;
                cout<<endl;
                cout<<"Nombre:"<<endl;
                cin>>nombre;
                cout<<"Nacionalidad:"<<endl;
                cin>>nacionalidad;
                cout<<"Edad:"<<endl;
                cin>>edad;
                cout<<endl;
                pelicula[num]=Pelicula (titulo,Director(nombre,nacionalidad,edad),annio,genero,productora,minutos);
                cout<<".......Pelicula editada......."<<endl;

                break;
            case 3:
                cout<<"...........Eliminar............"<<endl;
                cout<<endl;
                for (int x=0;x<peliculasC;x++)
                {
                    cout<<"Pelicula: "<<x<<endl;
                    pelicula[x].toString();
                    cout<<"................................."<<endl;
                }

                cout<<endl;
                cout<<"Ingrese el No. de pelicula:"<<endl;
                cin>>num;
                pelicula[num]=Pelicula();
                cout<<".......Pelicula Eliminada........"<<endl;
                break;
            case 4:
                cout<<"........Consultar Pelicula......."<<endl;
                cout<<endl;
                cout<<"Ingrese el numero de pelicula:"<<endl;
                cin>>num;
                cout<<endl;
                cout<<"................................"<<endl;
                cout<<endl;
                pelicula[num].toString();
                cout<<endl;
                cout<<"................................."<<endl;
                break;
            case 5:
                cout<<"........Consultar Director......."<<endl;
                cout<<endl;
                cout<<"Ingrese el numero de pelicula:"<<endl;
                cin>>num;
                cout<<endl;
                cout<<"................................"<<endl;
                cout<<endl;
                pelicula[num].consultarDirector();
                cout<<endl;
                cout<<"................................."<<endl;
                break;
            default:
                cout<<".........Menu Principal.........."<<endl;
                on=false;
                break;
        }
    }


    return 0;
}
