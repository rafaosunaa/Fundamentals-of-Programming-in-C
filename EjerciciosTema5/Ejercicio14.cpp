#include <iostream>

using namespace std;

int main ()
{
	int const TAM1 = 10;
	int const TAM2 = 5;
	int v1[TAM1] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19 };
	int v2[TAM2] = { 1, 2, 3, 4, 5 };
	int r[TAM1+TAM2];

	int i1 = 0, i2 = 0, ir = 0;  // índices de trabajo en los vectores
	while (i1 < TAM1 && i2 < TAM2) {
		if (v1[i1] < v2[i2]) {
			r[ir] = v1[i1];
			ir++;
			i1++;
		} else if (v2[i2] < v1[i1]) {
			r[ir] = v2[i2];
			ir++;
			i2++;
		} else {
			r[ir] = v1[i1];
			ir++;
			i1++;
			i2++;
		}
	}

	if (i1 < TAM1) {
		for (int i = i1; i < TAM1; i++) {
			r[ir] = v1[i];
			ir++;
		}
	} else {
		for (int i = i2; i < TAM2; i++) {
			r[ir] = v2[i];
			ir++;
		}
	}

	for (int i = 0; i < ir; i++)
		cout << r[i] << '\n';
	return 0;
}
