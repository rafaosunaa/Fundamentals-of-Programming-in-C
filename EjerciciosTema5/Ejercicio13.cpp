/**
        Ejercicio 12

    Entradas: leer dos vectores de caracteres

    Salidas:   juntar los dos vectores en uno,manteniendo el primer vector primero y el segundo,segundo


**/
#include <iostream>
using namespace std;

int main ()
{
	int const TAM1 = 4;
	int const TAM2 = 3;
	char v1[TAM1] = { 'a', 'b', 'c', 'd'};
	char v2[TAM2] = { 'e', 'f', 'g' };
	char r[TAM1+TAM2]; // vector resultado de la concatenación

	int ir = 0; // índice de trabajo en el vector r
	for (int i = 0; i < TAM1; i++) {
             r[ir] = v1[i];
             ir++;
	}
	for (int i = 0; i < TAM2; i++) {
            r[ir] = v2[i];
            ir++;
	}
	cout << "El vector contatenado es: ";
	for (int i = 0; i < ir; i++)
            cout << r[i];

	return 0;
}

