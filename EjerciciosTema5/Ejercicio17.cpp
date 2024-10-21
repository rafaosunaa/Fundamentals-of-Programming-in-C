/** Programa: diagonal_principal
 Entradas: Una matriz 3x3 de números (realmente se define en el programa)
 Salidas:  La diagonal principal de la matriz
 * */

#include <iostream>

using namespace std;

int main ()
{
	/**VAriables**/
	int m[3][3]={1,2,3,
                4,5,6,
                7,8,9};
	/**Sentencias**/
	for(int i=0;i<3;i++)
	{
        cout<<m[i][i];
	}

	return 0;
}
