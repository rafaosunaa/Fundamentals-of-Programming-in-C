#include <iostream>
using namespace std;

void cambio(float v[],int tam)
{

    for(int i=0;i<tam;i++)
    {
        if(v[i]>=0)
        {
            v[i]=v[i]*(-1);

        }else{
            v[i]=v[i]*(-1);

        }
    }

    for(int i=0;i<tam;i++)
    {
        cout<<v[i]<<" , ";
    }
}

int main()
{
    float v[4]={1,-2,3,-4};
    cambio(v,4);


return 0;
}
