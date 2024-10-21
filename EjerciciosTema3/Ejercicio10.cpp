/**
    Ejercicio 9
    Entradas: un caracter
    Salidas: determinar si es una vocal minuscula o mayuscula o no
**/

#include <iostream>
using namespace std;

int main()
{
    /**Variables **/
    char n;


    /**Sentencias**/

    cout<<"INtroduce un caracter: ";
    cin>>n;

    if(n == 'a'|| n =='e' ||n == 'i' || n =='o'||n == 'u')
    {
        cout<<"EL caracter introducido es una vocal minuscula";
    }else
        {
            if(n == 'A' || n =='E' ||n == 'I' ||n == 'O' || n =='U')
                {
                    cout<<"EL caracter introducido es una vocal mayuscula";
                }else
                    {
                        cout<<"EL caracter introducido no es una vocal";
                    }
        }

return 0;
}
