/**
        Ejercicio 12
    Entrada: 5 datos
    Salida: desviacion tipica de esos cinco valores

**/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    /** Variables **/
    float n1,n2,n3,n4,n5;
    double media=0,sumatorio=0,desviacion=0;

    /** Sentencias **/
    cout<<"Introduce el primer valor: ";
    cin>>n1;
    cout<<"Introduce el segundo valor: ";
    cin>>n2;
    cout<<"Introduce el tercer valor: ";
    cin>>n3;
    cout<<"Introduce el cuarto valor: ";
    cin>>n4;
    cout<<"Introduce el quinto valor: ";
    cin>>n5;

    media=(n1+n2+n3+n4+n5)/5;
    sumatorio= (n1-media)*(n1-media)+(n2-media)*(n2-media)+(n3-media)*(n3-media)+(n4-media)*(n4-media)+(n5-media)*(n5-media);
    desviacion=sqrt(sumatorio*0.25);

    cout<<"La desviacion tipica es: "<<desviacion;
return 0;
}
