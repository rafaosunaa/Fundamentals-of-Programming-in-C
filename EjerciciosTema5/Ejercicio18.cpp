/** Programa: diagonal_principal
  Entradas: Una matriz 3x3 de números leer
    Salidas:  determinante de la matriz
 * */

#include <iostream>

using namespace std;

int main ()
{
    /**VAriable**/
	double m[3][3];


    /**Sentencias**/
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<"Introduce un valor para la fila: "<<i<<" .Introduce un valor para la columna: "<<j<<" : " ;
            cin>>m[i][j];

        }
    }
    double det = m[0][0]*m[1][1]*m[2][2];
	det =  det +m[0][1]*m[1][2]*m[2][0];
	det = det + m[1][0]*m[2][1]*m[0][2];
	det = det- m[2][0]*m[1][1]*m[0][2];
	det =  det-m[0][0]*m[2][1]*m[1][2];
	det = det- m[2][2]*m[1][0]*m[0][1];

	cout<<det;




	return 0;
}
