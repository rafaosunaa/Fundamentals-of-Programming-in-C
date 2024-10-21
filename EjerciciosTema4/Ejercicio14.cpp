/**
        Ejercicio 14
        Entradas: leer un numero entero no negativo(n), base y altura tambien n
        SAlidas: triangulo rectangulo creado con asteriscos

**/

#include <iostream>
using namespace std;

int main()
{
    /**Variables **/
    int n;
    int x,i;

    /**SEntencias**/
    do {
        cout << "Introduce un entero positivo: ";
        cin >> n;
    } while (n <= 0);

        for ( i=0; i < n; i++) {
            for ( x=0 ; x <= i; x++)
                cout << "* ";
                cout<<endl;
        }



return 0;
}
