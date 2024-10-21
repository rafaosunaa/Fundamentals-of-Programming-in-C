/**
        Ejercicio 11
    Entradas:Valor de la factura y numero de años
    Salidas: factura total

**/

#include <iostream>
using namespace std;

int main()
{
    /** Variables **/
    double factura,fTotal=0,aumento=0;
    int anos;

    /**Sentencias**/

    cout<<"Introduce el valor de la factura de este año: ";
    cin>>factura;
    cout<<"Introduce el numero de annos: ";
    cin>>anos;

    aumento=(0.03*factura)*anos;
    fTotal=factura+aumento;

    cout<<"Dentro de "<<anos<<" el valor de la factura sera: "<<fTotal;

return 0;
}
