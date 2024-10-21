/**
    Ejercicio 9
    Entradas: un caracter
    Salidas: determinar si es una vocal minuscula o mayuscula
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
        cout<<"EL caracter introducido es una vocal mayuscula";
                }

return 0;
}
