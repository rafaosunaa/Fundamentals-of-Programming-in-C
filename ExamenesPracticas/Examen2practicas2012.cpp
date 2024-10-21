#include <iostream>
using namespace std;

#include <string>

const int tMax=4;
struct clientes
{
    int codigo;
    string nombre;
    char sexo;

};

struct viajes
{
    int codigoCliente;
    float precio;
    string destino;

};

struct lista
{
    string nombre;
    float cantidad;

};


int posicion(int cod,clientes clientes[],int tMax)
{
    int n,j=0;
    for(int i=0;i<tMax;i++)
    {

       n=clientes[i].codigo;
       if(n==cod)
       {
        return j;
       }
       j++;
    }
    return -1;

}

void leerViajes(clientes clientes[],int tMax,viajes viaje[])
{
    for(int i=0;i<tMax;i++)
    {

        do
        {
            cout<<"Introduce el codigo del viaje: ";
            cin>>viaje[i].codigoCliente;
        }while(posicion(viaje[i].codigoCliente,clientes,tMax)==(-1));

        do
        {
            cout<<"Introduce el precio del viaje: ";
            cin>>viaje[i].precio;
        }while(viaje[i].precio==0);

        cout<<"Introduce tu ciudad de destino: ";
        getline(cin>>ws,viaje[i].destino);
    }

}

void lista(lista lista1[],tMax,viajes viaje[],clientes clientes[])
{
    int a=0;
    float cantidad=0;
    for(int i=0;i<tMax;i++)
    {
        cantidad=cantidad+viaje[i].precio;
        lista[a].nombre=clientes[i].nombre;
    }
}


int main()
{
int codigo;
clientes clientes[tMax]={{234,"Juan Gonzales Ruiz",'M'},{12,"Ana criado Melero",'F'},{432,"David Prieto Medina"},{22,"Alberto Salmeron Sanchez",'M'}};

cout<<"Introduce un codigo: ";
cin>>codigo;

if(posicion(codigo,clientes,tMax)!=(-1))
{
    cout<<"La posicion del cliente es: "<<posicion(codigo,clientes,tMax)<<endl;
}else
{
    cout<<"No existe dicho codigo"<<endl;
}

viajes viaje[tMax];

leerViajes(clientes,tMax,viaje);
cout<<"Los viajes escogidos son: "<<endl;
for(int i=0;i<tMax;i++)
{
    cout<<viaje[i].codigoCliente<<" ";
    cout<<viaje[i].precio<<" ";
    cout<<viaje[i].destino<<endl;
}

lista lista1[tMax];
lista()
cout<<"Lista de clientes y total gastado: ";
for(int i=0;i<tMax;i++)
{
    cout<<lista1[i].nombre<<" ";
    cout<<lista1[i].cantidad;
}


return 0;
}
