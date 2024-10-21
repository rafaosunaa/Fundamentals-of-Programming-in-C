/**
        Ejercicio 11
    Entrada: leer dos enteros x e y
    Salida: solucion de x elevado y

**/

#include <iostream>
using namespace std;

int main()
{
    /**VAriables **/
    int x,y,operacion=1,i=0;

    /**Sentencias**/
    cout<<"Introduzca el valor de la base: ";
    cin>>x;
    cout<<"Introduzca el valor del exponente: ";
    cin>>y;

    for(i;i<y;i++)
    {
        operacion=operacion*x;

    }
    cout<<"El resultado es: "<<operacion;

}
