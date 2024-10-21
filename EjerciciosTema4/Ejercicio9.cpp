/**
    Ejercicio 9

**/

#include <iostream>
using namespace std;

int main()
{
    /**VAriables**/
    int n,i=0,cero=0;

    /**Sentencias**/

    for(i;i<10;i++)
    {
        cout<<"Introduce un numero: ";
        cin>>n;

        if(n==0)
        {
            cero++;
        }

    }

    if(cero != 0)
    {
        cout<<"El numero cero ha sido introducido "<<cero<<" veces .";
    }else
        {
            cout<<"El numero cero no ha sido introducido";
        }


return 0;
}
