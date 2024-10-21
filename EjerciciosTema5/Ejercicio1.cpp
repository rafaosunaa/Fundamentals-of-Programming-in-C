/**
        Ejercicio 1

    Entradas: leer numeros y almacenarlos en vector

    Salidas:    mostrar para cada posicion del vector el numero almacenado


**/

#include <iostream>
using namespace std;

int main()
{
    /**Variables**/
    const int tMax = 100;
    double v[tMax];
    int tam;


    /**Sentencias**/

    do
    {
        cout<<"Define el tamaño del vector: ";
        cin>>tam;

    }while(tam == 0 || tam>tMax);

    for(int i=0;i<tam;i++)
    {
        cout<<"Introduce un valor para la posicion "<<i<<" del vector:";
        cin>>v[i];
    }

    for(int i=0;i<tam;i++)
    {
        cout<<"En la posicion "<<i<<" del vector se encuentra el valor: "<<v[i]<<endl;
    }

return 0;
}
