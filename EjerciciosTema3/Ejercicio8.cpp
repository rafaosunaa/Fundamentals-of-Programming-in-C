/**
    Ejercicio 8
    Entradas: valor entero
    Salidas: determinar si es par o impar

**/

#include <iostream>
using namespace std;

int main()
{
    /**Variables **/
    int n,par=0;
    /**Sentencias**/

    cout<<"Introduce un numero: ";
    cin>>n;

    if(n%2==0)
    {
        cout<<"El numero introducido es par";
    }else
        {
            cout<<"El numero introducido es impar";
        }

return 0;
}
