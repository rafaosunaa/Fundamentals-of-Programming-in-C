/**
        Ejercicio 8

    Entradas: definir elementos del vector

    Salidas:   determinar el 1º y 2º elemento mayor del vector

**/
#include <iostream>

using namespace std;

int main ()
{
    /**VAriables**/
	const int N = 4;
	double v[N] = { 1,2,3,4};
	double mayor, segundoMayor;


	/**Sentencias**/
	if (v[0] > v[1])
    {
		mayor = v[0];
		segundoMayor = v[1];
	} else
        {
            mayor = v[1];
            segundoMayor = v[0];
        }

	for (int i = 2; i < N; i++)
        {
		if (v[i] > mayor) {
			segundoMayor = mayor;
			mayor = v[i];
		} else if (v[i] > segundoMayor)
            {
                segundoMayor = v[i];
            }
        }

	cout << "El mayor es " << mayor << endl;
	cout << "El segundo mayor es " << segundoMayor << endl;

	return 0;
}

