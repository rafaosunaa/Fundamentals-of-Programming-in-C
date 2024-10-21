#include <iostream>
using namespace std;

int suma(int v[],int tam)
{
    int suma=0;
    int a;
    for(int i=0;i<tam;i++)
    {
        cout<<"Introduce un numero: ";
        cin>>a;
        suma+=a;
    }
    return suma;
}

int main()
{
    const int  tMax=100;
    int v[tMax];
    int tam;

    do
    {
        cout<<"Introduce el numero de numeros que quieres sumar: ";
        cin>>tam;

    }while(tam<0 && tam>tMax);

    cout<<"El resultado de la suma del vector es: "<<suma(v,tam);

}
