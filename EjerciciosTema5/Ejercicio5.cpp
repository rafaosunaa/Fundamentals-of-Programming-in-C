/**
        Ejercicio 5

    Entradas: leer elementos de un vector

    Salidas:    decir cual elemento es el mayor


**/

#include <iostream>
using namespace std;

int main()
{
    /**Variables**/
    int const tMax=1000;
    int v[tMax];
    int i=0,tam,mayor=0;

    /**Sentencias**/

    do
    {
        cout<<"I,ntroduce el tamaño del vector: ";
        cin>>tam;

    }while(tam == 0 || tam>tMax);


    for(int i=0;i<tam;i++)
    {
        cout<<"Introduce un valor al vector: ";
        cin>>v[i];

        if(v[i]>mayor)
        {
            mayor=v[i];
        }
    }

    cout<<"El numero mayor es: "<<mayor;



return 0;
}
