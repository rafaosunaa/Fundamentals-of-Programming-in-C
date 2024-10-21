/**
        Ejercicio 5
    Entradas: nota de practicas,de teoria y de participacion
    Salidas: nota final

**/

#include <iostream>
using namespace std;

int main()
{
    /** Variables **/
    float nPractica,nTeoria,nParticipacion,nFinal=0;

    /** Sentencias **/
    cout<<"Introduzca su nota de practicas: ";
    cin>>nPractica;
    cout<<"Introduzca su nota de teoria: ";
    cin>>nTeoria;
    cout<<"Introduzca su nota de participacion: ";
    cin>>nParticipacion;

    nFinal=(nPractica*0.3)+(nTeoria*0.6)+(nParticipacion*0.1);

    cout<<"Tu nota final es: "<<nFinal;

return 0;
}
