/**
        Ejercicio 8
    Entradas: leer valores mientras no esten entre 20-30 o sea el 0
    Salidas: ---

**/

#include <iostream>
using namespace std;

int main()
{
    /**VAriables**/
    int n;

    /**Sentencias**/

    do
    {
        cout<<"Introduce un numero: ";
        cin>>n;
    }while(n != 0 && !(n>=20 && n<=30));
    cout<<"El numero "<<n<<" finaliza el programa";
return 0;
}
