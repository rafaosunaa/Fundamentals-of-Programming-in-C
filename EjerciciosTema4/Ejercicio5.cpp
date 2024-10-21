/**
        Ejercicio 5
    Entrada: leer numeros hasta que se introduzca un 0
    Salida: mostrar la cantidad de valores obtenidos hasta introducir el 0


**/

#include <iostream>
using namespace std;

int main()
{
    /**Variables**/
    int n,i=0;

    /**Sentencias**/

    cout<<"Al introducir el 0 se saldra del programa, el contador no tiene en cuenta el 0"<<endl;
    do
    {

        cout<<"Introduce un numero: ";
        cin>>n;
        i++;
    }while(n!=0);

    cout<<"El valor de numeros introducidos es: "<<i-1;

return 0;
}
