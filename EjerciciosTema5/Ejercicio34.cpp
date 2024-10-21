#include <iostream>
using namespace std;

const int tam=1000;

struct persona
{
    string nombre;
    float peso;
    float altura;
};

int main()
{
    persona v[tam];
    int t;
    float imc=0;
    do
    {
        cout<<"Introduce el numero de personas que se van a introducir: ";
        cin>>t;
    }while(t>1000 && t<0);

    for(int i=0;i<t;i++)
    {
        cout<<"Introduce el nombre de la persona: "<<endl;
        cin>>v[i].nombre;
        cout<<"Introduce el peso de la persona: "<<endl;
        cin>>v[i].peso;
        cout<<"Introduce la altura de la persona: "<<endl;
        cin>>v[i].altura;
    }

    float mayor=0;
    float menor=1000;
    float menorA=1000;
    int posicion,posicion1,posicion2;
    for(int i=0;i<t;i++)
    {
       cout<<"Nombre: "<<v[i].nombre<<endl;
       cout<<"Altura: "<<v[i].altura<<endl;
       cout<<"Peso: "<<v[i].peso<<endl;
       imc=v[i].peso/(v[i].altura*v[i].altura);
       cout<<"IMC: "<<imc<<endl;
       cout<<endl;
       if(mayor<imc)
       {
           mayor=imc;
           posicion=i;

       }
       if(menor>imc)
       {
           menor=imc;
           posicion1=i;
       }
       if(menorA<v[i].altura)
       {
           menorA=v[i].altura;
           posicion2=i;
       }
    }

    cout<<"La persona con mayor imc es: "<<v[posicion].nombre<<endl;

    float a;
    cout<<"Introduce una altura: ";
    cin>>a;
    for(int i=0;i<t;i++)
    {
        if(a<v[i].altura)
        {
            cout<<v[i].nombre<<"Supera la altura introducida por el usuraio"<<endl;
        }
    }

    if(posicion1==posicion2)
    {
        cout<<"La persona con menor IMC es tambien la mas pequeña";
    }else{
        cout<<"La persona con menor IMC no es la mas pequeña";
    }

    return 0;
}
