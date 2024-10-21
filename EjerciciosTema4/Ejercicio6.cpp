/**
            Ejercicio 6


    Entradas: numeros del 1-10
    Salidas: la suma de los cuadrados de esos numeros


**/

#include <iostream>
using namespace std;

int main()
{
    /**Variables**/
    int n=1,i=1,suma=0;

    /**SEntencias**/

    for(i;i<=10;i++)
    {
        suma=suma+(n*n);
        n++;
    }
    cout<<"La suma de los cuadrados del 1 al 10 es: "<<suma;

return 0;
}
