/**
        Ejercicio 1

    Entradas: leer numeros y almacenarlos en vector

    Salidas:    mostrar el vector en orden inverso


**/

#include <iostream>
using namespace std;

int main()
{
    /**Variables**/

    const int tMax=1000;
    double v[tMax];
    int tam,i=0;

    /**Sentencias**/

    do
    {
        cout<<"Indica el tamaño del vector: ";
        cin>>tam;

    }while(tam == 0 || tam>tMax);

    for(i;i<tam;i++)
    {
        cout<<"Introduce un valor para la posicion "<<i<<" del vector:";
        cin>>v[i];
    }

    cout<<"El vector en orden es: "<<endl;
    for(int i=0;i<tam;i++)
    {
        cout<<"El  valor de la posicion "<<i<<" del vector es: "<<v[i]<<endl;
    }


    cout<<"El vector en orden inverso: "<<endl;
    for(int i=tam-1;i>=0;i--)
    {
        cout<<"El  valor de la posicion "<<i<<" del vector es: "<<v[i]<<endl;
    }



return 0;
}
