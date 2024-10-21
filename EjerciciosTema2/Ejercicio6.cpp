/**
        Ejercicio 6
    Entradas: nota final de 4 alumnos
    Salidas: nota media

**/

#include <iostream>
using namespace std;

int main()
{
    /** Variables **/
    float n1,n2,n3,n4,nMedia=0;

    /** Sentencias **/

    cout<<"Introduzca la nota fina del primer alumno: ";
    cin>>n1;
    cout<<"Introduzca la nota fina del segundo alumno: ";
    cin>>n2;
    cout<<"Introduzca la nota fina del tercer alumno: ";
    cin>>n3;
    cout<<"Introduzca la nota fina del cuarto alumno: ";
    cin>>n4;

    nMedia=(n1+n2+n3+n4)/4;

    cout<<"La nota media es: "<<nMedia;

return 0;
}
