/**
        Ejercicio 4
    Entrada: entero del 1-10
    Salida: su tabla de multiplicar

**/

#include <iostream>
using namespace std;

int main()
{
    /**Variables**/
    int i=0,n,tabla=0;

    /**Sentencias**/

        cout<<"Introduce un numero del 1 al 10: ";
        cin>>n;


        cout<<"La tabla de multiplicar de "<<n<<" es: "<<endl;

    for(i;i<=10;i++)
    {
        cout<<n<<" x "<<i<<" = "<<n*i<<endl;
    }



return 0;
}
