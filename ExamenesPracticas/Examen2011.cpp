#include <iostream>
#include <string>
using namespace std;

const int tMax=100;
struct personas
{
    string nombre;
    char sexo;
    int edad;
};


void muestra(personas persona[],int tam)
{
    for(int i=0;i<tam;i++)
    {
        cout<<"Nombre: "<<persona[i].nombre<<" .Sexo: "<<persona[i].sexo<<" .Edad: "<<persona[i].edad<<endl;
    }

}

float media(personas persona[],int tam)
{
    float media=0,suma=0;
    for(int i=0;i<tam;i++)
    {
        suma=suma+persona[i].edad;
    }
    media=suma/tam;
    return media;
}

void sex(personas persona[],int tam,char sexo,string nombre[])
{
    int j=0;
    for(int i=0;i<tam;i++)
    {
        if(sexo==persona[i].sexo)
        {
            nombre[j]=persona[i].nombre;
            cout<<nombre;
            j++;
        }
    }

}


int main()
{

personas persona[tMax];
int tam;

do
{
 cout<<"Introduce el tamaño del vector: ";
 cin>>tam;
}while(tam>tMax && tam<0);

for (int i=0;i<tam;i++)
{
    cout<<"Introduce un nombre: "<<endl;
    cin>>persona[i].nombre;
    do
    {
        cout<<"Introduce un sexo: "<<endl;
        cin>>persona[i].sexo;
    }while(persona[i].sexo!='M' && persona[i].sexo!='F');

    cout<<"introduce una edad: "<<endl;
    cin>>persona[i].edad;

}

muestra(persona,tam);

cout<<"la media de edad de las personas es: "<<media(persona,tam)<<endl;

string nombre[tMax];
char sexo;
cout<<"Introduce un sexo: "<<endl;
cin>>sexo;
cout<<"las personas de ese sexo son: "<<endl;
sex(persona,tam,sexo,nombre);


return 0;
}
