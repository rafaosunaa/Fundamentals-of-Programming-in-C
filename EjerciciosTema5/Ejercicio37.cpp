#include <iostream>
#include <string>
using namespace std;

const int tam=1000;

struct candidato
{
    string nombre;
    string dni;
    string fecha;
};

int main()
{
    candidato v[tam];
    int t;
    do
    {
        cout<<"Introduce el numero de candidatos: ";
        cin>>t;
    }while(t<tam && t>=3);

    for(int i=0;i<t;i++)
    {
        cout<<"Introduce el nombre del candidato: "<<endl;
        cin>>v[i].nombre;
    }




    return 0;
}
