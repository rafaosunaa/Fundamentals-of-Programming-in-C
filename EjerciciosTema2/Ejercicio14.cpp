/**
    Ejercicio 14
    Entrada: dos valores para dos variables
    Salida: intercambiar valor de la variables
**/

#include <iostream>
using namespace std;

int main()
{
    /**Variables**/
    float x,y,a;

    /**Sentencias**/
    cout<<"Introduce un valor x: ";
    cin>>x;
    cout<<"Introduce un valor y: ";
    cin>>y;

    a=x;
    x=y;
    y=a;

    cout<<"El valor de x es: "<<x<<endl;
    cout<<"El valor de y es: "<<y;


return 0;
}
