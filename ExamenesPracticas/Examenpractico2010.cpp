#include <iostream>
#include <string>
using namespace std;

const int tMax=1000;
struct ninios
{
    string nombre;
    int edad;
    int telefono;

};

void datos(ninios guarderia[],int tam)
{

    for(int i=0;i<tam;i++)
    {
        cout<<"Introduce el nombre: ";
        cin>>guarderia[i].nombre;
        do
        {
            cout<<"Introduce la edad en meses: ";
            cin>>guarderia[i].edad;
        }while(guarderia[i].edad<1 && guarderia[i].edad>36);

        cout<<"Introduce el numero de telefono: ";
        cin>>guarderia[i].telefono;

    }


}

void mostrar(ninios guarderia[],int tam)
{
    cout<<"Los datos de los niños registrados son: "<<endl;
    for(int i=0;i<tam;i++)
    {
        cout<<"El nombre del ninio es: "<<guarderia[i].nombre<<endl;
        cout<<"La edad de l ninio es: "<<guarderia[i].edad<<endl;
        cout<<"El telefono de los padres es: "<<guarderia[i].telefono<<endl;
    }
}

int contacto(ninios guarderia[],int tam,string nombre)
{
    int t;
    for(int i=0;i<tam;i++)
    {
        if(nombre==guarderia[i].nombre)
        {
                t=guarderia[i].telefono;
        }

    }
    return t;
}

void name(ninios guarderia[],int tam,int edad,string n,int& t)
{

    int t1=0;
    for(int i=0;i<tam;i++)
    {
        if(guarderia[i].edad>edad || guarderia[i].edad==edad)
        {
                n[t1]=guarderia[i].nombre;
                t1++;
        }

    }

}


int main()
{
ninios guarderia[tMax];
int tam;
do
{
cout<<"Introduce la cantidad de ninios que vas a registrar: ";
cin>>tam;
}while(tam<0 && tam>100);

datos(guarderia,tam);
mostrar(guarderia,tam);
string nombre;
cout<<"Introduce un nombre de un niño del registro: "<<endl;
cin>>nombre;



for(int i=0;i<1;i++)
{
    cout<<contacto(guarderia,tam,nombre);
}

int edad;
cout<<"introduce una edad de un niño registrado: "<<endl;
cin>>edad;


string n[tMax];

for(int i=0;i<tam;i++)
{
   cout<<n[i];
}


return 0;
}
