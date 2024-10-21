/**

    Ejercicio 9
    Entradas: valores a,b,c para la ecuacion
    Salidas: solucion ecuacion

**/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    /** Varibles**/
    int a,b,c;
    double x=0,x1=0;

    /**Sentencias**/

    cout<<"Introduce un valor a: ";
    cin>>a;
    cout<<"Introduce un valor de b: ";
    cin>>b;
    cout<<"Introduce un valor de c: ";
    cin>>c;

    x=(-b+sqrt(b*b - 4*a*c))/(2*a);
    x1=(-b-sqrt(b*b-4*a*c))/(2*a);

    cout<<"La primera solucion es: "<<x<<" .La segunda solucion es: "<<x1;

return 0;
}
