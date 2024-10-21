/**
        Ejercicio 1

    Entradas: leer dos numeros

    Salidas: suma, resta, multuplicacion y division de dichos numeros

**/

#include <iostream>
using namespace std;

int main()
{
    /** Variables **/
    float n1,n2;
    float suma=0,resta=0,multiplicacion=0,division=0;

    /** Sentencias **/
    cout<<"Introduce el primer numero: ";
    cin>>n1;
    cout<<"Introduce el segundo numero: ";
    cin>>n2;

    suma=n1+n2;
    resta=n1-n2;
    multiplicacion=n1*n2;
    division=n1/n2;

    cout<<"Resultados:"<<endl;
    cout<<"Suma: "<<suma<<endl;
    cout<<"Resta: "<<resta<<endl;
    cout<<"Multiplicacion: "<<multiplicacion<<endl;
    cout<<"Division: "<<division<<endl;

return 0;
}
