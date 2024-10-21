/**
        Ejercicio 8
    Entradas: valor de x e y
    Salidas: resultado de la funcion


**/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    /** Variables **/

    double funcion=0,x,y;

    /**Setencias **/

    cout<<"Introduce un valor para x: ";
    cin>>x;
    cout<<"Introduce un valor para y: ";
    cin>>y;

    funcion=sqrt(x)/(y*y-1);

    cout<<"El valor de la funcion es: "<<funcion;

return 0;
}
