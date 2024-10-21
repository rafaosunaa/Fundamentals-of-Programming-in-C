/**
        Ejercicio10
    Entrada: lee caracteres hasta que se introduzca + ó -
    Salida: indicar si todos los caracteres han sido vocales minisculas

**/

#include <iostream>
using namespace std;

int main()
{
    /**Variables**/
    char c;
    int n=0;

    /**Sentencias**/

    do
    {
        cout<<"Introduce un caracter: ";
        cin>>c;
        if(c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u')
        {
            n++;
        }
    }while(c != '+' && c != '-');

    n=n-1;

    if(n==0)
    {
        cout<<"Los caracteres introducidos son todos vocales minusculas";
    }else
    {
        cout<<"No todos los caracteres introducidos son vocales minusculas";
    }

return 0;
}
