/**
        Ejercicio 4

    Entradas: definir un vector

    Salidas:    resultado de la suma acumulada de los elemntos del vector


**/

#include <iostream>
using namespace std;

int main()
{
    /**Variables**/
    const int tMax=4;
    int v[tMax]={2,3,1,4},suma=0;

    /**Sentencias**/

    for(int i=0;i<tMax;i++)
    {
        suma=suma+v[i];
        cout<<"Suma: "<<suma<<endl;
    }



return 0;
}
