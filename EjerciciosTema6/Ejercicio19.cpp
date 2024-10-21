#include <iostream>
using namespace std;

void producto(double m1[3][3],double m2[3][3],double[3][3])


for(int fila=0;fila<3;fila++)
{
    for(int columna=0;columna<3;columna++)
    {
        for(int i=0;i<3;i++)
        {
            r[fila][columna]+=m1[fila][i]*m2[i][columna];
        }
    }
}

int main()
{
    double m1[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
	double m2[3][3] = { 1, 2, 3,
	                    4, 5, 6,
	                    7, 8, 9 };
	double r[3][3];

	producto(m1,m2,r);
	for (int f = 0; f < 3; f++) {
		for (int c = 0; c < 3; c++)
			cout << r[f][c] << ' ';
		cout << endl;
	}
}
