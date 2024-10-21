/**
        Ejercicio 7
    Entrada: dos catetos de un triangulo
    Salidas: la hipotenusa del triangulo

**/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    /** VAriables **/
    int cateto1,cateto2,hipotenusa=0;

    /** Sentencias **/
    cout<<"Introduce el valor del primer cateto: ";
    cin>>cateto1;
    cout<<"Introduce el valor del segundo cateto: ";
    cin>>cateto2;

    hipotenusa=sqrt(cateto1*cateto1+cateto2*cateto2);

    cout<<"La hipotenusa es: "<<hipotenusa;

return 0;
}
