/**
        Ejercicio 3
    Entradas: edad,sexo,altura en metros
    Salidas:    edad,sexo y altura

**/

#include <iostream>
using namespace std;

int main()
{
    /** Variables**/

    int edad;
    char sexo;
    double altura;

    /** Sentencias**/

    cout<<"Introduce tu edad: ";
    cin>>edad;
    cout<<"Introduce tu sexo, masculino(M) o femenino(F): ";
    cin>>sexo;
    cout<<"Introduce tu altura en metros: ";
    cin>>altura;

    cout<<"Tu edad es: "<<edad<<endl;
    cout<<"Tu sexo es: "<<sexo<<endl;
    cout<<"Tu altura es: "<<altura<<endl;
return 0;
}
