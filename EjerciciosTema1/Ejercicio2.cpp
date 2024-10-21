/**
        Ejercicio 2

    Entradas: Precio del producto
    Salidas:   Precio del producto al aplicarle el IVA

**/

#include <iostream>
using namespace std;

int main()
{
    /** Variables **/

    float precio,precio1=0,iva=21;

    /** Sentencias **/

    cout<<"Introduce el precio del producto: ";
    cin>>precio;

    precio1=(precio*iva)/100;
    precio=precio+precio1;

    cout<<"El precio final del producto, teniendo en cuenta el IVA es de: "<<precio;

return 0;
}
