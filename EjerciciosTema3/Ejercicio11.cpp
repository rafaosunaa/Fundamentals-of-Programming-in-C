/**
    Ejercicio 11
    Entradas: una edad
    Salidas: determinar si esta entre el rango 18-25
**/

#include <iostream>
using namespace std;

int main()
{
    /**Variables **/

    int edad;

    /**Sentencias**/
    cout<<"Introduce una edad: ";
    cin>>edad;

    if(edad>18 && edad<25)
    {
        cout<<"La edad se encuentra entre el rango de 18 años y 25 años";
    }else
        {
            cout<<"La edad no se encuentra entre el rango de 18 años y 25 años";
        }


return 0;
}
