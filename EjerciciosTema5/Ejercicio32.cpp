#include <iostream>
#include <string>
using namespace std;

int main()
{
    string cadena;
    int a=0;
    cout<<"Introduzca una cadena de caracteres: ";
    getline(cin,cadena);

    for(int i=0;i<cadena.length();i++)
    {
       a++;
       if(cadena[i]==' ')
       {
           a--;
       }
    }

    cout<<"La cadena tiene "<<a<<" caracteres.";


return 0;
}
