/**Ejercicio 28**/

#include <iostream>
#include <string>
using namespace std;

struct datos{
string nombre;
string DNI;
int edad;
};

const int tMax=100;

datos personas[tMax];

void persona()
{
    int i=0;
    cout<<"Introduce 0 para dejar de introducir datos de personas";
    cout<<"Introduce el nombre de la persona: ";
    cin>>personas[i].nombre;
    while(personas[i]!=0){
        cout<<"Introduce el DNI de la persona: ";
        cin>>personas[i].DNI;
        cout>>"Introduce la edad de la persona: ";
        cin>>personas[i].edad;
        i++;
        cout<<"Introduce 0 para dejar de introducir datos de personas";
        cout<<"Introduce el nombre de la persona: ";
        cin>>personas[i].nombre;
    }
}
