/**

        Ejercicio 13
    Entrada: importe de la cajetilla y dinero introducido
    Salida: monedas devueltas

**/

#include <iostream>
using namespace std;

int main()
{
    /** VAriables**/

    int precio,dinero,sobra=0;
    int m50,m20,m10,m5;

    cout<<"Introduce el valor de la cajetilla en centimos: ";
    cin>>precio;
    cout<<"Introduce el dinero introducido por ti en centimos: ";
    cin>>dinero;

    sobra=dinero-precio;
    m50=sobra/50;
    sobra=sobra%50;
    m20=sobra/20;
    sobra=sobra%20;
    m10=sobra/10;
    sobra=sobra%10;
    m5=sobra/5;

    cout<<"Cambio: "<<endl;
    cout<<"Monedas de 50: "<<m50<<endl;
    cout<<"Monedas de 20: "<<m20<<endl;
    cout<<"Monedas de 10: "<<m10<<endl;
    cout<<"Monedas de 5: "<<m5<<endl;



return 0;
}
