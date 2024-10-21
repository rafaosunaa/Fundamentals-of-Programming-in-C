/**
    Ejercicio 12
    Entrada: leer un entero
    Salida: resultado para cada apartado

**/

#include <iostream>
using namespace std;

int main()
{
    /** Variables **/
    int i=1,n,f=0,s1=0,s2=0,s3=0,s4=0,p1=0;
    char opcion;
    /**Sentencias**/
    cout<<"Introduce un valor (i): ";
    cin>>i;
    cout<<"Introduce otro valor(n): ";
    cin>>n;
    cout<<"A)Sumatorio 1"<<endl<<"B)Sumatorio 2"<<endl<<"C)Productorio 3"<<endl<<"D)Sumatorio 3"<<endl<<"E)Sumatorio 4"<<endl;
    cout<<"Elige una opcion: ";
    cin>>opcion;

    switch(opcion)
    {
        case 'A':
            cout<<"Sumatorio= "<<i<<" ";
            for(f;f<(n-1);f++)
            {
                s1=s1+i;
                cout<<s1<<" ";
            }

            break;

        case 'B':
            cout<<"Sumatorio= "<<i<<" ";
            for(f;f<(n-1);f++)
            {
                s2=(s2*i)-1;
                cout<<s2<<" ";
            }
            break;

        case 'C':
            cout<<"Productorio= "<<i<<" ";
            for(f;f<(n-1);f++)
            {
                p1=(p1*i);
                cout<<p1<<" ";
            }
            break;

        case 'E':
            cout<<"Sumatorio= "<<i<<" ";
            for(f;f<(n-1);f++)
            {
                s4=s4+(i*i);
                cout<<s4<<" ";
            }
            break;
    }

return 0;
}
