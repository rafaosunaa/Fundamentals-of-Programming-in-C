/**
        Ejercicio 5
    Entradas: dos numeros
    Salidas: me indica cua les mayor

**/

#include <iostream>
using namespace std;

int main()
{

    /** VARiables**/
    int n1,n2;

    /**Sentencias **/
    cout<<"Introduce un numero: ";
    cin>>n1;
    cout<<"Introduce otro numero: ";
    cin>>n2;

    if(n1<n2)
    {
        cout<<"El numero "<<n2<<" es mayor que el numero "<<n1;
    }else
        {
            cout<<"El numero "<<n1<<" es mayor que el numero "<<n2;
        }


return 0;
}
