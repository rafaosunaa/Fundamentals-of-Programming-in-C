#include <iostream>
using namespace std;

void ordenado(int v[],int tam)
{
    int a=0;
    for(int i=0;i<tam;i++)
    {
        if(v[i]>v[i+1])
        {
            a++;
        }
    }
    if(a==tam)
    {
        cout<<"El vector esta ordenado crecientemente";
    }
}

int main()
{
    const int  tMax=4;
    int v[4]={1,2,3,4};
    ordenado(v,tMax);

}
