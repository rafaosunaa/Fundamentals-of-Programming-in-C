#include <iostream>
#include <string>
using namespace std;

int main()
{
    string nombre;
    int a=0;
    const int tam=5;
    string v[tam]={"rafa","carmen","maria","javier","juan ramon"};

    cout<<"Introduce un nombre: ";
    getline(cin,nombre);

    for(int i=0;i<tam;i++)
    {
        if(nombre==v[i])
        {
            a++;
        }
    }

    if(a!=0)
    {
        cout<<"El nombre coincide";
    }else{

        cout<<"El nombre no coincide";
    }

    return 0;
}
