/**
        Ejercicio 9

    Entradas: leer los valores del vector

    Salidas:    calcular desviacion tipica

**/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    /**Variables**/
        const int tMax=100;
        double v[tMax],media=0,media1=0,sumatorio=0;
        int n;

    /**Sentencias**/

    do
    {
        cout<<"Indica el tamaño del vector: ";
        cin>>n;
    }while(n == 0 || n>tMax);

    for(int i=0;i<n;i++)
    {
        cout<<"Introduce un valor: ";
        cin>>v[i];
        media=media+v[i];
    }
    media1=media/n;

    for(int i=0;i<n;i++)
    {
        sumatorio=(v[i]-media1)*(v[i]-media1)+sumatorio;
    }

    cout<<"La desvicacion tipica es: "<<sqrt(sumatorio/(n-1));



return 0;
}
