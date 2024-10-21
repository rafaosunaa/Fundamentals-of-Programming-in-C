/**
        Ejercicio 7

    Entradas: definir elementos del vector

    Salidas:     si existe alg ´ un n ´ umero ´
en el vector cuyo valor equivale a la suma del resto de numeros del vector

**/

#include <iostream>
using namespace std;

int main()
{
    /**Variables**/
       const int tMax=4;
       int v[tMax]={10,2,5,3},suma=0,a=0;

    /**Sentencias**/

    for(int i=0;i<tMax;i++)
    {
        suma=suma+v[i];
    }

    for(int i=0;i<tMax;i++)
    {
        if(v[i]==suma-v[i])
        {
            cout<<"El elemento "<<i<<" que es "<<v[i]<<" es igual a la suma del resto:"<<suma<<endl;
        }else
            {
                a++;
            }
    }

        if(a=0)
        {
            cout<<"No existe ninguno elemento igual a la suma del resto";
        }
return 0;
}
