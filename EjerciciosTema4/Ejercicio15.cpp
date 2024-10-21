/**
                Ejercicio 15
        Entradas: leer limite diario(kg),leer el peso de las presas, un valor 0 indica el final
        SAlidas: mostrar peso total despues de cada pesaje, cuando se supera el limite saldra un mensaje y se terminara el programa

**/

#include <iostream>
using namespace std;

int main()
{
    /**Variables**/
    double limite,peso,pesoT=0;

#include <iostream>
using namespace std;

int main()
{
    /**VAriables**/

    double diario,presa,tPresa=0;


    /**Sentencias**/

    do
    {
         cout<<"introduce el limitie diario: ";
        cin>>diario;
    }while(diario == 0);

    while(presa!=0)
    {
       cout<<"Introduce el valor de la presa: ";
       cin>>presa;
       tPresa=tPresa+presa;
        cout<<tPresa<<" kg."<<endl;
        if(tPresa>diario)
        {
            presa=0;
            cout<<endl;
            cout<<"Has superado el limite diario de "<<diario<<" en :"<<tPresa-diario<<" kg.";
        }
    }






return 0;
}
