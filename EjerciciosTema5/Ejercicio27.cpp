#include <iostream>
#include <string>
using namespace std;

int main()
{

    string cadena;
    cout<<"Introduce una cadena: ";
    getline(cin,cadena);

    int a=0,e=0,i=0,o=0,u=0;

    for(int j=0;j<cadena.length();j++)
    {
        if(cadena[j]=='a')
        {
            a++;
        }

        if(cadena[j]=='e')
        {
            e++;
        }

        if(cadena[j]=='i')
        {
            i++;
        }

        if(cadena[j]=='o')
        {
            o++;
        }

        if(cadena[j]=='u')
        {
            u++;
        }
    }

    cout<<"La vocal a se repite: "<<a<<" veces."<<endl;
    cout<<"La vocal e se repite: "<<e<<" veces."<<endl;
    cout<<"La vocal i se repite: "<<i<<" veces."<<endl;
    cout<<"La vocal o se repite: "<<o<<" veces."<<endl;
    cout<<"La vocal u se repite: "<<u<<" veces."<<endl;

    return 0;
}
