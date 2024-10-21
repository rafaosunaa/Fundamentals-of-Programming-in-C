/**
        Ejercicio 7
    Entradas:cada 4 horas tome la temperatura exterior durante 24horas (leer 6 temperaturas)
    Salidas: temperatura media del dia, la mas alta y la mas baja
**/

#include <iostream>
using namespace std;

int main()
{
    /**VAriables **/
    double t,tMedia=0,tMedia1=0,tMax=0,tMin=0;
    int i=0;
    const int nT=5;

    /**Sentencias**/

    cout<<"Han pasado 4 horas, introduce la temperatura: ";
    cin>>t;
    tMax=t;
    tMin=t;
    for(i;i<nT;i++)
    {
        cout<<"Han pasado 4 horas, introduce la temperatura: ";
        cin>>t;
        tMedia=tMedia+t;

        if(t>tMax)
        {
            tMax=t;
        }

            if(t<tMin)
            {
                tMin=t;
            }
    }

    tMedia1=tMedia/6;
    cout<<"La temperatura media es: "<<tMedia1<<endl;
    cout<<"la temperatura mas alta es: "<<tMax<<endl;
    cout<<"la temperatura mas baja es: "<<tMin;

return 0;
}
