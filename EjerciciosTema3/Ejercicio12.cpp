/**
        Ejercicio12
        ENtrada: tres numeros y un cuarto numero
        Salida: determinar si el cuarto coincide con los otros 3

**/

#include <iostream>
using namespace std;

int main()
{
    /** VAriables **/
    int n1,n2,n3,n4;

    /** SEntencias **/

    cout<<"introduce el 1� numero: ";
    cin>>n1;
    cout<<"introduce el 2� numero: ";
    cin>>n2;
    cout<<"introduce el 3� numero: ";
    cin>>n3;
    cout<<"introduce el 4� numero: ";
    cin>>n4;

    if(n4==n1 || n4==n2 || n4==n3)
        {
            cout<<"El cuarto numero introducido coinde con algun de los otros numeros";
        }else
            {
                cout<<"El cuarto numero no coincide con ninguno de los otros";
            }
return 0;
}
