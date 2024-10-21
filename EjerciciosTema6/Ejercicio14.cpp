#include <iostream>
using namespace std;

int impar(int v[],int tam)
{
    int r[tam];
    int j=0;
    for(int i=0;i<tam;i++)
    {
        if((v[i]%2)==1)
        {
            r[j]=v[i];
            j++;
        }
    }
    return j;
}

int main()
{
     const int  tMax=100;
    int v[tMax];
    int tam;

    do
    {
        cout<<"Introduce el numero de elementos del vector: ";
        cin>>tam;

    }while(tam<0 && tam>tMax);

    for(int i=0;i<tam;i++)
    {
        cout<<"Introduce un numero: ";
        cin>>v[i];
    }

    int impr[tMax];
    int tImpar=impar(v,tam);
    for(int i=0;i<tImpar;i++)
    {
        cout<<impr[i];
    }
}
