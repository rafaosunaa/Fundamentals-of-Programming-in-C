/**
        Ejercicio 13
    Entradas:   valor de terminos a mostrar
    SAlidas:    resltado de II

**/

#include <iostream>
using namespace std;

#include <cmath>

int main()
{
    /**VAriables**/

    int nTerminos;
    double sumatorio=0;

    /**Sentencias**/

    cout<<"Introduce el numero de terminos a mostrar: ";
    cin>>nTerminos;

    for(int i=1;i<=nTerminos;i++)
        {
            sumatorio=sumatorio+6/double(i*i);
        }
    cout<<"El valor aproximado de II es: "<<sqrt(sumatorio);

return 0;
}
