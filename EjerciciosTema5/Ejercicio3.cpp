/**
        Ejercicio 3

    Entradas: definir un vector

    Salidas:    suma de sus elementos


**/

#include <iostream>
using namespace std;

int main()
{
    /**Variables**/
        const int tam=4;
        int v[tam]={2,3,4,1},suma=0;


    /**Sentencias**/

    for(int i=0;i<tam;i++)
    {
        suma=suma+v[i];
    }
    cout<<"La suma de los elentos del vector es: "<<suma;

return 0;
}
