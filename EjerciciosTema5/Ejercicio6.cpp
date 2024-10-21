/**
        Ejercicio 6

    Entradas: definir un vector y leer un entero

    Salidas:    decir si ese entero se encuentra en el vector


**/

#include <iostream>
using namespace std;

int main()
{
    /**Variables**/
        const int tMax=4;
        int v[tMax]={1,2,3,4},a,b=0;

    /**Sentencias**/

    cout<<"Introduce un numero: ";
    cin>>a;

    for(int i=0;i<tMax;i++)
    {
        if(v[i]==a)
        {
            b++;
        }
    }

    if(b!=0)
    {
        cout<<"El numero coincide con elementos del vector";
    }else
        {
            cout<<"El numero  NO coincide con elementos del vector";
        }


return 0;
}
